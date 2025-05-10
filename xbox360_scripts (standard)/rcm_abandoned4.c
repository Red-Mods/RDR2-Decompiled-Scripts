//Decompiled with MagicRDR v1.0
//Function Count : 253
//Statics Count : 286
//Natives Count : 477
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 12;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
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
	var uLocal_90 = 20;
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
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 6;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
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
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	bool bLocal_195 = false;
	bool bLocal_196 = false;
	bool bLocal_197 = false;
	float fLocal_198 = 0.0f;
	bool bLocal_199 = false;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	vector3 vLocal_208 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_211 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_214 = true;
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
	var uLocal_228 = 0;
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
	bool bLocal_239 = false;
	bool bLocal_240 = false;
	bool bLocal_241 = false;
	bool bLocal_242 = false;
	bool bLocal_243 = false;
	bool bLocal_244 = false;
	bool bLocal_245 = false;
	bool bLocal_246 = false;
	int iLocal_247 = 0;
	bool bLocal_248 = false;
	bool bLocal_249 = false;
	bool bLocal_250 = false;
	bool bLocal_251 = false;
	vector3 vLocal_252 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_255 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_258 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_261 = false;
	int iLocal_262 = 0;
	bool bLocal_263 = false;
	bool bLocal_264 = false;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	int iLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	int iLocal_273 = 0;
	bool bLocal_274 = false;
	bool bLocal_275 = false;
	bool bLocal_276 = false;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	bool bLocal_283 = false;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_4 = 0;
	iLocal_154 = 0;
	iLocal_155 = 0;
	iLocal_185 = 0;
	iLocal_186 = 16;
	iLocal_187 = 0;
	fLocal_198 = 2.0f;
	bLocal_199 = false;
	iLocal_200 = 1;
	iLocal_201 = 0;
	iLocal_202 = 0;
	iLocal_203 = 0;
	iLocal_204 = 0;
	iLocal_205 = 0;
	iLocal_206 = 0;
	iLocal_207 = 0;
	vLocal_208 = { -2167,51f, 16,879f, 2591,991f };
	vLocal_211 = { -2169,244f, 16,909f, 2624,381f };
	iLocal_247 = 0;
	vLocal_252 = { -2180,028f, 16,296f, 2599,932f };
	vLocal_255 = { -2168,357f, 17,75118f, 2592,72f };
	vLocal_258 = { -2169,969f, 16,908f, 2622,207f };
	iLocal_277 = 0;
	iLocal_278 = 0;
	iLocal_279 = 0;
	iLocal_280 = 0;
	iLocal_281 = 0;
	iLocal_282 = 0;
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
			iLocal_273 = 0;
			iLocal_188 = 1000;
			bLocal_199 = true;
			Function_251(&bLocal_214, "$/fragments/p_gen_fiddle01x", 0, 0);
			Function_250(&bLocal_214, 334, 3, 0);
			Function_251(&bLocal_214, "$/content/scripting/gringo/simpleGringo/sit_headinhands_n_any", 1, 0);
			Function_250(&bLocal_214, 333, 3, 0);
			Function_251(&bLocal_214, "$/content/scripting/gringo/simpleGringo/musician_wife_idle", 1, 0);
			Function_251(&bLocal_214, "$/fragments/p_gen_bag01x", 0, 0);
			Function_251(&bLocal_214, "$/fragments/p_gen_suitcase03x", 0, 0);
			Function_251(&bLocal_214, "$/fragments/p_gen_suitcase01x", 0, 0);
			Global_63541[255].f_68 = GET_ASSET_ID("$/cutscene/RCM_04_CS03_b/RCM_04_CS03_b", 9);
			*(&Global_63541[255] + 100) = { StackVal, StackVal, vLocal_208 };
			while (!IS_EXITFLAG_SET())
			{
				bLocal_195 = Global_63541[ScriptParam_055].f_204;
				if (IS_ACTOR_VALID(bLocal_195))
				{
					Function_249();
				}
				switch (iLocal_273)
				{
					case 0x00000000:
						if (Function_244(&bLocal_214))
						{
							if (IS_LAYOUTREF_VALID(bLocal_197))
							{
								if (VDIST(Global_34574, -2167,51f, 16,879f, 2591,991f) > 30.0f || VDIST(Global_34574, -2167,51f, 16,879f, 2591,991f) > 30.0f)
								{
									if (Global_74542[210].f_20 <= 2)
									{
										Function_242();
									}
								}
								if (IS_ACTOR_VALID(bLocal_195))
								{
									if (!IS_OBJECT_VALID(bLocal_239))
									{
										bLocal_239 = FIND_OBJECT_IN_LAYOUT(bLocal_197, "RCM_Abandoned_Fiddle");
									}
									if (!IS_OBJECT_VALID(bLocal_239))
									{
										bLocal_239 = CREATE_PROP_IN_LAYOUT(bLocal_197, "RCM_Abandoned_Fiddle", "$/fragments/p_gen_fiddle01x", vLocal_255, 90.0f, -47,48567f, -180.0f, 1);
									}
									if (!IS_VOLUME_VALID(bLocal_251))
									{
										bLocal_251 = CREATE_VOLUME_IN_LAYOUT(bLocal_197, Function_241(), 2, -2167,622f, 16,99f, 2592,918f, 0.0f, 0.0f, 0.0f, 1.0f, 5.0f, 1.0f);
										ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_251);
										ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_251);
									}
									if (!IS_ACTORSET_VALID(bLocal_261))
									{
										bLocal_261 = CREATE_ACTORSET_IN_LAYOUT(bLocal_197, "musicianDummySet", 0);
									}
									if (!IS_ACTOR_VALID(bLocal_240) && IS_ACTORSET_VALID(bLocal_261))
									{
										bLocal_240 = CREATE_ACTOR_IN_LAYOUT(bLocal_197, Function_241(), 333, -2168,942f, 17,541f, 2586,576f, 0.0f, 9,23f, 0.0f);
										SUSPEND_MOVER(bLocal_240);
										TASK_STAND_STILL(bLocal_240, -1.0f, 0, 0);
										SET_DRAW_ACTOR(bLocal_240, false);
										ADD_ACTORSET_MEMBER(bLocal_261, bLocal_240);
									}
									bLocal_242 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("musician_wife_idle", &vLocal_211, 3.0f, 1));
									if (!IS_OBJECT_VALID(bLocal_242))
									{
										CREATE_GRINGO_IN_LAYOUT(bLocal_197, "wifeIdle", "$/content/scripting/gringo/SimpleGringo/musician_wife_idle", -2169,529f, 16,91f, 2624,512f, 0.0f, 180.0f, 0.0f);
									}
									bLocal_250 = FIND_VOLUME_IN_LAYOUT(bLocal_197, "wifeVolume");
									if (!IS_VOLUME_VALID(bLocal_250))
									{
										bLocal_250 = CREATE_VOLUME_IN_LAYOUT(bLocal_197, "wifeVolume", 2, -2169,409f, 16,909f, 2623,797f, 0.0f, 45.0f, 0.0f, 7,5f, 5.0f, 6.0f);
										ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_250);
										ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_250);
									}
									if (!iLocal_204)
									{
										bLocal_243 = FIND_OBJECT_IN_LAYOUT(bLocal_197, "nsuitcase1");
										if (!IS_OBJECT_VALID(bLocal_243))
										{
											bLocal_243 = CREATE_PROP_IN_LAYOUT(bLocal_197, "nsuitcase1", "$/fragments/p_gen_suitcase03x", -2171,24f, 17,217f, 2625,02f, 90.0f, 278,5f, 0.0f, 0);
										}
										bLocal_244 = FIND_OBJECT_IN_LAYOUT(bLocal_197, "nsuitcase2");
										if (!IS_OBJECT_VALID(bLocal_244))
										{
											bLocal_244 = CREATE_PROP_IN_LAYOUT(bLocal_197, "nsuitcase2", "$/fragments/p_gen_bag01x", -2171,143f, 16,909f, 2624,348f, 0.0f, 298,9f, 0.0f, 0);
										}
										bLocal_245 = FIND_OBJECT_IN_LAYOUT(bLocal_197, "nsuitcase3");
										if (!IS_OBJECT_VALID(bLocal_245))
										{
											bLocal_245 = CREATE_PROP_IN_LAYOUT(bLocal_197, "nsuitcase3", "$/fragments/p_gen_suitcase01x", -2171,24f, 16,909f, 2625,02f, 90.0f, 268,5f, 0.0f, 0);
										}
										if ((IS_OBJECT_VALID(bLocal_243) && IS_OBJECT_VALID(bLocal_244)) && IS_OBJECT_VALID(bLocal_245))
										{
											iLocal_204 = 1;
										}
									}
									Function_240();
									if (!iLocal_203)
									{
										Function_239();
										Function_238();
									}
									if ((((IS_ACTOR_VALID(bLocal_240) && IS_ACTOR_VALID(bLocal_196)) && IS_VOLUME_VALID(bLocal_251)) && iLocal_203) && IS_ACTORSET_VALID(bLocal_261))
									{
										SET_ACTOR_CAN_PLAY_GESTURES(bLocal_195, false);
										SET_ACTOR_OBSERVED_TARGETED_REACTIONS(bLocal_195, 0);
										Function_231(&(Global_63541[255]), 2, 10.0f, 20.0f, bLocal_261);
										iLocal_273 = 1;
									}
								}
							}
							else if (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Abandoned_layout")))
							{
								Function_229();
								bLocal_197 = bLocal_274;
							}
							else
							{
								bLocal_197 = FIND_NAMED_LAYOUT("Abandoned_layout");
							}
						}
						break;
					
					case 0x00000001:
						if (VDIST(Global_34574, -2167,51f, 16,879f, 2591,991f) > 30.0f || VDIST(Global_34574, -2167,51f, 16,879f, 2591,991f) > 30.0f)
						{
							if (Global_74542[210].f_20 <= 2)
							{
								Function_242();
							}
						}
						if (iLocal_200)
						{
							if (Global_74542[210].f_20 != 0 || Global_74542[210].f_20 != 1)
							{
								if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
								{
									Function_228();
								}
							}
							else if (Global_74542[210].f_20 == 2)
							{
								iLocal_273 = 2;
								break;
							}
							Function_231(&(Global_63541[255]), 2, 10.0f, 20.0f, bLocal_261);
						}
						else
						{
							Function_227(bLocal_196);
							if ((iLocal_201 && Global_74542[210].f_20 != 0) && VDIST(Function_227(bLocal_196), vLocal_211) > 4.0f)
							{
								iLocal_273 = 2;
							}
							else if (iLocal_201 && Global_74542[210].f_20 < 0)
							{
								iLocal_273 = 2;
							}
						}
						Function_226();
						break;
					
					case 0x00000002:
						if (VDIST(Global_34574, -2167,51f, 16,879f, 2591,991f) > 30.0f || VDIST(Global_34574, -2167,51f, 16,879f, 2591,991f) > 30.0f)
						{
							if (Global_74542[210].f_20 <= 2)
							{
								Function_242();
							}
						}
						if (iLocal_200)
						{
							if (Global_74542[210].f_20 != 0 || Global_74542[210].f_20 != 1)
							{
								if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
								{
									if (GATEWAY_UPDATE(Global_63541[ScriptParam_055].f_192))
									{
										if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200))
										{
											if ((StackVal && FABS((StackVal - !Function_224(Global_34573, 0, 1))) > 2.0f) && IS_SCRIPT_USE_CONTEXT_PRESSED(Global_63541[ScriptParam_055].f_200))
											{
												if (Function_223() > 5)
												{
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_222();
													}
													RELEASE_SCRIPT_USE_CONTEXT(Global_63541[ScriptParam_055].f_200);
													GATEWAY_DISABLE(Global_63541[ScriptParam_055].f_192, 1);
													Function_219(Global_34573, bLocal_195);
													if (!Function_218(&iLocal_267))
													{
														Function_217(&iLocal_267);
													}
													Function_216(&(Global_63541[255]));
													iLocal_273 = 5;
												}
												else if (iLocal_247 == 0)
												{
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_215();
														iLocal_247 = 1;
													}
												}
												else
												{
													Function_214("Abandoned3_HELP", 0x41200000, 1, 0, 2, 1, 0);
												}
											}
										}
										else
										{
											iLocal_273 = 1;
										}
									}
								}
							}
							else if (Global_74542[210].f_20 == 2)
							{
								if (!Function_211(&(Global_63541[255]), 2, 0, 1) || Function_210(2))
								{
									Function_209(&Global_63541[255] + 144, 64);
									Function_207(&(Global_63541[255]), 2, 0, 1, 1);
									iLocal_273 = 13;
								}
								else if (IS_OBJECT_VALID(Global_63541[255].f_192))
								{
									if (!IS_SCRIPTED_SPEECH_PLAYING(bLocal_195))
									{
										if (Function_203(Global_63541[255].f_192, 0, 1, 0, 0, 0))
										{
											Function_216(&(Global_63541[255]));
											iLocal_273 = 5;
											break;
										}
									}
								}
								Function_200();
								if ((iLocal_279 && !IS_ACTOR_HOGTIED(bLocal_196)) && !iLocal_207)
								{
									Function_199(&bLocal_196);
									iLocal_207 = 1;
								}
							}
							if (Global_74542[210].f_20 != 0 || Global_74542[210].f_20 != 1)
							{
								if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
								{
									if (Function_224(Global_34573, 0, 1) || !GATEWAY_UPDATE(Global_63541[ScriptParam_055].f_192))
									{
										if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200))
										{
											RELEASE_SCRIPT_USE_CONTEXT(Global_63541[ScriptParam_055].f_200);
											iLocal_273 = 1;
										}
									}
								}
							}
							Function_231(&(Global_63541[255]), 2, 10.0f, 20.0f, bLocal_261);
						}
						else if (iLocal_201 && Global_74542[210].f_20 != 0)
						{
							if (IS_OBJECT_VALID(bLocal_241))
							{
								if (Function_203(bLocal_241, 0, 1, 0, 0, 0))
								{
									SET_PLAYER_CONTROL(0, 0, 0, 0);
									ENABLE_USE_CONTEXTS(0);
									iVar0 = Global_26316.f_56 & 16384;
									Global_26316.f_56 = (Global_26316.f_56 - iVar0);
									if (IS_ACTOR_VALID(bLocal_196))
									{
										SET_ACTOR_INVULNERABILITY(bLocal_196, true);
									}
									SET_ACTOR_INVULNERABILITY(Global_34573, true);
									iLocal_273 = 5;
								}
							}
							Function_227(bLocal_196);
							if (VDIST(Function_227(bLocal_196), vLocal_211) < 1.0f)
							{
								if (IS_BLIP_VALID(bLocal_248))
								{
									REMOVE_BLIP(bLocal_248);
								}
							}
							else if (!IS_BLIP_VALID(bLocal_248))
							{
								bLocal_248 = ADD_BLIP_FOR_ACTOR(bLocal_196, 325, 0, 2, 0);
								SET_BLIP_NAME(bLocal_248, GET_ACTOR_ENUM_STRING_FROM_ENUM(334));
								SET_BLIP_MAX_DISTANCE(bLocal_248, fLocal_198);
							}
							Function_231(&(Global_63541[255]), 2, 10.0f, 20.0f, 0);
						}
						else if (!iLocal_200 && Global_74542[210].f_20 != 1)
						{
							iLocal_273 = 13;
						}
						Function_226();
						break;
					
					case 0x00000005:
						if (iLocal_200)
						{
							if (Function_218(&iLocal_267))
							{
								if (Function_197(&iLocal_267) < 2,5f)
								{
									if (Function_176("$/cutscene/RCM_04_CS03_B/RCM_04_CS03_B", &iLocal_188, 39409, 39329, 39290, 39226, 39171, 39155, 1, 1, 2, 2, 0))
									{
										DESTROY_VOLUME(bLocal_275);
										Function_175(&(Global_63541[255]));
										iLocal_273 = 9;
									}
								}
							}
							else if (Function_176("$/cutscene/RCM_04_CS03_B/RCM_04_CS03_B", &iLocal_188, 39409, 39329, 39290, 39226, 35741, 39155, 1, 1, 2, 2, 0))
							{
								Function_175(&(Global_63541[255]));
								iLocal_273 = 9;
							}
						}
						else if (iLocal_201)
						{
							if (Function_176("$/cutscene/RCM_04_CS04/RCM_04_CS04", &iLocal_188, 34035, 34028, 32813, 32751, 39171, 39155, 1, 1, 2, 2, 0))
							{
								Global_74542[210].f_20 = 1;
								Function_156(bLocal_196);
								SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bLocal_196, 0);
								SET_RCM_ACTOR_CALL_OVER_ENABLE(bLocal_196, 1, 1, true, 1, 0, 2, 1101004800, 1088421888, 1);
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								ENABLE_USE_CONTEXTS(1);
								Global_26316.f_56 |= 16384;
								if (IS_ACTOR_VALID(bLocal_196))
								{
									SET_ACTOR_INVULNERABILITY(bLocal_196, false);
								}
								SET_ACTOR_INVULNERABILITY(Global_34573, false);
								Function_155(bLocal_241);
								iLocal_273 = 7;
							}
						}
						break;
					
					case 0x00000007:
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							Function_154("abandoned4_SHORT", 0x40f00000, 1, 2, 0, 0, 0);
							Function_226();
							iLocal_273 = 13;
						}
						break;
					
					case 0x0000000D:
						if (!Function_218(&iLocal_270))
						{
							Function_217(&iLocal_270);
						}
						if (Global_74542[210].f_20 <= 2)
						{
							Function_242();
							if (!iLocal_205)
							{
								Function_132();
							}
							if (iLocal_200)
							{
								iLocal_273 = 1;
							}
						}
						else if (GET_ACTOR_HOGTIE_STATE(bLocal_196) != 3)
						{
							Function_118(4294967196, 1, 0);
							Function_117(bLocal_196);
							SET_RCM_ACTOR_CALL_OVER_ENABLE(bLocal_196, 1, 0, true, 1, 0, 2, 1101004800, 1088421888, 1);
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
							Function_116("RCM_Journal_Edit", &Global_63541[ScriptParam_055] + 4, 0x40f00000);
							iLocal_262 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[ScriptParam_055].f_140);
							bLocal_263 = false;
							while (bLocal_263 <= iLocal_262)
							{
								SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[ScriptParam_055].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[ScriptParam_055].f_140, bLocal_263), 4, 0);
								bLocal_263++;
							}
							APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[ScriptParam_055].f_140, "abandoned4a_OBJ", 0, 3, false);
							Function_115(Global_63541[ScriptParam_055].f_140, 0);
							Function_114(bLocal_196);
							CLEAR_LAST_HIT(bLocal_196);
							MEMORY_CLEAR_EVENTS(bLocal_196, 0);
							if (!IS_ACTOR_IN_VOLUME(bLocal_196, FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_saloon_set")))
							{
								HUD_CLEAR_OBJECTIVE();
								Function_154("abandoned4b_HELP", 7,5f, 1, 0, 0, 0, 0);
							}
							SET_RCM_ACTOR_CALL_OVER_ENABLE(bLocal_195, 1, 0, false, 0, 1, 2, 1101004800, 1088421888, 1);
							if (!IS_VOLUME_VALID(bLocal_251))
							{
								bLocal_251 = CREATE_VOLUME_IN_LAYOUT(bLocal_197, Function_241(), 2, -2167,622f, 16,99f, 2592,918f, 0.0f, 0.0f, 0.0f, 1.0f, 5.0f, 1.0f);
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_251);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_251);
							}
							iLocal_273 = 8;
						}
						else if (!iLocal_206)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_154("abandoned4b_HELP3", 0x40f00000, 1, 2, 0, 0, 0);
							iLocal_206 = 1;
						}
						break;
					
					case 0x00000008:
						if (IS_LAYOUTREF_VALID(Global_30616))
						{
							if (IS_ACTOR_IN_VOLUME(bLocal_196, FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_saloon_set")))
							{
								if (GET_ACTOR_HOGTIE_STATE(bLocal_196) != 3)
								{
									MEMORY_CLEAR_EVENTS(bLocal_196, 0);
									CLEAR_LAST_HIT(bLocal_196);
									if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200))
									{
										RELEASE_SCRIPT_USE_CONTEXT(Global_63541[ScriptParam_055].f_200);
									}
									ABORT_SCRIPTED_CONVERSATION(1);
									iLocal_200 = 1;
									iLocal_201 = 0;
									Global_63541[255].f_68 = GET_ASSET_ID("$/cutscene/RCM_04_CS03_b/RCM_04_CS03_b", 9);
									*(&Global_63541[255] + 100) = { StackVal, StackVal, vLocal_208 };
									Function_200();
									iLocal_273 = 1;
								}
								Function_231(&(Global_63541[255]), 2, 10.0f, 20.0f, bLocal_261);
							}
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_227(bLocal_196);
								if (VDIST(Global_34574, Function_227(bLocal_196)) > 15.0f)
								{
									if (!IS_ACTOR_HOGTIED(bLocal_196))
									{
										Function_110();
									}
								}
							}
						}
						Function_226();
						break;
					
					case 0x00000009:
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							Function_105(Global_30640[12]);
							ABORT_SCRIPTED_CONVERSATION(1);
							RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
							GIVE_OBJECT_TO_LAYOUT(bLocal_246, Global_30616);
							if (IS_ACTOR_VALID(bLocal_196) && !IS_ACTOR_IN_VOLUME(bLocal_196, FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_saloon_set")))
							{
								Function_117(bLocal_196);
								Function_114(bLocal_196);
								SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bLocal_196, 1);
								RELEASE_ACTOR(bLocal_196);
							}
							if (IS_OBJECT_VALID(bLocal_241))
							{
								Function_155(bLocal_241);
							}
							Function_154("abandoned_SHORT3", 0x40f00000, 1, 2, 0, 0, 0);
							iLocal_262 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[ScriptParam_055].f_140);
							bLocal_263 = false;
							while (bLocal_263 <= iLocal_262)
							{
								SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[ScriptParam_055].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[ScriptParam_055].f_140, bLocal_263), 4, 0);
								bLocal_263++;
							}
							Function_104(&Global_63541[255] + 144, 256);
							APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[ScriptParam_055].f_140, "abandoned7_OBJ", 0, 3, false);
							Function_115(Global_63541[ScriptParam_055].f_140, 0);
							Function_10(2, 1, 1, 0);
							SET_RCM_ACTOR_CALL_OVER_ENABLE(bLocal_195, 1, 1, true, 1, 0, 2, 1101004800, 1088421888, 1);
							ACTOR_DATA_GRAVITY_LIMIT(0);
							iLocal_273 = 10;
						}
						break;
					
					case 0x0000000A:
						if (VDIST(Global_34574, *(&Global_63541[255] + 100)) > 100.0f)
						{
							Function_8();
						}
						else
						{
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
						}
						break;
				}
				WAIT(false);
			}
			break;
	}
	Function_4(&bLocal_214);
	if (IS_ACTOR_VALID(bLocal_196))
	{
		RELEASE_ACTOR(bLocal_196);
	}
	if (IS_BLIP_VALID(bLocal_248))
	{
		REMOVE_BLIP(bLocal_248);
	}
	RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
	if (IS_OBJECT_VALID(bLocal_241))
	{
		DESTROY_OBJECT(bLocal_241);
	}
	if (IS_ACTOR_VALID(bLocal_240))
	{
		DESTROY_ACTOR(bLocal_240);
	}
	if (IS_OBJECT_VALID(bLocal_242))
	{
		RELEASE_OBJECT_REF(bLocal_242);
	}
	if (IS_OBJECT_VALID(bLocal_243))
	{
		RELEASE_OBJECT_REF(bLocal_243);
	}
	if (IS_OBJECT_VALID(bLocal_244))
	{
		RELEASE_OBJECT_REF(bLocal_244);
	}
	if (IS_OBJECT_VALID(bLocal_245))
	{
		RELEASE_OBJECT_REF(bLocal_245);
	}
	if (IS_ACTORSET_VALID(bLocal_261))
	{
		DISBAND_ACTORSET(bLocal_261);
		DESTROY_OBJECT(bLocal_261);
	}
	if (IS_VOLUME_VALID(bLocal_250))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_250);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_250);
		DESTROY_VOLUME(bLocal_250);
	}
	if (IS_VOLUME_VALID(bLocal_251))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_251);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_251);
		DESTROY_VOLUME(bLocal_251);
	}
	if (IS_GRINGO_VALID(Global_63541[255].f_208))
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_GRINGO(Global_63541[255].f_208));
	}
	Function_209(&Global_63541[255] + 144, 16384);
	if (bLocal_199)
	{
		Function_3();
	}
	Function_1(0, 0);
	return;
}

