//Decompiled with MagicRDR v1.0
//Function Count : 118
//Statics Count : 370
//Natives Count : 173
//Parameters Count : 51

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
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	bool bLocal_14 = false;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	bool bLocal_21 = false;
	bool bLocal_22 = true;
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
	vector3 vLocal_44 = { 0.0f, 0.0f, 0.0f };
	struct<5> Local_47 = { 0, 0, 0, 0, 0 } ;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = false;
	bool bLocal_67 = false;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = false;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = false;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	int iLocal_87 = 0;
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
	var uLocal_101 = 3;
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
	var uLocal_115 = 3;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 3;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 3;
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
	var uLocal_142 = 3;
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
	var uLocal_156 = 3;
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
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 3;
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
	var uLocal_184 = 3;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 3;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
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
	var uLocal_206 = 0;
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
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	bool bLocal_244 = false;
	bool bLocal_245 = false;
	float fLocal_246 = 0.0f;
	bool bLocal_247 = false;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	float fLocal_251 = 0.0f;
	vector3 vLocal_252 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_255 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_258 = { 0.0f, 0.0f, 0.0f };
	int iLocal_261 = 0;
	bool bLocal_262 = false;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
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
	bool bLocal_311 = false;
	int iLocal_312 = 0;
	bool bLocal_313 = false;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<5> Var0;
	vector3 vVar35;
	vector3 vVar38;
	float fVar41;
	var uVar50;
	
	iLocal_11 = 0;
	iLocal_12 = 0;
	iLocal_69 = 0;
	iLocal_70 = 0;
	bLocal_71 = false;
	iLocal_72 = 0;
	iLocal_73 = 0;
	iLocal_74 = 0;
	iLocal_75 = 0;
	iLocal_76 = 0;
	bLocal_77 = false;
	iLocal_78 = 1;
	iLocal_79 = 0;
	bLocal_80 = false;
	iLocal_248 = 0;
	iLocal_249 = 0;
	iLocal_250 = 0;
	iLocal_261 = 4294967295;
	iLocal_312 = 0;
	iLocal_317 = 0;
	iLocal_318 = 15;
	*(&Var0 + 20) = 1;
	fVar41 = 10.0f;
	iLocal_76 = Function_117("npressDemo");
	Function_116(&uLocal_314, 2.0f);
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar35);
	uVar50 = Function_115();
	ADD_TIME(&uVar50, 0, 23, false, 0);
	iLocal_13 = 0;
	iLocal_64 = GET_TIME_OF_DAY();
	ADD_TIME(&iLocal_64, 1, 0, false, 0);
	iLocal_65 = GET_TIME_OF_DAY();
	ADD_TIME(&iLocal_65, 0, 2, false, 0);
	while (!IS_EXITFLAG_SET())
	{
		if (!IS_ACTOR_VALID(Global_34573) || !IS_ACTOR_ALIVE(Global_34573))
		{
			iLocal_13 = 5;
		}
		else if (Function_114() == 1)
		{
			iLocal_13 = 5;
		}
		else if (Global_3380)
		{
			iLocal_13 = 5;
		}
		else if (iLocal_73 != 0 && (IS_EARLIER_THAN(iLocal_65, GET_TIME_OF_DAY()) || IS_LATER_THAN(GET_TIME_OF_DAY(), Function_113(32))))
		{
			iLocal_13 = 5;
		}
		else if (IS_OBJECT_VALID(bLocal_82))
		{
			if (((IS_EARLIER_THAN(iLocal_64, GET_TIME_OF_DAY()) && VDIST(Global_34574, *(&ScriptParam_0 + 8)) < 50.0f) && !WOULD_ACTOR_BE_VISIBLE(false, &ScriptParam_0 + 8, 3212836864)) && iLocal_76 != 0)
			{
				iLocal_13 = 5;
			}
		}
		else if (Global_3407 == 1)
		{
			iLocal_13 = 5;
		}
		if (Function_112(uLocal_68, 64) && IS_OBJECT_VALID(bLocal_86))
		{
			DESTROY_OBJECT(bLocal_86);
		}
		if (VDIST(Global_34574, Local_47) > 3.0f)
		{
			bLocal_21 = false;
		}
		else
		{
			bLocal_21 = 500;
		}
		if (Function_109(&uLocal_314, 0.5f))
		{
			bLocal_71 = true;
			Function_108(&uLocal_314);
			iLocal_317 = (iLocal_317 + 1 % 4);
		}
		switch (iLocal_13)
		{
			case 0x00000000:
				switch (iLocal_12)
				{
					case 0x00000000:
						if (Function_107(128))
						{
							if (IS_LAYOUTREF_VALID(Global_30616))
							{
							}
							else
							{
								iLocal_13 = 5;
							}
							iLocal_12++;
						}
						else
						{
							iLocal_13 = 5;
						}
						break;
					
					case 0x00000001:
						if (Function_106(&(Global_29008[Global_29006]), 4))
						{
							if (Function_105(Global_30679[1]))
							{
								if (Function_95(&Global_26303, Global_30679[1]))
								{
								}
								else
								{
									bLocal_21 = false;
									iLocal_13 = 5;
								}
							}
							else if (Function_105(Global_30707[1]))
							{
								if (Function_95(&Global_26303, Global_30707[1]))
								{
								}
								else
								{
									bLocal_21 = false;
									iLocal_13 = 5;
								}
							}
							else
							{
								bLocal_21 = false;
								iLocal_13 = 5;
							}
							iLocal_12++;
						}
						break;
					
					case 0x00000002:
						Function_94();
						Global_26303.f_24 = Function_91(&Global_26303, 0, 80, 2000, 4294967295);
						iLocal_261 = Global_29006;
						Function_88();
						Function_87("EVENT_INIT: BOUNTYHUNTER_GET_A_VALID_REGION_FROM_STRUCT_Z");
						iLocal_12++;
						break;
					
					case 0x00000003:
						if (Function_106(&(Global_29008[Global_29006]), 4))
						{
							iLocal_12++;
						}
						else
						{
							bLocal_21 = 2000;
							break;
						}
						break;
					
					case 0x00000004:
						if (Function_80(Global_29006))
						{
							iLocal_12++;
						}
						else
						{
							bLocal_21 = 600;
							break;
						}
						break;
					
					case 0x00000005:
						ScriptParam_0.f_52 = 5.0f;
						if (iLocal_69 == 0)
						{
							if (Function_79() == 1)
							{
								ScriptParam_0.f_64 = 5;
								(&ScriptParam_0 + 64)->f_4 = 512;
								Function_94();
								if (Function_78())
								{
									PRINTSTRING("WANTED POSTER spawnPos: ");
									PRINTVECTOR(vLocal_255);
									PRINTNL();
									Local_50 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("wpLay") };
									bLocal_311 = CREATE_LAYOUT(&Local_50);
									if (!IS_LAYOUTREF_VALID(bLocal_311))
									{
										bLocal_21 = false;
										iLocal_13 = 5;
										break;
									}
									iLocal_12++;
									bLocal_21 = 1000;
								}
								else
								{
									iLocal_13 = 5;
									bLocal_21 = false;
								}
								Function_87("EVENT_INIT: WANTEDPOSTER_FindPosterFlag");
							}
							else
							{
								bLocal_21 = 3000;
							}
						}
						break;
					
					case 0x00000006:
						*(&ScriptParam_0 + 8) = { StackVal, StackVal, vLocal_255 };
						*(&ScriptParam_0 + 20) = { StackVal, StackVal, vLocal_258 };
						bLocal_21 = false;
						iLocal_12 = 9;
						iLocal_13 = 1;
						break;
					
					case 0x00000007:
						break;
					
					default:
						LOG_ERROR("Wanted poster initilization went weird");
						iLocal_13 = 5;
						bLocal_21 = false;
						break;
				}
				if (iLocal_13 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_85)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_85));
				}
				break;
			
			case 0x00000001:
				Function_94();
				if (!iLocal_75)
				{
					if (!IS_VOLUME_VALID(bLocal_66))
					{
						Function_75(&vVar35, &vVar38);
						bLocal_66 = CREATE_VOLUME_IN_LAYOUT(bLocal_311, "posterVolume", 2, vVar35, vVar38, 3.0f, 3.0f, 3.0f);
					}
					if (IS_VOLUME_VALID(bLocal_66))
					{
						if (!CAMERA_IS_VISIBLE_VOLUME(GET_GAME_CAMERA(), bLocal_66, 1065353216, 1117126656, 1, 1, 0) || IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(Global_30616, "mpNextPoster")))
						{
							if (!Function_73(StackVal, StackVal, StackVal, StackVal, bLocal_311, vLocal_255, vLocal_258))
							{
								bLocal_21 = false;
								iLocal_13 = 5;
								break;
							}
							DESTROY_VOLUME(bLocal_66);
							Function_72(&uLocal_68, 32);
							iLocal_75 = 1;
						}
					}
				}
				Function_87("WANTEDPOSTER_CreatePosterBeforeHand");
				if (Function_112(uLocal_68, 32))
				{
					if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_244) && !iLocal_250)
					{
						bLocal_21 = false;
						iLocal_13 = 5;
						break;
					}
					else if (IS_OBJECT_VALID(bLocal_82))
					{
						Function_71(0);
						Function_108(&iLocal_58);
						iLocal_13 = 2;
						bLocal_21 = false;
					}
				}
				if (iLocal_13 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_85)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_85));
				}
				break;
			
			case 0x00000002:
				if (Function_70(bLocal_311) == 1)
				{
					Function_69(1, bLocal_311);
					iLocal_73 = 1;
					bLocal_245 = CREATE_CAMERA_FOCUS_POINT_OBJECT_WITH_TUNING(bLocal_311, Function_68(), bLocal_82, "wantedPoster", 2.0f, 2.0001f);
					if (!IS_OBJECT_VALID(bLocal_245))
					{
						LOG_ERROR("Could not create wanted poster camera focus");
					}
					else
					{
						SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_245, "npm_bh_cfp");
						SET_CAMERA_FOCUS_PLAYER_INVULNERABLE(bLocal_245, 1);
						SET_CAMERA_FOCUS_PLAYER_INPUT_DISABLED(bLocal_245, 1);
					}
					if (IS_BLIP_VALID(bLocal_81))
					{
						SET_BLIP_BLINK(bLocal_81, 1, 0, 5f);
					}
					Function_72(&uLocal_68, 16);
				}
				if (iLocal_73 == 1)
				{
					Function_66(1);
					if (IS_BLIP_VALID(bLocal_81))
					{
						SET_BLIP_BLINK(bLocal_81, 0, 0, 5f);
					}
					iLocal_13 = 3;
				}
				else if (Function_65(1, 0, 1, 1) || Function_64())
				{
					iLocal_13 = 5;
				}
				else if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_244) && !iLocal_250)
				{
					bLocal_21 = false;
					iLocal_13 = 5;
				}
				else if (Function_63(iLocal_261))
				{
					if (!IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
					{
						iLocal_13 = 5;
					}
				}
				if (iLocal_13 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_85)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_85));
				}
				break;
			
			case 0x00000003:
				Function_62();
				if (Function_61(4294967295))
				{
					bLocal_80 = VDIST(Global_34574, Local_47) > 3.0f;
					if (StackVal < StackVal)
					{
						iLocal_248 = 1;
						bLocal_80 = VDIST(Global_34574, Local_47) > 6.0f;
					}
					else if (bLocal_80 == 0)
					{
						iLocal_248 = 0;
					}
					else if (Function_57(Global_34573, IS_CAMERA_FOCUS_ENABLED(bLocal_245), 0))
					{
						iLocal_248 = 1;
					}
					else if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
					{
						iLocal_248 = 1;
					}
					else
					{
						iLocal_248 = 0;
					}
				}
				if (iLocal_73 == 1)
				{
					if (IS_OBJECT_VALID(bLocal_85))
					{
						GET_OBJECT_POSITION(bLocal_85, &Local_47);
					}
					Function_94();
					if (!Function_112(uLocal_68, 64))
					{
						if (Function_61(0))
						{
							if (Function_65(1, 0, 1, 1) || Function_64())
							{
								if (iLocal_72 == 1)
								{
									Function_69(0, bLocal_311);
								}
							}
							else if (iLocal_248 != 1 && bLocal_80 != 1)
							{
								if (iLocal_72 == 1)
								{
									Function_69(0, bLocal_311);
								}
							}
							else if (iLocal_72 == 0)
							{
								Function_69(1, bLocal_311);
							}
						}
					}
					Function_87("Activate Poster Check");
					if (Function_46())
					{
						if (Function_63(Global_26303.f_24))
						{
							bLocal_77 = true;
							Var0.f_4 = 512;
							Function_45();
							Function_45();
							if (Function_40(StackVal, StackVal, StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/DLC/ZombiePack/MissingPersons/event_bountyhunter_z.sc", 4), Function_45(), Function_45(), 0, 0, 0, Global_26303.f_24, 0, 0, 0, &Var0, 1, 1, 0x40a00000, 4294967295, 0, 0))
							{
								Function_39(1);
							}
							else
							{
								LOG_ERROR("Problem setting bounty hunter beat from wanted poster");
							}
						}
						else
						{
							LOG_ERROR("Bad location found, search settings should be changed");
						}
						if (iLocal_74 == 1)
						{
							HUD_CLEAR_HELP_QUEUE();
						}
						iLocal_13 = 5;
						bLocal_21 = 1500;
					}
					else if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_244) && !iLocal_250)
					{
						bLocal_21 = false;
						iLocal_13 = 5;
					}
					else if (!Function_112(uLocal_68, 128))
					{
						Function_94();
						Function_66(1);
						if (IS_BLIP_VALID(bLocal_81))
						{
							SET_BLIP_BLINK(bLocal_81, 1, 0, 5f);
						}
						Function_72(&uLocal_68, 128);
						bLocal_21 = false;
						Function_87("showing blip");
					}
					else
					{
						Function_94();
						if (Function_61(3))
						{
							if (Global_3386 == 1)
							{
								if (Function_112(uLocal_68, 16) && iLocal_72 != 1)
								{
									if (iLocal_76 == 0)
									{
										if (Function_37())
										{
											Function_36(&iLocal_87);
											Function_27(&iLocal_87, "npm_bh_nb1", 0);
											Function_27(&iLocal_87, "npm_bh_nb2", 0);
										}
									}
									Function_26(&uLocal_68, 16);
									if (Function_24(&iLocal_87, 0, 0))
									{
										Function_20(&iLocal_87);
									}
								}
							}
						}
						Function_87("PlayerInTown Check");
					}
					if (iLocal_72 == 1)
					{
						if (IS_OBJECT_VALID(bLocal_245))
						{
							if (Function_112(uLocal_68, 64))
							{
								if (IS_OBJECT_VALID(bLocal_245))
								{
									SET_CAMERA_FOCUS_ENABLED(bLocal_245, 0);
									DESTROY_OBJECT(bLocal_245);
								}
							}
							else
							{
								Function_94();
								Function_17();
								Function_87("WANTEDPOSTER_UpdateContextUse");
								if (iLocal_78 == 0)
								{
									vLocal_44 = { 0.0f, 0.0f, -1.0f };
									Function_16(&vLocal_44, fLocal_251);
									vLocal_44 = { StackVal, StackVal, Function_16(&vLocal_44, fLocal_251) };
									Function_15(StackVal, StackVal, StackVal, StackVal, Local_47, Global_34574, &uLocal_41);
									fLocal_246 = VDOT(&vLocal_44, &uLocal_41);
									bLocal_247 = IS_CAMERA_FOCUS_ENABLED(bLocal_245);
									Function_94();
									if (bLocal_247 == 1)
									{
										if (IS_CAMERA_FOCUS_ACTIVE(bLocal_245) != 1 && !Function_112(uLocal_68, 1))
										{
											MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
											if (iLocal_261 == Global_30679[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2653.303f, 67.263f, 3424.062f, 228.253f, 1, 1, 1);
											}
											else if (iLocal_261 == Global_30717[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, 663.996f, 78.755f, 1315.594f, 181.049f, 1, 1, 1);
											}
											else if (iLocal_261 == Global_30693[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2664.823f, 31.387f, 4249.94f, 259.823f, 1, 1, 1);
											}
											else if (iLocal_261 == Global_30707[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -717.414f, 63.247f, 3292.827f, 139.017f, 1, 1, 1);
											}
											else if (iLocal_261 == Global_30685[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -4335.978f, 30.189f, 4382.272f, 7.678f, 1, 1, 1);
											}
											else if (iLocal_261 == Global_30668[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -817.061f, 93.809f, 2425.982f, 162.56f, 1, 1, 1);
											}
											else if (iLocal_261 == Global_30723[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -416.355f, 152.043f, 1603.441f, 282.897f, 1, 1, 1);
											}
											else if (iLocal_261 == Global_30658[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -3679.052f, 42.778f, 2116.671f, 52.789f, 1, 1, 1);
											}
											Function_72(&uLocal_68, 1);
										}
										else if (IS_CAMERA_FOCUS_ACTIVE(bLocal_245) != 0 && Function_112(uLocal_68, 1))
										{
											Function_26(&uLocal_68, 1);
										}
									}
									Function_87("camerafocus usage logic");
									Function_94();
									if (StackVal || (FABS((StackVal - ((bLocal_247 != 1 && fLocal_246 > 0.0f) && bLocal_80 != 1))) < 2.0f && bLocal_247 != 1))
									{
										Function_69(0, bLocal_311);
									}
									else if (bLocal_247 != 0 && fLocal_246 < 0.0f)
									{
										Function_69(1, bLocal_311);
									}
									else if (Function_112(uLocal_68, 64) && bLocal_247 != 1)
									{
										Function_69(0, bLocal_311);
									}
									Function_87("camerafocus angle logic");
								}
								else if (IS_CAMERA_FOCUS_ENABLED(bLocal_245))
								{
									Function_69(0, bLocal_311);
								}
							}
						}
					}
				}
				if (Global_3386 == 0)
				{
					bLocal_21 = 3000;
					break;
				}
				if (iLocal_13 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_85)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_85));
				}
				break;
			
			case 0x00000005:
				RELEASE_LAYOUT_REF(bLocal_311);
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_21 = false;
				break;
		}
		WAIT(bLocal_21);
	}
	Function_8(bLocal_311);
	if (Function_112(uLocal_68, 4))
	{
		Function_3();
	}
	Function_1(iLocal_318);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xD09 / 3337
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_2(105)), 0);
	return;
}

