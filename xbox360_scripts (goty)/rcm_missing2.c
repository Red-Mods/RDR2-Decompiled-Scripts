//Decompiled with MagicRDR v1.0
//Function Count : 247
//Statics Count : 396
//Natives Count : 522
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	var uLocal_10 = 12;
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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
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
	var uLocal_95 = 20;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
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
	var uLocal_114 = 0;
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
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 6;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	int iLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 11;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 11;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	bool bLocal_255 = false;
	vector3 vLocal_256 = { 0.0f, 0.0f, 0.0f };
	int iLocal_259 = 0;
	bool bLocal_260 = false;
	bool bLocal_261 = false;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	bool bLocal_264 = true;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	bool bLocal_319[7] = { false, false, false, false, false, false, false };
	int iLocal_327[7] = { 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_335 = false;
	bool bLocal_336 = false;
	bool bLocal_337 = false;
	bool bLocal_338 = false;
	int iLocal_339[7] = { 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_347 = false;
	bool bLocal_348 = false;
	bool bLocal_349 = false;
	bool bLocal_350 = false;
	bool bLocal_351 = false;
	int iLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	int iLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	int iLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	int iLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	int iLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	bool bLocal_374 = false;
	bool bLocal_375 = false;
	bool bLocal_376 = false;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	float fLocal_385 = 0.0f;
	float fLocal_386 = 0.0f;
	var uLocal_387 = 0;
	bool bLocal_388 = false;
	bool bLocal_389 = false;
	int iLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_9 = 0;
	iLocal_159 = 0;
	iLocal_160 = 0;
	iLocal_190 = 0;
	iLocal_246 = 16;
	iLocal_247 = 0;
	vLocal_256 = { -2784.264f, 43.169f, 2396.683f };
	bLocal_260 = false;
	bLocal_351 = false;
	iLocal_369 = 0;
	iLocal_370 = 0;
	bLocal_376 = false;
	iLocal_377 = 0;
	iLocal_378 = 0;
	iLocal_379 = 0;
	iLocal_382 = 0;
	iLocal_383 = 0;
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			iVar0 = 0;
			iLocal_248 = 1000;
			Global_74542[2010].f_36 = 0.0f;
			Function_246(&bLocal_264, 339, 3, 0);
			Function_246(&bLocal_264, 1212, 3, 0);
			Function_246(&bLocal_264, 111, 3, 0);
			Function_246(&bLocal_264, 55, 3, 0);
			Function_246(&bLocal_264, 53, 3, 0);
			Function_246(&bLocal_264, 89, 3, 0);
			Function_246(&bLocal_264, 153, 3, 0);
			Function_246(&bLocal_264, 79, 3, 0);
			Function_246(&bLocal_264, 1204, 3, 0);
			Function_246(&bLocal_264, 1206, 3, 0);
			Function_246(&bLocal_264, 1207, 3, 0);
			Function_244(&bLocal_264, "$/content/scripting/gringo/simpleGringo/stand_wring_hands", 1, 0);
			Function_244(&bLocal_264, "/content/DLC/ZombiePack/Gringos/z_dlc_z_beat_door", 1, 0);
			Function_244(&bLocal_264, "$/content/scripting/gringo/simpleGringo/stand_knock_on_door", 1, 0);
			Function_244(&bLocal_264, "fema_emo_thanks", 5, 0);
			Function_244(&bLocal_264, "ptl_base", 5, 0);
			Function_244(&bLocal_264, "custom/fema_emo_thanks", 8, 0);
			Function_244(&bLocal_264, "$/fragments/p_pos_missing01x", 0, 0);
			Function_243();
			Function_242(&iLocal_352);
			while (!IS_EXITFLAG_SET())
			{
				if (iVar0 >= 0)
				{
					if (IS_ACTOR_VALID(bLocal_349))
					{
						if (IS_ACTOR_DEAD(bLocal_349))
						{
							LOG_ERROR("Companion is now dead! Failing!");
							iVar0 = 8;
						}
					}
					else
					{
						LOG_ERROR("Companion is now invalid! Failing!");
						iVar0 = 8;
					}
				}
				switch (iVar0)
				{
					case 0x00000000:
						if (Function_237(&bLocal_264))
						{
							if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
							{
								if (IS_LAYOUTREF_VALID(bLocal_261))
								{
									bLocal_349 = CREATE_ACTOR_IN_LAYOUT(bLocal_261, "nMillicent", 339, *(&Global_63541[2055] + 100), 0.0f, Global_63541[2055].f_124, 0.0f);
									TASK_PRIORITY_SET(bLocal_349, 1);
									bLocal_335 = CREATE_VOLUME_IN_LAYOUT(bLocal_261, "StayOutVol", 2, *(&Global_63541[ScriptParam_055] + 100), 0.0f, 0.0f, 0.0f, 60.0f, 20.0f, 60.0f);
									if (IS_OBJECT_VALID(bLocal_335))
									{
										ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_335);
										ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_335);
									}
									bLocal_336 = CREATE_VOLUME_IN_LAYOUT(bLocal_261, "clearZombies", 2, -2832.546f, 50.331f, 2416.157f, 0.0f, 111.587f, 0.0f, 15.0f, 15.0f, 15.0f);
									bLocal_375 = CREATE_OBJECTSET_IN_LAYOUT("objClearZombies", bLocal_261, 15, 1);
									LOCATE_ACTORS_IN_VOLUME(bLocal_336, bLocal_375, 0, 1);
									if (IS_OBJECTSET_VALID(bLocal_375))
									{
										bVar1 = false;
										while (bVar1 <= GET_OBJECTSET_SIZE(bLocal_375))
										{
											bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_375);
											if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar2)))
											{
												if (GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar2)) != 339)
												{
													if (Function_236(GET_ACTOR_FROM_OBJECT(bVar2)))
													{
													}
													DESTROY_ACTOR(GET_ACTOR_FROM_OBJECT(bVar2));
												}
											}
											bVar1++;
										}
									}
									bLocal_350 = Function_235(Global_30640[10], "pleasanceHouse", "house01", 1);
									if (IS_DOOR_VALID(bLocal_350))
									{
										CLOSE_DOOR_FAST(bLocal_350);
										Function_234(bLocal_350, 0);
										SET_DOOR_AUTO_CLOSE(bLocal_350, 0);
										SET_DOOR_LOCK_VISIBLE(bLocal_350, 0);
									}
									bLocal_347 = CREATE_GRINGO_IN_LAYOUT(bLocal_261, "survivorIdle", "$/content/scripting/gringo/simpleGringo/stand_knock_on_door", -2831.146f, 50.332f, 2414.824f, 0.0f, 293.242f, 0.0f);
									SNAP_ACTOR_TO_GRINGO(bLocal_349, bLocal_347, "UseCase1", 1, 0, 0);
									TASK_USE_GRINGO(bLocal_349, GET_GRINGO_FROM_OBJECT(bLocal_347), "UseCase1", 4294967295, 1);
									SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, bLocal_349, 3);
									AI_IGNORE_ACTOR(bLocal_349);
									SET_ACTOR_PROOF(bLocal_349, 16);
									SET_ACTOR_PROOF(bLocal_349, 8);
									DECOR_SET_BOOL(bLocal_349, "CanBeLasso", false);
									DECOR_SET_BOOL(bLocal_349, "ActionArea_DisableHogtie", true);
									SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_349, 0.0f);
									SET_ACTOR_FACTION(bLocal_349, 20);
									Function_225();
									iVar0 = 1;
								}
								else
								{
									bLocal_261 = CREATE_LAYOUT("RCM_Missing2_Layout");
								}
							}
						}
						break;
					
					case 0x00000001:
						if ((Global_3404 || Global_3403) || Global_3405)
						{
							Function_224(&Global_63541[ScriptParam_055] + 144, 128);
							ACTOR_DATA_GRAVITY_LIMIT(0);
							Function_216();
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
							break;
						}
						bLocal_260 = true;
						if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
						{
							if (bLocal_260)
							{
								if (!Function_212(Global_34573, 1, 1))
								{
									if (Function_209(Global_63541[ScriptParam_055].f_192, 0, 1, 0, 1, 0))
									{
										GATEWAY_DISABLE(Global_63541[ScriptParam_055].f_192, 1);
										iVar0 = 3;
										break;
									}
								}
							}
						}
						Function_203(&(Global_63541[2055]), 20, 0x41f00000, 0x42200000, 0);
						if (Function_202())
						{
							AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
							iVar0 = 5;
							break;
						}
						break;
					
					case 0x00000003:
						if (Function_181("$/cutscene/missing_persons_2_cs/missing_persons_2_cs", &iLocal_248, 45149, 45096, 45059, 44759, 44722, 44706, 1, 1, 2, 2, 0))
						{
							bLocal_376 = true;
							iLocal_382 = 0;
							AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
							iVar0 = 5;
						}
						break;
					
					case 0x00000005:
						if (!HUD_IS_FADING() && !HUD_IS_FADED())
						{
							Function_180("Missing2a_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
							iLocal_262 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[ScriptParam_055].f_140);
							iLocal_263 = 0;
							while (iLocal_263 <= iLocal_262)
							{
								SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[ScriptParam_055].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[ScriptParam_055].f_140, iLocal_263), 4, 0);
								iLocal_263++;
							}
							APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[ScriptParam_055].f_140, "missing2a_OBJ", 0, 3, false);
							Function_179(Global_63541[ScriptParam_055].f_140, 0);
							REMOVE_BLIP(Global_63541[2055].f_184);
							REMOVE_BLIP(Global_63541[2055].f_188);
							Function_224(&Global_63541[2055] + 144, 2048);
							Function_178(bLocal_349, 0);
							iVar3 = 0;
							while (iVar3 <= 7)
							{
								if (IS_ACTOR_VALID(bLocal_319[iVar3]))
								{
									ADD_BLIP_FOR_ACTOR(bLocal_319[iVar3], 322, 0, 2, 0);
									DESTROY_OBJECT(iLocal_339[iVar3]);
									TASK_CLEAR(bLocal_319[iVar3]);
									Function_176(bLocal_319[iVar3], 4294967295, 1);
								}
								iVar3++;
							}
							uLocal_387 = Global_63541[ScriptParam_055].f_68;
							Global_63541[ScriptParam_055].f_68 = GET_ASSET_ID("$/cutscene/missing_persons_2_pt_b_cs/missing_persons_2_pt_b_cs", 9);
							iVar0 = 6;
						}
						break;
					
					case 0x00000006:
						if (IS_ACTOR_VALID(bLocal_349))
						{
							if (!bLocal_351)
							{
								iLocal_367 = 0;
								while (iLocal_367 < 6)
								{
									if (IS_ACTOR_VALID(bLocal_319[iLocal_367]))
									{
										if (!IS_ACTOR_DEAD(bLocal_319[iLocal_367]))
										{
											iLocal_368++;
										}
									}
									if (iLocal_367 == 6)
									{
										if (iLocal_368 == 0)
										{
											bLocal_351 = true;
											Function_180("Missing2b_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
											iLocal_262 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[ScriptParam_055].f_140);
											iLocal_263 = 0;
											while (iLocal_263 <= iLocal_262)
											{
												SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[ScriptParam_055].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[ScriptParam_055].f_140, iLocal_263), 4, 0);
												iLocal_263++;
											}
											APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[ScriptParam_055].f_140, "missing2b_OBJ", 0, 3, false);
											Function_179(Global_63541[ScriptParam_055].f_140, 0);
											bLocal_374 = ADD_BLIP_FOR_ACTOR(bLocal_349, 549, 0, 2, 0);
											SET_BLIP_NAME(bLocal_374, "MISSING");
											SET_BLIP_COLOR(bLocal_374, 0.34f, 0.58f, 0.74f, 1.0f);
											CLEAR_ACTOR_PROOF(bLocal_349, 16);
											CLEAR_ACTOR_PROOF(bLocal_349, 8);
											FIRE_STOP_FLAMES_IN_VOLUME(bLocal_335);
											SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_349, 1.0f);
											AI_GET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_349);
											AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
											AUDIO_MUSIC_SET_MOOD("SUSPENSE_DARK", 0, 4294967295, 4294967295);
											iVar0 = 7;
											Function_175(21, 1);
											Global_74542[2010].f_36 = 1.0f;
											break;
										}
										else
										{
											iLocal_368 = 0;
										}
									}
									iLocal_367++;
								}
							}
							else if (!iLocal_369)
							{
								if ((GET_TASK_STATUS(bLocal_349, 22) != 0 || GET_TASK_STATUS(bLocal_349, 22) != 1) || GET_TASK_STATUS(bLocal_349, 22) != 4)
								{
									RESET_ANIM_SET_FOR_ACTOR(bLocal_349, 1);
									SET_ANIM_SET_FOR_ACTOR(bLocal_349, "fema_emo_thanks", 0);
									SET_ACTION_NODE_FOR_ACTOR(bLocal_349, "fema_emo_thanks");
									Function_242(&uLocal_371);
									iLocal_369 = 1;
									iVar0 = 7;
									AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
									AUDIO_MUSIC_SET_MOOD("SUSPENSE_DARK", 0, 4294967295, 4294967295);
									iLocal_380 = 0;
									Function_174(&iLocal_364);
								}
							}
						}
						if (bLocal_376)
						{
							Function_173();
						}
						Function_203(&(Global_63541[2055]), 20, 0x41f00000, 0x42200000, 0);
						break;
					
					case 0x00000007:
						if (Function_181("$/cutscene/missing_persons_2_pt_b_cs/missing_persons_2_pt_b_cs", &iLocal_248, 38913, 45096, 36879, 36613, 35489, 44706, 1, 1, 2, 2, 0))
						{
							iVar0 = 12;
						}
						break;
					
					case 0x0000000C:
						if (!HUD_IS_FADING() && !HUD_IS_FADED())
						{
							if (!IS_OBJECT_VALID(bLocal_348))
							{
								bLocal_348 = Function_148(Global_30679[1], "fortMercer_layout", -2651.921f, 68.3f, 3424.928f, -0.4054303f, 580.7257f, -3.193105f, 1);
							}
							if (IS_ACTOR_VALID(bLocal_349))
							{
								if (IS_ACTOR_ALIVE(bLocal_349))
								{
									if (IS_ACTOR_RIDING(bLocal_349))
									{
										if (IS_BLIP_VALID(bLocal_374))
										{
											REMOVE_BLIP(bLocal_374);
										}
									}
									else if (!IS_BLIP_VALID(bLocal_374))
									{
										bLocal_374 = ADD_BLIP_FOR_ACTOR(bLocal_349, 549, 0, 2, 0);
										SET_BLIP_NAME(bLocal_374, "MISSING");
										SET_BLIP_COLOR(bLocal_374, 0.34f, 0.58f, 0.74f, 1.0f);
									}
									if (!iLocal_381)
									{
										if (!ACTORS_IN_RANGE(Global_34573, bLocal_349, 150.0f))
										{
											Function_180("Missing2c_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
											iLocal_381 = 1;
										}
									}
									else if (ACTORS_IN_RANGE(Global_34573, bLocal_349, 100.0f))
									{
										Function_180("Missing2b_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
										iLocal_381 = 0;
									}
									else if (!ACTORS_IN_RANGE(Global_34573, bLocal_349, 250.0f))
									{
										DESTROY_ACTOR(bLocal_349);
										iVar0 = 8;
									}
									if (!DECOR_CHECK_EXIST(Global_34573, "Missing3_ShutUp") && iLocal_370)
									{
										Function_119(&bLocal_349);
									}
									if (!iLocal_370)
									{
										if (Function_116(&iLocal_390) < 2.0f)
										{
											TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_349, Global_34573, 5.0f, 4);
											iLocal_370 = 1;
										}
									}
									if (Function_116(&iLocal_352) < 3.0f)
									{
										Function_174(&iLocal_352);
									}
									if (Function_115(21))
									{
										iVar0 = 13;
									}
								}
							}
						}
						break;
					
					case 0x00000008:
						Function_175(21, 0);
						Function_114(20, 1);
						if (Function_113(21))
						{
							Function_111(&(Global_63541[2155]), 21, 0, 1, 1);
						}
						if (bLocal_376)
						{
							SET_FORCE_PLAYER_AIM_MODE(0, 0);
						}
						if (IS_OBJECT_VALID(bLocal_348))
						{
							DESTROY_OBJECT(bLocal_348);
						}
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						Function_224(&Global_63541[ScriptParam_055] + 144, 128);
						ACTOR_DATA_GRAVITY_LIMIT(0);
						Function_216();
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
						break;
					
					case 0x0000000D:
						Function_1(20, 0, 0, 0);
						Function_224(&Global_63541[ScriptParam_055] + 144, 128);
						ACTOR_DATA_GRAVITY_LIMIT(0);
						Function_216();
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
						break;
				}
				WAIT(false);
			}
			break;
	}
	Function_216();
	return;
}