void Function_1(bool bParam0, bool bParam1) //Position: 0x1292 / 4754
{
	if (bParam0)
	{
		CAMERA_RESET(0);
	}
	if (bParam1)
	{
		Function_2(1.0f);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(bool bParam0) //Position: 0x12AD / 4781
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

void Function_3() //Position: 0x12CA / 4810
{
	RELEASE_LAYOUT_REF(bLocal_274);
	return;
}

void Function_4(int iParam0) //Position: 0x12D6 / 4822
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_5(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x12FC / 4860
{
	if (Function_7(uParam0[iParam13], 4))
	{
		if (Function_7(uParam0[iParam13], 1))
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
			Function_6(uParam0[iParam13], 1);
			Function_6(uParam0[iParam13], 2);
			Function_6(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x142A / 5162
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(int iParam0, int iParam1) //Position: 0x1444 / 5188
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8() //Position: 0x1461 / 5217
{
	if (IS_ACTOR_VALID(bLocal_196))
	{
		if (Function_9(Global_34573, bLocal_196, 1, 1, 0, 3212836864))
		{
			TASK_FLEE_ACTOR(bLocal_196, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			if (IS_ACTOR_VALID(bLocal_195))
			{
				TASK_FLEE_ACTOR(bLocal_195, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			}
		}
		if (Function_9(Global_34573, bLocal_195, 1, 1, 0, 3212836864))
		{
			TASK_FLEE_ACTOR(bLocal_195, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			if (IS_ACTOR_VALID(bLocal_196))
			{
				TASK_FLEE_ACTOR(bLocal_196, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			}
		}
	}
	return;
}

bool Function_9(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x14D9 / 5337
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

void Function_10(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x15C6 / 5574
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
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
	
	if (bParam1)
	{
		PLAY_SOUND_FRONTEND("HUD_MENU_JOURNAL_MASTER");
	}
	if (!Function_103(Global_76846, 2097152))
	{
		Function_98(Global_34573, 2097152, 1, 0);
	}
	iVar0 = iParam0;
	if (iVar0 + 1 <= 77)
	{
		if (Global_63541[iVar0 + 155].f_160)
		{
			bVar2 = (GET_DAY(GET_TIME_OF_DAY()) + GET_DAY(Global_63541[iVar0 + 155].f_156));
			bVar3 = (GET_HOUR(GET_TIME_OF_DAY()) + GET_HOUR(Global_63541[iVar0 + 155].f_156));
			iVar4 = (GET_MINUTE(GET_TIME_OF_DAY()) + GET_MINUTE(Global_63541[iVar0 + 155].f_156));
			iVar5 = (GET_SECOND(GET_TIME_OF_DAY()) + GET_SECOND(Global_63541[iVar0 + 155].f_156));
			iVar1 = MAKE_TIME_OF_DAY_EX(bVar2, bVar3, iVar4, iVar5);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
		}
		PRINTSTRING("Time next quest leg will be available: ");
		Function_97(iVar1);
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
	Function_209(&Global_63541[iParam055] + 144, 64);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_96();
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
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
	{
		Function_53(Global_63541[iParam055].f_140);
	}
	if (Global_63535.f_12 == iParam0)
	{
		Global_63535.f_20 = 0;
		Global_63535.f_16 = 999.0f;
		Global_63535.f_12 = 4294967295;
	}
	if (bParam2)
	{
		if (!Function_52(0, 0, 1, 1))
		{
			Function_15(1);
			Function_13(bParam1, 7);
		}
		else
		{
			Function_12();
		}
	}
	bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 1);
	if (IS_ACTOR_VALID(Global_63541[iParam055].f_204))
	{
		Function_11(iParam0, &iVar18, &iVar19, &iVar20, &iVar21, &iVar22, &iVar23);
		if (iParam0 == 35)
		{
			AUDIO_ADD_ALTERNATE_CONTEXT(Global_63541[iParam055].f_204, "RCM_CALL_OVER", "RCM_STILL_HERE_PRE2");
		}
		if (iParam0 == 36)
		{
			AUDIO_ADD_ALTERNATE_CONTEXT(Global_63541[iParam055].f_204, "RCM_STILL_HERE", "RCM_STILL_HERE_POST2");
		}
		if (iParam0 == 58)
		{
			AUDIO_ADD_ALTERNATE_CONTEXT(Global_63541[iParam055].f_204, "RCM_STILL_HERE", "RCM_COMPLETE_STILL_HERE");
		}
		if (iParam0 == 70)
		{
			SET_RCM_ACTOR_CALL_OVER_ENABLE(Global_63541[iParam055].f_204, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
			return;
		}
		if (iParam0 == 26)
		{
			SET_RCM_ACTOR_CALL_OVER_ENABLE(Global_63541[iParam055].f_204, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
			return;
		}
		if (iParam0 == 55)
		{
			SET_RCM_ACTOR_CALL_OVER_ENABLE(Global_63541[iParam055].f_204, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
			return;
		}
		SET_RCM_ACTOR_CALL_OVER_ENABLE(Global_63541[iParam055].f_204, 1, 1, bVar17, iVar18, iVar19, iVar20, iVar21, iVar22, iVar23);
	}
	else
	{
		PRINTSTRING("SET_RCM_ACTOR_CALL_OVER_ENABLE called with invalid actor.");
		PRINTNL();
	}
}

void Function_11(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1AFB / 6907
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
			*uParam5 = 2,5f;
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

void Function_12() //Position: 0x1C6E / 7278
{
	return;
}

void Function_13(var uParam0, var uParam1) //Position: 0x1C74 / 7284
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = uParam1;
	if (!Global_3365 && !Function_14())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_14() //Position: 0x1CB6 / 7350
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_15(bool bParam0) //Position: 0x1CBF / 7359
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_45();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_16();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_209(&Global_63095, 1);
		Function_209(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_16() //Position: 0x1D10 / 7440
{
	Function_43();
	Function_42();
	Function_42();
	Function_41();
	Function_41();
	Function_40();
	Function_40();
	Function_24();
	Function_24();
	if (!Function_14())
	{
		Function_21();
		Function_20();
		Function_19();
		Function_18();
	}
	Function_17();
	return;
}

void Function_17() //Position: 0x1D43 / 7491
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

void Function_18() //Position: 0x1E49 / 7753
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

void Function_19() //Position: 0x1E7C / 7804
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

void Function_20() //Position: 0x200A / 8202
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

void Function_21() //Position: 0x21BE / 8638
{
	Function_22(&Global_28260, 1, 0);
	return;
}

void Function_22(int iParam0, bool bParam1, var uParam2) //Position: 0x21CC / 8652
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
	
	bVar0 = Function_23();
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

var Function_23() //Position: 0x23BD / 9149
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_24() //Position: 0x23D2 / 9170
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
				iVar2 = ((Function_39((50 + iVar4)) + Function_39((183 + iVar4))) + Function_39((90 + iVar4)));
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
	Function_25(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_25(int iParam0, bool bParam1, bool bParam2) //Position: 0x246D / 9325
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
		Function_38(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_37(iParam0);
	if (bParam2)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2708 / 9992
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_36(390))), 32);
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
					bVar19 = (Function_35(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_35(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_33(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_30(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_241(), &Var9);
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

var Function_27(int iParam0) //Position: 0x2D35 / 11573
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2D46 / 11590
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0, char* cParam1) //Position: 0x2E3B / 11835
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2E54 / 11860
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_32(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_32(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x2EB9 / 11961
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_32(int iParam0, bool bParam1) //Position: 0x2ECB / 11979
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_33(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2EDD / 11997
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
	if (((Function_34(iParam0) != 19 || Function_34(iParam0) != 17) || Function_34(iParam0) != 10) || Function_34(iParam0) != 9)
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

int Function_34(int iParam0) //Position: 0x300D / 12301
{
	return Global_35278[iParam020].f_48;
}

float Function_35(int iParam0) //Position: 0x301C / 12316
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_36(int iParam0) //Position: 0x3055 / 12373
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_37(int iParam0) //Position: 0x3092 / 12434
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

int Function_38(int iParam0, bool bParam1, bool bParam2) //Position: 0x322C / 12844
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

int Function_39(bool bParam0) //Position: 0x3446 / 13382
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_40() //Position: 0x3487 / 13447
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
		iVar2 = ((Function_39((50 + iVar3) + 15) + Function_39((183 + iVar3) + 15)) + Function_39((90 + iVar3) + 15));
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
	Function_25(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_41() //Position: 0x3510 / 13584
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
			iVar2 = ((Function_39((50 + iVar3) + 8) + Function_39((183 + iVar3) + 8)) + Function_39((90 + iVar3) + 8));
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
	Function_25(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_42() //Position: 0x35A7 / 13735
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
		iVar2 = ((Function_39((50 + iVar3)) + Function_39((183 + iVar3))) + Function_39((90 + iVar3)));
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
	Function_25(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_43() //Position: 0x3626 / 13862
{
	Function_44(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_25(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_44(int iParam0, bool bParam1, int iParam2) //Position: 0x364C / 13900
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
	Function_38(iParam0, bParam1, 1);
	Function_37(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_26(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_45() //Position: 0x3856 / 14422
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_47(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_47(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_46(StackVal, StackVal, vVar0))
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

bool Function_46(vector3 vParam0) //Position: 0x38F7 / 14583
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_47(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x390F / 14607
{
	int iVar0;
	
	iVar0 = Function_50(uParam2, uParam3);
	if (Function_49(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_104(&Global_63095, 1);
			Function_209(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_104(&Global_63095, 2);
			Function_209(&Global_63095, 1);
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
		Function_104(&Global_63095, 2);
		Function_209(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_48();
	return StackVal, StackVal, Function_48();
}

vector3 Function_48() //Position: 0x39F6 / 14838
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_49(int iParam0) //Position: 0x39FF / 14847
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_50(bool bParam0, bool bParam1) //Position: 0x3A15 / 14869
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
				fVar2 = Function_51(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_51(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_49(bVar0) && !bParam1)
	{
		bVar0 = Function_50(bParam0, 1);
	}
	return bVar0;
}

float Function_51(vector3 vParam0, vector3 vParam3) //Position: 0x3ADC / 15068
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_52(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3AF9 / 15097
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

void Function_53(bool bParam0) //Position: 0x3B9D / 15261
{
	bool bVar0;
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
	if (Function_14())
	{
		return;
	}
	bVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	if (bVar0 == 4)
	{
		if (bParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_95(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(bParam0);
	switch (bVar0)
	{
		case 0x00000004:
			if (Global_28184)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_27774)
			{
				if (Function_94(iVar6) && !Function_92(iVar6))
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
				Function_91();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
				{
					Function_90(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
			{
				Function_85();
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
				if (!Function_84(Global_63541[iVar155].f_144, 2048))
				{
					iVar3 = iVar1;
					if (Function_69(&(Global_63541[iVar155]), iVar3))
					{
						Function_104(&Global_63541[iVar155] + 144, 64);
						Function_65(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_54(&(Global_63541[iVar155]), 7);
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

void Function_54(int iParam0, int iParam1) //Position: 0x3D3F / 15679
{
	int iVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_84(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	iVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_241(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, iVar0, iVar0, iVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_55(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_55(int iParam0) //Position: 0x3DF9 / 15865
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_241(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_64(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
}

int Function_56(var uParam0, int iParam1) //Position: 0x3E9B / 16027
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
	Function_60(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_57(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_57(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x4000 / 16384
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_58(bool bParam0) //Position: 0x409B / 16539
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("0", &cVar8, ""), 4);
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

struct<32> Function_59(char* cParam0, char* cParam1, char* cParam2) //Position: 0x4105 / 16645
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_60(bool bParam0) //Position: 0x4124 / 16676
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
						Function_63(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_61(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_63(iVar0);
						}
					}
					else if (Function_61(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_63(iVar0);
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
			Function_63(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_61(bool bParam0, vector3 vParam1) //Position: 0x4285 / 17029
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_62(bParam0);
		vVar0 = { StackVal, StackVal, Function_62(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_62(bool bParam0) //Position: 0x42FF / 17151
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

void Function_63(int iParam0) //Position: 0x4369 / 17257
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

bool Function_64(int iParam0) //Position: 0x43CA / 17354
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_65(int iParam0, int iParam1) //Position: 0x43E0 / 17376
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0,5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if (((StackVal && Function_67(StackVal, Function_68(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_66(iParam1)) || Global_74542[iParam110].f_12 != 1)
	{
		iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(iParam0->f_184, 1,25f);
		iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
		UNK_0xFF3DB575(iParam0->f_188, 1);
		SET_BLIP_PRIORITY(iParam0->f_188, true);
		SET_BLIP_COLOR(iParam0->f_188, 0,58f, 0,35f, 0,72f, fVar3);
		Global_74542[iParam110].f_12 = 1;
	}
	else
	{
		fVar3 = 0,5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
	}
	SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
	SET_BLIP_COLOR(iParam0->f_184, 0,58f, 0,35f, 0,72f, fVar3);
	SET_BLIP_PRIORITY(iParam0->f_184, 3);
	return;
}

int Function_66(bool bParam0) //Position: 0x4525 / 17701
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_67(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7) //Position: 0x4551 / 17745
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, uParam7);
}

bool Function_68(int iParam0) //Position: 0x456D / 17773
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_69(int iParam0, int iParam1) //Position: 0x4582 / 17794
{
	if (Function_84(Global_63541[iParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_68(iParam1))
	{
		Function_104(&Global_63541[iParam155] + 144, 64);
		return 1;
	}
	if ((Function_83(iParam1) || Function_82(iParam1)) || Function_210(iParam1))
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
	if (Function_64(iParam0->f_132))
	{
		if (Function_81(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_79(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_78(iParam0))
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
	if (!Function_70(iParam0, iParam1))
	{
		return 0;
	}
	Function_104(&Global_63541[iParam155] + 144, 64);
	return 1;
}

bool Function_70(int iParam0, int iParam1) //Position: 0x4697 / 18071
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_77(iParam0 + 172, 4))
		{
			if (!Function_76(iParam1))
			{
				return 0;
			}
		}
		if (Function_77(iParam0 + 172, 1))
		{
			if (!Function_82(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_77(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_74(iParam0->f_176);
			if (Function_71(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_77(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_71(iParam0->f_164))
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
				if (!Function_77(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_77(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_77(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_77(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_77(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_77(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_71(int iParam0) //Position: 0x47DB / 18395
{
	if (!Function_73(iParam0))
	{
		return 0;
	}
	if (!Function_72(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_72(int iParam0) //Position: 0x47FF / 18431
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_73(int iParam0) //Position: 0x4814 / 18452
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_74(int iParam0) //Position: 0x482B / 18475
{
	if (!Function_75(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_75(int iParam0) //Position: 0x4845 / 18501
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_76(int iParam0) //Position: 0x485B / 18523
{
	return StackVal;
}

bool Function_77(var uParam0, int iParam1) //Position: 0x486B / 18539
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_78(int iParam0) //Position: 0x4887 / 18567
{
	if (!iParam0->f_152)
	{
		if ((((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204)) || IS_PLAYER_TARGETTING_ACTOR(false, iParam0->f_204, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_79(int iParam0) //Position: 0x48CE / 18638
{
	if (!Function_80(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_84(Global_63541[iParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_103(Global_76847, 0x8000000))
			{
				Function_98(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_80(int iParam0) //Position: 0x4927 / 18727
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_81(var uParam0, int iParam1) //Position: 0x4943 / 18755
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(int iParam0) //Position: 0x495F / 18783
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_83(int iParam0) //Position: 0x4974 / 18804
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

bool Function_84(var uParam0, bool bParam1) //Position: 0x4989 / 18825
{
	return (uParam0 && bParam1) == 0;
}

void Function_85() //Position: 0x4996 / 18838
{
	if (Function_89(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_88(Global_28180);
			Global_28180.f_8 = Function_86(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_88(Global_28180);
			Global_28180.f_8 = Function_86(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_86(int iParam0, int iParam1) //Position: 0x4A11 / 18961
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
					if (Function_87(6, 0) || Function_87(12, 0))
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
					if (Function_82(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_87(5, 0))
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
					if (Function_82(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_82(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_82(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_82(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_87(26, 0))
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
					if (Function_82(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_82(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_82(27) && iVar18)
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
					if (Function_82(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_82(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_82(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_82(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_87(17, 0) && iVar15)
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
					if (Function_82(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_87(6, 0) && Function_82(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_82(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_87(9, 0) && Function_82(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_82(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_87(8, 0) && iVar19)
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
	if (Function_46(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_46(StackVal, StackVal, vVar3))
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
	if (!Function_46(StackVal, StackVal, vVar3))
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

bool Function_87(int iParam0, bool bParam1) //Position: 0x5602 / 22018
{
	int iVar0;
	
	iVar0 = Function_74(iParam0);
	if (!Function_73(iVar0))
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

int Function_88(int iParam0) //Position: 0x563F / 22079
{
	int iVar0;
	int iVar1;
	
	if (!Function_89(iParam0))
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

bool Function_89(int iParam0) //Position: 0x568E / 22158
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_90(int iParam0) //Position: 0x56A4 / 22180
{
	if (Global_28180 == iParam0)
	{
		return 1;
	}
	if (!Function_89(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_92(iParam0))
	{
		return 0;
	}
	if (!Function_94(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_91() //Position: 0x570D / 22285
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

bool Function_92(int iParam0) //Position: 0x5730 / 22320
{
	if (!Function_89(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_93(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_93(int iParam0, int iParam1) //Position: 0x5781 / 22401
{
	int iVar0;
	
	if (!Function_89(iParam0))
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

bool Function_94(int iParam0) //Position: 0x57AE / 22446
{
	if (!Function_89(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_93(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_95(bool bParam0) //Position: 0x5800 / 22528
{
	bool bVar0;
	
	if (bParam0 != 4294967295 || bParam0 != 0)
	{
		return;
	}
	bVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	switch (bVar0)
	{
		case 0x00000004:
			Function_91();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_96() //Position: 0x583A / 22586
{
	bool bVar0;
	
	bVar0 = Function_39(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

void Function_97(bool bParam0) //Position: 0x5898 / 22680
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

void Function_98(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x58DE / 22750
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_100(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_99(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_99(char* cParam0, int iParam1) //Position: 0x594A / 22858
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

bool Function_100(bool bParam0, var uParam1, int iParam2) //Position: 0x5981 / 22913
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
		if (Function_102(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_101(uVar0))
		{
			case 0x00000002:
				if (!Function_103(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_101(char* cParam0) //Position: 0x59F9 / 23033
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

int Function_102(int iParam0) //Position: 0x5A9A / 23194
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_209(&iVar1, 2147483648);
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

bool Function_103(var uParam0, int iParam1) //Position: 0x5AD7 / 23255
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_104(var uParam0, int iParam1) //Position: 0x5AEA / 23274
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_105(int iParam0) //Position: 0x5AF9 / 23289
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_81(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_109(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_108(473, 1, 0, 0);
		iVar0 = Function_107(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_108(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_108(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_108(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_106(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_106(7, 30);
	}
	if (Function_35(473) <= Function_36(473))
	{
		if (!Function_14())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

void Function_106(int iParam0, bool bParam1) //Position: 0x5BF8 / 23544
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

var Function_107(int iParam0) //Position: 0x5C5F / 23647
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_64(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

int Function_108(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5CB7 / 23735
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
	Function_38(iParam0, TO_FLOAT(bParam1), 1);
	Function_37(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_109(var uParam0, var uParam1) //Position: 0x5ED7 / 24279
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

void Function_110() //Position: 0x5EE6 / 24294
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "aband_Way2Saloon_v1_AA", "aband_Way2Saloon_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "aband_Way2Saloon_v1_AB", "aband_Way2Saloon_v1_AB", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "aband_Way2Saloon_v1_AC1", "aband_Way2Saloon_v1_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "aband_Way2Saloon_v1_AC2", "aband_Way2Saloon_v1_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "aband_Way2Saloon_v1_AD", "aband_Way2Saloon_v1_AD", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "aband_Way2Saloon_v1_AE", "aband_Way2Saloon_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "aband_Way2Saloon_v1_AF", "aband_Way2Saloon_v1_AF", 2, 1, 0, 0, 1);
		SET_MAX_SCRIPTED_CONVERSATION_DISTANCE(10.0f);
		Function_111(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_111(int iParam0) //Position: 0x60A9 / 24745
{
	Function_112(0, Global_34573, iParam0, 0);
	Function_112(1, bLocal_195, iParam0, 0);
	Function_112(2, bLocal_196, iParam0, 0);
	return;
}

void Function_112(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x60CB / 24779
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_84(uParam2, Function_113(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

var Function_113(bool bParam0) //Position: 0x60F0 / 24816
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_114(bool bParam0) //Position: 0x60FC / 24828
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_REMOVE(bParam0, "nocrime");
	}
	return;
}

void Function_115(bool bParam0, bool bParam1) //Position: 0x612E / 24878
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

void Function_116(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6153 / 24915
{
	PRINT_OBJECTIVE_FORMAT(bParam2, iParam0, iParam1, "", "", "", "", 1, 0, 1, 0);
	if (!Function_103(Global_76846, 2097152))
	{
		Function_98(Global_34573, 2097152, 1, 0);
	}
	return;
}

void Function_117(bool bParam0) //Position: 0x618D / 24973
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

void Function_118(int iParam0, bool bParam1, bool bParam2) //Position: 0x61B9 / 25017
{
	int iVar0;
	bool bVar1;
	
	if (Function_131(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_39(1);
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
			Function_130(1, bVar1);
			if (!bParam2)
			{
				if (!Function_103(Global_76848, 1))
				{
					Function_98(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_128(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_103(Global_76848, 2))
				{
					Function_98(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_108(1, bVar1, 0, 0);
	}
	else
	{
		Function_127(1, (4294967295 * bVar1), 0);
	}
	if (Function_39(1) <= 4294962296)
	{
		Function_25(1, 4294962296, 0);
	}
	else if (Function_39(1) >= 5000)
	{
		Function_25(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_35(1));
	iVar0 = Function_39(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_120(2, Function_126(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_120(2, Function_126(Global_12976.f_152), 0);
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
				Function_120(2, Function_126(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_120(2, Function_126(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_120(2, Function_126(Global_12976.f_152), 1);
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
				Function_120(2, Function_126(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_120(2, Function_126(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_120(2, Function_126(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_120(2, Function_126(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_120(2, Function_126(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_120(2, Function_126(Global_12976.f_152), 1);
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
				Function_120(2, Function_126(Global_12976.f_152), 0);
			}
			break;
	}
	Function_119(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_119(int iParam0, int iParam1) //Position: 0x64CE / 25806
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

int Function_120(int iParam0, char* cParam1, bool bParam2) //Position: 0x672C / 26412
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
	Function_124(iParam0, cParam1, 0, 1);
	iVar1 = Function_121();
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

int Function_121() //Position: 0x68B1 / 26801
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
	Function_122();
	return 0;
}

void Function_122() //Position: 0x6950 / 26960
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
		Function_123(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_123(int iParam0) //Position: 0x69FF / 27135
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

int Function_124(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x6A5D / 27229
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
		Function_125(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_125(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x6DAF / 28079
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

var Function_126(int iParam0) //Position: 0x6E32 / 28210
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

int Function_127(int iParam0, bool bParam1, int iParam2) //Position: 0x6ED5 / 28373
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
	Function_37(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_128(int iParam0, bool bParam1) //Position: 0x70D0 / 28880
{
	bool bVar0;
	int iVar1;
	
	Function_127(iParam0, bParam1, 0);
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
	iVar1 = Function_129(iParam0, 4294967295);
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
	iVar1 = Function_121();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_129(int iParam0, int iParam1) //Position: 0x726C / 29292
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

int Function_130(int iParam0, bool bParam1) //Position: 0x72AD / 29357
{
	bool bVar0;
	int iVar1;
	
	Function_108(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_129(iParam0, 4294967295);
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
	iVar1 = Function_121();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_131(int iParam0) //Position: 0x744A / 29770
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_132() //Position: 0x7459 / 29785
{
	if (Function_153(&iLocal_270, 1.0f))
	{
		Function_227(bLocal_196);
		if (!Function_152(bLocal_196, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Global_34574, Function_227(bLocal_196)) < 30.0f)
		{
			Function_117(bLocal_196);
			RELEASE_ACTOR(bLocal_196);
			iLocal_205 = 1;
			Function_151(&iLocal_270);
			return;
		}
		if (Global_74542[210].f_20 <= 2)
		{
			if (GET_ACTOR_UNDER_RETICLE(Global_34573, 0) == bLocal_196)
			{
				if (!Function_218(&bLocal_264))
				{
					Function_217(&bLocal_264);
				}
				if (Function_197(&bLocal_264) < 0,6f)
				{
					if (Function_150(bLocal_196))
					{
					}
					if (GET_WEAPON_IN_HAND(Global_34573) == 21)
					{
					}
					else
					{
						TASK_PRIORITY_SET(bLocal_196, true);
						TASK_CROUCH(bLocal_196, 30.0f);
						Global_74542[210].f_20 = 2;
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_148();
						}
						Function_151(&bLocal_264);
						Function_199(&bLocal_196);
						return;
					}
				}
			}
			if (Function_218(&bLocal_264))
			{
				Function_151(&bLocal_264);
			}
			if (IS_ACTOR_BEING_DRAGGED(bLocal_196, 1.0f))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_196, FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_saloon_set")))
				{
					Global_74542[210].f_20 = 2;
					Function_199(&bLocal_196);
					return;
				}
			}
			if (IS_ACTOR_HOGTIED(bLocal_196))
			{
				DECOR_SET_BOOL(bLocal_196, "wifeHogtied", true);
				if (!iLocal_280 && GET_ACTOR_HOGTIE_STATE(bLocal_196) != 0)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_154("abandoned4b_HELP2", 0x40f00000, 1, 2, 0, 0, 0);
					iLocal_280 = 1;
				}
				if (IS_ACTOR_IN_VOLUME(bLocal_196, FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_saloon_set")))
				{
					Function_199(&bLocal_196);
					iLocal_279 = 1;
					Global_74542[210].f_20 = 2;
					return;
				}
			}
			if (DECOR_GET_BOOL(bLocal_196, "wifeHogtied"))
			{
				DECOR_SET_BOOL(bLocal_196, "wifeHogtied", false);
				ACTOR_HOLSTER_WEAPON(Global_34573, 1);
				MEMORY_CLEAR_ALL(bLocal_196);
				MEMORY_CLEAR_EVENTS(bLocal_196, 1);
				CLEAR_LAST_HIT(bLocal_196);
				TASK_FLEE_ACTOR(bLocal_196, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				Function_146(&iLocal_270);
				return;
			}
			if (GET_LAST_ATTACKER(bLocal_196) == Global_34573)
			{
				if (GET_LAST_HIT_FLAGS(bLocal_196) == 2)
				{
					Global_74542[210].f_20 = 2;
					Function_148();
					CLEAR_LAST_HIT(bLocal_196);
					Function_199(&bLocal_196);
					return;
				}
				if (GET_WEAPON_IN_HAND(Global_34573) == 21)
				{
					CLEAR_LAST_HIT(bLocal_196);
				}
				else if (((!Function_145(bLocal_196) && !Function_150(bLocal_196)) && GET_WEAPON_IN_HAND(Global_34573) == 4294967295) && !Function_144("hogtie_pickup"))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_135(1, 6, Global_34573, bLocal_196, 0);
					Function_133();
				}
				if (IS_ACTOR_DEAD(bLocal_196) || !IS_ACTOR_ALIVE(bLocal_196))
				{
					Function_135(1, 11, Global_34573, bLocal_196, 0);
					Function_133();
				}
			}
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bLocal_196, 1.0f))
			{
				Global_74542[210].f_20 = 2;
				Function_148();
				Function_199(&bLocal_196);
				return;
			}
		}
		Function_146(&iLocal_270);
	}
	return;
}

void Function_133() //Position: 0x7715 / 30485
{
	ABORT_SCRIPTED_CONVERSATION(0);
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	if (!Function_82(2))
	{
		Function_134(2);
	}
	if (Global_74542[210].f_20 == 2)
	{
		Global_74542[210].f_20 = 1;
	}
	if (IS_ACTOR_VALID(bLocal_196))
	{
		if (!IS_ACTOR_DEAD(bLocal_196) || IS_ACTOR_ALIVE(bLocal_196))
		{
			TASK_FLEE_ACTOR(bLocal_196, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		}
		Function_117(bLocal_196);
		Function_114(bLocal_196);
		SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bLocal_196, 1);
	}
	if (IS_OBJECT_VALID(bLocal_241))
	{
		Function_155(bLocal_241);
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Function_104(&Global_63541[255] + 144, 128);
	TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
	return;
}

void Function_134(int iParam0) //Position: 0x77A1 / 30625
{
	char* cVar0[32];
	
	Global_74542[iParam010] = 7;
	Global_74542[iParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam010] + 4, Global_63541[iParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Fail", &Global_63541[iParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
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

var Function_135(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7903 / 30979
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_143(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_142(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_138(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	bVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(bVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(bVar3, iParam1);
		SET_CRIME_VICTIM(bVar3, bParam3);
		SET_CRIME_CRIMINAL(bVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(bVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_241(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_136();
		}
		SET_CRIME_FACTION(StackVal, bVar3);
		SET_CRIME_TALLIED(bVar3, 0);
		SET_CRIME_COUNTER(bVar3, 1);
		SET_CRIME_WORLD_REGION(bVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(bVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(bVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return bVar3;
}

void Function_136() //Position: 0x7B93 / 31635
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_137(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_137(bool bParam0, bool bParam1) //Position: 0x7BF6 / 31734
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_138(bool bParam0) //Position: 0x7C25 / 31781
{
	if (Function_141(256))
	{
		return 0;
	}
	if (Function_141(262144))
	{
		return 0;
	}
	if (Function_140())
	{
		return 0;
	}
	if (!Function_141(1))
	{
		return 0;
	}
	if (!Function_141(4096))
	{
		return 0;
	}
	if (bParam0 && Function_139(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_141(2048))
	{
		return 0;
	}
	if (Function_14() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_139(int iParam0) //Position: 0x7C9B / 31899
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_140() //Position: 0x7CAC / 31916
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_141(int iParam0) //Position: 0x7CC5 / 31941
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_142(int iParam0) //Position: 0x7CE3 / 31971
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_143(int iParam0) //Position: 0x7CF9 / 31993
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_144(char* cParam0) //Position: 0x7D0E / 32014
{
	void fVar0;
	char* cVar1;
	char* cVar2[64];
	char* cVar18[64];
	
	fVar0 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
	if (IS_GRINGO_VALID(fVar0))
	{
		cVar1 = GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(fVar0));
		strcpy(&cVar18, cParam0, 64);
		strcpy(&cVar2, cVar1, 64);
		STRING_LOWER(&cVar2);
		STRING_LOWER(&cVar18);
		if (STRINGS_ARE_EQUAL(&cVar2, &cVar18) || STRING_CONTAINS_STRING(&cVar2, &cVar18))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_145(bool bParam0) //Position: 0x7D5C / 32092
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

void Function_146(int iParam0) //Position: 0x7D67 / 32103
{
	Function_147(iParam0, 0.0f);
	return;
}

void Function_147(var uParam0, float fParam1) //Position: 0x7D73 / 32115
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_104(uParam0, 1);
	Function_209(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_148() //Position: 0x7D94 / 32148
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (!IS_ACTOR_HOGTIED(bLocal_196))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_196, 10.0f))
			{
				Function_149();
			}
		}
	}
	return;
}

void Function_149() //Position: 0x7DBD / 32189
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Aband_MessHerUp_v1_AA1", "Aband_MessHerUp_v1_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Aband_MessHerUp_v1_AA2", "Aband_MessHerUp_v1_AA2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Aband_MessHerUp_v1_AB", "Aband_MessHerUp_v1_AB", 2, 1, 0, 0, 1);
		Function_111(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_150(bool bParam0) //Position: 0x7E86 / 32390
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_151(bool bParam0) //Position: 0x7E94 / 32404
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

bool Function_152(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x7EA8 / 32424
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

bool Function_153(int iParam0, float fParam1) //Position: 0x7EC2 / 32450
{
	if (Function_218(iParam0))
	{
		if (Function_197(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_154(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x7EDE / 32478
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

void Function_155(bool bParam0) //Position: 0x7F31 / 32561
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

void Function_156(bool bParam0) //Position: 0x7FBB / 32699
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

int Function_157() //Position: 0x7FEF / 32751
{
	TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2170,479f, 16,449f, 2620,644f, 187,679f, 1, true, 1);
	SNAP_ACTOR_TO_GRINGO(bLocal_196, bLocal_242, "UseCase1", false, 0, 0);
	return 1;
}

int Function_158() //Position: 0x802D / 32813
{
	if (!iLocal_282)
	{
		Function_159(StackVal, StackVal, vLocal_252, bLocal_249);
		iLocal_282 = 1;
	}
	return 1;
}

void Function_159(vector3 vParam0) //Position: 0x8048 / 32840
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<9> Var3;
	
	vVar3 = { StackVal, StackVal, vParam0 };
	Function_161(0, 0x40400000);
	if (!Function_46(StackVal, StackVal, vParam0))
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
					vVar3 = (vParam0.x + 1,5f);
					vVar3.f_8 = (vParam0.z + 1,5f);
				}
			}
			else if (Function_160(bVar1, Global_34573) > 4.0f)
			{
				TELEPORT_ACTOR(bVar1, &vVar3, 1, 1, 1);
				vVar3 = (vParam0.x + 1,5f);
				vVar3.f_8 = (vParam0.z + 1,5f);
			}
			TASK_CLEAR(bVar1);
			TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bVar1, true);
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
						vVar3 = (vParam0.x + 2,5f);
						vVar3.f_8 = (vParam0.z + 2,5f);
					}
				}
				else if (Function_160(bVar0, Global_34573) > 4.0f)
				{
					TELEPORT_ACTOR(bVar0, &vVar3, 1, 1, 1);
					vVar3 = (vParam0.x + 2,5f);
					vVar3.f_8 = (vParam0.z + 2,5f);
				}
				TASK_CLEAR(bVar0);
				TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bVar0, true);
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

float Function_160(bool bParam0, bool bParam1) //Position: 0x81CE / 33230
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

void Function_161(bool bParam0, float fParam1) //Position: 0x82BF / 33471
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
	{
		TASK_CLEAR(Global_12976.f_36);
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, true);
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

void Function_162() //Position: 0x83BD / 33725
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_163() //Position: 0x83EF / 33775
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

int Function_164() //Position: 0x84EC / 34028
{
	return 1;
}

int Function_165() //Position: 0x84F3 / 34035
{
	if (!IS_VOLUME_VALID(bLocal_249))
	{
		bLocal_249 = CREATE_VOLUME_IN_LAYOUT(bLocal_197, "tempcutscenevol", 2, vLocal_255, 0.0f, 0.0f, 0.0f, 7.0f, 7.0f, 7.0f);
	}
	Function_168(0, 0, 1, 1, 1, 1, 1, bLocal_249, 1, 1, 1, 1);
	Function_166(StackVal, StackVal, bLocal_197, vLocal_258, &bLocal_249, 0, 0.0f, 0.0f, 0.0f, 1, 1);
	return 1;
}

void Function_166(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, float fParam6, float fParam7, float fParam8, bool bParam9, bool bParam10) //Position: 0x8549 / 34121
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
				Function_167(bVar1, bParam0);
			}
		}
		if (!Function_46(StackVal, StackVal, vVar2))
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

void Function_167(bool bParam0, bool bParam1) //Position: 0x87B7 / 34743
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

void Function_168(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x882C / 34860
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
	Function_171();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_23();
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
			if (Function_14())
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
				Function_227(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_241(), 2, Function_227(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_108(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_170()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_170()));
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
	if (Function_80(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_80(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
}

void Function_169(int iParam0) //Position: 0x8AD5 / 35541
{
	int iVar0;
	
	if (Function_84(iParam0, 1) && Function_84(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_170() //Position: 0x8B09 / 35593
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

void Function_171() //Position: 0x8B88 / 35720
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_172() //Position: 0x8B9D / 35741
{
	Function_173(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
	DESTROY_VOLUME(bLocal_249);
	return 1;
}

void Function_173(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x8BB6 / 35766
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
		bVar0 = Function_23();
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
			if (Function_14())
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
		Function_108(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_171();
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
	Function_174(bParam9);
}

void Function_174(bool bParam0) //Position: 0x8CA6 / 36006
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

void Function_175(bool bParam0) //Position: 0x8D4B / 36171
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	ENABLE_USE_CONTEXTS(1);
	Global_26316.f_56 |= 16384;
	if (IS_ACTOR_VALID(bParam0->f_204) && bParam0->f_136 == 358)
	{
		SET_ACTOR_INVULNERABILITY(bParam0->f_204, false);
	}
	SET_ACTOR_INVULNERABILITY(Global_34573, false);
	return;
}

bool Function_176(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x8D8C / 36236
{
	var uVar0;
	var uVar7;
	bool bVar8;
	
	if (!DECOR_CHECK_EXIST(Global_34573, "RCM_Cutscene_HideActors"))
	{
		Function_189();
		Function_188();
		DECOR_SET_BOOL(Global_34573, "RCM_Cutscene_HideActors", true);
	}
	SET_RCM_ACTOR_CALL_OVER_SUPPRESS(2.0f);
	bVar8 = Function_177(uParam0, iParam1, &uVar0, &uVar7, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 0, iParam8, iParam9, iParam10, iParam11, iParam12, 1);
	if (bVar8)
	{
		DECOR_REMOVE(Global_34573, "RCM_Cutscene_HideActors");
		return 1;
	}
	return 0;
}

int Function_177(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0x8E35 / 36405
{
	if (!bParam15)
	{
		Function_185(iParam1, uParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*uParam3 != 99 && (Function_184(iParam2) || iParam2->f_24 < 1))
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
				Function_146(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_183())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_182(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_146(iParam1 + 4);
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
					Function_182(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_197(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_197(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_180(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_182(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_146(iParam1 + 4);
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
						Function_2(1.0f);
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
						Function_178();
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
					Function_174(1);
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
			if ((HUD_IS_FADED() && *uParam3 == 99) && !Function_184(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_178() //Position: 0x9449 / 37961
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_179();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_179() //Position: 0x948E / 38030
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_180(bool bParam0, bool bParam1) //Position: 0x94A0 / 38048
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_241(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_181(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_181(bool bParam0) //Position: 0x9520 / 38176
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == bParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

int Function_182(bool bParam0) //Position: 0x954F / 38223
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
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
		bVar0++;
	}
	return 1;
}

bool Function_183() //Position: 0x9607 / 38407
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ALIVE(bVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_184(int iParam0) //Position: 0x9641 / 38465
{
	return iParam0->f_20;
}

void Function_185(var uParam0, int iParam1) //Position: 0x964B / 38475
{
	Function_186(uParam0, iParam1, 0);
	return;
}

void Function_186(var uParam0, bool bParam1, bool bParam2) //Position: 0x9659 / 38489
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
			Function_187(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_108(20, 1, 0, 0);
		*uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 0))
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
						Function_187(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_108(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

void Function_187(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x97A5 / 38821
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

int Function_188() //Position: 0x97CE / 38862
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

void Function_189() //Position: 0x9819 / 38937
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	bVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_241(), Global_63535, 15, 0);
	vVar3 = { StackVal, StackVal, Global_34574 };
	bVar6 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_241(), 2, vVar3, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	LOCATE_ACTORS_IN_VOLUME(bVar6, bVar2, 0, 1);
	bVar7 = false;
	while (bVar7 < (GET_OBJECTSET_SIZE(bVar2) - 1))
	{
		bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, bVar2));
		if (IS_ACTOR_VALID(bVar0))
		{
			bVar8 = false;
			while (bVar8 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar8);
				if (GET_ACTOR_ENUM(bVar1) == GET_ACTOR_ENUM(bVar0))
				{
					if (!STRINGS_ARE_EQUAL(GET_LAYOUT_NAME(GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bVar0))), "cutscene layout"))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar0), bVar0);
					}
				}
				bVar8++;
			}
		}
		bVar7++;
	}
	DISBAND_OBJECTSET(bVar2);
	DESTROY_OBJECTSET(bVar2);
	DESTROY_VOLUME(bVar6);
	return;
}

int Function_190() //Position: 0x98F3 / 39155
{
	HUD_FADE_IN(1.0f, 1065353216);
	return 1;
}

int Function_191() //Position: 0x9903 / 39171
{
	Function_173(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
	REMOVE_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_196, bLocal_249);
	DESTROY_VOLUME(bLocal_249);
	if (IS_VOLUME_VALID(bLocal_251))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_251);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_251);
		DESTROY_VOLUME(bLocal_251);
	}
	return 1;
}

int Function_192() //Position: 0x993A / 39226
{
	TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2166,596f, 16,875f, 2594,603f, 150,125f, 1, true, 1);
	SET_DRAW_ACTOR(bLocal_195, true);
	SET_DRAW_ACTOR(bLocal_240, false);
	ENABLE_MOVER(bLocal_240);
	DESTROY_ACTOR(bLocal_240);
	SHOW_PHYSINST(bLocal_283);
	return 1;
}

int Function_193() //Position: 0x997A / 39290
{
	if (!iLocal_281)
	{
		SET_DRAW_ACTOR(bLocal_195, false);
		SET_DRAW_ACTOR(bLocal_240, true);
		Function_159(StackVal, StackVal, vLocal_252, bLocal_249);
		iLocal_281 = 1;
	}
	return 1;
}

int Function_194() //Position: 0x99A1 / 39329
{
	Function_195(bLocal_261);
	return 1;
}

int Function_195(bool bParam0) //Position: 0x99AF / 39343
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(bParam0))
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar1), bVar1);
			}
			bVar0++;
		}
		return 1;
	}
	return 0;
}

int Function_196() //Position: 0x99F1 / 39409
{
	vector3 vVar0;
	
	bLocal_249 = FIND_VOLUME_IN_LAYOUT(bLocal_197, "tempcutscenevol");
	if (!IS_VOLUME_VALID(bLocal_249))
	{
		bLocal_249 = CREATE_VOLUME_IN_LAYOUT(bLocal_197, "tempcutscenevol", 2, -2167,277f, 17,019f, 2593,75f, 0.0f, 0.0f, 0.0f, 4,5f, 5.0f, 4.0f);
	}
	Function_168(0, 0, 1, 1, 1, 1, 1, bLocal_249, 1, 1, 1, 1);
	Function_166(StackVal, StackVal, bLocal_197, vLocal_208, &bLocal_249, 0, 0.0f, 0.0f, 0.0f, 1, 1);
	if (!IS_ACTOR_HOGTIED(bLocal_196))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_196, bLocal_249))
		{
			TELEPORT_ACTOR_WITH_HEADING(bLocal_196, -2170,396f, 16,88f, 2592,72f, 301,374f, 0, true, 1);
		}
		ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_196, bLocal_249);
	}
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(Global_63541[255].f_208), &vVar0);
	bLocal_283 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar0, 4.0f, "p_gen_chair05x", 1);
	if (IS_PHYSINST_VALID(bLocal_283))
	{
		HIDE_PHYSINST(bLocal_283);
	}
	else
	{
		LOG_ERROR("Failed to hide chair2!");
	}
	return 1;
}

float Function_197(int iParam0) //Position: 0x9B00 / 39680
{
	if (Function_218(iParam0))
	{
		if (Function_198(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_198(int iParam0) //Position: 0x9BC8 / 39880
{
	return Function_84(*iParam0, 2);
}

void Function_199(bool bParam0) //Position: 0x9BD5 / 39893
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	if (IS_ACTOR_VALID(*bParam0) && !IS_ACTOR_HOGTIED(*bParam0))
	{
		vVar0 = { -2168,783f, 16,874f, 2588,506f };
		vVar3 = { 0.0f, 167,97f, 0.0f };
		if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_246)))
		{
			bLocal_246 = CREATE_GRINGO_IN_LAYOUT(bLocal_197, "gWeeping", "$/content/scripting/gringo/SimpleGringo/sit_headinhands_n_any", vVar0, vVar3);
		}
		MEMORY_CLEAR_ALL(*bParam0);
		CLEAR_LAST_HIT(*bParam0);
		vVar6 = { -2170,625f, 16,88f, 2592,106f };
		if (!IS_ACTOR_HOGTIED(*bParam0))
		{
			bLocal_276 = TASK_SEQUENCE_OPEN();
			TASK_CLEAR(false);
			TASK_GO_NEAR_COORD(false, &vVar6, 3.0f, true);
			TASK_FACE_ACTOR(false, bLocal_195, 0, 3212836864);
			TASK_ACTION_PERFORM(false, "default_character_Main/AI_Taunt/TauntIdle/TauntC/TauntC");
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(bLocal_246), "UseCase1", 4294967295, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(*bParam0, bLocal_276);
			TASK_SEQUENCE_RELEASE(bLocal_276, 1);
			TASK_PRIORITY_SET(*bParam0, true);
		}
	}
	return;
}

void Function_200() //Position: 0x9D25 / 40229
{
	if (GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(bLocal_196, bLocal_276) == 2)
	{
		if (iLocal_277 == 0)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_202();
				iLocal_277 = 1;
			}
		}
	}
	if (GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(bLocal_196, bLocal_276) == 3)
	{
		if (iLocal_278 == 0)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_201();
				iLocal_278 = 1;
			}
		}
	}
	return;
}

void Function_201() //Position: 0x9D6D / 40301
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Aband_BringsBakWife_v1_AA", "Aband_BringsBakWife_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Aband_BringsBakWife_v1_AB", "Aband_BringsBakWife_v1_AB", true, 1, 1, 0, 1);
		Function_111(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_202() //Position: 0x9E09 / 40457
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Aband_SpotsHusband", "Aband_SpotsHusband", true, 1, 1, 0, 1);
		Function_111(6);
		START_SCRIPT_CONVERSATION(true, 0);
	}
	return;
}

bool Function_203(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x9E56 / 40534
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
			if (IS_PLAYER_DEADEYE(0) && iParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_206(bVar1, iParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_205(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_205(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_204(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_204(&iVar6, &vVar3);
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

int Function_204(int iParam0, int iParam1) //Position: 0xA068 / 41064
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_46(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_46(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_205(bool bParam0, bool bParam1) //Position: 0xA0D3 / 41171
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_206(bool bParam0, bool bParam1) //Position: 0xA0F2 / 41202
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
	else if (!bParam1 || Function_205(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

void Function_207(int iParam0, int iParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0xA14F / 41295
{
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if (((!bParam2 || Function_82(iParam1)) || Function_210(iParam1)) || iParam1 != iParam0->f_20)
		{
			REMOVE_BLIP(iParam0->f_184);
			REMOVE_BLIP(iParam0->f_188);
		}
	}
	else if (bParam2)
	{
		if (Function_84(Global_63541[iParam155].f_144, 64) && iParam1 == iParam0->f_20)
		{
			Function_65(iParam0, iParam1);
		}
		if (!(Function_82(iParam1) || Function_210(iParam1)))
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
		if (!Function_84(iParam0->f_144, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_208));
		}
		else
		{
			iParam0->f_208 = "";
		}
		Function_209(iParam0 + 144, 32);
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
		Function_208(iParam0);
	}
	Function_209(iParam0 + 144, 256);
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

void Function_208(int iParam0) //Position: 0xA2F9 / 41721
{
	if (Function_84(iParam0->f_144, 1))
	{
		STREAMING_EVICT_ACTOR(iParam0->f_136, 4294967295);
		Function_209(iParam0 + 144, 1);
	}
	if (Function_84(iParam0->f_144, 8))
	{
		REMOVE_STRING_TABLE("RandomCharMissions");
		Function_209(iParam0 + 144, 8);
	}
	if (Function_84(iParam0->f_144, 2))
	{
		STREAMING_EVICT_GRINGO(iParam0->f_60);
		Function_209(iParam0 + 144, 2);
	}
	if (Function_84(iParam0->f_144, 4))
	{
		STREAMING_EVICT_PROP(iParam0->f_64);
		Function_209(iParam0 + 144, 4);
	}
	return;
}

void Function_209(int iParam0, int iParam1) //Position: 0xA37B / 41851
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

int Function_210(int iParam0) //Position: 0xA38E / 41870
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_211(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xA3A3 / 41891
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_77(iParam0 + 172, 4))
		{
			if (!Function_76(iParam1))
			{
				return 0;
			}
		}
		if (Function_77(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_82(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_77(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_87(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_77(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_213(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_212(iParam0);
	}
	return 1;
}

int Function_212(int iParam0) //Position: 0xA457 / 42071
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_77(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_77(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_77(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_77(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_77(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_77(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_213(int iParam0, bool bParam1) //Position: 0xA503 / 42243
{
	if (!Function_71(iParam0))
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

void Function_214(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xA539 / 42297
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

void Function_215() //Position: 0xA584 / 42372
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Aband_RuffsHimUp_v1_AA1", "Aband_RuffsHimUp_v1_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Aband_RuffsHimUp_v1_AA2", "Aband_RuffsHimUp_v1_AA2", false, 1, 0, 0, 1);
		Function_111(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_216(int iParam0) //Position: 0xA618 / 42520
{
	int iVar0;
	
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	ENABLE_USE_CONTEXTS(0);
	iVar0 = Global_26316.f_56 & 16384;
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		SET_ACTOR_INVULNERABILITY(iParam0->f_204, true);
		MEMORY_CLEAR_EVENTS(iParam0->f_204, 1);
	}
	SET_ACTOR_INVULNERABILITY(Global_34573, true);
	return;
}

void Function_217(int iParam0) //Position: 0xA662 / 42594
{
	if (!Function_218(iParam0))
	{
		Function_147(iParam0, 0.0f);
	}
	return;
}

bool Function_218(bool bParam0) //Position: 0xA677 / 42615
{
	return Function_84(*bParam0, 1);
}

void Function_219(var uParam0, bool bParam1) //Position: 0xA684 / 42628
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_220(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_220(bool bParam0, vector3 vParam1) //Position: 0xA69E / 42654
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_221(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_221(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_221(bool bParam0, vector3 vParam1) //Position: 0xA6D6 / 42710
{
	vector3 vVar0;
	
	Function_227(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_227(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

void Function_222() //Position: 0xA759 / 42841
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Aband_Pay4Info", "Aband_Pay4Info", true, 1, 1, 0, 1);
		Function_111(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_223() //Position: 0xA79E / 42910
{
	return Function_39(0);
}

bool Function_224(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA7A8 / 42920
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0,3f))
	{
		return 1;
	}
	if (Function_150(bParam0))
	{
		return 1;
	}
	if (Function_145(bParam0))
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
	if (Function_225())
	{
		return 1;
	}
	return 0;
}

bool Function_225() //Position: 0xA85E / 43102
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

void Function_226() //Position: 0xA875 / 43125
{
	if (IS_ACTOR_VALID(bLocal_196))
	{
		if (!IS_ACTOR_ALIVE(bLocal_196) || IS_ACTOR_DEAD(bLocal_196))
		{
			Function_133();
		}
		if (Global_74542[210].f_20 == 0)
		{
			if (Function_9(Global_34573, bLocal_196, 1, 0, 0, 3212836864))
			{
				Function_133();
			}
		}
	}
	return;
}

vector3 Function_227(bool bParam0) //Position: 0xA8B8 / 43192
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_228() //Position: 0xA8C9 / 43209
{
	if (GATEWAY_UPDATE(Global_63541[255].f_192))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[255].f_200) && !Function_224(Global_34573, 0, 1))
		{
			iLocal_273 = 2;
		}
		else if (((!IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[255].f_200) && HAS_STRING_TABLE_LOADED("RandomCharMissions")) && IS_LAYOUTREF_VALID(bLocal_197)) && !Function_224(Global_34573, 0, 1))
		{
			if (Global_74542[210].f_20 != 0 || Global_74542[210].f_20 != 1)
			{
				Global_63541[255].f_200 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("abandoned3a_QU", GATEWAY_GET_VOLUME(Global_63541[255].f_192), 30, 5, 0, false, 0, 0, 4294967295, 0);
			}
			else if (Global_74542[210].f_20 == 2)
			{
				Global_63541[255].f_200 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("abandoned3_QU", GATEWAY_GET_VOLUME(Global_63541[255].f_192), 30, 5, 0, false, 0, 0, 4294967295, 0);
			}
		}
	}
	else if (Function_224(Global_34573, 0, 1) && IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[255].f_200))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Global_63541[255].f_200);
	}
	return;
}

void Function_229() //Position: 0xA9E2 / 43490
{
	var uVar0;
	
	Function_230(4, 1);
	uVar0 = uVar0;
	bLocal_274 = CREATE_LAYOUT("Abandoned_layout");
	return;
}

void Function_230(int iParam0, int iParam1) //Position: 0xAA0A / 43530
{
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

int Function_231(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0xAA53 / 43603
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
					uVar2 = Function_233(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &uVar1, *(iParam0 + 100), 0, fParam2, fParam3, 2, 1, 2, 2, 0, 1);
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
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_232(iParam0));
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
						uVar6 = Function_233(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &iVar3, *(iParam0 + 100), 0, fParam2, fParam3, 2, 1, 2, 2, 0, 1);
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

float Function_232(float fParam0) //Position: 0xABB4 / 43956
{
	if (fParam0->f_168 != 4294967295)
	{
		if (Global_74542[fParam0->f_16810].f_28 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_232(&(Global_63541[fParam0->f_16855]));
	}
	return 0;
}

int Function_233(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0xABE9 / 44009
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_236(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_237()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
				if (!Function_46(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6,28f));
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
					Function_234();
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
	else if ((!Function_236(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_237()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*iParam1 = 0;
	}
	else if (!Function_236(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_234() //Position: 0xAE2F / 44591
{
	bool bVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &vVar7, &Var10);
			Function_235(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_235(char* cParam0, vector3 vParam1) //Position: 0xAE83 / 44675
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

bool Function_236(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xAFAB / 44971
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_62(bParam0);
		if (VDIST(Function_62(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_237() //Position: 0xB035 / 45109
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_238() //Position: 0xB044 / 45124
{
	int iVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(bLocal_196))
	{
		if (!IS_OBJECT_VALID(bLocal_241))
		{
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_196, true);
			iVar0 = Global_63541[255].f_96;
			bLocal_241 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_197, "Abandoned_WifeGateway", vLocal_258, 0.0f, 0.0f, 0.0f, iVar0, iVar0, iVar0, 0, Global_34573, 6, Global_63541[255].f_92, 0, 1, 1);
			bVar1 = GATEWAY_GET_MARKER(bLocal_241);
			if (IS_OBJECT_VALID(bVar1))
			{
				DESTROY_OBJECT(bVar1);
			}
		}
	}
	return;
}

void Function_239() //Position: 0xB0BF / 45247
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bLocal_196))
	{
		if (Global_74542[210].f_20 != 0 || Global_74542[210].f_20 != 1)
		{
			TASK_STAND_STILL(bLocal_196, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_196, 2);
			SET_RCM_ACTOR_CALL_OVER_ENABLE(bLocal_196, 1, 0, true, 0, 1, 2, 1101004800, 1088421888, 1);
			if (IS_OBJECT_VALID(bLocal_242))
			{
				if (!IS_BLIP_VALID(bLocal_248))
				{
					bLocal_248 = ADD_BLIP_FOR_ACTOR(bLocal_196, 325, 0, 2, 0);
					SET_BLIP_NAME(bLocal_248, GET_ACTOR_ENUM_STRING_FROM_ENUM(334));
					SET_BLIP_MAX_DISTANCE(bLocal_248, fLocal_198);
				}
				TASK_USE_GRINGO(bLocal_196, GET_GRINGO_FROM_OBJECT(bLocal_242), "UseCase1", 4294967295, 1);
				iLocal_203 = 1;
			}
		}
		else if (Global_74542[210].f_20 == 2)
		{
			vVar0 = { -2168,783f, 16,874f, 2588,506f };
			vVar3 = { 0.0f, 167,97f, 0.0f };
			bLocal_246 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_NAME("gWeeping", &vVar0, 2.0f, 0));
			if (!iLocal_202)
			{
				if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_246)))
				{
					bLocal_246 = CREATE_GRINGO_IN_LAYOUT(bLocal_197, "gWeeping", "$/content/scripting/gringo/SimpleGringo/sit_headinhands_n_any", vVar0, vVar3);
				}
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_246)))
				{
					TASK_USE_GRINGO(bLocal_196, GET_GRINGO_FROM_OBJECT(bLocal_246), "UseCase1", 4294967295, 1);
					iLocal_202 = 1;
				}
			}
			iLocal_203 = 1;
		}
	}
	return;
}

void Function_240() //Position: 0xB22E / 45614
{
	if (!IS_ACTOR_VALID(bLocal_196))
	{
		if (Global_74542[210].f_20 != 0 || Global_74542[210].f_20 != 1)
		{
			bLocal_196 = FIND_ACTOR_IN_LAYOUT(bLocal_197, "MusicianWife");
			if (!IS_ACTOR_VALID(bLocal_196))
			{
				bLocal_196 = CREATE_ACTOR_IN_LAYOUT(bLocal_197, "MusicianWife", 334, -2169,244f, 16,909f, 2624,381f, 0.0f, 18,78f, 0.0f);
				AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_196, "GUN_POINTED_AT", "DONT_HIT_ME");
				DECOR_SET_BOOL(bLocal_196, "Hogtie_NoCripple", true);
			}
		}
		else if (Global_74542[210].f_20 == 2)
		{
			bLocal_196 = FIND_ACTOR_IN_LAYOUT(bLocal_197, "MusicianWife");
			if (!IS_ACTOR_VALID(bLocal_196))
			{
				bLocal_196 = CREATE_ACTOR_IN_LAYOUT(bLocal_197, "MusicianWife", 334, -2168,419f, 16,878f, 2589,199f, 0.0f, 18,78f, 0.0f);
				AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_196, "GUN_POINTED_AT", "DONT_HIT_ME");
			}
		}
	}
	return;
}

var Function_241() //Position: 0xB365 / 45925
{
	bool bVar0;
	
	return bVar0;
}

void Function_242() //Position: 0xB36D / 45933
{
	if (IS_ACTOR_VALID(bLocal_195))
	{
		if (ACTORS_IN_RANGE(Global_34573, bLocal_195, 20.0f))
		{
			iLocal_201 = 0;
			iLocal_200 = 1;
			if (Global_63541[255].f_68 != GET_ASSET_ID("$/cutscene/RCM_04_CS03_b/RCM_04_CS03_b", 9))
			{
				Global_63541[255].f_68 = GET_ASSET_ID("$/cutscene/RCM_04_CS03_b/RCM_04_CS03_b", 9);
			}
			if (!Function_243(StackVal, StackVal, StackVal, StackVal, *(&Global_63541[255] + 100), vLocal_208))
			{
				*(&Global_63541[255] + 100) = { StackVal, StackVal, vLocal_208 };
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_196))
	{
		if (ACTORS_IN_RANGE(Global_34573, bLocal_196, 20.0f))
		{
			iLocal_201 = 1;
			iLocal_200 = 0;
			if (Global_63541[255].f_68 != GET_ASSET_ID("$/cutscene/RCM_04_CS04/RCM_04_CS04", 9))
			{
				Global_63541[255].f_68 = GET_ASSET_ID("$/cutscene/RCM_04_CS04/RCM_04_CS04", 9);
			}
			if (!Function_243(StackVal, StackVal, StackVal, StackVal, *(&Global_63541[255] + 100), vLocal_211))
			{
				*(&Global_63541[255] + 100) = { StackVal, StackVal, vLocal_211 };
			}
		}
	}
	return;
}

bool Function_243(vector3 vParam0, vector3 vParam3) //Position: 0xB4CB / 46283
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_244(int iParam0) //Position: 0xB4F8 / 46328
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_248();
	iVar1 = 0;
	if (!Function_7(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_247(iParam0[iVar03], 8);
		}
		else if (Function_246())
		{
			iVar1 = 1;
			Function_247(iParam0[iVar03], 8);
		}
		Function_247(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_7(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_7(iParam0[03], 8) || iVar1));
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
				Function_247(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_247(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_247(iParam0[iVar03], 2);
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
							Function_247(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_247(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_247(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_247(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_247(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_247(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_247(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_247(iParam0[iVar03], 2);
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
	Function_245();
	return 1;
}

void Function_245() //Position: 0xB873 / 47219
{
	if (!Function_80(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_246() //Position: 0xB8B3 / 47283
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

void Function_247(var uParam0, int iParam1) //Position: 0xB8DE / 47326
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_248() //Position: 0xB8EF / 47343
{
	if (!Function_80(128))
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

void Function_249() //Position: 0xB931 / 47409
{
	bool bVar0;
	
	bVar0 = GET_OBJECT_OWNER(bLocal_195);
	if (GET_OBJECT_TYPE(bVar0) == 1)
	{
		if (GET_LAYOUT_FROM_OBJECT(bVar0) == GET_GC_LAYOUT())
		{
			GIVE_OBJECT_TO_LAYOUT(bLocal_195, bLocal_197);
		}
	}
	return;
}

var Function_250(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xB95A / 47450
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_7(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_247(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_247(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_251(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBA2A / 47658
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_252(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_247(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_252(var uParam0, int iParam1, int iParam2) //Position: 0xBA62 / 47714
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_247(uParam0[iVar03], 4);
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