int Function_2(bool bParam0) //Position: 0xD2A / 3370
{
	return CEIL(((IntToFloat(bParam0) * Global_63398) / 60.0f));
}

void Function_3() //Position: 0xD40 / 3392
{
	Function_4(&bLocal_22);
	return;
}

void Function_4(int iParam0) //Position: 0xD4B / 3403
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

void Function_5(var uParam0, int iParam1) //Position: 0xD71 / 3441
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

void Function_6(var uParam0, int iParam1) //Position: 0xE9F / 3743
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(var uParam0, int iParam1) //Position: 0xEB9 / 3769
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(bool bParam0) //Position: 0xED6 / 3798
{
	if (bLocal_77)
	{
		TASK_CLEAR(Global_34573);
	}
	if (IS_OBJECT_VALID(bLocal_86))
	{
		DESTROY_OBJECT(bLocal_86);
	}
	if (Function_112(uLocal_68, 512))
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (IS_BLIP_VALID(bLocal_81))
	{
		REMOVE_BLIP(bLocal_81);
	}
	if (IS_ACTOR_VALID(bLocal_14))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_14);
		CLEAR_ACTOR_MAX_SPEED(bLocal_14);
	}
	if (IS_VOLUME_VALID(bLocal_66))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_66);
		DESTROY_VOLUME(bLocal_66);
	}
	if (IS_OBJECT_VALID(bLocal_82))
	{
		DESTROY_OBJECT(bLocal_82);
	}
	if (IS_OBJECT_VALID(bLocal_83))
	{
		DESTROY_OBJECT(bLocal_83);
	}
	if (IS_VOLUME_VALID(bLocal_67))
	{
		DESTROY_VOLUME(bLocal_67);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_244))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_244);
	}
	if (IS_OBJECT_VALID(bLocal_84))
	{
		DESTROY_OBJECT(bLocal_84);
	}
	if (IS_OBJECT_VALID(bLocal_85))
	{
		DESTROY_OBJECT(bLocal_85);
	}
	if (IS_OBJECT_VALID(bLocal_245))
	{
		DESTROY_OBJECT(bLocal_245);
	}
	Function_13();
	Function_11(1);
	Function_36(&iLocal_87);
	DESTROY_OBJECT(bLocal_84);
	Function_9();
	if (IS_BLIP_VALID(bLocal_81))
	{
		SET_BLIP_BLINK(bLocal_81, 0, 0, 5f);
	}
	if (IS_ITERATOR_VALID(bLocal_262))
	{
		DESTROY_ITERATOR(bLocal_262);
	}
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		DESTROY_LAYOUT(bParam0);
	}
	return;
}

