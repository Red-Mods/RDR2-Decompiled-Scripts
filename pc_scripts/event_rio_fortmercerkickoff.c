//Decompiled with MagicRDR v1.0
//Function Count : 162
//Statics Count : 198
//Natives Count : 398
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
	bool bLocal_29 = false;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
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
	var uLocal_59 = 11;
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
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	bool bLocal_122 = false;
	int iLocal_123 = 0;
	bool bLocal_124 = false;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	struct<2> Local_130 = { 0, 0 } ;
	var uLocal_132 = 0;
	float fLocal_133 = 0.0f;
	bool bLocal_134 = false;
	int iLocal_135 = 0;
	struct<31> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_123 = 0;
	iLocal_127 = 0;
	Local_130 = Vector(-2664.0f, 67,263f, 3436.0f);
	fLocal_133 = 1.0f;
	bLocal_134 = false;
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_135 = 0;
	bLocal_124 = false;
	while (!IS_EXITFLAG_SET())
	{
		GET_POSITION(&Global_54076, &Var0);
		if (IS_ACTOR_VALID(&bLocal_29))
		{
			GET_POSITION(&bLocal_29, &Var2);
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "MissionEnd"))
		{
			if (IS_ACTOR_VALID(&bLocal_29))
			{
				if (VDIST(Var0, Var2) < 150.0f)
				{
					iLocal_135 = 7;
				}
			}
		}
		if (iLocal_135 <= 2 && iLocal_135 > 5)
		{
			if (!IS_ACTOR_ALIVE(&bLocal_29) && !Function_161(uLocal_125, 2097152))
			{
				if (Function_160(&bLocal_29, &Global_54076))
				{
					Function_159("fom_fte_Obj_AssistantDead", 0, -1.0f, 2, 0, 0);
					iLocal_135 = 7;
				}
				else if (Function_159("fom_fte_Obj_AssistantDead", 0, -1.0f, 2, 0, 0))
				{
					iLocal_135 = 7;
				}
				DECOR_SET_BOOL(&Global_54076, "HelperIsDead", 1);
				Function_158(&uLocal_125, 2097152);
			}
		}
		if (IS_ACTOR_VALID(&bLocal_29) && !Global_6634)
		{
			if ((VDIST(Var0, Var2) < 150.0f && iLocal_135 <= 3) && iLocal_135 > 5)
			{
				Function_159("fom_fte_Help_BuddyAbandoned", 0, -1.0f, 1, 0, 0);
				DECOR_SET_BOOL(&Global_54076, "AbandonedLeon", 1);
				iLocal_135 = 7;
			}
			else if (VDIST(Var0, Var2) < 250.0f && iLocal_135 > 3)
			{
				iLocal_135 = 7;
			}
		}
		if (!Function_161(uLocal_125, 0x4000000))
		{
			if (DECOR_CHECK_EXIST(&Global_54076, "FOM_Boss_Launched"))
			{
				if (!DECOR_CHECK_EXIST(&Global_54076, "GangLeadersDead"))
				{
					if (Function_156(&uLocal_43, 0x3f800000, 0x42960000, 1, 1))
					{
						if (!FIRE_IS_ACTOR_ON_FIRE(&bLocal_29))
						{
							Function_155();
						}
						Function_158(&uLocal_125, 0x4000000);
					}
				}
			}
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "CutsceneWork"))
		{
			iLocal_135 = 7;
		}
		switch (iLocal_135)
		{
			case 0x00000000:
				if (!Function_153(&(Global_43791[1])))
				{
					iLocal_135 = 7;
				}
				else
				{
					iVar5 = 0;
					iVar4 = 0;
					while (iVar4 < 17)
					{
						if (Function_152(&(Global_11752[iVar42]), &(Global_13888[iVar43])))
						{
							iVar5++;
							iVar4 = 100;
						}
						iVar4++;
					}
					if (iVar5 == 0)
					{
						iLocal_135 = 7;
					}
					else
					{
						uLocal_35 = CREATE_LAYOUT("RioFomStarter");
						Function_151(&uLocal_59, 278, 3, 1);
						Function_151(&uLocal_59, 977, 3, 1);
						Function_149(&uLocal_59, "action_areas", 10, 0);
						Function_151(&uLocal_59, 245, 3, 1);
						Function_149(&uLocal_59, "whore_and_john", 1, 0);
						Function_149(&uLocal_59, "climb_help", 1, 0);
						Function_149(&uLocal_59, "open_big_door", 1, 0);
						Function_149(&uLocal_59, "$/fragments/p_gen_crateCover03x", 0, 1);
						Function_149(&uLocal_59, "$/fragments/p_gen_crateWeapons04x", 0, 1);
						Function_149(&uLocal_59, "fmercer_treasure", 5, 0);
						Function_149(&uLocal_59, "custom/fmercer_treasure", 8, 0);
						Function_145(Function_146("fortMercer", "guardTowerProps01", 7), 0);
						Function_145(Function_146("fortMercer", "guardTowerProps01", 8), 0);
						Function_145(Function_146("fortMercer", "leftWing", 1), 0);
						Function_145(Function_146("fortMercer", "leftWing", 2), 0);
						Function_145(Function_146("fortMercer", "leftWing", 3), 0);
						Function_145(Function_146("fortMercer", "leftWing", 4), 0);
						Function_158(&uLocal_126, 1);
						Function_158(&uLocal_126, 16);
						Function_158(&uLocal_126, 4);
						uLocal_55 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_35, Function_144(), 4,203895E-45f, Vector(-2656,444f, 67,263f, 3407,237f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 30.0f, 10.0f));
						Function_143(StackVal, Vector(-2656,444f, 67,263f, 3407,237f), 4.0f);
						iLocal_135 = 1;
					}
				}
				break;
			
			case 0x00000001:
				if (Function_138(&uLocal_59))
				{
					Function_132();
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_29, 0,2f);
					iVar6 = (RAND_INT_RANGE(0, 10000) % 100);
					if (iVar6 <= 33)
					{
						AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_06", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
					}
					else if (iVar6 <= 66)
					{
						AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
					}
					else
					{
						AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_09", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
					}
					iLocal_135 = 2;
				}
				break;
			
			case 0x00000002:
				if (Function_131())
				{
					iLocal_123 = 0;
					uVar7 = FIND_NAMED_LAYOUT("FortMercer_AA_Layout");
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_29)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_29));
					}
					Function_130();
					iLocal_135 = 4;
				}
				else if (Function_75(&uLocal_55))
				{
					iLocal_135 = 3;
				}
				break;
			
			case 0x00000003:
				Function_46();
				if (IS_ACTOR_VALID(&Global_54076) && !iLocal_127)
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "pst"))
					{
						iLocal_127 = 1;
						SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, 191,507f, 0.0f), 0);
					}
				}
				if (Function_131())
				{
					iLocal_123 = 0;
					uVar8 = FIND_NAMED_LAYOUT("FortMercer_AA_Layout");
					iLocal_135 = 4;
				}
				else if (!IS_VOLUME_VALID(&uLocal_53))
				{
					uLocal_53 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_BackOutside");
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_53) && GET_TASK_STATUS(&bLocal_29, 19) != 2)
					{
						TASK_PRIORITY_SET(&bLocal_29, true);
						TASK_USE_GRINGO(&bLocal_29, &uLocal_47, "UseCase1", 1, 1);
					}
				}
				break;
			
			case 0x00000004:
				Function_42();
				if (bLocal_134)
				{
					if (!Function_161(uLocal_125, 32768))
					{
						if (IS_ACTOR_VALID(&uLocal_31))
						{
							if (IS_ACTOR_ALIVE(&uLocal_31))
							{
								TELEPORT_ACTOR(&uLocal_31, &Local_130, 1, 1, 1);
								MEMORY_CONSIDER_AS(&uLocal_31, &bLocal_29, 2);
								TASK_CLEAR(&uLocal_31);
								TASK_PRIORITY_SET(&uLocal_31, true);
								TASK_USE_GRINGO(&uLocal_31, &iLocal_45, "UseCase1", 4294967295, 1);
								Function_158(&uLocal_125, 32768);
							}
							else
							{
								DECOR_SET_BOOL(&Global_54076, "GirlIsDead", 1);
								Function_158(&uLocal_125, 32768);
							}
						}
						else
						{
							DECOR_SET_BOOL(&Global_54076, "GirlIsDead", 1);
							Function_158(&uLocal_125, 32768);
						}
					}
				}
				if (!Function_23())
				{
					iLocal_135 = 5;
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_ALIVE(&uLocal_31))
				{
					if (Function_19(&uLocal_31, &uLocal_121, &fLocal_133, uLocal_126, 0, 0x40400000))
					{
						if (!iLocal_128)
						{
							TASK_CLEAR(&uLocal_31);
							RESET_ANIM_SET_FOR_ACTOR(&uLocal_31, 1);
							Function_18(&uLocal_31);
							TASK_FLEE_ACTOR(&uLocal_31, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							iLocal_128 = 1;
						}
					}
				}
				if (IS_ACTOR_ALIVE(&bLocal_29))
				{
					if (Function_19(&bLocal_29, &uLocal_121, &fLocal_133, uLocal_126, 0, 0x40400000))
					{
						if (!iLocal_129)
						{
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_29, 1);
							Function_18(&bLocal_29);
							TASK_FLEE_ACTOR(&bLocal_29, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							iLocal_129 = 1;
						}
					}
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "GangLeadersDead"))
				{
					if (Function_15(&iLocal_109) < 45.0f)
					{
						if (!Function_161(uLocal_125, 131072))
						{
							Function_6(&bLocal_29, 4, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_GunslingerGoSpot"), 1);
							Function_158(&uLocal_125, 131072);
						}
					}
				}
				break;
			
			case 0x00000007:
				if (!Function_161(uLocal_125, 4194304))
				{
					Function_1();
				}
				break;
		}
		WAIT(bLocal_124);
	}
	if (!Function_161(uLocal_125, 4194304))
	{
		Function_1();
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x8D0 / 2256
{
	Function_2(&uLocal_59);
	Function_158(&uLocal_125, 4194304);
	if (IS_OBJECT_VALID(&uLocal_49))
	{
		DESTROY_OBJECT(&uLocal_49);
	}
	if (IS_VOLUME_VALID(&uLocal_51))
	{
		DESTROY_OBJECT(&uLocal_51);
	}
	if (IS_BLIP_VALID(&uLocal_37))
	{
		REMOVE_BLIP(&uLocal_37);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	if (IS_ACTOR_VALID(&bLocal_29))
	{
		TASK_CLEAR(&bLocal_29);
		RELEASE_ACTOR(&bLocal_29);
	}
	if (IS_BLIP_VALID(&uLocal_39))
	{
		REMOVE_BLIP(&uLocal_39);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_35))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_35);
		RELEASE_LAYOUT_REF(&uLocal_35);
	}
	HUD_CLEAR_OBJECTIVE();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x957 / 2391
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

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0x97F / 2431
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