void Function_1(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE48 / 3656
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	char* cVar9[32];
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (!Function_110())
	{
		if (!Function_109(Global_76846, 2097152))
		{
			Function_104(Global_34573, 2097152, 1, 0);
		}
	}
	iVar0 = iParam0;
	if (iVar0 + 1 <= 77)
	{
		if (Global_63541[iVar0 + 155].f_160)
		{
			bVar2 = (GET_DAY(GET_TIME_OF_DAY()) + GET_DAY(Global_63541[iVar0 + 155].f_156));
			bVar3 = (GET_HOUR(GET_TIME_OF_DAY()) + GET_HOUR(Global_63541[iVar0 + 155].f_156));
			bVar4 = (GET_MINUTE(GET_TIME_OF_DAY()) + GET_MINUTE(Global_63541[iVar0 + 155].f_156));
			bVar5 = (GET_SECOND(GET_TIME_OF_DAY()) + GET_SECOND(Global_63541[iVar0 + 155].f_156));
			iVar1 = MAKE_TIME_OF_DAY_EX(bVar2, bVar3, bVar4, bVar5);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
		}
		PRINTSTRING("Time next quest leg will be available: ");
		Function_103(iVar1);
		PRINTNL();
		Global_63541[iVar0 + 155].f_156 = iVar1;
	}
	Global_74542[iParam010] = 6;
	Global_74542[iParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam010] + 4, Global_63541[iParam055].f_88);
	Global_74542[iParam010].f_28 = TO_FLOAT(GET_ACTOR_ENUM(Global_34573));
	if (IS_BLIP_VALID(Global_63541[iParam055].f_184))
	{
		REMOVE_BLIP(Global_63541[iParam055].f_184);
	}
	if (IS_BLIP_VALID(Global_63541[iParam055].f_188))
	{
		REMOVE_BLIP(Global_63541[iParam055].f_188);
	}
	if (IS_OBJECT_VALID(Global_63541[iParam055].f_192))
	{
		DESTROY_OBJECT(Global_63541[iParam055].f_192);
	}
	Function_102(&Global_63541[iParam055] + 144, 64);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_101();
	}
	iVar6 = Global_63541[iParam055].f_20;
	iVar7 = Global_63541[iParam055].f_20;
	bVar8 = true;
	while (Global_63541[iVar655].f_20 != iVar7 && bVar8)
	{
		if (!(Global_74542[iVar610] != 6 || Global_74542[iVar610] != 0))
		{
			bVar8 = false;
		}
		iVar6++;
	}
	if (bParam3)
	{
		bVar8 = true;
	}
	if (bVar8)
	{
		if (!bParam3)
		{
			if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
			{
				CLEAR_JOURNAL_ENTRY(Global_63541[iParam055].f_140);
				REMOVE_JOURNAL_ENTRY(Global_63541[iParam055].f_140, false);
				PREPEND_JOURNAL_ENTRY(Global_63541[iParam055].f_140, true);
				memcpy(&cVar9, StackVal, StackVal, StackVal, *(&Global_63541[iParam055] + 4), 8);
				if (Global_74542[iParam010].f_16 == 1)
				{
					stradd(&cVar9, "_COMPLETE1", 32);
				}
				else if (Global_74542[iParam010].f_16 == 2)
				{
					stradd(&cVar9, "_COMPLETE2", 32);
				}
				else
				{
					stradd(&cVar9, "n_COMPLETE", 32);
				}
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[iParam055].f_140, &cVar9, 0, 2, false);
				SET_JOURNAL_ENTRY_PROGRESS(Global_63541[iParam055].f_140, -1.0f, false, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(16))
			{
				AWARD_ACHIEVEMENT(16);
			}
		}
		else
		{
			DEACTIVATE_JOURNAL_ENTRY(Global_63541[iParam055].f_140, 1);
			SET_JOURNAL_ENTRY_PROGRESS(Global_63541[iParam055].f_140, -1.0f, false, "RCM_InactiveJournal");
		}
	}
	else
	{
		if (bParam1)
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_JOURNAL_MASTER");
		}
		bParam1 = false;
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
	{
		Function_61(Global_63541[iParam055].f_140);
	}
	if (Global_63535.f_12 == iParam0)
	{
		Global_63535.f_20 = 0;
		Global_63535.f_16 = 999.0f;
		Global_63535.f_12 = 4294967295;
	}
	Function_49(0);
	Global_74542[iParam010].f_32 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	if (bParam2)
	{
		if (!Function_48(0, 0, 1, 1))
		{
			Function_6(1);
			Function_4(bParam1, 7);
		}
		else
		{
			Function_3();
		}
	}
	bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 1);
	if (IS_ACTOR_VALID(Global_63541[iParam055].f_204))
	{
		Function_2(iParam0, &iVar18, &iVar19, &iVar20, &iVar21, &iVar22, &iVar23);
		SET_RCM_ACTOR_CALL_OVER_ENABLE(Global_63541[iParam055].f_204, 1, 1, bVar17, iVar18, iVar19, iVar20, iVar21, iVar22, iVar23);
	}
	else
	{
		PRINTSTRING("SET_RCM_ACTOR_CALL_OVER_ENABLE called with invalid actor.");
		PRINTNL();
	}
}

void Function_2(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1277 / 4727
{
	*uParam3 = 2;
	*uParam4 = 20.0f;
	*uParam5 = 7.0f;
	*uParam6 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x0000000F:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam5 = 2.5f;
			*uParam4 = 8.0f;
			break;
		
		case 0x00000015:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		
		case 0x00000017:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x0000001C:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x00000020:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000023:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000026:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000027:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x0000002B:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000031:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000036:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000039:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x0000003C:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam5 = 3.0f;
			*uParam4 = 8.0f;
			break;
		
		case 0x00000040:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x00000044:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x00000048:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		default:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
	}
}

void Function_3() //Position: 0x13EA / 5098
{
	return;
}