void Function_9() //Position: 0xFD3 / 4051
{
	if (!Function_10(StackVal, StackVal, vLocal_252))
	{
		STREAMING_UNLOAD_BOUNDS();
	}
	vLocal_252 = { 0.0f, 0.0f, 0.0f };
	return;
}

bool Function_10(vector3 vParam0) //Position: 0xFEE / 4078
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_11(int iParam0) //Position: 0x1006 / 4102
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_12())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_12() //Position: 0x1042 / 4162
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

void Function_13() //Position: 0x1067 / 4199
{
	if (iLocal_70 == 0)
	{
		if (IS_ACTOR_VALID(bLocal_14))
		{
			if (Global_3403 == 0)
			{
				TASK_CLEAR(bLocal_14);
				TASK_WANDER(bLocal_14, 3212836864);
				iLocal_318 = 30;
			}
			AI_CONVERSE_ENABLE(bLocal_14);
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bLocal_14, 1);
			RELEASE_ACTOR(bLocal_14);
			Function_14(bLocal_14, 1);
		}
		iLocal_70 = 1;
	}
	return;
}

void Function_14(bool bParam0, bool bParam1) //Position: 0x10AF / 4271
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[0]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[0], 0);
	}
	return;
}

void Function_15(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x10DE / 4318
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_16(var uParam0, bool bParam1) //Position: 0x1101 / 4353
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

void Function_17() //Position: 0x111B / 4379
{
	if (!Function_112(uLocal_68, 64))
	{
		if (iLocal_72 == 1)
		{
			if (!Function_112(uLocal_68, 256))
			{
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_244))
				{
					if (IS_OBJECT_VALID(bLocal_86))
					{
						DESTROY_OBJECT(bLocal_86);
					}
					DESTROY_OBJECT(bLocal_85);
					Function_70(bLocal_311);
					Function_72(&uLocal_68, 256);
				}
				if (iLocal_78 == 1)
				{
					Function_19();
				}
			}
			if (Function_112(uLocal_68, 256))
			{
				if (iLocal_73 != 1 && iLocal_79 != 0)
				{
					if (MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1))
					{
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_85), true);
						TASK_CLEAR(Global_34573);
						TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bLocal_85), "nPlayerUse", 1, 1);
						SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_85, "nPlayerUse", 0, 0, 0);
						TASK_PRIORITY_SET(Global_34573, 1);
						if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_244))
						{
							Function_72(&uLocal_68, 512);
							iLocal_250 = 1;
							if (IS_VOLUME_VALID(bLocal_67))
							{
								DESTROY_VOLUME(bLocal_67);
							}
							RELEASE_SCRIPT_USE_CONTEXT(bLocal_244);
							ENABLE_USE_CONTEXTS(0);
						}
						iLocal_79 = 1;
						Function_18();
					}
				}
			}
		}
	}
	return;
}

