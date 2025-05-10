//Decompiled with MagicRDR v1.0
//Function Count : 246
//Statics Count : 335
//Natives Count : 450
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
				if (Function_245(Global_34573, bLocal_113) < 150.0f)
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
				if (Function_245(Global_34573, bLocal_113) <= 25.0f)
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
					if (Function_244(bLocal_111, Global_34573))
					{
						iLocal_121++;
					}
				}
				if (iLocal_121 == 0 && !Function_243(iLocal_119, 256))
				{
					Function_242(&iLocal_119, 256);
					Function_241();
				}
				else if (iLocal_121 < 50 && Function_243(iLocal_119, 256))
				{
					if (!iLocal_179)
					{
						ACTOR_END_FORCE_HOLSTER(bLocal_113);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_113, 0);
						MEMORY_PREFER_RIDING(bLocal_113, false);
						Function_240(bLocal_113);
						MEMORY_CONSIDER_AS_ENEMY(bLocal_113, Global_34573);
						MEMORY_IDENTIFY(bLocal_113, Global_34573);
						MEMORY_ATTACK_ON_SIGHT(bLocal_113, 1);
						SET_ACTOR_FACTION(bLocal_113, 19);
						TASK_CLEAR(bLocal_113);
						TASK_PRIORITY_SET(bLocal_113, 1);
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_113, -1.0f);
						Function_239();
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
					if (Function_245(Global_34573, bLocal_113) < 10.0f)
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
						MEMORY_PREFER_WALKING(bLocal_113, 1);
					}
				}
			}
		}
		Function_234(&bLocal_111, &bLocal_113, &bLocal_91);
		switch (iLocal_198)
		{
			case 0x00000000:
				bLocal_89 = CREATE_LAYOUT("NuHerd_Layout");
				bLocal_111 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_89, "cowSquad"));
				Function_230(&iLocal_199);
				Function_229();
				Function_229();
				iLocal_198 = 1;
				break;
			
			case 0x00000001:
				if (Function_224(&iLocal_199))
				{
					iLocal_198 = 2;
				}
				break;
			
			case 0x00000002:
				Function_223(&bLocal_89, &bLocal_111, &uLocal_112);
				iLocal_198 = 3;
				break;
			
			case 0x00000003:
				Function_222(&iLocal_119, &bLocal_113, &bLocal_89, &bLocal_96, &bLocal_90);
				iLocal_198 = 4;
				break;
			
			case 0x00000004:
				iVar9 = 0;
				while (iVar9 <= 4)
				{
					if (!Function_221(&(Global_6643[iVar92]), 2) || Function_221(&(Global_6643[iVar92]), 4))
					{
						bLocal_181 = true;
					}
					iVar9++;
				}
				if (!bLocal_181)
				{
					if (!Function_220(&iLocal_275))
					{
						Function_219(&iLocal_275);
					}
					else
					{
						Function_218(&iLocal_275);
					}
				}
				Function_217(&bLocal_97, &bLocal_110);
				Function_216(&bLocal_97);
				if (!Global_28178 != 5)
				{
					SQUAD_SET_FACTION(bLocal_97[7], 19);
					Function_215(bLocal_97[7], Global_34573);
				}
				Function_215(bLocal_97[7], bLocal_113);
				Function_214(bLocal_97[7], bLocal_113, 4);
				Function_213(bLocal_97[7], -1.0f);
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
				Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston"));
				vLocal_129 = { StackVal, StackVal, Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston")) };
				Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston"));
				vLocal_132 = { StackVal, StackVal, Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston")) };
				Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher"));
				vLocal_135 = { StackVal, StackVal, Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher")) };
				Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher"));
				vLocal_138 = { StackVal, StackVal, Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher")) };
				Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch"));
				vLocal_141 = { StackVal, StackVal, Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch")) };
				Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch"));
				vLocal_144 = { StackVal, StackVal, Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch")) };
				Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancherCrouch"));
				vLocal_147 = { StackVal, StackVal, Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancherCrouch")) };
				Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancherCrouch"));
				vLocal_150 = { StackVal, StackVal, Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancherCrouch")) };
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
				fVar10 = Function_245(bLocal_113, Global_34573);
				if (!iLocal_171 && !iLocal_172)
				{
					if ((Function_209(Global_34573, bLocal_97[7], 1, 1, 1, 30.0f) && !Global_28178 != 5) || Function_209(Global_34573, bLocal_97[7], 1, 1, 1, 0.0f))
					{
						Function_208(&bLocal_97);
						iLocal_172 = 1;
					}
				}
				if (!Function_243(iLocal_119, 1))
				{
					if (!Function_243(iLocal_119, 65536))
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
								Function_207("PIK_Obj_ApproachHelper", 0x40f00000, 1, 2, 0, 0, 0, 0);
								DECOR_SET_BOOL(Global_34573, "PIK_GivenObjective", true);
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ApproachHelper", 0, 0, false);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_90)))
								{
									ADD_BLIP_FOR_OBJECT(bLocal_90, 330, 0f, 2, 0);
								}
								Function_206(Global_30736, 1);
								if (!Function_205(Global_30736) != 2)
								{
									Function_204(Global_30736, 1);
									Global_3385 = 1;
									SET_PLAYER_ENDLESS_READYMODE(0, 1);
								}
								Function_242(&iLocal_119, 65536);
							}
							else if (DECOR_CHECK_EXIST(Global_34573, "PlayerAggroing"))
							{
								if (HUD_IS_SHOWING_OBJECTIVE())
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
								}
								Function_207("PIK_Obj_ApproachHelper", 0x40f00000, 1, 2, 0, 0, 0, 0);
								DECOR_SET_BOOL(Global_34573, "PIK_GivenObjective", true);
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ApproachHelper", 0, 0, false);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_90)))
								{
									ADD_BLIP_FOR_OBJECT(bLocal_90, 330, 0f, 2, 0);
								}
								Function_206(Global_30736, 1);
								if (!Function_205(Global_30736) != 2)
								{
									Function_204(Global_30736, 1);
									Global_3385 = 1;
									SET_PLAYER_ENDLESS_READYMODE(0, 1);
								}
								Function_242(&iLocal_119, 65536);
							}
						}
					}
					if (!Function_243(iLocal_120, 1))
					{
						if (fVar10 > 20.0f)
						{
							Function_242(&iLocal_120, 1);
							if (Function_203() > 4)
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
							if (Function_245(bLocal_113, Global_34573) < 10.0f && !iLocal_155)
							{
								TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "introCover")), -1.0f, 0.0f);
								iLocal_155 = 1;
								iLocal_156 = 0;
							}
							if (Function_245(bLocal_113, Global_34573) > 10.0f && !iLocal_156)
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
							Function_202("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
							iLocal_169 = 1;
						}
					}
					if (iLocal_169)
					{
						if (Function_199(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_introGateway")) <= 15.0f)
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
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) != 0 && Function_198(&bLocal_97) > 3)
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
					if (Function_196(bLocal_90, 0, 1, 1, 1, 0))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_90)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_90));
						}
						Function_195(bLocal_90);
						bVar13 = GET_ACTORS_HORSE(Global_34573);
						Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse"));
						vVar14 = { StackVal, StackVal, Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse")) };
						iLocal_171 = 1;
						DECOR_SET_BOOL(Global_34573, "MakeBadAgain", true);
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) < 0 || Function_198(&bLocal_97) < 3)
						{
							bVar17 = CREATE_VOLUME_IN_LAYOUT(bLocal_89, Function_194(), 3, -1503.65f, 59.113f, 2460.141f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 6.0f);
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
							Function_189(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							Function_219(&iLocal_254);
							Function_218(&iLocal_254);
							Function_185(bLocal_89, 0, 1, 0, 0);
							AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_113, Global_34573, -1.0f, 0);
							AI_GOAL_LOOK_AT_ACTOR_NEW(Global_34573, bLocal_113, -1.0f, 0);
							SET_PLAYER_POSTURE(0, 1, 0);
							Function_183(Global_34573, 0);
							SET_ACTOR_UPDATE_PRIORITY(Global_34573, false);
							SET_OBJECT_POSITION(Global_34573, vLocal_141);
							SET_OBJECT_ORIENTATION(Global_34573, vLocal_144);
							AI_IGNORE_ACTOR(bLocal_113);
							ATTACH_PLAYER_TO_COVER(0, 1, 1);
							ACTOR_POP_NEXT_GAIT(Global_34573, 0, 0);
							if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_181("PIK_MainSquad", FIND_NAMED_LAYOUT("PIK_AA_Layout"))) >= 0)
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
					Function_180("PIK_Helper_PleaseUntie", bLocal_113, 20.0f, 0, "", 1);
					ADD_BLIP_FOR_ACTOR(bLocal_113, 325, 0, 2, 0);
					iLocal_198 = 6;
				}
				break;
			
			case 0x00000006:
				if (!IS_ACTOR_HOGTIED(bLocal_113))
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_113, 103, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					Function_180("PIK_Helper_ThanksUntie1", Global_34573, 25.0f, 0, "", 1);
					Function_180("PIK_Helper_ThanksUntie2", Global_34573, 25.0f, 0, "", 1);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_113, 0.25f);
					SET_ACTOR_PROOF(bLocal_113, 128);
					SET_CRIPPLE_ENABLE(bLocal_113, 0);
					SET_ACTOR_FACTION(bLocal_113, 20);
					SET_FACTIONS_STATUS_TWO_WAY(20, 14, 4);
					if (!Function_205(Global_30736) != 2)
					{
						Function_204(Global_30736, 1);
						Global_3385 = 1;
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
					}
					iLocal_198 = 36;
				}
				break;
			
			case 0x00000007:
				if (Function_178(&iLocal_254) < 0.5f)
				{
					Function_177();
					iLocal_198 = 8;
				}
				break;
			
			case 0x00000008:
				if (Function_178(&iLocal_254) < 4.0f)
				{
					Function_176();
					iLocal_198 = 10;
				}
				break;
			
			case 0x0000000A:
				if (Function_178(&iLocal_254) < 8.9f)
				{
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_113, 0);
					SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, -92.772f, 0.0f, 0);
					AI_GOAL_LOOK_CLEAR(bLocal_113);
					TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_113, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "introCover")), -1.0f, 0.0f);
					Function_173(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
					Function_218(&iLocal_248);
					if (!Function_205(Global_30736) != 2)
					{
						Function_204(Global_30736, 1);
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
					}
					Function_242(&iLocal_119, 128);
					Function_172(&uLocal_245, 2.0f);
					iLocal_198 = 12;
				}
				break;
			
			case 0x0000000C:
				if (Function_178(&iLocal_254) < 9.0f)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_113)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_113, 325, 0, 2, 0);
					}
					AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
					AI_CLEAR_DONT_HARM_ACTOR(bLocal_113);
					AI_STOP_IGNORING_ACTOR(bLocal_113);
					Function_208(&bLocal_97);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_113, 13, 0);
					STOP_FORCE_LOOK_AT_COORD(bLocal_113);
					AI_GOAL_LOOK_CLEAR(bLocal_113);
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE();
					Function_207("PIK_Obj_KillGroup", 0x40f00000, 1, 2, 0, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_KillGroup", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
					DECOR_SET_BOOL(Global_34573, "PrintThruCut", true);
					iVar18 = 0;
					while (iVar18 < 11)
					{
						Function_215(bLocal_97[iVar18], bLocal_113);
						Function_214(bLocal_97[iVar18], bLocal_113, 4);
						iVar18++;
					}
					iLocal_198 = 13;
				}
				break;
			
			case 0x0000000D:
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) == 0)
				{
					if (Function_178(&iLocal_248) < 7.1f)
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
									Function_218(&iLocal_248);
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
								if (Function_178(&iLocal_248) < 3.0f)
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
								Function_218(&iLocal_248);
								iLocal_198 = 14;
							}
						}
						if (!iLocal_166)
						{
							if (Function_245(bLocal_113, Global_34573) >= 10.0f)
							{
								Function_171();
								iLocal_166 = 1;
							}
						}
					}
				}
				if (!iLocal_178)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) == 0)
					{
						if (!Function_220(&iLocal_278))
						{
							Function_219(&iLocal_278);
							iLocal_178 = 1;
						}
					}
				}
				if (!iLocal_177)
				{
					if (Function_220(&iLocal_278))
					{
						if (Function_178(&iLocal_278) < 5.0f)
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
					if (Function_178(&iLocal_248) < 3.0f)
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
					Function_218(&iLocal_248);
					iLocal_198 = 15;
				}
				if (!iLocal_177)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) == 0)
					{
						if (Function_220(&iLocal_278))
						{
							if (Function_178(&iLocal_278) < 10.0f)
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
					if (Function_178(&iLocal_248) < 3.0f)
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
					Function_218(&iLocal_248);
					iLocal_198 = 16;
				}
				if (!iLocal_177)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) == 0)
					{
						if (Function_220(&iLocal_278))
						{
							if (Function_178(&iLocal_278) < 10.0f)
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
							Function_207("PIK_Obj_ClearBasin", 0x40f00000, 1, 2, 0, 0, 0, 0);
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ClearBasin", 0, 0, false);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						}
						Function_219(&iLocal_263);
						Function_218(&iLocal_263);
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
						if (Function_220(&iLocal_278))
						{
							if (Function_178(&iLocal_278) < 10.0f)
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
					if (Function_220(&iLocal_263))
					{
						if (Function_178(&iLocal_263) < 2.0f)
						{
							if (Function_245(Global_34573, bLocal_113) >= 12.0f)
							{
								Function_170();
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
						if (!Function_220(&iLocal_269))
						{
							Function_219(&iLocal_269);
							AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
						}
					}
				}
				if (Function_220(&iLocal_269))
				{
					if (Function_178(&iLocal_269) <= 2.0f)
					{
						iLocal_168 = 1;
						CLEAR_ACTOR_MIN_SPEED(bLocal_113);
						CLEAR_ACTOR_MAX_SPEED(bLocal_113);
						Function_219(&iLocal_251);
						Function_218(&iLocal_251);
						if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[3]) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[2]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[1]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[0]) < 0)
						{
							Function_189(1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							Function_166(bLocal_89, 0, 1, 0, 0);
							bLocal_192 = true;
						}
						else
						{
							Function_189(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1);
							UI_PUSH("CutsceneWithMessages");
							Function_160(bLocal_89, 0, 1, 0, 0);
						}
						bLocal_117 = Function_158("pikesBasin", "placement03", 1);
						bLocal_118 = Function_158("pikesBasin", "placement03", 2);
						iLocal_174 = 1;
						if (IS_DOOR_VALID(bLocal_117))
						{
							Function_157(bLocal_117, 1);
							OPEN_DOOR_DIRECTION(bLocal_117, true);
						}
						else
						{
							LOG_ERROR("GateDoor01 is not valid");
						}
						if (IS_DOOR_VALID(bLocal_118))
						{
							Function_157(bLocal_118, 1);
							OPEN_DOOR_DIRECTION(bLocal_118, false);
						}
						else
						{
							LOG_ERROR("GateDoor02 is not valid");
						}
						ACTOR_START_FORCE_HOLSTER(bLocal_113, 0, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_113, 1);
						MEMORY_PREFER_WALKING(bLocal_113, 1);
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
						Function_183(Global_34573, 0);
						TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
						SET_OBJECT_POSITION(bLocal_113, vLocal_135);
						SET_OBJECT_ORIENTATION(bLocal_113, vLocal_138);
						Function_183(bLocal_113, 0);
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
				if (Function_178(&iLocal_251) < 3.0f)
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_113, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_113, "excited_return", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_113, "excited_return/mobile_and_loop/loop");
					iLocal_198 = 19;
				}
				break;
			
			case 0x00000013:
				if (Function_178(&iLocal_251) < 3.0f)
				{
					if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[3]) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[2]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[1]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[0]) < 0)
					{
						Function_156();
						SET_CAMERA_POSITION(GET_GAME_CAMERA(), -1175.483f, 76.805f, 2372.638f);
						SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, -318.313f, 0.0f, 0);
						iLocal_198 = 20;
					}
					else
					{
						Function_155();
						SET_CAMERA_POSITION(GET_GAME_CAMERA(), -1175.483f, 76.805f, 2372.638f);
						SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, -318.313f, 0.0f, 0);
						iLocal_198 = 20;
					}
				}
				break;
			
			case 0x00000014:
				if (bLocal_192)
				{
					if (Function_178(&iLocal_251) < 7.0f)
					{
						if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[3]) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[2]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[1]) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[0]) < 0)
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_113, 1);
							Function_173(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							HUD_CLEAR_OBJECTIVE();
							Function_207("PIK_Obj_NeedClear", 0x40f00000, 1, 2, 0, 0, 0, 0);
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_NeedClear", 0, 0, false);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							MEMORY_PREFER_RIDING(bLocal_113, false);
							TASK_CLEAR(bLocal_113);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_113, 0);
							vVar23 = { -1185.131f, 76.193f, 2358.493f };
							vVar26 = { -1180.357f, 76.299f, 2366.432f };
							vVar29 = { -1168.845f, 76.299f, 2361.572f };
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
							Function_154(bLocal_111);
							SQUAD_GOALS_CLEAR(bLocal_111);
							Function_153(bLocal_111, Global_34573, Local_0.f_268, 25.0f, 4294967295, 1, 7.0f);
							Function_152(bLocal_111, bLocal_93);
							if (!Function_151(bLocal_97[3], 1))
							{
								Function_150(bLocal_97[3], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
							}
							iLocal_198 = 21;
						}
					}
				}
				if (!iLocal_193)
				{
					if (!bLocal_192)
					{
						if (Function_220(&iLocal_251))
						{
							if (Function_178(&iLocal_251) < 11.0f)
							{
								if (IS_ACTOR_VALID(bLocal_113))
								{
									DESTROY_ACTOR(bLocal_113);
									iLocal_194 = 1;
								}
								if (SQUAD_IS_VALID(bLocal_111))
								{
									Function_149(bLocal_111);
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
					if (Function_220(&iLocal_251))
					{
						if (Function_178(&iLocal_251) < 16.0f)
						{
							if (!iLocal_170)
							{
								Function_173(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
								UI_POP("CutsceneWithMessages");
								AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
								Function_145(200, 1, 0);
								Function_132(50, 1, 0);
								Function_130(Function_131(1, 1, 1, 0, 0), 1);
								if (!Function_129())
								{
									Function_127(9, 0, 1);
								}
								else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
								{
									Function_127(9, 0, 1);
								}
								SET_WEAPONENUM_LOCKED(15, 0);
								GIVE_WEAPON_TO_ACTOR(Global_34573, 15, 0, 1, 1);
								Function_206(Global_30736, 0);
								if (Function_220(&iLocal_275))
								{
									bLocal_153 = Function_178(&iLocal_275);
									if (Function_126(462) < 0.0f)
									{
										if (bLocal_153 > Function_126(462))
										{
											Function_125(462, bLocal_153, 0);
										}
									}
									else
									{
										Function_125(462, bLocal_153, 0);
									}
								}
								AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
								Function_95(Global_30736);
								Function_37(Global_30736, 1, 1, 0);
								SET_PLAYER_ENDLESS_READYMODE(0, 0);
								if ((Function_36(Global_30738) <= 1 && Function_36(Global_30734) <= 1) && Function_36(Global_30736) <= 1)
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
					if (Function_220(&iLocal_251))
					{
						if (Function_178(&iLocal_251) < 19.0f)
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
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_113, 0);
						TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_113, bLocal_91, Local_0.f_268, 10.0f, 1, 0);
						Function_154(bLocal_111);
						SQUAD_GOALS_CLEAR(bLocal_111);
						bLocal_122 = false;
						while (bLocal_122 < (SQUAD_GET_SIZE(bLocal_111) - 1))
						{
							SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_111, 0, 2, 4294967295);
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(SQUAD_GET_ACTOR_BY_INDEX(bLocal_111, bLocal_122), Local_0.f_268, 2, 0, 0, 1, 5.0f);
							bLocal_122++;
						}
						if (Function_220(&iLocal_275))
						{
							bLocal_153 = Function_178(&iLocal_275);
							if (Function_126(462) < 0.0f)
							{
								if (bLocal_153 > Function_126(462))
								{
									Function_125(462, bLocal_153, 0);
								}
							}
							else
							{
								Function_125(462, bLocal_153, 0);
							}
						}
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
						iLocal_165 = 1;
						if (!Function_220(&iLocal_281))
						{
							Function_219(&iLocal_281);
						}
						uLocal_95 = Function_32(bLocal_89, 0, 1, 1, 0);
						DECOR_SET_BOOL(Global_34573, "RemoveExtraBlips", true);
						iLocal_198 = 23;
					}
				}
				break;
			
			case 0x00000017:
				if (Function_220(&iLocal_281))
				{
					if (Function_178(&iLocal_281) <= 2.0f)
					{
						Function_189(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1);
						UI_PUSH("CutsceneWithMessages");
						Function_31(uLocal_95, 0);
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
							Function_29(&bLocal_96, 0, 0);
							DESTROY_OBJECT(bLocal_96);
						}
						if (IS_ACTOR_VALID(bLocal_113))
						{
							DESTROY_ACTOR(bLocal_113);
							iLocal_194 = 1;
						}
						if (SQUAD_IS_VALID(bLocal_111))
						{
							Function_149(bLocal_111);
							iLocal_196 = 1;
						}
						if (IS_ACTOR_VALID(uLocal_114[0]))
						{
							DESTROY_ACTOR(uLocal_114[0]);
						}
						Function_218(&iLocal_281);
						iLocal_198 = 24;
					}
				}
				break;
			
			case 0x00000018:
				if (!iLocal_195)
				{
					if (Function_220(&iLocal_281))
					{
						if (Function_178(&iLocal_281) <= 1.5f)
						{
							PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
							iLocal_195 = 1;
						}
					}
				}
				if (!iLocal_187)
				{
					if (Function_220(&iLocal_281))
					{
						if (Function_178(&iLocal_281) <= 7.0f)
						{
							Function_173(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
							UI_POP("CutsceneWithMessages");
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_206(Global_30736, 0);
							Function_145(200, 1, 0);
							Function_132(50, 1, 0);
							Function_130(Function_131(1, 1, 1, 0, 0), 1);
							if (!Function_129())
							{
								Function_127(9, 0, 1);
							}
							else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
							{
								Function_127(9, 0, 1);
							}
							SET_WEAPONENUM_LOCKED(15, 0);
							GIVE_WEAPON_TO_ACTOR(Global_34573, 15, 0, 1, 1);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_95(Global_30736);
							Function_37(Global_30736, 1, 1, 0);
							SET_PLAYER_ENDLESS_READYMODE(0, 0);
							if ((Function_36(Global_30738) <= 1 && Function_36(Global_30734) <= 1) && Function_36(Global_30736) <= 1)
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
				if (Function_220(&iLocal_281))
				{
					if (Function_178(&iLocal_281) <= 10.0f)
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
						if (Function_245(bLocal_113, Global_34573) >= 10.0f)
						{
							Function_28();
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
					SET_PLAYER_CONTROL(false, 1, 0, 0);
				}
				TASK_CLEAR(Global_34573);
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_110) >= 0)
				{
					Function_27();
					AI_STOP_IGNORING_ACTOR(bLocal_113);
					Function_170();
					Function_219(&iLocal_257);
					Function_218(&iLocal_257);
					iLocal_198 = 27;
				}
				else
				{
					Function_27();
					Function_189(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1);
					UI_PUSH("CutsceneWithMessages");
					Function_21(bLocal_89, 0, 1, 0, 0);
					Function_219(&iLocal_266);
					Function_218(&iLocal_266);
					SET_OBJECT_POSITION(Global_34573, vLocal_141);
					SET_OBJECT_ORIENTATION(Global_34573, vLocal_144);
					SET_OBJECT_POSITION(bLocal_113, vLocal_147);
					SET_OBJECT_ORIENTATION(bLocal_113, vLocal_150);
					Function_183(Global_34573, 0);
					Function_183(bLocal_113, 0);
					TASK_CLEAR(Global_34573);
					TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
					TASK_CLEAR(bLocal_113);
					TASK_STAND_STILL(bLocal_113, -1.0f, 0, 0);
					Function_155();
					iLocal_198 = 33;
				}
				break;
			
			case 0x0000001B:
				if (Function_178(&iLocal_257) < 4.0f)
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
						Function_207("PIK_Obj_ClearBasin", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ClearBasin", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						if (!Function_151(Function_181("PIK_MainSquad", FIND_NAMED_LAYOUT("PIK_AA_Layout")), 1))
						{
							Function_150(Function_181("PIK_MainSquad", FIND_NAMED_LAYOUT("PIK_AA_Layout")), 322, 4294967295, -1.0f, -1.0f, 0x3f800000, 2048, 0);
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
								Function_17();
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
						if (!Function_220(&iLocal_272))
						{
							Function_219(&iLocal_272);
						}
					}
				}
				if (Function_220(&iLocal_272))
				{
					if (Function_178(&iLocal_272) <= 2.0f)
					{
						iLocal_168 = 1;
						Function_189(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1);
						UI_PUSH("CutsceneWithMessages");
						Function_219(&iLocal_260);
						Function_218(&iLocal_260);
						Function_160(bLocal_89, 0, 1, 0, 0);
						bLocal_117 = Function_158("pikesBasin", "placement03", 1);
						bLocal_118 = Function_158("pikesBasin", "placement03", 2);
						iLocal_174 = 1;
						if (IS_DOOR_VALID(bLocal_117))
						{
							Function_157(bLocal_117, 1);
							OPEN_DOOR_DIRECTION(bLocal_117, true);
						}
						else
						{
							LOG_ERROR("GateDoor01 is not valid");
						}
						if (IS_DOOR_VALID(bLocal_118))
						{
							Function_157(bLocal_118, 1);
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
						Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston"));
						SET_OBJECT_POSITION(Global_34573, Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston")));
						Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston"));
						SET_OBJECT_ORIENTATION(Global_34573, Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarston")));
						Function_183(Global_34573, 0);
						TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
						Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher"));
						SET_OBJECT_POSITION(bLocal_113, Function_212(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher")));
						Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher"));
						SET_OBJECT_ORIENTATION(bLocal_113, Function_211(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportRancher")));
						Function_183(bLocal_113, 0);
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
				if (Function_220(&iLocal_260))
				{
					if (Function_178(&iLocal_260) < 2.0f)
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
				if (Function_220(&iLocal_260))
				{
					if (Function_178(&iLocal_260) < 3.0f)
					{
						Function_155();
						SET_CAMERA_POSITION(GET_GAME_CAMERA(), -1175.483f, 76.805f, 2372.638f);
						SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, -318.313f, 0.0f, 0);
						iLocal_198 = 32;
					}
				}
				break;
			
			case 0x00000020:
				if (!iLocal_191)
				{
					if (Function_220(&iLocal_260))
					{
						if (Function_178(&iLocal_260) < 11.0f)
						{
							if (IS_ACTOR_VALID(bLocal_113))
							{
								DESTROY_ACTOR(bLocal_113);
								iLocal_194 = 1;
							}
							if (SQUAD_IS_VALID(bLocal_111))
							{
								Function_149(bLocal_111);
								iLocal_196 = 1;
							}
							PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
							iLocal_191 = 1;
						}
					}
				}
				if (Function_220(&iLocal_260))
				{
					if (Function_178(&iLocal_260) < 16.0f)
					{
						if (!iLocal_162)
						{
							Function_173(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
							UI_POP("CutsceneWithMessages");
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_145(200, 1, 0);
							Function_132(50, 1, 0);
							Function_130(Function_131(1, 1, 1, 0, 0), 1);
							if (!Function_129())
							{
								Function_127(9, 0, 1);
							}
							else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
							{
								Function_127(9, 0, 1);
							}
							SET_WEAPONENUM_LOCKED(15, 0);
							GIVE_WEAPON_TO_ACTOR(Global_34573, 15, 0, 1, 1);
							Function_206(Global_30736, 0);
							if (Function_220(&iLocal_275))
							{
								bLocal_153 = Function_178(&iLocal_275);
								if (Function_126(462) < 0.0f)
								{
									if (bLocal_153 > Function_126(462))
									{
										Function_125(462, bLocal_153, 0);
									}
								}
								else
								{
									Function_125(462, bLocal_153, 0);
								}
							}
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_95(Global_30736);
							Function_37(Global_30736, 1, 1, 0);
							SET_PLAYER_ENDLESS_READYMODE(0, 0);
							if ((Function_36(Global_30738) <= 1 && Function_36(Global_30734) <= 1) && Function_36(Global_30736) <= 1)
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
				if (Function_220(&iLocal_260))
				{
					if (Function_178(&iLocal_260) < 19.0f)
					{
						iLocal_198 = 37;
						DECOR_SET_BOOL(Global_34573, "EndMission", true);
					}
				}
				break;
			
			case 0x00000021:
				if (Function_220(&iLocal_266))
				{
					if (Function_178(&iLocal_266) <= 1.0f)
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
					if (Function_220(&iLocal_266))
					{
						if (Function_178(&iLocal_266) <= 8.0f)
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
					if (Function_220(&iLocal_266))
					{
						if (Function_178(&iLocal_266) <= 15.0f)
						{
							Function_173(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
							UI_POP("CutsceneWithMessages");
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							DECOR_SET_BOOL(Global_34573, "TriggerSpecialCase", true);
							Function_145(200, 1, 0);
							Function_132(50, 1, 0);
							Function_130(Function_131(1, 1, 1, 0, 0), 1);
							if (!Function_129())
							{
								Function_127(9, 0, 1);
							}
							else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
							{
								Function_127(9, 0, 1);
							}
							SET_WEAPONENUM_LOCKED(15, 0);
							GIVE_WEAPON_TO_ACTOR(Global_34573, 15, 0, 1, 1);
							Function_206(Global_30736, 0);
							if (Function_220(&iLocal_275))
							{
								bLocal_153 = Function_178(&iLocal_275);
								if (Function_126(462) < 0.0f)
								{
									if (bLocal_153 > Function_126(462))
									{
										Function_125(462, bLocal_153, 0);
									}
								}
								else
								{
									Function_125(462, bLocal_153, 0);
								}
							}
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_95(Global_30736);
							Function_37(Global_30736, 1, 1, 0);
							SET_PLAYER_ENDLESS_READYMODE(0, 0);
							if ((Function_36(Global_30738) <= 1 && Function_36(Global_30734) <= 1) && Function_36(Global_30736) <= 1)
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
				if (Function_220(&iLocal_266))
				{
					if (Function_178(&iLocal_266) <= 19.0f)
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
					Function_177();
					Function_176();
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_90)))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_90));
					}
					DESTROY_OBJECT(bLocal_90);
					SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, -92.772f, 0.0f, 0);
					iLocal_167 = 1;
				}
				if (!iLocal_182)
				{
					if (Function_178(&iLocal_254) < 9.0f)
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
						Function_173(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
						AI_STOP_IGNORING_ACTOR(bLocal_113);
						if (!IS_PLAYER_CONTROLLABLE(0))
						{
							SET_PLAYER_CONTROL(false, 1, 0, 0);
						}
						TASK_CLEAR(Global_34573);
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_207("PIK_Obj_PutDown", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iLocal_182 = 1;
					}
				}
				if (!iLocal_183)
				{
					if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[7]) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[6]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[5]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_97[4]) != 0)
					{
						if (Function_220(&iLocal_275))
						{
							bLocal_153 = Function_178(&iLocal_275);
							if (Function_126(462) < 0.0f)
							{
								if (bLocal_153 > Function_126(462))
								{
									Function_125(462, bLocal_153, 0);
								}
							}
							else
							{
								Function_125(462, bLocal_153, 0);
							}
						}
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
						DECOR_SET_BOOL(Global_34573, "RemoveExtraBlips", true);
						iLocal_183 = 1;
						if (!Function_220(&iLocal_281))
						{
							Function_219(&iLocal_281);
						}
						uLocal_95 = Function_32(bLocal_89, 0, 1, 1, 0);
						iLocal_198 = 23;
					}
				}
				break;
			
			case 0x00000025:
				if (!iLocal_180)
				{
					if (Function_205(Global_30736) == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_FLEEING", true, false, 2, 0, true, false);
						}
					}
					SET_PLAYER_ENDLESS_READYMODE(0, 0);
					Function_13(&iLocal_199);
					if (!IS_PLAYER_CONTROLLABLE(0))
					{
						SET_PLAYER_CONTROL(false, 1, 0, 0);
					}
					TASK_CLEAR(Global_34573);
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
						Function_29(&bLocal_96, 0, 0);
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
	Function_13(&iLocal_199);
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		SET_PLAYER_CONTROL(false, 1, 0, 0);
	}
	TASK_CLEAR(Global_34573);
	if (DECOR_CHECK_EXIST(Global_34573, "shakehands_noCam"))
	{
		DECOR_REMOVE(Global_34573, "shakehands_noCam");
	}
	if (Function_205(Global_30736) == 2)
	{
		Function_2(Global_30736);
	}
	if (IS_ACTOR_VALID(bLocal_113))
	{
		RELEASE_ACTOR(bLocal_113);
	}
	if (SQUAD_IS_VALID(bLocal_96))
	{
		Function_29(&bLocal_96, 0, 0);
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

void Function_1() //Position: 0x3268 / 12904
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_2(bool bParam0) //Position: 0x3273 / 12915
{
	int iVar0;
	
	if (!Function_11(bParam0))
	{
		Function_9();
		return;
	}
	iVar0 = Function_8(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_3("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_3(char* cParam0, bool bParam1) //Position: 0x32C6 / 12998
{
	struct<4> Var0;
	
	if (!Function_11(bParam1))
	{
		return;
	}
	switch (Function_8(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_4(Function_6(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_8(bParam1), Function_6(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_4(int iParam0) //Position: 0x33EA / 13290
{
	char* cVar0[16];
	
	if (!Function_5())
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

bool Function_5() //Position: 0x3424 / 13348
{
	if (Function_243(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_6(bool bParam0) //Position: 0x343F / 13375
{
	if (!Function_7(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_7(int iParam0) //Position: 0x345F / 13407
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_8(bool bParam0) //Position: 0x3476 / 13430
{
	if (!Function_7(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_9() //Position: 0x3491 / 13457
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
			Function_10(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_10(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x36D8 / 14040
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_11(int iParam0) //Position: 0x3701 / 14081
{
	if (!Function_7(iParam0))
	{
		return 0;
	}
	if (!Function_12(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_12(int iParam0) //Position: 0x3725 / 14117
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_13(int iParam0) //Position: 0x373A / 14138
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_14(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x3760 / 14176
{
	if (Function_16(uParam0[iParam13], 4))
	{
		if (Function_16(uParam0[iParam13], 1))
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
			Function_15(uParam0[iParam13], 1);
			Function_15(uParam0[iParam13], 2);
			Function_15(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x388E / 14478
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_16(int iParam0, int iParam1) //Position: 0x38A8 / 14504
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17() //Position: 0x38C5 / 14533
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Pikes_BasinEarly", "Pikes_BasinEarly", 0, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_18(int iParam0) //Position: 0x390E / 14606
{
	Function_19(0, Global_34573, iParam0, 0);
	Function_19(1, bLocal_113, iParam0, 0);
	return;
}

void Function_19(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x3927 / 14631
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_243(uParam2, Function_20(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

int Function_20(bool bParam0) //Position: 0x394C / 14668
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_21(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3958 / 14680
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_194(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PK_SpecialCase_Ending", 4, 1);
	}
	Function_22(&bVar0);
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

void Function_22(int iParam0) //Position: 0x39D9 / 14809
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_26(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_25(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_24(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_23(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 5.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 2, 3, 9.5f, 2, 0);
	return;
}

void Function_23(int iParam0) //Position: 0x3A48 / 14920
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1567.24f, 69.14285f, 2447.577f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.041901f, -1.958359f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_24(int iParam0) //Position: 0x3AB2 / 15026
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1565.941f, 69.13454f, 2444.802f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.023458f, -2.153817f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_25(int iParam0) //Position: 0x3B1C / 15132
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.05698f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1505.617f, 60.36197f, 2461.962f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.062034f, -1.05324f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_26(var uParam0) //Position: 0x3B86 / 15238
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 41.57376f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -1503.57f, 60.49177f, 2464.368f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.241011f, -0.886658f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_27() //Position: 0x3BF0 / 15344
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_28() //Position: 0x3C05 / 15365
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Pikes_CanyonExit", "Pikes_CanyonExit", 0, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_29(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3C4E / 15438
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
				if (!Function_30(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_30(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3CCA / 15562
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_31(bool bParam0, bool bParam1) //Position: 0x3CE4 / 15588
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

var Function_32(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x3CF9 / 15609
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_194(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PIK_Vista01", 2, 1);
	}
	Function_33(&bVar0);
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

void Function_33(int iParam0) //Position: 0x3D70 / 15728
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_35(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_34(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.0f, 0, 0);
	return;
}

void Function_34(int iParam0) //Position: 0x3DA5 / 15781
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 57.75359f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1298.358f, 89.32796f, 2378.287f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.085643f, -1.275337f, -0.000837f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_35(int iParam0) //Position: 0x3E13 / 15891
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 57.75359f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1298.552f, 90.06156f, 2378.257f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.042042f, -1.742399f, -0.000834f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

int Function_36(bool bParam0) //Position: 0x3E81 / 16001
{
	if (!Function_7(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3E9B / 16027
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_11(bParam0))
	{
		Function_9();
		return;
	}
	bVar0 = Function_8(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_129())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_6(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_94(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_93(Global_6269) };
		}
		if (Function_129())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_87();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_129())
	{
		Function_86();
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
			Function_81(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
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
						switch (Function_6(bParam0))
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
			Function_41(1);
			Function_39(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_38(bParam0, &Var14);
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

void Function_38(int iParam0, int iParam1) //Position: 0x40F2 / 16626
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x412C / 16684
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_40())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_40() //Position: 0x416E / 16750
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x4177 / 16759
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_71();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_42(&Global_63095, 1);
		Function_42(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_42(int iParam0, int iParam1) //Position: 0x41C8 / 16840
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_43() //Position: 0x41DB / 16859
{
	Function_69();
	Function_68();
	Function_68();
	Function_67();
	Function_67();
	Function_66();
	Function_66();
	Function_51(0);
	Function_51(0);
	if (!Function_40())
	{
		Function_48();
		Function_47();
		Function_46();
		Function_45();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_44();
	return;
}

void Function_44() //Position: 0x422D / 16941
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

void Function_45() //Position: 0x4333 / 17203
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

void Function_46() //Position: 0x4366 / 17254
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
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_47() //Position: 0x44F4 / 17652
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
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_48() //Position: 0x46A8 / 18088
{
	Function_49(&Global_28260, 1, 0);
	return;
}

void Function_49(int iParam0, bool bParam1, var uParam2) //Position: 0x46B6 / 18102
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
	
	bVar0 = Function_50();
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

var Function_50() //Position: 0x48A7 / 18599
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x48BC / 18620
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
					iVar2 = ((Function_65((50 + iVar4)) + Function_65((183 + iVar4))) + Function_65((90 + iVar4)));
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
	Function_52(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x4962 / 18786
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
		Function_64(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_63(iParam0);
	if (bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x4BFD / 19453
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_62(390))), 32);
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
					bVar19 = (Function_126(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_126(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_60(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_57(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_54(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_194(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_54(int iParam0) //Position: 0x522A / 21034
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x523B / 21051
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_56(char* cParam0, bool bParam1) //Position: 0x5330 / 21296
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5349 / 21321
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x53AE / 21422
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x53C0 / 21440
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x53D2 / 21458
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
	if (((Function_61(iParam0) != 19 || Function_61(iParam0) != 17) || Function_61(iParam0) != 10) || Function_61(iParam0) != 9)
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

int Function_61(int iParam0) //Position: 0x5502 / 21762
{
	return Global_35278[iParam020].f_48;
}

var Function_62(int iParam0) //Position: 0x5511 / 21777
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_63(int iParam0) //Position: 0x554E / 21838
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

int Function_64(int iParam0, bool bParam1, bool bParam2) //Position: 0x56E8 / 22248
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

int Function_65(bool bParam0) //Position: 0x592C / 22828
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_66() //Position: 0x596D / 22893
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
		iVar2 = ((Function_65((50 + iVar3) + 15) + Function_65((183 + iVar3) + 15)) + Function_65((90 + iVar3) + 15));
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
	Function_52(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_67() //Position: 0x59F6 / 23030
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
			iVar2 = ((Function_65((50 + iVar3) + 8) + Function_65((183 + iVar3) + 8)) + Function_65((90 + iVar3) + 8));
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
	Function_52(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_68() //Position: 0x5A8D / 23181
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
		iVar2 = ((Function_65((50 + iVar3)) + Function_65((183 + iVar3))) + Function_65((90 + iVar3)));
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
	Function_52(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_69() //Position: 0x5B0C / 23308
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_70(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_70(int iParam0, bool bParam1, int iParam2) //Position: 0x5B45 / 23365
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
	Function_64(iParam0, bParam1, 1);
	Function_63(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_71() //Position: 0x5D4F / 23887
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_5())
	{
		Function_78(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_78(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_73(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_73(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_72(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
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

bool Function_72(vector3 vParam0) //Position: 0x5E0A / 24074
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_73(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5E22 / 24098
{
	int iVar0;
	
	iVar0 = Function_76(uParam2, uParam3);
	if (Function_75(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_242(&Global_63095, 1);
			Function_42(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_242(&Global_63095, 2);
			Function_42(&Global_63095, 1);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_242(&Global_63095, 2);
		Function_42(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_74();
	return StackVal, StackVal, Function_74();
}

vector3 Function_74() //Position: 0x5F09 / 24329
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_75(int iParam0) //Position: 0x5F12 / 24338
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_76(bool bParam0, bool bParam1) //Position: 0x5F28 / 24360
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
				fVar2 = Function_77(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_77(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_75(bVar0) && !bParam1)
	{
		bVar0 = Function_76(bParam0, 1);
	}
	return bVar0;
}

float Function_77(vector3 vParam0, vector3 vParam3) //Position: 0x5FEF / 24559
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_78(var uParam0, int iParam1) //Position: 0x600C / 24588
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_80(Global_34573, &vVar4);
	if (!Function_79(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_79(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_242(&Global_63095, 2);
	Function_42(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_72(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_79(int iParam0) //Position: 0x6831 / 26673
{
	int iVar0;
	
	iVar0 = Global_29008[iParam0];
	return (((Function_243(iVar0, 0x1000000) || Function_243(iVar0, 0x2000000)) || Function_243(iVar0, 0x4000000)) || !Function_243(iVar0, 0x10000000));
}

void Function_80(bool bParam0, bool bParam1) //Position: 0x686C / 26732
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_81(bool bParam0) //Position: 0x6879 / 26745
{
	int iVar0;
	int iVar1;
	
	if (!Function_7(bParam0))
	{
		return;
	}
	switch (Function_8(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_6(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_85(12, 1, 0, 0);
				Function_84(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_85(13, 1, 0, 0);
				Function_84(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_85(14, 1, 0, 0);
				Function_84(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_85(15, 1, 0, 0);
				Function_84(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_85(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_6(bParam0))
			{
				case 0x00000000:
					if (Function_36(bParam0) == 1)
					{
						iVar0 = Function_83(bParam0);
						if (Function_82(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_84(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_84(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_84(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_84(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_84(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_84(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_84(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_84(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_84(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_84(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_84(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_84(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_84(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_84(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_84(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_84(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_84(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_84(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_84(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_84(4, 19);
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
								Function_85(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_85(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_85(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_83(bParam0) == 0)
			{
				if (Function_36(bParam0) == 1)
				{
					Function_85(458, 1, 0, 0);
					iVar0 = Function_6(bParam0);
					if (Function_82(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_84(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_84(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_84(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_84(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_84(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_84(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_84(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_84(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_36(bParam0) == 1)
			{
				Function_85(400, 1, 0, 0);
			}
			switch (Function_6(bParam0))
			{
				case 0x00000001:
					Function_85(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_84(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_84(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_84(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_85(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_84(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_84(6, 9);
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

bool Function_82(int iParam0) //Position: 0x6D55 / 27989
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_83(bool bParam0) //Position: 0x6D6B / 28011
{
	if (!Function_7(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

void Function_84(int iParam0, bool bParam1) //Position: 0x6D8A / 28042
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

int Function_85(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6DF1 / 28145
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
	Function_64(iParam0, TO_FLOAT(bParam1), 1);
	Function_63(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_86() //Position: 0x7011 / 28689
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_65(0));
	PLAYSTAT_INT("HC_FAME", Function_65(3));
	PLAYSTAT_INT("HC_HONOR", Function_65(1));
	return;
}

void Function_87() //Position: 0x7169 / 29033
{
	int iVar0;
	int iVar1;
	
	if (!Function_92(Global_6269))
	{
		return;
	}
	iVar0 = Function_65(24);
	iVar1 = Function_91(Global_6269);
	if (!Function_92(iVar0) && Function_90(iVar1) < 0)
	{
		Function_52(24, Global_6269, 0);
		Function_88(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_90(Function_91(iVar0)))
	{
		Function_52(24, Global_6269, 0);
		Function_88(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_88(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x71E9 / 29161
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
		Function_89(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_89(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x753B / 30011
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
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_90(int iParam0) //Position: 0x75BE / 30142
{
	if (!Function_11(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_91(int iParam0) //Position: 0x75D8 / 30168
{
	if (!Function_92(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_92(int iParam0) //Position: 0x75F2 / 30194
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_93(int iParam0) //Position: 0x7608 / 30216
{
	char* cVar0[16];
	
	if (!Function_5())
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

struct<24> Function_94(char* cParam0) //Position: 0x7647 / 30279
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

void Function_95(int iParam0) //Position: 0x789D / 30877
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (Function_6(iParam0) == Global_30640[2])
	{
		if (Function_124(2) && !Function_123(2))
		{
			Function_115(2, 2, 0, 0, 1);
		}
	}
	if (Function_6(iParam0) == Global_30658[3])
	{
		if (Function_124(6) && !Function_123(6))
		{
			Function_115(6, 16, 0, 0, 1);
		}
	}
	if (!Function_124(10) || Function_123(10))
	{
		return;
	}
	iVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	bVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_36(Global_30734);
	if (Global_30734 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_36(Global_30736);
	if (Global_30736 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_36(Global_30738);
	if (Global_30738 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_36(Global_30737);
	if (Global_30737 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_36(Global_30739);
	if (Global_30739 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073611].f_36, iVar0, bVar1) && !Global_30736 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073411].f_36, iVar0, bVar1) && !Global_30734 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073811].f_36, iVar0, bVar1) && !Global_30738 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073711].f_36, iVar0, bVar1) && !Global_30737 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073911].f_36, iVar0, bVar1) && !Global_30739 != iParam0)
	{
		return;
	}
	Function_84(2, 24);
	Function_96(10, 0, 1);
	return;
}

void Function_96(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7A4A / 31306
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_114(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_123(bParam0))
	{
		if (!Function_124(bParam0))
		{
			Function_100(bParam0, 1, 0, 0, 1);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		Function_85(457, 1, 0, 0);
		Function_99(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_98(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_97();
			}
		}
	}
	return;
}

void Function_97() //Position: 0x7BE9 / 31721
{
	return;
}

bool Function_98(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7BEF / 31727
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

void Function_99(bool bParam0, int iParam1) //Position: 0x7C93 / 31891
{
	if (!Function_114(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

void Function_100(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7CE8 / 31976
{
	struct<8> Var0;
	
	if (!Function_114(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_113(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_124(bParam0))
	{
		Function_85(456, 1, 0, 0);
		Function_99(bParam0, 2);
		if (bParam2)
		{
			if (!Function_98(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 5);
			}
			else
			{
				Function_97();
			}
		}
		Function_108(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_107() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_107() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_202(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_5())
		{
			if (!Function_106(Global_76846, 2))
			{
				Function_101(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_101(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7E3D / 32317
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_103(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_102(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_102(char* cParam0, int iParam1) //Position: 0x7EA9 / 32425
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

bool Function_103(bool bParam0, var uParam1, int iParam2) //Position: 0x7EE0 / 32480
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
		if (Function_105(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_104(uVar0))
		{
			case 0x00000002:
				if (!Function_106(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_104(char* cParam0) //Position: 0x7F58 / 32600
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

int Function_105(int iParam0) //Position: 0x7FF9 / 32761
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_42(&iVar1, 2147483648);
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

bool Function_106(int iParam0, int iParam1) //Position: 0x8038 / 32824
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_107() //Position: 0x804B / 32843
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_108(bool bParam0) //Position: 0x8078 / 32888
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
			if (Function_112(bParam0, Function_20(bVar24)))
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
			if (Function_112(bParam0, Function_20(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_111(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_110(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_109(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_109(int iParam0) //Position: 0x8228 / 33320
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_114(iParam0))
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

void Function_110(char* cParam0, bool bParam1) //Position: 0x827F / 33407
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_111(int iParam0) //Position: 0x82A4 / 33444
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_114(iParam0))
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

bool Function_112(bool bParam0, int iParam1) //Position: 0x82FA / 33530
{
	int iVar0;
	
	if (!Function_114(bParam0))
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

bool Function_113(int iParam0) //Position: 0x8359 / 33625
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_114(int iParam0) //Position: 0x8375 / 33653
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_115(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x838B / 33675
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_114(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_113(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_122(bParam0, 2))
	{
		Function_85(456, 1, 0, 0);
		Function_99(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_202(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_112(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_99(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_98(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_97();
			}
		}
		Function_108(bParam0);
		if (StackVal && !Function_243(((((!Function_107() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_243((((Function_107() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_5())
		{
			if (!Function_106(Global_76846, 2))
			{
				Function_101(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_117();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_116(3, bParam1);
				break;
			
			case 0x00000005:
				Function_116(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_116(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_116(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_116(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_116(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_84(2, 24);
				break;
			
			case 0x00000003:
				Function_84(2, 25);
				break;
			
			case 0x0000000F:
				Function_84(2, 26);
				break;
			
			case 0x0000000D:
				Function_84(2, 27);
				break;
			
			case 0x0000000E:
				Function_84(2, 28);
				break;
			}
	}
}

void Function_116(int iParam0, bool bParam1) //Position: 0x8621 / 34337
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_117() //Position: 0x868C / 34444
{
	if (Function_114(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_121(Global_28180);
			Global_28180.f_8 = Function_118(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_121(Global_28180);
			Global_28180.f_8 = Function_118(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_118(int iParam0, int iParam1) //Position: 0x8707 / 34567
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
					if (Function_120(6, 0) || Function_120(12, 0))
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
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
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
					if (Function_119(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_120(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
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
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
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
					if (Function_119(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_119(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_119(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_119(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_120(26, 0))
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
					if (Function_119(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_119(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_119(27) && iVar18)
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
					if (Function_119(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_119(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_119(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_119(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_120(17, 0) && iVar15)
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
					if (Function_119(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_120(6, 0) && Function_119(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_119(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_120(9, 0) && Function_119(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_119(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_120(8, 0) && iVar19)
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
	if (Function_72(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_72(StackVal, StackVal, vVar3))
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
	if (!Function_72(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_119(int iParam0) //Position: 0x92F8 / 37624
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_120(int iParam0, bool bParam1) //Position: 0x930D / 37645
{
	int iVar0;
	
	iVar0 = Function_91(iParam0);
	if (!Function_7(iVar0))
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

int Function_121(int iParam0) //Position: 0x934A / 37706
{
	int iVar0;
	int iVar1;
	
	if (!Function_114(iParam0))
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

bool Function_122(int iParam0, int iParam1) //Position: 0x9399 / 37785
{
	int iVar0;
	
	if (!Function_114(iParam0))
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

bool Function_123(int iParam0) //Position: 0x93C6 / 37830
{
	if (!Function_114(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_122(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_124(int iParam0) //Position: 0x9417 / 37911
{
	if (!Function_114(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_122(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_125(int iParam0, bool bParam1, bool bParam2) //Position: 0x9469 / 37993
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
		Function_64(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_63(iParam0);
	if (bParam2)
	{
		Function_53(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_126(int iParam0) //Position: 0x96D5 / 38613
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_127(bool bParam0, bool bParam1, int iParam2) //Position: 0x970E / 38670
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_128(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_128(bParam0), Function_50(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_128(bParam0), Function_50(), iParam2);
	return 1;
}

var Function_128(bool bParam0) //Position: 0x9759 / 38745
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

bool Function_129() //Position: 0x984A / 38986
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_130(bool bParam0, bool bParam1) //Position: 0x9875 / 39029
{
	bool bVar0;
	
	bVar0 = Function_65(0);
	if ((Function_65(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_85(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_65(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_85(597, bParam0, 0, 0);
	}
	if ((Function_65(597) + Function_65(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

bool Function_131(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9940 / 39232
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_65(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_128(17), Global_34573))
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

void Function_132(int iParam0, bool bParam1, bool bParam2) //Position: 0x9A42 / 39490
{
	int iVar0;
	bool bVar1;
	
	if (Function_144(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_129())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_65(3);
	Function_141();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_139(3, bVar1);
		if (!bParam2)
		{
			if (!Function_106(Global_76848, 4))
			{
				Function_101(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_85(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_126(3));
	iVar0 = Function_65(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_134(4, Function_138(Global_12976.f_156), 1);
				Function_133(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_134(4, Function_138(Global_12976.f_156), 1);
				Function_133(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_134(4, Function_138(Global_12976.f_156), 1);
				Function_133(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_134(4, Function_138(Global_12976.f_156), 1);
				Function_133(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_134(4, Function_138(Global_12976.f_156), 1);
				Function_133(Global_12976.f_152, Global_12976.f_156);
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

void Function_133(int iParam0, int iParam1) //Position: 0x9C11 / 39953
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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

int Function_134(int iParam0, char* cParam1, bool bParam2) //Position: 0x9E6F / 40559
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
	Function_88(iParam0, cParam1, 0, 1);
	iVar1 = Function_135();
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

int Function_135() //Position: 0x9FF4 / 40948
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
	Function_136();
	return 0;
}

void Function_136() //Position: 0xA093 / 41107
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
		Function_137(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_137(int iParam0) //Position: 0xA142 / 41282
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

var Function_138(int iParam0) //Position: 0xA1A0 / 41376
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

int Function_139(int iParam0, bool bParam1) //Position: 0xA22F / 41519
{
	bool bVar0;
	int iVar1;
	
	Function_85(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_140(iParam0, 4294967295);
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
	iVar1 = Function_135();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_140(int iParam0, int iParam1) //Position: 0xA3CC / 41932
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

void Function_141() //Position: 0xA40D / 41997
{
	Function_143(3, 0.0f);
	Function_142(3, 10000.0f);
	return;
}

int Function_142(int iParam0, int iParam1) //Position: 0xA423 / 42019
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0xA463 / 42083
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_144(int iParam0) //Position: 0xA4A3 / 42147
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_145(int iParam0, bool bParam1, bool bParam2) //Position: 0xA4B2 / 42162
{
	int iVar0;
	bool bVar1;
	
	if (Function_144(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_129())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_65(1);
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
			Function_139(1, bVar1);
			if (!bParam2)
			{
				if (!Function_106(Global_76848, 1))
				{
					Function_101(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_148(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_106(Global_76848, 2))
				{
					Function_101(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_85(1, bVar1, 0, 0);
	}
	else
	{
		Function_147(1, (4294967295 * bVar1), 0);
	}
	if (Function_65(1) <= 4294962296)
	{
		Function_52(1, 4294962296, 0);
	}
	else if (Function_65(1) >= 5000)
	{
		Function_52(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_126(1));
	iVar0 = Function_65(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_134(2, Function_146(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_134(2, Function_146(Global_12976.f_152), 0);
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
				Function_134(2, Function_146(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_134(2, Function_146(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_134(2, Function_146(Global_12976.f_152), 1);
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
				Function_134(2, Function_146(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_134(2, Function_146(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_134(2, Function_146(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_134(2, Function_146(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_134(2, Function_146(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_134(2, Function_146(Global_12976.f_152), 1);
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
				Function_134(2, Function_146(Global_12976.f_152), 0);
			}
			break;
	}
	Function_133(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_146(int iParam0) //Position: 0xA7D3 / 42963
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

int Function_147(int iParam0, bool bParam1, int iParam2) //Position: 0xA876 / 43126
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
	Function_63(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_148(int iParam0, bool bParam1) //Position: 0xAA71 / 43633
{
	bool bVar0;
	int iVar1;
	
	Function_147(iParam0, bParam1, 0);
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
	iVar1 = Function_140(iParam0, 4294967295);
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
	iVar1 = Function_135();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_149(bool bParam0) //Position: 0xAC0D / 44045
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

void Function_150(bool bParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xAC51 / 44113
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
				if (GET_BLIP_ICON(bVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(bVar1, iParam1);
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
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, iParam1, fParam3, 2, 0);
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

bool Function_151(bool bParam0, bool bParam1) //Position: 0xAD3B / 44347
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

int Function_152(bool bParam0, bool bParam1) //Position: 0xAD91 / 44433
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

void Function_153(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) //Position: 0xADE6 / 44518
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	fVar1 = uParam3;
	if (iParam4 <= 0)
	{
		iParam4 = SQUAD_GET_SIZE(bParam0);
	}
	iVar0 = 0;
	while (iVar0 < (iParam4 - 1))
	{
		SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, 0, 2, 4294967295);
		TASK_FOLLOW_OBJECT_ALONG_PATH(false, uParam1, uParam2, fVar1, iParam5, iParam6);
		iVar0++;
	}
}

void Function_154(bool bParam0) //Position: 0xAE2E / 44590
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

void Function_155() //Position: 0xAE60 / 44640
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Pikes_CompletesHerdPort", "Pikes_CompletesHerdPort", 0, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_156() //Position: 0xAEB7 / 44727
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Pikes_HerdSolo", "Pikes_HerdSolo", 0, 2, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_157(bool bParam0, bool bParam1) //Position: 0xAEFC / 44796
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

bool Function_158(var uParam0, var uParam1, int iParam2) //Position: 0xAF4D / 44877
{
	return Function_159(Global_29006, uParam0, uParam1, iParam2);
}

int Function_159(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xAF5F / 44895
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_82(iParam0))
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

var Function_160(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xAFFB / 45051
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_194(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nPK_Middle", 4, 1);
	}
	Function_161(&bVar0);
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

void Function_161(int iParam0) //Position: 0xB070 / 45168
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_165(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_164(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_163(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_162(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 5.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 2.0f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 2, 3, 8.0f, 3, 0);
	return;
}

void Function_162(int iParam0) //Position: 0xB0E5 / 45285
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.84526f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1280.881f, 87.68272f, 2363.648f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.089093f, -1.739692f, -0.006892f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_163(int iParam0) //Position: 0xB153 / 45395
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.84526f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1279.81f, 87.73152f, 2361.008f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.0281f, -2.826691f, -0.006868f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_164(int iParam0) //Position: 0xB1C1 / 45505
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.45719f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1175.014f, 77.5491f, 2370.723f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.031641f, 1.47904f, -0.000101f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_165(int iParam0) //Position: 0xB22F / 45615
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.45719f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1176.4f, 77.85641f, 2366.599f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.142707f, 1.274346f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_166(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xB299 / 45721
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_194(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PK_Middle_NoVista", 2, 1);
	}
	Function_167(&bVar0);
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

void Function_167(int iParam0) //Position: 0xB316 / 45846
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_169(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_168(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 6.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_168(int iParam0) //Position: 0xB355 / 45909
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34.86373f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1174.259f, 77.6797f, 2370.954f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.03202f, 1.433395f, -0.003608f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_169(var uParam0) //Position: 0xB3C3 / 46019
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 34.86373f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -1174.919f, 77.72679f, 2368.758f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.046908f, 1.28889f, -0.00361f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_170() //Position: 0xB431 / 46129
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Pikes_GMInBasin", "Pikes_GMInBasin", 0, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_171() //Position: 0xB478 / 46200
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Pikes_BollardInfo", "Pikes_BollardInfo", 0, 2, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_172(var uParam0, bool bParam1) //Position: 0xB4C3 / 46275
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_242(uParam0, 1);
	Function_42(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_173(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xB4E4 / 46308
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
			SET_PLAYER_CONTROL(false, 1, 0, 0);
		}
		bVar0 = Function_50();
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
			if (Function_40())
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
		Function_85(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_27();
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
	Function_174(iParam9);
}

void Function_174(bool bParam0) //Position: 0xB5D4 / 46548
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
		Function_175();
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

void Function_175() //Position: 0xB683 / 46723
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

void Function_176() //Position: 0xB6F5 / 46837
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Pikes_Introduces", "Pikes_Introduces", 0, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_177() //Position: 0xB73E / 46910
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Pikes_ApproachesRancher", "Pikes_ApproachesRancher", 0, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_178(int iParam0) //Position: 0xB795 / 46997
{
	if (Function_220(iParam0))
	{
		if (Function_179(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_179(bool bParam0) //Position: 0xB85D / 47197
{
	return Function_243(*bParam0, 2);
}

int Function_180(char* cParam0, var uParam1, var uParam2, float fParam3, char* cParam4, int iParam5) //Position: 0xB86A / 47210
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

bool Function_181(bool bParam0, bool bParam1) //Position: 0xB8E9 / 47337
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
		if (STRING_CONTAINS_STRING(bVar4, bParam0) || Function_182(bParam0, bVar4))
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

int Function_182(char* cParam0, char* cParam1) //Position: 0xB991 / 47505
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

void Function_183(bool bParam0, bool bParam1) //Position: 0xB9BC / 47548
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
	else if (!bParam1 || Function_184(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_184(bool bParam0, bool bParam1) //Position: 0xBA19 / 47641
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_185(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xBA38 / 47672
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_194(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PikesBasin_Intro", 2, 1);
	}
	Function_186(&bVar0);
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

void Function_186(int iParam0) //Position: 0xBAB4 / 47796
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_188(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_187(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 2);
	return;
}

void Function_187(int iParam0) //Position: 0xBAFD / 47869
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.1796f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1505.695f, 59.87241f, 2463.905f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.022216f, -0.8085555f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_188(bool bParam0) //Position: 0xBB67 / 47975
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 37.1796f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -1506.689f, 59.97955f, 2462.957f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.058631f, -1.756424f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_189(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0xBBD1 / 48081
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
	Function_27();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_50();
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
			if (Function_40())
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
		SET_PLAYER_CONTROL(false, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(false))
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
				Function_193(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_194(), 2, Function_193(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_85(19, 1, 0, 0);
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
	if (iParam10 && !Function_5())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_192()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_192()));
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
	if (Function_191(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_190(0x4000000);
	}
	if (Function_191(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_190(0x8000000);
	}
}

void Function_190(int iParam0) //Position: 0xBE7F / 48767
{
	int iVar0;
	
	if (Function_243(iParam0, 1) && Function_243(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_191(int iParam0) //Position: 0xBEB3 / 48819
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_192() //Position: 0xBECF / 48847
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

vector3 Function_193(bool bParam0) //Position: 0xBF4E / 48974
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_194() //Position: 0xBF5F / 48991
{
	int iVar0;
	
	return iVar0;
}

void Function_195(bool bParam0) //Position: 0xBF67 / 48999
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

bool Function_196(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBFF1 / 49137
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
				SET_PLAYER_CONTROL(false, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(false) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_183(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_184(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_184(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_197(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_197(&iVar6, &vVar3);
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

int Function_197(int iParam0, int iParam1) //Position: 0xC204 / 49668
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_72(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_72(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int Function_198(int iParam0) //Position: 0xC26F / 49775
{
	return (((SQUAD_GET_SIZE((*iParam0)[4]) + SQUAD_GET_SIZE((*iParam0)[5])) + SQUAD_GET_SIZE((*iParam0)[6])) + SQUAD_GET_SIZE((*iParam0)[7]));
}

float Function_199(bool bParam0, int iParam1) //Position: 0xC298 / 49816
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_201(bParam0);
		vVar0 = { StackVal, StackVal, Function_201(bParam0) };
		Function_200(iParam1);
		vVar3 = { StackVal, StackVal, Function_200(iParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_200(bool bParam0) //Position: 0xC315 / 49941
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_201(bool bParam0) //Position: 0xC326 / 49958
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

void Function_202(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xC390 / 50064
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_93(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

int Function_203() //Position: 0xC40B / 50187
{
	return Global_12976.f_156;
}

void Function_204(int iParam0, int iParam1) //Position: 0xC416 / 50198
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	int iVar12;
	
	if (!Function_11(iParam0))
	{
		Function_9();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_8(iParam0);
	if (StackVal != 2)
	{
		Function_3("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_41(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_6(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_94(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_93(Global_6269) };
		}
		iVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(iVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(iVar12);
		APPEND_JOURNAL_ENTRY(iVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

int Function_205(int iParam0) //Position: 0xC526 / 50470
{
	if (!Function_11(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_206(int iParam0, bool bParam1) //Position: 0xC540 / 50496
{
	if (!Function_11(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = bParam1;
	return;
}

void Function_207(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xC55B / 50523
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
			Var0 = { StackVal, StackVal, StackVal, Function_93(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_208(bool bParam0) //Position: 0xC5E0 / 50656
{
	bool bVar0;
	
	if (SQUAD_IS_VALID((*bParam0)[7]))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE((*bParam0)[7]) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*bParam0)[7], bVar0)))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX((*bParam0)[7], bVar0), 13, 0);
			}
			bVar0++;
		}
	}
	return;
}

int Function_209(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0xC62C / 50732
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
			if (Function_210(bParam0, bVar1, iParam2, iParam3, iParam4, fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_210(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xC68C / 50828
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
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
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
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
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

vector3 Function_211(bool bParam0) //Position: 0xC779 / 51065
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

vector3 Function_212(bool bParam0) //Position: 0xC7A0 / 51104
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

void Function_213(bool bParam0, float fParam1) //Position: 0xC7C7 / 51143
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
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, fParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_214(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC810 / 51216
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

void Function_215(bool bParam0, bool bParam1) //Position: 0xC855 / 51285
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

void Function_216(int iParam0) //Position: 0xC8A7 / 51367
{
	bool bVar0;
	
	if (SQUAD_IS_VALID((*iParam0)[7]))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE((*iParam0)[7]) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[7], bVar0)))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[7], bVar0), 13, 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_217(var uParam0, int iParam1) //Position: 0xC8F3 / 51443
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PIK_AA_Layout");
	(*uParam0)[0] = Function_181("PIK_canyonSquad1", bVar0);
	(*uParam0)[1] = Function_181("PIK_canyonSquad2", bVar0);
	(*uParam0)[2] = Function_181("PIK_canyonSquad3", bVar0);
	(*uParam0)[3] = Function_181("PIK_canyonSquad4", bVar0);
	(*uParam0)[4] = Function_181("PIK_canyonSquad5", bVar0);
	(*uParam0)[5] = Function_181("PIK_canyonSquad6", bVar0);
	(*uParam0)[6] = Function_181("PIK_canyonSquad7", bVar0);
	(*uParam0)[7] = Function_181("PIK_canyonSquad8", bVar0);
	(*uParam0)[8] = Function_181("PIK_canyonSquad9", bVar0);
	(*uParam0)[9] = Function_181("PIK_canyonSquad10", bVar0);
	(*uParam0)[10] = Function_181("PIK_canyonSquad11", bVar0);
	(*uParam0)[11] = Function_181("PIK_canyonSquad12", bVar0);
	*iParam1 = Function_181("PIK_MainSquad", bVar0);
	return;
}

void Function_218(int iParam0) //Position: 0xCA89 / 51849
{
	Function_172(iParam0, 0.0f);
	return;
}

void Function_219(int iParam0) //Position: 0xCA95 / 51861
{
	if (!Function_220(iParam0))
	{
		Function_172(iParam0, 0.0f);
	}
	return;
}

bool Function_220(int iParam0) //Position: 0xCAAA / 51882
{
	return Function_243(*iParam0, 1);
}

bool Function_221(var uParam0, int iParam1) //Position: 0xCAB7 / 51895
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_222(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xCAD3 / 51923
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { -1503.966f, 59.05378f, 2461.444f };
	vVar3 = { 0.0f, 274.7909f, 0.0f };
	*uParam1 = CREATE_ACTOR_IN_LAYOUT(*uParam2, "Pete_The_Herder", 173, vVar0, vVar3);
	MEMORY_CONSIDER_AS(*uParam1, Global_34573, false);
	SET_ACTOR_FACTION(*uParam1, 20);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(*uParam1, 0.1f);
	AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam1, Global_34573, -1.0f, 0);
	SET_CRIPPLE_ENABLE(*uParam1, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(*uParam1, false);
	AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(*uParam1, 1);
	SET_FACTIONS_STATUS_TWO_WAY(20, 14, 4);
	bVar6 = GET_MOUNT(*uParam1);
	if (IS_ACTOR_VALID(bVar6))
	{
		SET_ACTOR_PROOF(bVar6, 128);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar6, 0.25f);
	}
	TASK_SHOOT_ENEMIES_FROM_COVER(*uParam1, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "introCover")), -1.0f, 0.0f);
	Function_42(uParam0, 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(*uParam1, 1);
	SET_ACTOR_STAY_WITHIN_VOLUME(*uParam1, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_helperIntro"), 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*uParam1, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam1, 13, 1);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(*uParam1, false);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 12, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 13, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 63, 0);
	*uParam3 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam2, "PIKHelpSquad"));
	SQUAD_JOIN(*uParam1, *uParam3);
	*uParam4 = CREATE_GATEWAY_IN_LAYOUT(*uParam2, Function_194(), FIND_VOLUME_IN_LAYOUT(Global_30616, "v_introGateway"), Global_34573, 2, 3, 0, false, 1, 1);
	SET_ACTOR_FACTION(*uParam1, 20);
}

void Function_223(var uParam0, var uParam1, int iParam2) //Position: 0xCC58 / 52312
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
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_194(), RAND_INT_RANGE(1009, 1011), vVar3, vVar6);
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

bool Function_224(int iParam0) //Position: 0xCD21 / 52513
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_228();
	iVar1 = 0;
	if (!Function_16(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_227(iParam0[iVar03], 8);
		}
		else if (Function_226())
		{
			iVar1 = 1;
			Function_227(iParam0[iVar03], 8);
		}
		Function_227(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_16(iParam0[iVar03], 4))
		{
			if (!Function_16(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_16(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_16(iParam0[03], 8) || iVar1));
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
				Function_227(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_16(iParam0[iVar03], 4))
		{
			if (!Function_16(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_227(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_227(iParam0[iVar03], 2);
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
							Function_227(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_227(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_227(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_227(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_227(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_227(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_227(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_227(iParam0[iVar03], 2);
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
	Function_225();
	return 1;
}

void Function_225() //Position: 0xD09C / 53404
{
	if (!Function_191(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_226() //Position: 0xD0DC / 53468
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

void Function_227(var uParam0, int iParam1) //Position: 0xD107 / 53511
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_228() //Position: 0xD118 / 53528
{
	if (!Function_191(128))
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

struct<8> Function_229() //Position: 0xD15A / 53594
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("PikesHerding_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("PikesHerding_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_FailSafe", 2, -1503.332f, 58.53423f, 2465.817f, 0.0f, 0.0f, 0.0f, 15.35839f, 17.74895f, 21.41887f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_HerdStayOut1", 2, -1285.242f, 75.29413f, 2328.794f, 0.0f, 0.0f, 0.0f, 32.01906f, 35.13971f, 56.75269f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_HerdStayOut2", 2, -1255.361f, 75.29413f, 2351.368f, 0.0f, 84.63895f, 0.0f, 32.01906f, 35.13971f, 56.75269f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_HerdStayOut3", 2, -1251.708f, 75.29413f, 2234.44f, 0.0f, 0.0f, 0.0f, 32.01906f, 35.13971f, 56.75269f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_HerdStayOut4", 2, -1199.657f, 75.29413f, 2365.212f, 0.0f, 0.0f, 0.0f, 28.11802f, 10.59501f, 32.09558f);
	*(&Local_0 + 24) = { -1532.0f, 54.95007f, 2466.391f };
	*(&Local_0 + 24 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_48 = CREATE_POINT_IN_LAYOUT(Local_0, "f_iPath2_BattleFlag", -1532.0f, 54.95007f, 2466.391f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 52) = { -1400.943f, 70.2745f, 2243.057f };
	*(&Local_0 + 52 + 12) = { 0.0f, -200.5033f, 0.0f };
	Local_0.f_76 = CREATE_POINT_IN_LAYOUT(Local_0, "f_iPath1_BattleFlag", -1400.943f, 70.2745f, 2243.057f, 0.0f, -200.5033f, 0.0f);
	*(&Local_0 + 80) = { -1250.74f, 80.31372f, 2161.26f };
	*(&Local_0 + 80 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_104 = CREATE_POINT_IN_LAYOUT(Local_0, "f_iPath0_BattleFlag", -1250.74f, 80.31372f, 2161.26f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 108) = { -1142.156f, 83.73206f, 2367.737f };
	*(&Local_0 + 108 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_132 = CREATE_POINT_IN_LAYOUT(Local_0, "f_iPath3_BattleFlag", -1142.156f, 83.73206f, 2367.737f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 136) = { -1492f, 77.30194f, 2280.0f };
	*(&Local_0 + 136 + 12) = { 0.0f, -39.59162f, 0.0f };
	Local_0.f_160 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_01", -1492f, 77.30194f, 2280.0f, 0.0f, -39.59162f, 0.0f);
	*(&Local_0 + 164) = { -1312.0f, 75.94304f, 2284.0f };
	*(&Local_0 + 164 + 12) = { 0.0f, 78.6872f, 0.0f };
	Local_0.f_188 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_02", -1312.0f, 75.94304f, 2284.0f, 0.0f, 78.6872f, 0.0f);
	*(&Local_0 + 192) = { -1238.239f, 75.86394f, 2521.103f };
	*(&Local_0 + 192 + 12) = { 0.0f, 78.6872f, 0.0f };
	Local_0.f_216 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_03", -1238.239f, 75.86394f, 2521.103f, 0.0f, 78.6872f, 0.0f);
	*(&Local_0 + 220) = { -1175.949f, 76.29803f, 2364.051f };
	*(&Local_0 + 220 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_244 = CREATE_POINT_IN_LAYOUT(Local_0, "f_HelperGateSpot", -1175.949f, 76.29803f, 2364.051f, 0.0f, 0.0f, 0.0f);
	Local_0.f_248 = CREATE_POINT_IN_LAYOUT(Local_0, "f_location01", -1381.142f, 70.32686f, 2436.392f, 0.0f, 0.0f, 0.0f);
	Local_0.f_252 = CREATE_POINT_IN_LAYOUT(Local_0, "f_location02", -1286.758f, 68.27748f, 2516.286f, 0.0f, 0.0f, 0.0f);
	Local_0.f_256 = CREATE_POINT_IN_LAYOUT(Local_0, "f_location03", -1263.452f, 70.31403f, 2481.219f, 0.0f, 0.0f, 0.0f);
	Local_0.f_260 = CREATE_POINT_IN_LAYOUT(Local_0, "f_location04", -1266.684f, 71.50318f, 2401.141f, 0.0f, 0.0f, 0.0f);
	Local_0.f_264 = CREATE_POINT_IN_LAYOUT(Local_0, "f_location05", -1256.0f, 73.28629f, 2380.0f, 0.0f, 0.0f, 0.0f);
}

void Function_230(bool bParam0) //Position: 0xDE77 / 56951
{
	Function_233(bParam0, 173, 3, 1);
	Function_233(bParam0, 976, 3, 1);
	Function_233(bParam0, 977, 3, 1);
	Function_233(bParam0, 1009, 3, 1);
	Function_233(bParam0, 1010, 3, 1);
	Function_233(bParam0, 1011, 3, 1);
	Function_231(bParam0, "action_areas", 10, 0);
	Function_231(bParam0, "AA_tesoro_intro_cover", 5, 0);
	Function_231(bParam0, "custom/AA_tesoro_intro_cover", 8, 0);
	Function_231(bParam0, "stand_shakehands", 5, 0);
	Function_231(bParam0, "custom/stand_shakehands", 8, 0);
	Function_231(bParam0, "shakehands_link", 1, 0);
	Function_231(bParam0, "excited_return", 5, 0);
	Function_231(bParam0, "custom/excited_return", 8, 0);
	return;
}

var Function_231(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xDFB0 / 57264
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_232(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_227(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_232(var uParam0, int iParam1, int iParam2) //Position: 0xDFE8 / 57320
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_16(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_227(uParam0[iVar03], 4);
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

var Function_233(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE0AC / 57516
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_16(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_227(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_227(uParam0[iVar03], 8);
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

void Function_234(var uParam0, var uParam1, int iParam2) //Position: 0xE17C / 57724
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
						if ((!Function_238(bVar4, *uParam1, 50.0f) && !Function_236(bVar4, *iParam2, 50.0f)) && !WOULD_ACTOR_BE_VISIBLE(Function_235(bVar4), &uVar1, 3212836864))
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

var Function_235(bool bParam0) //Position: 0xE213 / 57875
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_236(bool bParam0, bool bParam1, float fParam2) //Position: 0xE22E / 57902
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_201(bParam0);
			Function_237(bParam1);
			if (VDIST(Function_201(bParam0), Function_237(bParam1)) >= fParam2)
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

vector3 Function_237(bool bParam0) //Position: 0xE348 / 58184
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

bool Function_238(bool bParam0, bool bParam1, int iParam2) //Position: 0xE3B4 / 58292
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

void Function_239() //Position: 0xE4C5 / 58565
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Pikes_FinalWarning", "Pikes_FinalWarning", 0, 2, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_240(bool bParam0) //Position: 0xE512 / 58642
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

void Function_241() //Position: 0xE55E / 58718
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Pikes_ShootsCow", "Pikes_ShootsCow", 0, 2, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_242(int iParam0, int iParam1) //Position: 0xE5A5 / 58789
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_243(bool bParam0, int iParam1) //Position: 0xE5B4 / 58804
{
	return (bParam0 && iParam1) == 0;
}

bool Function_244(bool bParam0, bool bParam1) //Position: 0xE5C1 / 58817
{
	int iVar0;
	bool bVar1;
	int iVar2;
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
	iVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
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

float Function_245(bool bParam0, bool bParam1) //Position: 0xE62A / 58922
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