void Function_4(struct<13> Param0) //Position: 0xACA / 2762
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0xAE7 / 2791
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_6(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xB05 / 2821
{
	bool bVar0;
	var uVar1;
	
	if (&bParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		bParam1 = 0;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_7(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_7(&uParam0, &bParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_7(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0xBF3 / 3059
{
	char* cVar0[32];
	
	Function_14();
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
	if (Function_13(&uParam0) == 1)
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
	Function_12(&uParam0, 0);
	Function_11(&uParam0, iParam1);
	Function_10(&uParam0, &uParam2);
	Function_9(&uParam0, uParam3);
	if (Function_8(&uParam0) != 5)
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

int Function_8(int iParam0) //Position: 0xE5F / 3679
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_9(var uParam0, bool bParam1) //Position: 0xE83 / 3715
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0xEA7 / 3751
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_11(var uParam0, bool bParam1) //Position: 0xECD / 3789
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_12(var uParam0, bool bParam1) //Position: 0xEF4 / 3828
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_13(bool bParam0) //Position: 0xF18 / 3864
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_14() //Position: 0xF37 / 3895
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

float Function_15(vector3 vParam0) //Position: 0xF86 / 3974
{
	if (Function_17(&vParam0))
	{
		if (Function_16(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_16(int iParam0) //Position: 0x1053 / 4179
{
	return Function_161(iParam0, 2);
}

bool Function_17(int iParam0) //Position: 0x1061 / 4193
{
	return Function_161(iParam0, 1);
}

void Function_18(bool bParam0) //Position: 0x106F / 4207
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "nnostickup"))
		{
			DECOR_REMOVE(&bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
		TASK_PRIORITY_SET(&bParam0, 2);
	}
	return;
}

bool Function_19(int iParam0, var uParam1, float fParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x10C2 / 4290
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
		fVar0 = Function_22(&iParam0, &Global_54076);
		if (!Function_161(&uParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_20(&iParam0);
				return 1;
			}
		}
		if (!Function_161(&uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_20(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_20(&iParam0);
				return 1;
			}
		}
		if (!Function_161(&uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_20(&iParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_20(&iParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_161(&uParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_20(&iParam0);
				return 1;
			}
		}
		if (!Function_161(&uParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_20(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_20(int iParam0) //Position: 0x128B / 4747
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_21(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_21(int iParam0) //Position: 0x12C8 / 4808
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_22(float fParam0, bool bParam1) //Position: 0x12E1 / 4833
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_23() //Position: 0x13D6 / 5078
{
	bool bVar0;
	var uVar1;
	var uVar3;
	
	bVar0 = false;
	switch (bLocal_122)
	{
		case 0x00000000:
			if (DECOR_CHECK_EXIST(&Global_54076, "FOM_Boss_Launched"))
			{
				uLocal_43 = Function_40("FOM_BossSquad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout"));
				Function_38(&uLocal_43, &uLocal_41, 4);
				Function_37(&uLocal_43, &uLocal_41);
				bVar0 = true;
			}
			else if (!Function_161(uLocal_125, 0x1000000))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !FIRE_IS_ACTOR_ON_FIRE(&bLocal_29))
				{
					Function_158(&uLocal_125, 0x1000000);
					Function_36();
				}
			}
			break;
		
		case 0x00000001:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_43) == 0)
			{
				if (!Function_161(uLocal_125, 128))
				{
					if (!FIRE_IS_ACTOR_ON_FIRE(&bLocal_29))
					{
						Function_35();
					}
					uVar1 = Vector(-2680,4f, 67,45f, 3457,7f);
					uLocal_39 = ADD_BLIP_FOR_COORD(&uVar1, 330, 0, 2, 0);
					uVar3 = Vector(-2682,119f, 67,455f, 3457,58f);
					SQUAD_GOALS_CLEAR(&uLocal_41);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_29);
					TASK_GO_TO_COORD(&bLocal_29, &uVar3, 4);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_29, 1);
					Function_158(&uLocal_125, 128);
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
				Function_32("fom_fte_objGoToTreasure", 0x40f00000, 1, 2, 0, 0, 0, 0);
				CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
				APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("FM_JournalID"), "fom_fte_objGoToTreasure", 0, 0, 0);
				APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
				bVar0 = true;
			}
			break;
		
		default:
			break;
	}
	if (bVar0)
	{
		bLocal_122++;
	}
	if (Function_161(uLocal_125, 128) && !Function_161(uLocal_125, 4096))
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_29, FIND_VOLUME_IN_LAYOUT(&Global_46715, "FOM_treasureRoomVolume")))
		{
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_29, 1);
			TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(&uLocal_41, false), -1.0f, 0, 0);
			Function_158(&uLocal_125, 4096);
		}
	}
	if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "FOM_treasureRoomVolume")))
	{
		if (!bLocal_134)
		{
			Function_31(&iLocal_117);
			Function_28(&iLocal_117);
			if (IS_BLIP_VALID(&uLocal_39))
			{
				REMOVE_BLIP(&uLocal_39);
			}
			bLocal_134 = true;
		}
	}
	if (bLocal_134)
	{
		if (!Function_161(uLocal_125, 16384))
		{
			if (Function_15(&iLocal_117) < 1.0f)
			{
				if (!FIRE_IS_ACTOR_ON_FIRE(&bLocal_29))
				{
					Function_24();
				}
				SET_ANIM_SET_FOR_ACTOR(&bLocal_29, "fmercer_treasure", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_29, "fmercer_treasure/walk");
				Function_158(&uLocal_125, 16384);
			}
		}
	}
	if (bLocal_134)
	{
		if (Function_161(uLocal_125, 4096))
		{
			if (Function_15(&iLocal_117) < 7.0f)
			{
				if (!Function_161(uLocal_125, 65536))
				{
					Function_6(&bLocal_29, 4, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_GunslingerGoSpot"), 1);
					Function_158(&uLocal_125, 65536);
					MEMORY_CONSIDER_AS(&bLocal_29, &Global_54076, 2);
				}
				DECOR_SET_BOOL(&Global_54076, "MissionEnd", 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_29)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_29));
				}
				Function_28(&iLocal_109);
				return 0;
			}
		}
	}
	return 1;
}

void Function_24() //Position: 0x175A / 5978
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FortMerc_FindLoots", "FortMerc_FindLoots", 0, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_25(int iParam0) //Position: 0x17A7 / 6055
{
	Function_26(0, &Global_54076, iParam0, 0);
	Function_26(1, &bLocal_29, iParam0, 0);
	return;
}

void Function_26(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x17C2 / 6082
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_161(uParam2, Function_27(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

bool Function_27(bool bParam0) //Position: 0x17EA / 6122
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_28(int iParam0) //Position: 0x17F6 / 6134
{
	Function_29(&iParam0, 0.0f);
	return;
}

void Function_29(vector3 vParam0) //Position: 0x1803 / 6147
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_158(&vParam0, 1);
	Function_30(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x1828 / 6184
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_31(bool bParam0) //Position: 0x183E / 6206
{
	if (!Function_17(&bParam0))
	{
		Function_29(&bParam0, 0.0f);
	}
	return;
}

void Function_32(float fParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1855 / 6229
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
			Var0 = { StackVal, StackVal, StackVal, Function_33(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&fParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&fParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

struct<16> Function_33(int iParam0) //Position: 0x18EA / 6378
{
	char* cVar0[16];
	
	if (!Function_34())
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

bool Function_34() //Position: 0x1929 / 6441
{
	if (Function_161(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_35() //Position: 0x1944 / 6468
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FortMerc_WheresTreasure", "FortMerc_WheresTreasure", 0, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_36() //Position: 0x199B / 6555
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FortMerc_ShoutsPlayerGunfight1", "FortMerc_ShoutsPlayerGunfight1", 0, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_37(var uParam0, int iParam1) //Position: 0x1A00 / 6656
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(&iParam1) - 1))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar1);
					if (IS_ACTOR_VALID(&uVar3))
					{
						if (IS_ACTOR_ALIVE(&uVar3))
						{
							MEMORY_IDENTIFY(&uVar2, &uVar3);
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

void Function_38(var uParam0, var uParam1, bool bParam2) //Position: 0x1A91 / 6801
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_39(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_39(var uParam0, var uParam1, bool bParam2) //Position: 0x1AE8 / 6888
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_40(int iParam0, bool bParam1) //Position: 0x1B3A / 6970
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
		if (STRING_CONTAINS_STRING(&uVar4, &iParam0) || Function_41(&iParam0, &uVar4))
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

int Function_41(char* cParam0) //Position: 0x1BF6 / 7158
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, &cParam0, 64);
	strcpy(&cVar16, &cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

void Function_42() //Position: 0x1C23 / 7203
{
	if (!bLocal_134)
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "TriggerCenter") && !IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			DECOR_REMOVE(&Global_54076, "TriggerCenter");
			if (!FIRE_IS_ACTOR_ON_FIRE(&bLocal_29))
			{
				Function_45();
			}
		}
	}
	if (iLocal_123 == 0)
	{
		if (!FIRE_IS_ACTOR_ON_FIRE(&bLocal_29))
		{
			Function_44();
		}
		if (IS_BLIP_VALID(&uLocal_39))
		{
			REMOVE_BLIP(&uLocal_39);
		}
		SQUAD_GOALS_CLEAR(&uLocal_41);
		Function_43(&uLocal_41);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&uLocal_41, false));
		SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_29, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_LeonStayIn"), 2, true);
		SQUAD_GOAL_ADD_BATTLE_ALLIES(&uLocal_41, 0, &Global_54076, 4294967295);
		SET_FACTIONS_STATUS_TWO_WAY(20, 12, 4);
		Function_28(&iLocal_105);
		iLocal_123 = 1;
	}
	return;
}

void Function_43(var uParam0) //Position: 0x1CE5 / 7397
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_44() //Position: 0x1D1A / 7450
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FortMerc_OpensGate", "FortMerc_OpensGate", 0, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_45() //Position: 0x1D67 / 7527
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FortMerc_ShoutsPlayerGunfight2", "FortMerc_ShoutsPlayerGunfight2", 0, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_46() //Position: 0x1DCC / 7628
{
	int iVar0;
	var uVar1;
	int iVar3;
	var uVar4;
	var uVar6;
	
	if (iLocal_123 == 0)
	{
		AUDIO_ATTACH_MICROPHONE_TO_ACTOR(&bLocal_29);
		if (!FIRE_IS_ACTOR_ON_FIRE(&bLocal_29))
		{
			Function_74();
		}
		iLocal_123 = 1;
		Function_28(&iLocal_105);
	}
	else if (iLocal_123 == 1)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_15(&iLocal_105) < 4.0f)
		{
			Function_54(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			Function_53(&bLocal_29, Function_40("FOM_AA_Enc03Squad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout")));
			AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
			iVar0 = Function_40("FOM_AA_Enc03Squad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout"));
			if (SQUAD_IS_VALID(&iVar0))
			{
				Function_49(&iVar0, &bLocal_29, 0);
				Function_39(&bLocal_29, &iVar0, 4);
			}
			AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
			AI_CLEAR_DONT_HARM_ACTOR(&bLocal_29);
			iLocal_123 = 2;
		}
	}
	else if (iLocal_123 == 2)
	{
		uVar1 = Vector(-2658,408f, 72,534f, 3413,736f);
		uLocal_39 = ADD_BLIP_FOR_COORD(&uVar1, 330, 0, 2, 0);
		DESTROY_OBJECT(&uLocal_57);
		HUD_ENABLE(1);
		TASK_CLEAR(&Global_54076);
		GRINGO_SET_USABLE_BY_PLAYER(&uLocal_47, "nPlayerUse", 1);
		REMOVE_BLIP(&uLocal_37);
		uLocal_37 = ADD_BLIP_FOR_ACTOR(&bLocal_29, 325, 0, 2, 0);
		Function_32("fom_fte_ObjInFront", 0x40f00000, 1, 2, 0, 0, 0, 0);
		CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
		APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("FM_JournalID"), "fom_fte_ObjInFront", 0, 0, 0);
		APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
		iLocal_123 = 3;
	}
	else if (iLocal_123 == 3)
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "fomv_insideFortVol")))
		{
			iVar3 = Function_40("FOM_AA_Enc0Squad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout"));
			Function_48(&iVar3, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			if (IS_BLIP_VALID(&uLocal_39))
			{
				REMOVE_BLIP(&uLocal_39);
			}
			SQUAD_SET_FACTION(&iVar3, 19);
			Function_47(&iVar3, &Global_54076, 4);
			uVar4 = Vector(-2650,773f, 67,263f, 3418,933f);
			uVar6 = LOCATE_GRINGO_OF_TYPE("open_big", &uVar4, 5.0f, 1);
			uLocal_39 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_GRINGO(&uVar6), 330, 0f, 2, 0);
			Function_32("fom_fte_objOpenDoor", 0x40f00000, 1, 2, 0, 0, 0, 0);
			CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
			APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("FM_JournalID"), "fom_fte_objOpenDoor", 0, 0, 0);
			APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
			iLocal_123 = 4;
		}
	}
	return;
}