void Function_18() //Position: 0x1207 / 4615
{
	SET_CAMERA_FOCUS_ENABLED(bLocal_245, 0);
	iLocal_78 = 1;
	return;
}

void Function_19() //Position: 0x1216 / 4630
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0.0f, -1.0f, 1.5f };
	GET_OBJECT_RELATIVE_POSITION(bLocal_82, vVar0, &vVar3);
	SET_OBJECT_POSITION(bLocal_67, vVar3);
	SET_CAMERA_FOCUS_ENABLED(bLocal_245, 1);
	iLocal_78 = 0;
	return;
}

void Function_20(int iParam0) //Position: 0x1246 / 4678
{
	char* cVar0[32];
	
	if (iParam0->f_480 <= iParam0->f_336)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, iParam0 + 336[iParam0->f_4804], 32);
		if ((*iParam0 + 388)[iParam0->f_480] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, iParam0 + 336[iParam0->f_4804], iParam0 + 404[iParam0->f_4806], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_21(iParam0 + 336[iParam0->f_4804], 0x41200000, 1, 0, 2, 1, 0);
		}
		iParam0->f_480++;
	}
	return;
}

void Function_21(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x12E0 / 4832
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_22(int iParam0) //Position: 0x135B / 4955
{
	char* cVar0[16];
	
	if (!Function_23())
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

bool Function_23() //Position: 0x139A / 5018
{
	if (Function_112(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_24(int iParam0, int iParam1, int iParam2) //Position: 0x13B5 / 5045
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_34574, *(iParam0 + 4));
	bVar3 = VDIST(Global_34574, *(iParam0 + 16));
	if (bVar2 >= bVar3)
	{
		bVar1 = bVar2;
	}
	else
	{
		bVar1 = bVar3;
	}
	if (Global_63096 != 1 || Global_3394 != 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_25() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!iParam0->f_480 <= iParam0->f_404)
	{
		if (STRING_LENGTH(iParam0 + 336[iParam0->f_4804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_25() //Position: 0x1453 / 5203
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_26(var uParam0, int iParam1) //Position: 0x1480 / 5248
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

int Function_27(int iParam0, bool bParam1, int iParam2) //Position: 0x1493 / 5267
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!IS_STRING_VALID(cParam1))
	{
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 14)
	{
		LOG_ERROR("PROCMISSION_ADD_HELP_TEXT: Invalid help text via length. Clearing.");
		return 0;
	}
	if (Function_112(iParam0->f_584, 32))
	{
		if (!Function_34(iParam0->f_624))
		{
			return 0;
		}
	}
	iVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	iVar21 = Function_30(Function_33(iParam0->f_624), Function_31(iParam0->f_624));
	iVar22 = Function_28(Function_33(iParam0->f_624), Function_31(iParam0->f_624));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(iVar21, iVar20))
	{
		ADD_TIME(&iVar21, 5, 0, false, 0);
		if (IS_EARLIER_THAN(iVar21, GET_TIME_OF_DAY()))
		{
			bVar19 = true;
		}
	}
	else
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		iVar16 = 0;
		while (iVar16 < 2)
		{
			if (!IS_STRING_VALID(iParam0 + 336[iVar164]))
			{
				iVar17 = iVar16;
				strcpy(iParam0 + 336[iVar174], bParam1, 16);
				iVar16 = 3;
			}
			iVar16++;
		}
		if (iVar17 <= 3)
		{
			strcpy(iParam0 + 336[iVar174], bParam1, 16);
			if (iParam2 == 1)
			{
				(*iParam0 + 388)[iVar17] = iParam2;
			}
			iVar18 = 1;
		}
		else
		{
			iVar18 = 0;
		}
	}
	else
	{
		iVar18 = 0;
	}
	return iVar18;
}

int Function_28(int iParam0, int iParam1) //Position: 0x15F2 / 5618
{
	int iVar0;
	int iVar1;
	
	if (!Function_29(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_33(iVar1) != iParam0 && Function_31(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_13172[iVar111].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_29(int iParam0) //Position: 0x163E / 5694
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_30(int iParam0, int iParam1) //Position: 0x1653 / 5715
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_33(iVar1) != iParam0 && Function_31(iVar1) != iParam1)
		{
			if (IS_LATER_THAN(Global_13172[iVar111].f_36, iVar0))
			{
				iVar0 = Global_13172[iVar111].f_36;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int Function_31(int iParam0) //Position: 0x169F / 5791
{
	if (!Function_32(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 4) && 255);
}

bool Function_32(int iParam0) //Position: 0x16BE / 5822
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_33(int iParam0) //Position: 0x16D5 / 5845
{
	if (!Function_32(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

bool Function_34(int iParam0) //Position: 0x16F0 / 5872
{
	if (!Function_32(iParam0))
	{
		return 0;
	}
	if (!Function_35(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_35(int iParam0) //Position: 0x1714 / 5908
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_36(int iParam0) //Position: 0x1729 / 5929
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0->f_336 - 1))
	{
		strcpy(iParam0 + 336[iVar04], "", 16);
		(*iParam0 + 388)[iVar0] = 0;
		iVar0++;
	}
	iParam0->f_480 = 0;
	return;
}

bool Function_37() //Position: 0x1765 / 5989
{
	if (Function_38(359) < 0 || Function_38(358) < 0)
	{
		return 0;
	}
	return 1;
}

int Function_38(int iParam0) //Position: 0x1785 / 6021
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_39(bool bParam0) //Position: 0x17C6 / 6086
{
	if (bParam0 == 1)
	{
		Function_72(&Global_26303 + 8, 1);
	}
	else
	{
		Function_26(&Global_26303 + 8, 1);
	}
	return;
}

bool Function_40(int iParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22) //Position: 0x17E7 / 6119
{
	int iVar0;
	
	uParam13 = uParam13;
	uParam14 = uParam14;
	uParam15 = uParam15;
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_44(&(Global_25267[iVar058]), 4))
			{
				if (!IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
				{
					Global_25267[iVar058].f_4 = uParam9;
					Global_25267[iVar058].f_68 = uParam21;
					Global_25267[iVar058].f_84 = uParam22;
					Global_25267[iVar058].f_64 = uParam19;
					Global_25267[iVar058].f_72 = uParam20;
					Global_25267[iVar058].f_12 = 4294967295;
					Global_25267[iVar058].f_16 = uParam2;
					*(&Global_25267[iVar058] + 20) = { StackVal, StackVal, vParam3 };
					*(&Global_25267[iVar058] + 32) = { StackVal, StackVal, vParam6 };
					Global_25267[iVar058].f_56 = uParam10;
					Global_25267[iVar058].f_48 = uParam12;
					Global_25267[iVar058].f_52 = uParam11;
					Global_25267[iVar058].f_76 = uParam17;
					Global_25267[iVar058].f_80 = uParam18;
					Global_25267[iVar058].f_88 = 0.0f;
					Function_43(uParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = uParam1;
					Function_42(&(Global_25267[iVar058]), 1);
					Function_41(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_41(var uParam0, int iParam1) //Position: 0x1929 / 6441
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

void Function_42(var uParam0, int iParam1) //Position: 0x1943 / 6467
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_43(int iParam0, int iParam1) //Position: 0x1954 / 6484
{
	*iParam1 = *iParam0;
	iParam1->f_16 = iParam0->f_16;
	iParam1->f_20 = iParam0->f_20;
	iParam1->f_4 = StackVal;
	iParam1->f_8 = StackVal;
	*(iParam1 + 24) = { StackVal, *(iParam0 + 24) };
	(iParam1 + 24)->f_8 = StackVal;
	(iParam1 + 24)->f_12 = (iParam0 + 24)->f_12;
	(iParam1 + 24)->f_16 = (iParam0 + 24)->f_16;
	(iParam1 + 24)->f_20 = (iParam0 + 24)->f_20;
	iParam1->f_48 = iParam0->f_48;
	(iParam1 + 48)->f_4 = StackVal;
	(iParam1 + 48)->f_8 = StackVal;
	iParam1->f_60 = iParam0->f_60;
	(iParam1 + 60)->f_4 = StackVal;
	(iParam1 + 60)->f_8 = StackVal;
	(iParam1 + 60)->f_12 = (iParam0 + 60)->f_12;
	(iParam1 + 60)->f_16 = (iParam0 + 60)->f_16;
	(iParam1 + 60)->f_20 = (iParam0 + 60)->f_20;
	(iParam1 + 60)->f_24 = (iParam0 + 60)->f_24;
	(iParam1 + 60)->f_32 = (iParam0 + 60)->f_32;
	(iParam1 + 60)->f_36 = (iParam0 + 60)->f_36;
	(iParam1 + 60)->f_40 = (iParam0 + 60)->f_40;
	(iParam1 + 60)->f_44 = (iParam0 + 60)->f_44;
	(iParam1 + 60)->f_52 = (iParam0 + 60)->f_52;
	(iParam1 + 60)->f_48 = (iParam0 + 60)->f_48;
	(iParam1 + 60)->f_56 = (iParam0 + 60)->f_56;
	(iParam1 + 60)->f_28 = (iParam0 + 60)->f_28;
	iParam1->f_120 = iParam0->f_120;
	(iParam1 + 120)->f_4 = StackVal;
	iParam1->f_128 = iParam0->f_128;
	(iParam1 + 128)->f_4 = StackVal;
	(iParam1 + 128)->f_8 = StackVal;
	return;
}

bool Function_44(int iParam0, int iParam1) //Position: 0x1AC0 / 6848
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

vector3 Function_45() //Position: 0x1ADD / 6877
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_46() //Position: 0x1AE6 / 6886
{
	if (Function_112(uLocal_68, 256) && Function_56(&iLocal_61))
	{
		if (Function_112(uLocal_68, 64) && GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bLocal_85))
		{
			return 1;
		}
		if (Function_109(&iLocal_61, 4.0f))
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_85)))
			{
				GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_85));
			}
			return 1;
		}
		return 0;
	}
	if (Function_61(4294967295))
	{
		if (iLocal_73 == 1)
		{
			if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bLocal_85))
			{
				bLocal_21 = false;
			}
			if (GET_CURRENT_GRINGO(Global_34573) != GET_GRINGO_FROM_OBJECT(bLocal_85) && !Function_112(uLocal_68, 64))
			{
				DESTROY_OBJECT(bLocal_245);
				Function_47(bLocal_311);
				if (IS_OBJECT_VALID(bLocal_245))
				{
					SET_CAMERA_FOCUS_ENABLED(bLocal_245, 0);
				}
				Function_66(0);
				Function_18();
				Function_72(&uLocal_68, 64);
			}
			if (Function_112(uLocal_68, 64))
			{
				if (Function_112(uLocal_68, 256))
				{
					iLocal_64 = GET_TIME_OF_DAY();
					ADD_TIME(&iLocal_64, 1, 0, false, 0);
					Function_108(&iLocal_61);
					bLocal_21 = false;
				}
			}
		}
	}
	return 0;
}

bool Function_47(bool bParam0) //Position: 0x1BCA / 7114
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	iVar6 = 1;
	if (!IS_OBJECT_VALID(bLocal_82))
	{
		return 0;
	}
	Function_75(&vVar0, &vVar3);
	SET_OBJECT_POSITION(bLocal_82, vVar0);
	SET_OBJECT_ORIENTATION(bLocal_82, vVar3);
	if (IS_OBJECT_VALID(bLocal_86))
	{
		DESTROY_OBJECT(bLocal_86);
	}
	if (!Function_112(uLocal_68, 256))
	{
		Function_48(bParam0, &bLocal_82, &bLocal_86, Global_26303.f_12);
	}
	return iVar6;
}

int Function_48(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1C24 / 7204
{
	var uVar0;
	bool bVar3;
	struct<8> Var4;
	var uVar12;
	var uVar28;
	var uVar44;
	char* cVar60[64];
	
	if (!IS_OBJECT_VALID(*uParam1))
	{
		return 0;
	}
	GET_OBJECT_POSITION(*uParam1, &uVar0);
	Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("posterText") };
	uParam3 = uParam3;
	strcpy(&cVar60, "", 64);
	bVar3 = Function_52(Global_26303.f_20);
	Function_51(bVar3, &uVar44);
	Function_50(Global_26303.f_24, &uVar12);
	Function_49(&uVar28);
	PRINTSTRING("Bounty Gang: ");
	PRINTINT(bVar3);
	PRINTNL();
	if (IS_OBJECT_VALID(*uParam2))
	{
		DESTROY_OBJECT(*uParam2);
	}
	*uParam2 = UNK_0x211DE185(uParam0, &Var4, "pm_wp_text", &uVar44, &uVar12, &uVar28, &cVar60, *uParam1, 0, 4278649856);
	if (!IS_OBJECT_VALID(*uParam2))
	{
		return 0;
	}
	return 1;
}

void Function_49(char* cParam0) //Position: 0x1CE4 / 7396
{
	switch (Global_26303.f_12)
	{
		case 0x00000001:
		case 0x00000002:
			strcpy(cParam0, "npm_bh_mn4", 64);
			break;
		
		case 0x00000003:
		case 0x00000004:
			strcpy(cParam0, "npm_bh_mn5", 64);
			break;
		
		case 0x00000005:
		case 0x00000006:
			strcpy(cParam0, "npm_bh_mn6", 64);
			break;
		
		default:
			strcpy(cParam0, "npm_bh_mn7", 64);
			break;
	}
	return;
}

void Function_50(int iParam0, char* cParam1) //Position: 0x1D64 / 7524
{
	strcpy(cParam1, GET_OBJECT_NAME(StackVal), 64);
	return;
}

void Function_51(char* cParam0, char* cParam1) //Position: 0x1D7A / 7546
{
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(cParam1, "pm_bh_wpc1", 64);
			break;
		
		case 0x00000001:
			strcpy(cParam1, "pm_bh_wpc2", 64);
			break;
		
		case 0x00000002:
			strcpy(cParam1, "pm_bh_wpc3", 64);
			break;
		
		case 0x00000003:
			strcpy(cParam1, "pm_bh_wpc4", 64);
			break;
		
		case 0x00000004:
			strcpy(cParam1, "pm_bh_wpc5", 64);
			break;
		
		case 0x00000005:
			strcpy(cParam1, "pm_bh_wpc6", 64);
			break;
		
		case 0x00000006:
			strcpy(cParam1, "pm_bh_wpc7", 64);
			break;
		
		case 0x00000007:
			strcpy(cParam1, "pm_bh_wpc8", 64);
			break;
		
		case 0x00000008:
			strcpy(cParam1, "pm_bh_wpc9", 64);
			break;
		
		case 0x00000009:
			strcpy(cParam1, "pm_bh_wpc10", 64);
			break;
		
		case 0x0000000A:
			strcpy(cParam1, "pm_bh_wpc11", 64);
			break;
		
		case 0x0000000B:
			strcpy(cParam1, "pm_bh_wpc12", 64);
			break;
		
		case 0x0000000C:
			strcpy(cParam1, "pm_bh_wpc13", 64);
			break;
		
		case 0x0000000D:
			strcpy(cParam1, "pm_bh_wpc14", 64);
			break;
		
		case 0x0000000E:
			strcpy(cParam1, "pm_bh_wpc15", 64);
			break;
		
		case 0x0000000F:
			strcpy(cParam1, "pm_bh_wpc16", 64);
			break;
		
		case 0x00000010:
			strcpy(cParam1, "pm_bh_wpc10", 64);
			break;
		
		default:
			strcpy(cParam1, "pm_bh_friend", 64);
			break;
	}
	return;
}

int Function_52(int iParam0) //Position: 0x1F5F / 8031
{
	int iVar0;
	int iVar1;
	struct<21> Var2;
	
	iVar1 = 4294967295;
	if (Function_55(iParam0))
	{
		while (iVar0 <= 17)
		{
			Function_53(&Var2, iVar0);
			if (Var2.f_20 == iParam0)
			{
				iVar1 = iVar0;
				iVar0 = 17 + 1;
			}
			iVar0++;
		}
	}
	return iVar1;
}

int Function_53(var uParam0, int iParam1) //Position: 0x1F9D / 8093
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			uParam0->f_12 = 1;
			uParam0->f_20 = 56;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 1;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x00000001:
			uParam0->f_12 = 1;
			uParam0->f_20 = 24;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 2;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x00000002:
			uParam0->f_12 = 2;
			uParam0->f_20 = 95;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 3;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x00000003:
			uParam0->f_12 = 2;
			uParam0->f_20 = 96;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 4;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x00000004:
			uParam0->f_12 = 2;
			uParam0->f_20 = 29;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 5;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x00000005:
			uParam0->f_12 = 2;
			uParam0->f_20 = 168;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 6;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x00000006:
			uParam0->f_12 = 3;
			uParam0->f_20 = 9;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 7;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x00000007:
			uParam0->f_12 = 3;
			uParam0->f_20 = 89;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 8;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x00000008:
			uParam0->f_12 = 3;
			uParam0->f_20 = 169;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 9;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x00000009:
			uParam0->f_12 = 4;
			uParam0->f_20 = 68;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 10;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x0000000A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 266;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 11;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x0000000B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 269;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 12;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x0000000C:
			uParam0->f_12 = 4;
			uParam0->f_20 = 245;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 13;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x0000000D:
			uParam0->f_12 = 4;
			uParam0->f_20 = 289;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 14;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x0000000E:
			uParam0->f_12 = 5;
			uParam0->f_20 = 276;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 15;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x0000000F:
			uParam0->f_12 = 6;
			uParam0->f_20 = 237;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 16;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		case 0x00000010:
			uParam0->f_12 = 1;
			uParam0->f_20 = 339;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 0;
			uParam0->f_16 = Function_54(uParam0->f_12);
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x23D0 / 9168
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 5;
			break;
		
		case 0x00000002:
			iVar0 = 5;
			break;
		
		case 0x00000003:
			iVar0 = 6;
			break;
		
		case 0x00000004:
			iVar0 = 6;
			break;
		
		case 0x00000005:
			iVar0 = 7;
			break;
		
		case 0x00000006:
			iVar0 = 7;
			break;
		
		case 0x00000000:
		default:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

bool Function_55(int iParam0) //Position: 0x2433 / 9267
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_56(int iParam0) //Position: 0x244A / 9290
{
	return Function_112(*iParam0, 1);
}

bool Function_57(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2457 / 9303
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
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_60(bParam0))
	{
		return 1;
	}
	if (Function_59(bParam0))
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
	if (Function_58())
	{
		return 1;
	}
	return 0;
}

bool Function_58() //Position: 0x250D / 9485
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_59(bool bParam0) //Position: 0x2524 / 9508
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_60(bool bParam0) //Position: 0x252F / 9519
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

bool Function_61(int iParam0) //Position: 0x253D / 9533
{
	if (bLocal_71)
	{
		if (iLocal_317 != iParam0 || iParam0 != 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

void Function_62() //Position: 0x2559 / 9561
{
	vector3 vVar0;
	
	if (Function_112(uLocal_68, 256) && !Function_112(uLocal_68, 64))
	{
		GET_OBJECT_ORIENTATION(bLocal_82, &vVar0);
		if (Function_10(StackVal, StackVal, vVar0))
		{
			Function_47(bLocal_311);
		}
	}
	return;
}

bool Function_63(int iParam0) //Position: 0x258C / 9612
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_64() //Position: 0x25A2 / 9634
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_65(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x25AB / 9643
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

void Function_66(int iParam0) //Position: 0x264F / 9807
{
	bool bVar0;
	
	if (IS_BLIP_VALID(bLocal_81))
	{
		REMOVE_BLIP(bLocal_81);
	}
	if (IS_OBJECT_VALID(bLocal_82))
	{
		bVar0 = bLocal_82;
	}
	else if (IS_OBJECT_VALID(bLocal_84))
	{
		bVar0 = bLocal_84;
	}
	if (iParam0 != 1 && IS_OBJECT_VALID(bVar0))
	{
		bLocal_81 = ADD_BLIP_FOR_OBJECT(bVar0, 549, 0f, 2, 0);
		SET_BLIP_NAME(bLocal_81, "pm_wp_posterBlip");
		SET_BLIP_SCALE(bLocal_81, 1.0f);
		UNK_0x6077F3AE(bLocal_81, 0);
		Function_67(1, 0x41200000);
	}
	return;
}

void Function_67(float fParam0, float fParam1) //Position: 0x26C7 / 9927
{
	if (!Function_12())
	{
		switch (fParam0)
		{
			case 0x00000001:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, fParam1, 0);
				break;
			
			case 0x00000002:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, fParam1, 0);
				break;
			
			default:
				break;
			}
	}
	return;
}

var Function_68() //Position: 0x26FE / 9982
{
	int iVar0;
	
	return iVar0;
}

void Function_69(int iParam0, bool bParam1) //Position: 0x2706 / 9990
{
	if (!Function_47(bParam1))
	{
	}
	if (iParam0 == 0)
	{
		if (IS_OBJECT_VALID(bLocal_245))
		{
			SET_CAMERA_FOCUS_ENABLED(bLocal_245, 0);
		}
		Function_66(1);
		Function_18();
	}
	else
	{
		if (IS_OBJECT_VALID(bLocal_245))
		{
			SET_CAMERA_FOCUS_ENABLED(bLocal_245, 1);
		}
		Function_66(1);
		Function_19();
	}
	iLocal_72 = iParam0;
	return;
}

int Function_70(bool bParam0) //Position: 0x274C / 10060
{
	if (!IS_OBJECT_VALID(bLocal_82))
	{
		LOG_ERROR("invalid poster object");
		return 0;
	}
	if (IS_OBJECT_VALID(bLocal_85))
	{
		if (IS_GRINGO_READY(bLocal_85))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_85), false);
			return 1;
		}
	}
	if (!Function_47(bParam0))
	{
		LOG_ERROR("Could not force the poster position/rotation");
	}
	Local_50 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("bhGet") };
	bLocal_85 = CREATE_GRINGO_ON_OBJECT(bLocal_82, &Local_50, "$/content/DLC/ZombiePack/Gringos/ZombiePack_getmissingposter", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	GET_OBJECT_POSITION(bLocal_82, &Local_47);
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_85)))
	{
		return 0;
		LOG_ERROR("invalid get wanted poster gringo created");
	}
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_85), false);
	fLocal_251 = (GET_OBJECT_HEADING(bLocal_85) + 180.0f);
	iLocal_73 = 1;
	Function_9();
	return 1;
	return 0;
}