void Function_4(var uParam0, var uParam1) //Position: 0x13F0 / 5104
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = uParam1;
	if (!Global_3365 && !Function_5())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_5() //Position: 0x1432 / 5170
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_6(bool bParam0) //Position: 0x143B / 5179
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_37();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_7();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_102(&Global_63095, 1);
		Function_102(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_7() //Position: 0x148C / 5260
{
	Function_35();
	Function_34();
	Function_34();
	Function_33();
	Function_33();
	Function_32();
	Function_32();
	Function_15(0);
	Function_15(0);
	if (!Function_5())
	{
		Function_12();
		Function_11();
		Function_10();
		Function_9();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_8();
	return;
}

void Function_8() //Position: 0x14DE / 5342
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

void Function_9() //Position: 0x15E4 / 5604
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

void Function_10() //Position: 0x1617 / 5655
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

void Function_11() //Position: 0x17A5 / 6053
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

void Function_12() //Position: 0x1959 / 6489
{
	Function_13(&Global_28260, 1, 0);
	return;
}

void Function_13(int iParam0, bool bParam1, var uParam2) //Position: 0x1967 / 6503
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
	
	bVar0 = Function_14();
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

var Function_14() //Position: 0x1B58 / 7000
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_15(int iParam0) //Position: 0x1B6D / 7021
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
					iVar2 = ((Function_31((50 + iVar4)) + Function_31((183 + iVar4))) + Function_31((90 + iVar4)));
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
	Function_16(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_16(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C13 / 7187
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
		Function_30(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_29(iParam0);
	if (bParam2)
	{
		Function_17(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_17(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x1EAE / 7854
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_28(390))), 32);
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
					bVar19 = (Function_27(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_27(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_25(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_22(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_19(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_18(), &Var9);
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

var Function_18() //Position: 0x24DB / 9435
{
	int iVar0;
	
	return iVar0;
}

var Function_19(int iParam0) //Position: 0x24E3 / 9443
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_20(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x24F4 / 9460
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_21(char* cParam0, bool bParam1) //Position: 0x25E9 / 9705
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_22(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2602 / 9730
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_24(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_23(Function_24(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_23(int iParam0, int iParam1) //Position: 0x2667 / 9831
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_24(int iParam0, bool bParam1) //Position: 0x2679 / 9849
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_25(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x268B / 9867
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
	if (((Function_26(iParam0) != 19 || Function_26(iParam0) != 17) || Function_26(iParam0) != 10) || Function_26(iParam0) != 9)
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

int Function_26(int iParam0) //Position: 0x27BB / 10171
{
	return Global_35278[iParam020].f_48;
}

float Function_27(int iParam0) //Position: 0x27CA / 10186
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_28(int iParam0) //Position: 0x2803 / 10243
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_29(int iParam0) //Position: 0x2840 / 10304
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

int Function_30(int iParam0, bool bParam1, bool bParam2) //Position: 0x29DA / 10714
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

int Function_31(bool bParam0) //Position: 0x2C1E / 11294
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_32() //Position: 0x2C5F / 11359
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
		iVar2 = ((Function_31((50 + iVar3) + 15) + Function_31((183 + iVar3) + 15)) + Function_31((90 + iVar3) + 15));
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
	Function_16(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_33() //Position: 0x2CE8 / 11496
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
			iVar2 = ((Function_31((50 + iVar3) + 8) + Function_31((183 + iVar3) + 8)) + Function_31((90 + iVar3) + 8));
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
	Function_16(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_34() //Position: 0x2D7F / 11647
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
		iVar2 = ((Function_31((50 + iVar3)) + Function_31((183 + iVar3))) + Function_31((90 + iVar3)));
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
	Function_16(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_35() //Position: 0x2DFE / 11774
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_36(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_16(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_36(int iParam0, bool bParam1, int iParam2) //Position: 0x2E37 / 11831
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
	Function_30(iParam0, bParam1, 1);
	Function_29(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_17(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_37() //Position: 0x3041 / 12353
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_110())
	{
		Function_44(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_44(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_39(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_39(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_38(StackVal, StackVal, vVar0))
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

bool Function_38(vector3 vParam0) //Position: 0x30FC / 12540
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_39(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3114 / 12564
{
	int iVar0;
	
	iVar0 = Function_42(uParam2, uParam3);
	if (Function_41(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_224(&Global_63095, 1);
			Function_102(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_224(&Global_63095, 2);
			Function_102(&Global_63095, 1);
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
		Function_224(&Global_63095, 2);
		Function_102(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_40();
	return StackVal, StackVal, Function_40();
}

vector3 Function_40() //Position: 0x31FB / 12795
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_41(int iParam0) //Position: 0x3204 / 12804
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_42(bool bParam0, bool bParam1) //Position: 0x321A / 12826
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
				fVar2 = Function_43(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_43(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_41(bVar0) && !bParam1)
	{
		bVar0 = Function_42(bParam0, 1);
	}
	return bVar0;
}

float Function_43(vector3 vParam0, vector3 vParam3) //Position: 0x32E1 / 13025
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_44(var uParam0, int iParam1) //Position: 0x32FE / 13054
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_47(Global_34573, &vVar4);
	if (!Function_45(Global_30640[0]))
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
	if (!Function_45(Global_30640[2]))
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
	if (!Function_45(Global_30640[1]))
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
	if (!Function_45(Global_30658[1]))
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
	if (!Function_45(Global_30658[3]))
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
	if (!Function_45(Global_30658[2]))
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
	if (!Function_45(Global_30658[4]))
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
	if (!Function_45(Global_30668[0]))
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
	if (!Function_45(Global_30668[1]))
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
	if (!Function_45(Global_30668[2]))
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
	if (!Function_45(Global_30679[0]))
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
	if (!Function_45(Global_30685[0]))
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
	if (!Function_45(Global_30685[1]))
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
	if (!Function_45(Global_30685[2]))
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
	if (!Function_45(Global_30693[0]))
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
	if (!Function_45(Global_30693[1]))
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
	if (!Function_45(Global_30693[2]))
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
	if (!Function_45(Global_30707[2]))
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
	if (!Function_45(Global_30707[3]))
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
	if (!Function_45(Global_30707[0]))
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
	if (!Function_45(Global_30717[0]))
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
	if (!Function_45(Global_30723[2]))
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
	if (!Function_45(Global_30723[1]))
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
	if (!Function_45(Global_30723[0]))
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
	if (!Function_45(Global_30679[1]))
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
	if (!Function_45(Global_30707[1]))
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
	Function_224(&Global_63095, 2);
	Function_102(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_38(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_45(int iParam0) //Position: 0x3B23 / 15139
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_46(uVar0, 0x1000000) || Function_46(uVar0, 0x2000000)) || Function_46(uVar0, 0x4000000)) || !Function_46(uVar0, 0x10000000));
}

bool Function_46(var uParam0, int iParam1) //Position: 0x3B5E / 15198
{
	return (uParam0 && iParam1) == 0;
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x3B6B / 15211
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3B78 / 15224
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_49(int iParam0) //Position: 0x3C1C / 15388
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_58(1, 0))
	{
		Function_57("ZOMBIE_STORY_1_OBJ");
		if (!Function_115(2))
		{
			bVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_115(4) && !Function_55(0))
	{
		bVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_115(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_57("ZOMBIE_STORY_2Nigel_OBJ");
		Function_57("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_115(8) && !Function_115(6))
		{
			bVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_115(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_115(8))
		{
			bVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_115(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_115(6))
		{
			bVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_52(&Global_3422[240] + 128, 2) || ((((((Function_115(14) && Function_115(18)) && Function_115(37)) && Function_115(7)) && Function_115(11)) && Function_115(5)) && Function_115(21)))
	{
		Function_57("ZOMBIE_STORY_3_OBJ");
		if (!Function_58(2, 0))
		{
			bVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_58(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_57("ZOMBIE_STORY_4_OBJ");
		if (!Function_115(24))
		{
			bVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_52(&Global_3422[340] + 128, 2) || ((Function_115(27) && Function_115(1)) && Function_115(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_57("ZOMBIE_STORY_5_OBJ");
		if (!Function_58(3, 0))
		{
			bVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_58(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_115(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[255].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[455].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[355].f_140);
		bVar1 = false;
		if (Function_115(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[255] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[255].f_140, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_115(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_115(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[455] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_50(Global_30734)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[455].f_140, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_50(Global_30734) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater3_OBJ", 4, 0);
			}
			if (Function_50(Global_30734) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_31(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_31(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_115(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_115(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_115(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[655].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[755].f_140);
		if (Function_115(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[655].f_140, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_115(6) && Function_50(Global_30735) < 0) && Function_50(Global_30737) < 0) && Function_50(Global_30738) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[655].f_140, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[755].f_140, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_115(11))
	{
		if (Function_115(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_63541[855].f_140);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_31(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_31(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_31(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_31(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_31(491) <= 5 && Function_31(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_115(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_115(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[1055].f_140, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(bVar0))
	{
		Function_180(bVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_50(int iParam0) //Position: 0x451A / 17690
{
	if (!Function_51(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_51(int iParam0) //Position: 0x4534 / 17716
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_52(int iParam0, int iParam1) //Position: 0x454B / 17739
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_53() //Position: 0x4567 / 17767
{
	return STRING_TO_HASH(Function_54());
}

var Function_54() //Position: 0x4573 / 17779
{
	return "ZOMBIE_STORY";
}

bool Function_55(int iParam0) //Position: 0x4588 / 17800
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_56(iParam0)11].f_12 < 0;
}

int Function_56(int iParam0) //Position: 0x45EE / 17902
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_30734;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30734;
			break;
		
		case 0x00000001:
			return Global_30735;
			break;
		
		case 0x00000004:
			return Global_30736;
			break;
		
		case 0x00000003:
			return Global_30737;
			break;
		
		case 0x00000002:
			return Global_30738;
			break;
	}
	return Global_30734;
}

void Function_57(char* cParam0) //Position: 0x46B0 / 18096
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_53(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_54(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_53(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_53(), cParam0, 0, 3, false);
	Function_179(Function_53(), 0);
	return;
}

bool Function_58(int iParam0, bool bParam1) //Position: 0x46F8 / 18168
{
	int iVar0;
	
	iVar0 = Function_59(iParam0);
	if (!Function_51(iVar0))
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

var Function_59(int iParam0) //Position: 0x4735 / 18229
{
	if (!Function_60(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_60(int iParam0) //Position: 0x474F / 18255
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_61(bool bParam0) //Position: 0x4765 / 18277
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0 != 4294967295 || bParam0 != 0)
	{
		return;
	}
	if (Function_5())
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	if (iVar0 == 4)
	{
		if (bParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_100(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(bParam0);
	switch (iVar0)
	{
		case 0x00000004:
			if (Global_28184)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_27774)
			{
				if (Function_99(iVar6) && !Function_97(iVar6))
				{
					if (bParam0 == Global_27774[iVar613].f_48)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_96();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
				{
					Function_95(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
			{
				Function_91();
				TARGET_JOURNAL_ENTRY(bParam0);
			}
			break;
		
		case 0x00000002:
			iVar2 = iVar1;
			while (Global_63541[iVar155].f_20 == iVar2)
			{
				if (IS_BLIP_VALID(Global_63541[iVar155].f_184))
				{
					REMOVE_BLIP(Global_63541[iVar155].f_184);
				}
				if (IS_BLIP_VALID(Global_63541[iVar155].f_188))
				{
					REMOVE_BLIP(Global_63541[iVar155].f_188);
				}
				if (!Function_46(Global_63541[iVar155].f_144, 2048))
				{
					iVar3 = iVar1;
					if (Function_80(&(Global_63541[iVar155]), iVar3))
					{
						Function_224(&Global_63541[iVar155] + 144, 64);
						Function_73(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_62(&(Global_63541[iVar155]), 7);
						}
					}
				}
				else if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
				{
					DESTROY_OBJECT(Global_63541[iVar155].f_192);
				}
				iVar1++;
			}
			break;
	}
	return;
}

void Function_62(int iParam0, int iParam1) //Position: 0x4907 / 18695
{
	float fVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_46(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	fVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_18(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_63(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_63(int iParam0) //Position: 0x49C1 / 18881
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_18(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_72(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	bVar1 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_216, Function_18(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0);
	DECOR_SET_INT(bVar1, "category", 512);
	Function_64(&bVar1, 0);
	return;
}

int Function_64(var uParam0, int iParam1) //Position: 0x4A63 / 19043
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_68(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_65(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_65(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x4BC4 / 19396
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_66(bool bParam0) //Position: 0x4C5F / 19551
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_67(char* cParam0, char* cParam1, char* cParam2) //Position: 0x4CC9 / 19657
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_68(bool bParam0) //Position: 0x4CE8 / 19688
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_71(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_69(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_71(iVar0);
						}
					}
					else if (Function_69(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_71(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_71(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_69(bool bParam0, vector3 vParam1) //Position: 0x4E49 / 20041
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_70(bParam0);
		vVar0 = { StackVal, StackVal, Function_70(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_70(bool bParam0) //Position: 0x4EC3 / 20163
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

void Function_71(int iParam0) //Position: 0x4F2D / 20269
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

bool Function_72(int iParam0) //Position: 0x4F8E / 20366
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_73(int iParam0, int iParam1) //Position: 0x4FA4 / 20388
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0.5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if ((((StackVal && Function_78(StackVal, Function_79(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_77(iParam1)) || Global_74542[iParam110].f_12 != 1) || Function_46(Global_63541[iParam155].f_144, 64))
	{
		if (((iParam0->f_80 != 4294967295 || iParam1 != 10) || iParam1 != 17) || iParam1 != 5)
		{
			fVar3 = 0.5f;
			fVar8 = 70.0f;
			vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
			vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
			vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
			iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(iParam0->f_184, fVar8);
			SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
		else if (iParam1 == 13)
		{
			fVar3 = 0.5f;
			fVar9 = 30.0f;
			iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(iParam0->f_184, fVar9);
			SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
		else if (iParam1 == 23 || !IS_OBJECT_VALID(iParam0->f_212))
		{
			iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 0);
			if (((((((((((iParam0->f_80 == 312 && iParam0->f_80 == 311) && iParam1 == 24) && iParam1 == 6) && iParam1 == 7) && iParam1 == 8) && iParam1 == 2) && iParam1 == 20) && iParam1 == 21) && iParam1 == 25) && iParam1 == 26) && iParam1 == 27)
			{
				SET_BLIP_MAX_DISTANCE(iParam0->f_184, 3.0f);
			}
			iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 0);
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(iParam0->f_188, "ZOMBIE_STORY");
			}
			else
			{
				SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
			}
			UNK_0xFF3DB575(iParam0->f_188, 1);
			if (iParam0->f_80 == 312 && iParam0->f_80 == 311)
			{
				SET_BLIP_PRIORITY(iParam0->f_188, 3);
			}
			if (Function_46(Global_74542[iParam110].f_24, 1))
			{
				SET_BLIP_COLOR(iParam0->f_188, 0.63f, 0.85f, 0.0f, 0.5f);
				if (Global_29006 != Global_63541[iParam155].f_132 && !Function_76())
				{
					Function_74("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(iParam0->f_188, 0.63f, 0.85f, 0.0f, fVar3);
			}
			Global_74542[iParam110].f_12 = 1;
		}
		if (IS_BLIP_VALID(iParam0->f_184))
		{
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(iParam0->f_184, "ZOMBIE_STORY");
				if (iParam1 == 2)
				{
					SET_BLIP_BLINK(iParam0->f_184, 1, 0, (7.5f + 5.0f));
				}
				else
				{
					SET_BLIP_BLINK(iParam0->f_184, 1, 0, 7.5f);
				}
			}
			else
			{
				SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			}
			if (Function_46(Global_74542[iParam110].f_24, 1))
			{
				SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, 0.5f);
				if (Global_29006 != Global_63541[iParam155].f_132 && !Function_76())
				{
					Function_74("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			}
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
	}
	else
	{
		fVar3 = 0.5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 0);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
		SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
		SET_BLIP_PRIORITY(iParam0->f_184, 3);
	}
	if (iParam1 == 19)
	{
		SET_BLIP_COLOR(iParam0->f_184, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else if (iParam1 == 20)
	{
		SET_BLIP_COLOR(iParam0->f_184, 0.34f, 0.58f, 0.74f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 0.34f, 0.58f, 0.74f, 1.0f);
	}
	else if (iParam1 == 21)
	{
		SET_BLIP_COLOR(iParam0->f_184, 0.79f, 0.69f, 0.0f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 0.79f, 0.69f, 0.0f, 1.0f);
	}
	return;
}

void Function_74(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5436 / 21558
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_75(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_75(int iParam0) //Position: 0x54B1 / 21681
{
	char* cVar0[16];
	
	if (!Function_110())
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

bool Function_76() //Position: 0x54F0 / 21744
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

int Function_77(bool bParam0) //Position: 0x551D / 21789
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_78(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x5549 / 21833
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

bool Function_79(int iParam0) //Position: 0x5565 / 21861
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_80(int iParam0, int iParam1) //Position: 0x557A / 21882
{
	if (Function_46(Global_63541[iParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_79(iParam1))
	{
		Function_224(&Global_63541[iParam155] + 144, 64);
		return 1;
	}
	if ((Function_90(iParam1) || Function_115(iParam1)) || Function_89(iParam1))
	{
		return 0;
	}
	if (iParam0->f_160)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), iParam0->f_156))
		{
			return 0;
		}
	}
	if (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return 0;
	}
	if (Function_72(iParam0->f_132))
	{
		if (Function_88(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_86(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_85(iParam0))
			{
				return 0;
			}
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(iParam0->f_204))
			{
				return 0;
			}
			if (FIRE_IS_ACTOR_ON_FIRE(iParam0->f_204))
			{
				return 0;
			}
			if (IS_ACTOR_DEAD(iParam0->f_204))
			{
				return 0;
			}
		}
	}
	if (!Function_81(iParam0, iParam1))
	{
		return 0;
	}
	Function_224(&Global_63541[iParam155] + 144, 64);
	return 1;
}

bool Function_81(int iParam0, int iParam1) //Position: 0x568F / 22159
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_52(iParam0 + 172, 4))
		{
			if (!Function_84(iParam1))
			{
				return 0;
			}
		}
		if (Function_52(iParam0 + 172, 1))
		{
			if (!Function_115(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_52(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_59(iParam0->f_176);
			if (Function_82(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_52(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_82(iParam0->f_164))
			{
				if (StackVal != 3)
				{
					return 0;
				}
			}
		}
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_52(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_52(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_52(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_52(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_52(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_52(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_82(int iParam0) //Position: 0x57D3 / 22483
{
	if (!Function_51(iParam0))
	{
		return 0;
	}
	if (!Function_83(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_83(int iParam0) //Position: 0x57F7 / 22519
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_84(int iParam0) //Position: 0x580C / 22540
{
	return StackVal;
}

bool Function_85(int iParam0) //Position: 0x581C / 22556
{
	if (!iParam0->f_152)
	{
		if (Function_110())
		{
			if (((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1) && GET_ACTOR_FACTION(iParam0->f_204) == 20) && GET_ACTOR_FACTION(iParam0->f_204) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204)) || IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

bool Function_86(int iParam0) //Position: 0x58C0 / 22720
{
	if (!Function_87(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_46(Global_63541[iParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_109(Global_76847, 0x8000000))
			{
				Function_104(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_87(int iParam0) //Position: 0x5919 / 22809
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_88(var uParam0, int iParam1) //Position: 0x5935 / 22837
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_89(int iParam0) //Position: 0x5951 / 22865
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_90(int iParam0) //Position: 0x5966 / 22886
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_91() //Position: 0x597B / 22907
{
	if (Function_94(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_93(Global_28180);
			Global_28180.f_8 = Function_92(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_93(Global_28180);
			Global_28180.f_8 = Function_92(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_92(int iParam0, int iParam1) //Position: 0x59F6 / 23030
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
					if (Function_58(6, 0) || Function_58(12, 0))
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
					if (Function_115(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_58(5, 0))
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
					if (Function_115(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_115(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_115(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_115(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_58(26, 0))
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
					if (Function_115(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_115(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_115(27) && iVar18)
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
					if (Function_115(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_115(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_115(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_115(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_58(17, 0) && iVar15)
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
					if (Function_115(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_58(6, 0) && Function_115(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_115(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_58(9, 0) && Function_115(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_115(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_58(8, 0) && iVar19)
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
	if (Function_38(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_38(StackVal, StackVal, vVar3))
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
	if (!Function_38(StackVal, StackVal, vVar3))
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

int Function_93(int iParam0) //Position: 0x65E7 / 26087
{
	int iVar0;
	int iVar1;
	
	if (!Function_94(iParam0))
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

bool Function_94(int iParam0) //Position: 0x6636 / 26166
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_95(int iParam0) //Position: 0x664C / 26188
{
	if (Global_28180 == iParam0)
	{
		return 1;
	}
	if (!Function_94(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_97(iParam0))
	{
		return 0;
	}
	if (!Function_99(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_96() //Position: 0x66B5 / 26293
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

bool Function_97(int iParam0) //Position: 0x66D8 / 26328
{
	if (!Function_94(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_98(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_98(int iParam0, int iParam1) //Position: 0x6729 / 26409
{
	int iVar0;
	
	if (!Function_94(iParam0))
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

bool Function_99(int iParam0) //Position: 0x6756 / 26454
{
	if (!Function_94(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_98(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_100(bool bParam0) //Position: 0x67A8 / 26536
{
	int iVar0;
	
	if (bParam0 != 4294967295 || bParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	switch (iVar0)
	{
		case 0x00000004:
			Function_96();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_101() //Position: 0x67E2 / 26594
{
	bool bVar0;
	
	bVar0 = Function_31(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

void Function_102(int iParam0, int iParam1) //Position: 0x6840 / 26688
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_103(bool bParam0) //Position: 0x6853 / 26707
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_104(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6899 / 26777
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_106(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_105(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_105(char* cParam0, int iParam1) //Position: 0x6905 / 26885
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

bool Function_106(bool bParam0, var uParam1, int iParam2) //Position: 0x693C / 26940
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
		if (Function_108(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_107(uVar0))
		{
			case 0x00000002:
				if (!Function_109(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_107(char* cParam0) //Position: 0x69B4 / 27060
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

int Function_108(int iParam0) //Position: 0x6A55 / 27221
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_102(&iVar1, 2147483648);
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

bool Function_109(int iParam0, int iParam1) //Position: 0x6A92 / 27282
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_110() //Position: 0x6AA5 / 27301
{
	if (Function_46(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_111(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x6AC0 / 27328
{
	int iVar0;
	
	iVar0 = 0;
	uParam2 = uParam2;
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if ((!Function_46(Global_63541[iParam155].f_144, 64) || Function_115(iParam1)) || Function_89(iParam1))
		{
			if (((((iParam1 != 2 || iParam1 != 6) || iParam1 != 8) || iParam1 != 24) && !Function_115(iParam1)) && !Function_89(iParam1))
			{
			}
			else
			{
				if (IS_BLIP_VALID(iParam0->f_184))
				{
					REMOVE_BLIP(iParam0->f_184);
				}
				if (IS_BLIP_VALID(iParam0->f_188))
				{
					REMOVE_BLIP(iParam0->f_188);
				}
			}
		}
	}
	else
	{
		if (Function_46(Global_63541[iParam155].f_144, 64))
		{
			Function_73(iParam0, iParam1);
		}
		if (!(Function_115(iParam1) || Function_89(iParam1)))
		{
			DEACTIVATE_JOURNAL_ENTRY(iParam0->f_140, 0);
			SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, true, 0);
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		DESTROY_OBJECT(iParam0->f_192);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
	}
	if (IS_GRINGO_VALID(iParam0->f_208))
	{
		if (!Function_46(iParam0->f_144, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_208));
		}
		else
		{
			iParam0->f_208 = "";
		}
		Function_102(iParam0 + 144, 32);
	}
	if (IS_OBJECT_VALID(iParam0->f_212))
	{
		RELEASE_OBJECT_REF(iParam0->f_212);
	}
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		DESTROY_VOLUME(iParam0->f_216);
	}
	if (bParam4)
	{
		Function_112(iParam0);
	}
	Function_102(iParam0 + 144, 256);
	switch (Global_74542[iParam110])
	{
		case 0x00000002:
		case 0x00000005:
		case 0x00000003:
			Global_74542[iParam110] = 1;
			break;
		
		default:
			break;
	}
	if (IS_SCRIPT_VALID(iParam0->f_196) && uParam3)
	{
		TERMINATE_SCRIPT(iParam0->f_196);
	}
	switch (*iParam0)
	{
		case 0x00000001:
			if (IS_ACTOR_VALID(iParam0->f_204))
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam0->f_204);
				AI_CONVERSE_ENABLE(iParam0->f_204);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(iParam0->f_204, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_204, 1);
				if (SQUAD_IS_VALID(SQUAD_GET(iParam0->f_204)))
				{
					DESTROY_OBJECT(SQUAD_GET(iParam0->f_204));
				}
				RELEASE_ACTOR(iParam0->f_204);
			}
			break;
		
		default:
			break;
	}
}

void Function_112(int iParam0) //Position: 0x6CAB / 27819
{
	if (Function_46(iParam0->f_144, 1))
	{
		STREAMING_EVICT_ACTOR(iParam0->f_136, 4294967295);
		Function_102(iParam0 + 144, 1);
	}
	if (Function_46(iParam0->f_144, 8))
	{
		REMOVE_STRING_TABLE("dlc_zombiepack_rcm");
		Function_102(iParam0 + 144, 8);
	}
	if (Function_46(iParam0->f_144, 2))
	{
		STREAMING_EVICT_GRINGO(iParam0->f_60);
		Function_102(iParam0 + 144, 2);
	}
	if (Function_46(iParam0->f_144, 4))
	{
		STREAMING_EVICT_PROP(iParam0->f_64);
		Function_102(iParam0 + 144, 4);
	}
	return;
}

bool Function_113(int iParam0) //Position: 0x6D2D / 27949
{
	if (Global_74542[iParam010] == 5)
	{
		return 1;
	}
	return 0;
}

void Function_114(int iParam0, bool bParam1) //Position: 0x6D42 / 27970
{
	char* cVar0[32];
	
	Global_74542[iParam010] = 7;
	Global_74542[iParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam010] + 4, Global_63541[iParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Fail", &Global_63541[iParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
	if (bParam1)
	{
		switch (Global_29004)
		{
			case 0x00000000:
				strcpy(&cVar0, "FTR", 32);
				break;
			
			case 0x00000001:
				strcpy(&cVar0, "MEX", 32);
				break;
			
			case 0x00000002:
				strcpy(&cVar0, "NOR", 32);
				break;
			
			default:
				PRINTSTRING("Unknown territory");
				PRINTINT(Global_29004);
				LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
				break;
		}
		stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
		AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
		SAY_SINGLE_LINE_CONTEXT(Global_34573, 394, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	}
	if (!Function_109(Global_76846, 8192))
	{
		Function_104(Global_34573, 8192, 1, 0);
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[iParam055].f_140, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

bool Function_115(int iParam0) //Position: 0x6EC2 / 28354
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

float Function_116(int iParam0) //Position: 0x6ED7 / 28375
{
	if (Function_118(iParam0))
	{
		if (Function_117(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_117(int iParam0) //Position: 0x6F9F / 28575
{
	return Function_46(*iParam0, 2);
}

bool Function_118(int iParam0) //Position: 0x6FAC / 28588
{
	return Function_46(*iParam0, 1);
}

void Function_119(int iParam0) //Position: 0x6FB9 / 28601
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	bool bVar12;
	bool bVar13;
	
	Function_242(&iVar9);
	if (IS_ACTOR_VALID(*iParam0))
	{
		if (IS_ACTOR_ALIVE(*iParam0))
		{
			if (IS_ACTOR_VALID(*iParam0))
			{
				iVar0 = Function_147(*iParam0);
			}
			if (!IS_OBJECT_VALID(bLocal_388))
			{
				bLocal_388 = CREATE_EVENT_TRAP("DismountTrap", 19, bLocal_261);
				EVENT_TRAP_ON_PERPETRATOR(bLocal_388, Global_34573);
			}
			else if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_388))
			{
				bVar12 = true;
				EVENT_TRAP_CLEAR_EVENTS(bLocal_388);
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_388);
			}
			if (!IS_OBJECT_VALID(bLocal_389))
			{
				bLocal_389 = CREATE_EVENT_TRAP("HijackTrap", 20, bLocal_261);
				EVENT_TRAP_ON_TARGET(bLocal_389, Global_34573);
			}
			else if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_389))
			{
				bVar13 = true;
				EVENT_TRAP_CLEAR_EVENTS(bLocal_389);
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_389);
			}
			if (IS_ACTOR_RIDING(*iParam0))
			{
				if (((iVar0 == 11 && iVar0 == 9) && iVar0 == 13) && iVar0 == 14)
				{
					Function_178(*iParam0, 11);
					iVar0 = 11;
				}
			}
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					fLocal_386 = Function_69(StackVal, StackVal, Global_34573, *(&Global_63541[2155] + 100));
					TASK_PRIORITY_SET(*iParam0, 1);
					Function_178(*iParam0, 1);
					break;
				
				case 0x00000001:
					TASK_CLEAR(*iParam0);
					if (IS_VOLUME_VALID(bLocal_337))
					{
						DESTROY_VOLUME(bLocal_337);
					}
					Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("mpDefend") };
					Function_146(*iParam0);
					bLocal_337 = CREATE_VOLUME_IN_LAYOUT(bLocal_261, &Var1, 2, Function_146(*iParam0), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
					SET_ACTOR_STAY_WITHIN_VOLUME(*iParam0, bLocal_337, 4, 0);
					TASK_PRIORITY_SET(*iParam0, 1);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(*iParam0, 0.1f);
					if (IS_OBJECT_VALID(bLocal_338))
					{
						DESTROY_OBJECT(bLocal_338);
					}
					Function_146(*iParam0);
					Function_145(*iParam0);
					bLocal_338 = CREATE_GRINGO_IN_LAYOUT(bLocal_261, "wringingGringo", "stand_wring_hands", Function_146(*iParam0), Function_145(*iParam0));
					TASK_USE_GRINGO(*iParam0, GET_GRINGO_FROM_OBJECT(bLocal_338), "UseCase1", 4294967295, 1);
					SNAP_ACTOR_TO_GRINGO(*iParam0, bLocal_338, "UseCase1", 0, 0, 0);
					Function_178(*iParam0, 2);
					break;
				
				case 0x00000002:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (Function_143())
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(*iParam0);
						if (IS_VOLUME_VALID(bLocal_337))
						{
							DESTROY_VOLUME(bLocal_337);
						}
						if (IS_OBJECT_VALID(bLocal_338))
						{
							DESTROY_OBJECT(bLocal_338);
						}
						Function_178(*iParam0, 5);
					}
					break;
				
				case 0x00000003:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (Function_69(StackVal, StackVal, *iParam0, *(&Global_63541[2155] + 100)) < 50.0f)
					{
						TASK_CLEAR(*iParam0);
						if (IS_VOLUME_VALID(bLocal_337))
						{
							DESTROY_VOLUME(bLocal_337);
						}
						Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("mpDefend") };
						Function_146(*iParam0);
						bLocal_337 = CREATE_VOLUME_IN_LAYOUT(bLocal_261, &Var1, 2, Function_146(*iParam0), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
						SET_ACTOR_STAY_WITHIN_VOLUME(*iParam0, bLocal_337, 4, 0);
						TASK_PRIORITY_SET(*iParam0, 1);
						if (IS_OBJECT_VALID(bLocal_338))
						{
							DESTROY_OBJECT(bLocal_338);
						}
						Function_146(*iParam0);
						Function_145(*iParam0);
						bLocal_338 = CREATE_GRINGO_IN_LAYOUT(bLocal_261, "wringingGringo", "stand_wring_hands", Function_146(*iParam0), Function_145(*iParam0));
						TASK_USE_GRINGO(*iParam0, GET_GRINGO_FROM_OBJECT(bLocal_338), "UseCase1", 4294967295, 1);
						SNAP_ACTOR_TO_GRINGO(*iParam0, bLocal_338, "UseCase1", 0, 0, 0);
						if (!ACTORS_IN_RANGE(Global_34573, *iParam0, 15.0f))
						{
							Function_142();
						}
						Function_178(*iParam0, 4);
					}
					else
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(*iParam0);
						TASK_PRIORITY_SET(*iParam0, 1);
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(*iParam0, 0.1f);
						TASK_GO_TO_COORD_AND_STAY(*iParam0, &Global_63541[2155] + 100, 4, 296.5f);
						Function_178(*iParam0, 8);
					}
					break;
				
				case 0x00000004:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (IS_ACTOR_RIDING(*iParam0) || IS_ACTOR_RIDING_VEHICLE(*iParam0))
					{
						Function_178(*iParam0, 13);
					}
					else if (ACTORS_IN_RANGE(Global_34573, *iParam0, 15.0f))
					{
						if (IS_OBJECT_VALID(bLocal_338))
						{
							DESTROY_OBJECT(bLocal_338);
						}
						if (IS_OBJECT_VALID(bLocal_338))
						{
							DESTROY_OBJECT(bLocal_338);
						}
						Function_178(*iParam0, 5);
					}
					break;
				
				case 0x00000008:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (GET_TASK_STATUS(*iParam0, 66) != 1)
					{
						TASK_GO_TO_COORD_AND_STAY(*iParam0, &Global_63541[2155] + 100, 4, 296.5f);
					}
					break;
				
				case 0x00000005:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*iParam0, Global_34573, 5.0f, 4);
					TASK_PRIORITY_SET(*iParam0, 1);
					Function_178(*iParam0, 6);
					break;
				
				case 0x00000006:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (Function_69(StackVal, StackVal, *iParam0, *(&Global_63541[2155] + 100)) > 50.0f)
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(*iParam0);
						TASK_PRIORITY_SET(*iParam0, 1);
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(*iParam0, 0.1f);
						TASK_GO_TO_COORD_AND_STAY(*iParam0, &Global_63541[2155] + 100, 4, 296.5f);
						Function_178(*iParam0, 8);
					}
					else if (IS_ACTOR_RIDING(Global_34573))
					{
						SET_ALLOW_RIDE_BY_AI(GET_MOUNT(Global_34573), 1);
						RESET_ANIM_SET_FOR_ACTOR(*iParam0, 1);
						if (IS_ACTOR_MALE(*iParam0))
						{
							SET_ANIM_SET_FOR_ACTOR(*iParam0, "gent_ride_passenger", 0);
						}
						else
						{
							SET_ANIM_SET_FOR_ACTOR(*iParam0, "fema_ride_passenger", 0);
							AI_SET_ALLOWED_MOUNT_DIRECTIONS(*iParam0, 79);
						}
						SET_MOUNTS_AS_PASSENGER(*iParam0, 1);
						TASK_MOUNT(*iParam0, GET_MOUNT(Global_34573), 0, 1, 4, 2147483647);
						TASK_PRIORITY_SET(*iParam0, 1);
						if (!iLocal_379)
						{
							Function_141();
							iLocal_379 = 1;
						}
						Function_178(*iParam0, 9);
					}
					else if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
					{
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(*iParam0, GET_VEHICLE(Global_34573), 1, 4, 0);
						TASK_PRIORITY_SET(*iParam0, 1);
						Function_178(*iParam0, 10);
					}
					else if (!ACTORS_IN_RANGE(Global_34573, *iParam0, 25.0f))
					{
						Function_178(*iParam0, 3);
					}
					break;
				
				case 0x00000009:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (!IS_ACTOR_RIDING(Global_34573) || !ACTORS_IN_RANGE(Global_34573, *iParam0, 25.0f))
					{
						Function_178(*iParam0, 3);
					}
					else if (IS_ACTOR_RIDING(*iParam0))
					{
						TASK_CLEAR(*iParam0);
						ACTOR_START_FORCE_HOLSTER(*iParam0, 1, 0);
						MEMORY_ALLOW_SHOOTING(*iParam0, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(*iParam0, 1);
						Function_178(*iParam0, 11);
					}
					break;
				
				case 0x0000000A:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (!IS_ACTOR_DRIVING_VEHICLE(Global_34573) || !ACTORS_IN_RANGE(Global_34573, *iParam0, 25.0f))
					{
						Function_178(*iParam0, 3);
					}
					else if (IS_ACTOR_RIDING_VEHICLE(*iParam0))
					{
						TASK_CLEAR(*iParam0);
						ACTOR_START_FORCE_HOLSTER(*iParam0, 1, 0);
						MEMORY_ALLOW_SHOOTING(*iParam0, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(*iParam0, 1);
						Function_178(*iParam0, 12);
					}
					break;
				
				case 0x0000000B:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (bVar13)
					{
						Function_140();
						Function_178(*iParam0, 13);
					}
					else if (bVar12)
					{
						Function_139();
						Function_178(*iParam0, 13);
					}
					else if (!IS_ACTOR_RIDING(Global_34573) || !IS_ACTOR_RIDING(*iParam0))
					{
						Function_140();
						Function_178(*iParam0, 13);
					}
					break;
				
				case 0x0000000C:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (!IS_ACTOR_DRIVING_VEHICLE(Global_34573))
					{
						Function_139();
						Function_178(*iParam0, 13);
					}
					break;
				
				case 0x0000000D:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (IS_ACTOR_RIDING(*iParam0))
					{
						TASK_DISMOUNT(*iParam0, 1);
						TASK_PRIORITY_SET(*iParam0, 1);
					}
					else if (IS_ACTOR_RIDING_VEHICLE(*iParam0))
					{
						TASK_VEHICLE_LEAVE(*iParam0);
						TASK_PRIORITY_SET(*iParam0, 1);
					}
					Function_178(*iParam0, 14);
					break;
				
				case 0x0000000E:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					if (IS_ACTOR_RIDING(*iParam0))
					{
						if (GET_TASK_STATUS(*iParam0, 12) != 1)
						{
							TASK_DISMOUNT(*iParam0, 1);
							TASK_PRIORITY_SET(*iParam0, 1);
						}
					}
					if (!IS_ACTOR_RIDING_VEHICLE(*iParam0) && !IS_ACTOR_RIDING(*iParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*iParam0, 1);
						Function_178(*iParam0, 3);
					}
					break;
				
				default:
					if (Function_116(&iLocal_352) < 3.0f)
					{
						Function_174(&iVar9);
					}
					Function_178(*iParam0, 3);
					break;
			}
			Function_137(*iParam0);
			Function_136(*iParam0);
			Function_120(iVar0, *iParam0);
		}
	}
	return;
}

void Function_120(int iParam0, bool bParam1) //Position: 0x77E6 / 30694
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	if (!Function_118(&iLocal_355))
	{
		Function_134(&iLocal_355, 10.0f);
	}
	else if (Function_133(&iLocal_355, 3.0f))
	{
		bVar0 = GET_LAST_ATTACK_TARGET(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar0)) > 1.0f)
			{
				if (ACTORS_IN_RANGE(bParam1, bVar0, 10.0f) || ACTORS_IN_RANGE(bParam1, Global_34573, 6.0f))
				{
					if (GET_ACTOR_HEALTH(bVar0) > 1.0f)
					{
						if (GET_ACTOR_FACTION(bVar0) == 32)
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam1, "MINOR_SHOCK", "", false, 1, 1, 2, 0, 0, 0, 1000, 0, 0);
							Function_174(&iLocal_355);
						}
						else if (IS_ACTOR_HUMAN(bVar0))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam1, "MAJOR_SHOCK", "", false, 1, 1, 2, 0, 0, 0, 1000, 0, 0);
							Function_174(&iLocal_355);
						}
					}
				}
			}
		}
		if (iLocal_384 > 1)
		{
			if (Function_133(&iLocal_355, 10.0f))
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam1, "MAJOR_SHOCK", "", false, 1, 1, 2, 0, 0, 0, 1000, 0, 0);
				Function_174(&iLocal_355);
			}
		}
		else if ((iParam0 != 11 || iParam0 != 12) || iParam0 != 6)
		{
			if ((iParam0 != 11 || iParam0 != 12) || iParam0 != 6)
			{
				if (!iLocal_377)
				{
					if (Function_69(StackVal, StackVal, Global_34573, *(&Global_63541[2155] + 100)) < fLocal_386)
					{
						fLocal_386 = Function_69(StackVal, StackVal, Global_34573, *(&Global_63541[2155] + 100));
						Function_174(&iLocal_358);
						iLocal_377 = 1;
					}
					else
					{
						fLocal_386 = Function_69(StackVal, StackVal, Global_34573, *(&Global_63541[2155] + 100));
					}
				}
				else if (Function_133(&iLocal_358, 7.0f))
				{
					if (Function_69(StackVal, StackVal, Global_34573, *(&Global_63541[2155] + 100)) < fLocal_386)
					{
						if ((Function_69(StackVal, StackVal, Global_34573, *(&Global_63541[2155] + 100)) - fLocal_386) < 25.0f)
						{
							fLocal_386 = Function_69(StackVal, StackVal, Global_34573, *(&Global_63541[2155] + 100));
							bVar1 = true;
							Function_132(&iLocal_358);
							iLocal_377 = 0;
						}
					}
					else
					{
						fLocal_386 = Function_69(StackVal, StackVal, Global_34573, *(&Global_63541[2155] + 100));
						Function_132(&iLocal_358);
						iLocal_377 = 0;
					}
				}
			}
			else if (iLocal_377)
			{
				fLocal_386 = Function_69(StackVal, StackVal, Global_34573, *(&Global_63541[2155] + 100));
				Function_132(&iLocal_358);
				iLocal_377 = 0;
			}
			if (iParam0 == 11)
			{
				if (IS_ACTOR_RIDING(Global_34573))
				{
					if (!Function_118(&iLocal_361))
					{
						if (Function_131(GET_MOUNT(Global_34573), 0) > 2.0f)
						{
							Function_174(&iLocal_361);
						}
					}
					else if (Function_133(&iLocal_361, 5.0f))
					{
						if (Function_131(GET_MOUNT(Global_34573), 0) > 2.0f)
						{
							bVar2 = true;
						}
						Function_132(&iLocal_361);
					}
				}
			}
			else if (Function_118(&iLocal_361))
			{
				Function_132(&iLocal_361);
			}
			if (!iLocal_378)
			{
				if (Function_69(StackVal, StackVal, bParam1, *(&Global_63541[2155] + 100)) > 50.0f)
				{
					bVar3 = true;
				}
			}
			if (bVar3)
			{
				Function_130();
				iLocal_378 = 1;
				Function_174(&iLocal_355);
			}
			else if (bVar2)
			{
				Function_129();
				Function_174(&iLocal_355);
			}
			else if (bVar1)
			{
				Function_128();
				Function_174(&iLocal_355);
			}
			else if (Function_133(&iLocal_355, 15.0f))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					switch (iLocal_383)
					{
						case 0x00000000:
							Function_127();
							iLocal_383++;
							break;
						
						case 0x00000001:
							Function_126();
							iLocal_383++;
							break;
						
						case 0x00000002:
							Function_125();
							iLocal_383++;
							break;
						
						case 0x00000003:
							Function_121();
							iLocal_383++;
							break;
					}
					Function_174(&iLocal_355);
				}
				else
				{
					Function_174(&iLocal_355);
				}
			}
		}
	}
	return;
}

void Function_121() //Position: 0x7B6D / 31597
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v4_AA", "RCMMill_bak2Fort_bant_v4_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v4_AB", "RCMMill_bak2Fort_bant_v4_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v4_AC1", "RCMMill_bak2Fort_bant_v4_AC1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v4_AC2", "RCMMill_bak2Fort_bant_v4_AC2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v4_AD", "RCMMill_bak2Fort_bant_v4_AD", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v4_AE", "RCMMill_bak2Fort_bant_v4_AE", 1, 1, 1, 0, 1);
		Function_122(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_122(int iParam0) //Position: 0x7D29 / 32041
{
	Function_123(0, Global_34573, iParam0, 0);
	Function_123(1, bLocal_349, iParam0, 0);
	return;
}

void Function_123(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x7D43 / 32067
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_46(uParam2, Function_124(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

int Function_124(bool bParam0) //Position: 0x7D68 / 32104
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_125() //Position: 0x7D74 / 32116
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v3_AA", "RCMMill_bak2Fort_bant_v3_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v3_AB", "RCMMill_bak2Fort_bant_v3_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v3_AC", "RCMMill_bak2Fort_bant_v3_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v3_AD", "RCMMill_bak2Fort_bant_v3_AD", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v3_AE1", "RCMMill_bak2Fort_bant_v3_AE1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v3_AE2", "RCMMill_bak2Fort_bant_v3_AE2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v3_AF", "RCMMill_bak2Fort_bant_v3_AF", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v3_AG", "RCMMill_bak2Fort_bant_v3_AG", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v3_AH1", "RCMMill_bak2Fort_bant_v3_AH1", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v3_AH2", "RCMMill_bak2Fort_bant_v3_AH2", 1, 1, 1, 0, 1);
		Function_122(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_126() //Position: 0x8050 / 32848
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v2_AA", "RCMMill_bak2Fort_bant_v2_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v2_AB", "RCMMill_bak2Fort_bant_v2_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v2_AC", "RCMMill_bak2Fort_bant_v2_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v2_AD1", "RCMMill_bak2Fort_bant_v2_AD1", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v2_AD2", "RCMMill_bak2Fort_bant_v2_AD2", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v2_AE", "RCMMill_bak2Fort_bant_v2_AE", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v2_AF", "RCMMill_bak2Fort_bant_v2_AF", 1, 1, 1, 0, 1);
		Function_122(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_127() //Position: 0x8251 / 33361
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v1_AA", "RCMMill_bak2Fort_bant_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v1_AB", "RCMMill_bak2Fort_bant_v1_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v1_AC1", "RCMMill_bak2Fort_bant_v1_AC1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bak2Fort_bant_v1_AC2", "RCMMill_bak2Fort_bant_v1_AC2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_bak2Fort_bant_v1_AD", "RCMMill_bak2Fort_bant_v1_AD", 1, 1, 1, 0, 1);
		Function_122(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_128() //Position: 0x83C8 / 33736
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_RidinWrongWay", "RCMMill_RidinWrongWay", 0, 1, 1, 0, 1);
		Function_122(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_129() //Position: 0x841B / 33819
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_JonStopsHors", "RCMMill_JonStopsHors", 0, 1, 1, 0, 1);
		Function_122(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_130() //Position: 0x846C / 33900
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_ArriveFort", "RCMMill_ArriveFort", 1, 1, 1, 0, 1);
		Function_122(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_131(bool bParam0, bool bParam1) //Position: 0x84B9 / 33977
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_132(int iParam0) //Position: 0x84D8 / 34008
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_133(int iParam0, float fParam1) //Position: 0x84EC / 34028
{
	if (Function_118(iParam0))
	{
		if (Function_116(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_134(int iParam0, float fParam1) //Position: 0x8508 / 34056
{
	if (!Function_118(iParam0))
	{
		Function_135(iParam0, fParam1);
	}
	return;
}

void Function_135(int iParam0, float fParam1) //Position: 0x851E / 34078
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_224(iParam0, 1);
	Function_102(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_136(bool bParam0) //Position: 0x853F / 34111
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_118(&iLocal_364))
	{
		Function_174(&iLocal_364);
	}
	else if (Function_133(&iLocal_364, 5.0f))
	{
		bVar0 = GET_LAST_ATTACK_TARGET(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar0)) > 1.0f)
			{
				if (GET_ACTOR_FACTION(bVar0) == 32)
				{
					bVar1 = true;
				}
			}
		}
		bVar0 = GET_LAST_ATTACKER(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 1.0f)
			{
				if (GET_ACTOR_FACTION(bVar0) == 32)
				{
					bVar1 = true;
				}
			}
		}
		bVar0 = GET_LAST_ATTACKER(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bParam0)) > 1.0f)
			{
				if (GET_ACTOR_FACTION(bVar0) == 32)
				{
					bVar1 = true;
				}
			}
		}
		if (iLocal_380)
		{
			if (!bVar1 && iLocal_384 >= 0)
			{
				AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_DARK", 0, 4294967295, 4294967295);
				iLocal_380 = 0;
				Function_174(&iLocal_364);
			}
		}
		else if (iLocal_384 <= 3 || bVar1)
		{
			AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
			iLocal_380 = 0;
			Function_174(&iLocal_364);
		}
	}
	return;
}

void Function_137(bool bParam0) //Position: 0x869F / 34463
{
	struct<8> Var0;
	bool bVar8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("zombieCountVol") };
	Function_146(bParam0);
	bVar8 = CREATE_VOLUME_IN_LAYOUT(bLocal_261, &Var0, 2, Function_146(bParam0), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	if (IS_VOLUME_VALID(bVar8))
	{
		iLocal_384 = Function_138(bVar8);
		DESTROY_VOLUME(bVar8);
	}
	return;
}

int Function_138(bool bParam0) //Position: 0x86F5 / 34549
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_18(), Global_30616, 15, 1);
	bVar1 = false;
	if (IS_OBJECTSET_VALID(bVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
		bVar2 = GET_OBJECTSET_SIZE(bVar0);
		if (bVar2 < 0)
		{
			return bVar1;
		}
		bVar3 = false;
		while (bVar3 <= bVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0);
			if (IS_OBJECT_VALID(bVar4))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
				if (IS_ACTOR_VALID(bVar5))
				{
					if (IS_ACTOR_ALIVE(bVar5))
					{
						if (GET_DRAW_ACTOR(bVar5))
						{
							if (Function_236(bVar5))
							{
								if (!IS_ACTOR_HORSE(bVar5))
								{
									bVar1++;
								}
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(bVar0);
	return bVar1;
}

void Function_139() //Position: 0x87A9 / 34729
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_JonGetsOffhorse", "RCMMill_JonGetsOffhorse", 0, 1, 1, 0, 1);
		Function_122(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_140() //Position: 0x8800 / 34816
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_bothThrownHors", "RCMMill_bothThrownHors", 0, 1, 1, 0, 1);
		Function_122(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_141() //Position: 0x8855 / 34901
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "RCMMill_getOnBak", "RCMMill_getOnBak", 1, 2, 1, 0, 1);
		Function_122(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_142() //Position: 0x889E / 34974
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMMill_JonDeserts", "RCMMill_JonDeserts", 0, 2, 1, 0, 1);
		Function_122(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_143() //Position: 0x88EB / 35051
{
	if (bLocal_351)
	{
		SET_DRAW_OBJECT(bLocal_350, 1);
		Function_144(bLocal_350, 0);
		OPEN_DOOR_DIRECTION(bLocal_350, false);
		return 1;
	}
	return 0;
}

void Function_144(bool bParam0, bool bParam1) //Position: 0x890F / 35087
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

vector3 Function_145(bool bParam0) //Position: 0x8960 / 35168
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

vector3 Function_146(bool bParam0) //Position: 0x8987 / 35207
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_147(bool bParam0) //Position: 0x8998 / 35224
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "mp_rcm_state");
}

bool Function_148(var uParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8) //Position: 0x89B5 / 35253
{
	bool bVar0;
	char* cVar1[64];
	bool bVar17;
	
	if (Function_149(uParam0))
	{
		bVar0 = FIND_NAMED_LAYOUT(bParam1);
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			if (bParam8 == 4294967295)
			{
				bParam8 = Global_26303.f_40 + 1;
				if (bParam8 == 6)
				{
					bParam8 = 7;
				}
			}
			if (bParam8 < 16)
			{
				strcpy(&cVar1, "$/fragments/p_pos_missing", 64);
				if (bParam8 <= 10)
				{
					stradd(&cVar1, "0", 64);
				}
				stradd(&cVar1, INT_TO_STRING(bParam8), 64);
				stradd(&cVar1, "x", 64);
				bVar17 = CREATE_PROP_IN_LAYOUT(bVar0, "mpNextPoster", &cVar1, vParam2, vParam5, 0);
				if (!IS_OBJECT_VALID(bVar17))
				{
					return "";
				}
				SET_PROP_AI_OBSTACLE_ENABLED(bVar17, 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(bVar17, 0);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar17, 0);
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar17), 1);
				return bVar17;
			}
		}
	}
	return "";
}

bool Function_149(int iParam0) //Position: 0x8A85 / 35461
{
	if (!Function_72(iParam0))
	{
		return 1;
	}
	return Function_88(&(Global_29008[iParam0]), 4);
}

int Function_150() //Position: 0x8AA1 / 35489
{
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	Function_151(1, 0, 1, 1, 0, 1, 0, 1, 1, 1);
	DESTROY_VOLUME(bLocal_255);
	return 1;
}

void Function_151(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x8ABF / 35519
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
		bVar0 = Function_14();
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
			if (Function_5())
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
		Function_155(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_154();
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
	Function_152(bParam9);
}

void Function_152(bool bParam0) //Position: 0x8BAF / 35759
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
		Function_153();
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

void Function_153() //Position: 0x8C5E / 35934
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

void Function_154() //Position: 0x8CD0 / 36048
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_155(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x8CE5 / 36069
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
	Function_30(iParam0, TO_FLOAT(bParam1), 1);
	Function_29(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_17(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

int Function_156() //Position: 0x8F05 / 36613
{
	vector3 vVar0;
	
	Function_143();
	TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2823.847f, 50.111f, 2417.65f, 214.687f, 1, true, 1);
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	ACTOR_POP_NEXT_GAIT(Global_34573, 1, 0);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1.5f, 0);
	Function_157();
	TELEPORT_ACTOR_WITH_HEADING(bLocal_349, -2823.649f, 50.111f, 2416.789f, 218.993f, 1, true, 1);
	vVar0 = { -2823.027f, 49.887f, 2420.853f };
	TASK_GO_NEAR_COORD(bLocal_349, &vVar0, 2.0f, 1);
	ACTOR_POP_NEXT_GAIT(bLocal_349, 1, 0);
	Function_242(&iLocal_390);
	return 1;
}

void Function_157() //Position: 0x8F92 / 36754
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
	bVar1 = Global_12976.f_36;
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bVar0))
		{
			bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar0);
			if (IS_ACTOR_VALID(bVar2))
			{
				FREE_FROM_HOGTIE(bVar2);
				DESTROY_ACTOR(bVar2);
			}
			else
			{
				FREE_FROM_HOGTIE(GET_ATTACHED_HOGTIE_VICTIM(bVar0));
			}
		}
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		if (IS_ACTOR_ALIVE(bVar1))
		{
			bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				FREE_FROM_HOGTIE(bVar2);
				DESTROY_ACTOR(bVar2);
			}
			else
			{
				FREE_FROM_HOGTIE(GET_ATTACHED_HOGTIE_VICTIM(bVar0));
			}
		}
	}
	return;
}

int Function_158() //Position: 0x900F / 36879
{
	if (!iLocal_259)
	{
		Function_164();
		Function_159(StackVal, StackVal, vLocal_256, bLocal_255);
		DESTROY_OBJECT(bLocal_347);
		iLocal_259 = 1;
	}
	return 1;
}

void Function_159(vector3 vParam0) //Position: 0x9034 / 36916
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<9> Var3;
	
	vVar3 = { StackVal, StackVal, vParam0 };
	Function_161(0, 0x40400000);
	if (!Function_38(StackVal, StackVal, vParam0))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
		bVar1 = Global_12976.f_36;
		bVar2 = GET_ACTOR_MOST_RECENT_VEHICLE(Global_34573);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_VOLUME_VALID(bParam3))
			{
				if (IS_ACTOR_IN_VOLUME(bVar1, bParam3))
				{
					TELEPORT_ACTOR(bVar1, &vVar3, 1, 1, 1);
					vVar3 = (vParam0.x + 1.5f);
					vVar3.f_8 = (vParam0.z + 1.5f);
				}
			}
			else if (Function_160(bVar1, Global_34573) > 4.0f)
			{
				TELEPORT_ACTOR(bVar1, &vVar3, 1, 1, 1);
				vVar3 = (vParam0.x + 1.5f);
				vVar3.f_8 = (vParam0.z + 1.5f);
			}
			TASK_CLEAR(bVar1);
			TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bVar1, 1);
		}
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bVar0 != bVar1)
			{
				if (IS_VOLUME_VALID(bParam3))
				{
					if (IS_ACTOR_IN_VOLUME(bVar0, bParam3))
					{
						TELEPORT_ACTOR(bVar0, &vVar3, 1, 1, 1);
						vVar3 = (vParam0.x + 2.5f);
						vVar3.f_8 = (vParam0.z + 2.5f);
					}
				}
				else if (Function_160(bVar0, Global_34573) > 4.0f)
				{
					TELEPORT_ACTOR(bVar0, &vVar3, 1, 1, 1);
					vVar3 = (vParam0.x + 2.5f);
					vVar3.f_8 = (vParam0.z + 2.5f);
				}
				TASK_CLEAR(bVar0);
				TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bVar0, 1);
			}
		}
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_VOLUME_VALID(bParam3))
			{
				if (IS_ACTOR_IN_VOLUME(bVar2, bParam3))
				{
					TELEPORT_ACTOR(bVar2, &vVar3, 1, 1, 1);
				}
			}
			else if (Function_160(bVar2, Global_34573) > 8.0f)
			{
				TELEPORT_ACTOR(bVar2, &vVar3, 1, 1, 1);
			}
		}
	}
}

float Function_160(bool bParam0, bool bParam1) //Position: 0x91BA / 37306
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

void Function_161(bool bParam0, float fParam1) //Position: 0x92AB / 37547
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
		{
			TASK_CLEAR(Global_12976.f_36);
		}
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, 1);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_163();
	Function_162();
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

void Function_162() //Position: 0x93A9 / 37801
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_163() //Position: 0x93DB / 37851
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

void Function_164() //Position: 0x94D8 / 38104
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_PROPS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_166(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(iVar0), vVar1, Var4, vVar7, Var10);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_165(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_165(char* cParam0, vector3 vParam1) //Position: 0x956E / 38254
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam4, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam8, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

void Function_166(char* cParam0, vector3 vParam1, vector3 vParam10) //Position: 0x9696 / 38550
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_PROP: ", 64);
	stradd(&cVar0, cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 3, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam7.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam7.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam7.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam10.x, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam10.y, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam10.z, 3, 2), 64);
	stradd(&cVar0, ">>", 64);
}

int Function_167() //Position: 0x9801 / 38913
{
	AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	bLocal_255 = CREATE_VOLUME_IN_LAYOUT(bLocal_261, "tempcutscenevol", 2, *(&Global_63541[2055] + 100), 0.0f, 0.0f, 0.0f, 40.0f, 20.0f, 40.0f);
	SET_DRAW_OBJECT(bLocal_350, 0);
	Function_157();
	Function_170(0, 0, 1, 1, 0, 1, 1, bLocal_255, 1, 1, 1, 1);
	Global_76850 = 0;
	Function_168(StackVal, StackVal, bLocal_261, *(&Global_63541[2055] + 112), &bLocal_255, 0, 0.0f, 0.0f, 0.0f, 1, 1);
	return 1;
}

void Function_168(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, float fParam6, float fParam7, float fParam8, bool bParam9, bool bParam10) //Position: 0x989F / 39071
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2.x = fParam6;
	vVar2.y = fParam7;
	vVar2.z = fParam8;
	if (bParam5)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(Global_34573, &vParam1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(*bParam4))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol")))
		{
			if (*bParam4 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"), vParam1);
			}
		}
	}
	else
	{
		*bParam4 = CREATE_VOLUME_IN_LAYOUT(bParam0, "CutsceneVol", 2, vParam1, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 25.0f);
	}
	if (IS_VOLUME_VALID(*bParam4))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
		bVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(Global_34573);
		if (!Global_3380)
		{
			if (IS_ACTOR_VALID(bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar0, bParam0);
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_169(bVar1, bParam0);
			}
		}
		if (!Function_38(StackVal, StackVal, vVar2))
		{
			if (!IS_ACTOR_VALID(bVar0))
			{
				bVar0 = Global_12976.f_36;
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *bParam4))
				{
					TELEPORT_ACTOR(bVar0, &vVar2, 1, 1, 1);
					TASK_CLEAR(bVar0);
					TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *bParam4))
				{
					TELEPORT_ACTOR(bVar1, &vVar2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(*bParam4))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*bParam4);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(*bParam4))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*bParam4);
		}
		if (bParam10)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(*bParam4);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(*bParam4, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(*bParam4);
		if (bParam9)
		{
			Global_63117 = *bParam4;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_169(bool bParam0, bool bParam1) //Position: 0x9B0D / 39693
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(bParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(bParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		bVar4 = GET_DRAFT_ACTOR(bVar2, bParam0);
		if (IS_ACTOR_VALID(bVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(bVar4, bParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		bVar5 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, bVar3);
		if (IS_ACTOR_VALID(bVar5))
		{
			if (!IS_ACTOR_PLAYER(bVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar5, bParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_170(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x9B82 / 39810
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
	Function_154();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_14();
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
			if (Function_5())
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
				Function_146(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_18(), 2, Function_146(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_155(19, 1, 0, 0);
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
	if (iParam10 && !Function_110())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_172()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_172()));
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
	if (Function_87(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_171(0x4000000);
	}
	if (Function_87(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_171(0x8000000);
	}
}

void Function_171(int iParam0) //Position: 0x9E30 / 40496
{
	int iVar0;
	
	if (Function_46(iParam0, 1) && Function_46(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_172() //Position: 0x9E64 / 40548
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

void Function_173() //Position: 0x9EE3 / 40675
{
	switch (iLocal_382)
	{
		case 0x00000000:
			if (!IS_PLAYER_WEAPON_ZOOMED(Global_34573) || !IS_PLAYER_DEADEYE(false))
			{
				SET_FORCE_PLAYER_AIM_MODE(0, 1);
				SET_PLAYER_DEADEYE_MODE(0, 1);
			}
			else
			{
				fLocal_385 = GET_CURRENT_GAME_TIME();
				iLocal_382++;
			}
			break;
		
		case 0x00000001:
			if ((GET_CURRENT_GAME_TIME() - fLocal_385) < 1.0f)
			{
				if (!IS_PLAYER_DEADEYE(false) || IS_ACTOR_SHOOTING(Global_34573))
				{
					SET_FORCE_PLAYER_AIM_MODE(0, 0);
					bLocal_376 = false;
				}
			}
			break;
	}
	return;
}

void Function_174(int iParam0) //Position: 0x9F52 / 40786
{
	Function_135(iParam0, 0.0f);
	return;
}

void Function_175(int iParam0, int iParam1) //Position: 0x9F5E / 40798
{
	if (Function_90(iParam0))
	{
		LOG_ERROR("SET_QUEST_SCRIPT_ACTIVATED: invalid quest!!");
		return;
	}
	Global_74542[iParam010].f_8 = iParam1;
	return;
}

void Function_176(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9FAA / 40874
{
	switch (bParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (bParam1 != 4294967295)
	{
		if (bParam2)
		{
			Function_177(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_177(bool bParam0, int iParam1, bool bParam2) //Position: 0xA05C / 41052
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	SET_ALLOW_EXECUTE(bParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	switch (iParam1)
	{
		case 0x00000001:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar0, 10.0f, &vVar3, &vVar6);
			vVar3.f_4 = (vVar3.y + 0.05f);
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_18(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_40();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_18(), vVar3, Function_40());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_18(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_40();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_18(), vVar0, Function_40());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
	}
	if (!bParam2)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(bParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(bParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(bParam0, "WakeUpFast", true);
	}
	return;
}

void Function_178(bool bParam0, bool bParam1) //Position: 0xA20C / 41484
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "mp_rcm_state", bParam1);
	return;
}

void Function_179(bool bParam0, bool bParam1) //Position: 0xA22C / 41516
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

void Function_180(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xA251 / 41553
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
			Var0 = { StackVal, StackVal, StackVal, Function_75(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0xA2D6 / 41686
{
	var uVar0;
	var uVar7;
	bool bVar8;
	
	if (!DECOR_CHECK_EXIST(Global_34573, "RCM_Cutscene_HideActors"))
	{
		Function_195();
		Function_194();
		DECOR_SET_BOOL(Global_34573, "RCM_Cutscene_HideActors", true);
	}
	SET_RCM_ACTOR_CALL_OVER_SUPPRESS(2.0f);
	bVar8 = Function_182(iParam0, iParam1, &uVar0, &uVar7, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 0, iParam8, iParam9, iParam10, iParam11, iParam12, 1);
	if (bVar8)
	{
		DECOR_REMOVE(Global_34573, "RCM_Cutscene_HideActors");
		return 1;
	}
	return 0;
}

int Function_182(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xA37F / 41855
{
	if (!bParam15)
	{
		Function_191(iParam1, uParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*uParam3 != 99 && (Function_190(iParam2) || iParam2->f_24 < 1))
			{
				*iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
			{
				*iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(bParam0, 0, iParam11, iParam12, iParam13, iParam14);
				Call_Loc(uParam4);
				Global_63097 = 1;
				if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
				{
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
				Function_174(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_189())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_188(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_174(iParam1 + 4);
						*iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_188(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_116(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_116(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(uParam5);
					if (StackVal)
					{
						Function_186(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0.1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_188(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_174(iParam1 + 4);
						*iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(uParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_34573, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_185(1.0f);
					}
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				*iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(uParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (bParam16)
					{
						Function_183();
						if (!IS_OBJECT_VALID(iParam1->f_16))
						{
							HUD_ENABLE(true);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(uParam8);
				if (StackVal)
				{
					Function_152(1);
					if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
					{
						DECOR_REMOVE(Global_34573, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(iParam1->f_20))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam1->f_20))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_20);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam1->f_20))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_20);
						}
						DESTROY_VOLUME(iParam1->f_20);
					}
					if (IS_LAYOUTREF_VALID(Global_6289))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
						}
					}
					*iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(Global_34573, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(uParam9);
				if (StackVal)
				{
					Call_Loc(uParam7);
					if (StackVal)
					{
						Global_63097 = 0;
						*iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && *uParam3 == 99) && !Function_190(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_183() //Position: 0xA993 / 43411
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_184();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	return;
}

void Function_184() //Position: 0xA9D8 / 43480
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_185(bool bParam0) //Position: 0xA9EA / 43498
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

void Function_186(bool bParam0, bool bParam1) //Position: 0xAA07 / 43527
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_18(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_187(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_187(bool bParam0) //Position: 0xAA87 / 43655
{
	int iVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0) == bParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int Function_188(bool bParam0) //Position: 0xAAB6 / 43702
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(bVar1);
						DECOR_SET_BOOL(bVar1, "refdbycutscene", true);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(bVar1)))
					{
						SET_MOST_RECENT_MOUNT(bVar1, false);
					}
				}
				else if (DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(bVar1);
					DECOR_REMOVE(bVar1, "refdbycutscene");
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool Function_189() //Position: 0xAB6E / 43886
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ALIVE(bVar1))
			{
				return 0;
			}
		}
		return 0;
		iVar0++;
	}
	return 1;
}

bool Function_190(int iParam0) //Position: 0xABA8 / 43944
{
	return iParam0->f_20;
}

void Function_191(var uParam0, int iParam1) //Position: 0xABB2 / 43954
{
	Function_192(uParam0, iParam1, 0);
	return;
}

void Function_192(var uParam0, bool bParam1, bool bParam2) //Position: 0xABC0 / 43968
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
			Function_193(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_155(20, 1, 0, 0);
		*uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1.5f)
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
						Function_193(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_155(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

void Function_193(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xAD0C / 44300
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

int Function_194() //Position: 0xAD35 / 44341
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
	bVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_LAYOUTREF_VALID(Global_63535))
		{
			GIVE_OBJECT_TO_LAYOUT(bVar0, Global_63535);
		}
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		if (IS_LAYOUTREF_VALID(Global_63535))
		{
			GIVE_OBJECT_TO_LAYOUT(bVar1, Global_63535);
		}
	}
	return 1;
}

void Function_195() //Position: 0xAD80 / 44416
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	
	bVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_18(), Global_63535, 15, 0);
	vVar3 = { StackVal, StackVal, Global_34574 };
	bVar6 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_18(), 2, vVar3, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	LOCATE_ACTORS_IN_VOLUME(bVar6, bVar2, 0, 1);
	bVar7 = false;
	while (bVar7 < (GET_OBJECTSET_SIZE(bVar2) - 1))
	{
		bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, bVar2));
		if (IS_ACTOR_VALID(bVar0))
		{
			iVar8 = 0;
			while (iVar8 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar8);
				if (GET_ACTOR_ENUM(bVar1) == GET_ACTOR_ENUM(bVar0))
				{
					if (IS_ACTOR_DRAFTED(bVar0))
					{
						bVar9 = GET_ACTOR_DRAFTED_TO(bVar0);
						if (IS_ACTOR_VALID(bVar9))
						{
							if (!STRINGS_ARE_EQUAL(GET_LAYOUT_NAME(GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bVar9))), "cutscene layout"))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar0), bVar0);
							}
						}
					}
					else if (!STRINGS_ARE_EQUAL(GET_LAYOUT_NAME(GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bVar0))), "cutscene layout"))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar0), bVar0);
					}
				}
				iVar8++;
			}
		}
		bVar7++;
	}
	DISBAND_OBJECTSET(bVar2);
	DESTROY_OBJECTSET(bVar2);
	DESTROY_VOLUME(bVar6);
	return;
}

int Function_196() //Position: 0xAEA2 / 44706
{
	HUD_FADE_IN(1.0f, 1065353216);
	return 1;
}

int Function_197() //Position: 0xAEB2 / 44722
{
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	Function_151(1, 0, 1, 1, 0, 1, 0, 1, 1, 1);
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	DESTROY_VOLUME(bLocal_255);
	return 1;
}

int Function_198() //Position: 0xAED7 / 44759
{
	TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2825.849f, 50.111f, 2415.196f, 99.717f, 1, true, 1);
	ACTOR_END_FORCE_HOLSTER(Global_34573);
	_ADD_AMMO_OF_TYPE(Global_34573, 7, 6.0f, 1, 0);
	ACTOR_ADD_WEAPON_AMMO(Global_34573, 4, 6.0f);
	SET_ANIM_SET_FOR_ACTOR(Global_34573, "ptl_base", 1);
	if (ACTOR_GET_NEXT_EQUIP_SLOT(Global_34573) != 1)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
	}
	if (GET_WEAPON_EQUIPPED(Global_34573, true) != 4)
	{
		ACTOR_SET_NEXT_WEAPON(Global_34573, 4);
	}
	ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 4, 0);
	RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
	ACTOR_POP_NEXT_GAIT(Global_34573, 0, 0);
	Function_157();
	bLocal_347 = CREATE_GRINGO_IN_LAYOUT(bLocal_261, "survivorIdle", "$/content/scripting/gringo/simpleGringo/stand_knock_on_door", -2830.513f, 50.332f, 2417.278f, 0.0f, 281.272f, 0.0f);
	SNAP_ACTOR_TO_GRINGO(bLocal_349, bLocal_347, "UseCase1", 1, 0, 0);
	TASK_USE_GRINGO(bLocal_349, GET_GRINGO_FROM_OBJECT(bLocal_347), "UseCase1", 4294967295, 1);
	return 1;
}

int Function_199() //Position: 0xB003 / 45059
{
	if (!iLocal_259)
	{
		Function_164();
		Function_159(StackVal, StackVal, vLocal_256, bLocal_255);
		DESTROY_OBJECT(bLocal_347);
		iLocal_259 = 1;
	}
	return 1;
}

int Function_200() //Position: 0xB028 / 45096
{
	if (ACTOR_GET_NEXT_EQUIP_SLOT(Global_34573) != 1)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
	}
	if (GET_WEAPON_EQUIPPED(Global_34573, true) != 4)
	{
		ACTOR_SET_NEXT_WEAPON(Global_34573, 4);
	}
	ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 4, 0);
	return 1;
}

int Function_201() //Position: 0xB05D / 45149
{
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Fast_09", bLocal_319[0]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Fast_07", bLocal_319[1]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_02", bLocal_319[2]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_05", bLocal_319[3]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Fast_02", bLocal_319[4]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_03", bLocal_319[5]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_02", bLocal_319[6]);
	ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
	if (GET_PLAYER_DEADEYE_POINTS(0) > 50.0f)
	{
		ADD_PLAYER_DEADEYE_POINTS(0, 50.0f, 1);
	}
	bLocal_255 = CREATE_VOLUME_IN_LAYOUT(bLocal_261, "tempcutscenevol", 2, *(&Global_63541[2055] + 100), 0.0f, 0.0f, 0.0f, 40.0f, 20.0f, 40.0f);
	AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	Function_170(0, 0, 1, 1, 0, 1, 1, bLocal_255, 1, 1, 1, 1);
	Global_76850 = 0;
	Function_168(StackVal, StackVal, bLocal_261, *(&Global_63541[2055] + 112), &bLocal_255, 0, 0.0f, 0.0f, 0.0f, 1, 1);
	return 1;
}

bool Function_202() //Position: 0xB1CD / 45517
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (IS_ACTOR_VALID(bLocal_319[iVar0]))
		{
			if (GET_LAST_ATTACKER(bLocal_319[iVar0]) == Global_34573)
			{
				return 1;
			}
		}
		return 1;
		iVar0++;
	}
	return 0;
}

int Function_203(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0xB20A / 45578
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		if (!(((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28))
		{
			if (UNK_0x214AFB8C(iParam0->f_68))
			{
				bVar0 = VDIST(Global_34574, *(iParam0 + 100));
				if (Global_63535.f_12 == iParam1)
				{
					uVar1 = Global_63535.f_20;
					uVar2 = Function_205(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &uVar1, *(iParam0 + 100), 0, fParam2, fParam3, 2, 1, 2, 2, 0, 1);
					Global_63535.f_20 = uVar1;
					Global_63535.f_16 = bVar0;
					if (bVar0 < fParam3)
					{
						Global_63535.f_12 = 4294967295;
						Global_63535.f_16 = 999.0f;
					}
					return uVar2;
				}
				if (bVar0 > fParam2)
				{
					if (Global_63535.f_12 != 4294967295 || (Global_63535.f_12 == iParam1 && bVar0 > Global_63535.f_16))
					{
						iVar3 = Global_63535.f_20;
						if (iVar3 == 0)
						{
							if (GET_ACTOR_ENUM(Global_34573) == 1)
							{
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_204(iParam0));
							}
						}
						if (IS_ACTORSET_VALID(bParam4))
						{
							bVar4 = false;
							while (bVar4 <= GET_ACTORSET_SIZE(bParam4))
							{
								bVar5 = GET_ACTOR_FROM_ACTORSET(bParam4, bVar4);
								if (IS_ACTOR_VALID(bVar5))
								{
									CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar5), bVar5);
								}
								bVar4++;
							}
						}
						uVar6 = Function_205(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &iVar3, *(iParam0 + 100), 0, fParam2, fParam3, 2, 1, 2, 2, 0, 1);
						Global_63535.f_20 = iVar3;
						Global_63535.f_12 = iParam1;
						Global_63535.f_16 = bVar0;
						return uVar6;
					}
				}
			}
		}
	}
	return 0;
}

float Function_204(float fParam0) //Position: 0xB36B / 45931
{
	if (fParam0->f_168 != 4294967295)
	{
		if (Global_74542[fParam0->f_16810].f_28 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_204(&(Global_63541[fParam0->f_16855]));
	}
	return 0;
}

int Function_205(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0xB3A0 / 45984
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_207(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_208()) * (fParam7 - fParam6)) * 0.5f))) || bParam12)
	{
		if (!bParam5 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && *iParam1 == 0)
		{
			if (*iParam1 != 5)
			{
				*iParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			*iParam1 = 0;
			return 0;
		}
		if ((iParam13 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar16, &vVar19))
			{
				if (!Function_38(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6.28f));
						STREAMING_OVERRIDE_MAIN_POI(vVar16, vVar19);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(vVar16, vVar19, 1);
					}
				}
			}
		}
		switch (*iParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					*iParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*iParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam8, iParam9, iParam10, iParam11);
					*iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_206();
					CUTSCENE_MANAGER_RESUME_LOADING();
					*iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					*iParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				*iParam1 = 0;
				break;
		}
	}
	else if ((!Function_207(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_208()) * (fParam7 - fParam6)) * 0.5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*iParam1 = 0;
	}
	else if (!Function_207(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_206() //Position: 0xB5E6 / 46566
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_165(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		iVar0++;
	}
	return;
}

bool Function_207(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xB63A / 46650
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_70(bParam0);
		if (VDIST(Function_70(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_208() //Position: 0xB6C4 / 46788
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

bool Function_209(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB6D3 / 46803
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
				Function_211(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_131(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_131(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_210(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_210(&iVar6, &vVar3);
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

int Function_210(int iParam0, int iParam1) //Position: 0xB8E5 / 47333
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_38(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_38(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_211(bool bParam0, bool bParam1) //Position: 0xB950 / 47440
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
	else if (!bParam1 || Function_131(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

bool Function_212(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB9AD / 47533
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(false))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_215(bParam0))
	{
		return 1;
	}
	if (Function_214(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_213())
	{
		return 1;
	}
	return 0;
}

bool Function_213() //Position: 0xBA63 / 47715
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_214(bool bParam0) //Position: 0xBA7A / 47738
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_215(bool bParam0) //Position: 0xBA85 / 47749
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_216() //Position: 0xBA93 / 47763
{
	int iVar0;
	
	Global_63541[2055].f_68 = uLocal_387;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (IS_ACTOR_VALID(bLocal_319[iVar0]))
		{
			Function_223(bLocal_319[iVar0]);
		}
		iVar0++;
	}
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	ABORT_SCRIPTED_CONVERSATION(1);
	if (IS_LAYOUTREF_VALID(bLocal_261))
	{
		RELEASE_LAYOUT_REF(bLocal_261);
	}
	if (IS_ACTOR_VALID(bLocal_349))
	{
		Function_223(bLocal_349);
		CLEAR_ACTOR_PROOF(bLocal_349, 16);
		CLEAR_ACTOR_PROOF(bLocal_349, 8);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_349, 1.0f);
		SET_ACTOR_FACTION(bLocal_349, 3);
	}
	if (IS_OBJECT_VALID(bLocal_388))
	{
		DESTROY_OBJECT(bLocal_388);
	}
	if (IS_OBJECT_VALID(bLocal_389))
	{
		DESTROY_OBJECT(bLocal_389);
	}
	if ((!Function_89(20) && !Function_115(20)) && !Function_115(21))
	{
		Function_222(20);
		if (IS_OBJECT_VALID(bLocal_348))
		{
			DESTROY_OBJECT(bLocal_348);
		}
	}
	if (bLocal_376)
	{
		SET_FORCE_PLAYER_AIM_MODE(0, 0);
	}
	Global_74542[2010].f_36 = 0.0f;
	if (!Function_115(21))
	{
		Function_222(21);
		Function_175(21, 0);
	}
	else if (IS_ACTOR_VALID(bLocal_349))
	{
		DESTROY_ACTOR(bLocal_349);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "debugRCMMissing2"))
	{
		DECOR_REMOVE(Global_34573, "debugRCMMissing2");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "Missing3_ShutUp"))
	{
		DECOR_REMOVE(Global_34573, "Missing3_ShutUp");
	}
	if (IS_BLIP_VALID(Global_63541[2155].f_184))
	{
		REMOVE_BLIP(Global_63541[2155].f_184);
	}
	if (IS_BLIP_VALID(Global_63541[2155].f_188))
	{
		REMOVE_BLIP(Global_63541[2155].f_188);
	}
	Function_102(&Global_63541[2055] + 144, 2048);
	Function_218(&bLocal_264);
	Function_217(0, 0, 0);
	return;
}

int Function_217(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBC55 / 48213
{
	if (bParam2)
	{
		if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			return 0;
		}
	}
	if (bParam0)
	{
		CAMERA_RESET(0);
	}
	if (bParam1)
	{
		Function_185(1.0f);
	}
	TERMINATE_THIS_SCRIPT();
	return 1;
}

void Function_218(int iParam0) //Position: 0xBC84 / 48260
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_219(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_219(var uParam0, int iParam1) //Position: 0xBCAA / 48298
{
	if (Function_221(uParam0[iParam13], 4))
	{
		if (Function_221(uParam0[iParam13], 1))
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
			Function_220(uParam0[iParam13], 1);
			Function_220(uParam0[iParam13], 2);
			Function_220(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_220(var uParam0, int iParam1) //Position: 0xBDD8 / 48600
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_221(var uParam0, int iParam1) //Position: 0xBDF2 / 48626
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_222(int iParam0) //Position: 0xBE0F / 48655
{
	char* cVar0[32];
	
	Global_74542[iParam010] = 7;
	Global_74542[iParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam010] + 4, Global_63541[iParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Fail", &Global_63541[iParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
	switch (Global_29004)
	{
		case 0x00000000:
			strcpy(&cVar0, "FTR", 32);
			break;
		
		case 0x00000001:
			strcpy(&cVar0, "MEX", 32);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "NOR", 32);
			break;
		
		default:
			PRINTSTRING("Unknown territory");
			PRINTINT(Global_29004);
			LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
			break;
	}
	stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
	AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
	SAY_SINGLE_LINE_CONTEXT(Global_34573, 394, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[iParam055].f_140, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

void Function_223(bool bParam0) //Position: 0xBF71 / 49009
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_224(var uParam0, int iParam1) //Position: 0xBF9D / 49053
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_225() //Position: 0xBFAC / 49068
{
	bool bVar0;
	char* cVar1[24];
	
	bVar0 = false;
	while (bVar0 <= 7)
	{
		strcpy(&cVar1, "zombie", 24);
		stradd(&cVar1, INT_TO_STRING(bVar0), 24);
		Function_233(iLocal_327[bVar0]);
		Function_232(iLocal_327[bVar0]);
		bLocal_319[bVar0] = CREATE_ACTOR_IN_LAYOUT(bLocal_261, &cVar1, iLocal_327[bVar0], Function_233(iLocal_327[bVar0]), Function_232(iLocal_327[bVar0]));
		if (!Function_236(bLocal_319[bVar0]))
		{
			Function_226(bLocal_319[bVar0], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
		}
		MEMORY_CONSIDER_AS(bLocal_319[bVar0], Global_34573, 3);
		stradd(&cVar1, "gringo", 24);
		Function_233(iLocal_327[bVar0]);
		Function_232(iLocal_327[bVar0]);
		iLocal_339[bVar0] = CREATE_GRINGO_IN_LAYOUT(bLocal_261, &cVar1, "/content/DLC/ZombiePack/Gringos/z_dlc_z_beat_door", Function_233(iLocal_327[bVar0]), Function_232(iLocal_327[bVar0]));
		SNAP_ACTOR_TO_GRINGO(bLocal_319[bVar0], iLocal_339[bVar0], "UseCase1", 1, 0, 0);
		TASK_USE_GRINGO(bLocal_319[bVar0], GET_GRINGO_FROM_OBJECT(iLocal_339[bVar0]), "UseCase1", 4294967295, 1);
		TASK_PRIORITY_SET(bLocal_319[bVar0], 1);
		bVar0++;
	}
	return;
}

void Function_226(bool bParam0, int iParam1, bool bParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0xC0E4 / 49380
{
	int iVar0;
	
	if (Function_231(bParam0) && !Function_230(bParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(bParam0, iParam1);
	if (bParam2 == 4294967294 && bParam3 == 4294967294)
	{
		if (bParam2 == 4294967295)
		{
			bParam2 = RAND_INT_RANGE(false, 4);
		}
		if (bParam3 == 4294967295)
		{
			bParam3 = RAND_INT_RANGE(false, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(bParam0, bParam2, bParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (bParam6)
	{
		DEEQUIP_ACCESSORY(bParam0, 0);
	}
	if (bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	}
	Function_228(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", true);
	Function_227(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, false);
	SET_ALLOW_COLD_WEATHER_BREATH(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.0f, 1.115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bParam0, 0, 0);
	iVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, 1);
	}
	if (iParam1 <= 1204 && iParam1 >= 1213)
	{
		DECOR_SET_BOOL(bParam0, "FastZombie", true);
	}
	else if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		DECOR_SET_BOOL(bParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 12.5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 0.5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(bParam0, "head");
	if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2020.0f, 1);
	}
	Function_176(bParam0, uParam4, uParam5);
}

void Function_227(bool bParam0) //Position: 0xC347 / 49991
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

void Function_228(bool bParam0) //Position: 0xC37B / 50043
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_229(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_229(var uParam0, bool bParam1) //Position: 0xC6DF / 50911
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

bool Function_230(bool bParam0, int iParam1) //Position: 0xC701 / 50945
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_231(bool bParam0) //Position: 0xC743 / 51011
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

vector3 Function_232(int iParam0) //Position: 0xC763 / 51043
{
	switch (iParam0)
	{
		case 0x000004BC:
			return 0.0f, 104.762f, 0.0f;
			break;
		
		case 0x0000006F:
			return 0.0f, 104.762f, 0.0f;
			break;
		
		case 0x00000037:
			return 0.0f, 104.762f, 0.0f;
			break;
		
		case 0x00000035:
			return 0.0f, 104.762f, 0.0f;
			break;
		
		case 0x00000059:
			return 0.0f, 394.16f, 0.0f;
			break;
		
		case 0x00000099:
			return 0.0f, 382.82f, 0.0f;
			break;
		
		case 0x0000004F:
			return 0.0f, 104.762f, 0.0f;
			break;
	}
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_233(int iParam0) //Position: 0xC7EA / 51178
{
	switch (iParam0)
	{
		case 0x000004BC:
			return -2828.6f, 50.35f, 2416.9f;
			break;
		
		case 0x0000006F:
			return -2829.0f, 50.34f, 2415.1f;
			break;
		
		case 0x00000037:
			return -2829.5f, 50.34f, 2414.3f;
			break;
		
		case 0x00000035:
			return -2829.0f, 50.35f, 2415.85f;
			break;
		
		case 0x00000059:
			return -2830.56f, 50.13f, 2419.8f;
			break;
		
		case 0x00000099:
			return -2829.52f, 50.12f, 2419.8f;
			break;
		
		case 0x0000004F:
			return -2828.5f, 50.36f, 2417.72f;
			break;
	}
	return 0.0f, 0.0f, 0.0f;
}

void Function_234(bool bParam0, bool bParam1) //Position: 0xC8A9 / 51369
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

var Function_235(int iParam0, bool bParam1, char* cParam2, int iParam3) //Position: 0xC8FD / 51453
{
	bool bVar0;
	char* cVar1[8];
	char* cVar3[32];
	bool bVar11;
	
	if (!Function_72(iParam0))
	{
		return "";
	}
	bVar0 = CREATE_WORLD_SECTOR(FIND_NAMED_LAYOUT("formations"), bParam1);
	if (!IS_WORLD_SECTOR_LOADED(bVar0))
	{
		DESTROY_OBJECT(bVar0);
		return "";
	}
	strcpy(&cVar1, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar1, "0", 8);
	}
	straddi(&cVar1, iParam3, 8);
	memcpy(&cVar3, Global_29155[iParam010].f_20, 8);
	stradd(&cVar3, "_", 32);
	stradd(&cVar3, cParam2, 32);
	stradd(&cVar3, "*", 32);
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(bVar0, &cVar3, &cVar1);
	DESTROY_OBJECT(bVar0);
	if (!IS_OBJECT_VALID(bVar11))
	{
		PRINTSTRING("Door not found:");
		PRINTSTRING(&cVar3);
		PRINTSTRING(" door");
		PRINTSTRING(&cVar1);
		PRINTNL();
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar11);
}

bool Function_236(bool bParam0) //Position: 0xC9D2 / 51666
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_230(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

bool Function_237(int iParam0) //Position: 0xCA1D / 51741
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_241();
	iVar1 = 0;
	if (!Function_221(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_240(iParam0[iVar03], 8);
		}
		else if (Function_239())
		{
			iVar1 = 1;
			Function_240(iParam0[iVar03], 8);
		}
		Function_240(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_221(iParam0[iVar03], 4))
		{
			if (!Function_221(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_221(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_221(iParam0[03], 8) || iVar1));
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
				Function_240(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_221(iParam0[iVar03], 4))
		{
			if (!Function_221(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_240(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_240(iParam0[iVar03], 2);
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
							Function_240(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_240(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_240(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_240(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_240(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_240(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_240(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_240(iParam0[iVar03], 2);
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
	Function_238();
	return 1;
}

void Function_238() //Position: 0xCD98 / 52632
{
	if (!Function_87(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_239() //Position: 0xCDD8 / 52696
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

void Function_240(var uParam0, int iParam1) //Position: 0xCE03 / 52739
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_241() //Position: 0xCE14 / 52756
{
	if (!Function_87(128))
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

void Function_242(int iParam0) //Position: 0xCE56 / 52822
{
	if (!Function_118(iParam0))
	{
		Function_135(iParam0, 0.0f);
	}
	return;
}

void Function_243() //Position: 0xCE6B / 52843
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		switch (iVar0)
		{
			case 0x00000000:
				iLocal_327[iVar0] = 1212;
				break;
			
			case 0x00000001:
				iLocal_327[iVar0] = 111;
				break;
			
			case 0x00000002:
				iLocal_327[iVar0] = 55;
				break;
			
			case 0x00000003:
				iLocal_327[iVar0] = 53;
				break;
			
			case 0x00000004:
				iLocal_327[iVar0] = 89;
				break;
			
			case 0x00000005:
				iLocal_327[iVar0] = 153;
				break;
			
			case 0x00000006:
				iLocal_327[iVar0] = 79;
				break;
		}
		iVar0++;
	}
	return;
}

var Function_244(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xCF09 / 53001
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_245(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_240(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_245(var uParam0, int iParam1, int iParam2) //Position: 0xCF41 / 53057
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_221(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_240(uParam0[iVar03], 4);
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

var Function_246(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xD005 / 53253
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_221(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_240(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_240(uParam0[iVar03], 8);
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

