//Decompiled with MagicRDR v1.0
//Function Count : 239
//Statics Count : 335
//Natives Count : 442
//Parameters Count : 51

#region Local Var
	struct<269> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	int iLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	int iLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	int iLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	int iLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	struct<51> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	float fVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	vector3 vVar14;
	bool bVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	
	iLocal_82 = 0;
	iLocal_83 = 0;
	bLocal_89 = "";
	bLocal_96 = "";
	bLocal_113 = "";
	iLocal_119 = 0;
	iLocal_120 = 0;
	iLocal_121 = 0;
	bLocal_122 = false;
	vLocal_123 = { 0.0f, 0.0f, 0.0f };
	bLocal_154 = false;
	iLocal_155 = 0;
	iLocal_156 = 0;
	iLocal_157 = 0;
	iLocal_158 = 0;
	iLocal_159 = 0;
	iLocal_160 = 0;
	iLocal_161 = 0;
	iLocal_162 = 0;
	iLocal_163 = 0;
	iLocal_164 = 0;
	iLocal_166 = 0;
	iLocal_167 = 0;
	iLocal_168 = 0;
	iLocal_169 = 0;
	iLocal_170 = 0;
	iLocal_171 = 0;
	iLocal_172 = 0;
	iLocal_173 = 0;
	iLocal_174 = 0;
	iLocal_175 = 0;
	iLocal_176 = 0;
	iLocal_177 = 0;
	iLocal_178 = 0;
	iLocal_179 = 0;
	iLocal_180 = 0;
	bLocal_181 = false;
	iLocal_182 = 0;
	iLocal_183 = 0;
	iLocal_184 = 0;
	iLocal_185 = 0;
	iLocal_186 = 0;
	iLocal_187 = 0;
	iLocal_188 = 0;
	iLocal_189 = 0;
	iLocal_190 = 0;
	iLocal_191 = 0;
	bLocal_192 = false;
	iLocal_193 = 0;
	iLocal_194 = 0;
	iLocal_195 = 0;
	iLocal_196 = 0;
	iLocal_197 = 0;
	iLocal_198 = 0;
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	GET_OBJECT_POSITION(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_playerGoToFlag"), &uVar0);
	while (!IS_EXITFLAG_SET())
	{
		if (!iLocal_197)
		{
			if (!iLocal_194)
			{
				if (iLocal_198 >= 4)
				{
					if (!IS_ACTOR_ALIVE(bLocal_113) && !iLocal_173)
					{
						DECOR_SET_BOOL(Global_34573, "RancherDead", true);
						iLocal_173 = 1;
					}
				}
			}
		}
		vVar3 = { 0.0f, 0.0f, 0.0f };
		GET_POSITION(Global_34573, &vVar3);
		vVar6 = { 0.0f, 0.0f, 0.0f };
		if (IS_ACTOR_VALID(bLocal_113))
		{
			GET_POSITION(bLocal_113, &vVar6);
		}
		if (DECOR_CHECK_EXIST(Global_34573, "EndMission"))
		{
			if (IS_ACTOR_VALID(bLocal_113))
			{
				if (Function_238(Global_34573, bLocal_113) < 150.0f)
				{
					iLocal_198 = 37;
				}
			}
		}
		if (DECOR_CHECK_EXIST(Global_34573, "RancherDead"))
		{
			iLocal_198 = 37;
		}
		if (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("PikesBasin_Layout")))
		{
			iLocal_198 = 37;
		}
		if (!iLocal_175)
		{
			if (DECOR_CHECK_EXIST(Global_34573, "PlayerTalkedHelper"))
			{
				if (Function_238(Global_34573, bLocal_113) <= 25.0f)
				{
					SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_ALLY_KEEP_UP", true, false, 0, 0, true, false);
					iLocal_175 = 1;
				}
			}
		}
		if (!iLocal_196)
		{
			if (IS_ACTOR_VALID(bLocal_113))
			{
				if (SQUAD_IS_VALID(bLocal_111))
				{
					if (Function_237(bLocal_111, Global_34573))
					{
						iLocal_121++;
					}
				}
				if (iLocal_121 == 0 && !Function_236(iLocal_119, 256))
				{
					Function_235(&iLocal_119, 256);
					Function_234();
				}
				else if (iLocal_121 < 50 && Function_236(iLocal_119, 256))
				{
					if (!iLocal_179)
					{
						ACTOR_END_FORCE_HOLSTER(bLocal_113);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_113, 0);
						MEMORY_PREFER_RIDING(bLocal_113, false);
						Function_233(bLocal_113);
						MEMORY_CONSIDER_AS_ENEMY(bLocal_113, Global_34573);
						MEMORY_IDENTIFY(bLocal_113, Global_34573);
						MEMORY_ATTACK_ON_SIGHT(bLocal_113, 1);
						SET_ACTOR_FACTION(bLocal_113, 19);
						TASK_CLEAR(bLocal_113);
						TASK_PRIORITY_SET(bLocal_113, true);
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_113, -1.0f);
						Function_232();
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_113)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_113));
						}
						DECOR_SET_BOOL(Global_34573, "KilledCows", true);
						iLocal_198 = 37;
						iLocal_179 = 1;
					}
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_113))
		{
			if (IS_ACTOR_ALIVE(bLocal_113))
			{
				if (!iLocal_168)
				{
					if (Function_238(Global_34573, bLocal_113) < 10.0f)
					{
						SET_ACTOR_MIN_SPEED(bLocal_113, 3);
					}
					else
					{
						SET_ACTOR_MIN_SPEED(bLocal_113, 2);
					}
				}
			}
		}
		if (!iLocal_174)
		{
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (IS_ACTOR_VALID(bLocal_113))
				{
					if (IS_ACTOR_ALIVE(bLocal_113))
					{
						MEMORY_PREFER_RIDING(bLocal_113, true);
					}
				}
			}
			else if (!IS_ACTOR_RIDING(Global_34573))
			{
				if (IS_ACTOR_VALID(bLocal_113))
				{
					if (IS_ACTOR_ALIVE(bLocal_113))
					{
						MEMORY_PREFER_WALKING(bLocal_113, true);
					}
				}
			}
		}
		Function_227(&bLocal_111, &bLocal_113, &bLocal_91);
		switch (iLocal_198)
		{
			case 0x00000000:
				bLocal_89 = CREATE_LAYOUT("NuHerd_Layout");
				bLocal_111 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_89, "cowSquad"));
				Function_223(&iLocal_199);
				Function_222();
				Function_222();
				iLocal_198 = 1;
				break;
			
			case 0x00000001:
				if (Function_217(&iLocal_199))
				{
					iLocal_198 = 2;
				}
				break;
			
			case 0x00000002:
				Function_216(&bLocal_89, &bLocal_111, &uLocal_112);
				iLocal_198 = 3;
				break;
			
			case 0x00000003:
				Function_215(&iLocal_119, &bLocal_113, &bLocal_89, &bLocal_96, &bLocal_90);
				iLocal_198 = 4;
				break;
			
			case 0x00000004:
				iVar9 = 0;
				while (iVar9 <= 4)
				{
					if (!Function_214(&(Global_6643[iVar92]), 2) || Function_214(&(Global_6643[iVar92]), 4))
					{
						bLocal_181 = true;
					}
					iVar9++;
				}
				if (!bLocal_181)
				{
					if (!Function_213(&iLocal_275))
					{
						Function_212(&iLocal_275);
					}
					else
					{
						Function_211(&iLocal_275);
					}
				}
				Function_210(&bLocal_97, &bLocal_110);
				Function_209(&bLocal_97);
				if (!Global_28178 != 5)
				{
					SQUAD_SET_FACTION(bLocal_97[7], 19);
					Function_208(bLocal_97[7], Global_34573);
				}
				Function_208(bLocal_97[7], bLocal_113);
				Function_207(bLocal_97[7], bLocal_113, 4);
				Function_206(bLocal_97[7], -1.0f);
				bLocal_92 = CREATE_VOLUME_SET_IN_LAYOUT(bLocal_89, "TriggerObjVolume");
				ADD_TO_VOLUME_SET(bLocal_92, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_VolumeSet01"));
				ADD_TO_VOLUME_SET(bLocal_92, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_VolumeSet02"));
				ADD_TO_VOLUME_SET(bLocal_92, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_VolumeSet03"));
				ADD_TO_VOLUME_SET(bLocal_92, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_VolumeSet04"));
				bLocal_93 = CREATE_VOLUME_SET_IN_LAYOUT(bLocal_89, "HerdStayOut");
				ADD_TO_VOLUME_SET(bLocal_93, Local_0.f_20);
				bLocal_94 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_excitedReturn");
				bLocal_91 = CREATE_POINT_IN_LAYOUT(bLocal_89, "SquadCenter", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				SQUAD_COMPUTE_CENTROID(bLocal_111, &vLocal_123);
				SET_OBJECT_POSITION(bLocal_91, vLocal_123);
				PRINTSTRING("SQUAD CENTROIDS POSITION: ");
				PRINTVECTOR(vLocal_123);
				PRINTNL();
				Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston"));
				vLocal_129 = { StackVal, StackVal, Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston")) };
				Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston"));
				vLocal_132 = { StackVal, StackVal, Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston")) };
				Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher"));
				vLocal_135 = { StackVal, StackVal, Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher")) };
				Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher"));
				vLocal_138 = { StackVal, StackVal, Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher")) };
				Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch"));
				vLocal_141 = { StackVal, StackVal, Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch")) };
				Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch"));
				vLocal_144 = { StackVal, StackVal, Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch")) };
				Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancherCrouch"));
				vLocal_147 = { StackVal, StackVal, Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancherCrouch")) };
				Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancherCrouch"));
				vLocal_150 = { StackVal, StackVal, Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancherCrouch")) };
				if (IS_VOLUME_VALID(bLocal_92))
				{
					iLocal_198 = 5;
				}
				else
				{
					LOG_ERROR("volume is not valid");
				}
				break;
			
			case 0x00000005:
				fVar10 = Function_238(bLocal_113, Global_34573);
				if (!iLocal_171 && !iLocal_172)
				{
					if ((Function_202(Global_34573, bLocal_97[7], 1, 1, 1, 30.0f) && !Global_28178 != 5) || Function_202(Global_34573, bLocal_97[7], 1, 1, 1, 0.0f))
					{
						Function_201(&bLocal_97);
						iLocal_172 = 1;
					}
				}
				if (!Function_236(iLocal_119, 1))
				{
					if (!Function_236(iLocal_119, 65536))
					{
						if (IS_VOLUME_VALID(bLocal_92))
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_92))
							{
								if (HUD_IS_SHOWING_OBJECTIVE())
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
								}
								Function_200("PIK_Obj_ApproachHelper", 0x40f00000, 1, 2, 0, 0, 0);
								DECOR_SET_BOOL(Global_34573, "PIK_GivenObjective", true);
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ApproachHelper", 0, 0, false);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_90)))
								{
									ADD_BLIP_FOR_OBJECT(bLocal_90, 330, 0f, 2, 0);
								}
								Function_199(Global_30736, 1);
								if (!Function_198(Global_30736) != 2)
								{
									Function_197(Global_30736, 1);
									Global_3385 = 1;
									SET_PLAYER_ENDLESS_READYMODE(0, 1);
								}
								Function_235(&iLocal_119, 65536);
							}
							else if (DECOR_CHECK_EXIST(Global_34573, "PlayerAggroing"))
							{
								if (HUD_IS_SHOWING_OBJECTIVE())
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
								}
								Function_200("PIK_Obj_ApproachHelper", 0x40f00000, 1, 2, 0, 0, 0);
								DECOR_SET_BOOL(Global_34573, "PIK_GivenObjective", true);
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ApproachHelper", 0, 0, false);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_90)))
								{
									ADD_BLIP_FOR_OBJECT(bLocal_90, 330, 0f, 2, 0);
								}
								Function_199(Global_30736, 1);
								if (!Function_198(Global_30736) != 2)
								{
									Function_197(Global_30736, 1);
									Global_3385 = 1;
									SET_PLAYER_ENDLESS_READYMODE(0, 1);
								}
								Function_235(&iLocal_119, 65536);
							}
						}
					}
					if (!Function_236(iLocal_120, 1))
					{
						if (fVar10 > 20.0f)
						{
							Function_235(&iLocal_120, 1);
							if (Function_196() > 4)
							{
								SAY_SINGLE_LINE_CONTEXT(bLocal_113, 46, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(bLocal_113, 108, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
							}
						}
					}
					if (!iLocal_188)
					{
						if (!bLocal_154)
						{
							if (Function_238(bLocal_113, Global_34573) < 10.0f && !iLocal_155)
							{
								TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "introCover")), -1.0f, 0.0f);
								iLocal_155 = 1;
								iLocal_156 = 0;
							}
							if (Function_238(bLocal_113, Global_34573) > 10.0f && !iLocal_156)
							{
								TASK_CLEAR(bLocal_113);
								TASK_HIDE_AT_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "introCover")), -1.0f, 0.0f, 0);
								iLocal_156 = 1;
								iLocal_155 = 0;
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_JOINING_THE_FRAY", true, false, 2, 0, true, false);
								}
							}
						}
					}
					if (!iLocal_169)
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_introGateway")) && IS_ACTOR_RIDING_VEHICLE(Global_34573))
						{
							if (HUD_IS_SHOWING_HELP_TEXT())
							{
								HUD_CLEAR_HELP();
								HUD_CLEAR_HELP_QUEUE();
							}
							Function_195("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
							iLocal_169 = 1;
						}
					}
					if (iLocal_169)
					{
						if (Function_192(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_introGateway")) <= 15.0f)
						{
							iLocal_169 = 0;
						}
					}
					if (!iLocal_176)
					{
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_110) == 0)
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_BlipSquad6")))
							{
								iVar11 = 0;
								while (iVar11 < 3)
								{
									bVar12 = false;
									while (bVar12 < (SQUAD_GET_SIZE(bLocal_97[iVar11]) - 1))
									{
										if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_97[iVar11], bVar12)))
										{
											KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_97[iVar11], bVar12));
										}
										bVar12++;
									}
									iVar11++;
								}
								iLocal_176 = 1;
							}
						}
					}
					if (!iLocal_188)
					{
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) != 0 && Function_191(&bLocal_97) > 3)
						{
							if (IS_VOLUME_VALID(bLocal_94))
							{
								if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_94))
								{
									AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
									ACTOR_START_FORCE_HOLSTER(bLocal_113, 0, 0);
									TASK_CLEAR(bLocal_113);
									TASK_FACE_ACTOR(bLocal_113, Global_34573, 1, 3212836864);
									MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_113, 1);
									RESET_ANIM_SET_FOR_ACTOR(bLocal_113, 1);
									SET_ANIM_SET_FOR_ACTOR(bLocal_113, "excited_return", 0);
									SET_ACTION_NODE_FOR_ACTOR(bLocal_113, "excited_return/mobile_and_loop/loop");
									iLocal_188 = 1;
								}
							}
						}
					}
					if (Function_189(bLocal_90, 0, 1, 1, 1, 0))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_90)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_90));
						}
						Function_188(bLocal_90);
						bVar13 = GET_ACTORS_HORSE(Global_34573);
						Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse"));
						vVar14 = { StackVal, StackVal, Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse")) };
						iLocal_171 = 1;
						DECOR_SET_BOOL(Global_34573, "MakeBadAgain", true);
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) < 0 || Function_191(&bLocal_97) < 3)
						{
							bVar17 = CREATE_VOLUME_IN_LAYOUT(bLocal_89, Function_187(), 3, -1503,65f, 59,113f, 2460,141f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 6.0f);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar17);
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar17);
							CLEAR_AMBIENT_OBJECTS_VOLUME(bVar17, 15);
							DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(bVar17);
							if (IS_ACTOR_VALID(bVar13))
							{
								if (IS_ACTOR_IN_VOLUME(bVar13, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_CheckPlayerHorse")))
								{
									TELEPORT_ACTOR(bVar13, &vVar14, 1, 1, 1);
								}
							}
							DECOR_SET_BOOL(Global_34573, "PlayerTalkedHelper", true);
							AI_DONT_HARM_ACTOR(Global_34573);
							AI_DONT_HARM_ACTOR(bLocal_113);
							Function_182(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							Function_212(&iLocal_254);
							Function_211(&iLocal_254);
							Function_178(bLocal_89, 0, 1, 0, 0);
							AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_113, Global_34573, -1.0f, 0);
							AI_GOAL_LOOK_AT_ACTOR_NEW(Global_34573, bLocal_113, -1.0f, 0);
							SET_PLAYER_POSTURE(0, 1, 0);
							Function_176(Global_34573, 0);
							SET_ACTOR_UPDATE_PRIORITY(Global_34573, false);
							SET_OBJECT_POSITION(Global_34573, vLocal_141);
							SET_OBJECT_ORIENTATION(Global_34573, vLocal_144);
							AI_IGNORE_ACTOR(bLocal_113);
							ATTACH_PLAYER_TO_COVER(0, 1, 1);
							ACTOR_POP_NEXT_GAIT(Global_34573, 0, false);
							if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_174("PIK_MainSquad", FIND_NAMED_LAYOUT("PIK_AA_Layout"))) >= 0)
							{
								iLocal_198 = 7;
							}
							else
							{
								iLocal_198 = 9;
							}
						}
						else
						{
							iLocal_198 = 26;
						}
					}
				}
				else if (fVar10 > 20.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_113, 71, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					Function_173("PIK_Helper_PleaseUntie", bLocal_113, 20.0f, 0, "", 1);
					ADD_BLIP_FOR_ACTOR(bLocal_113, 325, 0, 2, 0);
					iLocal_198 = 6;
				}
				break;
			
			case 0x00000006:
				if (!IS_ACTOR_HOGTIED(bLocal_113))
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_113, 103, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					Function_173("PIK_Helper_ThanksUntie1", Global_34573, 25.0f, 0, "", 1);
					Function_173("PIK_Helper_ThanksUntie2", Global_34573, 25.0f, 0, "", 1);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_113, 0,25f);
					SET_ACTOR_PROOF(bLocal_113, 128);
					SET_CRIPPLE_ENABLE(bLocal_113, 0);
					SET_ACTOR_FACTION(bLocal_113, 20);
					SET_FACTIONS_STATUS_TWO_WAY(20, 14, 4);
					if (!Function_198(Global_30736) != 2)
					{
						Function_197(Global_30736, 1);
						Global_3385 = 1;
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
					}
					iLocal_198 = 36;
				}
				break;
			
			case 0x00000007:
				if (Function_171(&iLocal_254) < 0,5f)
				{
					Function_170();
					iLocal_198 = 8;
				}
				break;
			
			case 0x00000008:
				if (Function_171(&iLocal_254) < 4.0f)
				{
					Function_169();
					iLocal_198 = 10;
				}
				break;
			
			case 0x0000000A:
				if (Function_171(&iLocal_254) < 8,9f)
				{
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_113, 0);
					SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, -92,772f, 0.0f, 0);
					AI_GOAL_LOOK_CLEAR(bLocal_113);
					TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "introCover")), -1.0f, 0.0f);
					Function_167(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
					Function_211(&iLocal_248);
					if (!Function_198(Global_30736) != 2)
					{
						Function_197(Global_30736, 1);
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
					}
					Function_235(&iLocal_119, 128);
					Function_166(&uLocal_245, 2.0f);
					iLocal_198 = 12;
				}
				break;
			
			case 0x0000000C:
				if (Function_171(&iLocal_254) < 9.0f)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_113)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_113, 325, 0, 2, 0);
					}
					AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
					AI_CLEAR_DONT_HARM_ACTOR(bLocal_113);
					AI_STOP_IGNORING_ACTOR(bLocal_113);
					Function_201(&bLocal_97);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_113, 13, false);
					STOP_FORCE_LOOK_AT_COORD(bLocal_113);
					AI_GOAL_LOOK_CLEAR(bLocal_113);
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE();
					Function_200("PIK_Obj_KillGroup", 0x40f00000, 1, 2, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_KillGroup", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
					DECOR_SET_BOOL(Global_34573, "PrintThruCut", true);
					iVar18 = 0;
					while (iVar18 < 11)
					{
						Function_208(bLocal_97[iVar18], bLocal_113);
						Function_207(bLocal_97[iVar18], bLocal_113, 4);
						iVar18++;
					}
					iLocal_198 = 13;
				}
				break;
			
			case 0x0000000D:
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) == 0)
				{
					if (Function_171(&iLocal_248) < 7,1f)
					{
						if (SQUAD_IS_VALID(bLocal_97[6]))
						{
							if (!iLocal_159)
							{
								if (SQUAD_GET_SIZE(bLocal_97[6]) > 4)
								{
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_113);
									TASK_CLEAR(bLocal_113);
									TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "cover_low1")), -1.0f, 0.0f);
									Function_211(&iLocal_248);
									AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
									iLocal_159 = 1;
								}
							}
							if (!iLocal_160)
							{
								if (SQUAD_GET_SIZE(bLocal_97[6]) < 3)
								{
									TASK_CLEAR(bLocal_113);
									TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "cover_low1a")), -1.0f, 0.0f);
									iLocal_160 = 1;
								}
							}
							if (!iLocal_186)
							{
								if (Function_171(&iLocal_248) < 3.0f)
								{
									if (IS_ACTOR_SHOOTING(Global_34573) || IS_PLAYER_IN_COMBAT(0))
									{
										AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
										iLocal_186 = 1;
									}
								}
							}
							if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[6]) == 0)
							{
								AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
								Function_211(&iLocal_248);
								iLocal_198 = 14;
							}
						}
						if (!iLocal_166)
						{
							if (Function_238(bLocal_113, Global_34573) >= 10.0f)
							{
								Function_165();
								iLocal_166 = 1;
							}
						}
					}
				}
				if (!iLocal_178)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) == 0)
					{
						if (!Function_213(&iLocal_278))
						{
							Function_212(&iLocal_278);
							iLocal_178 = 1;
						}
					}
				}
				if (!iLocal_177)
				{
					if (Function_213(&iLocal_278))
					{
						if (Function_171(&iLocal_278) < 5.0f)
						{
							if (IS_ACTOR_IN_VOLUME(StackVal, bLocal_113))
							{
								TASK_CLEAR(bLocal_113);
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_113);
								bVar19 = TASK_SEQUENCE_OPEN();
								TASK_GO_NEAR_OBJECT(false, Local_0.f_248, 5.0f, 4, 0, 1);
								TASK_GO_NEAR_OBJECT(false, Local_0.f_252, 5.0f, 4, 0, 1);
								TASK_GO_NEAR_OBJECT(false, Local_0.f_256, 5.0f, 4, 0, 1);
								TASK_GO_NEAR_OBJECT(false, Local_0.f_260, 5.0f, 4, 0, 1);
								TASK_GO_NEAR_OBJECT(false, Local_0.f_264, 5.0f, 4, 0, 1);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_113, bVar19);
								TASK_SEQUENCE_RELEASE(bVar19, 1);
								LOG_ERROR("TRIGGERING FAIL SAFE 01");
								iLocal_177 = 1;
							}
						}
					}
				}
				break;
			
			case 0x0000000E:
				if (SQUAD_IS_VALID(bLocal_97[5]))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[5]) >= 0)
					{
						TASK_CLEAR(bLocal_113);
						TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "cover_low2")), -1.0f, 0.0f);
					}
				}
				else
				{
					LOG_ERROR("PIK_canyonSquad6 IS NOT VALID");
				}
				if (!iLocal_184)
				{
					if (Function_171(&iLocal_248) < 3.0f)
					{
						if (IS_ACTOR_SHOOTING(Global_34573) || IS_PLAYER_IN_COMBAT(0))
						{
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							iLocal_184 = 1;
						}
					}
				}
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[5]) == 0)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
					Function_211(&iLocal_248);
					iLocal_198 = 15;
				}
				if (!iLocal_177)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) == 0)
					{
						if (Function_213(&iLocal_278))
						{
							if (Function_171(&iLocal_278) < 10.0f)
							{
								if (IS_ACTOR_IN_VOLUME(StackVal, bLocal_113))
								{
									TASK_CLEAR(bLocal_113);
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_113);
									bVar20 = TASK_SEQUENCE_OPEN();
									TASK_GO_NEAR_OBJECT(false, Local_0.f_248, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_252, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_256, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_260, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_264, 5.0f, 4, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bLocal_113, bVar20);
									TASK_SEQUENCE_RELEASE(bVar20, 1);
									iLocal_177 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 0x0000000F:
				if (SQUAD_IS_VALID(bLocal_97[4]))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[4]) >= 0)
					{
						TASK_CLEAR(bLocal_113);
						TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "cover_low3")), -1.0f, 0.0f);
						iLocal_198 = 16;
					}
				}
				else
				{
					LOG_ERROR("PIK_canyonSquad6 IS NOT VALID");
				}
				if (!iLocal_185)
				{
					if (Function_171(&iLocal_248) < 3.0f)
					{
						if (IS_ACTOR_SHOOTING(Global_34573) || IS_PLAYER_IN_COMBAT(0))
						{
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							iLocal_185 = 1;
						}
					}
				}
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[4]) == 0)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
					Function_211(&iLocal_248);
					iLocal_198 = 16;
				}
				if (!iLocal_177)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) == 0)
					{
						if (Function_213(&iLocal_278))
						{
							if (Function_171(&iLocal_278) < 10.0f)
							{
								if (IS_ACTOR_IN_VOLUME(StackVal, bLocal_113))
								{
									TASK_CLEAR(bLocal_113);
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_113);
									bVar21 = TASK_SEQUENCE_OPEN();
									TASK_GO_NEAR_OBJECT(false, Local_0.f_248, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_252, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_256, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_260, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_264, 5.0f, 4, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bLocal_113, bVar21);
									TASK_SEQUENCE_RELEASE(bVar21, 1);
									iLocal_177 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 0x00000010:
				if (SQUAD_IS_VALID(bLocal_97[4]))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[4]) == 0)
					{
						TASK_CLEAR(bLocal_113);
						TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "cover_low4")), -1.0f, 0.0f);
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_110) >= 0)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_200("PIK_Obj_ClearBasin", 0x40f00000, 1, 2, 0, 0, 0);
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ClearBasin", 0, 0, false);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						}
						Function_212(&iLocal_263);
						Function_211(&iLocal_263);
						iLocal_198 = 17;
					}
				}
				else
				{
					LOG_ERROR("PIK_MainSquad IS NOT VALID");
				}
				if (!iLocal_177)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) == 0)
					{
						if (Function_213(&iLocal_278))
						{
							if (Function_171(&iLocal_278) < 10.0f)
							{
								if (IS_ACTOR_IN_VOLUME(StackVal, bLocal_113))
								{
									TASK_CLEAR(bLocal_113);
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_113);
									bVar22 = TASK_SEQUENCE_OPEN();
									TASK_GO_NEAR_OBJECT(false, Local_0.f_248, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_252, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_256, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_260, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(false, Local_0.f_264, 5.0f, 4, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bLocal_113, bVar22);
									TASK_SEQUENCE_RELEASE(bVar22, 1);
									iLocal_177 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 0x00000011:
				if (!iLocal_163)
				{
					if (Function_213(&iLocal_263))
					{
						if (Function_171(&iLocal_263) < 2.0f)
						{
							if (Function_238(Global_34573, bLocal_113) >= 12.0f)
							{
								Function_164();
								iLocal_163 = 1;
							}
						}
					}
				}
				if (!iLocal_161)
				{
					if (SQUAD_IS_VALID(bLocal_110))
					{
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_110) < 3)
						{
							TASK_CLEAR(bLocal_113);
							TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "cover_low5")), -1.0f, 0.0f);
							iLocal_161 = 1;
						}
					}
				}
				if (SQUAD_IS_VALID(bLocal_110))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_110) < 0)
					{
						if (!Function_213(&iLocal_269))
						{
							Function_212(&iLocal_269);
							AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
						}
					}
				}
				if (Function_213(&iLocal_269))
				{
					if (Function_171(&iLocal_269) <= 2.0f)
					{
						iLocal_168 = 1;
						CLEAR_ACTOR_MIN_SPEED(bLocal_113);
						CLEAR_ACTOR_MAX_SPEED(bLocal_113);
						Function_212(&iLocal_251);
						Function_211(&iLocal_251);
						if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[3]) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[2]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[1]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[0]) < 0)
						{
							Function_182(1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							Function_160(bLocal_89, 0, 1, 0, 0);
							bLocal_192 = true;
						}
						else
						{
							Function_182(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1);
							UI_PUSH("CutsceneWithMessages");
							Function_154(bLocal_89, 0, 1, 0, 0);
						}
						bLocal_117 = Function_152("pikesBasin", "placement03", 1);
						bLocal_118 = Function_152("pikesBasin", "placement03", 2);
						iLocal_174 = 1;
						if (IS_DOOR_VALID(bLocal_117))
						{
							Function_151(bLocal_117, 1);
							OPEN_DOOR_DIRECTION(bLocal_117, true);
						}
						else
						{
							LOG_ERROR("GateDoor01 is not valid");
						}
						if (IS_DOOR_VALID(bLocal_118))
						{
							Function_151(bLocal_118, 1);
							OPEN_DOOR_DIRECTION(bLocal_118, false);
						}
						else
						{
							LOG_ERROR("GateDoor02 is not valid");
						}
						ACTOR_START_FORCE_HOLSTER(bLocal_113, 0, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_113, 1);
						MEMORY_PREFER_WALKING(bLocal_113, true);
						if (IS_ACTOR_RIDING(Global_34573))
						{
							ACTOR_DISMOUNT_NOW(Global_34573);
						}
						if (IS_ACTOR_RIDING(bLocal_113))
						{
							ACTOR_DISMOUNT_NOW(bLocal_113);
						}
						SET_OBJECT_POSITION(Global_34573, vLocal_129);
						SET_OBJECT_ORIENTATION(Global_34573, vLocal_132);
						Function_176(Global_34573, 0);
						TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
						SET_OBJECT_POSITION(bLocal_113, vLocal_135);
						SET_OBJECT_ORIENTATION(bLocal_113, vLocal_138);
						Function_176(bLocal_113, 0);
						TASK_STAND_STILL(bLocal_113, -1.0f, 0, 0);
						AI_GOAL_LOOK_AT_ACTOR(bLocal_113, Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
						AI_GOAL_LOOK_AT_ACTOR(Global_34573, bLocal_113, 0, 1065353216, 3212836864, 3212836864, 0);
						TASK_CLEAR(Global_34573);
						TASK_CLEAR(bLocal_113);
						TASK_FACE_ACTOR(Global_34573, bLocal_113, 1, 3212836864);
						TASK_FACE_ACTOR(bLocal_113, Global_34573, 1, 3212836864);
						iLocal_198 = 18;
					}
				}
				break;
			
			case 0x00000012:
				if (Function_171(&iLocal_251) < 3.0f)
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_113, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_113, "excited_return", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_113, "excited_return/mobile_and_loop/loop");
					iLocal_198 = 19;
				}
				break;
			
			case 0x00000013:
				if (Function_171(&iLocal_251) < 3.0f)
				{
					if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[3]) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[2]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[1]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[0]) < 0)
					{
						Function_150();
						SET_CAMERA_POSITION(GET_GAME_CAMERA(), -1175,483f, 76,805f, 2372,638f);
						SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, -318,313f, 0.0f, 0);
						iLocal_198 = 20;
					}
					else
					{
						Function_149();
						SET_CAMERA_POSITION(GET_GAME_CAMERA(), -1175,483f, 76,805f, 2372,638f);
						SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, -318,313f, 0.0f, 0);
						iLocal_198 = 20;
					}
				}
				break;
			
			case 0x00000014:
				if (bLocal_192)
				{
					if (Function_171(&iLocal_251) < 7.0f)
					{
						if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[3]) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[2]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[1]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[0]) < 0)
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_113, 1);
							Function_167(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							HUD_CLEAR_OBJECTIVE();
							Function_200("PIK_Obj_NeedClear", 0x40f00000, 1, 2, 0, 0, 0);
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_NeedClear", 0, 0, false);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							MEMORY_PREFER_RIDING(bLocal_113, false);
							TASK_CLEAR(bLocal_113);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_113, false);
							vVar23 = { -1185,131f, 76,193f, 2358,493f };
							vVar26 = { -1180,357f, 76,299f, 2366,432f };
							vVar29 = { -1168,845f, 76,299f, 2361,572f };
							bVar32 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PIK_AA_Layout"), "aHorsey1");
							bVar33 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PIK_AA_Layout"), "aHorsey2");
							bVar34 = TASK_SEQUENCE_OPEN();
							if (IS_ACTOR_ALIVE(bVar32))
							{
								TASK_MOUNT(false, bVar32, 0, 1, 2, 2);
							}
							else
							{
								TASK_MOUNT(false, bVar33, 0, 1, 2, 2147483647);
							}
							TASK_GO_TO_COORD(false, &vVar23, 2);
							TASK_GO_TO_COORD(false, &vVar26, 2);
							TASK_GO_TO_COORD(false, &vVar29, 2);
							TASK_FOLLOW_OBJECT_ALONG_PATH(false, Global_34573, Local_0.f_268, 30.0f, 1, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_113, bVar34);
							TASK_SEQUENCE_RELEASE(bVar34, 1);
							Function_148(bLocal_111);
							SQUAD_GOALS_CLEAR(bLocal_111);
							Function_147(bLocal_111, Global_34573, Local_0.f_268, 25.0f, 4294967295, 1, 7.0f);
							Function_146(bLocal_111, bLocal_93);
							if (!Function_145(bLocal_97[3], 1))
							{
								Function_144(bLocal_97[3], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
							}
							iLocal_198 = 21;
						}
					}
				}
				if (!iLocal_193)
				{
					if (!bLocal_192)
					{
						if (Function_213(&iLocal_251))
						{
							if (Function_171(&iLocal_251) < 11.0f)
							{
								if (IS_ACTOR_VALID(bLocal_113))
								{
									DESTROY_ACTOR(bLocal_113);
									iLocal_194 = 1;
								}
								if (SQUAD_IS_VALID(bLocal_111))
								{
									Function_143(bLocal_111);
									iLocal_196 = 1;
								}
								PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
								iLocal_193 = 1;
							}
						}
					}
				}
				if (!bLocal_192)
				{
					if (Function_213(&iLocal_251))
					{
						if (Function_171(&iLocal_251) < 16.0f)
						{
							if (!iLocal_170)
							{
								Function_167(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
								UI_POP("CutsceneWithMessages");
								AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
								Function_139(200, 1, 0);
								Function_126(50, 1, 0);
								Function_124(Function_125(1, 1, 1, 0, 0), 1);
								Function_122(9, 0, 1);
								SET_WEAPONENUM_LOCKED(15, 0);
								GIVE_WEAPON_TO_ACTOR(Global_34573, 15, false, 1, 1);
								Function_199(Global_30736, 0);
								if (Function_213(&iLocal_275))
								{
									bLocal_153 = Function_171(&iLocal_275);
									if (Function_121(462) < 0.0f)
									{
										if (bLocal_153 > Function_121(462))
										{
											Function_120(462, bLocal_153, 0);
										}
									}
									else
									{
										Function_120(462, bLocal_153, 0);
									}
								}
								AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
								Function_90(Global_30736);
								Function_36(Global_30736, 1, 1, 0);
								SET_PLAYER_ENDLESS_READYMODE(0, 0);
								if ((Function_35(Global_30738) <= 1 && Function_35(Global_30734) <= 1) && Function_35(Global_30736) <= 1)
								{
									if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
									{
										AWARD_ACHIEVEMENT(12);
									}
								}
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
								DECOR_SET_BOOL(Global_34573, "RemoveExtraBlips", true);
								DECOR_SET_BOOL(Global_34573, "EndMission", true);
								iLocal_170 = 1;
							}
						}
					}
				}
				if (!bLocal_192)
				{
					if (Function_213(&iLocal_251))
					{
						if (Function_171(&iLocal_251) < 19.0f)
						{
							iLocal_198 = 37;
						}
					}
				}
				break;
			
			case 0x00000015:
				if (!iLocal_165)
				{
					if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[3]) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[2]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[1]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[0]) != 0)
					{
						iLocal_197 = 1;
						if (IS_ACTOR_VALID(bLocal_113))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_113)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_113));
							}
						}
						TASK_CLEAR(bLocal_113);
						CLEAR_ACTOR_MIN_SPEED(bLocal_113);
						CLEAR_ACTOR_MAX_SPEED(bLocal_113);
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_113, false);
						TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_113, bLocal_91, Local_0.f_268, 10.0f, 1, 0);
						Function_148(bLocal_111);
						SQUAD_GOALS_CLEAR(bLocal_111);
						bLocal_122 = false;
						while (bLocal_122 < (SQUAD_GET_SIZE(bLocal_111) - 1))
						{
							SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_111, false, 2, 4294967295);
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(SQUAD_GET_ACTOR_BY_INDEX(bLocal_111, bLocal_122), Local_0.f_268, 2, 0, 0, 1, 5.0f);
							bLocal_122++;
						}
						if (Function_213(&iLocal_275))
						{
							bLocal_153 = Function_171(&iLocal_275);
							if (Function_121(462) < 0.0f)
							{
								if (bLocal_153 > Function_121(462))
								{
									Function_120(462, bLocal_153, 0);
								}
							}
							else
							{
								Function_120(462, bLocal_153, 0);
							}
						}
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
						iLocal_165 = 1;
						if (!Function_213(&iLocal_281))
						{
							Function_212(&iLocal_281);
						}
						uLocal_95 = Function_31(bLocal_89, 0, 1, 1, 0);
						DECOR_SET_BOOL(Global_34573, "RemoveExtraBlips", true);
						iLocal_198 = 23;
					}
				}
				break;
			
			case 0x00000017:
				if (Function_213(&iLocal_281))
				{
					if (Function_171(&iLocal_281) <= 2.0f)
					{
						Function_182(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1);
						UI_PUSH("CutsceneWithMessages");
						Function_30(uLocal_95, 0);
						if (IS_ACTOR_VALID(bLocal_113))
						{
							bLocal_116 = GET_ACTORS_HORSE(bLocal_113);
						}
						if (IS_ACTOR_VALID(bLocal_116))
						{
							DESTROY_ACTOR(bLocal_116);
						}
						bVar35 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PIK_AA_Layout"), "aHorsey1");
						bVar36 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PIK_AA_Layout"), "aHorsey2");
						if (IS_ACTOR_VALID(bVar35))
						{
							if (GET_MOUNT(Global_34573) == bVar35)
							{
								RELEASE_ACTOR(bVar35);
							}
							else
							{
								DESTROY_ACTOR(bVar35);
							}
						}
						if (IS_ACTOR_VALID(bVar36))
						{
							if (GET_MOUNT(Global_34573) == bVar36)
							{
								RELEASE_ACTOR(bVar36);
							}
							else
							{
								DESTROY_ACTOR(bVar36);
							}
						}
						if (SQUAD_IS_VALID(bLocal_96))
						{
							Function_28(&bLocal_96, 0, 0);
							DESTROY_OBJECT(bLocal_96);
						}
						if (IS_ACTOR_VALID(bLocal_113))
						{
							DESTROY_ACTOR(bLocal_113);
							iLocal_194 = 1;
						}
						if (SQUAD_IS_VALID(bLocal_111))
						{
							Function_143(bLocal_111);
							iLocal_196 = 1;
						}
						if (IS_ACTOR_VALID(uLocal_114[0]))
						{
							DESTROY_ACTOR(uLocal_114[0]);
						}
						Function_211(&iLocal_281);
						iLocal_198 = 24;
					}
				}
				break;
			
			case 0x00000018:
				if (!iLocal_195)
				{
					if (Function_213(&iLocal_281))
					{
						if (Function_171(&iLocal_281) <= 1,5f)
						{
							PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
							iLocal_195 = 1;
						}
					}
				}
				if (!iLocal_187)
				{
					if (Function_213(&iLocal_281))
					{
						if (Function_171(&iLocal_281) <= 7.0f)
						{
							Function_167(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
							UI_POP("CutsceneWithMessages");
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_199(Global_30736, 0);
							Function_139(200, 1, 0);
							Function_126(50, 1, 0);
							Function_124(Function_125(1, 1, 1, 0, 0), 1);
							Function_122(9, 0, 1);
							SET_WEAPONENUM_LOCKED(15, 0);
							GIVE_WEAPON_TO_ACTOR(Global_34573, 15, false, 1, 1);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_90(Global_30736);
							Function_36(Global_30736, 1, 1, 0);
							SET_PLAYER_ENDLESS_READYMODE(0, 0);
							if ((Function_35(Global_30738) <= 1 && Function_35(Global_30734) <= 1) && Function_35(Global_30736) <= 1)
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
								{
									AWARD_ACHIEVEMENT(12);
								}
							}
							iLocal_187 = 1;
						}
					}
				}
				if (Function_213(&iLocal_281))
				{
					if (Function_171(&iLocal_281) <= 10.0f)
					{
						iLocal_198 = 37;
						DECOR_SET_BOOL(Global_34573, "EndMission", true);
					}
				}
				break;
			
			case 0x00000016:
				SQUAD_COMPUTE_CENTROID(bLocal_111, &vLocal_126);
				SET_OBJECT_POSITION(bLocal_91, vLocal_126);
				if (DECOR_CHECK_EXIST(Global_34573, "EndMission"))
				{
					if (!iLocal_164)
					{
						if (Function_238(bLocal_113, Global_34573) >= 10.0f)
						{
							Function_27();
							iLocal_164 = 1;
						}
					}
				}
				break;
			
			case 0x0000001A:
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_113)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_113, 325, 0, 2, 0);
				}
				if (!IS_PLAYER_CONTROLLABLE(0))
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_110) >= 0)
				{
					Function_26();
					AI_STOP_IGNORING_ACTOR(bLocal_113);
					Function_164();
					Function_212(&iLocal_257);
					Function_211(&iLocal_257);
					iLocal_198 = 27;
				}
				else
				{
					Function_26();
					Function_182(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1);
					UI_PUSH("CutsceneWithMessages");
					Function_20(bLocal_89, 0, 1, 0, 0);
					Function_212(&iLocal_266);
					Function_211(&iLocal_266);
					SET_OBJECT_POSITION(Global_34573, vLocal_141);
					SET_OBJECT_ORIENTATION(Global_34573, vLocal_144);
					SET_OBJECT_POSITION(bLocal_113, vLocal_147);
					SET_OBJECT_ORIENTATION(bLocal_113, vLocal_150);
					Function_176(Global_34573, 0);
					Function_176(bLocal_113, 0);
					TASK_CLEAR(Global_34573);
					TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
					TASK_CLEAR(bLocal_113);
					TASK_STAND_STILL(bLocal_113, -1.0f, 0, 0);
					Function_149();
					iLocal_198 = 33;
				}
				break;
			
			case 0x0000001B:
				if (Function_171(&iLocal_257) < 4.0f)
				{
					if (!iLocal_157)
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_113, 0);
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_113);
						TASK_CLEAR(bLocal_113);
						ACTOR_END_FORCE_HOLSTER(bLocal_113);
						iLocal_168 = 1;
						bVar37 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(false, Local_0.f_248, 5.0f, 4, 0, 1);
						TASK_GO_NEAR_OBJECT(false, Local_0.f_252, 5.0f, 4, 0, 1);
						TASK_GO_NEAR_OBJECT(false, Local_0.f_256, 5.0f, 4, 0, 1);
						TASK_GO_NEAR_OBJECT(false, Local_0.f_260, 5.0f, 4, 0, 1);
						TASK_GO_NEAR_OBJECT(false, Local_0.f_264, 5.0f, 4, 0, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_113, bVar37);
						TASK_SEQUENCE_RELEASE(bVar37, 1);
						Function_200("PIK_Obj_ClearBasin", 0x40f00000, 1, 2, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ClearBasin", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						if (!Function_145(Function_174("PIK_MainSquad", FIND_NAMED_LAYOUT("PIK_AA_Layout")), 1))
						{
							Function_144(Function_174("PIK_MainSquad", FIND_NAMED_LAYOUT("PIK_AA_Layout")), 322, 4294967295, -1.0f, -1.0f, 0x3f800000, 2048, 0);
						}
						iLocal_157 = 1;
						iLocal_198 = 28;
					}
				}
				break;
			
			case 0x0000001C:
				if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_blipMainCampSquad")))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_110) >= 0)
					{
						if (IS_ACTOR_VALID(bLocal_113))
						{
							if (IS_ACTOR_ALIVE(bLocal_113))
							{
								TASK_CLEAR(bLocal_113);
								TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "cover_low4")), -1.0f, 0.0f);
								Function_16();
								iLocal_198 = 29;
							}
						}
					}
				}
				break;
			
			case 0x0000001D:
				if (SQUAD_IS_VALID(bLocal_110))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_110) < 0)
					{
						if (!Function_213(&iLocal_272))
						{
							Function_212(&iLocal_272);
						}
					}
				}
				if (Function_213(&iLocal_272))
				{
					if (Function_171(&iLocal_272) <= 2.0f)
					{
						iLocal_168 = 1;
						Function_182(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1);
						UI_PUSH("CutsceneWithMessages");
						Function_212(&iLocal_260);
						Function_211(&iLocal_260);
						Function_154(bLocal_89, 0, 1, 0, 0);
						bLocal_117 = Function_152("pikesBasin", "placement03", 1);
						bLocal_118 = Function_152("pikesBasin", "placement03", 2);
						iLocal_174 = 1;
						if (IS_DOOR_VALID(bLocal_117))
						{
							Function_151(bLocal_117, 1);
							OPEN_DOOR_DIRECTION(bLocal_117, true);
						}
						else
						{
							LOG_ERROR("GateDoor01 is not valid");
						}
						if (IS_DOOR_VALID(bLocal_118))
						{
							Function_151(bLocal_118, 1);
							OPEN_DOOR_DIRECTION(bLocal_118, false);
						}
						else
						{
							LOG_ERROR("GateDoor02 is not valid");
						}
						ACTOR_START_FORCE_HOLSTER(bLocal_113, 0, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_113, 1);
						if (IS_ACTOR_RIDING(Global_34573))
						{
							ACTOR_DISMOUNT_NOW(Global_34573);
						}
						if (IS_ACTOR_RIDING(bLocal_113))
						{
							ACTOR_DISMOUNT_NOW(bLocal_113);
						}
						Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston"));
						SET_OBJECT_POSITION(Global_34573, Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston")));
						Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston"));
						SET_OBJECT_ORIENTATION(Global_34573, Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston")));
						Function_176(Global_34573, 0);
						TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
						Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher"));
						SET_OBJECT_POSITION(bLocal_113, Function_205(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher")));
						Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher"));
						SET_OBJECT_ORIENTATION(bLocal_113, Function_204(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher")));
						Function_176(bLocal_113, 0);
						TASK_STAND_STILL(bLocal_113, -1.0f, 0, 0);
						AI_GOAL_LOOK_AT_ACTOR(bLocal_113, Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
						AI_GOAL_LOOK_AT_ACTOR(Global_34573, bLocal_113, 0, 1065353216, 3212836864, 3212836864, 0);
						TASK_CLEAR(Global_34573);
						TASK_CLEAR(bLocal_113);
						TASK_FACE_ACTOR(Global_34573, bLocal_113, 1, 3212836864);
						TASK_FACE_ACTOR(bLocal_113, Global_34573, 1, 3212836864);
						if (IS_ACTOR_VALID(bLocal_113))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_113)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_113));
							}
						}
						iLocal_198 = 30;
					}
				}
				break;
			
			case 0x0000001E:
				if (Function_213(&iLocal_260))
				{
					if (Function_171(&iLocal_260) < 2.0f)
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_113, 0);
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
						SET_ANIM_SET_FOR_ACTOR(bLocal_113, "stand_shakehands", 0);
						SET_LINKED_ANIM_TARGET(bLocal_113, Global_34573);
						SET_ACTION_NODE_FOR_ACTOR(bLocal_113, "stand_shakehands");
						iLocal_198 = 31;
					}
				}
				break;
			
			case 0x0000001F:
				if (Function_213(&iLocal_260))
				{
					if (Function_171(&iLocal_260) < 3.0f)
					{
						Function_149();
						SET_CAMERA_POSITION(GET_GAME_CAMERA(), -1175,483f, 76,805f, 2372,638f);
						SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, -318,313f, 0.0f, 0);
						iLocal_198 = 32;
					}
				}
				break;
			
			case 0x00000020:
				if (!iLocal_191)
				{
					if (Function_213(&iLocal_260))
					{
						if (Function_171(&iLocal_260) < 11.0f)
						{
							if (IS_ACTOR_VALID(bLocal_113))
							{
								DESTROY_ACTOR(bLocal_113);
								iLocal_194 = 1;
							}
							if (SQUAD_IS_VALID(bLocal_111))
							{
								Function_143(bLocal_111);
								iLocal_196 = 1;
							}
							PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
							iLocal_191 = 1;
						}
					}
				}
				if (Function_213(&iLocal_260))
				{
					if (Function_171(&iLocal_260) < 16.0f)
					{
						if (!iLocal_162)
						{
							Function_167(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
							UI_POP("CutsceneWithMessages");
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_139(200, 1, 0);
							Function_126(50, 1, 0);
							Function_124(Function_125(1, 1, 1, 0, 0), 1);
							Function_122(9, 0, 1);
							SET_WEAPONENUM_LOCKED(15, 0);
							GIVE_WEAPON_TO_ACTOR(Global_34573, 15, false, 1, 1);
							Function_199(Global_30736, 0);
							if (Function_213(&iLocal_275))
							{
								bLocal_153 = Function_171(&iLocal_275);
								if (Function_121(462) < 0.0f)
								{
									if (bLocal_153 > Function_121(462))
									{
										Function_120(462, bLocal_153, 0);
									}
								}
								else
								{
									Function_120(462, bLocal_153, 0);
								}
							}
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_90(Global_30736);
							Function_36(Global_30736, 1, 1, 0);
							SET_PLAYER_ENDLESS_READYMODE(0, 0);
							if ((Function_35(Global_30738) <= 1 && Function_35(Global_30734) <= 1) && Function_35(Global_30736) <= 1)
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
								{
									AWARD_ACHIEVEMENT(12);
								}
							}
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
							DECOR_SET_BOOL(Global_34573, "RemoveExtraBlips", true);
							iLocal_162 = 1;
						}
					}
				}
				if (Function_213(&iLocal_260))
				{
					if (Function_171(&iLocal_260) < 19.0f)
					{
						iLocal_198 = 37;
						DECOR_SET_BOOL(Global_34573, "EndMission", true);
					}
				}
				break;
			
			case 0x00000021:
				if (Function_213(&iLocal_266))
				{
					if (Function_171(&iLocal_266) <= 1.0f)
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_113, 0);
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
						SET_ANIM_SET_FOR_ACTOR(bLocal_113, "stand_shakehands", 0);
						SET_LINKED_ANIM_TARGET(bLocal_113, Global_34573);
						SET_ACTION_NODE_FOR_ACTOR(bLocal_113, "stand_shakehands");
						iLocal_198 = 34;
					}
				}
				break;
			
			case 0x00000022:
				if (!iLocal_189)
				{
					if (Function_213(&iLocal_266))
					{
						if (Function_171(&iLocal_266) <= 8.0f)
						{
							if (!DECOR_CHECK_EXIST(Global_34573, "TriggerSpecialCase"))
							{
								if (IS_ACTOR_VALID(bLocal_113))
								{
									if (IS_ACTOR_VALID(bLocal_113))
									{
										DESTROY_ACTOR(bLocal_113);
										iLocal_194 = 1;
									}
									PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
									iLocal_189 = 1;
								}
							}
						}
					}
				}
				if (!iLocal_190)
				{
					if (Function_213(&iLocal_266))
					{
						if (Function_171(&iLocal_266) <= 15.0f)
						{
							Function_167(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
							UI_POP("CutsceneWithMessages");
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							DECOR_SET_BOOL(Global_34573, "TriggerSpecialCase", true);
							Function_139(200, 1, 0);
							Function_126(50, 1, 0);
							Function_124(Function_125(1, 1, 1, 0, 0), 1);
							Function_122(9, 0, 1);
							SET_WEAPONENUM_LOCKED(15, 0);
							GIVE_WEAPON_TO_ACTOR(Global_34573, 15, false, 1, 1);
							Function_199(Global_30736, 0);
							if (Function_213(&iLocal_275))
							{
								bLocal_153 = Function_171(&iLocal_275);
								if (Function_121(462) < 0.0f)
								{
									if (bLocal_153 > Function_121(462))
									{
										Function_120(462, bLocal_153, 0);
									}
								}
								else
								{
									Function_120(462, bLocal_153, 0);
								}
							}
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_90(Global_30736);
							Function_36(Global_30736, 1, 1, 0);
							SET_PLAYER_ENDLESS_READYMODE(0, 0);
							if ((Function_35(Global_30738) <= 1 && Function_35(Global_30734) <= 1) && Function_35(Global_30736) <= 1)
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
								{
									AWARD_ACHIEVEMENT(12);
								}
							}
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
							DECOR_SET_BOOL(Global_34573, "RemoveExtraBlips", true);
							iLocal_190 = 1;
						}
					}
				}
				if (Function_213(&iLocal_266))
				{
					if (Function_171(&iLocal_266) <= 19.0f)
					{
						iLocal_198 = 37;
						DECOR_SET_BOOL(Global_34573, "EndMission", true);
					}
				}
				break;
			
			case 0x00000024:
				if (!iLocal_158)
				{
					TASK_CLEAR(bLocal_113);
					SQUAD_GOALS_CLEAR(bLocal_96);
					SQUAD_GOAL_ADD_BATTLE_ALLIES(bLocal_96, 0, Global_34573, 4294967295);
					iLocal_158 = 1;
				}
				break;
			
			case 0x00000009:
				if (!iLocal_167)
				{
					Function_170();
					Function_169();
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_90)))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_90));
					}
					DESTROY_OBJECT(bLocal_90);
					SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, -92,772f, 0.0f, 0);
					iLocal_167 = 1;
				}
				if (!iLocal_182)
				{
					if (Function_171(&iLocal_254) < 9.0f)
					{
						AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
						AI_CLEAR_DONT_HARM_ACTOR(bLocal_113);
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_113)))
						{
							ADD_BLIP_FOR_ACTOR(bLocal_113, 325, 0, 2, 0);
						}
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_113, 0);
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_113);
						TASK_CLEAR(bLocal_113);
						SQUAD_GOALS_CLEAR(bLocal_96);
						SQUAD_GOAL_ADD_BATTLE_ALLIES(bLocal_96, 0, Global_34573, 4294967295);
						Function_167(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
						AI_STOP_IGNORING_ACTOR(bLocal_113);
						TASK_CLEAR(Global_34573);
						if (!IS_PLAYER_CONTROLLABLE(0))
						{
							SET_PLAYER_CONTROL(0, 1, 0, 0);
						}
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_200("PIK_Obj_PutDown", 0x40f00000, 1, 2, 0, 0, 0);
						iLocal_182 = 1;
					}
				}
				if (!iLocal_183)
				{
					if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[6]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[5]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[4]) != 0)
					{
						if (Function_213(&iLocal_275))
						{
							bLocal_153 = Function_171(&iLocal_275);
							if (Function_121(462) < 0.0f)
							{
								if (bLocal_153 > Function_121(462))
								{
									Function_120(462, bLocal_153, 0);
								}
							}
							else
							{
								Function_120(462, bLocal_153, 0);
							}
						}
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
						DECOR_SET_BOOL(Global_34573, "RemoveExtraBlips", true);
						iLocal_183 = 1;
						if (!Function_213(&iLocal_281))
						{
							Function_212(&iLocal_281);
						}
						uLocal_95 = Function_31(bLocal_89, 0, 1, 1, 0);
						iLocal_198 = 23;
					}
				}
				break;
			
			case 0x00000025:
				if (!iLocal_180)
				{
					if (Function_198(Global_30736) == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_FLEEING", true, false, 2, 0, true, false);
						}
					}
					SET_PLAYER_ENDLESS_READYMODE(0, 0);
					Function_12(&iLocal_199);
					if (!IS_PLAYER_CONTROLLABLE(0))
					{
						SET_PLAYER_CONTROL(0, 1, 0, 0);
					}
					if (DECOR_CHECK_EXIST(Global_34573, "TriggerSpecialCase"))
					{
						DECOR_REMOVE(Global_34573, "TriggerSpecialCase");
					}
					if (DECOR_CHECK_EXIST(Global_34573, "CleanupHerding"))
					{
						DECOR_REMOVE(Global_34573, "CleanupHerding");
					}
					if (DECOR_CHECK_EXIST(Global_34573, "EndMission"))
					{
						DECOR_REMOVE(Global_34573, "EndMission");
					}
					if (DECOR_CHECK_EXIST(Global_34573, "shakehands_noCam"))
					{
						DECOR_REMOVE(Global_34573, "shakehands_noCam");
					}
					if (IS_ACTOR_VALID(bLocal_113))
					{
						RELEASE_ACTOR(bLocal_113);
					}
					if (SQUAD_IS_VALID(bLocal_96))
					{
						Function_28(&bLocal_96, 0, 0);
						DESTROY_OBJECT(bLocal_96);
					}
					if (IS_LAYOUTREF_VALID(bLocal_89))
					{
						RELEASE_LAYOUT_OBJECTS(bLocal_89);
						RELEASE_LAYOUT_REF(bLocal_89);
					}
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					iLocal_198 = 0;
					iLocal_180 = 1;
				}
				break;
		}
		WAIT(false);
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_12(&iLocal_199);
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "shakehands_noCam"))
	{
		DECOR_REMOVE(Global_34573, "shakehands_noCam");
	}
	if (Function_198(Global_30736) == 2)
	{
		Function_2(Global_30736);
	}
	if (IS_ACTOR_VALID(bLocal_113))
	{
		RELEASE_ACTOR(bLocal_113);
	}
	if (SQUAD_IS_VALID(bLocal_96))
	{
		Function_28(&bLocal_96, 0, 0);
		DESTROY_OBJECT(bLocal_96);
	}
	if (IS_LAYOUTREF_VALID(bLocal_89))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_89);
		RELEASE_LAYOUT_REF(bLocal_89);
	}
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	CLEAR_PRINTED_OBJECTIVE();
	Function_1();
	if (IS_LAYOUTREF_VALID(bLocal_89))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_89);
		RELEASE_LAYOUT_REF(bLocal_89);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x31BF / 12735
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_2(bool bParam0) //Position: 0x31CA / 12746
{
	int iVar0;
	
	if (!Function_10(bParam0))
	{
		Function_8();
		return;
	}
	iVar0 = Function_7(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_3("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_3(char* cParam0, bool bParam1) //Position: 0x321D / 12829
{
	struct<4> Var0;
	
	if (!Function_10(bParam1))
	{
		return;
	}
	switch (Function_7(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_4(Function_5(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_7(bParam1), Function_5(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_7(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_7(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_7(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_7(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_7(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_4(int iParam0) //Position: 0x3341 / 13121
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_5(bool bParam0) //Position: 0x3366 / 13158
{
	if (!Function_6(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_6(int iParam0) //Position: 0x3386 / 13190
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_7(bool bParam0) //Position: 0x339D / 13213
{
	if (!Function_6(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_8() //Position: 0x33B8 / 13240
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
			Function_9(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_9(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x35FF / 13823
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_10(int iParam0) //Position: 0x3628 / 13864
{
	if (!Function_6(iParam0))
	{
		return 0;
	}
	if (!Function_11(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_11(int iParam0) //Position: 0x364C / 13900
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_12(int iParam0) //Position: 0x3661 / 13921
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_13(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x3687 / 13959
{
	if (Function_15(uParam0[iParam13], 4))
	{
		if (Function_15(uParam0[iParam13], 1))
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
			Function_14(uParam0[iParam13], 1);
			Function_14(uParam0[iParam13], 2);
			Function_14(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x37B5 / 14261
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x37CF / 14287
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x37EC / 14316
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_BasinEarly", "Pikes_BasinEarly", false, 1, 1, 0, 1);
		Function_17(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_17(int iParam0) //Position: 0x3835 / 14389
{
	Function_18(0, Global_34573, iParam0, 0);
	Function_18(1, bLocal_113, iParam0, 0);
	return;
}

void Function_18(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x384E / 14414
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_236(uParam2, Function_19(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

int Function_19(bool bParam0) //Position: 0x3873 / 14451
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_20(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x387F / 14463
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_187(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PK_SpecialCase_Ending", 4, 1);
	}
	Function_21(&bVar0);
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

void Function_21(int iParam0) //Position: 0x3900 / 14592
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_25(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_24(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_23(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_22(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 5.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 2, 3, 9,5f, 2, 0);
	return;
}

void Function_22(int iParam0) //Position: 0x396F / 14703
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1567,24f, 69,14285f, 2447,577f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,041901f, -1,958359f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_23(int iParam0) //Position: 0x39D9 / 14809
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1565,941f, 69,13454f, 2444,802f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,023458f, -2,153817f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_24(int iParam0) //Position: 0x3A43 / 14915
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41,05698f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1505,617f, 60,36197f, 2461,962f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,062034f, -1,05324f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_25(var uParam0) //Position: 0x3AAD / 15021
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 41,57376f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -1503,57f, 60,49177f, 2464,368f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,241011f, -0,886658f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_26() //Position: 0x3B17 / 15127
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_27() //Position: 0x3B2C / 15148
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_CanyonExit", "Pikes_CanyonExit", false, 1, 1, 0, 1);
		Function_17(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_28(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3B75 / 15221
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_29(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_29(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3BF1 / 15345
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_30(bool bParam0, bool bParam1) //Position: 0x3C0B / 15371
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

var Function_31(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x3C20 / 15392
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_187(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PIK_Vista01", 2, 1);
	}
	Function_32(&bVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_32(int iParam0) //Position: 0x3C97 / 15511
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_34(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_33(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.0f, 0, 0);
	return;
}

void Function_33(int iParam0) //Position: 0x3CCC / 15564
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 57,75359f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1298,358f, 89,32796f, 2378,287f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,085643f, -1,275337f, -0,000837f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_34(int iParam0) //Position: 0x3D3A / 15674
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 57,75359f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1298,552f, 90,06156f, 2378,257f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,042042f, -1,742399f, -0,000834f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

int Function_35(bool bParam0) //Position: 0x3DA8 / 15784
{
	if (!Function_6(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_36(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3DC2 / 15810
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_10(bParam0))
	{
		Function_8();
		return;
	}
	iVar0 = Function_7(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_5(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_89(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_88(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_82();
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
		Function_3("DEED_COMPLETE", bParam0);
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
			Function_77(bParam0);
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
						switch (Function_5(bParam0))
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
			Function_40(1);
			Function_38(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_37(bParam0, &Var14);
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

void Function_37(int iParam0, int iParam1) //Position: 0x3FD4 / 16340
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_38(bool bParam0, int iParam1) //Position: 0x4010 / 16400
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_39())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_39() //Position: 0x4052 / 16466
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_40(bool bParam0) //Position: 0x405B / 16475
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_70();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_42();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_41(&Global_63095, 1);
		Function_41(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_41(int iParam0, int iParam1) //Position: 0x40AC / 16556
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_42() //Position: 0x40BF / 16575
{
	Function_68();
	Function_67();
	Function_67();
	Function_66();
	Function_66();
	Function_65();
	Function_65();
	Function_50();
	Function_50();
	if (!Function_39())
	{
		Function_47();
		Function_46();
		Function_45();
		Function_44();
	}
	Function_43();
	return;
}

void Function_43() //Position: 0x40F2 / 16626
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

void Function_44() //Position: 0x41F8 / 16888
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

void Function_45() //Position: 0x422B / 16939
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

void Function_46() //Position: 0x43B9 / 17337
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

void Function_47() //Position: 0x456D / 17773
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x457B / 17787
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_49();
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

var Function_49() //Position: 0x476C / 18284
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x4781 / 18305
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
				iVar2 = ((Function_64((50 + iVar4)) + Function_64((183 + iVar4))) + Function_64((90 + iVar4)));
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
	Function_51(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x481C / 18460
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
		Function_63(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_62(iParam0);
	if (bParam2)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x4AB7 / 19127
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_61(390))), 32);
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
					bVar19 = (Function_121(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_121(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_59(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_56(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_53(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_187(), &Var9);
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

var Function_53(int iParam0) //Position: 0x50E4 / 20708
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_54(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x50F5 / 20725
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_55(char* cParam0, char* cParam1) //Position: 0x51EA / 20970
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_56(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5203 / 20995
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_58(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_57(Function_58(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_57(int iParam0, int iParam1) //Position: 0x5268 / 21096
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_58(int iParam0, bool bParam1) //Position: 0x527A / 21114
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_59(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x528C / 21132
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
	if (((Function_60(iParam0) != 19 || Function_60(iParam0) != 17) || Function_60(iParam0) != 10) || Function_60(iParam0) != 9)
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

int Function_60(int iParam0) //Position: 0x53BC / 21436
{
	return Global_35278[iParam020].f_48;
}

var Function_61(int iParam0) //Position: 0x53CB / 21451
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_62(int iParam0) //Position: 0x5408 / 21512
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

int Function_63(int iParam0, bool bParam1, bool bParam2) //Position: 0x55A2 / 21922
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

int Function_64(bool bParam0) //Position: 0x57BC / 22460
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_65() //Position: 0x57FD / 22525
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
		iVar2 = ((Function_64((50 + iVar3) + 15) + Function_64((183 + iVar3) + 15)) + Function_64((90 + iVar3) + 15));
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
	Function_51(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_66() //Position: 0x5886 / 22662
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
			iVar2 = ((Function_64((50 + iVar3) + 8) + Function_64((183 + iVar3) + 8)) + Function_64((90 + iVar3) + 8));
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
	Function_51(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_67() //Position: 0x591D / 22813
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
		iVar2 = ((Function_64((50 + iVar3)) + Function_64((183 + iVar3))) + Function_64((90 + iVar3)));
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
	Function_51(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_68() //Position: 0x599C / 22940
{
	Function_69(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_69(int iParam0, bool bParam1, int iParam2) //Position: 0x59C2 / 22978
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
	Function_63(iParam0, bParam1, 1);
	Function_62(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_52(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_70() //Position: 0x5BCC / 23500
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_72(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_72(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_71(StackVal, StackVal, vVar0))
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

bool Function_71(vector3 vParam0) //Position: 0x5C6D / 23661
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_72(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5C85 / 23685
{
	int iVar0;
	
	iVar0 = Function_75(uParam2, uParam3);
	if (Function_74(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_235(&Global_63095, 1);
			Function_41(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_235(&Global_63095, 2);
			Function_41(&Global_63095, 1);
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
		Function_235(&Global_63095, 2);
		Function_41(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_73();
	return StackVal, StackVal, Function_73();
}

vector3 Function_73() //Position: 0x5D6C / 23916
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_74(int iParam0) //Position: 0x5D75 / 23925
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_75(bool bParam0, bool bParam1) //Position: 0x5D8B / 23947
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
				fVar2 = Function_76(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_76(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_74(bVar0) && !bParam1)
	{
		bVar0 = Function_75(bParam0, 1);
	}
	return bVar0;
}

float Function_76(vector3 vParam0, vector3 vParam3) //Position: 0x5E52 / 24146
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_77(bool bParam0) //Position: 0x5E6F / 24175
{
	int iVar0;
	int iVar1;
	
	if (!Function_6(bParam0))
	{
		return;
	}
	switch (Function_7(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_5(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_81(12, 1, 0, 0);
				Function_80(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_81(13, 1, 0, 0);
				Function_80(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_81(14, 1, 0, 0);
				Function_80(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_81(15, 1, 0, 0);
				Function_80(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_81(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_5(bParam0))
			{
				case 0x00000000:
					if (Function_35(bParam0) == 1)
					{
						iVar0 = Function_79(bParam0);
						if (Function_78(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_80(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_80(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_80(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_80(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_80(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_80(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_80(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_80(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_80(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_80(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_80(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_80(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_80(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_80(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_80(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_80(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_80(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_80(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_80(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_80(4, 19);
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
								Function_81(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_81(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_81(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_79(bParam0) == 0)
			{
				if (Function_35(bParam0) == 1)
				{
					Function_81(458, 1, 0, 0);
					iVar0 = Function_5(bParam0);
					if (Function_78(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_80(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_80(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_80(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_80(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_80(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_80(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_80(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_80(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_35(bParam0) == 1)
			{
				Function_81(400, 1, 0, 0);
			}
			switch (Function_5(bParam0))
			{
				case 0x00000001:
					Function_81(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_80(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_80(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_80(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_81(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_80(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_80(6, 9);
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

bool Function_78(int iParam0) //Position: 0x634B / 25419
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0) //Position: 0x6361 / 25441
{
	if (!Function_6(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

void Function_80(int iParam0, bool bParam1) //Position: 0x6380 / 25472
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

int Function_81(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x63E7 / 25575
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
	Function_63(iParam0, TO_FLOAT(bParam1), 1);
	Function_62(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_82() //Position: 0x6607 / 26119
{
	int iVar0;
	int iVar1;
	
	if (!Function_87(Global_6269))
	{
		return;
	}
	iVar0 = Function_64(24);
	iVar1 = Function_86(Global_6269);
	if (!Function_87(iVar0) && Function_85(iVar1) < 0)
	{
		Function_51(24, Global_6269, 0);
		Function_83(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_85(Function_86(iVar0)))
	{
		Function_51(24, Global_6269, 0);
		Function_83(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_83(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6687 / 26247
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
		Function_84(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_84(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x69D9 / 27097
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

int Function_85(int iParam0) //Position: 0x6A5C / 27228
{
	if (!Function_10(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_86(int iParam0) //Position: 0x6A76 / 27254
{
	if (!Function_87(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_87(int iParam0) //Position: 0x6A90 / 27280
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_88(int iParam0) //Position: 0x6AA6 / 27302
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_89(char* cParam0) //Position: 0x6AD0 / 27344
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

void Function_90(int iParam0) //Position: 0x6D26 / 27942
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (Function_5(iParam0) == Global_30640[2])
	{
		if (Function_119(2) && !Function_118(2))
		{
			Function_110(2, 2, 0, 0, 1);
		}
	}
	if (Function_5(iParam0) == Global_30658[3])
	{
		if (Function_119(6) && !Function_118(6))
		{
			Function_110(6, 16, 0, 0, 1);
		}
	}
	if (!Function_119(10) || Function_118(10))
	{
		return;
	}
	bVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	bVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_35(Global_30734);
	if (Global_30734 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_35(Global_30736);
	if (Global_30736 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_35(Global_30738);
	if (Global_30738 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_35(Global_30737);
	if (Global_30737 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_35(Global_30739);
	if (Global_30739 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073611].f_36, bVar0, bVar1) && !Global_30736 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073411].f_36, bVar0, bVar1) && !Global_30734 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073811].f_36, bVar0, bVar1) && !Global_30738 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073711].f_36, bVar0, bVar1) && !Global_30737 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073911].f_36, bVar0, bVar1) && !Global_30739 != iParam0)
	{
		return;
	}
	Function_91(10, 0, 1);
	return;
}

void Function_91(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6ECD / 28365
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_109(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_118(bParam0))
	{
		if (!Function_119(bParam0))
		{
			Function_95(bParam0, 1, 0, 0);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_81(457, 1, 0, 0);
		Function_94(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_93(0, 0, 1, 1))
			{
				Function_40(1);
				Function_38(1, 0);
			}
			else
			{
				Function_92();
			}
		}
	}
	return;
}

void Function_92() //Position: 0x706B / 28779
{
	return;
}

bool Function_93(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7071 / 28785
{
	iParam0 = iParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && iParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_94(bool bParam0, int iParam1) //Position: 0x7115 / 28949
{
	if (!Function_109(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

void Function_95(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x716A / 29034
{
	struct<8> Var0;
	
	if (!Function_109(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_108(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_119(bParam0))
	{
		Function_81(456, 1, 0, 0);
		Function_94(bParam0, 2);
		if (bParam2)
		{
			if (!Function_93(0, 0, 1, 1))
			{
				Function_40(1);
				Function_38(1, 5);
			}
			else
			{
				Function_92();
			}
		}
		Function_103(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_102() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_102() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_195(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_101(Global_76846, 2))
		{
			Function_96(Global_34573, 2, 1, 0);
		}
	}
}

void Function_96(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x72B4 / 29364
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_98(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_97(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_97(char* cParam0, int iParam1) //Position: 0x7320 / 29472
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

bool Function_98(bool bParam0, var uParam1, int iParam2) //Position: 0x7357 / 29527
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
		if (Function_100(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_99(uVar0))
		{
			case 0x00000002:
				if (!Function_101(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_99(char* cParam0) //Position: 0x73CF / 29647
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

int Function_100(int iParam0) //Position: 0x7470 / 29808
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_41(&iVar1, 2147483648);
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

bool Function_101(int iParam0, int iParam1) //Position: 0x74AD / 29869
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_102() //Position: 0x74C0 / 29888
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_103(bool bParam0) //Position: 0x74ED / 29933
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_107(bParam0, Function_19(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_107(bParam0, Function_19(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_106(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_105(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_104(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_104(int iParam0) //Position: 0x769D / 30365
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_109(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_105(bool bParam0, bool bParam1) //Position: 0x76F4 / 30452
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_106(int iParam0) //Position: 0x7719 / 30489
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_109(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_107(bool bParam0, int iParam1) //Position: 0x776F / 30575
{
	int iVar0;
	
	if (!Function_109(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_108(int iParam0) //Position: 0x77CE / 30670
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_109(int iParam0) //Position: 0x77EA / 30698
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_110(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7800 / 30720
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_109(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_108(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_117(bParam0, 2))
	{
		Function_81(456, 1, 0, 0);
		Function_94(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_195(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_107(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_94(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_93(0, 0, 1, 1))
			{
				Function_40(1);
				Function_38(1, 0);
			}
			else
			{
				Function_92();
			}
		}
		Function_103(bParam0);
		if (StackVal && !Function_236(((((!Function_102() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_236((((Function_102() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_101(Global_76846, 2))
		{
			Function_96(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_112();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_111(3, bParam1);
				break;
			
			case 0x00000005:
				Function_111(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_111(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_111(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_111(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_111(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_80(2, 24);
				break;
			
			case 0x00000003:
				Function_80(2, 25);
				break;
			
			case 0x0000000F:
				Function_80(2, 26);
				break;
			
			case 0x0000000D:
				Function_80(2, 27);
				break;
			
			case 0x0000000E:
				Function_80(2, 28);
				break;
			}
	}
}

void Function_111(int iParam0, bool bParam1) //Position: 0x7A8F / 31375
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_112() //Position: 0x7AEE / 31470
{
	if (Function_109(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_116(Global_28180);
			Global_28180.f_8 = Function_113(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_116(Global_28180);
			Global_28180.f_8 = Function_113(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_113(int iParam0, int iParam1) //Position: 0x7B69 / 31593
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_115(6, 0) || Function_115(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_114(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_115(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_114(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_114(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_114(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_114(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_115(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_114(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_114(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_114(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_114(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_114(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_114(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_114(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_115(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_114(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_115(6, 0) && Function_114(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_114(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_115(9, 0) && Function_114(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_114(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_115(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_71(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_71(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_71(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_114(int iParam0) //Position: 0x875B / 34651
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_115(int iParam0, bool bParam1) //Position: 0x8770 / 34672
{
	int iVar0;
	
	iVar0 = Function_86(iParam0);
	if (!Function_6(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_116(int iParam0) //Position: 0x87AD / 34733
{
	int iVar0;
	int iVar1;
	
	if (!Function_109(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

bool Function_117(int iParam0, int iParam1) //Position: 0x87FC / 34812
{
	int iVar0;
	
	if (!Function_109(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_118(int iParam0) //Position: 0x8829 / 34857
{
	if (!Function_109(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_117(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_119(int iParam0) //Position: 0x887A / 34938
{
	if (!Function_109(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_117(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_120(int iParam0, bool bParam1, bool bParam2) //Position: 0x88CC / 35020
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
		Function_63(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_62(iParam0);
	if (bParam2)
	{
		Function_52(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_121(int iParam0) //Position: 0x8B38 / 35640
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_122(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8B71 / 35697
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_123(bParam0), Function_49()) == 0)
		{
			ADD_ITEM(Function_123(bParam0), Function_49(), bParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_123(bParam0), Function_49(), bParam2);
	return 1;
}

var Function_123(bool bParam0) //Position: 0x8BBC / 35772
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

int Function_124(bool bParam0, bool bParam1) //Position: 0x8CAD / 36013
{
	bool bVar0;
	
	bVar0 = Function_64(0);
	if ((Function_64(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_81(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_64(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_81(597, bParam0, 0, 0);
	}
	if ((Function_64(597) + Function_64(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

bool Function_125(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8D78 / 36216
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
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_64(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_123(17), Global_34573))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

void Function_126(int iParam0, bool bParam1, bool bParam2) //Position: 0x8E7A / 36474
{
	int iVar0;
	bool bVar1;
	
	if (Function_138(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_64(3);
	Function_135();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_133(3, bVar1);
		if (!bParam2)
		{
			if (!Function_101(Global_76848, 4))
			{
				Function_96(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_81(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_121(3));
	iVar0 = Function_64(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_128(4, Function_132(Global_12976.f_156), 1);
				Function_127(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_128(4, Function_132(Global_12976.f_156), 1);
				Function_127(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_128(4, Function_132(Global_12976.f_156), 1);
				Function_127(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_128(4, Function_132(Global_12976.f_156), 1);
				Function_127(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_128(4, Function_132(Global_12976.f_156), 1);
				Function_127(Global_12976.f_152, Global_12976.f_156);
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

void Function_127(int iParam0, int iParam1) //Position: 0x903D / 36925
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_128(int iParam0, char* cParam1, bool bParam2) //Position: 0x929B / 37531
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
	Function_83(iParam0, cParam1, 0, 1);
	iVar1 = Function_129();
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

int Function_129() //Position: 0x9420 / 37920
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
	Function_130();
	return 0;
}

void Function_130() //Position: 0x94BF / 38079
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
		Function_131(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_131(int iParam0) //Position: 0x956E / 38254
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

var Function_132(int iParam0) //Position: 0x95CC / 38348
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

int Function_133(int iParam0, bool bParam1) //Position: 0x965B / 38491
{
	bool bVar0;
	int iVar1;
	
	Function_81(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_134(iParam0, 4294967295);
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
	iVar1 = Function_129();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_134(int iParam0, int iParam1) //Position: 0x97F8 / 38904
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

void Function_135() //Position: 0x9839 / 38969
{
	Function_137(3, 0.0f);
	Function_136(3, 10000.0f);
	return;
}

int Function_136(int iParam0, int iParam1) //Position: 0x984F / 38991
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_137(int iParam0, int iParam1) //Position: 0x988F / 39055
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_138(int iParam0) //Position: 0x98CF / 39119
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_139(int iParam0, bool bParam1, bool bParam2) //Position: 0x98DE / 39134
{
	int iVar0;
	bool bVar1;
	
	if (Function_138(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_64(1);
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
			Function_133(1, bVar1);
			if (!bParam2)
			{
				if (!Function_101(Global_76848, 1))
				{
					Function_96(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_142(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_101(Global_76848, 2))
				{
					Function_96(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_81(1, bVar1, 0, 0);
	}
	else
	{
		Function_141(1, (4294967295 * bVar1), 0);
	}
	if (Function_64(1) <= 4294962296)
	{
		Function_51(1, 4294962296, 0);
	}
	else if (Function_64(1) >= 5000)
	{
		Function_51(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_121(1));
	iVar0 = Function_64(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_128(2, Function_140(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_128(2, Function_140(Global_12976.f_152), 0);
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
				Function_128(2, Function_140(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_128(2, Function_140(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_128(2, Function_140(Global_12976.f_152), 1);
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
				Function_128(2, Function_140(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_128(2, Function_140(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_128(2, Function_140(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_128(2, Function_140(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_128(2, Function_140(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_128(2, Function_140(Global_12976.f_152), 1);
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
				Function_128(2, Function_140(Global_12976.f_152), 0);
			}
			break;
	}
	Function_127(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_140(int iParam0) //Position: 0x9BF3 / 39923
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

int Function_141(int iParam0, bool bParam1, int iParam2) //Position: 0x9C96 / 40086
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
	Function_62(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_142(int iParam0, bool bParam1) //Position: 0x9E91 / 40593
{
	bool bVar0;
	int iVar1;
	
	Function_141(iParam0, bParam1, 0);
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
	iVar1 = Function_134(iParam0, 4294967295);
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
	iVar1 = Function_129();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_143(bool bParam0) //Position: 0xA02D / 41005
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

void Function_144(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xA071 / 41073
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0xA15B / 41307
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
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			if (bParam1)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

int Function_146(bool bParam0, bool bParam1) //Position: 0xA1B1 / 41393
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, void fParam4, int iParam5, int iParam6) //Position: 0xA206 / 41478
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = uParam3;
	if (fParam4 <= 0)
	{
		fParam4 = SQUAD_GET_SIZE(bParam0);
	}
	iVar0 = 0;
	while (iVar0 < (fParam4 - 1))
	{
		SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, false, 2, 4294967295);
		TASK_FOLLOW_OBJECT_ALONG_PATH(false, bParam1, bParam2, bVar1, iParam5, iParam6);
		iVar0++;
	}
}

void Function_148(bool bParam0) //Position: 0xA24E / 41550
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

void Function_149() //Position: 0xA280 / 41600
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_CompletesHerdPort", "Pikes_CompletesHerdPort", false, 1, 1, 0, 1);
		Function_17(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_150() //Position: 0xA2D7 / 41687
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_HerdSolo", "Pikes_HerdSolo", false, 2, 1, 0, 1);
		Function_17(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_151(bool bParam0, bool bParam1) //Position: 0xA31C / 41756
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

bool Function_152(var uParam0, var uParam1, int iParam2) //Position: 0xA36D / 41837
{
	return Function_153(Global_29006, uParam0, uParam1, iParam2);
}

int Function_153(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xA37F / 41855
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_78(iParam0))
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

var Function_154(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xA41B / 42011
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_187(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nPK_Middle", 4, 1);
	}
	Function_155(&bVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_155(int iParam0) //Position: 0xA490 / 42128
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_159(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_158(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_157(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_156(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 5.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 2.0f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 2, 3, 8.0f, 3, 0);
	return;
}

void Function_156(int iParam0) //Position: 0xA505 / 42245
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,84526f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1280,881f, 87,68272f, 2363,648f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,089093f, -1,739692f, -0,006892f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_157(int iParam0) //Position: 0xA573 / 42355
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,84526f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1279,81f, 87,73152f, 2361,008f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,0281f, -2,826691f, -0,006868f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_158(int iParam0) //Position: 0xA5E1 / 42465
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43,45719f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1175,014f, 77,5491f, 2370,723f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,031641f, 1,47904f, -0,000101f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_159(int iParam0) //Position: 0xA64F / 42575
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43,45719f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1176,4f, 77,85641f, 2366,599f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,142707f, 1,274346f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_160(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA6B9 / 42681
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_187(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PK_Middle_NoVista", 2, 1);
	}
	Function_161(&bVar0);
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

void Function_161(int iParam0) //Position: 0xA736 / 42806
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_163(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_162(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 6.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_162(int iParam0) //Position: 0xA775 / 42869
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34,86373f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1174,259f, 77,6797f, 2370,954f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,03202f, 1,433395f, -0,003608f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_163(var uParam0) //Position: 0xA7E3 / 42979
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 34,86373f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -1174,919f, 77,72679f, 2368,758f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,046908f, 1,28889f, -0,00361f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_164() //Position: 0xA851 / 43089
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_GMInBasin", "Pikes_GMInBasin", false, 1, 1, 0, 1);
		Function_17(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_165() //Position: 0xA898 / 43160
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_BollardInfo", "Pikes_BollardInfo", false, 2, 1, 0, 1);
		Function_17(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_166(var uParam0, bool bParam1) //Position: 0xA8E3 / 43235
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_235(uParam0, 1);
	Function_41(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_167(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xA904 / 43268
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
		bVar0 = Function_49();
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
			if (Function_39())
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
		Function_81(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_26();
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
	Function_168(iParam9);
}

void Function_168(bool bParam0) //Position: 0xA9F4 / 43508
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

void Function_169() //Position: 0xAA99 / 43673
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_Introduces", "Pikes_Introduces", false, 1, 1, 0, 1);
		Function_17(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_170() //Position: 0xAAE2 / 43746
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_ApproachesRancher", "Pikes_ApproachesRancher", false, 1, 1, 0, 1);
		Function_17(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_171(int iParam0) //Position: 0xAB39 / 43833
{
	if (Function_213(iParam0))
	{
		if (Function_172(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_172(bool bParam0) //Position: 0xAC01 / 44033
{
	return Function_236(*bParam0, 2);
}

int Function_173(char* cParam0, var uParam1, var uParam2, float fParam3, char* cParam4, int iParam5) //Position: 0xAC0E / 44046
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		if (STRING_LENGTH(&(Global_63406[iVar021])) == 0)
		{
			strcpy(&(Global_63406[iVar021]), cParam0, 32);
			Global_63406[iVar021].f_32 = uParam1;
			Global_63406[iVar021].f_36 = uParam2;
			Global_63406[iVar021].f_40 = fParam3;
			strcpy(&Global_63406[iVar021] + 48, cParam4, 32);
			Global_63406[iVar021].f_44 = 1;
			Global_63406[iVar021].f_80 = iParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_174(bool bParam0, bool bParam1) //Position: 0xAC8D / 44173
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
		if (STRING_CONTAINS_STRING(bVar4, bParam0) || Function_175(bParam0, bVar4))
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

int Function_175(char* cParam0, char* cParam1) //Position: 0xAD35 / 44341
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

void Function_176(bool bParam0, bool bParam1) //Position: 0xAD60 / 44384
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
	else if (!bParam1 || Function_177(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_177(bool bParam0, bool bParam1) //Position: 0xADBD / 44477
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xADDC / 44508
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_187(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PikesBasin_Intro", 2, 1);
	}
	Function_179(&bVar0);
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

void Function_179(int iParam0) //Position: 0xAE58 / 44632
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_181(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_180(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 2);
	return;
}

void Function_180(int iParam0) //Position: 0xAEA1 / 44705
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37,1796f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1505,695f, 59,87241f, 2463,905f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,022216f, -0,8085555f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_181(bool bParam0) //Position: 0xAF0B / 44811
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 37,1796f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -1506,689f, 59,97955f, 2462,957f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,058631f, -1,756424f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_182(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xAF75 / 44917
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
	Function_26();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_49();
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
			if (Function_39())
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
				Function_186(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_187(), 2, Function_186(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_81(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_185()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_185()));
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
	if (Function_184(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_183(0x4000000);
	}
	if (Function_184(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_183(0x8000000);
	}
}

void Function_183(int iParam0) //Position: 0xB21E / 45598
{
	int iVar0;
	
	if (Function_236(iParam0, 1) && Function_236(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_184(int iParam0) //Position: 0xB252 / 45650
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_185() //Position: 0xB26E / 45678
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

vector3 Function_186(bool bParam0) //Position: 0xB2ED / 45805
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_187() //Position: 0xB2FE / 45822
{
	int iVar0;
	
	return iVar0;
}

void Function_188(bool bParam0) //Position: 0xB306 / 45830
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

bool Function_189(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB390 / 45968
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
				Function_176(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_177(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_177(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_190(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_190(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, true);
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

int Function_190(int iParam0, int iParam1) //Position: 0xB5A2 / 46498
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_71(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_71(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int Function_191(int iParam0) //Position: 0xB60D / 46605
{
	return (((SQUAD_GET_SIZE((*iParam0)[4]) + SQUAD_GET_SIZE((*iParam0)[5])) + SQUAD_GET_SIZE((*iParam0)[6])) + SQUAD_GET_SIZE((*iParam0)[7]));
}

float Function_192(bool bParam0, int iParam1) //Position: 0xB636 / 46646
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_194(bParam0);
		vVar0 = { StackVal, StackVal, Function_194(bParam0) };
		Function_193(iParam1);
		vVar3 = { StackVal, StackVal, Function_193(iParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_193(bool bParam0) //Position: 0xB6B3 / 46771
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_194(bool bParam0) //Position: 0xB6C4 / 46788
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

void Function_195(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xB72E / 46894
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

int Function_196() //Position: 0xB779 / 46969
{
	return Global_12976.f_156;
}

void Function_197(int iParam0, int iParam1) //Position: 0xB784 / 46980
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_10(iParam0))
	{
		Function_8();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_7(iParam0);
	if (StackVal != 2)
	{
		Function_3("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_40(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_5(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_89(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_88(Global_6269) };
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

int Function_198(int iParam0) //Position: 0xB894 / 47252
{
	if (!Function_10(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_199(int iParam0, int iParam1) //Position: 0xB8AE / 47278
{
	if (!Function_10(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

void Function_200(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB8C9 / 47305
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

void Function_201(bool bParam0) //Position: 0xB91C / 47388
{
	bool bVar0;
	
	if (SQUAD_IS_VALID((*bParam0)[7]))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE((*bParam0)[7]) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*bParam0)[7], bVar0)))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX((*bParam0)[7], bVar0), 13, false);
			}
			bVar0++;
		}
	}
	return;
}

int Function_202(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0xB968 / 47464
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_203(bParam0, bVar1, iParam2, iParam3, iParam4, fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_203(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xB9C8 / 47560
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

vector3 Function_204(bool bParam0) //Position: 0xBAB5 / 47797
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

vector3 Function_205(bool bParam0) //Position: 0xBADC / 47836
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

void Function_206(bool bParam0, bool bParam1) //Position: 0xBB03 / 47875
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_207(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBB4C / 47948
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

void Function_208(bool bParam0, bool bParam1) //Position: 0xBB91 / 48017
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

void Function_209(int iParam0) //Position: 0xBBE3 / 48099
{
	bool bVar0;
	
	if (SQUAD_IS_VALID((*iParam0)[7]))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE((*iParam0)[7]) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[7], bVar0)))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[7], bVar0), 13, true);
			}
			bVar0++;
		}
	}
	return;
}

void Function_210(var uParam0, int iParam1) //Position: 0xBC2F / 48175
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PIK_AA_Layout");
	(*uParam0)[0] = Function_174("PIK_canyonSquad1", bVar0);
	(*uParam0)[1] = Function_174("PIK_canyonSquad2", bVar0);
	(*uParam0)[2] = Function_174("PIK_canyonSquad3", bVar0);
	(*uParam0)[3] = Function_174("PIK_canyonSquad4", bVar0);
	(*uParam0)[4] = Function_174("PIK_canyonSquad5", bVar0);
	(*uParam0)[5] = Function_174("PIK_canyonSquad6", bVar0);
	(*uParam0)[6] = Function_174("PIK_canyonSquad7", bVar0);
	(*uParam0)[7] = Function_174("PIK_canyonSquad8", bVar0);
	(*uParam0)[8] = Function_174("PIK_canyonSquad9", bVar0);
	(*uParam0)[9] = Function_174("PIK_canyonSquad10", bVar0);
	(*uParam0)[10] = Function_174("PIK_canyonSquad11", bVar0);
	(*uParam0)[11] = Function_174("PIK_canyonSquad12", bVar0);
	*iParam1 = Function_174("PIK_MainSquad", bVar0);
	return;
}

void Function_211(int iParam0) //Position: 0xBDC5 / 48581
{
	Function_166(iParam0, 0.0f);
	return;
}

void Function_212(int iParam0) //Position: 0xBDD1 / 48593
{
	if (!Function_213(iParam0))
	{
		Function_166(iParam0, 0.0f);
	}
	return;
}

bool Function_213(int iParam0) //Position: 0xBDE6 / 48614
{
	return Function_236(*iParam0, 1);
}

bool Function_214(var uParam0, int iParam1) //Position: 0xBDF3 / 48627
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_215(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBE0F / 48655
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { -1503,966f, 59,05378f, 2461,444f };
	vVar3 = { 0.0f, 274,7909f, 0.0f };
	*uParam1 = CREATE_ACTOR_IN_LAYOUT(*uParam2, "Pete_The_Herder", 173, vVar0, vVar3);
	MEMORY_CONSIDER_AS(*uParam1, Global_34573, false);
	SET_ACTOR_FACTION(*uParam1, 20);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(*uParam1, 0,1f);
	AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam1, Global_34573, -1.0f, 0);
	SET_CRIPPLE_ENABLE(*uParam1, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(*uParam1, false);
	AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(*uParam1, 1);
	SET_FACTIONS_STATUS_TWO_WAY(20, 14, 4);
	bVar6 = GET_MOUNT(*uParam1);
	if (IS_ACTOR_VALID(bVar6))
	{
		SET_ACTOR_PROOF(bVar6, 128);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar6, 0,25f);
	}
	TASK_SHOOT_ENEMIES_FROM_COVER(*uParam1, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "introCover")), -1.0f, 0.0f);
	Function_41(uParam0, 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(*uParam1, true);
	SET_ACTOR_STAY_WITHIN_VOLUME(*uParam1, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_helperIntro"), 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*uParam1, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam1, 13, true);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(*uParam1, false);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 12, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 13, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 63, 0);
	*uParam3 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam2, "PIKHelpSquad"));
	SQUAD_JOIN(*uParam1, *uParam3);
	*uParam4 = CREATE_GATEWAY_IN_LAYOUT(*uParam2, Function_187(), FIND_VOLUME_IN_LAYOUT(Global_30616, "v_introGateway"), Global_34573, 2, 3, 0, false, 1, 1);
	SET_ACTOR_FACTION(*uParam1, 20);
}

void Function_216(var uParam0, var uParam1, int iParam2) //Position: 0xBF94 / 49044
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	
	bVar0 = CREATE_OBJECT_ITERATOR(*uParam0);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_OBJECT_NAME(bVar1);
		vVar3 = { 0.0f, 0.0f, 0.0f };
		vVar6 = { 0.0f, 0.0f, 0.0f };
		GET_OBJECT_POSITION(bVar1, &vVar3);
		GET_OBJECT_ORIENTATION(bVar1, &vVar6);
		if (STRING_CONTAINS_STRING(bVar2, "cattle"))
		{
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_187(), RAND_INT_RANGE(1009, 1011), vVar3, vVar6);
			SQUAD_JOIN(bVar9, *uParam1);
			SET_ACTOR_UPDATE_PRIORITY(bVar9, false);
			SET_ACTOR_HEARING_MAX_RANGE(bVar9, 0.0f);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	*iParam2 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(*uParam1, false, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_HerdStayInVolume"), 1, 1);
	return;
}

bool Function_217(int iParam0) //Position: 0xC05F / 49247
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_221();
	iVar1 = 0;
	if (!Function_15(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_220(iParam0[iVar03], 8);
		}
		else if (Function_219())
		{
			iVar1 = 1;
			Function_220(iParam0[iVar03], 8);
		}
		Function_220(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_15(iParam0[iVar03], 4))
		{
			if (!Function_15(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_15(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_15(iParam0[03], 8) || iVar1));
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
				Function_220(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_15(iParam0[iVar03], 4))
		{
			if (!Function_15(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_220(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_220(iParam0[iVar03], 2);
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
							Function_220(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_220(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_220(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_220(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_220(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_220(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_220(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_220(iParam0[iVar03], 2);
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
	Function_218();
	return 1;
}

void Function_218() //Position: 0xC3DA / 50138
{
	if (!Function_184(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_219() //Position: 0xC41A / 50202
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

void Function_220(var uParam0, int iParam1) //Position: 0xC445 / 50245
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_221() //Position: 0xC456 / 50262
{
	if (!Function_184(128))
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

struct<8> Function_222() //Position: 0xC498 / 50328
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("PikesHerding_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("PikesHerding_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_FailSafe", 2, -1503,332f, 58,53423f, 2465,817f, 0.0f, 0.0f, 0.0f, 15,35839f, 17,74895f, 21,41887f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_HerdStayOut1", 2, -1285,242f, 75,29413f, 2328,794f, 0.0f, 0.0f, 0.0f, 32,01906f, 35,13971f, 56,75269f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_HerdStayOut2", 2, -1255,361f, 75,29413f, 2351,368f, 0.0f, 84,63895f, 0.0f, 32,01906f, 35,13971f, 56,75269f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_HerdStayOut3", 2, -1251,708f, 75,29413f, 2234,44f, 0.0f, 0.0f, 0.0f, 32,01906f, 35,13971f, 56,75269f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_HerdStayOut4", 2, -1199,657f, 75,29413f, 2365,212f, 0.0f, 0.0f, 0.0f, 28,11802f, 10,59501f, 32,09558f);
	*(&Local_0 + 24) = { -1532.0f, 54,95007f, 2466,391f };
	*(&Local_0 + 24 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_48 = CREATE_POINT_IN_LAYOUT(Local_0, "f_iPath2_BattleFlag", -1532.0f, 54,95007f, 2466,391f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 52) = { -1400,943f, 70,2745f, 2243,057f };
	*(&Local_0 + 52 + 12) = { 0.0f, -200,5033f, 0.0f };
	Local_0.f_76 = CREATE_POINT_IN_LAYOUT(Local_0, "f_iPath1_BattleFlag", -1400,943f, 70,2745f, 2243,057f, 0.0f, -200,5033f, 0.0f);
	*(&Local_0 + 80) = { -1250,74f, 80,31372f, 2161,26f };
	*(&Local_0 + 80 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_104 = CREATE_POINT_IN_LAYOUT(Local_0, "f_iPath0_BattleFlag", -1250,74f, 80,31372f, 2161,26f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 108) = { -1142,156f, 83,73206f, 2367,737f };
	*(&Local_0 + 108 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_132 = CREATE_POINT_IN_LAYOUT(Local_0, "f_iPath3_BattleFlag", -1142,156f, 83,73206f, 2367,737f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 136) = { -1492f, 77,30194f, 2280.0f };
	*(&Local_0 + 136 + 12) = { 0.0f, -39,59162f, 0.0f };
	Local_0.f_160 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_01", -1492f, 77,30194f, 2280.0f, 0.0f, -39,59162f, 0.0f);
	*(&Local_0 + 164) = { -1312.0f, 75,94304f, 2284.0f };
	*(&Local_0 + 164 + 12) = { 0.0f, 78,6872f, 0.0f };
	Local_0.f_188 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_02", -1312.0f, 75,94304f, 2284.0f, 0.0f, 78,6872f, 0.0f);
	*(&Local_0 + 192) = { -1238,239f, 75,86394f, 2521,103f };
	*(&Local_0 + 192 + 12) = { 0.0f, 78,6872f, 0.0f };
	Local_0.f_216 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_03", -1238,239f, 75,86394f, 2521,103f, 0.0f, 78,6872f, 0.0f);
	*(&Local_0 + 220) = { -1175,949f, 76,29803f, 2364,051f };
	*(&Local_0 + 220 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_244 = CREATE_POINT_IN_LAYOUT(Local_0, "f_HelperGateSpot", -1175,949f, 76,29803f, 2364,051f, 0.0f, 0.0f, 0.0f);
	Local_0.f_248 = CREATE_POINT_IN_LAYOUT(Local_0, "f_location01", -1381,142f, 70,32686f, 2436,392f, 0.0f, 0.0f, 0.0f);
	Local_0.f_252 = CREATE_POINT_IN_LAYOUT(Local_0, "f_location02", -1286,758f, 68,27748f, 2516,286f, 0.0f, 0.0f, 0.0f);
	Local_0.f_256 = CREATE_POINT_IN_LAYOUT(Local_0, "f_location03", -1263,452f, 70,31403f, 2481,219f, 0.0f, 0.0f, 0.0f);
	Local_0.f_260 = CREATE_POINT_IN_LAYOUT(Local_0, "f_location04", -1266,684f, 71,50318f, 2401,141f, 0.0f, 0.0f, 0.0f);
	Local_0.f_264 = CREATE_POINT_IN_LAYOUT(Local_0, "f_location05", -1256.0f, 73,28629f, 2380.0f, 0.0f, 0.0f, 0.0f);
}

void Function_223(bool bParam0) //Position: 0xD1B3 / 53683
{
	Function_226(bParam0, 173, 3, 1);
	Function_226(bParam0, 976, 3, 1);
	Function_226(bParam0, 977, 3, 1);
	Function_226(bParam0, 1009, 3, 1);
	Function_226(bParam0, 1010, 3, 1);
	Function_226(bParam0, 1011, 3, 1);
	Function_224(bParam0, "action_areas", 10, 0);
	Function_224(bParam0, "AA_tesoro_intro_cover", 5, 0);
	Function_224(bParam0, "custom/AA_tesoro_intro_cover", 8, 0);
	Function_224(bParam0, "stand_shakehands", 5, 0);
	Function_224(bParam0, "custom/stand_shakehands", 8, 0);
	Function_224(bParam0, "shakehands_link", 1, 0);
	Function_224(bParam0, "excited_return", 5, 0);
	Function_224(bParam0, "custom/excited_return", 8, 0);
	return;
}

var Function_224(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xD2EC / 53996
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_225(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_220(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_225(var uParam0, int iParam1, int iParam2) //Position: 0xD324 / 54052
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_15(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_220(uParam0[iVar03], 4);
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

var Function_226(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xD3E8 / 54248
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_15(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_220(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_220(uParam0[iVar03], 8);
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

void Function_227(var uParam0, var uParam1, int iParam2) //Position: 0xD4B8 / 54456
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	
	if (IS_OBJECT_VALID(*iParam2))
	{
		if (SQUAD_IS_VALID(*uParam0))
		{
			if (SQUAD_GET_SIZE(*uParam0) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
				{
					bVar4 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
					if (IS_ACTOR_VALID(bVar4) && IS_ACTOR_VALID(*uParam1))
					{
						GET_OBJECT_POSITION(bVar4, &uVar1);
						if ((!Function_231(bVar4, *uParam1, 50.0f) && !Function_229(bVar4, *iParam2, 50.0f)) && !WOULD_ACTOR_BE_VISIBLE(Function_228(bVar4), &uVar1, 3212836864))
						{
							SQUAD_LEAVE(bVar4);
							DESTROY_ACTOR(bVar4);
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

var Function_228(bool bParam0) //Position: 0xD54F / 54607
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_229(bool bParam0, bool bParam1, float fParam2) //Position: 0xD56A / 54634
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_194(bParam0);
			Function_230(bParam1);
			if (VDIST(Function_194(bParam0), Function_230(bParam1)) >= fParam2)
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

vector3 Function_230(bool bParam0) //Position: 0xD684 / 54916
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

bool Function_231(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD6F0 / 55024
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam2))
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

void Function_232() //Position: 0xD801 / 55297
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_FinalWarning", "Pikes_FinalWarning", false, 2, 1, 0, 1);
		Function_17(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_233(bool bParam0) //Position: 0xD84E / 55374
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

void Function_234() //Position: 0xD89A / 55450
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_ShootsCow", "Pikes_ShootsCow", false, 2, 1, 0, 1);
		Function_17(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_235(int iParam0, int iParam1) //Position: 0xD8E1 / 55521
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_236(bool bParam0, int iParam1) //Position: 0xD8F0 / 55536
{
	return (bParam0 && iParam1) == 0;
}

bool Function_237(bool bParam0, bool bParam1) //Position: 0xD8FD / 55549
{
	int iVar0;
	bool bVar1;
	void fVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iVar0 = 0;
	fVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (fVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					iVar0 = 1;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

float Function_238(bool bParam0, bool bParam1) //Position: 0xD966 / 55654
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