void Function_71(int iParam0) //Position: 0x2892 / 10386
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_2(90)), 0);
	return;
}

void Function_72(var uParam0, int iParam1) //Position: 0x28B3 / 10419
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_73(bool bParam0, vector3 vParam1, vector3 vParam4) //Position: 0x28C2 / 10434
{
	vector3 vVar0;
	vector3 vVar3;
	char* cVar6[64];
	int iVar22;
	bool bVar23;
	
	if (Function_10(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(bLocal_82))
	{
		return 0;
	}
	vVar0 = { StackVal, StackVal, vParam1 };
	vVar3 = { StackVal, StackVal, vParam4 };
	iVar22 = Function_52(Global_26303.f_20);
	if (!Function_74(iVar22))
	{
		LOG_ERROR("Invalid bounty hunter actorenum");
		return 0;
	}
	strcpy(&cVar6, "$/fragments/p_pos_missing", 64);
	if (Global_26303.f_40 <= 10)
	{
		stradd(&cVar6, "0", 64);
	}
	stradd(&cVar6, INT_TO_STRING(Global_26303.f_40), 64);
	stradd(&cVar6, "x", 64);
	bVar23 = FIND_OBJECT_IN_LAYOUT(Global_30616, "mpNextPoster");
	if (IS_OBJECT_VALID(bVar23))
	{
		GIVE_OBJECT_TO_LAYOUT(bVar23, bParam0);
		bLocal_82 = bVar23;
	}
	else
	{
		Local_50 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("bhPoster") };
		bLocal_82 = CREATE_PROP_IN_LAYOUT(bParam0, &Local_50, &cVar6, vVar0, vVar3, 0);
	}
	if (!IS_OBJECT_VALID(bLocal_82))
	{
		return 0;
	}
	SET_PROP_AI_OBSTACLE_ENABLED(bLocal_82, 0);
	SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_82, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_82, 0);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bLocal_82), 1);
	Local_50 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("wpcntxt") };
	bLocal_67 = CREATE_VOLUME_IN_LAYOUT(bParam0, &Local_50, 3, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 1.0f, 1.5f);
	if (!IS_VOLUME_VALID(bLocal_67))
	{
		return 0;
	}
	bLocal_244 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("pm_wp_takePoster", bLocal_67, 36, 4, 0, false, 0, 0, 4294967295, 0);
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_244))
	{
		return 0;
	}
	return 1;
}