void Function_47(var uParam0, var uParam1, bool bParam2) //Position: 0x2104 / 8452
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

void Function_48(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x2150 / 8528
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_49(var uParam0, var uParam1, bool bParam2) //Position: 0x2260 / 8800
{
	Function_52(&uParam0, &uParam1, 1);
	Function_51(&uParam0, 1);
	Function_47(&uParam0, &uParam1, 4);
	Function_50(&uParam0, &uParam1);
	if (&bParam2)
	{
		Function_48(&uParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_50(var uParam0, int iParam1) //Position: 0x22A9 / 8873
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

void Function_51(var uParam0, int iParam1) //Position: 0x2304 / 8964
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_52(var uParam0, var uParam1, bool bParam2) //Position: 0x2349 / 9033
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
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
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, 1);
				}
				else
				{
					GET_POSITION(&uParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_53(var uParam0, bool bParam1) //Position: 0x23C1 / 9153
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_IDENTIFY(&uParam0, &uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_54(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x23FD / 9213
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
		uVar0 = Function_73();
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
		Function_58(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_57();
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
	Function_55(&uParam9, &uParam10);
}

void Function_55(var uParam0, bool bParam1) //Position: 0x24CC / 9420
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
		Function_56();
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

void Function_56() //Position: 0x259B / 9627
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

void Function_57() //Position: 0x2613 / 9747
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_58(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2628 / 9768
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
	Function_72(iParam0, TO_FLOAT(bParam1), 1);
	Function_71(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_59(iParam0);
	return 1;
}

void Function_59(bool bParam0) //Position: 0x2850 / 10320
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

void Function_60(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x28EE / 10478
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_70(390))), 32);
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
					fVar19 = (Function_69(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_69(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_67(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_64(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_61(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_144(), &Var9);
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

var Function_61(int iParam0) //Position: 0x2F2C / 12076
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_62(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2F3D / 12093
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_63(char* cParam0) //Position: 0x3034 / 12340
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_64(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x304F / 12367
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_66(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_65(Function_66(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_65(int iParam0, int iParam1) //Position: 0x30B6 / 12470
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_66(int iParam0, bool bParam1) //Position: 0x30C8 / 12488
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_67(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x30DA / 12506
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
	if (((Function_68(iParam0) != 19 || Function_68(iParam0) != 17) || Function_68(iParam0) != 10) || Function_68(iParam0) != 9)
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

int Function_68(int iParam0) //Position: 0x320E / 12814
{
	return Global_55480[iParam016].f_96;
}

float Function_69(int iParam0) //Position: 0x321D / 12829
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_70(int iParam0) //Position: 0x3256 / 12886
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_71(int iParam0) //Position: 0x3293 / 12947
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

int Function_72(int iParam0, float fParam1, bool bParam2) //Position: 0x342D / 13357
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

var Function_73() //Position: 0x3671 / 13937
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_74() //Position: 0x3686 / 13958
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FortMerc_Introduces_v1_AA", "FortMerc_Introduces_v1_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FortMerc_Introduces_v1_AB", "FortMerc_Introduces_v1_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FortMerc_Introduces_v1_AC", "FortMerc_Introduces_v1_AC", 0, 4, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_75(int iParam0) //Position: 0x3763 / 14179
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	
	if (!Function_17(&uLocal_113))
	{
		Function_28(&uLocal_113);
	}
	if (Function_15(&uLocal_113) < 6.0f)
	{
		if ((!Function_161(uLocal_125, 2048) && !HUD_IS_FADED()) && !HUD_IS_FADING())
		{
			Function_158(&uLocal_125, 2048);
			uLocal_51 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_35, Function_144(), 4,203895E-45f, Vector(-2659,03f, 67,263f, 3405,874f), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 7.0f, 3.0f));
			uLocal_49 = CREATE_GATEWAY_IN_LAYOUT(&uLocal_35, Function_144(), &uLocal_51, &Global_54076, 2, 3, 0, 0, 1, 1);
			Function_32("FOM_FTE_Obj_MeetHelper", 0x40f00000, 1, 2, 0, 0, 0, 0);
			uLocal_37 = ADD_BLIP_FOR_ACTOR(&bLocal_29, 330, 0, 2, 0);
			CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
			APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("FM_JournalID"), "FOM_FTE_Obj_MeetHelper", 0, 0, 0);
			APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
		}
		if (IS_OBJECT_VALID(&uLocal_49))
		{
			if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
			{
				uLocal_33 = GET_MOUNT(&Global_54076);
			}
			if (Function_128(&uLocal_49, 0, 1, 1, 1, 0))
			{
				if (!Function_161(uLocal_125, 2))
				{
					Function_123(1, 1, 0, 1, 1, 1, 1, &iParam0, 1, 0, 1, 1, 0x3f800000, 0);
					DECOR_SET_BOOL(&bLocal_29, "AiCoverDontPeek", 1);
					if (IS_ACTOR_VALID(&uLocal_33))
					{
						SET_OBJECT_POSITION_ON_GROUND(StackVal, &Global_21369 + 72, Vector(-2661,72f, 67,26f, 3402,27f));
						SET_OBJECT_ORIENTATION(StackVal, &Global_21369 + 72, Vector(0.0f, 317.0f, 0.0f));
						TASK_PRIORITY_SET(&Global_21369 + 72, false);
						TASK_STAND_STILL(&Global_21369 + 72, -1.0f, 1, 0);
					}
					Function_158(&uLocal_125, 2);
					Function_122(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_MarstonStart"));
					Var0 = Function_122(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_MarstonStart"));
					Function_121(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_MarstonStart"));
					Var2 = Function_121(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_MarstonStart"));
					if (!Function_120(Global_46953) != 2)
					{
						Function_83(Global_46953, 1);
						Global_6628 = 1;
					}
					DESTROY_OBJECT(&uLocal_49);
					DESTROY_OBJECT(&uLocal_51);
					Function_57();
					Function_82();
					AI_DONT_HARM_ACTOR(&Global_54076);
					AI_DONT_HARM_ACTOR(&bLocal_29);
					uLocal_57 = Function_78(&uLocal_35, 0, 1, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&Global_54076, &bLocal_29, -1.0f, 0);
					SET_OBJECT_POSITION(&Global_54076, Var0);
					SET_OBJECT_ORIENTATION(&Global_54076, Var2);
					Function_76(&Global_54076, 0);
					TASK_FACE_ACTOR(&Global_54076, &bLocal_29, 1, 3212836864);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					uVar4 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_frontRestrict");
					if (IS_VOLUME_VALID(&uVar4))
					{
						uVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_144(), &uLocal_35, 4294967295, 0);
						iVar6 = LOCATE_ACTORS_IN_VOLUME(&uVar4, &uVar5, 0, 1);
						if (iVar6 >= 0)
						{
							bVar7 = false;
							while (bVar7 < (iVar6 - 1))
							{
								iVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, &uVar5);
								if (!(&iVar8 != GET_OBJECT_FROM_ACTOR(&Global_54076) || &iVar8 != GET_OBJECT_FROM_ACTOR(&bLocal_29)))
								{
									SET_OBJECT_POSITION_ON_GROUND(StackVal, &iVar8, Vector(-2661,72f, 67,26f, 3402,27f));
								}
								bVar7++;
							}
						}
						if (IS_ACTOR_VALID(&Global_21369 + 72))
						{
							if (IS_ACTOR_IN_VOLUME(&Global_21369 + 72, &uVar4))
							{
								SET_OBJECT_POSITION_ON_GROUND(StackVal, &Global_21369 + 72, Vector(-2661,72f, 67,26f, 3402,27f));
								SET_OBJECT_ORIENTATION(StackVal, &Global_21369 + 72, Vector(0.0f, 317.0f, 0.0f));
								TASK_PRIORITY_SET(&Global_21369 + 72, false);
								TASK_STAND_STILL(&Global_21369 + 72, -1.0f, 1, 0);
							}
						}
						DESTROY_OBJECTSET(&uVar5);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_76(var uParam0, bool bParam1) //Position: 0x3AE8 / 15080
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
	else if (!&bParam1 || Function_77(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_77(var uParam0, bool bParam1) //Position: 0x3B52 / 15186
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

var Function_78(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3B73 / 15219
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_144(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "FortMercer", 2, 1);
	}
	Function_79(&uVar0);
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

void Function_79(int iParam0) //Position: 0x3BF7 / 15351
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_81(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_80(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&iParam0, 1, 1);
	return;
}

void Function_80(int iParam0) //Position: 0x3C3C / 15420
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2668,062f, 70,037f, 3397,256f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,042013f, -2,558893f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_81(var uParam0) //Position: 0x3CB1 / 15537
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-2673,874f, 70,60463f, 3397,185f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,000605f, -2,405417f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_82() //Position: 0x3D26 / 15654
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_83(int iParam0, int iParam1) //Position: 0x3D38 / 15672
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	var uVar12;
	
	if (!Function_118(iParam0))
	{
		Function_116();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_115(iParam0);
	if (StackVal != 2)
	{
		Function_113("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_87(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_85(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_84(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_33(Global_10966) };
		}
		uVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(uVar12, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar12);
		APPEND_JOURNAL_ENTRY(uVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

struct<24> Function_84(char* cParam0) //Position: 0x3E49 / 15945
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

var Function_85(int iParam0) //Position: 0x40A1 / 16545
{
	if (!Function_86(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_86(int iParam0) //Position: 0x40C1 / 16577
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_87(bool bParam0) //Position: 0x40D8 / 16600
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_103();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_88();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_30(&Global_99144, 1);
		Function_30(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_88() //Position: 0x412D / 16685
{
	Function_101();
	Function_100();
	Function_100();
	Function_99();
	Function_99();
	Function_98();
	Function_98();
	Function_95(0);
	Function_95(0);
	Function_93();
	Function_92();
	Function_91();
	Function_90();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_89();
	return;
}

void Function_89() //Position: 0x4178 / 16760
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_90() //Position: 0x427E / 17022
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_91() //Position: 0x42B1 / 17073
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_92() //Position: 0x4444 / 17476
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_93() //Position: 0x45FD / 17917
{
	Function_94(&Global_42918, 1, 0);
	return;
}

void Function_94(struct<2317> Param0) //Position: 0x460B / 17931
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_73();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_95(int iParam0) //Position: 0x4828 / 18472
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
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_97((50 + iVar4)) + Function_97((183 + iVar4))) + Function_97((90 + iVar4)));
				}
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
	Function_96(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_96(int iParam0, bool bParam1, bool bParam2) //Position: 0x48CF / 18639
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
		Function_72(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_71(iParam0);
	if (&bParam2)
	{
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_97(bool bParam0) //Position: 0x4B6B / 19307
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_98() //Position: 0x4BAC / 19372
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
		iVar2 = ((Function_97((50 + iVar3) + 15) + Function_97((183 + iVar3) + 15)) + Function_97((90 + iVar3) + 15));
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
	Function_96(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_99() //Position: 0x4C35 / 19509
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
			iVar2 = ((Function_97((50 + iVar3) + 8) + Function_97((183 + iVar3) + 8)) + Function_97((90 + iVar3) + 8));
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
	Function_96(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_100() //Position: 0x4CCC / 19660
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
		iVar2 = ((Function_97((50 + iVar3)) + Function_97((183 + iVar3))) + Function_97((90 + iVar3)));
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
	Function_96(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_101() //Position: 0x4D4B / 19787
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_102(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_96(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_102(int iParam0, float fParam1, int iParam2) //Position: 0x4D88 / 19848
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_72(iParam0, fParam1, 1);
	Function_71(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_60(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_103() //Position: 0x4F94 / 20372
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_34())
	{
		Function_110(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_110(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_105(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_105(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_104(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_104(vector3 vParam0) //Position: 0x504B / 20555
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_105(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x5063 / 20579
{
	int iVar0;
	
	iVar0 = Function_108(&uParam2, &fParam3);
	if (Function_107(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_158(&Global_99144, 1);
			Function_30(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_158(&Global_99144, 2);
			Function_30(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_158(&Global_99144, 2);
		Function_30(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_106();
	return StackVal, Function_106();
}

struct<8> Function_106() //Position: 0x515B / 20827
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_107(int iParam0) //Position: 0x5165 / 20837
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_108(bool bParam0, bool bParam1) //Position: 0x517B / 20859
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_109(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_109(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_107(iVar0) && !&bParam1)
	{
		iVar0 = Function_108(&bParam0, 1);
	}
	return iVar0;
}

float Function_109(struct<2> Param0, struct<2> Param2) //Position: 0x5247 / 21063
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_110(float fParam0, int iParam1) //Position: 0x5264 / 21092
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_112(&Global_54076, &Var3);
	if (!Function_111(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_111(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_158(&Global_99144, 2);
	Function_30(&Global_99144, 1);
	iParam1 = 0;
	if (Function_104(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_111(int iParam0) //Position: 0x5A90 / 23184
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_161(uVar0, 0x1000000) || Function_161(uVar0, 0x2000000)) || Function_161(uVar0, 0x4000000)) || !Function_161(uVar0, 0x10000000));
}

void Function_112(var uParam0, int iParam1) //Position: 0x5ACB / 23243
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_113(var uParam0, int iParam1) //Position: 0x5ADA / 23258
{
	struct<4> Var0;
	
	if (!Function_118(iParam1))
	{
		return;
	}
	switch (Function_115(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_114(Function_85(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_115(iParam1), Function_85(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_115(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_115(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_115(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_115(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_115(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_114(int iParam0) //Position: 0x5C04 / 23556
{
	char* cVar0[16];
	
	if (!Function_34())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_115(int iParam0) //Position: 0x5C3E / 23614
{
	if (!Function_86(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_116() //Position: 0x5C59 / 23641
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_117(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_117(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5EA0 / 24224
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_118(int iParam0) //Position: 0x5ECC / 24268
{
	if (!Function_86(iParam0))
	{
		return 0;
	}
	if (!Function_119(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_119(int iParam0) //Position: 0x5EF0 / 24304
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_120(int iParam0) //Position: 0x5F05 / 24325
{
	if (!Function_118(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<8> Function_121(bool bParam0) //Position: 0x5F1F / 24351
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_122(bool bParam0) //Position: 0x5F48 / 24392
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

void Function_123(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x5F71 / 24433
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_57();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_73();
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
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_127(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_144(), 2,802597E-45f, Function_127(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_58(19, 1, 0, 0);
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
	if (uParam10 && !Function_34())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_126()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_126()));
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
	if (Function_125(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_124(0x4000000);
	}
	if (Function_125(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_124(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

void Function_124(int iParam0) //Position: 0x6223 / 25123
{
	int iVar0;
	
	if (Function_161(iParam0, 1) && Function_161(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_125(int iParam0) //Position: 0x6257 / 25175
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_126() //Position: 0x6273 / 25203
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

struct<8> Function_127(bool bParam0) //Position: 0x6301 / 25345
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_128(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x6313 / 25363
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar5;
	
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
				Function_76(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_77(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
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
				iVar2 = TASK_SEQUENCE_OPEN();
				if (Function_77(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &iVar5);
					Function_129(&iVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &iVar5);
					Function_129(&iVar5, &iVar3);
				}
				TASK_DISMOUNT(0, 1);
				TASK_GO_TO_COORD(0, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, iVar2);
				TASK_SEQUENCE_RELEASE(iVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_129(vector3 vParam0) //Position: 0x6548 / 25928
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_104(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_104(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_130() //Position: 0x65BE / 26046
{
	var uVar0;
	
	uVar0 = Function_40("FOM_AA_Enc03Squad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout"));
	Function_53(&bLocal_29, &uVar0);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	if (SQUAD_IS_VALID(&uVar0))
	{
		Function_49(&uVar0, &bLocal_29, 0);
		Function_39(&bLocal_29, &uVar0, 4);
	}
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&bLocal_29);
	uLocal_37 = ADD_BLIP_FOR_ACTOR(&bLocal_29, 325, 0, 2, 0);
	GRINGO_SET_USABLE_BY_PLAYER(&uLocal_47, "nPlayerUse", 0);
	Function_32("fom_fte_ObjInFront", 0x40f00000, 1, 2, 0, 0, 0, 0);
	AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
	return;
}

bool Function_131() //Position: 0x6689 / 26249
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar4;
	
	if (!Function_161(uLocal_125, 8388608))
	{
		uVar0 = GET_CURRENT_GRINGO(&Global_54076);
		if (IS_GRINGO_VALID(&uVar0))
		{
			uVar1 = GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar0));
			if (STRING_CONTAINS_STRING(&uVar1, "open_big"))
			{
				uVar2 = Vector(-2646,142f, 67,263f, 3414,393f);
				TASK_GO_TO_COORD_AND_STAY(&bLocal_29, &uVar2, 2, 124.0f);
				Function_158(&uLocal_125, 8388608);
				uVar4 = FIND_OBJECT_IN_LAYOUT(&Global_46715, "IntroCover");
				DESTROY_OBJECT(&uVar4);
			}
		}
	}
	if (IS_DOOR_OPENED(Function_146("fortMercer", "guardTowerProps01", 7)) || IS_DOOR_OPENED(Function_146("fortMercer", "guardTowerProps01", 8)))
	{
		CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_35, "doorObs1", Vector(-2648,279f, 67,263f, 3417,476f), Vector(-5,324f, 36,094f, 0.0f), Vector(2.0f, 6.0f, 1.0f));
		CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_35, "doorObs2", Vector(-2649,565f, 67,263f, 3415,905f), Vector(-5,324f, 36,094f, 0.0f), Vector(2.0f, 6.0f, 1.0f));
		return 1;
	}
	return 0;
}

void Function_132() //Position: 0x67D2 / 26578
{
	float fVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	fVar0 = FIND_OBJECT_IN_LAYOUT(&Global_46715, "FOM_helperSpawn");
	if (!IS_OBJECT_VALID(&fVar0))
	{
		LOG_ERROR("HelpSpawn not valid.");
	}
	Function_122(&fVar0);
	Function_121(&fVar0);
	bLocal_29 = CREATE_ACTOR_IN_LAYOUT(&uLocal_35, "NeedsFortMercerHelp", 278, Function_122(&fVar0), Function_121(&fVar0));
	uLocal_41 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_35, "FOM_FTE_Squad"));
	SQUAD_JOIN(&bLocal_29, &uLocal_41);
	DECOR_SET_BOOL(&bLocal_29, "IsHelper", 1);
	uVar1 = FIND_OBJECT_IN_LAYOUT(&Global_46715, "IntroCover");
	Function_137(&uVar1);
	TASK_PRIORITY_SET(&bLocal_29, true);
	TASK_HIDE_AT_COVER(&bLocal_29, GET_COVER_LOCATION_FROM_OBJECT(&uVar1), -1.0f, 6.0f, 0);
	Var2 = Vector(-2702,48f, 67,467f, 3447,74f);
	Var4 = Vector(0.0f, -21,535f, 0.0f);
	uLocal_31 = CREATE_ACTOR_IN_LAYOUT(&uLocal_35, "makeOutGirl", 245, Var2, Var4);
	TASK_STAND_STILL(&uLocal_31, -1.0f, 0, 0);
	ADD_ACTOR_STAY_WITHIN_VOLUME(&bLocal_29, FIND_VOLUME_IN_LAYOUT(&Global_46715, "fomv_helpInsideFront"));
	SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_29, 1);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,5f);
	Function_136(&Global_54076, &bLocal_29, 0, 1);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_29, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_29, 37, 5.0f);
	SET_ACTOR_PROOF(&bLocal_29, 128);
	SET_ACTOR_FACTION(&bLocal_29, 20);
	SET_ACTOR_ALLOW_DISARM(&bLocal_29, 0);
	SET_CRIPPLE_ENABLE(&bLocal_29, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_29, 0);
	Function_133(&bLocal_29, Function_40("FOM_AA_wallGuySquad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout")), 1);
	iLocal_45 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uLocal_35, "HelperMakingOut", "$/content/scripting/gringo/simpleGringo/whore_and_john", Local_130, Vector(0.0f, -41,409f, 0.0f)));
	uLocal_47 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uLocal_35, "climb_help", "climb_help", Vector(-2656,738f, 67,26305f, 3407,22f), Vector(0.0f, 11,34445f, 0.0f)));
	GRINGO_SET_USABLE_BY_PLAYER(&uLocal_47, "nPlayerUse", 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uLocal_35, "open_big_door", "open_big_door", Vector(-2650,083f, 67,26734f, 3417,924f), Vector(0.0f, -47,49909f, 0.0f));
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_35, "crateCover03x0", "p_gen_crateCover03x", Vector(-2656,394f, 69,25806f, 3408,723f), Vector(0.0f, 102,4477f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_35, "crateWeapons04x0", "p_gen_crateWeapons04x", Vector(-2657,698f, 66,86691f, 3407,87f), Vector(-168,2088f, 0.0f, 89,88485f), 1);
	return;
}

void Function_133(var uParam0, var uParam1, int iParam2) //Position: 0x6B30 / 27440
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				Function_134(&uParam0, &uVar1, &iParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_134(var uParam0, var uParam1, bool bParam2) //Position: 0x6B82 / 27522
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &uParam1);
			Function_135(&uParam1);
			uVar0 = Function_135(&uParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&uParam0, &uParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(&uParam0, &uParam1, &uVar0);
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

struct<8> Function_135(int iParam0) //Position: 0x6C93 / 27795
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

int Function_136(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x6CFF / 27903
{
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&iParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&iParam0, &iParam1, bParam2);
			MEMORY_IDENTIFY(&iParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &iParam0, bParam2);
				MEMORY_IDENTIFY(&iParam1, &iParam0);
			}
		}
	}
	return 1;
}

void Function_137(int iParam0) //Position: 0x6D5F / 27999
{
	struct<2> Var0;
	struct<2> Var2;
	char* cVar4[64];
	var uVar20;
	
	Function_122(&iParam0);
	Var0 = Function_122(&iParam0);
	Function_121(&iParam0);
	Var2 = Function_121(&iParam0);
	strcpy(&cVar4, GET_OBJECT_NAME(&iParam0), 64);
	uVar20 = GET_OBJECT_OWNER(&iParam0);
	Var2 = 0.0f;
	Var2.f_8 = 0.0f;
	Var2.f_4 = (StackVal - 180.0f);
	Var2.f_4 = GET_OBJECT_HEADING(&iParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(&uVar20));
	PRINTSTRING(" at ");
	PRINTVECTOR(Var0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(Var2);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar4);
	PRINTNL();
	DESTROY_OBJECT(&iParam0);
	iParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(&uVar20, &cVar4, Var0, Var2, 2);
	return;
}

bool Function_138(struct<2>[] Param0) //Position: 0x6E33 / 28211
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_142();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_141(&(Param0[iVar02]), 8);
		}
		else if (Function_140())
		{
			iVar1 = 1;
			Function_141(&(Param0[iVar02]), 8);
		}
		Function_141(&(Param0[iVar02]), 16);
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
				Function_141(&(Param0[iVar02]), 1);
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
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_141(&(Param0[iVar02]), 2);
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
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_141(&(Param0[iVar02]), 2);
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

void Function_139() //Position: 0x71F5 / 29173
{
	if (!Function_125(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_140() //Position: 0x7235 / 29237
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

void Function_141(struct<13> Param0) //Position: 0x7263 / 29283
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_142() //Position: 0x7276 / 29302
{
	if (!Function_125(128))
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

void Function_143(struct<2> Param0, float fParam2) //Position: 0x72B8 / 29368
{
	var uVar0;
	float fVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	fVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&fVar1))
	{
		Function_122(&fVar1);
		if (GET_OBJECT_TYPE(&fVar1) != 29 && VDIST(Param0, Function_122(&fVar1)) >= fParam2)
		{
			DESTROY_OBJECT(&fVar1);
		}
		fVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

var Function_144() //Position: 0x7317 / 29463
{
	int iVar0;
	
	return &iVar0;
}

void Function_145(var uParam0, int iParam1) //Position: 0x7320 / 29472
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 1);
	}
	return;
}

int Function_146(bool bParam0, bool bParam1, int iParam2) //Position: 0x737B / 29563
{
	return Function_147(Global_43789, &bParam0, &bParam1, iParam2);
}

int Function_147(int iParam0, char* cParam1, bool bParam3) //Position: 0x738F / 29583
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_148(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(&Global_44085[iParam09] + 56))
	{
		return "";
	}
	cParam1 = &cParam1;
	strcpy(&cVar0, "door", 8);
	if (bParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, bParam3, 8);
	memcpy(&cVar2, &Global_44085[iParam09] + 32, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, &cParam2, 32);
	stradd(&cVar2, "*", 32);
	uVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(&Global_44085[iParam09] + 56, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(&uVar10);
}

bool Function_148(int iParam0) //Position: 0x7434 / 29748
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_149(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x744A / 29770
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_150(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_141(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_150(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x7488 / 29832
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_141(&(Param0[iVar02]), 4);
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

var Function_151(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x7557 / 30039
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
			Function_141(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_141(&(Param0[iVar02]), 8);
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

bool Function_152(bool bParam0, int iParam1) //Position: 0x7633 / 30259
{
	if (IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		if (ACTIVATE_ACTOR_FOR_PERS_CHAR(&iParam1 + 16))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&iParam1 + 16)))
			{
				return IS_ACTOR_ALIVE(GET_ACTOR_FROM_PERS_CHAR(&iParam1 + 16));
			}
		}
		return 0;
	}
	return IS_EARLIER_THAN(&bParam0 + 8, 0);
}

bool Function_153(int iParam0) //Position: 0x767C / 30332
{
	if (Global_6666)
	{
		return 0;
	}
	iParam0 = &iParam0;
	if (Global_6623 || Global_6622)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6622)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6646)
	{
		return 1;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	if (Function_154(&iParam0, 256))
	{
		return 0;
	}
	return 1;
}

bool Function_154(int iParam0, int iParam1) //Position: 0x76E9 / 30441
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_155() //Position: 0x7706 / 30470
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FortMerc_GangLeaders", "FortMerc_GangLeaders", 0, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_156(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7757 / 30551
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_157(&uVar1, &uParam1, &uParam2, &uParam3, &uParam4, 0))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x77A5 / 30629
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_158(var uParam0, bool bParam1) //Position: 0x77C5 / 30661
{
	uParam0 = (uParam0 || bParam1);
	return;
}

bool Function_159(char* cParam0) //Position: 0x77D6 / 30678
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		if (STRING_LENGTH(&(Global_99485[iVar019])) == 0)
		{
			strcpy(&(Global_99485[iVar019]), &cParam0, 32);
			(&Global_99485[iVar019] + 64) = &iParam1;
			Global_99485[iVar019].f_72 = fParam2;
			Global_99485[iVar019].f_76 = iParam3;
			strcpy(&Global_99485[iVar019] + 84, &cParam4, 32);
			Global_99485[iVar019].f_80 = 1;
			Global_99485[iVar019].f_148 = &iParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_160(int iParam0, int iParam1) //Position: 0x7863 / 30819
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

bool Function_161(var uParam0, bool bParam1) //Position: 0x7899 / 30873
{
	return (uParam0 && bParam1) == 0;
}