bool Function_74(int iParam0) //Position: 0x2A70 / 10864
{
	if (iParam0 > 0 || iParam0 <= 17)
	{
		return 0;
	}
	return 1;
}

var Function_75(var uParam0, int iParam1) //Position: 0x2A86 / 10886
{
	int iVar0;
	
	iVar0 = 1;
	if (iLocal_261 == Global_30679[1])
	{
		*uParam0 = { -2651.921f, 68.3f, 3424.928f };
		*iParam1 = { -0.4054303f, 580.7257f, -3.193105f };
	}
	else if (iLocal_261 == Global_30707[1])
	{
		*uParam0 = { -717.9177f, 64.29659f, 3293.778f };
		*iParam1 = { -179.5706f, 37.63261f, -179.2682f };
	}
	else
	{
		LOG_ERROR("Undefined wanted poster location");
		iVar0 = 0;
	}
	return iVar0;
}

struct<32> Function_76(bool bParam0) //Position: 0x2B24 / 11044
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_77("0", &cVar8, ""), 4);
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

struct<32> Function_77(char* cParam0, char* cParam1, char* cParam2) //Position: 0x2B8E / 11150
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_78() //Position: 0x2BAD / 11181
{
	bool bVar0;
	
	bVar0 = true;
	if (!Function_63(iLocal_261))
	{
		LOG_ERROR("WANTEDPOSTER_FindPosterFlag - Invalid wanted poster region");
		return 0;
	}
	Function_75(&vLocal_255, &vLocal_258);
	return bVar0;
}

int Function_79() //Position: 0x2C0D / 11277
{
	if (Global_29006 == Global_30679[1])
	{
		return 1;
	}
	if (Global_29006 == Global_30707[1])
	{
		return 1;
	}
	return 0;
}

bool Function_80(int iParam0) //Position: 0x2C33 / 11315
{
	if (!Function_81(&bLocal_22))
	{
		return 0;
	}
	if (!Function_106(&(Global_29008[iParam0]), 8))
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x2C57 / 11351
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_86();
	iVar1 = 0;
	if (!Function_7(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_85(iParam0[iVar03], 8);
		}
		else if (Function_84())
		{
			iVar1 = 1;
			Function_85(iParam0[iVar03], 8);
		}
		Function_85(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_7(iParam0[03], 8) || iVar1));
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
				Function_85(iParam0[iVar03], 1);
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
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
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
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
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
	Function_82();
	return 1;
}

void Function_82() //Position: 0x2FD2 / 12242
{
	if (!Function_83(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_83(int iParam0) //Position: 0x3012 / 12306
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_84() //Position: 0x302E / 12334
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

void Function_85(var uParam0, int iParam1) //Position: 0x3059 / 12377
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_86() //Position: 0x306A / 12394
{
	if (!Function_83(128))
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

void Function_87(bool bParam0) //Position: 0x30AC / 12460
{
	if (iLocal_312 == 1)
	{
		bLocal_313 = (GET_PROFILE_TIME() - bLocal_313);
		PRINTSTRING(">>>>> BH_Profile for ");
		PRINTSTRING(bParam0);
		PRINTSTRING(": ");
		PRINTSTRING(FLOAT_TO_STRING_FORMATED(bLocal_313, 6, 8));
		PRINTNL();
		if (bLocal_313 < 5000.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was super long. You should check this.");
		}
		else if (bLocal_313 < 2500.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was really long. You should check this.");
		}
		else if (bLocal_313 < 1000.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was kinda long. You should check this.");
		}
	}
	return;
}

void Function_88() //Position: 0x31DC / 12764
{
	char* cVar0[32];
	
	strcpy(&cVar0, "$/fragments/p_pos_missing", 32);
	if (Global_26303.f_40 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	stradd(&cVar0, INT_TO_STRING(Global_26303.f_40), 32);
	stradd(&cVar0, "x", 32);
	Function_89(&bLocal_22, &cVar0, 0, 0);
	Function_89(&bLocal_22, "stand_poster", 5, 0);
	Function_89(&bLocal_22, "custom/stand_poster", 8, 0);
	Function_89(&bLocal_22, "$/content/DLC/ZombiePack/Gringos/ZombiePack_getmissingposter", 1, 0);
	Function_89(&bLocal_22, "dlc_zombiepack_pmp", 10, 0);
	Function_72(&uLocal_68, 4);
	return;
}

var Function_89(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x32D3 / 13011
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_90(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_85(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_90(var uParam0, int iParam1, int iParam2) //Position: 0x330B / 13067
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_85(uParam0[iVar03], 4);
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

var Function_91(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x33CF / 13263
{
	uParam1 = uParam1;
	uParam4 = uParam4;
	uParam2 = uParam2;
	uParam3 = uParam3;
	return Function_92(uParam0);
}

var Function_92(int iParam0) //Position: 0x33EC / 13292
{
	int iVar0;
	
	iVar0 = Function_93(iParam0->f_20);
	switch (iVar0)
	{
		case 0x00000000:
			iParam0->f_24 = Global_30640[3];
			return Global_30640[3];
			break;
		
		case 0x00000001:
			iParam0->f_24 = Global_30640[5];
			return Global_30640[5];
			break;
		
		case 0x00000002:
			iParam0->f_24 = Global_30640[16];
			return Global_30640[16];
			break;
		
		case 0x00000003:
			iParam0->f_24 = Global_30640[15];
			return Global_30640[15];
			break;
		
		case 0x00000004:
			iParam0->f_24 = Global_30658[4];
			return Global_30658[4];
			break;
		
		case 0x00000005:
			iParam0->f_24 = Global_30640[13];
			return Global_30640[13];
			break;
		
		case 0x00000006:
			iParam0->f_24 = Global_30658[3];
			return Global_30658[3];
			break;
		
		case 0x00000007:
			iParam0->f_24 = Global_30640[1];
			return Global_30640[1];
			break;
		
		case 0x00000008:
			iParam0->f_24 = Global_30679[0];
			return Global_30679[0];
			break;
		
		case 0x00000009:
			iParam0->f_24 = Global_30640[0];
			return Global_30640[0];
			break;
		
		case 0x0000000A:
			iParam0->f_24 = Global_30707[4];
			return Global_30707[4];
			break;
		
		case 0x0000000B:
			iParam0->f_24 = Global_30707[3];
			return Global_30707[3];
			break;
		
		case 0x0000000C:
			iParam0->f_24 = Global_30693[1];
			return Global_30693[1];
			break;
		
		case 0x0000000D:
			iParam0->f_24 = Global_30693[2];
			return Global_30693[2];
			break;
		
		case 0x0000000E:
			iParam0->f_24 = Global_30707[0];
			return Global_30707[0];
			break;
		
		case 0x0000000F:
			iParam0->f_24 = Global_30707[2];
			return Global_30707[2];
			break;
		
		case 0x00000010:
			iParam0->f_24 = Global_30640[10];
			return Global_30640[10];
			break;
		
		default:
			iParam0->f_24 = Global_30679[3];
			return Global_30679[3];
			break;
	}
	return 4294967295;
}

var Function_93(int iParam0) //Position: 0x35D9 / 13785
{
	int iVar0;
	struct<21> Var1;
	
	iVar0 = 4294967295;
	iVar12 = 0;
	while (iVar12 <= 17)
	{
		if (Function_53(&Var1, iVar12) == 1)
		{
			if (iParam0 == Var1.f_20)
			{
				iVar0 = iVar12;
				iVar12 = 45;
			}
		}
		iVar12++;
	}
	return iVar0;
}

void Function_94() //Position: 0x3613 / 13843
{
	if (iLocal_312 == 1)
	{
		bLocal_313 = GET_PROFILE_TIME();
	}
	return;
}

bool Function_95(var uParam0, int iParam1) //Position: 0x3626 / 13862
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = 1;
	bVar2 = 4294967295;
	if (Function_114())
	{
		return 0;
	}
	uVar1 = Function_100(iParam1);
	bVar2 = Function_99(uVar1);
	if (Function_52(uParam0->f_20) != 16 && !Function_98(21))
	{
		Function_53(uParam0, 16);
	}
	else if (Function_96(iParam1) == Global_30621[0])
	{
		switch (bVar2)
		{
			case 0x00000000:
				Function_53(uParam0, 0);
				break;
			
			case 0x00000001:
				Function_53(uParam0, 1);
				break;
			
			case 0x00000002:
				Function_53(uParam0, 2);
				break;
			
			case 0x00000003:
				Function_53(uParam0, 3);
				break;
			
			case 0x00000004:
				Function_53(uParam0, 4);
				break;
			
			case 0x00000005:
				Function_53(uParam0, 6);
				break;
			
			case 0x00000006:
				Function_53(uParam0, 7);
				break;
			
			case 0x00000007:
				Function_53(uParam0, 8);
				break;
			
			case 0x00000008:
				Function_53(uParam0, 9);
				break;
			
			default:
				LOG_ERROR("Bounty Hunter - Have already completed all bounties for this region: Frontier.");
				Function_53(uParam0, 10);
				iVar0 = 0;
				break;
		}
	}
	else
	{
		switch (bVar2)
		{
			case 0x00000000:
				Function_53(uParam0, 10);
				break;
			
			case 0x00000001:
				Function_53(uParam0, 11);
				break;
			
			case 0x00000002:
				Function_53(uParam0, 12);
				break;
			
			case 0x00000003:
				Function_53(uParam0, 13);
				break;
			
			case 0x00000004:
				Function_53(uParam0, 14);
				break;
			
			case 0x00000005:
				Function_53(uParam0, 15);
				break;
			
			default:
				LOG_ERROR("Bounty Hunter - Have already completed all bounties for this region: Mexico.");
				Function_53(uParam0, 10);
				iVar0 = 0;
				break;
			}
	}
	uParam0->f_32 = 0;
	uParam0->f_16 = Function_54(uParam0->f_12);
	if (iParam1 != 4294967294)
	{
		uParam0->f_24 = iParam1;
	}
	return iVar0;
}

int Function_96(int iParam0) //Position: 0x3860 / 14432
{
	return Function_97(iParam0);
}

int Function_97(int iParam0) //Position: 0x386B / 14443
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_63(iParam0))
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

bool Function_98(int iParam0) //Position: 0x38C3 / 14531
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_99(int iParam0) //Position: 0x38D8 / 14552
{
	if (!Function_32(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

int Function_100(int iParam0) //Position: 0x38F2 / 14578
{
	if (Function_63(iParam0))
	{
		return Function_101(iParam0, 0, 2);
	}
	return 4294967295;
}

int Function_101(bool bParam0, bool bParam1, bool bParam2) //Position: 0x390C / 14604
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_104(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_102(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_102(bParam0, bParam1, bParam2, 4294967295);
}

int Function_102(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x396A / 14698
{
	var uVar0;
	
	if (!Function_29(bParam2))
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
	uVar0 = Function_104(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_103(uVar0);
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

int Function_103(int iParam0) //Position: 0x3ABF / 15039
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

var Function_104(int iParam0, int iParam1, int iParam2) //Position: 0x3AFD / 15101
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_105(int iParam0) //Position: 0x3B1D / 15133
{
	if (!Function_63(iParam0))
	{
		return 1;
	}
	return Function_106(&(Global_29008[iParam0]), 4);
}

bool Function_106(var uParam0, int iParam1) //Position: 0x3B39 / 15161
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_107(int iParam0) //Position: 0x3B55 / 15189
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_25267 - 1))
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_44(&(Global_25267[iVar058]), 4) && !IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_108(int iParam0) //Position: 0x3BA4 / 15268
{
	Function_116(iParam0, 0.0f);
	return;
}

bool Function_109(int iParam0, float fParam1) //Position: 0x3BB0 / 15280
{
	if (Function_56(iParam0))
	{
		if (Function_110(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_110(int iParam0) //Position: 0x3BCC / 15308
{
	if (Function_56(iParam0))
	{
		if (Function_111(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_111(int iParam0) //Position: 0x3C94 / 15508
{
	return Function_112(*iParam0, 2);
}

bool Function_112(var uParam0, int iParam1) //Position: 0x3CA1 / 15521
{
	return (uParam0 && iParam1) == 0;
}

var Function_113(int iParam0) //Position: 0x3CAE / 15534
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 & 33 == 1)
	{
		iVar0 = 5;
	}
	else if (iParam0 & 3 == 2)
	{
		iVar0 = 7;
	}
	else if (iParam0 & 6 == 4)
	{
		iVar0 = 11;
	}
	else if (iParam0 & 12 == 8)
	{
		iVar0 = 14;
	}
	else if (iParam0 & 24 == 16)
	{
		iVar0 = 18;
	}
	else if (iParam0 & 48 == 32)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

bool Function_114() //Position: 0x3D1A / 15642
{
	return Function_112(StackVal, 1);
}

var Function_115() //Position: 0x3D29 / 15657
{
	return StackVal;
}

void Function_116(var uParam0, float fParam1) //Position: 0x3D34 / 15668
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_72(uParam0, 1);
	Function_26(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

int Function_117(bool bParam0) //Position: 0x3D55 / 15701
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

