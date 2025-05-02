//Decompiled with MagicRDR v1.0
//Function Count : 330
//Statics Count : 447
//Natives Count : 510
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
	int iLocal_103 = 20;
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
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = false;
	var uLocal_194 = 0;
	bool bLocal_195 = false;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	int iLocal_201 = 0;
	var uLocal_202 = 0;
	bool bLocal_203 = false;
	float fLocal_204 = 0.0f;
	bool bLocal_205 = false;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	var uLocal_208[6] = { 0, 0, 0, 0, 0, 0 };
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
	int iLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 11;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
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
	var uLocal_293 = 11;
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
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	int iLocal_339 = 3;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	bool bLocal_353 = false;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	bool bLocal_356 = false;
	struct<2> Local_357 = { 0, 0 } ;
	var uLocal_359 = 0;
	int iLocal_360 = 0;
	bool bLocal_361 = false;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	struct<65> Local_365 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	int iLocal_435 = 0;
	var uLocal_436 = 0;
	struct<2> Local_437 = { 0, 0 } ;
	var uLocal_439 = 0;
	struct<2> Local_440 = { 0, 0 } ;
	var uLocal_442 = 0;
	int iLocal_443 = 0;
	var uLocal_444 = 0;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_4 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	iLocal_237 = 0;
	iLocal_324 = 16;
	iLocal_325 = 0;
	bLocal_353 = false;
	iLocal_354 = 1;
	iLocal_355 = 1;
	bLocal_356 = false;
	iLocal_435 = 0;
	Local_437 = Vector(735,66f, 78,306f, 1304,552f);
	Local_440 = Vector(735,404f, 78,306f, 1317,181f);
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
			iLocal_332 = 0;
			bLocal_356 = true;
			Function_329(&iLocal_339, 359, 3, 0);
			Function_327(&iLocal_339, "dead_ground_male", 5, 0);
			Function_327(&iLocal_339, "RandomCharMissions", 10, 0);
			if (!IS_ACTOR_VALID(&Global_99725[ScriptParam_043] + 312))
			{
				*(&Global_99725[ScriptParam_043] + 312) = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_99717, "WRONGED3", Global_99725[ScriptParam_043].f_220, *(&Global_99725[ScriptParam_043] + 184), Vector(0.0f, Global_99725[ScriptParam_043].f_208, 0.0f));
				Function_319(&(Global_99725[ScriptParam_043]), ScriptParam_0, 1);
			}
			while (!IS_EXITFLAG_SET())
			{
				iLocal_326 = &Global_99725[ScriptParam_043] + 312;
				if (Global_116927[746].f_28 == 1)
				{
					if (IS_ACTOR_VALID(&iLocal_326) && IS_OBJECT_VALID(&uLocal_333))
					{
						DESTROY_ACTOR(&iLocal_326);
						Function_318(&Global_99725[ScriptParam_043] + 228, 512);
					}
				}
				switch (iLocal_332)
				{
					case 0x00000000:
						if (!Function_315(&(Global_99725[ScriptParam_043]), 74, 0, 1))
						{
							Function_314(&Global_99725[ScriptParam_043] + 228, 64);
							Function_312(&(Global_99725[ScriptParam_043]), 74, 0, 1, 1);
							iLocal_332 = 13;
						}
						else if (Function_307(&iLocal_339))
						{
							if (IS_LAYOUTREF_VALID(&uLocal_328))
							{
								if (Global_116927[746].f_28 != 0 && IS_ACTOR_VALID(&iLocal_326))
								{
									if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
									{
										if (!IS_OBJECT_VALID(&uLocal_330))
										{
											uLocal_330 = CREATE_OBJECTSET_IN_LAYOUT("Wronged_Loot", &uLocal_328, 12, 0);
											DECOR_SET_OBJECT(&iLocal_326, "lootCorpse_objSet", &uLocal_330);
											if (Function_306())
											{
												DECOR_SET_INT(&iLocal_326, "nOnlyMoney", 400);
											}
											else
											{
												DECOR_SET_INT(&iLocal_326, "nOnlyMoney", 200);
											}
											DECOR_SET_BOOL(&iLocal_326, "Weapon", false);
											DECOR_SET_BOOL(&iLocal_326, "WrongedKilled", true);
										}
										SET_ACTOR_INVULNERABILITY(&iLocal_326, false);
										SET_ACTOR_INVULNERABILITY(&Global_54076, false);
										Global_99725[ScriptParam_043].f_236 = 1;
										Function_305(&iLocal_326, 0);
										Function_304(&iLocal_326);
										MEMORY_ATTACK_ON_SIGHT(&iLocal_326, 1);
										COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_326, 4, 15.0f);
										if (SQUAD_IS_VALID(SQUAD_GET(&iLocal_326)))
										{
											SQUAD_GOALS_CLEAR(SQUAD_GET(&iLocal_326));
										}
										if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288) && IS_ACTOR_VALID(&iLocal_326))
										{
											iLocal_332 = 1;
										}
										else if (!IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
										{
										}
										else if (!IS_ACTOR_VALID(&iLocal_326))
										{
										}
									}
								}
								else if (Global_116927[746].f_28 == 1)
								{
									if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304))
									{
										RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[ScriptParam_043] + 304);
									}
									if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
									{
										Function_303(&Global_99725[ScriptParam_043] + 288);
									}
									Function_318(&Global_99725[ScriptParam_043] + 228, 2048);
									Function_318(&Global_99725[ScriptParam_043] + 228, 512);
									if (IS_LAYOUTREF_VALID(&uLocal_328) && IS_LAYOUTREF_VALID(GET_GC_LAYOUT()))
									{
										uLocal_337 = CREATE_OBJECT_ITERATOR(&uLocal_328);
										ITERATE_IN_LAYOUT(&uLocal_337, GET_GC_LAYOUT());
										ITERATE_ON_OBJECT_TYPE(&uLocal_337, 29);
										uLocal_335 = START_OBJECT_ITERATOR(&uLocal_337);
										while (IS_OBJECT_VALID(&uLocal_335))
										{
											if (DECOR_GET_BOOL(&uLocal_335, "WaterKilled"))
											{
												uLocal_333 = &uLocal_335;
												GET_OBJECT_POSITION(&uLocal_333, &Local_357);
												REFERENCE_OBJECT(&uLocal_333);
												*(&Global_99725[7443] + 184) = Local_357;
												bLocal_353 = true;
											}
											uLocal_335 = OBJECT_ITERATOR_NEXT(&uLocal_337);
										}
										DESTROY_ITERATOR(&uLocal_337);
										iLocal_332 = 3;
									}
								}
							}
							else if (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Wronged_layout")))
							{
								Function_301();
								uLocal_328 = &iLocal_443;
							}
							else
							{
								uLocal_328 = FIND_NAMED_LAYOUT("Wronged_layout");
							}
						}
						break;
					
					case 0x00000001:
						if (!Function_315(&(Global_99725[ScriptParam_043]), 74, 0, 1))
						{
							Function_314(&Global_99725[ScriptParam_043] + 228, 64);
							Function_312(&(Global_99725[ScriptParam_043]), 74, 0, 1, 1);
							iLocal_332 = 13;
						}
						else if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
						{
							if (IS_ACTOR_VALID(&iLocal_326) && ((((IS_ACTOR_HOGTIED(&iLocal_326) || IS_AI_ACTOR_ENGAGED_IN_COMBAT(&iLocal_326)) || AI_IS_AGGROING(&iLocal_326, &Global_54076)) || AI_IS_HOSTILE_OR_ENEMY(&iLocal_326, &Global_54076)) || Function_300(&Global_54076, &iLocal_326, 1, 1, 0, 3212836864)))
							{
								if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304))
								{
									RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[ScriptParam_043] + 304);
								}
								if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
								{
									Function_303(&Global_99725[ScriptParam_043] + 288);
								}
								if (IS_BLIP_VALID(&Global_99725[ScriptParam_043] + 272))
								{
									REMOVE_BLIP(&Global_99725[ScriptParam_043] + 272);
								}
								if (IS_BLIP_VALID(&Global_99725[ScriptParam_043] + 280))
								{
									REMOVE_BLIP(&Global_99725[ScriptParam_043] + 280);
								}
								Function_318(&Global_99725[ScriptParam_043] + 228, 2048);
								Function_318(&Global_99725[ScriptParam_043] + 228, 512);
								HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(&iLocal_326, true);
								HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&iLocal_326, 322);
								SET_ACTOR_FACTION(&iLocal_326, 19);
								TASK_SHOOT_FROM_POSITION(&iLocal_326, &Global_54076, &Global_99725[ScriptParam_043] + 184);
								TASK_PRIORITY_SET(&iLocal_326, true);
								iLocal_332 = 5;
							}
							else if (!IS_ACTOR_VALID(&iLocal_326) || !IS_ACTOR_ALIVE(&iLocal_326))
							{
								if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304))
								{
									RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[ScriptParam_043] + 304);
								}
								if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
								{
									Function_303(&Global_99725[ScriptParam_043] + 288);
								}
								if (IS_BLIP_VALID(&Global_99725[ScriptParam_043] + 272))
								{
									REMOVE_BLIP(&Global_99725[ScriptParam_043] + 272);
								}
								if (IS_BLIP_VALID(&Global_99725[ScriptParam_043] + 280))
								{
									REMOVE_BLIP(&Global_99725[ScriptParam_043] + 280);
								}
								Function_318(&Global_99725[ScriptParam_043] + 228, 2048);
								Function_318(&Global_99725[ScriptParam_043] + 228, 512);
								iLocal_332 = 5;
							}
							if (GATEWAY_UPDATE(&Global_99725[ScriptParam_043] + 288))
							{
								if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304) && !Function_296(&Global_54076, 0, 1))
								{
									iLocal_332 = 2;
								}
								else if (((!IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304) && HAS_STRING_TABLE_LOADED("RandomCharMissions")) && IS_LAYOUTREF_VALID(&uLocal_328)) && !Function_296(&Global_54076, 0, 1))
								{
									*(&Global_99725[ScriptParam_043] + 304) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(&Global_99725[ScriptParam_043] + 44, GATEWAY_GET_VOLUME(&Global_99725[ScriptParam_043] + 288), 30, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
								}
							}
							else if (Function_296(&Global_54076, 0, 1) && IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304))
							{
								RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[ScriptParam_043] + 304);
							}
						}
						break;
					
					case 0x00000002:
						if (IS_ACTOR_VALID(&iLocal_326) && ((((IS_ACTOR_HOGTIED(&iLocal_326) || IS_AI_ACTOR_ENGAGED_IN_COMBAT(&iLocal_326)) || AI_IS_AGGROING(&iLocal_326, &Global_54076)) || AI_IS_HOSTILE_OR_ENEMY(&iLocal_326, &Global_54076)) || Function_300(&Global_54076, &iLocal_326, 1, 1, 0, 3212836864)))
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304))
							{
								RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[ScriptParam_043] + 304);
							}
							if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
							{
								Function_303(&Global_99725[ScriptParam_043] + 288);
							}
							if (IS_BLIP_VALID(&Global_99725[ScriptParam_043] + 272))
							{
								REMOVE_BLIP(&Global_99725[ScriptParam_043] + 272);
							}
							if (IS_BLIP_VALID(&Global_99725[ScriptParam_043] + 280))
							{
								REMOVE_BLIP(&Global_99725[ScriptParam_043] + 280);
							}
							Function_318(&Global_99725[ScriptParam_043] + 228, 2048);
							Function_318(&Global_99725[ScriptParam_043] + 228, 512);
							HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(&iLocal_326, true);
							HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&iLocal_326, 322);
							SET_ACTOR_FACTION(&iLocal_326, 19);
							TASK_SHOOT_FROM_POSITION(&iLocal_326, &Global_54076, &Global_99725[ScriptParam_043] + 184);
							TASK_PRIORITY_SET(&iLocal_326, true);
							iLocal_332 = 5;
						}
						else if (!IS_ACTOR_VALID(&iLocal_326) || !IS_ACTOR_ALIVE(&iLocal_326))
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304))
							{
								RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[ScriptParam_043] + 304);
							}
							if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
							{
								Function_303(&Global_99725[ScriptParam_043] + 288);
							}
							if (IS_BLIP_VALID(&Global_99725[ScriptParam_043] + 272))
							{
								REMOVE_BLIP(&Global_99725[ScriptParam_043] + 272);
							}
							if (IS_BLIP_VALID(&Global_99725[ScriptParam_043] + 280))
							{
								REMOVE_BLIP(&Global_99725[ScriptParam_043] + 280);
							}
							Function_318(&Global_99725[ScriptParam_043] + 228, 2048);
							Function_318(&Global_99725[ScriptParam_043] + 228, 512);
							iLocal_332 = 5;
						}
						if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
						{
							if (GATEWAY_UPDATE(&Global_99725[ScriptParam_043] + 288))
							{
								if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304) && Global_116927[ScriptParam_06] != 5)
								{
									if ((StackVal && FABS((StackVal - !Function_296(&Global_54076, 0, 1))) > 2.0f) && IS_SCRIPT_USE_CONTEXT_PRESSED(&Global_99725[ScriptParam_043] + 304))
									{
										RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[ScriptParam_043] + 304);
										if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
										{
											GATEWAY_DISABLE(&Global_99725[ScriptParam_043] + 288, 1);
										}
										HUD_FADE_OUT(1.0f, 1f, 1);
										SET_PLAYER_CONTROL(0, 0, 0, 0);
										iLocal_332 = 6;
									}
								}
							}
							if (Function_296(&Global_54076, 0, 1) || !GATEWAY_UPDATE(&Global_99725[ScriptParam_043] + 288))
							{
								if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304))
								{
									RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[ScriptParam_043] + 304);
									iLocal_332 = 1;
								}
							}
						}
						break;
					
					case 0x00000003:
						if (!bLocal_353)
						{
							uLocal_333 = CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, &uLocal_328, Function_295(), 359, *(&Global_99725[ScriptParam_043] + 184), Vector(0.0f, 180.0f, 0.0f), "dead_ground_male");
							if (!IS_OBJECT_VALID(&uLocal_330))
							{
								uLocal_330 = CREATE_OBJECTSET_IN_LAYOUT("Wronged_Loot", &uLocal_328, 12, 0);
							}
							if (IS_OBJECT_VALID(&uLocal_330))
							{
								if (!DECOR_CHECK_EXIST(&uLocal_333, "lootCorpse_objSet"))
								{
									DECOR_SET_OBJECT(&uLocal_333, "lootCorpse_objSet", &uLocal_330);
								}
								if (!DECOR_CHECK_EXIST(&uLocal_333, "nOnlyMoney"))
								{
									if (Function_306())
									{
										DECOR_SET_INT(&uLocal_333, "nOnlyMoney", 400);
									}
									else
									{
										DECOR_SET_INT(&uLocal_333, "nOnlyMoney", 200);
									}
								}
								if (!DECOR_CHECK_EXIST(&uLocal_333, "Weapon"))
								{
									DECOR_SET_BOOL(&uLocal_333, "Weapon", false);
								}
								if (!DECOR_CHECK_EXIST(&uLocal_333, "WrongedKilled"))
								{
									DECOR_SET_BOOL(&uLocal_333, "WrongedKilled", true);
								}
							}
							SET_CORPSE_PERMANENT(&uLocal_333, 1);
							REFERENCE_OBJECT(&uLocal_333);
							iLocal_332 = 11;
						}
						else
						{
							iLocal_332 = 11;
						}
						break;
					
					case 0x00000006:
						if (HUD_IS_FADED())
						{
							GATEWAY_DISABLE(&Global_99725[7443] + 288, 1);
							Function_318(&Global_99725[7443] + 228, 512);
							Function_294();
							MAKE_ACTOR_READY_FOR_ACTION(&iLocal_326, 1);
							TASK_STAND_STILL(&iLocal_326, -1.0f, 0, 0);
							uLocal_363 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_328, Function_295(), 2, Local_440, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 10.0f, 40.0f));
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_363);
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_363);
							if (IS_BLIP_VALID(&Global_99725[ScriptParam_043] + 272))
							{
								REMOVE_BLIP(&Global_99725[ScriptParam_043] + 272);
							}
							if (IS_BLIP_VALID(&Global_99725[ScriptParam_043] + 280))
							{
								REMOVE_BLIP(&Global_99725[ScriptParam_043] + 280);
							}
							TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_437, 178,098f, 1, 1, true);
							TELEPORT_ACTOR_WITH_HEADING(&iLocal_326, Local_440, 3,323f, 1, 1, true);
							Function_293(StackVal, StackVal, &Local_365, &iLocal_326, Local_437, Local_440, 175, 0, &uLocal_328, 0, 0, 0);
							Local_365.f_64 = 1;
							Function_130(&Local_365, &iLocal_435, &iLocal_397, &uLocal_436, 74);
							iLocal_332 = 9;
						}
						break;
					
					case 0x00000005:
						if (!IS_ACTOR_ALIVE(&iLocal_326))
						{
							Global_116927[746].f_28 = 1;
							if (!IS_OBJECT_VALID(&uLocal_330))
							{
								uLocal_330 = CREATE_OBJECTSET_IN_LAYOUT("Wronged_Loot", &uLocal_328, 12, 0);
								DECOR_SET_OBJECT(&iLocal_326, "lootCorpse_objSet", &uLocal_330);
							}
							if (iLocal_355)
							{
								Function_129("Wronged2a_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
								Global_116927[756].f_24 = 1;
								iLocal_360 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_99725[ScriptParam_043].f_224);
								bLocal_361 = false;
								while (bLocal_361 <= iLocal_360)
								{
									SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_99725[ScriptParam_043].f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_99725[ScriptParam_043].f_224, bLocal_361), 4, 0);
									bLocal_361++;
								}
								APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[ScriptParam_043].f_224, "Wronged2a_OBJ", 0, 3, false);
								Function_128(Global_99725[ScriptParam_043].f_224, 0);
								iLocal_355 = 0;
							}
							iLocal_332 = 8;
						}
						else if (IS_ACTOR_HOGTIED(&iLocal_326) || (UNK_0x7A207FFE(&iLocal_326) && GET_LAST_ATTACKER(&iLocal_326) != &Global_54076))
						{
							if (iLocal_354)
							{
								Function_126("RCM_Wronged_Kill_Money", 0x41200000, 1, 0, 2, 1, 0);
								iLocal_354 = 0;
							}
							iLocal_332 = 5;
						}
						else if (!GET_TASK_STATUS(&iLocal_326, 8) != 1 || (!GET_TASK_STATUS(&iLocal_326, 4294967295) != 3 && IS_ACTOR_ALIVE(&iLocal_326)))
						{
							TASK_SHOOT_FROM_POSITION(&iLocal_326, &Global_54076, &Global_99725[ScriptParam_043] + 184);
							TASK_PRIORITY_SET(&iLocal_326, true);
							if (iLocal_355)
							{
								Function_129("Wronged2a_SHORT", 7,5f, 1, 0, 0, 0, 0, 0);
								iLocal_360 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_99725[ScriptParam_043].f_224);
								bLocal_361 = false;
								while (bLocal_361 <= iLocal_360)
								{
									SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_99725[ScriptParam_043].f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_99725[ScriptParam_043].f_224, bLocal_361), 4, 0);
									bLocal_361++;
								}
								APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[ScriptParam_043].f_224, "Wronged2a_OBJ", 0, 3, false);
								Function_128(Global_99725[ScriptParam_043].f_224, 0);
								iLocal_355 = 0;
							}
						}
						break;
					
					case 0x00000008:
						if (IS_LAYOUTREF_VALID(&uLocal_328) && IS_LAYOUTREF_VALID(GET_GC_LAYOUT()))
						{
							uLocal_337 = CREATE_OBJECT_ITERATOR(&uLocal_328);
							ITERATE_IN_LAYOUT(&uLocal_337, GET_GC_LAYOUT());
							ITERATE_ON_OBJECT_TYPE(&uLocal_337, 29);
							uLocal_335 = START_OBJECT_ITERATOR(&uLocal_337);
							while (IS_OBJECT_VALID(&uLocal_335))
							{
								if (DECOR_GET_BOOL(&uLocal_335, "WrongedKilled"))
								{
									uLocal_333 = &uLocal_335;
									REFERENCE_OBJECT(&uLocal_333);
									GET_OBJECT_POSITION(&uLocal_333, &Local_357);
									*(&Global_99725[7443] + 184) = Local_357;
									iLocal_332 = 11;
								}
								uLocal_335 = OBJECT_ITERATOR_NEXT(&uLocal_337);
							}
							DESTROY_ITERATOR(&uLocal_337);
						}
						break;
					
					case 0x00000009:
						if (Function_130(&Local_365, &iLocal_435, &iLocal_397, &uLocal_436, 74))
						{
							SET_PLAYER_CONTROL(0, 1, 0, 0);
							REQUEST_STRING_TABLE("RandomCharMissions");
							iLocal_332 = 10;
						}
						break;
					
					case 0x0000000A:
						if (DECOR_GET_INT(&Global_54076, "iDuelResult") == 5001)
						{
							if (HAS_STRING_TABLE_LOADED("RandomCharMissions"))
							{
								Global_116927[746].f_28 = 1;
								Global_116927[756].f_24 = 2;
								Function_109(50, 1, 0);
								Function_129("Wronged3a_OBJ", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iLocal_360 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_99725[ScriptParam_043].f_224);
								bLocal_361 = false;
								while (bLocal_361 <= iLocal_360)
								{
									SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_99725[ScriptParam_043].f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_99725[ScriptParam_043].f_224, bLocal_361), 4, 0);
									bLocal_361++;
								}
								APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[ScriptParam_043].f_224, "Wronged3a_OBJ", 0, 3, false);
								Function_128(Global_99725[ScriptParam_043].f_224, 0);
								iLocal_332 = 8;
							}
						}
						else
						{
							Global_116927[746].f_28 = 0;
							DECOR_REMOVE(&Global_54076, "iDuelResult");
							ACTOR_DATA_GRAVITY_LIMIT(0);
							Function_314(&Global_99725[ScriptParam_043] + 228, 512);
							Function_318(&Global_99725[ScriptParam_043] + 228, 128);
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
							iLocal_332 = 13;
						}
						break;
					
					case 0x0000000B:
						if (GET_OBJECTSET_SIZE(&uLocal_330) != 0)
						{
							uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_330);
							if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uVar0))
							{
								HUD_CLEAR_HELP();
								UI_REMOVE_MESSAGE_IN_QUEUE("Wronged_Help3", 1, 0);
								Function_129("Wronged3_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iLocal_360 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_99725[ScriptParam_043].f_224);
								bLocal_361 = false;
								while (bLocal_361 <= iLocal_360)
								{
									SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_99725[ScriptParam_043].f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_99725[ScriptParam_043].f_224, bLocal_361), 4, 0);
									bLocal_361++;
								}
								APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[ScriptParam_043].f_224, "Wronged3_OBJ", 0, 3, false);
								Function_128(Global_99725[ScriptParam_043].f_224, 0);
								Function_13(74, 1, 1, 0);
								DECOR_REMOVE(&Global_54076, "iDuelResult");
								ACTOR_DATA_GRAVITY_LIMIT(0);
								Function_318(&Global_99725[ScriptParam_043] + 228, 128);
								Function_314(&Global_99725[ScriptParam_043] + 228, 512);
								TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
								iLocal_332 = 13;
							}
						}
						break;
				}
				WAIT(false);
			}
			break;
	}
	if (IS_OBJECT_VALID(&uLocal_333))
	{
		if (StackVal && !Function_9(Function_10(&Global_54076, &uLocal_333) < 100.0f, Local_357, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			Function_126("Wronged_HELP2", 0x41200000, 1, 0, 2, 1, 0);
			Function_314(&Global_99725[ScriptParam_043] + 228, 2048);
			Function_8(74);
			DESTROY_OBJECT(&uLocal_333);
			Function_318(&Global_99725[ScriptParam_043] + 228, 128);
			ACTOR_DATA_GRAVITY_LIMIT(0);
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
		}
	}
	Function_314(&Global_99725[ScriptParam_043] + 228, 512);
	Function_314(&Global_99725[ScriptParam_043] + 228, 2048);
	if (IS_LAYOUTREF_VALID(&uLocal_328))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_328);
		RELEASE_LAYOUT_REF(&uLocal_328);
	}
	if (IS_OBJECT_VALID(&uLocal_333))
	{
		RELEASE_OBJECT_REF(&uLocal_333);
	}
	if (IS_VOLUME_VALID(&uLocal_363))
	{
		DESTROY_VOLUME(&uLocal_363);
	}
	if (bLocal_356)
	{
		Function_7();
	}
	Function_3(&iLocal_339);
	Function_1(0, 0, 0);
	return;
}

int Function_1(bool bParam0, bool bParam1, bool bParam2) //Position: 0x148B / 5259
{
	if (&bParam2)
	{
		if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			return 0;
		}
	}
	if (&bParam0)
	{
		CAMERA_RESET(0);
	}
	if (&bParam1)
	{
		Function_2(1.0f);
	}
	TERMINATE_THIS_SCRIPT();
	return 1;
}

void Function_2(bool bParam0) //Position: 0x14BD / 5309
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

void Function_3(int iParam0) //Position: 0x14DA / 5338
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_4(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_4(struct<2>[] Param0, int iParam1) //Position: 0x1502 / 5378
{
	if (Function_6(&(Param0[iParam12]), 4))
	{
		if (Function_6(&(Param0[iParam12]), 1))
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
			Function_5(&(Param0[iParam12]), 1);
			Function_5(&(Param0[iParam12]), 2);
			Function_5(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_5(struct<13> Param0) //Position: 0x164D / 5709
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_6(struct<13> Param0) //Position: 0x166A / 5738
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0x1688 / 5768
{
	RELEASE_LAYOUT_REF(&iLocal_443);
	return;
}

void Function_8(int iParam0) //Position: 0x1695 / 5781
{
	char* cVar0[32];
	
	Global_116927[iParam06] = 7;
	*(&Global_116927[iParam06] + 8) = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_116927[iParam06] + 8, &Global_99725[iParam043] + 160);
	PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Fail", &Global_99725[iParam043] + 4, "", "", "", 0, 2, 0, 0, 0);
	switch (Global_43787)
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
			PRINTINT(Global_43787);
			LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
			break;
	}
	stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
	AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
	SAY_SINGLE_LINE_CONTEXT(&Global_54076, 394, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_99725[iParam043].f_224, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

bool Function_9(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x17FE / 6142
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

float Function_10(int iParam0, var uParam1) //Position: 0x181F / 6175
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_12(&iParam0);
			Var0 = Function_12(&iParam0);
			Function_11(&uParam1);
			Var2 = Function_11(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_11(int iParam0) //Position: 0x18C1 / 6337
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

struct<8> Function_12(int iParam0) //Position: 0x192F / 6447
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

void Function_13(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x199B / 6555
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
	
	if (&bParam1)
	{
		PLAY_SOUND_FRONTEND("HUD_MENU_JOURNAL_MASTER");
	}
	if (!Function_108())
	{
		if (!Function_107(Global_119934, 2097152))
		{
			Function_102(&Global_54076, 2097152, 1, 0);
		}
	}
	iVar0 = iParam0;
	if (iVar0 + 1 <= 77)
	{
		if (Global_99725[iVar0 + 143].f_248)
		{
			bVar2 = (GET_DAY(GET_TIME_OF_DAY()) + GET_DAY(&Global_99725[iVar0 + 143] + 240));
			bVar3 = (GET_HOUR(GET_TIME_OF_DAY()) + GET_HOUR(&Global_99725[iVar0 + 143] + 240));
			iVar4 = (GET_MINUTE(GET_TIME_OF_DAY()) + GET_MINUTE(&Global_99725[iVar0 + 143] + 240));
			iVar5 = (GET_SECOND(GET_TIME_OF_DAY()) + GET_SECOND(&Global_99725[iVar0 + 143] + 240));
			iVar1 = MAKE_TIME_OF_DAY_EX(bVar2, bVar3, iVar4, iVar5);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
		}
		PRINTSTRING("Time next quest leg will be available: ");
		Function_101(&iVar1);
		PRINTNL();
		*(&Global_99725[iVar0 + 143] + 240) = &iVar1;
	}
	Global_116927[iParam06] = 6;
	*(&Global_116927[iParam06] + 8) = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_116927[iParam06] + 8, &Global_99725[iParam043] + 168);
	Global_116927[iParam06].f_36 = TO_FLOAT(GET_ACTOR_ENUM(&Global_54076));
	if (IS_BLIP_VALID(&Global_99725[iParam043] + 272))
	{
		REMOVE_BLIP(&Global_99725[iParam043] + 272);
	}
	if (IS_BLIP_VALID(&Global_99725[iParam043] + 280))
	{
		REMOVE_BLIP(&Global_99725[iParam043] + 280);
	}
	if (IS_OBJECT_VALID(&Global_99725[iParam043] + 288))
	{
		DESTROY_OBJECT(&Global_99725[iParam043] + 288);
	}
	Function_314(&Global_99725[iParam043] + 228, 64);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_100();
	}
	iVar6 = &Global_99725[iParam043] + 36;
	iVar7 = &Global_99725[iParam043] + 36;
	bVar8 = true;
	while (&Global_99725[iVar643] + 36 != iVar7 && bVar8)
	{
		if (!(Global_116927[iVar66] != 6 || Global_116927[iVar66] != 0))
		{
			bVar8 = false;
		}
		iVar6++;
	}
	if (&bParam3)
	{
		bVar8 = true;
	}
	if (bVar8)
	{
		if (!&bParam3)
		{
			if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
			{
				CLEAR_JOURNAL_ENTRY(Global_99725[iParam043].f_224);
				REMOVE_JOURNAL_ENTRY(Global_99725[iParam043].f_224, false);
				PREPEND_JOURNAL_ENTRY(Global_99725[iParam043].f_224, true);
				memcpy(&cVar9, StackVal, StackVal, StackVal, *(&Global_99725[iParam043] + 4), 8);
				if (Global_116927[iParam06].f_24 == 1)
				{
					stradd(&cVar9, "_COMPLETE1", 32);
				}
				else if (Global_116927[iParam06].f_24 == 2)
				{
					stradd(&cVar9, "_COMPLETE2", 32);
				}
				else
				{
					stradd(&cVar9, "n_COMPLETE", 32);
				}
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[iParam043].f_224, &cVar9, 0, 2, false);
				SET_JOURNAL_ENTRY_PROGRESS(Global_99725[iParam043].f_224, -1.0f, false, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(16))
			{
				AWARD_ACHIEVEMENT(16);
			}
		}
		else
		{
			DEACTIVATE_JOURNAL_ENTRY(Global_99725[iParam043].f_224, 1);
			SET_JOURNAL_ENTRY_PROGRESS(Global_99725[iParam043].f_224, -1.0f, false, "RCM_InactiveJournal");
		}
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
	{
		Function_59(Global_99725[iParam043].f_224);
	}
	if (&Global_99717 + 16 == iParam0)
	{
		Global_99717.f_28 = 0;
		Global_99717.f_24 = 999.0f;
		*(&Global_99717 + 16) = 4294967295;
	}
	if (&bParam2)
	{
		if (!Function_58(0, 0, 1, 1))
		{
			Function_17(1);
			Function_16(&bParam1, 7);
		}
		else
		{
			Function_15();
		}
	}
	bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 1);
	if (IS_ACTOR_VALID(&Global_99725[iParam043] + 312))
	{
		Function_14(iParam0, &iVar18, &iVar19, &iVar20, &iVar21, &iVar22, &iVar23);
		if (iParam0 == 35)
		{
			AUDIO_ADD_ALTERNATE_CONTEXT(&Global_99725[iParam043] + 312, "RCM_CALL_OVER", "RCM_STILL_HERE_PRE2");
		}
		if (iParam0 == 36)
		{
			AUDIO_ADD_ALTERNATE_CONTEXT(&Global_99725[iParam043] + 312, "RCM_STILL_HERE", "RCM_STILL_HERE_POST2");
		}
		if (iParam0 == 58)
		{
			AUDIO_ADD_ALTERNATE_CONTEXT(&Global_99725[iParam043] + 312, "RCM_STILL_HERE", "RCM_COMPLETE_STILL_HERE");
		}
		if (iParam0 == 70)
		{
			SET_RCM_ACTOR_CALL_OVER_ENABLE(&Global_99725[iParam043] + 312, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
			return;
		}
		if (iParam0 == 26)
		{
			SET_RCM_ACTOR_CALL_OVER_ENABLE(&Global_99725[iParam043] + 312, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
			return;
		}
		if (iParam0 == 55)
		{
			SET_RCM_ACTOR_CALL_OVER_ENABLE(&Global_99725[iParam043] + 312, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
			return;
		}
		SET_RCM_ACTOR_CALL_OVER_ENABLE(&Global_99725[iParam043] + 312, 1, 1, bVar17, iVar18, iVar19, iVar20, iVar21, iVar22, iVar23);
	}
	else
	{
		PRINTSTRING("SET_RCM_ACTOR_CALL_OVER_ENABLE called with invalid actor.");
		PRINTNL();
	}
}

void Function_14(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1F33 / 7987
{
	uParam3 = 2;
	uParam4 = 20.0f;
	uParam5 = 7.0f;
	uParam6 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			uParam1 = 1;
			uParam2 = 1;
			break;
		
		case 0x0000000F:
			uParam1 = 0;
			uParam2 = 1;
			uParam3 = 3;
			uParam5 = 2,5f;
			uParam4 = 8.0f;
			break;
		
		case 0x00000015:
			uParam1 = 0;
			uParam2 = 0;
			break;
		
		case 0x00000017:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x0000001C:
			uParam1 = 1;
			uParam2 = 1;
			break;
		
		case 0x00000020:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000023:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000026:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000027:
			uParam1 = 1;
			uParam2 = 1;
			break;
		
		case 0x0000002B:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000031:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000036:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x00000039:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		case 0x0000003C:
			uParam1 = 0;
			uParam2 = 1;
			uParam3 = 3;
			uParam5 = 3.0f;
			uParam4 = 8.0f;
			break;
		
		case 0x00000040:
			uParam1 = 1;
			uParam2 = 1;
			break;
		
		case 0x00000044:
			uParam1 = 1;
			uParam2 = 1;
			break;
		
		case 0x00000048:
			uParam1 = 0;
			uParam2 = 1;
			break;
		
		default:
			uParam1 = 0;
			uParam2 = 1;
			break;
	}
}

void Function_15() //Position: 0x20D4 / 8404
{
	return;
}

void Function_16(bool bParam0, int iParam1) //Position: 0x20DA / 8410
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = bParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_17(bool bParam0) //Position: 0x2119 / 8473
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_47();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_18();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_314(&Global_99144, 1);
		Function_314(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_18() //Position: 0x216E / 8558
{
	Function_45();
	Function_44();
	Function_44();
	Function_43();
	Function_43();
	Function_42();
	Function_42();
	Function_26(0);
	Function_26(0);
	Function_23();
	Function_22();
	Function_21();
	Function_20();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_19();
	return;
}

void Function_19() //Position: 0x21B9 / 8633
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

void Function_20() //Position: 0x22BF / 8895
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

void Function_21() //Position: 0x22F2 / 8946
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
					Global_119632[iVar23] = bVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_22() //Position: 0x2485 / 9349
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
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_23() //Position: 0x263E / 9790
{
	Function_24(&Global_42918, 1, 0);
	return;
}

void Function_24(struct<2317> Param0) //Position: 0x264C / 9804
{
	var uVar0;
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
	
	uVar0 = Function_25();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
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
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
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
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
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

var Function_25() //Position: 0x2869 / 10345
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_26(int iParam0) //Position: 0x287E / 10366
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
					iVar2 = ((Function_41((50 + iVar4)) + Function_41((183 + iVar4))) + Function_41((90 + iVar4)));
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
	Function_27(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_27(int iParam0, bool bParam1, bool bParam2) //Position: 0x2925 / 10533
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
		Function_40(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_39(iParam0);
	if (&bParam2)
	{
		Function_28(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_28(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2BC1 / 11201
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_38(390))), 32);
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
					bVar19 = (Function_37(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_37(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_35(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_32(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_29(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_295(), &Var9);
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

var Function_29(int iParam0) //Position: 0x31FF / 12799
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_30(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3210 / 12816
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_31(char* cParam0) //Position: 0x3307 / 13063
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_32(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3322 / 13090
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_34(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_33(Function_34(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_33(int iParam0, int iParam1) //Position: 0x3389 / 13193
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_34(int iParam0, bool bParam1) //Position: 0x339B / 13211
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_35(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x33AD / 13229
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
	if (((Function_36(iParam0) != 19 || Function_36(iParam0) != 17) || Function_36(iParam0) != 10) || Function_36(iParam0) != 9)
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

int Function_36(int iParam0) //Position: 0x34E1 / 13537
{
	return Global_55480[iParam016].f_96;
}

float Function_37(int iParam0) //Position: 0x34F0 / 13552
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_38(int iParam0) //Position: 0x3529 / 13609
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_39(int iParam0) //Position: 0x3566 / 13670
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

int Function_40(int iParam0, bool bParam1, bool bParam2) //Position: 0x3700 / 14080
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

int Function_41(bool bParam0) //Position: 0x3944 / 14660
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_42() //Position: 0x3985 / 14725
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
		iVar2 = ((Function_41((50 + iVar3) + 15) + Function_41((183 + iVar3) + 15)) + Function_41((90 + iVar3) + 15));
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
	Function_27(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_43() //Position: 0x3A0E / 14862
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
			iVar2 = ((Function_41((50 + iVar3) + 8) + Function_41((183 + iVar3) + 8)) + Function_41((90 + iVar3) + 8));
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
	Function_27(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_44() //Position: 0x3AA5 / 15013
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
		iVar2 = ((Function_41((50 + iVar3)) + Function_41((183 + iVar3))) + Function_41((90 + iVar3)));
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
	Function_27(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_45() //Position: 0x3B24 / 15140
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_46(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_27(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_46(int iParam0, bool bParam1, int iParam2) //Position: 0x3B61 / 15201
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
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_40(iParam0, bParam1, 1);
	Function_39(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_28(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_47() //Position: 0x3D6D / 15725
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_108())
	{
		Function_54(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_54(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_49(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_49(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_48(StackVal, Var0))
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
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_48(char* cParam0) //Position: 0x3E24 / 15908
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_49(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3E3C / 15932
{
	int iVar0;
	
	iVar0 = Function_52(&uParam2, &fParam3);
	if (Function_51(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_318(&Global_99144, 1);
			Function_314(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_318(&Global_99144, 2);
			Function_314(&Global_99144, 1);
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
		Function_318(&Global_99144, 2);
		Function_314(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_50();
	return StackVal, Function_50();
}

struct<8> Function_50() //Position: 0x3F34 / 16180
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_51(int iParam0) //Position: 0x3F3E / 16190
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_52(bool bParam0, bool bParam1) //Position: 0x3F54 / 16212
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
				fVar2 = Function_53(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_53(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_51(iVar0) && !&bParam1)
	{
		iVar0 = Function_52(&bParam0, 1);
	}
	return iVar0;
}

float Function_53(struct<2> Param0, struct<2> Param2) //Position: 0x4022 / 16418
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_54(float fParam0, int iParam1) //Position: 0x403F / 16447
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_57(&Global_54076, &Var3);
	if (!Function_55(Global_46760[0]))
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
	if (!Function_55(Global_46760[2]))
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
	if (!Function_55(Global_46760[1]))
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
	if (!Function_55(Global_46796[1]))
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
	if (!Function_55(Global_46796[3]))
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
	if (!Function_55(Global_46796[2]))
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
	if (!Function_55(Global_46796[4]))
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
	if (!Function_55(Global_46816[0]))
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
	if (!Function_55(Global_46816[1]))
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
	if (!Function_55(Global_46816[2]))
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
	if (!Function_55(Global_46838[0]))
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
	if (!Function_55(Global_46850[0]))
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
	if (!Function_55(Global_46850[1]))
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
	if (!Function_55(Global_46850[2]))
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
	if (!Function_55(Global_46866[0]))
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
	if (!Function_55(Global_46866[1]))
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
	if (!Function_55(Global_46866[2]))
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
	if (!Function_55(Global_46894[2]))
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
	if (!Function_55(Global_46894[3]))
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
	if (!Function_55(Global_46894[0]))
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
	if (!Function_55(Global_46914[0]))
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
	if (!Function_55(Global_46926[2]))
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
	if (!Function_55(Global_46926[1]))
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
	if (!Function_55(Global_46926[0]))
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
	if (!Function_55(Global_46838[1]))
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
	if (!Function_55(Global_46894[1]))
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
	Function_318(&Global_99144, 2);
	Function_314(&Global_99144, 1);
	iParam1 = 0;
	if (Function_48(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_55(int iParam0) //Position: 0x486B / 18539
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_56(uVar0, 0x1000000) || Function_56(uVar0, 0x2000000)) || Function_56(uVar0, 0x4000000)) || !Function_56(uVar0, 0x10000000));
}

bool Function_56(bool bParam0, int iParam1) //Position: 0x48A6 / 18598
{
	return (bParam0 && iParam1) == 0;
}

void Function_57(var uParam0, int iParam1) //Position: 0x48B3 / 18611
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_58(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x48C2 / 18626
{
	iParam0 = &iParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && iParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_59(bool bParam0) //Position: 0x4971 / 18801
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
	iVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	if (iVar0 == 4)
	{
		if (bParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_99(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(bParam0);
	switch (iVar0)
	{
		case 0x00000004:
			if (Global_42833)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_42265)
			{
				if (Function_98(iVar6) && !Function_96(iVar6))
				{
					if (bParam0 == Global_42265[iVar69].f_64)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_95();
			}
			else if (iVar5 != Global_42827)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
				{
					Function_94(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
			{
				Function_89();
				TARGET_JOURNAL_ENTRY(bParam0);
			}
			break;
		
		case 0x00000002:
			iVar2 = iVar1;
			while (&Global_99725[iVar143] + 36 == iVar2)
			{
				if (IS_BLIP_VALID(&Global_99725[iVar143] + 272))
				{
					REMOVE_BLIP(&Global_99725[iVar143] + 272);
				}
				if (IS_BLIP_VALID(&Global_99725[iVar143] + 280))
				{
					REMOVE_BLIP(&Global_99725[iVar143] + 280);
				}
				if (!Function_56(Global_99725[iVar143].f_228, 2048))
				{
					iVar3 = iVar1;
					if (Function_73(&(Global_99725[iVar143]), iVar3))
					{
						Function_318(&Global_99725[iVar143] + 228, 64);
						Function_70(&(Global_99725[iVar143]), iVar3);
						if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
						{
							DESTROY_OBJECT(&Global_99725[iVar143] + 288);
							Function_60(&(Global_99725[iVar143]), 7);
						}
					}
				}
				else if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
				{
					DESTROY_OBJECT(&Global_99725[iVar143] + 288);
				}
				iVar1++;
			}
			break;
	}
	return;
}

void Function_60(struct<229> Param0) //Position: 0x4B2B / 19243
{
	float fVar0;
	int iVar1;
	
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_56(Param0.f_228, 2048) || Global_6623) || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return;
	}
	fVar0 = Param0.f_180;
	*(&Param0 + 288) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_295(), *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, iParam1, Param0.f_176, 0, 1, 1);
	Function_61(&Param0);
	iVar1 = GATEWAY_GET_MARKER(&Param0 + 288);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

void Function_61(struct<217> Param0) //Position: 0x4BFB / 19451
{
	float fVar0;
	var uVar1;
	
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		return;
	}
	*(&Param0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_295(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	fVar0 = 20.0f;
	if (Function_69(Param0.f_216))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 336, Function_295(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0));
	DECOR_SET_INT(&uVar1, "category", 512);
	Function_62(&uVar1, 0);
	return;
}

int Function_62(var uParam0, int iParam1) //Position: 0x4CB9 / 19641
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_66(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_63(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_63(int iParam0, var uParam1, struct<2> Param2) //Position: 0x4E23 / 20003
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 3, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_64(char* cParam0) //Position: 0x4ECB / 20171
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_65(char* cParam0) //Position: 0x4F37 / 20279
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_66(int iParam0) //Position: 0x4F59 / 20313
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_68(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_67(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_68(iVar0);
						}
					}
					else if (Function_67(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_68(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_68(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_67(int iParam0, struct<2> Param1) //Position: 0x50C7 / 20679
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_12(&iParam0);
		Var0 = Function_12(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_68(int iParam0) //Position: 0x513E / 20798
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

bool Function_69(int iParam0) //Position: 0x51A6 / 20902
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_70(struct<153> Param0) //Position: 0x51BC / 20924
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	struct<9> Var4;
	
	Var0 = *(&Param0 + 196);
	Var0.f_4 = (StackVal + 0,5f);
	fVar2 = 1.0f;
	fVar3 = 50.0f;
	if (((StackVal && Function_9(Function_72(iParam1), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_71(iParam1)) || Global_116927[iParam16].f_20 != 1)
	{
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(&Param0 + 272, 1,25f);
		*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 7);
		SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
		UNK_0xFF3DB575(&Param0 + 280, 1);
		SET_BLIP_PRIORITY(&Param0 + 280, true);
		SET_BLIP_COLOR(&Param0 + 280, 0,58f, 0,35f, 0,72f, fVar2);
		Global_116927[iParam16].f_20 = 1;
	}
	else
	{
		fVar2 = 0,5f;
		vVar4 = *(&Param0 + 196);
		vVar4 = (vVar4.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar4.f_8 = (vVar4.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar4, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(&Param0 + 272, fVar3);
	}
	SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
	SET_BLIP_COLOR(&Param0 + 272, 0,58f, 0,35f, 0,72f, fVar2);
	SET_BLIP_PRIORITY(&Param0 + 272, 3);
	return;
}

int Function_71(int iParam0) //Position: 0x532B / 21291
{
	if ((Global_116927[iParam06] != 3 || Global_116927[iParam06] != 4) || Global_116927[iParam06] != 5)
	{
		return 1;
	}
	return 0;
}

bool Function_72(int iParam0) //Position: 0x5357 / 21335
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_73(struct<249> Param0) //Position: 0x536C / 21356
{
	if (Function_56(Global_99725[iParam143].f_228, 64))
	{
		return 1;
	}
	if (Function_72(iParam1))
	{
		Function_318(&Global_99725[iParam143] + 228, 64);
		return 1;
	}
	if ((Function_88(iParam1) || Function_87(iParam1)) || Function_86(iParam1))
	{
		return 0;
	}
	if (Param0.f_248)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Param0 + 240))
		{
			return 0;
		}
	}
	if (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return 0;
	}
	if (Function_69(Param0.f_216))
	{
		if (Function_85(&(Global_43791[Param0.f_216]), 256))
		{
			return 0;
		}
	}
	if (Function_83(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		if (!((((Global_99146 || Global_6627) || Global_6610) || Param0.f_236) || GET_ACTOR_INVULNERABILITY(&Param0 + 312)))
		{
			if (!Function_82(&Param0))
			{
				return 0;
			}
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(&Param0 + 312))
			{
				return 0;
			}
			if (FIRE_IS_ACTOR_ON_FIRE(&Param0 + 312))
			{
				return 0;
			}
			if (IS_ACTOR_DEAD(&Param0 + 312))
			{
				return 0;
			}
		}
	}
	if (!Function_74(&Param0, iParam1))
	{
		return 0;
	}
	Function_318(&Global_99725[iParam143] + 228, 64);
	return 1;
}

bool Function_74(struct<265> Param0) //Position: 0x549C / 21660
{
	int iVar0;
	
	if (!Param0.f_260 != 0)
	{
		if (Function_81(&Param0 + 260, 4))
		{
			if (!Function_80(iParam1))
			{
				return 0;
			}
		}
		if (Function_81(&Param0 + 260, 1))
		{
			if (!Function_87(Param0.f_256))
			{
				return 0;
			}
		}
		if (Function_81(&Param0 + 260, 2) && Global_6606)
		{
			iVar0 = Function_78(Param0.f_264);
			if (Function_75(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_81(&Param0 + 260, 8) && Global_6606)
		{
			if (Function_75(Param0.f_252))
			{
				if (StackVal != 3)
				{
					return 0;
				}
			}
		}
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_81(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_81(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_81(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_81(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_81(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_81(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_75(int iParam0) //Position: 0x55FD / 22013
{
	if (!Function_77(iParam0))
	{
		return 0;
	}
	if (!Function_76(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_76(int iParam0) //Position: 0x5621 / 22049
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_77(int iParam0) //Position: 0x5636 / 22070
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_78(int iParam0) //Position: 0x564D / 22093
{
	if (!Function_79(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_79(int iParam0) //Position: 0x5667 / 22119
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x567D / 22141
{
	return Global_116927[iParam06].f_16;
}

bool Function_81(var uParam0, int iParam1) //Position: 0x568D / 22157
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(struct<237> Param0) //Position: 0x56AA / 22186
{
	if (!Param0.f_236)
	{
		if (Function_108())
		{
			if (((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1) && GET_ACTOR_FACTION(&Param0 + 312) == 20) && GET_ACTOR_FACTION(&Param0 + 312) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312)) || IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

bool Function_83(int iParam0) //Position: 0x5779 / 22393
{
	if (!Function_84(1048576) || Global_6624)
	{
		return 1;
	}
	if (!Function_56(Global_99725[iParam043].f_228, 32768))
	{
		if ((Global_6646 || Global_6648) || Global_6647)
		{
			if (!Function_107(Global_119935, 0x8000000))
			{
				Function_102(&Global_54076, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_84(int iParam0) //Position: 0x57D4 / 22484
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_85(var uParam0, int iParam1) //Position: 0x57F0 / 22512
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_86(int iParam0) //Position: 0x580D / 22541
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_87(int iParam0) //Position: 0x5822 / 22562
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_88(int iParam0) //Position: 0x5837 / 22583
{
	if (Global_116927[iParam06] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_89() //Position: 0x584C / 22604
{
	if (Function_93(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_92(Global_42827);
			*(&Global_42827 + 8) = Function_90(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_92(Global_42827);
			*(&Global_42827 + 8) = Function_90(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_90(int iParam0, int iParam1) //Position: 0x58CC / 22732
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_91(6, 0) || Function_91(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_87(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_91(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_87(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_87(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_87(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_87(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_91(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_87(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_87(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_87(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_87(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_87(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_87(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_87(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_91(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_87(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_91(6, 0) && Function_87(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_87(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_91(9, 0) && Function_87(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_87(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_91(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_48(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_48(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_48(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

bool Function_91(int iParam0, bool bParam1) //Position: 0x652F / 25903
{
	int iVar0;
	
	iVar0 = Function_78(iParam0);
	if (!Function_77(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_92(int iParam0) //Position: 0x656D / 25965
{
	int iVar0;
	int iVar1;
	
	if (!Function_93(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

bool Function_93(int iParam0) //Position: 0x65BC / 26044
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_94(int iParam0) //Position: 0x65D2 / 26066
{
	if (Global_42827 == iParam0)
	{
		return 1;
	}
	if (!Function_93(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_96(iParam0))
	{
		return 0;
	}
	if (!Function_98(iParam0))
	{
		return 0;
	}
	Global_42827 = iParam0;
	Global_42827.f_16 = 1;
	return 1;
}

void Function_95() //Position: 0x663B / 26171
{
	Global_42827 = 4294967295;
	if (IS_BLIP_VALID(&Global_42827 + 8))
	{
		REMOVE_BLIP(&Global_42827 + 8);
	}
	Global_42827.f_16 = 1;
	return;
}

bool Function_96(int iParam0) //Position: 0x6660 / 26208
{
	if (!Function_93(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_97(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_97(int iParam0, int iParam1) //Position: 0x66B1 / 26289
{
	int iVar0;
	
	if (!Function_93(iParam0))
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

bool Function_98(int iParam0) //Position: 0x66DE / 26334
{
	if (!Function_93(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_97(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_99(bool bParam0) //Position: 0x6730 / 26416
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
			Function_95();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_100() //Position: 0x676A / 26474
{
	bool bVar0;
	
	bVar0 = Function_41(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

void Function_101(int iParam0) //Position: 0x67C8 / 26568
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_102(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6812 / 26642
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_104(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_103(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_103(char* cParam0) //Position: 0x6887 / 26759
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

bool Function_104(int iParam0, var uParam1, int iParam2) //Position: 0x68C1 / 26817
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
		if (Function_106(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_105(uVar0))
		{
			case 0x00000002:
				if (!Function_107(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_105(char* cParam0) //Position: 0x693D / 26941
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

int Function_106(int iParam0) //Position: 0x69DE / 27102
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_314(&iVar1, 2147483648);
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

bool Function_107(int iParam0, int iParam1) //Position: 0x6A1B / 27163
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_108() //Position: 0x6A2E / 27182
{
	if (Function_56(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x6A49 / 27209
{
	int iVar0;
	bool bVar1;
	
	if (Function_125(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_306())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_41(3);
	Function_122();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_120(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_107(Global_119936, 4))
			{
				Function_102(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_118(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_37(3));
	iVar0 = Function_41(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_111(4, Function_117(Global_21369.f_248), 1);
				Function_110(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_111(4, Function_117(Global_21369.f_248), 1);
				Function_110(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_111(4, Function_117(Global_21369.f_248), 1);
				Function_110(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_111(4, Function_117(Global_21369.f_248), 1);
				Function_110(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_111(4, Function_117(Global_21369.f_248), 1);
				Function_110(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

void Function_110(int iParam0, int iParam1) //Position: 0x6C1D / 27677
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_111(int iParam0, char* cParam1) //Position: 0x6E87 / 28295
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
	Function_115(iParam0, &cParam1, 0, 1);
	iVar1 = Function_112();
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

int Function_112() //Position: 0x7017 / 28695
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
	Function_113();
	return 0;
}

void Function_113() //Position: 0x70B8 / 28856
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
		Function_114(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_114(int iParam0) //Position: 0x7176 / 29046
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

int Function_115(int iParam0, char* cParam1) //Position: 0x71DC / 29148
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
		Function_116(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_116(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x7533 / 30003
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

var Function_117(int iParam0) //Position: 0x75BB / 30139
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

int Function_118(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x764A / 30282
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
	Function_40(iParam0, TO_FLOAT(bParam1), 1);
	Function_39(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_28(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_119(iParam0);
	return 1;
}

void Function_119(int iParam0) //Position: 0x7872 / 30834
{
	switch (iParam0)
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

int Function_120(int iParam0, bool bParam1) //Position: 0x7910 / 30992
{
	bool bVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_121(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_112();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_121(int iParam0, int iParam1) //Position: 0x7ABC / 31420
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

void Function_122() //Position: 0x7B01 / 31489
{
	Function_124(3, 0.0f);
	Function_123(3, 10000.0f);
	return;
}

int Function_123(int iParam0, int iParam1) //Position: 0x7B17 / 31511
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_124(int iParam0, int iParam1) //Position: 0x7B57 / 31575
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_125(int iParam0) //Position: 0x7B97 / 31639
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_126(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7BA6 / 31654
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_127(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_127(int iParam0) //Position: 0x7C31 / 31793
{
	char* cVar0[16];
	
	if (!Function_108())
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

void Function_128(bool bParam0, bool bParam1) //Position: 0x7C70 / 31856
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

void Function_129(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x7C95 / 31893
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
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_127(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_130(struct<125> Param0) //Position: 0x7D2A / 32042
{
	struct<2> Var0;
	
	while (!&Param2 + 140)
	{
		if ((iParam1 < 0 && iParam1 > 3) && (GET_CURRENT_GAME_TIME() - Param2.f_136) < 30.0f)
		{
			if (HUD_IS_FADED())
			{
				Function_2(1.0f);
			}
			Function_278(&Param0);
			PRINTSTRING("Dueling - Streaming Time Out");
			PRINTNL();
		}
		switch (iParam1)
		{
			case 0x00000000:
				if (IS_ACTOR_VALID(&Param0 + 8))
				{
					STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&Param0 + 8);
				}
				iLocal_201 = CREATE_LAYOUT("dueling_layout");
				if (!IS_VOLUME_VALID(&Param0 + 40))
				{
					Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 28), (&Param0 + 16), StackVal);
					VSCALE(&Var0, 0,5f);
					*(&Param0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_201, "Duel_StayOut", 2, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
				}
				Param0.f_84 = 4294967293;
				if (&iParam4 >= 4294967295)
				{
					Function_318(&Global_99725[&iParam443] + 228, 512);
				}
				if (Param0.f_80 == 0)
				{
					bLocal_203 = RAND_INT_RANGE(false, true);
				}
				else
				{
					bLocal_203 = RAND_INT_RANGE(false, 2);
				}
				Param2.f_136 = GET_CURRENT_GAME_TIME();
				if (IS_ACTOR_DRUNK(&Param0))
				{
					SET_ACTOR_DRUNK(&Param0, 0);
				}
				SATCHEL_SET_ENABLED(0);
				if (HAS_ACCESSORY_ENUM(&Param0 + 8, 0))
				{
					*(&Param2 + 88) = 1;
				}
				uParam3 = 1004;
				Function_277(&Param0 + 80, Param0.f_52, !IS_ACTOR_ALIVE(&Param0 + 56), &Param0);
				Function_267(&Param0);
				if (Param0.f_120)
				{
					Global_6610 = 0;
					iParam1 = 5;
				}
				else
				{
					iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_307(&iLocal_103))
				{
					Function_266(&Param2 + 72);
					iParam1 = 2;
					SET_HUD_MAP_DRAW_ENABLED(0);
				}
				else
				{
					Function_264(&Param0);
				}
				break;
			
			case 0x00000002:
				if (Function_264(&Param0) || Function_262(&Param2 + 72) < 2.0f)
				{
					iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				Global_6610 = 1;
				SET_HUD_MAP_DRAW_ENABLED(0);
				if (IS_ACTOR_ALIVE(&Param0) && IS_ACTOR_ALIVE(&Param0 + 8))
				{
					Param0.f_88 = 0;
					Function_239(&Param0);
					if (HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_IN(1.0f, 1065353216);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
					}
					if (Param0.f_48)
					{
						*(&Param2 + 32) = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling_Tutorial", &Param0 + 88, 8, 0);
					}
					if (!DECOR_CHECK_EXIST(&Param0, "bIsDuelActive"))
					{
						DECOR_SET_BOOL(&Param0, "bIsDuelActive", true);
					}
					iParam1 = 7;
				}
				else
				{
					if (&iParam4 >= 4294967295)
					{
						Function_314(&Global_99725[&iParam443] + 228, 512);
					}
					Function_2(1.0f);
					Function_278(&Param0);
					PRINTSTRING("Dueling - Fail");
					PRINTNL();
					return 1;
				}
				break;
			
			case 0x00000005:
				Function_307(&iLocal_103);
				Function_264(&Param0);
				break;
			
			case 0x00000006:
				if (HUD_IS_FADED())
				{
					if (Function_307(&iLocal_103))
					{
						CAMERA_RESET(0);
						if (HUD_IS_FADED())
						{
							HUD_FADE_IN(1.0f, 1065353216);
						}
					}
				}
				else
				{
					if (!Global_6610)
					{
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
						RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8, 1);
						AI_IGNORE_ACTOR(&Param0 + 8);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						GIVE_WEAPON_TO_ACTOR(&Param0 + 8, 4, false, 1, 1);
						TELEPORT_ACTOR(&Param0 + 8, &Param0 + 28, 1, 1, 0);
						Param0.f_88 = 0;
						Function_239(&Param0);
						if (Param0.f_48)
						{
							*(&Param2 + 32) = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling_Tutorial", &Param0 + 88, 8, 0);
						}
						SET_HUD_MAP_DRAW_ENABLED(0);
						Global_6610 = 1;
					}
					Function_238(&Param0);
					if (Function_233(&uParam3, &Param2 + 56, &Param0, &Param0 + 8, !Param0.f_48))
					{
						if (Param0.f_120 && DECOR_CHECK_EXIST(&Param0, "unpauseduel"))
						{
							DECOR_REMOVE(&Param0, "unpauseduel");
						}
						iParam1 = 10;
					}
				}
				break;
			
			case 0x00000007:
				Function_238(&Param0);
				if (Function_233(&uParam3, &Param2 + 56, &Param0, &Param0 + 8, !Param0.f_48))
				{
					CAMERA_RESET(0);
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					iParam1 = 10;
				}
				break;
			
			case 0x0000000A:
				if ((IS_ACTION_NODE_PLAYING_PARTIAL(&Param0 + 8, "draw") || IS_ACTION_NODE_PLAYING_PARTIAL(&Param0 + 8, "nhold_draw")) && !&Param2 + 104)
				{
					Function_232("Dueling_Tutorial_DrawNow", "DUEL_CAMERA_CUT_MASTER", 3212836864, 0, 0, 0, 0);
					*(&Param2 + 104) = 1;
				}
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&Param0 + 8, "draw") || IS_ACTION_NODE_PLAYING_PARTIAL(&Param0 + 8, "nhold_draw"))
				{
				}
				Function_229(&Param0);
				if (Function_228())
				{
					if (HUD_IS_SHOWING_BIG_TEXT())
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_BIG_TEXT_QUEUE();
					}
					if (!&Param2 + 16)
					{
						DYNAMICMIXER_DETRIGGERSTATE(&Param2 + 24, 1);
						*(&Param2 + 8) = 0;
						*(&Param2 + 8) = &Param2 + 8;
					}
					if (!IS_WEAPON_DRAWN(&Param0 + 8))
					{
						*(&Param2 + 96) = 1;
					}
					iParam1 = 11;
				}
				else if (Function_227() == 5003)
				{
					if (HUD_IS_SHOWING_BIG_TEXT())
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_BIG_TEXT_QUEUE();
					}
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&Param0), "iDuelResult", 5003);
					Function_266(&Param2 + 40);
					iParam1 = 13;
				}
				break;
			
			case 0x0000000B:
				Function_229(&Param0);
				if (Function_227() >= 4294967295)
				{
					Function_142(&Param0, &Param2 + 96);
					if (&Param2 + 88)
					{
						if (!HAS_ACCESSORY_ENUM(&Param0 + 8, 0))
						{
							*(&Param2 + 88) = 0;
							Function_118(455, 1, 0, 0);
						}
					}
					Function_266(&Param2 + 40);
					if (Function_227() == 5003)
					{
						*(&Param2 + 120) = 1;
						iParam1 = 13;
					}
					else
					{
						*(&Param2 + 128) = 1;
						if (Param0.f_124)
						{
							iParam1 = 14;
						}
						else
						{
							Function_141(&Param0);
							iParam1 = 12;
						}
					}
				}
				break;
			
			case 0x0000000C:
				Function_229(&Param0);
				if (Function_140())
				{
					if (!bLocal_205)
					{
						Function_135(&Param0);
					}
					*(&Param2 + 112) = 1;
				}
				if (Function_131(&Param0))
				{
					iParam1 = 13;
				}
				break;
			
			case 0x0000000D:
				Function_229(&Param0);
				if (IS_ACTOR_VALID(&Param0 + 8))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&Param0 + 8);
				}
				if (Function_140())
				{
					if (!bLocal_205)
					{
						Function_135(&Param0);
					}
					*(&Param2 + 112) = 1;
				}
				if (&Param2 + 112)
				{
					if (IS_SCRIPT_VALID(&Param2 + 32))
					{
						TERMINATE_SCRIPT(&Param2 + 32);
					}
					if (IS_ACTOR_VALID(&Param0))
					{
						if (IS_ACTOR_ALIVE(&Param0) && DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&Param0), "iDuelResult") != 5003)
						{
							LOG_ERROR("player should be dead, killing him!");
							SET_ACTOR_INVULNERABILITY(&Param0, false);
							KILL_ACTOR(&Param0);
						}
					}
					Function_278(&Param0);
					PRINTSTRING("Dueling - Terminating Cleanly");
					PRINTNL();
					*(&Param2 + 140) = 1;
				}
				break;
			
			case 0x0000000E:
				if (!bLocal_205)
				{
					Function_135(&Param0);
				}
				if (IS_SCRIPT_VALID(&Param2 + 32))
				{
					TERMINATE_SCRIPT(&Param2 + 32);
				}
				Function_278(&Param0);
				PRINTSTRING("Dueling - Terminating Cleanly");
				PRINTNL();
				*(&Param2 + 140) = 1;
				break;
		}
		return 0;
	}
	if (&Param2 + 128)
	{
		if (IS_SCRIPT_VALID(&Param2 + 32))
		{
			TERMINATE_SCRIPT(&Param2 + 32);
		}
		Function_278(&Param0);
		PRINTSTRING("Dueling - Pass");
		PRINTNL();
		return 1;
	}
	if (&Param2 + 120)
	{
		if (&iParam4 >= 4294967295)
		{
			Function_314(&Global_99725[&iParam443] + 228, 512);
		}
		if (IS_SCRIPT_VALID(&Param2 + 32))
		{
			TERMINATE_SCRIPT(&Param2 + 32);
		}
		Function_278(&Param0);
		PRINTSTRING("Dueling - Fail");
		PRINTNL();
		return 1;
	}
	return 0;
}

bool Function_131(struct<16> Param0) //Position: 0x85C5 / 34245
{
	float fVar0;
	
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	fVar0 = (GET_CURRENT_GAME_TIME() - fLocal_204);
	Function_132(&Param0, fVar0);
	if (fVar0 < 5.0f)
	{
		return 1;
	}
	return 0;
}

void Function_132(struct<16> Param0) //Position: 0x85F4 / 34292
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	iVar0 = GET_OBJECTSET_SIZE(&uLocal_189);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_189));
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				if (DECOR_CHECK_EXIST(&uVar2, "DuelIsCrowdActor"))
				{
					if (DECOR_CHECK_EXIST(&uVar2, "DuelCrowdActorReactionTimer"))
					{
						if (bParam1 < DECOR_GET_FLOAT(&uVar2, "DuelCrowdActorReactionTimer"))
						{
							bVar3 = DECOR_GET_INT(&uVar2, "DuelIsCrowdActor");
							Function_133(&uVar2, bVar3);
							DECOR_REMOVE(&uVar2, "DuelCrowdActorReactionTimer");
						}
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_133(var uParam0, bool bParam1) //Position: 0x86F6 / 34550
{
	if ((bParam1 && 8) != 0)
	{
		Function_134(&uParam0, bParam1, "hat_tip");
	}
	else if ((bParam1 && 32) != 0)
	{
	}
	else
	{
		Function_134(&uParam0, bParam1, "Reaction");
	}
	return;
}

void Function_134(var uParam0, var uParam1, struct<16> Param2) //Position: 0x8739 / 34617
{
	char* cVar0[64];
	
	if (uParam1 & 512 != 0)
	{
		strcpy(&cVar0, "crowd_duel_left/", 64);
	}
	else if (uParam1 & 1024 != 0)
	{
		strcpy(&cVar0, "crowd_duel_right/", 64);
	}
	else
	{
		strcpy(&cVar0, "crowd_duel_center/", 64);
	}
	stradd(&cVar0, &Param2, 64);
	SET_ACTION_NODE_FOR_ACTOR(&uParam0, &cVar0);
	return;
}

void Function_135(int iParam0) //Position: 0x87B1 / 34737
{
	bool bVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&iParam0 + 8))
	{
		if (IS_ACTOR_ALIVE(&iParam0 + 8))
		{
			AI_GOAL_AIM_CLEAR(&iParam0 + 8);
			ACTOR_FORCE_WEAPON_RENDER(&iParam0 + 8, 1, 0);
			if (IS_ACTOR_CRIPPLED(&iParam0 + 8, 5))
			{
				DECOR_SET_BOOL(&iParam0 + 8, "Duel", true);
			}
		}
		else
		{
			DECOR_SET_BOOL(&iParam0 + 8, "Duel", true);
		}
		AUDIO_DISALLOW_PREDUEL_SPEECH(&iParam0 + 8);
	}
	AUDIO_DISALLOW_PREDUEL_SPEECH(&iParam0);
	SATCHEL_SET_ENABLED(1);
	AI_GLOBAL_CLEAR_ALL_DANGER();
	AI_STOP_IGNORING_ACTORS();
	if (HUD_IS_SHOWING_OBJECTIVE())
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (IS_ACTOR_VALID(&iParam0 + 8))
	{
		if (IS_ACTOR_ALIVE(&iParam0 + 8))
		{
			STOP_RECORDING_SHOOT_EVENTS_FOR_ACTOR(&iParam0 + 8);
		}
	}
	if (IS_VOLUME_VALID(&iParam0 + 72))
	{
		RESET_PROPS_IN_VOLUME(&iParam0 + 72, 1);
	}
	if (IS_ACTORSET_VALID(&uLocal_187))
	{
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(&uLocal_187))
		{
			uVar1 = GET_ACTOR_FROM_ACTORSET(&uLocal_187, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				TASK_CLEAR(&uVar1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar1);
				if (IS_ACTOR_HORSE(&uVar1))
				{
					SET_ALLOW_RIDE_BY_PLAYER(&uVar1, 1);
				}
			}
			bVar0++;
		}
		DESTROY_ACTORSET(&uLocal_187);
	}
	if (IS_OBJECTSET_VALID(&uLocal_185))
	{
		DESTROY_OBJECTSET(&uLocal_185);
	}
	if (IS_ACTOR_VALID(&iParam0 + 56))
	{
		if (IS_LAYOUTREF_VALID(&iLocal_201))
		{
			if (Function_139(&iParam0 + 56) == &iLocal_201)
			{
				RELEASE_ACTOR(&iParam0 + 56);
			}
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0 + 56);
	}
	if (DECOR_CHECK_EXIST(&iParam0 + 88 + 8, "Tutorial0Complete"))
	{
		DECOR_REMOVE(&iParam0 + 88 + 8, "Tutorial0Complete");
	}
	if (DECOR_CHECK_EXIST(&iParam0 + 88 + 8, "Tutorial1Complete"))
	{
		DECOR_REMOVE(&iParam0 + 88 + 8, "Tutorial1Complete");
	}
	if (DECOR_CHECK_EXIST(&iParam0 + 88 + 8, "Tutorial2Complete"))
	{
		DECOR_REMOVE(&iParam0 + 88 + 8, "Tutorial2Complete");
	}
	if (DECOR_CHECK_EXIST(&iParam0 + 88 + 8, "Tutorial3Complete"))
	{
		DECOR_REMOVE(&iParam0 + 88 + 8, "Tutorial3Complete");
	}
	if (iLocal_192)
	{
		Function_137(9);
		iLocal_192 = 0;
	}
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (IS_OBJECT_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
		if (DECOR_CHECK_EXIST(&iParam0, "bHostageDraw"))
		{
			DECOR_REMOVE(&iParam0, "bHostageDraw");
		}
	}
	if (IS_ACTOR_ALIVE(&iParam0))
	{
		if (!DECOR_CHECK_EXIST(&iParam0, "bIsDuelOver"))
		{
			DECOR_SET_BOOL(&iParam0, "bIsDuelOver", true);
		}
		Global_98975 = 0;
	}
	Function_136(1);
	if (!Global_6623)
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam0 + 40))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam0 + 40);
			REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&iParam0 + 40, 0);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam0 + 40))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam0 + 40);
		}
	}
	CAMERA_RESET(0);
	bLocal_205 = true;
	return;
}

void Function_136(int iParam0) //Position: 0x8AF0 / 35568
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_137(int iParam0) //Position: 0x8B03 / 35587
{
	Function_138(&Global_43580, iParam0);
	return;
}

void Function_138(var uParam0, int iParam1) //Position: 0x8B11 / 35601
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

int Function_139(var uParam0) //Position: 0x8B30 / 35632
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (GET_OBJECT_TYPE(&uParam0) == 1)
		{
			uVar0 = GET_LAYOUT_FROM_OBJECT(&uParam0);
		}
		while (!IS_LAYOUTREF_VALID(&uVar0) && IS_OBJECT_VALID(&uParam0))
		{
			uParam0 = GET_OBJECT_OWNER(&uParam0);
			if (GET_OBJECT_TYPE(&uParam0) == 1)
			{
				uVar0 = GET_LAYOUT_FROM_OBJECT(&uParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	return "";
}

bool Function_140() //Position: 0x8B97 / 35735
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 <= iVar0)
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x0000138E:
				return 1;
				break;
			
			default:
				break;
		}
		iVar1++;
	}
	return 0;
}

void Function_141(struct<16> Param0) //Position: 0x8BCE / 35790
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	fLocal_204 = GET_CURRENT_GAME_TIME();
	iVar0 = GET_OBJECTSET_SIZE(&uLocal_189);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_189));
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				if (DECOR_CHECK_EXIST(&uVar2, "DuelIsCrowdActor"))
				{
					bVar3 = RAND_FLOAT_RANGE(1,5f, 2.0f);
					DECOR_SET_FLOAT(&uVar2, "DuelCrowdActorReactionTimer", bVar3);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_142(int iParam0, int iParam1) //Position: 0x8C6E / 35950
{
	switch (Function_227())
	{
		case 0x0000138A:
			Function_161(Function_222(GET_ACTOR_ENUM(&iParam0), 6, 4), (!Global_6623 && !Function_221()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5002);
			MEMORY_CLEAR_ALL(&iParam0 + 8);
			SET_ACTOR_FACE_STYLE(&iParam0 + 8, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0 + 8, false);
			AI_GLOBAL_CLEAR_DANGER(&iParam0 + 8);
			AUDIO_PLAY_VOCAL_EFFECT(&iParam0 + 8, 10, 1);
			Function_118(451, 1, 0, 0);
			Function_118(454, 1, 0, 0);
			Function_118(452, 1, 0, 0);
			if (!Global_6623 && !(((Function_160(48) || Function_160(74)) || Function_160(51)) || Function_160(67)))
			{
				Function_109(100, 1, 0);
				Function_156(200, 1, 0);
			}
			Function_143(6, Global_43789);
			break;
		
		case 0x00001389:
			Function_161(Function_222(GET_ACTOR_ENUM(&iParam0), 6, 4), (!Global_6623 && !Function_221()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5001);
			Function_118(451, 1, 0, 0);
			Function_118(452, 1, 0, 0);
			if (!Global_6623 && !(((Function_160(48) || Function_160(74)) || Function_160(51)) || Function_160(67)))
			{
				Function_109(50, 1, 0);
			}
			if (iParam1 && !(((Function_160(48) || Function_160(74)) || Function_160(51)) || Function_160(67)))
			{
				if (!DECOR_CHECK_EXIST(&iParam0 + 8, "honor"))
				{
					Function_156(4294967196, 1, 0);
				}
				else
				{
					DECOR_SET_BOOL(&iParam0, "bDrewFirst", true);
				}
			}
			Function_143(6, Global_43789);
			break;
		
		case 0x0000138C:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5004);
			break;
		
		case 0x0000138B:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5003);
			break;
		
		case 0x0000138D:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5005);
			break;
	}
	return;
}

void Function_143(int iParam0, int iParam1) //Position: 0x8E86 / 36486
{
	if (!Function_155(3))
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_46760[0])
			{
				if (IS_PS3() || Function_154())
				{
					Function_144(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_46914[0])
			{
				Function_144(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_46816[0])
			{
				Function_144(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_46796[1])
			{
				Function_144(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_46894[2])
			{
				Function_144(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_46894[3])
			{
				Function_144(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_46926[2])
			{
				Function_144(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_46760[0])
			{
				if (Function_98(2) && !Function_96(2))
				{
					Function_144(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_144(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x8F91 / 36753
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_93(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_155(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_97(bParam0, 2))
	{
		Function_118(456, 1, 0, 0);
		Function_153(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_126(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_152(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_153(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_58(0, 0, 1, 1))
			{
				Function_17(1);
				Function_16(1, 0);
			}
			else
			{
				Function_15();
			}
		}
		Function_148(bParam0);
		if (StackVal && !Function_56(((((!Function_147() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_56((((Function_147() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_108())
		{
			if (!Function_107(Global_119934, 2))
			{
				Function_102(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_89();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_146(3, bParam1);
				break;
			
			case 0x00000005:
				Function_146(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_146(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_146(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_146(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_146(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_145(2, 24);
				break;
			
			case 0x00000003:
				Function_145(2, 25);
				break;
			
			case 0x0000000F:
				Function_145(2, 26);
				break;
			
			case 0x0000000D:
				Function_145(2, 27);
				break;
			
			case 0x0000000E:
				Function_145(2, 28);
				break;
			}
	}
}

void Function_145(int iParam0, int iParam1) //Position: 0x9230 / 37424
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

void Function_146(int iParam0, bool bParam1) //Position: 0x929A / 37530
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

bool Function_147() //Position: 0x9309 / 37641
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_148(bool bParam0) //Position: 0x9336 / 37686
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_152(bParam0, Function_151(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_152(bParam0, Function_151(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_150(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_128(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_149(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_149(int iParam0) //Position: 0x94E6 / 38118
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_93(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

var Function_150(int iParam0) //Position: 0x953D / 38205
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_93(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

int Function_151(bool bParam0) //Position: 0x9593 / 38291
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_152(bool bParam0, int iParam1) //Position: 0x959F / 38303
{
	int iVar0;
	
	if (!Function_93(bParam0))
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

void Function_153(bool bParam0, int iParam1) //Position: 0x95FE / 38398
{
	if (!Function_93(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_154() //Position: 0x9653 / 38483
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_56(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_155(int iParam0) //Position: 0x9683 / 38531
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_156(int iParam0, bool bParam1, bool bParam2) //Position: 0x969F / 38559
{
	int iVar0;
	bool bVar1;
	
	if (Function_125(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_306())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_41(1);
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
			Function_120(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_107(Global_119936, 1))
				{
					Function_102(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_159(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_107(Global_119936, 2))
				{
					Function_102(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_118(1, bVar1, 0, 0);
	}
	else
	{
		Function_158(1, (4294967295 * bVar1), 0);
	}
	if (Function_41(1) <= 4294962296)
	{
		Function_27(1, 4294962296, 0);
	}
	else if (Function_41(1) >= 5000)
	{
		Function_27(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_37(1));
	iVar0 = Function_41(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_111(2, Function_157(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_111(2, Function_157(Global_21369.f_244), 0);
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
				Function_111(2, Function_157(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_111(2, Function_157(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_111(2, Function_157(Global_21369.f_244), 1);
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
				Function_111(2, Function_157(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_111(2, Function_157(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_111(2, Function_157(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_111(2, Function_157(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_111(2, Function_157(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_111(2, Function_157(Global_21369.f_244), 1);
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
				Function_111(2, Function_157(Global_21369.f_244), 0);
			}
			break;
	}
	Function_110(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_157(int iParam0) //Position: 0x99C6 / 39366
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

int Function_158(int iParam0, bool bParam1, int iParam2) //Position: 0x9A69 / 39529
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
	Function_39(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_28(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_159(int iParam0, bool bParam1) //Position: 0x9C66 / 40038
{
	bool bVar0;
	int iVar1;
	
	Function_158(iParam0, bParam1, 0);
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
	iVar1 = Function_121(iParam0, 4294967295);
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
	iVar1 = Function_112();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

bool Function_160(int iParam0) //Position: 0x9E11 / 40465
{
	if (Global_116927[iParam06] == 5)
	{
		return 1;
	}
	return 0;
}

void Function_161(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x9E26 / 40486
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_220(12);
	Function_218(2);
	Function_216((15 - Function_217(105)));
	if (Function_215(bParam0) == 1)
	{
		iVar2 = Function_214(bParam0);
		Function_209(&(Global_6667[iVar228]));
		Function_208(4194304);
		if (&bParam3)
		{
			Function_184(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_182(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_184(iVar2, &uVar0, 0);
		}
		bVar1 = Function_181();
		if (&bParam1)
		{
			Function_178(iVar2, bParam0, bVar1);
			Function_177();
		}
	}
	Function_164(bParam0, &bParam1, &iParam2, bVar1);
	if (Function_215(bParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_163(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_215(bParam0) == 1)
		{
			iVar2 = Function_214(bParam0);
			if (iVar2 != 1)
			{
				(&Global_21369 + 72)->f_52++;
				if ((&Global_21369 + 72)->f_52 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_162();
}

void Function_162() //Position: 0x9F1A / 40730
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_91(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

void Function_163(int iParam0, bool bParam1) //Position: 0x9F4C / 40780
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_102(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_102(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_102(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_102(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_102(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_102(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_163(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_163(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_163(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_163(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_163(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_163(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_164(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA249 / 41545
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_75(bParam0))
	{
		Function_175();
		return;
	}
	bVar0 = Function_215(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_306())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_214(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_174(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_127(Global_10966) };
		}
		if (Function_306())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_172();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_306())
	{
		Function_171();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_169("DEED_COMPLETE", bParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[bParam07].f_4 = 4;
		}
		else
		{
			Global_21684[bParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[bParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_166(bParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
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
						switch (Function_214(bParam0))
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
			Function_17(1);
			Function_16(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_165(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_165(int iParam0, struct<41> Param1) //Position: 0xA4A7 / 42151
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_166(bool bParam0) //Position: 0xA4E5 / 42213
{
	int iVar0;
	int iVar1;
	
	if (!Function_77(bParam0))
	{
		return;
	}
	switch (Function_215(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_214(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_118(12, 1, 0, 0);
				Function_145(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_118(13, 1, 0, 0);
				Function_145(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_118(14, 1, 0, 0);
				Function_145(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_118(15, 1, 0, 0);
				Function_145(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_118(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_214(bParam0))
			{
				case 0x00000000:
					if (Function_168(bParam0) == 1)
					{
						iVar0 = Function_167(bParam0);
						if (Function_69(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_145(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_145(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_145(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_145(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_145(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_145(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_145(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_145(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_145(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_145(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_145(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_145(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_145(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_145(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_145(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_145(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_145(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_145(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_145(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_145(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_44085[iVar09];
							}
							else
							{
								iVar0 = Global_44085[iVar09];
								iVar0 = Global_44085[iVar09];
							}
							if (iVar0 == Global_46722[0])
							{
								Function_118(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_118(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_118(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_167(bParam0) == 0)
			{
				if (Function_168(bParam0) == 1)
				{
					Function_118(458, 1, 0, 0);
					iVar0 = Function_214(bParam0);
					if (Function_69(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_145(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_145(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_145(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_145(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_145(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_145(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_145(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_145(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_168(bParam0) == 1)
			{
				Function_118(400, 1, 0, 0);
			}
			switch (Function_214(bParam0))
			{
				case 0x00000001:
					Function_118(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_145(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_145(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_145(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_118(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_145(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_145(6, 9);
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

int Function_167(bool bParam0) //Position: 0xA9C1 / 43457
{
	if (!Function_77(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_168(bool bParam0) //Position: 0xA9E0 / 43488
{
	if (!Function_77(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_169(var uParam0, bool bParam1) //Position: 0xA9FA / 43514
{
	struct<4> Var0;
	
	if (!Function_75(bParam1))
	{
		return;
	}
	switch (Function_215(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_170(Function_214(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_215(bParam1), Function_214(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_215(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_215(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_215(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_215(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_215(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_170(int iParam0) //Position: 0xAB24 / 43812
{
	char* cVar0[16];
	
	if (!Function_108())
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

void Function_171() //Position: 0xAB5E / 43870
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_41(0));
	PLAYSTAT_INT("HC_FAME", Function_41(3));
	PLAYSTAT_INT("HC_HONOR", Function_41(1));
	return;
}

void Function_172() //Position: 0xACC0 / 44224
{
	int iVar0;
	int iVar1;
	
	if (!Function_79(Global_10966))
	{
		return;
	}
	iVar0 = Function_41(24);
	iVar1 = Function_78(Global_10966);
	if (!Function_79(iVar0) && Function_173(iVar1) < 0)
	{
		Function_27(24, Global_10966, 0);
		Function_115(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_173(Function_78(iVar0)))
	{
		Function_27(24, Global_10966, 0);
		Function_115(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_173(int iParam0) //Position: 0xAD40 / 44352
{
	if (!Function_75(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_174(char* cParam0) //Position: 0xAD5A / 44378
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

void Function_175() //Position: 0xAFB0 / 44976
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
			Function_176(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_176(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB1F7 / 45559
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_177() //Position: 0xB223 / 45603
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_178(int iParam0, int iParam1, bool bParam2) //Position: 0xB251 / 45649
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_79(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_180(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_170(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_41(42) - Global_53524.f_168);
				bVar1 = (Function_41(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_170(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_38(49)) - Global_53524.f_176);
				bVar3 = (Function_41(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_170(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_41(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_170(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_170(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_179(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_109(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_6667[iParam028] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_127(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_53524.f_188 = 0.0f;
	Global_53524.f_192 = 0.0f;
	Global_53524.f_168 = 0;
	Global_53524.f_172 = 0;
	Global_53524.f_176 = 0;
	Global_53524.f_180 = 0;
	return;
}

int Function_179(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0xB4ED / 46317
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_9917[iParam09] + 24)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_9917[iParam09] + 24)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_180(int iParam0) //Position: 0xB6B5 / 46773
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_181() //Position: 0xB74A / 46922
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_182(int iParam0) //Position: 0xB76F / 46959
{
	if (!Function_79(iParam0))
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_109(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_109(25, 1, 0);
			Function_183(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_183(50, 1, 1);
			Function_109(250, 1, 0);
			Function_156(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_109(75, 1, 0);
			Function_156(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_183(50, 1, 1);
			Function_109(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_183(5, 1, 1);
			Function_156(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_109(75, 1, 0);
			Function_156(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_183(5, 1, 1);
			Function_109(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_156(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_183(25, 1, 1);
			Function_109(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_183(10, 1, 1);
			Function_109(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_109(50, 1, 0);
			Function_156(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_109(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_156(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_183(20, 1, 1);
			Function_109(75, 1, 0);
			Function_156(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_183(25, 1, 1);
			Function_109(150, 1, 0);
			Function_156(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_183(10, 1, 1);
			Function_109(150, 1, 0);
			Function_156(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_109(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_156(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_156(100, 1, 0);
			Function_183(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_183(3, 1, 1);
			Function_109(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_156(125, 1, 0);
			Function_109(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_183(50, 1, 1);
			Function_109(100, 1, 0);
			Function_156(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_183(50, 1, 1);
			Function_109(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_183(75, 1, 1);
			Function_109(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_109(75, 1, 0);
			Function_156(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_109(250, 1, 0);
			Function_156(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_109(75, 1, 0);
			Function_156(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_109(200, 1, 0);
			Function_156(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_109(75, 1, 0);
			Function_156(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_109(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_183(50, 1, 1);
			Function_109(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_183(100, 1, 1);
			Function_109(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_109(200, 1, 0);
			Function_156(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_109(300, 1, 0);
			Function_156(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_109(300, 1, 0);
			Function_156(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_109(300, 1, 0);
			Function_156(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_109(500, 1, 0);
			Function_156(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_109(150, 1, 0);
			Function_156(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_156(25, 1, 0);
			Function_183(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_109(150, 1, 0);
			Function_156(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_156(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_156(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_156(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_156(150, 1, 0);
			Function_183(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_156(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_156(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_156(150, 1, 0);
			Function_183(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_156(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_156(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

int Function_183(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBC3E / 48190
{
	bool bVar0;
	
	bVar0 = Function_41(0);
	if ((Function_41(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_118(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_41(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_118(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_41(597) + Function_41(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_184(int iParam0, var uParam1, bool bParam2) //Position: 0xBD10 / 48400
{
	struct<4> Var0;
	
	if (!Function_79(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_206(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_204(Global_46760[0]);
			Function_204(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_202(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_204(Global_46816[0]);
			Function_200(0);
			Function_198(2, 1);
			Function_198(0, 1);
			Function_198(1, 1);
			break;
		
		case 0x00000003:
			Function_204(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_204(Global_46816[0]);
			Function_204(Global_46760[0]);
			Function_196(0, 1);
			Function_196(15, 1);
			Function_196(9, 1);
			Function_196(12, 1);
			Function_196(16, 1);
			Function_198(3, 1);
			break;
		
		case 0x00000005:
			Function_204(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_202(21, &bParam2, 4);
			Function_204(Global_46816[0]);
			Function_198(39, 1);
			break;
		
		case 0x00000007:
			Function_204(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_204(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_154())
				{
					if (!Function_98(4))
					{
						Function_195(4, 0, 0, 1, 0);
					}
				}
			}
			Function_204(Global_46760[0]);
			Function_204(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_204(Global_46760[0]);
			Function_204(Global_46816[2]);
			Function_194(&(Global_43791[Global_46816[2]]), 32768);
			Function_193(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_202(9, &bParam2, 4);
			Function_204(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_204(Global_46760[0]);
			Function_204(Global_46796[0]);
			Function_194(&(Global_43791[Global_46796[0]]), 32768);
			Function_193(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_204(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_204(Global_46760[0]);
			Function_204(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_204(Global_46760[1]);
			Function_204(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_204(Global_46838[0]);
			Function_204(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_204(Global_46796[5]);
			Function_204(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_202(21, &bParam2, 4);
			Function_204(Global_46760[4]);
			Function_204(Global_46796[4]);
			Function_192(&Global_119935, 0x2000000);
			Function_192(&Global_119935, 0x4000000);
			Function_192(&Global_119935, 4096);
			Function_192(&Global_119935, 8);
			Function_192(&Global_119935, 8388608);
			Function_192(&Global_119935, 524288);
			Function_192(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_204(Global_46760[4]);
			Function_204(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_193(&(Global_43791[Global_46760[4]]), 256);
			Function_204(Global_46760[4]);
			Function_204(Global_46796[0]);
			Function_194(&(Global_43791[Global_46796[0]]), 32768);
			Function_193(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_204(Global_46760[0]);
			Function_204(Global_46760[5]);
			Function_202(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_204(Global_46796[3]);
			Function_194(&(Global_43791[Global_46796[3]]), 32768);
			Function_193(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_202(9, &bParam2, 4);
			Function_204(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_194(&(Global_43791[Global_46838[1]]), 32768);
			Function_204(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_202(12, &bParam2, 4);
			Function_193(&(Global_43791[Global_46838[1]]), 256);
			Function_204(Global_46816[3]);
			Function_204(Global_46866[0]);
			Function_204(Global_46850[0]);
			Function_200(4);
			Function_196(13, 1);
			Function_196(1, 1);
			Function_196(18, 1);
			Function_198(34, 1);
			Function_198(44, 1);
			Function_198(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_202(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_204(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_204(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_204(Global_46866[0]);
			Function_204(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_204(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_204(Global_46850[0]);
			Function_204(Global_46866[0]);
			Function_204(Global_46866[1]);
			Function_204(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_202(23, &bParam2, 3);
			Function_196(23, 1);
			Function_204(Global_46850[0]);
			Function_204(Global_46850[2]);
			Function_194(&(Global_43791[Global_46850[2]]), 32768);
			Function_193(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_202(19, &bParam2, 4);
			Function_204(Global_46850[0]);
			Function_204(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_202(24, &bParam2, 3);
			Function_196(24, 1);
			Function_204(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_204(Global_46850[0]);
			Function_204(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_204(Global_46866[12]);
			Function_204(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_204(Global_46866[12]);
			Function_204(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_202(25, &bParam2, 10);
			Function_204(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_204(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_204(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_202(13, &bParam2, 4);
			Function_204(Global_46866[2]);
			Function_204(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_98(8))
				{
					Function_195(8, 0, 0, 1, 0);
				}
			}
			Function_204(Global_46850[0]);
			Function_200(9);
			Function_196(7, 1);
			Function_196(11, 1);
			Function_196(3, 1);
			Function_196(20, 1);
			Function_198(57, 1);
			break;
		
		case 0x0000002A:
			Function_202(2, &bParam2, 4);
			Function_204(Global_46914[0]);
			Function_204(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_204(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_204(Global_46914[0]);
			Function_204(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_204(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_204(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_204(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_202(17, &bParam2, 4);
			Function_204(Global_46926[0]);
			Function_204(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_96(15))
				{
					Function_191(15, 0, 1);
				}
			}
			Function_145(2, 26);
			Function_193(&(Global_43791[Global_46914[1]]), 256);
			Function_200(11);
			Function_204(Global_46914[1]);
			Function_204(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_204(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_204(Global_46914[1]);
			Function_204(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_204(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_204(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_204(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_204(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_204(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_204(Global_46914[1]);
			Function_185(11);
			Function_200(12);
			Global_26200[1114].f_40 = 0;
			Function_198(56, 1);
			if (!&bParam2)
			{
				if (!Function_98(9))
				{
					Function_195(9, 0, 0, 0, 0);
				}
				if (!Function_98(10))
				{
					Function_195(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_170(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_185(int iParam0) //Position: 0xC62D / 50733
{
	var uVar0;
	
	if (!Function_51(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_190(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_190(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_186(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_186(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xC7AA / 51114
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_188(Function_189(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_188(Function_189(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_188(StackVal);
				Var1 = Function_188(StackVal);
				if (Function_187(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_187(struct<2> Param0, struct<2> Param2) //Position: 0xC8B5 / 51381
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_188(int iParam0) //Position: 0xC8E1 / 51425
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

var Function_189(vector3 vParam0) //Position: 0xC938 / 51512
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

void Function_190(var uParam0, int iParam1) //Position: 0xC986 / 51590
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

void Function_191(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC9E1 / 51681
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_93(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_96(bParam0))
	{
		if (!Function_98(bParam0))
		{
			Function_195(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_118(457, 1, 0, 0);
		Function_153(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_58(0, 0, 1, 1))
			{
				Function_17(1);
				Function_16(1, 0);
			}
			else
			{
				Function_15();
			}
		}
	}
	return;
}

void Function_192(var uParam0, int iParam1) //Position: 0xCB82 / 52098
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_193(var uParam0, int iParam1) //Position: 0xCB93 / 52115
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_194(var uParam0, int iParam1) //Position: 0xCBAD / 52141
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xCBBE / 52158
{
	char* cVar0[32];
	
	if (!Function_93(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_155(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_98(bParam0))
	{
		Function_118(456, 1, 0, 0);
		Function_153(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_58(0, 0, 1, 1))
			{
				Function_17(1);
				Function_16(1, 5);
			}
			else
			{
				Function_15();
			}
		}
		Function_148(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_147() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_147() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_126(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_108())
		{
			if (!Function_107(Global_119934, 2))
			{
				Function_102(&Global_54076, 2, 1, 0);
			}
		}
	}
}

int Function_196(int iParam0, int iParam1) //Position: 0xCD1A / 52506
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_197(iParam0, iParam1);
	Function_102(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_197(int iParam0, int iParam1) //Position: 0xCD8F / 52623
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_198(int iParam0, int iParam1) //Position: 0xCDEC / 52716
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_199(iParam0, iParam1);
	Function_102(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_199(int iParam0, int iParam1) //Position: 0xCE5F / 52831
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_200(int iParam0) //Position: 0xCEBA / 52922
{
	var uVar0;
	var uVar1;
	
	if (!Function_51(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_201(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_201(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_118(468, 1, 0, 0);
			Function_145(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_126("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_186(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_195(14, 1, 0, 0, 0);
				Function_144(14, 1, 0, 0, 0);
			}
			if (!Function_58(0, 0, 1, 1))
			{
				Function_17(1);
				Function_16(1, 6);
			}
			else
			{
				Function_15();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_126("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_118(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_145(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_201(var uParam0, int iParam1) //Position: 0xD17A / 53626
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	return;
}

void Function_202(bool bParam0, bool bParam1, int iParam2) //Position: 0xD1D2 / 53714
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_203(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_206(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_203(int iParam0, int iParam1) //Position: 0xD245 / 53829
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_204(int iParam0) //Position: 0xD259 / 53849
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_85(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_194(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_118(473, 1, 0, 0);
		iVar0 = Function_205(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_118(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_118(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_118(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_145(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_145(7, 30);
	}
	if (Function_37(473) <= Function_38(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_205(int iParam0) //Position: 0xD34A / 54090
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_69(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

int Function_206(bool bParam0, bool bParam1, int iParam2) //Position: 0xD3A2 / 54178
{
	if (!Function_207(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_25(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_25(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_25(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_207(int iParam0) //Position: 0xD3FC / 54268
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_208(int iParam0) //Position: 0xD40E / 54286
{
	int iVar0;
	
	if (Function_56(iParam0, 1) && Function_56(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_209(struct<185> Param0) //Position: 0xD442 / 54338
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_210(4, 0, 0);
		}
	}
	return;
}

void Function_210(bool bParam0, var uParam1, int iParam2) //Position: 0xD4AD / 54445
{
	var uVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		uVar0 = MAKE_TIME_OF_DAY(bParam0, &uParam1, &iParam2);
		Function_211(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_211(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD597 / 54679
{
	int iVar0;
	
	Function_213(bParam0);
	Function_101(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_212();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_212() //Position: 0xD716 / 55062
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_213(int iParam0) //Position: 0xD722 / 55074
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

int Function_214(bool bParam0) //Position: 0xD768 / 55144
{
	if (!Function_77(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

int Function_215(bool bParam0) //Position: 0xD788 / 55176
{
	if (!Function_77(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_216(int iParam0) //Position: 0xD7A3 / 55203
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_217(105)), 0);
	return;
}

int Function_217(int iParam0) //Position: 0xD7C6 / 55238
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_218(int iParam0) //Position: 0xD7DD / 55261
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_101(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_101(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_101(&Global_21369 + 48);
	PRINTNL();
	Function_219(&iParam0);
	return;
}

void Function_219(int iParam0) //Position: 0xD87F / 55423
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_217(90)), 0);
	return;
}

void Function_220(var uParam0) //Position: 0xD8A2 / 55458
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &uParam0, 0);
	return;
}

bool Function_221() //Position: 0xD8BF / 55487
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_99725)
	{
		if (Function_160(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_222(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD8E5 / 55525
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_226(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_223(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_223(bParam0, bParam1, bParam2, 4294967295);
}

int Function_223(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xD943 / 55619
{
	var uVar0;
	
	if (!Function_225(bParam2))
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
	uVar0 = Function_226(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_224(uVar0);
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

var Function_224(int iParam0) //Position: 0xDAA7 / 55975
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

bool Function_225(int iParam0) //Position: 0xDAE5 / 56037
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_226(int iParam0, int iParam1, bool bParam2) //Position: 0xDAFA / 56058
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_227() //Position: 0xDB1A / 56090
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x00001389:
				return 5001;
				break;
			
			case 0x0000138A:
				return 5002;
				break;
			
			case 0x0000138C:
				return 5004;
				break;
			
			case 0x0000138B:
				return 5003;
				break;
			
			case 0x0000138D:
				return 5005;
				break;
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_228() //Position: 0xDB86 / 56198
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 <= iVar0)
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x00001388:
				return 1;
				break;
		}
		iVar1++;
	}
	return 0;
}

void Function_229(int iParam0) //Position: 0xDBBA / 56250
{
	if (iLocal_191 == 0)
	{
		if (Function_231(&iParam0))
		{
			Function_230(&iParam0);
			iLocal_191 = 1;
		}
	}
	return;
}

void Function_230(struct<16> Param0) //Position: 0xDBD8 / 56280
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	iVar0 = GET_OBJECTSET_SIZE(&uLocal_189);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_189));
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				if (DECOR_CHECK_EXIST(&uVar2, "DuelIsCrowdActor"))
				{
					bVar3 = DECOR_GET_INT(&uVar2, "DuelIsCrowdActor");
					if ((bVar3 && 32) == 0)
					{
						Function_134(&uVar2, bVar3, "GunfireShock");
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

bool Function_231(int iParam0) //Position: 0xDC7C / 56444
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = 0;
	uVar1 = GET_EVENT_LAYOUT();
	uVar2 = CREATE_OBJECT_ITERATOR(&uVar1);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	uVar3 = START_OBJECT_ITERATOR(&uVar2);
	if (IS_OBJECT_VALID(&uVar3))
	{
		while (IS_OBJECT_VALID(&uVar3))
		{
			uVar6 = GET_EVENT_FROM_OBJECT(&uVar3);
			if (IS_EVENT_VALID(&uVar6))
			{
				if (GET_EVENT_TYPE(&uVar6) == 6)
				{
					uVar4 = GET_EVENT_PERPETRATOR(&uVar6);
					if (IS_OBJECT_VALID(&uVar4))
					{
						if (GET_OBJECT_TYPE(&uVar4) == 15)
						{
							iVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
							if (IS_ACTOR_VALID(&iVar5))
							{
								if (&iVar5 == &iParam0)
								{
									iVar0 = 1;
								}
								else if (&iVar5 == &iParam0 + 8)
								{
									iVar0 = 1;
								}
							}
						}
					}
				}
			}
			uVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
		}
	}
	DESTROY_ITERATOR(&uVar2);
	return iVar0;
}

void Function_232(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xDD36 / 56630
{
	if (IS_STRING_VALID(&uParam3))
	{
		PRINT_BIG_FORMAT(&uParam2, &uParam0, &uParam3, &uParam4, &uParam5, &uParam6, 0, &uParam1);
	}
	else
	{
		PRINT_BIG(&uParam0, &uParam2, 0, 0, &uParam1);
	}
}

bool Function_233(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xDD71 / 56689
{
	if (!Function_237(&iParam1))
	{
		Function_266(&iParam1);
	}
	switch (uParam0)
	{
		case 0x000003EC:
			UI_LABEL_SET_TEXT("RacePosition", GET_ACTOR_ENUM_STRING(&uParam3));
			UI_ENTER("RacePosition");
			PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
			if (Global_116927[516] != 5 && bParam4)
			{
				Function_126("RCM_Gunslinger_Warning", 10.0f, 1, 0, 0, 1, 0);
			}
			Function_235(&iParam1);
			uParam0 = 1006;
			break;
		
		case 0x000003EE:
			if (Function_262(&iParam1) < (5.0f - 1.0f) && UI_ISACTIVE("RacePosition"))
			{
				UI_EXIT("RacePosition");
			}
			if (Function_262(&iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(&iParam2, "Tutorial0Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				if (UI_ISACTIVE("RacePosition"))
				{
					UI_EXIT("RacePosition");
				}
				Function_235(&iParam1);
				uParam0 = 1007;
			}
			break;
		
		case 0x000003EF:
			if (Function_262(&iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(&iParam2, "Tutorial1Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_235(&iParam1);
				uParam0 = 1104;
			}
			break;
		
		case 0x00000450:
			if (Function_262(&iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(&iParam2, "Tutorial2Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_234();
				Function_235(&iParam1);
				uParam0 = 1000;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_234() //Position: 0xDF91 / 57233
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	iVar0 = GET_OBJECTSET_SIZE(&uLocal_189);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_189));
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				if (DECOR_CHECK_EXIST(&uVar2, "DuelIsCrowdActor"))
				{
					bVar3 = DECOR_GET_INT(&uVar2, "DuelIsCrowdActor");
					if ((bVar3 && 16384) != 0)
					{
						if ((bVar3 && 16) != 0)
						{
							Function_134(&uVar2, bVar3, "point");
						}
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_235(int iParam0) //Position: 0xE02C / 57388
{
	Function_236(&iParam0, 0.0f);
	return;
}

void Function_236(vector3 vParam0) //Position: 0xE039 / 57401
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_318(&vParam0, 1);
	Function_314(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_237(int iParam0) //Position: 0xE05E / 57438
{
	return Function_56(iParam0, 1);
}

void Function_238(struct<16> Param0) //Position: 0xE06C / 57452
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	iLocal_191 = 0;
	return;
}

void Function_239(struct<89> Param0) //Position: 0xE081 / 57473
{
	var uVar0;
	var uVar1;
	struct<61> Var2;
	
	bLocal_205 = false;
	iLocal_206 = 0;
	if (!IS_ACTOR_VALID(&Param0 + 8))
	{
		LOG_ERROR("dueler is not valid, exiting dueling");
		Function_278(&Param0);
		TERMINATE_THIS_SCRIPT();
	}
	AUDIO_ALLOW_PREDUEL_SPEECH(&Param0 + 8);
	AUDIO_ALLOW_PREDUEL_SPEECH(&Param0);
	if (IS_VOLUME_VALID(&Param0 + 40))
	{
		FIRE_STOP_FLAMES_IN_VOLUME(&Param0 + 40);
		Function_261(&Param0 + 40);
		Function_259(&Param0 + 40, &iLocal_201, 0);
	}
	else
	{
		FIRE_STOP_ALL_FIRES();
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&Param0))
	{
		FIRE_STOP_ON_ACTOR(&Param0);
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&Param0 + 8))
	{
		FIRE_STOP_ON_ACTOR(&Param0 + 8);
	}
	iLocal_192 = 0;
	if (Function_257(1))
	{
		Function_255(9);
		iLocal_192 = 1;
	}
	Function_304(&Param0 + 8);
	if (!Function_254(GET_ACTOR_ENUM(&Param0), 6, 4))
	{
		Function_223(GET_ACTOR_ENUM(&Param0), 6, 4, 4294967295);
		Param0.f_48 = 1;
	}
	else if (Function_168(Function_222(GET_ACTOR_ENUM(&Param0), 6, 4)) < 0)
	{
		if (!Param0.f_48)
		{
		}
		Param0.f_48 = 1;
	}
	else
	{
		Param0.f_48 = 0;
	}
	Param0.f_88 = 0;
	(&Param0 + 88)->f_4 = -1.0f;
	*(&Param0 + 88 + 8) = &Param0;
	*(&Param0 + 88 + 16) = &Param0 + 8;
	SATCHEL_SET_ENABLED(0);
	if (Param0.f_80 != 3)
	{
		MEMORY_CONSIDER_AS_ENEMY(&Param0 + 8, &Param0);
		SET_ACTOR_UPDATE_PRIORITY(&Param0 + 8, false);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Param0 + 8, 100.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Param0 + 8, 53, 0.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Param0 + 8, 54, 0.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Param0 + 8, 31, -1.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Param0 + 8, 59, 0.0f);
	}
	Function_305(&Param0 + 8, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Param0, 0);
	ACTOR_FORCE_WEAPON_RENDER(&Param0 + 8, 1, 1);
	ACTOR_ENABLE_VARIABLE_MESH(&Param0 + 8, 5, true);
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	Function_253(&Param0);
	if (!Param0.f_52)
	{
		uVar0 = "Dueling_Tell_Sequence_Tutorial";
	}
	else
	{
		uVar0 = "Dueling_Tell_Sequence_Hostage";
	}
	if (!BEGIN_DUEL(&Param0, &Param0 + 8, *(&Param0 + 16), *(&Param0 + 28), "duel_player", &bLocal_193, "duel_player", &bLocal_195, &uVar0))
	{
		LOG_ERROR("Duel could not start");
	}
	if (Param0.f_52)
	{
		if (!IS_ACTOR_ALIVE(&Param0 + 56))
		{
			*(&Param0 + 56) = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_201, "duelhostage", 59, *(&Param0 + 28), Vector(0.0f, 0.0f, 0.0f));
		}
		Function_252(&Param0 + 8);
		TELEPORT_ACTOR_WITH_HEADING(&Param0 + 56, Function_252(&Param0 + 8), GET_OBJECT_HEADING(&Param0 + 8), 1, 1, true);
		RESET_ANIM_SET_FOR_ACTOR(&Param0 + 56, 1);
		SET_LINKED_ANIM_TARGET(&Param0 + 8, &Param0 + 56);
		SET_ANIM_SET_FOR_ACTOR(&Param0 + 8, "duel_hostage", 0);
		SET_ANIM_SET_FOR_ACTOR(&Param0 + 56, "duel_hostage", 0);
		DESTROY_OBJECT(DROP_ACCESSORY_ENUM(&Param0 + 8, 0));
		ADD_DUEL_HOSTAGE(&Param0 + 56, &Param0);
		SET_EMOTION(&Param0 + 56, 3, -1.0f);
		TASK_FLEE_ACTOR(&Param0 + 56, &Param0 + 8, 20.0f, -1.0f, 0, 0, 0);
	}
	Function_264(&Param0);
	if (IS_VOLUME_VALID(&Param0 + 72))
	{
		uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_295(), &iLocal_201, 4294967295, 1);
		LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(&uVar1, &Param0 + 72, "", 1);
		Function_251(&uVar1);
		DESTROY_OBJECTSET(&uVar1);
	}
	iLocal_207 = 0;
	*(&Var2 + 64) = 6;
	*(&Var2 + 168) = 6;
	uVar30 = 6;
	if (Function_249(&Var2, Param0.f_84))
	{
		iLocal_207 = Var2.f_56;
		if (Var2.f_60 >= 0)
		{
			if (Var2.f_56 == 1)
			{
				Function_248(&iLocal_201, &Var2, &Param0, &uVar30);
			}
			else if (Var2.f_56 == 2)
			{
				Function_245(50.0f, &iLocal_201, &Var2, &Param0, &uVar30);
			}
		}
	}
	Function_242(&Param0, &iLocal_201);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(&Param0 + 8);
	if (!Function_306())
	{
		if (Param0.f_80 != 0 && Param0.f_68 < 50)
		{
			Param0.f_68 = 50;
		}
		else if (Param0.f_80 == 1)
		{
			if (Param0.f_68 >= 75)
			{
				Param0.f_68 = 75;
			}
			else if (Param0.f_68 > 50 && !Global_6623)
			{
				Param0.f_68 = 50;
			}
		}
		else if ((Param0.f_80 != 1 && Param0.f_68 > 75) && !Global_6623)
		{
			Param0.f_68 = 75;
		}
	}
	fVar37 = 10.0f;
	if (Function_306())
	{
		if (Param0.f_80 == 1)
		{
			fVar37 = 6.0f;
		}
		else if (Param0.f_80 == 2)
		{
			fVar37 = (6.0f - 2.0f);
		}
	}
	if (Param0.f_48)
	{
		if (!SET_DUEL_DIFFICULTY(&Param0, (fVar37 * 2.0f), Param0.f_68, Param0.f_64))
		{
			LOG_ERROR("Duel could not set difficulty");
		}
	}
	else if (!SET_DUEL_DIFFICULTY(&Param0, fVar37, Param0.f_68, Param0.f_64))
	{
		LOG_ERROR("Duel could not set difficulty");
	}
	if (DECOR_CHECK_EXIST(&Param0, "iDuelResult"))
	{
		DECOR_REMOVE(&Param0, "iDuelResult");
	}
	Global_98975 = 1;
	uVar38 = GET_OBJECT_MODEL_NAME(&Param0);
	ADD_NEW_EVENT_RESPONSE(5001, 38, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5002, 39, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5003, 40, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5004, 41, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5000, 44, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5006, 43, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5005, 42, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5007, 46, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5006, 43, 15, GET_OBJECT_MODEL_NAME(&Param0 + 8));
	_DYNAMICMIXER_2();
	Function_241(1);
	TASK_STAND_STILL(&Param0 + 8, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&Param0 + 8, true);
	MEMORY_ALLOW_SHOOTING(&Param0 + 8, true);
	ACTOR_END_FORCE_HOLSTER(&Param0 + 8);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Param0 + 8, 0);
	MEMORY_CONSIDER_AS_ENEMY(&Param0 + 8, &Global_54076);
	MEMORY_ATTACK_ON_SIGHT(&Param0 + 8, 1);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(GET_ACTOR_FACTION(&Param0 + 8), GET_ACTOR_FACTION(&Param0), 1.0f);
	FIRE_STOP_ON_ACTOR(&Param0 + 8);
	AI_CLEAR_DONT_HARM_ACTOR(&Param0);
	TASK_CLEAR(&Param0);
	FIRE_STOP_ON_ACTOR(&Param0);
	SET_ACTOR_INVULNERABILITY(&Param0, false);
	Function_240(&uLocal_197, 0.0f);
	return;
}

void Function_240(int iParam0, float fParam1) //Position: 0xE72A / 59178
{
	if (!Function_237(&iParam0))
	{
		Function_236(&iParam0, fParam1);
	}
	return;
}

void Function_241(int iParam0) //Position: 0xE742 / 59202
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

int Function_242(int iParam0, int iParam1) //Position: 0xE75F / 59231
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam1, "volAmbientSpectators", 2, *(&iParam0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(80.0f, 50.0f, 80.0f));
	if (!IS_VOLUME_VALID(&uVar0))
	{
		LOG_ERROR("DUEL_FIND_AND_TASK_NEARBY_ACTORS: Unable to create search volume.");
		return 0;
	}
	uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_295(), &iParam1, 15, 1);
	iVar2 = LOCATE_ACTORS_IN_VOLUME(&uVar0, &uVar1, 0, 1);
	uLocal_189 = CREATE_OBJECTSET_IN_LAYOUT(Function_295(), &iParam1, 15, 1);
	bVar3 = false;
	while (bVar3 <= iVar2)
	{
		iVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uVar1));
		if (((((&iVar4 == &iParam0 + 8 && &iVar4 == &iParam0 + 56) && &iVar4 == &iParam0) && IS_ACTOR_HUMAN(&iVar4)) && !IS_OBJECT_IN_OBJECTSET(&iVar4, &uLocal_187)) && !DECOR_CHECK_EXIST(&iVar4, "ignoreactorinduel"))
		{
			if (DECOR_CHECK_EXIST(&iVar4, "DuelIsCrowdActor"))
			{
				Function_243(&iVar4, &iParam0, &iParam1);
				ADD_OBJECT_TO_OBJECTSET(&iVar4, &uLocal_189);
			}
		}
		bVar3++;
	}
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (IS_OBJECTSET_VALID(&uVar1))
	{
		DESTROY_OBJECTSET(&uVar1);
	}
	return 1;
}

void Function_243(var uParam0, int iParam1, int iParam2) //Position: 0xE8E0 / 59616
{
	bool bVar0;
	var uVar1[2];
	
	iParam2 = &iParam2;
	if (DECOR_CHECK_EXIST(&uParam0, "DuelIsCrowdActor"))
	{
		bVar0 = DECOR_GET_INT(&uParam0, "DuelIsCrowdActor");
		Function_244(bVar0, &uVar1);
		SET_ANIM_SET_FOR_ACTOR(&uParam0, &(uVar1[0]), 0);
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, &(uVar1[1]));
	}
	TASK_FACE_ACTOR(&uParam0, &iParam1 + 8, 1, 3212836864);
	TASK_PRIORITY_SET(&uParam0, true);
	return;
}

void Function_244(var uParam0, int[] iParam1) //Position: 0xE963 / 59747
{
	bool bVar0;
	
	bVar0 = false;
	if (uParam0 & 16 != 0)
	{
		if (uParam0 & 16384 == 0)
		{
			bVar0 = true;
		}
	}
	if (uParam0 & 32 != 0)
	{
		iParam1[0] = "stand_wringhands";
		iParam1[1] = "stand_wringhands";
	}
	else if (uParam0 & 256 != 0)
	{
		iParam1[0] = "crowd_duel";
		if (bVar0)
		{
			iParam1[1] = "crowd_duel_center/point";
		}
		else
		{
			iParam1[1] = "crowd_duel_center";
		}
	}
	else if (uParam0 & 512 != 0)
	{
		iParam1[0] = "crowd_duel";
		if (bVar0)
		{
			iParam1[1] = "crowd_duel_left/point";
		}
		else
		{
			iParam1[1] = "crowd_duel_left";
		}
	}
	else if (uParam0 & 1024 != 0)
	{
		iParam1[0] = "crowd_duel";
		if (bVar0)
		{
			iParam1[1] = "crowd_duel_right/point";
		}
		else
		{
			iParam1[1] = "crowd_duel_right";
		}
	}
	else
	{
		iParam1[0] = "crowd_duel";
		iParam1[1] = "crowd_duel_center";
	}
	return;
}

int Function_245(var uParam0, var uParam1, struct<61> Param2) //Position: 0xEB1A / 60186
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	var uVar8;
	bool bVar10;
	
	Var2 = Vector(uParam0, 50.0f, uParam0);
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam1, "volAmbientSpecsToGrab", 2, *(&iParam3 + 16), Vector(0.0f, 0.0f, 0.0f), Var2);
	if (!IS_VOLUME_VALID(&uVar0))
	{
		LOG_ERROR("DUEL_FIND_AND_TELEPORT_SPECTATORS: Unable to create search volume.");
		return 0;
	}
	uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_295(), &uParam1, 15, 1);
	iVar4 = LOCATE_ACTORS_IN_VOLUME(&uVar0, &uVar1, 0, 1);
	iVar5 = 0;
	bVar6 = false;
	while (bVar6 <= iVar4)
	{
		iVar7 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, &uVar1));
		if ((((((((((&iVar7 == &iParam3 + 8 && &iVar7 == &iParam3 + 56) && &iVar7 == &iParam3) && IS_ACTOR_HUMAN(&iVar7)) && !IS_ACTOR_HOGTIED(&iVar7)) && !IS_ACTOR_RIDING_VEHICLE(&iVar7)) && !IS_ACTOR_RIDING(&iVar7)) && !IS_ACTOR_DRUNK(&iVar7)) && !IS_OBJECT_IN_OBJECTSET(&iVar7, &uLocal_187)) && !DECOR_CHECK_EXIST(&iVar7, "ignoreactorinduel")) && iVar5 > Param2.f_60)
		{
			uParam4[iVar5] = &iVar7;
			Function_247(GET_PERS_CHAR_FROM_ACTOR(&iVar7), 1);
			uVar8 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param2 + 64[iVar52]), *(&iParam3 + 28), StackVal);
			bVar10 = UNK_0x9C40E671(&uVar8);
			TELEPORT_ACTOR_WITH_HEADING(&iVar7, *(&Param2 + 64[iVar52]), bVar10, 1, 1, true);
			TASK_CLEAR(&iVar7);
			RESET_ANIM_SET_FOR_ACTOR(&iVar7, 1);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar7, 1);
			TASK_FACE_COORD(&iVar7, &Param2 + 36, 1);
			TASK_PRIORITY_SET(&iVar7, true);
			iVar5++;
		}
		bVar6++;
	}
	Function_246(&uParam4, iVar5, 0, &Param2);
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (IS_OBJECTSET_VALID(&uVar1))
	{
		DESTROY_OBJECTSET(&uVar1);
	}
	return 1;
}

int Function_246(var[] uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xED10 / 60688
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	
	if (iParam1 < 0)
	{
		return 1;
	}
	iVar0 = 4294967295;
	bVar1 = RAND_INT_RANGE(false, (iParam1 - 1));
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar3 = ((iVar2 + bVar1) % iParam1);
		if (IS_ACTOR_MALE(&(uParam0[iVar3])))
		{
			if ((*&iParam3 + 168)[iVar3] & 4096 != 0)
			{
				if (UNK_0xE094DB31(&(uParam0[iVar3]), 0))
				{
					iVar0 = iVar3;
				}
			}
		}
		iVar2++;
	}
	iVar4 = 4294967295;
	bVar1 = RAND_INT_RANGE(false, (iParam1 - 1));
	iVar5 = 8192 | 16384;
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar6 = ((iVar2 + bVar1) % iParam1);
		if (((*&iParam3 + 168)[iVar6] && iVar5) != 0)
		{
			iVar4 = iVar6;
		}
		iVar2++;
	}
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 <= iParam1)
	{
		bVar9 = (*&iParam3 + 168)[iVar8];
		if (!bParam2)
		{
			Function_318(&bVar9, 4);
		}
		if (iVar8 == iVar0)
		{
			Function_318(&bVar9, 8);
		}
		if (iVar8 == iVar4)
		{
			Function_318(&bVar9, 16);
		}
		if (bParam2)
		{
			bVar10 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			if (bVar10 < 0,5f || iVar7 <= 3)
			{
				Function_318(&bVar9, 64);
			}
			else
			{
				iVar7++;
			}
		}
		DECOR_SET_INT(&(uParam0[iVar8]), "DuelIsCrowdActor", bVar9);
		iVar8++;
	}
	return 1;
}

int Function_247(bool bParam0, bool bParam1) //Position: 0xEE5C / 61020
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&bParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&bParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bParam0, 1);
			return 1;
		}
	}
	return 0;
}

void Function_248(var uParam0, struct<61> Param1) //Position: 0xEF0E / 61198
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar5;
	var uVar6;
	
	Param2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2 };
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Param1.f_60)
	{
		uVar2 = (*&Param1 + 168)[iVar1];
		if (uVar2 & 32768 == 0)
		{
			uVar3 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param1 + 64[iVar12]), *(&Param2 + 28), StackVal);
			bVar5 = UNK_0x9C40E671(&uVar3);
			uParam3[iVar0] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uParam0, Function_295(), uLocal_208[iVar0], *(&Param1 + 64[iVar12]), Vector(0.0f, bVar5, 0.0f));
			TASK_FACE_COORD(&(uParam3[iVar0]), &Param1 + 36, 1);
			TASK_PRIORITY_SET(&(uParam3[iVar0]), true);
			uVar6 = GET_OBJECT_MODEL_NAME(&(uParam3[iVar0]));
			PRINTFLOAT(bVar5);
			PRINTNL();
			iVar0++;
		}
		iVar1++;
	}
	Function_246(&uParam3, iVar0, 0, &Param1);
}

bool Function_249(struct<61> Param0) //Position: 0xEFDB / 61403
{
	if (iParam1 <= 0)
	{
		return Function_250(&Param0, iParam1);
	}
	if (Global_43789 == Global_46760[0])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(-2175,953f, 16,256f, 2611,705f);
			*(&Param0 + 36) = Vector(-2166,595f, 16,214f, 2611,732f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2160,472f, 16,902f, 2605,667f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(-2158,75f, 16,881f, 2605,917f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-2155,889f, 16,434f, 2617,996f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2157,149f, 16,447f, 2619,214f);
			(*&Param0 + 168)[3] = 18944;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(-2157,237f, 16,256f, 2611,759f);
			*(&Param0 + 36) = Vector(-2166,595f, 16,214f, 2611,732f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 60.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2164,137f, 16,909f, 2619,3f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(-2171,411f, 16,449f, 2619,825f);
			(*&Param0 + 168)[1] = 7168;
			*(&Param0 + 64[22]) = Vector(-2173,083f, 16,449f, 2620,048f);
			(*&Param0 + 168)[2] = 12800;
			*(&Param0 + 64[32]) = Vector(-2168,264f, 16,881f, 2605,223f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(-2141,009f, 16,097f, 2610,77f);
			*(&Param0 + 36) = Vector(-2152,214f, 16,097f, 2611,114f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 130.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2163,959f, 16,909f, 2619,74f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2165,694f, 16,909f, 2620,008f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2161,763f, 16,881f, 2605,855f);
			(*&Param0 + 168)[2] = 4352;
			*(&Param0 + 64[32]) = Vector(-2157,148f, 16,881f, 2602,253f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(-2163,419f, 16,097f, 2611,458f);
			*(&Param0 + 36) = Vector(-2152,214f, 16,097f, 2611,114f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 130.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2146,166f, 16,399f, 2604,041f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2144,782f, 16,437f, 2604,025f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2134,941f, 16,449f, 2619,2f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(-2142,436f, 16,451f, 2620,109f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(-2109,022f, 16,306f, 2610,545f);
			*(&Param0 + 36) = Vector(-2120,304f, 16,097f, 2610,42f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 130.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2128,746f, 16,582f, 2618,448f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2130,542f, 16,583f, 2618,705f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2132,521f, 16,583f, 2618,72f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(-2131,128f, 16,617f, 2603,082f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(-2131,586f, 16,306f, 2610,295f);
			*(&Param0 + 36) = Vector(-2120,304f, 16,097f, 2610,42f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 130.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2109,311f, 17,032f, 2602,233f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(-2084,119f, 16,722f, 2620,025f);
			(*&Param0 + 168)[1] = 2304;
			*(&Param0 + 64[22]) = Vector(-2110,06f, 16,574f, 2618,706f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2112,009f, 16,574f, 2618,81f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(&Param0 + 24) = Vector(-2181,665f, 16,199f, 2626,591f);
			*(&Param0 + 36) = Vector(-2181,558f, 16,27f, 2617,295f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 70.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2187,365f, 16,947f, 2611,735f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2187,344f, 16,947f, 2610,434f);
			(*&Param0 + 168)[1] = 16896;
			*(&Param0 + 64[22]) = Vector(-2175,141f, 16,563f, 2603,119f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2173,878f, 16,846f, 2603,615f);
			(*&Param0 + 168)[3] = 8704;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(&Param0 + 24) = Vector(-2181,451f, 16,199f, 2607,999f);
			*(&Param0 + 36) = Vector(-2181,558f, 16,27f, 2617,295f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2171,507f, 16,91f, 2626,342f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2171,085f, 17,419f, 2628,723f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2188,435f, 46,438f, 2629,844f);
			(*&Param0 + 168)[2] = 6400;
			*(&Param0 + 64[32]) = Vector(-2186,93f, 16,354f, 2624,667f);
			(*&Param0 + 168)[3] = 6400;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(&Param0 + 24) = Vector(-2182,602f, 16,279f, 2582,669f);
			*(&Param0 + 36) = Vector(-2182,557f, 16,283f, 2592,741f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2175,813f, 16,892f, 2598,68f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2175,771f, 16,892f, 2599,781f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2187,98f, 16,947f, 2605,092f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2188,852f, 16,947f, 2604,008f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(&Param0 + 24) = Vector(-2182,512f, 16,279f, 2602,813f);
			*(&Param0 + 36) = Vector(-2182,557f, 16,283f, 2592,741f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2192,36f, 16,58f, 2590,16f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(-2175,242f, 16,431f, 2579,68f);
			(*&Param0 + 168)[1] = 5120;
			*(&Param0 + 64[22]) = Vector(-2174,96f, 16,393f, 2581,227f);
			(*&Param0 + 168)[2] = 12800;
			*(&Param0 + 64[32]) = Vector(-2174,707f, 16,359f, 2583,002f);
			(*&Param0 + 168)[3] = 16896;
			return 1;
		}
	}
	if (Global_43789 == Global_46816[0])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(-833,757f, 92,093f, 2405,053f);
			*(&Param0 + 36) = Vector(-824,86f, 92,111f, 2405,911f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 60.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-826,829f, 92,604f, 2399,558f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-825,39f, 92,604f, 2400,278f);
			(*&Param0 + 168)[1] = 20992;
			*(&Param0 + 64[22]) = Vector(-817,222f, 92,228f, 2400,68f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-815,883f, 92,122f, 2401,766f);
			(*&Param0 + 168)[3] = 12800;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(-815,963f, 92,093f, 2406,769f);
			*(&Param0 + 36) = Vector(-824,86f, 92,111f, 2405,911f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 60.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-834,486f, 92,625f, 2412,879f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(-833,019f, 92,604f, 2398,71f);
			(*&Param0 + 168)[1] = 5120;
			*(&Param0 + 64[22]) = Vector(-830,829f, 92,597f, 2398,705f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(-827,994f, 92,604f, 2399,416f);
			(*&Param0 + 168)[3] = 16896;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(-948,017f, 90,246f, 2443,329f);
			*(&Param0 + 36) = Vector(-940,246f, 90,101f, 2439,536f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-944,354f, 90,362f, 2433,664f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-943,069f, 90,368f, 2432,761f);
			(*&Param0 + 168)[1] = 20992;
			*(&Param0 + 64[22]) = Vector(-936,299f, 90,374f, 2429,44f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-935,053f, 90,383f, 2429,297f);
			(*&Param0 + 168)[3] = 8704;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(-932,475f, 90,246f, 2435,743f);
			*(&Param0 + 36) = Vector(-940,246f, 90,101f, 2439,536f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-943,643f, 90,353f, 2452,65f);
			(*&Param0 + 168)[0] = 7168;
			*(&Param0 + 64[12]) = Vector(-945,45f, 90,35f, 2452,563f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-957,561f, 90,786f, 2438,436f);
			(*&Param0 + 168)[2] = 2304;
			*(&Param0 + 64[32]) = Vector(-953,349f, 90,786f, 2436,586f);
			(*&Param0 + 168)[3] = 20736;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(-773,226f, 92,264f, 2441,655f);
			*(&Param0 + 36) = Vector(-779,513f, 92,261f, 2435,719f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-789,443f, 92,336f, 2433,929f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(-788,805f, 93,291f, 2415,236f);
			(*&Param0 + 168)[1] = 4352;
			*(&Param0 + 64[22]) = Vector(-782,939f, 93,132f, 2421,574f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-781,724f, 93,106f, 2422,239f);
			(*&Param0 + 168)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(-785,8f, 92,264f, 2429,783f);
			*(&Param0 + 36) = Vector(-779,513f, 92,261f, 2435,719f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-789,063f, 93,199f, 2416,324f);
			(*&Param0 + 168)[0] = 1024;
			*(&Param0 + 64[12]) = Vector(-787,695f, 93,291f, 2416,819f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-784,003f, 92,958f, 2422,655f);
			(*&Param0 + 168)[2] = 4096;
			*(&Param0 + 64[32]) = Vector(-788,074f, 92,302f, 2435,201f);
			(*&Param0 + 168)[3] = 4096;
			return 1;
		}
	}
	if (Global_43789 == Global_46816[1])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(161,801f, 73,036f, 2209,601f);
			*(&Param0 + 36) = Vector(154,678f, 73,036f, 2214,532f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(151,093f, 73,781f, 2231,127f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(149,66f, 73,778f, 2229,832f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(149,334f, 73,78f, 2232,961f);
			(*&Param0 + 168)[2] = 20736;
			*(&Param0 + 64[32]) = Vector(130,805f, 73,285f, 2225,233f);
			(*&Param0 + 168)[3] = 256;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(147,555f, 73,036f, 2219,463f);
			*(&Param0 + 36) = Vector(154,678f, 73,036f, 2214,532f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(132,103f, 73,286f, 2222,323f);
			(*&Param0 + 168)[0] = 256;
			*(&Param0 + 64[12]) = Vector(163,447f, 73,758f, 2196,496f);
			(*&Param0 + 168)[1] = 5120;
			*(&Param0 + 64[22]) = Vector(164,755f, 73,755f, 2196,096f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(168,478f, 73,286f, 2214,951f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(112,178f, 73,036f, 2307,669f);
			*(&Param0 + 36) = Vector(113,796f, 73,036f, 2299,295f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(110,108f, 73,286f, 2288,538f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(121,847f, 73,286f, 2288,113f);
			(*&Param0 + 168)[1] = 1024;
			*(&Param0 + 64[22]) = Vector(121,773f, 73,286f, 2289,774f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(121,96f, 73,286f, 2291,226f);
			(*&Param0 + 168)[3] = 4608;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(115,414f, 73,036f, 2290,921f);
			*(&Param0 + 36) = Vector(113,796f, 73,036f, 2299,295f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(117,484f, 73,286f, 2310,052f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(105,745f, 73,286f, 2310,477f);
			(*&Param0 + 168)[1] = 1024;
			*(&Param0 + 64[22]) = Vector(105,819f, 73,286f, 2308,816f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(105,632f, 73,286f, 2307,364f);
			(*&Param0 + 168)[3] = 4608;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(125,52f, 72,495f, 2253,003f);
			*(&Param0 + 36) = Vector(123,009f, 73,014f, 2261,074f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(112,309f, 73,767f, 2280,208f);
			(*&Param0 + 168)[0] = 1024;
			*(&Param0 + 64[12]) = Vector(112,308f, 73,641f, 2277,641f);
			(*&Param0 + 168)[1] = 9216;
			*(&Param0 + 64[22]) = Vector(113,096f, 73,649f, 2273,542f);
			(*&Param0 + 168)[2] = 512;
			*(&Param0 + 64[32]) = Vector(113,108f, 73,66f, 2271,663f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(120,498f, 72,495f, 2269,145f);
			*(&Param0 + 36) = Vector(123,009f, 73,014f, 2261,074f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(112,671f, 73,644f, 2276,903f);
			(*&Param0 + 168)[0] = 256;
			*(&Param0 + 64[12]) = Vector(117,043f, 73,643f, 2240,313f);
			(*&Param0 + 168)[1] = 5120;
			*(&Param0 + 64[22]) = Vector(118,516f, 73,712f, 2240,557f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(124,33f, 76,749f, 2238,564f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
	}
	if (Global_43789 == Global_46850[0])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(-4297,778f, 22,269f, 4404,503f);
			*(&Param0 + 36) = Vector(-4304,795f, 22,573f, 4404,685f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4306,099f, 22,155f, 4415,161f);
			(*&Param0 + 168)[0] = 256;
			*(&Param0 + 64[12]) = Vector(-4311,022f, 23,058f, 4412,995f);
			(*&Param0 + 168)[1] = 4608;
			*(&Param0 + 64[22]) = Vector(-4311,679f, 23,058f, 4411,987f);
			(*&Param0 + 168)[2] = 13312;
			*(&Param0 + 64[32]) = Vector(-4313,768f, 26,886f, 4406,992f);
			(*&Param0 + 168)[3] = 6400;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(-4304,795f, 22,573f, 4404,685f);
			*(&Param0 + 36) = Vector(-4297,778f, 22,269f, 4404,503f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4305,446f, 22,139f, 4414,692f);
			(*&Param0 + 168)[0] = 1024;
			*(&Param0 + 64[12]) = Vector(-4306,939f, 22,322f, 4414,795f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-4309,754f, 23,058f, 4413,441f);
			(*&Param0 + 168)[2] = 6400;
			*(&Param0 + 64[32]) = Vector(-4313,768f, 26,886f, 4406,992f);
			(*&Param0 + 168)[3] = 6400;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(-4267,992f, 18,109f, 4437,149f);
			*(&Param0 + 36) = Vector(-4275,026f, 18,178f, 4441,885f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4278,334f, 18,071f, 4449,653f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-4279,857f, 18,071f, 4449,824f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-4281,086f, 18,071f, 4438,504f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(-4279,52f, 18,071f, 4437,386f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(-4282,06f, 18,109f, 4446,621f);
			*(&Param0 + 36) = Vector(-4275,026f, 18,178f, 4441,885f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4277,958f, 18,071f, 4437,547f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-4276,217f, 18,076f, 4436,355f);
			(*&Param0 + 168)[1] = 4608;
			*(&Param0 + 64[22]) = Vector(-4270,787f, 18,071f, 4432,743f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(-4269,763f, 18,071f, 4433,286f);
			(*&Param0 + 168)[3] = 8704;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(-4318,445f, 22,086f, 4450,013f);
			*(&Param0 + 36) = Vector(-4318,897f, 22,086f, 4440,917f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 60.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4330,111f, 25,409f, 4422,815f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-4329,889f, 25,581f, 4421,464f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-4329,611f, 25,573f, 4420,175f);
			(*&Param0 + 168)[2] = 4352;
			*(&Param0 + 64[32]) = Vector(-4312,611f, 22,004f, 4423,452f);
			(*&Param0 + 168)[3] = 256;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(-4319,349f, 22,086f, 4431,821f);
			*(&Param0 + 36) = Vector(-4318,897f, 22,086f, 4440,917f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 60.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4322,033f, 22,087f, 4455,366f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-4323,083f, 22,087f, 4453,766f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-4324,211f, 22,094f, 4451,612f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(-4325,245f, 22,128f, 4450,168f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
	}
	if (Global_43789 == Global_46866[0])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(-2732,999f, 32,668f, 4258,262f);
			*(&Param0 + 36) = Vector(-2724,731f, 32,559f, 4254,918f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 80.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2720,958f, 32,28f, 4245,056f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2719,41f, 32,28f, 4244,509f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-2713,209f, 32,808f, 4256,949f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2714,787f, 32,827f, 4257,932f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(-2716,179f, 32,668f, 4250,88f);
			*(&Param0 + 36) = Vector(-2724,589f, 33,196f, 4254,571f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 80.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2725,793f, 32,826f, 4264,401f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2726,701f, 32,825f, 4265,115f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-2737,822f, 32,607f, 4253,199f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2736,711f, 32,607f, 4251,915f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(-2678,78f, 31,48f, 4241,123f);
			*(&Param0 + 36) = Vector(-2688,745f, 31,42f, 4241,607f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 80.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2700,972f, 31,57f, 4254,442f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2702,482f, 32,011f, 4254,482f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-2704,879f, 32,28f, 4235,066f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(-2704,098f, 32,176f, 4233,792f);
			(*&Param0 + 168)[3] = 20736;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(-2698,71f, 31,48f, 4242,091f);
			*(&Param0 + 36) = Vector(-2688,745f, 31,42f, 4241,607f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 80.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2679,489f, 32,5f, 4232,727f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2677,893f, 32,5f, 4233,058f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-2671,652f, 31,192f, 4248,009f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(-2683,122f, 31,548f, 4248,685f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
	}
	if (Global_43789 == Global_46894[2])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(-819,766f, 12,801f, 3773,009f);
			*(&Param0 + 36) = Vector(-813,468f, 12,801f, 3766,967f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-804,586f, 13,051f, 3742,726f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(-803,14f, 13,551f, 3764,739f);
			(*&Param0 + 168)[1] = 1024;
			*(&Param0 + 64[22]) = Vector(-804,056f, 13,551f, 3765,803f);
			(*&Param0 + 168)[2] = 20992;
			*(&Param0 + 64[32]) = Vector(-805,158f, 13,551f, 3767,062f);
			(*&Param0 + 168)[3] = 512;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(-807,17f, 12,801f, 3760,925f);
			*(&Param0 + 36) = Vector(-813,468f, 12,801f, 3766,967f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-809,813f, 13,551f, 3771,118f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(-812,055f, 13,551f, 3773,48f);
			(*&Param0 + 168)[1] = 16896;
			*(&Param0 + 64[22]) = Vector(-813,522f, 13,551f, 3774,942f);
			(*&Param0 + 168)[2] = 13312;
			*(&Param0 + 64[32]) = Vector(-816,089f, 13,551f, 3777,198f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(-787,179f, 12,801f, 3736,633f);
			*(&Param0 + 36) = Vector(-793,017f, 12,801f, 3743,048f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-811,045f, 13,051f, 3750,048f);
			(*&Param0 + 168)[0] = 1024;
			*(&Param0 + 64[12]) = Vector(-810,352f, 13,051f, 3748,774f);
			(*&Param0 + 168)[1] = 20992;
			*(&Param0 + 64[22]) = Vector(-806,995f, 13,051f, 3746,105f);
			(*&Param0 + 168)[2] = 21504;
			*(&Param0 + 64[32]) = Vector(-806,253f, 13,051f, 3744,332f);
			(*&Param0 + 168)[3] = 512;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(-798,855f, 12,801f, 3749,463f);
			*(&Param0 + 36) = Vector(-793,017f, 12,801f, 3743,048f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-789,346f, 13,04f, 3730,211f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-786,917f, 13,037f, 3728,203f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-785,021f, 13,051f, 3724,668f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(-782,264f, 13,036f, 3740,828f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(-804,814f, 13,051f, 3719,617f);
			*(&Param0 + 36) = Vector(-798,673f, 13,051f, 3713,655f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-800,2f, 13,12f, 3705,603f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-799,261f, 13,12f, 3704,608f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-797,36f, 13,12f, 3703,65f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(-788,266f, 13,051f, 3712,833f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(-798,673f, 13,051f, 3713,655f);
			*(&Param0 + 36) = Vector(-804,814f, 13,051f, 3719,617f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-804,219f, 13,051f, 3729,436f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-805,748f, 13,051f, 3729,628f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-808,559f, 13,051f, 3730,366f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(-813,656f, 13,051f, 3715,872f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
	}
	if (Global_43789 == Global_46914[0])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(735,953f, 78,306f, 1324,242f);
			*(&Param0 + 36) = Vector(735,953f, 78,306f, 1315,071f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(729,253f, 48,486f, 1309,157f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(729,192f, 78,486f, 1307,499f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(742,653f, 78,425f, 1306,141f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(743,264f, 78,425f, 1307,125f);
			(*&Param0 + 168)[3] = 16896;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(735,953f, 78,306f, 1305,9f);
			*(&Param0 + 36) = Vector(735,953f, 78,306f, 1315,071f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(742,376f, 78,425f, 1320,613f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(741,937f, 78,425f, 1321,135f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(741,855f, 78,425f, 1322,617f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(729,187f, 78,486f, 1322,833f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(788,067f, 78,306f, 1292,354f);
			*(&Param0 + 36) = Vector(788,064f, 78,306f, 1301,43f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(794,4f, 78,456f, 1312,086f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(794,491f, 78,456f, 1313,429f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(781,088f, 78,413f, 1322,206f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(780,901f, 78,413f, 1320,856f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(788,061f, 78,306f, 1310,506f);
			*(&Param0 + 36) = Vector(788,064f, 78,306f, 1301,43f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(782,021f, 78,419f, 1294,476f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(779,472f, 78,42f, 1290,639f);
			(*&Param0 + 168)[1] = 1024;
			*(&Param0 + 64[22]) = Vector(780,614f, 78,42f, 1289,73f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(797,764f, 78,468f, 1288,355f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(686,033f, 78,197f, 1303,161f);
			*(&Param0 + 36) = Vector(685,943f, 78,195f, 1312,249f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(692,386f, 78,49f, 1319,771f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(693,316f, 78,474f, 1329,634f);
			(*&Param0 + 168)[1] = 256;
			*(&Param0 + 64[22]) = Vector(680,325f, 79,321f, 1325,2f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(679,214f, 79,322f, 1323,885f);
			(*&Param0 + 168)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(685,853f, 78,197f, 1321,337f);
			*(&Param0 + 36) = Vector(685,943f, 78,195f, 1312,249f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(671,907f, 78,472f, 1293,629f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(671,832f, 78,47f, 1291,321f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(691,761f, 78,49f, 1290,059f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(691,998f, 78,49f, 1296,535f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(&Param0 + 24) = Vector(739,831f, 78,306f, 1252,583f);
			*(&Param0 + 36) = Vector(730,21f, 78,306f, 1252,583f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(723,05f, 78,471f, 1260,361f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(719,061f, 78,471f, 1260,12f);
			(*&Param0 + 168)[1] = 5120;
			*(&Param0 + 64[22]) = Vector(718,014f, 78,471f, 1259,29f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(699,142f, 78,527f, 1242,135f);
			(*&Param0 + 168)[3] = 256;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(&Param0 + 24) = Vector(720,589f, 78,306f, 1252,583f);
			*(&Param0 + 36) = Vector(730,21f, 78,306f, 1252,583f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(743,34f, 78,504f, 1244,251f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(755,658f, 78,422f, 1260,858f);
			(*&Param0 + 168)[1] = 512;
			*(&Param0 + 64[22]) = Vector(746,283f, 78,422f, 1259,612f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(744,823f, 78,421f, 1260,437f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(&Param0 + 24) = Vector(686,412f, 78,306f, 1351,855f);
			*(&Param0 + 36) = Vector(686,271f, 78,306f, 1361,19f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(693,253f, 78,381f, 1375,135f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(691,817f, 78,373f, 1376,577f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(681,885f, 78,446f, 1380,694f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(680,597f, 78,502f, 1372,951f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(&Param0 + 24) = Vector(686,13f, 78,306f, 1370,525f);
			*(&Param0 + 36) = Vector(686,271f, 78,306f, 1361,19f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(679,044f, 78,306f, 1346,869f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(678,93f, 79,291f, 1340,874f);
			(*&Param0 + 168)[1] = 4352;
			*(&Param0 + 64[22]) = Vector(692,642f, 78,485f, 1345,834f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(693,52f, 78,485f, 1347,342f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 10)
		{
			*(&Param0 + 24) = Vector(732,158f, 78,314f, 1399,543f);
			*(&Param0 + 36) = Vector(741,11f, 78,306f, 1397,618f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(750,645f, 78,611f, 1386,18f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(751,968f, 78,606f, 1385,991f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(756,953f, 78,306f, 1385,658f);
			(*&Param0 + 168)[2] = 512;
			*(&Param0 + 64[32]) = Vector(751,965f, 80,39f, 1404,842f);
			(*&Param0 + 168)[3] = 256;
			return 1;
		}
		if (iParam1 == 11)
		{
			*(&Param0 + 24) = Vector(750,062f, 78,314f, 1395,693f);
			*(&Param0 + 36) = Vector(741,11f, 78,306f, 1397,618f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 175.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(734,462f, 79,769f, 1408,614f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(731,99f, 79,78f, 1408,546f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(727,562f, 78,811f, 1408,402f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(723,946f, 78,804f, 1407,98f);
			(*&Param0 + 168)[3] = 256;
			return 1;
		}
	}
	return 0;
}

int Function_250(struct<61> Param0) //Position: 0x11D62 / 73058
{
	if (iLocal_4 != 0)
	{
		Param0.f_56 = 1;
		Param0.f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967295)
	{
		Param0.f_56 = 1;
		Param0.f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967292)
	{
		Param0.f_48 = 10.0f;
		Param0.f_52 = 30.0f;
		Param0.f_56 = 1;
		Param0.f_60 = 4;
		*(&Param0 + 64[02]) = Vector(111,425f, 73,767f, 2280,372f);
		(*&Param0 + 168)[0] = 5120;
		*(&Param0 + 64[12]) = Vector(112,086f, 73,639f, 2278,207f);
		(*&Param0 + 168)[1] = 12800;
		*(&Param0 + 64[22]) = Vector(113,136f, 73,646f, 2273,555f);
		(*&Param0 + 168)[2] = 1024;
		*(&Param0 + 64[32]) = Vector(113,364f, 73,645f, 2272,118f);
		(*&Param0 + 168)[3] = 16896;
		return 1;
	}
	if (iParam1 == 4294967294)
	{
		if (Global_43789 == Global_46816[0])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(-806,792f, 92,727f, 2373,401f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-807,277f, 92,736f, 2375,261f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-809,876f, 92,834f, 2381,274f);
			(*&Param0 + 168)[2] = 35072;
			*(&Param0 + 64[32]) = Vector(-823,197f, 92,307f, 2378,322f);
			(*&Param0 + 168)[3] = 1024;
			*(&Param0 + 64[42]) = Vector(-823,026f, 92,375f, 2376,612f);
			(*&Param0 + 168)[4] = 35072;
			*(&Param0 + 64[52]) = Vector(-822,463f, 92,431f, 2375,01f);
			(*&Param0 + 168)[5] = 20992;
			return 1;
		}
		if (Global_43789 == Global_46760[0])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(-2160,207f, 16,882f, 2605,83f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2158,595f, 16,881f, 2605,596f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2159,184f, 16,894f, 2605,341f);
			(*&Param0 + 168)[2] = 35072;
			*(&Param0 + 64[32]) = Vector(-2155,752f, 16,449f, 2618,374f);
			(*&Param0 + 168)[3] = 35072;
			*(&Param0 + 64[42]) = Vector(-2153,08f, 16,371f, 2616,611f);
			(*&Param0 + 168)[4] = 17408;
			*(&Param0 + 64[52]) = Vector(-2154,778f, 16,401f, 2617,199f);
			(*&Param0 + 168)[5] = 4608;
			return 1;
		}
		if (Global_43789 == Global_46816[1])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(155,69f, 73,755f, 2200,008f);
			(*&Param0 + 168)[0] = 39168;
			*(&Param0 + 64[12]) = Vector(158,627f, 73,755f, 2198,852f);
			(*&Param0 + 168)[1] = 13312;
			*(&Param0 + 64[22]) = Vector(160,233f, 73,755f, 2197,97f);
			(*&Param0 + 168)[2] = 4608;
			*(&Param0 + 64[32]) = Vector(172,272f, 73,286f, 2210,202f);
			(*&Param0 + 168)[3] = 35072;
			*(&Param0 + 64[42]) = Vector(169,259f, 73,286f, 2213,359f);
			(*&Param0 + 168)[4] = 21504;
			*(&Param0 + 64[52]) = Vector(168,629f, 73,286f, 2214,713f);
			(*&Param0 + 168)[5] = 4608;
			return 1;
		}
		if (Global_43789 == Global_46894[2])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(-809,175f, 16,665f, 3709,376f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-807,866f, 16,665f, 3708,143f);
			(*&Param0 + 168)[1] = 20992;
			*(&Param0 + 64[22]) = Vector(-806,33f, 16,665f, 3706,44f);
			(*&Param0 + 168)[2] = 20992;
			*(&Param0 + 64[32]) = Vector(-800,715f, 16,665f, 3700,73f);
			(*&Param0 + 168)[3] = 4352;
			*(&Param0 + 64[42]) = Vector(-785,693f, 13,051f, 3713,464f);
			(*&Param0 + 168)[4] = 35072;
			*(&Param0 + 64[52]) = Vector(-785,114f, 13,051f, 3716,611f);
			(*&Param0 + 168)[5] = 35072;
			return 1;
		}
		if (Global_43789 == Global_46914[1])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(-143,332f, 119,009f, 1353,172f);
			*(&Param0 + 64[12]) = Vector(-144,653f, 120,644f, 1357,015f);
			*(&Param0 + 64[22]) = Vector(-144,869f, 119,855f, 1359,631f);
			*(&Param0 + 64[32]) = Vector(-129,628f, 118,869f, 1352,225f);
			*(&Param0 + 64[42]) = Vector(-128,989f, 118,869f, 1358,801f);
			*(&Param0 + 64[52]) = Vector(-129,897f, 118,869f, 1361,462f);
			return 1;
		}
		if (Global_43789 == Global_46914[0])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 100.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(853,294f, 77,517f, 1279,476f);
			*(&Param0 + 64[12]) = Vector(852,864f, 77,517f, 1282,613f);
			*(&Param0 + 64[22]) = Vector(853,532f, 77,517f, 1283,355f);
			*(&Param0 + 64[32]) = Vector(859,177f, 77,517f, 1267,618f);
			*(&Param0 + 64[42]) = Vector(861,636f, 77,517f, 1278,204f);
			*(&Param0 + 64[52]) = Vector(861,581f, 77,517f, 1279,349f);
			return 1;
		}
		if (Global_43789 == Global_46866[0])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 50.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(-2689,855f, 31,151f, 4274,476f);
			(*&Param0 + 168)[0] = 35072;
			*(&Param0 + 64[12]) = Vector(-2689,877f, 31,151f, 4278,589f);
			(*&Param0 + 168)[1] = 13312;
			*(&Param0 + 64[22]) = Vector(-2690,326f, 31,152f, 4279,999f);
			(*&Param0 + 168)[2] = 512;
			*(&Param0 + 64[32]) = Vector(-2703,691f, 31,151f, 4280,464f);
			(*&Param0 + 168)[3] = 35072;
			*(&Param0 + 64[42]) = Vector(-2704,23f, 31,155f, 4278,981f);
			(*&Param0 + 168)[4] = 21504;
			*(&Param0 + 64[52]) = Vector(-2703,474f, 31,146f, 4271,279f);
			(*&Param0 + 168)[5] = 4608;
			return 1;
		}
	}
	if (iParam1 == 4294967293)
	{
		if (Global_43789 == Global_46796[4])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-3679,563f, 8,483f, 3479,026f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(-3675,23f, 8,26f, 3484,906f);
			(*&Param0 + 168)[1] = 1024;
			*(&Param0 + 64[22]) = Vector(-3673,747f, 8,256f, 3481,049f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(-3675,517f, 8,201f, 3492,157f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
	}
	Param0.f_48 = 10.0f;
	Param0.f_52 = 30.0f;
	Param0.f_56 = 1;
	Param0.f_60 = 0;
	return 1;
}

void Function_251(var uParam0) //Position: 0x12604 / 75268
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
		}
	}
	return;
}

struct<8> Function_252(int iParam0) //Position: 0x12653 / 75347
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_253(int iParam0) //Position: 0x1267C / 75388
{
	bool bVar0;
	void fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		fVar1 = GET_WEAPON_EQUIPPED(&iParam0, true);
		if (Function_207(fVar1))
		{
			fVar2 = ACTOR_GET_WEAPON_AMMO(&iParam0, fVar1);
			fVar3 = (GET_WEAPON_MAX_AMMO(fVar1) - fVar2);
			fVar4 = _GET_AMMO_AMOUNT(&iParam0, GET_AMMO_ENUM(fVar1), 0);
			if (fVar3 < fVar4)
			{
				bVar0 = (_GET_AMMO_AMOUNT(&iParam0, GET_AMMO_ENUM(fVar1), 0) + GET_WEAPON_MAX_AMMO(fVar1));
				if (bVar0 <= 0.0f)
				{
					_SET_ACTOR_AMMO_OF_TYPE(&iParam0, GET_AMMO_ENUM(fVar1), bVar0, 0);
				}
			}
			ACTOR_ADD_WEAPON_AMMO(&iParam0, fVar1, fVar3);
			bVar0 = (_GET_AMMO_AMOUNT(&iParam0, GET_AMMO_ENUM(fVar1), 0) - fVar3);
			if (bVar0 <= 0.0f)
			{
				_SET_ACTOR_AMMO_OF_TYPE(&iParam0, GET_AMMO_ENUM(fVar1), bVar0, 0);
			}
		}
	}
	return;
}

bool Function_254(bool bParam0, int iParam1, int iParam2) //Position: 0x12725 / 75557
{
	int iVar0;
	
	iVar0 = Function_222(bParam0, iParam1, iParam2);
	return Function_75(iVar0);
}

void Function_255(int iParam0) //Position: 0x1273B / 75579
{
	Function_256(&Global_43580, iParam0);
	return;
}

void Function_256(var uParam0, int iParam1) //Position: 0x12749 / 75593
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

bool Function_257(int iParam0) //Position: 0x12771 / 75633
{
	return Function_258(&Global_43580, iParam0);
}

int Function_258(var uParam0, int iParam1) //Position: 0x1277F / 75647
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_259(bool bParam0, bool bParam1, int iParam2) //Position: 0x1279C / 75676
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	
	if (!IS_VOLUME_VALID(&bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&bParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_295(), &bParam1, 15, 1);
	LOCATE_ACTORS_IN_VOLUME(&bParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		iVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&iVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&iVar2);
			if (((!ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3) && IS_ACTOR_VEHICLE(&iVar3)) && &iVar3 == &iParam2) && !Function_260(&iVar3))
			{
				bVar4 = false;
				while (bVar4 <= GET_NUM_DRAFTED_ACTORS(&iVar3))
				{
					uVar5 = GET_DRAFT_ACTOR(bVar4, &iVar3);
					if (IS_ACTOR_VALID(&uVar5))
					{
						DESTROY_ACTOR(&uVar5);
					}
					bVar4++;
				}
				bVar4 = false;
				while (bVar4 <= (GET_NUM_AVAILABLE_SEATS(&iVar3) + GET_NUM_OCCUPIED_SEATS(&iVar3)))
				{
					if (IS_SEAT_OCCUPIED(&iVar3, bVar4))
					{
						uVar6 = GET_ACTOR_IN_VEHICLE_SEAT(&iVar3, bVar4);
						if (IS_ACTOR_VALID(&uVar6))
						{
							DESTROY_ACTOR(&uVar6);
						}
					}
					bVar4++;
				}
				DESTROY_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_260(int iParam0) //Position: 0x128A8 / 75944
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	return (bVar0 <= 1155 && bVar0 >= 1176);
}

void Function_261(var uParam0) //Position: 0x128CF / 75983
{
	var uVar0;
	int iVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_VOLUME(&uVar0, &uParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (GET_OBJECT_TYPE(&iVar1) == 29)
		{
			DESTROY_OBJECT(&iVar1);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

float Function_262(vector3 vParam0) //Position: 0x1291C / 76060
{
	if (Function_237(&vParam0))
	{
		if (Function_263(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_263(int iParam0) //Position: 0x129E9 / 76265
{
	return Function_56(iParam0, 2);
}

int Function_264(int iParam0) //Position: 0x129F7 / 76279
{
	bool bVar0;
	char* cVar1[32];
	bool bVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	struct<9> Var13;
	
	if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam0 + 40))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam0 + 40);
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&iParam0 + 40, 0);
	}
	if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam0 + 40))
	{
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam0 + 40);
	}
	if (!IS_OBJECTSET_VALID(&uLocal_185))
	{
		uLocal_185 = CREATE_OBJECTSET_IN_LAYOUT(Function_295(), &iLocal_201, 15, 1);
	}
	else
	{
		Function_265(&uLocal_185);
	}
	if (!IS_ACTORSET_VALID(&uLocal_187))
	{
		uLocal_187 = CREATE_ACTORSET_IN_LAYOUT(&iLocal_201, "DuelFleedActors", 0);
	}
	bVar0 = LOCATE_ACTORS_IN_VOLUME(&iParam0 + 40, &uLocal_185, 0, 1);
	strcpy(&cVar1, "************** ", 32);
	stradd(&cVar1, INT_TO_STRING(bVar0), 32);
	bVar9 = false;
	while (bVar9 <= bVar0)
	{
		iVar11 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar9, &uLocal_185));
		if ((((&iVar11 == &iParam0 + 8 && &iVar11 == &iParam0 + 56) && &iVar11 == &iParam0) && !DECOR_CHECK_EXIST(&iVar11, "ignoreactorinduel")) && !DECOR_CHECK_EXIST(&iVar11, "DuelIsCrowdActor"))
		{
			bVar10 = true;
			bVar12 = false;
			if (IS_ACTOR_HORSE(&iVar11))
			{
				if (!IS_ACTOR_MOUNTED(&iVar11))
				{
					DESTROY_ACTOR(&iVar11);
					bVar12 = true;
				}
				else
				{
					SET_ALLOW_RIDE_BY_PLAYER(&iVar11, 0);
				}
			}
			if (!bVar12 && !Function_260(&iVar11))
			{
				if (!GET_TASK_STATUS(&iVar11, 25) != 1)
				{
					AI_SET_NAV_ACTOR_WIDTH(&iVar11, 0,5f);
					TASK_CLEAR(&iVar11);
					vVar13 = Vector(0.0f, 0.0f, 0.0f);
					GET_VOLUME_SCALE(&iParam0 + 40, &vVar13);
					fVar15 = vVar13.z;
					if (fVar15 < 40.0f)
					{
						fVar15 = -1.0f;
					}
					TASK_FLEE_ACTOR(&iVar11, &iParam0, fVar15, -1.0f, 0, 0, 0);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iVar11, &iParam0 + 40, 4, 1);
					if (!IS_ACTOR_IN_ACTORSET(&uLocal_187, &iVar11))
					{
						ADD_ACTORSET_MEMBER(&uLocal_187, &iVar11);
					}
				}
			}
		}
		bVar9++;
	}
	if (bVar10)
	{
		return 0;
	}
	return 1;
}

void Function_265(var uParam0) //Position: 0x12BE2 / 76770
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
	}
	return;
}

void Function_266(int iParam0) //Position: 0x12C22 / 76834
{
	if (!Function_237(&iParam0))
	{
		Function_236(&iParam0, 0.0f);
	}
	return;
}

void Function_267(struct<85> Param0) //Position: 0x12C39 / 76857
{
	struct<61> Var0;
	
	*(&Var0 + 64) = 6;
	*(&Var0 + 168) = 6;
	if (Param0.f_84 <= 0)
	{
		if (Function_249(&Var0, Param0.f_84))
		{
			if (Var0.f_56 == 1)
			{
				iVar29 = 0;
				iVar28 = 0;
				while (iVar28 <= Var0.f_60)
				{
					uVar30 = (*&Var0 + 168)[iVar28];
					if (uVar30 & 32768 == 0)
					{
						uLocal_208[iVar29] = Function_268(&(Global_46972[0]), 1, 0, 1);
						Function_329(&iLocal_103, uLocal_208[iVar29], 3, 0);
						iVar29++;
					}
					iVar28++;
				}
			}
		}
	}
	return;
}

var Function_268(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x12CC3 / 76995
{
	return Function_269(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_269(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x12CDA / 77018
{
	return Function_270(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_270(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x12CF8 / 77048
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_276();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_275(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_274(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_274(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_273(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_275(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_273(bVar0))
				{
					Function_272();
				}
				Function_271(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_275(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_271(int iParam0) //Position: 0x12FF1 / 77809
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_272() //Position: 0x130A5 / 77989
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_273(bool bParam0) //Position: 0x130E0 / 78048
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_274(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x1310D / 78093
{
	bool bVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

bool Function_275(bool bParam0) //Position: 0x13268 / 78440
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_276() //Position: 0x1327F / 78463
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_272();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_272();
	return;
}

void Function_277(var uParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x132CB / 78539
{
	Function_327(&iLocal_103, "duel_player", 5, 0);
	Function_327(&iLocal_103, "Dueling/duel_player", 8, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			Function_329(&iLocal_103, 59, 2, 0);
		}
		Function_327(&iLocal_103, "duel_hostage", 5, 0);
		Function_327(&iLocal_103, "Dueling/duel_hostage", 8, 0);
		bLocal_193 = "duel_hostage";
	}
	else
	{
		if ((Function_254(GET_ACTOR_ENUM(&uParam3), 6, 4) && uParam0 != 0) && !Global_6623)
		{
			if (Function_168(Function_222(GET_ACTOR_ENUM(&uParam3), 6, 4)) > 10)
			{
				uParam0 = 2;
			}
			else if (Function_168(Function_222(GET_ACTOR_ENUM(&uParam3), 6, 4)) > 5)
			{
				uParam0 = 1;
			}
		}
		switch (uParam0)
		{
			case 0x00000003:
				bLocal_193 = "duel_player";
				break;
			
			case 0x00000000:
				switch (bLocal_203)
				{
					case 0x00000000:
						Function_327(&iLocal_103, "duel_easy_A_npc", 5, 0);
						Function_327(&iLocal_103, "Dueling/duel_Easy_A_npc", 8, 0);
						bLocal_193 = "duel_Easy_A_npc";
						break;
					
					case 0x00000001:
						Function_327(&iLocal_103, "duel_easy_B_npc", 5, 0);
						Function_327(&iLocal_103, "Dueling/duel_Easy_B_npc", 8, 0);
						bLocal_193 = "duel_Easy_B_npc";
						break;
				}
				break;
			
			case 0x00000001:
				switch (bLocal_203)
				{
					case 0x00000000:
						Function_327(&iLocal_103, "duel_mid_A_npc", 5, 0);
						Function_327(&iLocal_103, "Dueling/duel_Mid_A_npc", 8, 0);
						bLocal_193 = "duel_Mid_A_npc";
						break;
					
					case 0x00000001:
						Function_327(&iLocal_103, "duel_mid_B_npc", 5, 0);
						Function_327(&iLocal_103, "Dueling/duel_Mid_B_npc", 8, 0);
						bLocal_193 = "duel_Mid_B_npc";
						break;
					
					case 0x00000002:
						Function_327(&iLocal_103, "duel_mid_C_npc", 5, 0);
						Function_327(&iLocal_103, "Dueling/duel_Mid_C_npc", 8, 0);
						bLocal_193 = "duel_Mid_C_npc";
						break;
				}
				break;
			
			case 0x00000002:
				switch (bLocal_203)
				{
					case 0x00000000:
						Function_327(&iLocal_103, "duel_hard_A_npc", 5, 0);
						Function_327(&iLocal_103, "Dueling/duel_Hard_A_npc", 8, 0);
						bLocal_193 = "duel_Hard_A_npc";
						break;
					
					case 0x00000001:
						Function_327(&iLocal_103, "duel_hard_B_npc", 5, 0);
						Function_327(&iLocal_103, "Dueling/duel_Hard_B_npc", 8, 0);
						bLocal_193 = "duel_Hard_B_npc";
						break;
					
					case 0x00000002:
						Function_327(&iLocal_103, "duel_hard_C_npc", 5, 0);
						Function_327(&iLocal_103, "Dueling/duel_Hard_C_npc", 8, 0);
						bLocal_193 = "duel_Hard_C_npc";
						break;
				}
				break;
			}
	}
	bLocal_195 = &bLocal_193;
	Function_327(&iLocal_103, "nminigames", 10, 0);
	Function_327(&iLocal_103, "crowd_duel", 5, 0);
	Function_327(&iLocal_103, "custom/crowd_duel_center", 8, 0);
	Function_327(&iLocal_103, "custom/crowd_duel_left", 8, 0);
	Function_327(&iLocal_103, "custom/crowd_duel_right", 8, 0);
}

void Function_278(int iParam0) //Position: 0x1376F / 79727
{
	if (!bLocal_205)
	{
		Function_135(&iParam0);
	}
	if (!iLocal_206)
	{
		Function_279(&iParam0);
	}
	return;
}

void Function_279(struct<125> Param0) //Position: 0x1378D / 79757
{
	if (DECOR_CHECK_EXIST(&Param0, "bIsDuelActive"))
	{
		DECOR_REMOVE(&Param0, "bIsDuelActive");
	}
	if (DECOR_CHECK_EXIST(&Param0, "bIsDuelOver"))
	{
		DECOR_REMOVE(&Param0, "bIsDuelOver");
	}
	if (DECOR_CHECK_EXIST(&Param0, "bDrewFirst"))
	{
		DECOR_REMOVE(&Param0, "bDrewFirst");
	}
	Function_280(&Param0);
	if (IS_LAYOUTREF_VALID(&iLocal_201))
	{
		DESTROY_LAYOUT(&iLocal_201);
	}
	REMOVE_EVENT_RESPONSE(38, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(39, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(40, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(41, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(37, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(44, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(43, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(42, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(46, 15, "PLAYER");
	Global_6610 = 0;
	Function_3(&iLocal_103);
	iLocal_206 = 1;
	Global_6625 = 0;
	if (Param0.f_124)
	{
	}
	return;
}

int Function_280(int iParam0) //Position: 0x138DD / 80093
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	iVar0 = GET_OBJECTSET_SIZE(&uLocal_189);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_189));
		if (DECOR_CHECK_EXIST(&uVar2, "DuelIsCrowdActor"))
		{
			bVar3 = DECOR_GET_INT(&uVar2, "DuelIsCrowdActor");
			if (DECOR_CHECK_EXIST(&uVar2, "DuelCrowdActorReactionTimer"))
			{
				DECOR_REMOVE(&uVar2, "DuelCrowdActorReactionTimer");
			}
			if ((bVar3 && 1) != 0)
			{
			}
			else if ((bVar3 && 2) != 0)
			{
				DECOR_REMOVE(&uVar2, "DuelIsCrowdActor");
			}
			else if (iLocal_207 == 2)
			{
				DECOR_REMOVE(&uVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(&uVar2, 1);
				TASK_CLEAR(&uVar2);
				if ((bVar3 && 4) != 0)
				{
					Function_292(GET_PERS_CHAR_FROM_ACTOR(&uVar2));
				}
			}
			else if (iLocal_207 == 1)
			{
				DECOR_REMOVE(&uVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(&uVar2, 1);
				TASK_CLEAR(&uVar2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar2, true);
				Function_283(&uVar2, 1, 0, 2);
			}
			else if (iLocal_207 == 0)
			{
				DECOR_REMOVE(&uVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(&uVar2, 1);
				if ((bVar3 && 64) != 0)
				{
					Function_281(&uVar2, bVar3, &iParam0 + 16);
				}
				else
				{
					TASK_CLEAR(&uVar2);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar2, true);
					Function_283(&uVar2, 1, 0, 2);
				}
			}
		}
		bVar1++;
	}
	if (IS_OBJECTSET_VALID(&uLocal_189))
	{
		DESTROY_OBJECTSET(&uLocal_189);
	}
	return 1;
}

void Function_281(var uParam0, var uParam1, int iParam2) //Position: 0x13AAC / 80556
{
	bool bVar0;
	var uVar1;
	var uVar3;
	
	uParam1 = uParam1;
	TASK_CLEAR(&uParam0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1,5f), 1, 0);
	uVar1 = Vector(0.0f, 0.0f, 0.0f);
	Function_12(&uParam0);
	uVar3 = Function_12(&uParam0);
	Function_282(&iParam2, &uVar3, &uVar1);
	TASK_GO_NEAR_COORD(false, &uVar1, 5.0f, 1);
	TASK_WANDER(false, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_PRIORITY_SET(&uParam0, 2);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	return;
}

void Function_282(vector3 vParam0) //Position: 0x13B16 / 80662
{
	vParam2 = vParam1;
	vParam2 = (vParam2 + ((vParam1 - vParam0) * 3.0f));
	vParam2.f_8 = (vParam2.z + ((vParam1.z - vParam0.z) * 3.0f));
	vParam2 = (vParam2 + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	vParam2.f_8 = (vParam2.z + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	return;
}

int Function_283(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x13B77 / 80759
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
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
					Function_284(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_284(&uParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_284(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x13C65 / 80997
{
	char* cVar0[32];
	
	Function_291();
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
	if (Function_290(&uParam0) == 1)
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
	Function_289(&uParam0, 0);
	Function_288(&uParam0, iParam1);
	Function_287(&uParam0, &uParam2);
	Function_286(&uParam0, uParam3);
	if (Function_285(&uParam0) != 5)
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

int Function_285(int iParam0) //Position: 0x13ED1 / 81617
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_286(var uParam0, bool bParam1) //Position: 0x13EF5 / 81653
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_287(var uParam0, int iParam1) //Position: 0x13F19 / 81689
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_288(var uParam0, bool bParam1) //Position: 0x13F3F / 81727
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_289(var uParam0, bool bParam1) //Position: 0x13F66 / 81766
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_290(bool bParam0) //Position: 0x13F8A / 81802
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_291() //Position: 0x13FA9 / 81833
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

int Function_292(bool bParam0) //Position: 0x13FF8 / 81912
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&bParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_293(struct<125> Param0) //Position: 0x140A2 / 82082
{
	struct<2> Var0;
	
	Param0 = &Global_54076;
	*(&Param0 + 8) = &uParam1;
	*(&Param0 + 16) = Param2;
	*(&Param0 + 28) = Param4;
	Param0.f_68 = uParam6;
	Param0.f_64 = &uParam11;
	Param0.f_80 = vParam7.x;
	Param0.f_120 = &fParam10;
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 28), *(&Param0 + 16), StackVal);
	VSCALE(&Var0, 0,5f);
	*(&Param0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam8, "Duel_StayOut", 2, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	Param0.f_84 = 4294967293;
	Param0.f_124 = &uParam9;
}

void Function_294() //Position: 0x1414D / 82253
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

var Function_295() //Position: 0x14162 / 82274
{
	int iVar0;
	
	return &iVar0;
}

bool Function_296(int iParam0, bool bParam1, bool bParam2) //Position: 0x1416B / 82283
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
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
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_299(&iParam0))
	{
		return 1;
	}
	if (Function_298(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_297())
	{
		return 1;
	}
	return 0;
}

bool Function_297() //Position: 0x1422F / 82479
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_298(int iParam0) //Position: 0x14246 / 82502
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_299(bool bParam0) //Position: 0x14252 / 82514
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&bParam0));
}

int Function_300(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x14261 / 82529
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (&iParam0 == &iParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(&iParam1) == &iParam0)
		{
			CLEAR_LAST_HIT(&iParam1);
			return 1;
		}
	}
	if (&bParam3)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
		{
			return 1;
		}
	}
	if (&bParam4)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_301() //Position: 0x14367 / 82791
{
	var uVar0;
	
	Function_302(4, 1);
	uVar0 = &uVar0;
	iLocal_443 = CREATE_LAYOUT("Wronged_layout");
	return;
}

void Function_302(int iParam0, int iParam1) //Position: 0x14390 / 82832
{
	switch (&iParam1)
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

void Function_303(int iParam0) //Position: 0x143DA / 82906
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&iParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&iParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&iParam0);
	}
	return;
}

void Function_304(int iParam0) //Position: 0x14470 / 83056
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", true);
	}
	return;
}

void Function_305(var uParam0, bool bParam1) //Position: 0x144A7 / 83111
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

bool Function_306() //Position: 0x144C9 / 83145
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_307(struct<2>[] Param0) //Position: 0x144F4 / 83188
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_311();
	iVar1 = 0;
	if (!Function_6(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_310(&(Param0[iVar02]), 8);
		}
		else if (Function_309())
		{
			iVar1 = 1;
			Function_310(&(Param0[iVar02]), 8);
		}
		Function_310(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_6(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_6(&(Param0[02]), 8) || iVar1));
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
				Function_310(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_310(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_310(&(Param0[iVar02]), 2);
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
							Function_310(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_310(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_310(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_310(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_310(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_310(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_310(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_310(&(Param0[iVar02]), 2);
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
	Function_308();
	return 1;
}

void Function_308() //Position: 0x148B6 / 84150
{
	if (!Function_84(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_309() //Position: 0x148F6 / 84214
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

void Function_310(struct<13> Param0) //Position: 0x14924 / 84260
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_311() //Position: 0x14937 / 84279
{
	if (!Function_84(128))
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

void Function_312(struct<229> Param0) //Position: 0x14979 / 84345
{
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if (((!&bParam2 || Function_87(iParam1)) || Function_86(iParam1)) || iParam1 != &Param0 + 36)
		{
			REMOVE_BLIP(&Param0 + 272);
			REMOVE_BLIP(&Param0 + 280);
		}
	}
	else if (&bParam2)
	{
		if (Function_56(Global_99725[iParam143].f_228, 64) && iParam1 == &Param0 + 36)
		{
			Function_70(&Param0, iParam1);
		}
		if (!(Function_87(iParam1) || Function_86(iParam1)))
		{
			DEACTIVATE_JOURNAL_ENTRY(Param0.f_224, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Param0.f_224, -1.0f, true, 0);
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		DESTROY_OBJECT(&Param0 + 288);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
	}
	if (IS_GRINGO_VALID(&Param0 + 320))
	{
		if (!Function_56(Param0.f_228, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 320));
		}
		else
		{
			(&Param0 + 320) = "";
		}
		Function_314(&Param0 + 228, 32);
	}
	if (IS_OBJECT_VALID(&Param0 + 328))
	{
		RELEASE_OBJECT_REF(&Param0 + 328);
	}
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		DESTROY_VOLUME(&Param0 + 336);
	}
	if (&bParam4)
	{
		Function_313(&Param0);
	}
	Function_314(&Param0 + 228, 256);
	switch (Global_116927[iParam16])
	{
		case 0x00000002:
		case 0x00000005:
		case 0x00000003:
			Global_116927[iParam16] = 1;
			break;
		
		default:
			break;
	}
	if (IS_SCRIPT_VALID(&Param0 + 296) && iParam3)
	{
		TERMINATE_SCRIPT(&Param0 + 296);
	}
	switch (Param0)
	{
		case 0x00000001:
			if (IS_ACTOR_VALID(&Param0 + 312))
			{
				AI_CLEAR_DONT_HARM_ACTOR(&Param0 + 312);
				AI_CONVERSE_ENABLE(&Param0 + 312);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&Param0 + 312, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 312, 1);
				if (SQUAD_IS_VALID(SQUAD_GET(&Param0 + 312)))
				{
					DESTROY_OBJECT(SQUAD_GET(&Param0 + 312));
				}
				RELEASE_ACTOR(&Param0 + 312);
			}
			break;
		
		default:
			break;
	}
}

void Function_313(struct<229> Param0) //Position: 0x14B7C / 84860
{
	if (Function_56(Param0.f_228, 1))
	{
		STREAMING_EVICT_ACTOR(Param0.f_220, 4294967295);
		Function_314(&Param0 + 228, 1);
	}
	if (Function_56(Param0.f_228, 8))
	{
		REMOVE_STRING_TABLE("RandomCharMissions");
		Function_314(&Param0 + 228, 8);
	}
	if (Function_56(Param0.f_228, 2))
	{
		STREAMING_EVICT_GRINGO(&Param0 + 120);
		Function_314(&Param0 + 228, 2);
	}
	if (Function_56(Param0.f_228, 4))
	{
		STREAMING_EVICT_PROP(&Param0 + 128);
		Function_314(&Param0 + 228, 4);
	}
	return;
}

void Function_314(int iParam0, int iParam1) //Position: 0x14C0B / 85003
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_315(struct<265> Param0) //Position: 0x14C21 / 85025
{
	if (!Param0.f_260 != 0)
	{
		if (Function_81(&Param0 + 260, 4))
		{
			if (!Function_80(iParam1))
			{
				return 0;
			}
		}
		if (Function_81(&Param0 + 260, 1))
		{
			if (&Global_99725[Param0.f_25643] + 36 != &Global_99725[iParam143] + 36 || iParam3)
			{
				if (!Function_87(Param0.f_256))
				{
					return 0;
				}
			}
		}
		if (Function_81(&Param0 + 260, 2) && Global_6606)
		{
			if (!Function_91(Param0.f_264, 0))
			{
				return 0;
			}
		}
		if (Function_81(&Param0 + 260, 8) && Global_6606)
		{
			if (!Function_317(Param0.f_252, 0))
			{
				return 0;
			}
		}
		if (!&bParam2)
		{
			return 1;
		}
		return Function_316(&Param0);
	}
	return 1;
}

int Function_316(struct<261> Param0) //Position: 0x14CED / 85229
{
	if (!Param0.f_260 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_81(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_81(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_81(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_81(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_81(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_81(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_317(int iParam0, bool bParam1) //Position: 0x14DA8 / 85416
{
	if (!Function_75(iParam0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

void Function_318(var uParam0, int iParam1) //Position: 0x14DDF / 85471
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_319(struct<229> Param0) //Position: 0x14DF0 / 85488
{
	var uVar0;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	AI_DONT_HARM_ACTOR(&Param0 + 312);
	AI_CONVERSE_DISABLE(&Param0 + 312);
	AI_IGNORE_ACTOR(&Param0 + 312);
	SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 312, false);
	SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&Param0 + 312, 0);
	DECOR_SET_BOOL(&Param0 + 312, "CannotPush", true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 312, 0);
	Function_326(&Param0 + 312);
	uVar0 = Function_326(&Param0 + 312);
	bVar2 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(&Param0 + 312), &uVar0, 3212836864);
	uVar3 = Function_9(StackVal, *(&Param0 + 184), 0x3f800000, 0x42960000, 1, 1, 0);
	if (!UNK_0x214AFB8C(&Param0 + 120))
	{
		if (!Function_56(Param0.f_228, 16384))
		{
			if (!(bVar2 || uVar3))
			{
				TELEPORT_ACTOR(&Param0 + 312, &Param0 + 184, 1, 1, 1);
			}
		}
		Function_325(&Param0);
	}
	else if (!IS_GRINGO_VALID(&Param0 + 320))
	{
		if (!Function_56(Param0.f_228, 16384))
		{
			if (!(bVar2 || uVar3))
			{
				TELEPORT_ACTOR(&Param0 + 312, &Param0 + 184, 1, 1, 1);
			}
		}
		TASK_PRIORITY_SET(&Param0 + 312, 2);
		if (((iParam1 == 1 && iParam1 == 2) && iParam1 == 70) && iParam1 == 27)
		{
			TASK_STAND_STILL(&Param0 + 312, -1.0f, 0, 0);
		}
	}
	else
	{
		Function_324(&Param0, &iParam2);
	}
	uVar4 = GET_OBJECT_OWNER(&Param0 + 312);
	if (GET_OBJECT_TYPE(&uVar4) == 1)
	{
		if (GET_LAYOUT_FROM_OBJECT(&uVar4) == GET_GC_LAYOUT())
		{
			GIVE_OBJECT_TO_LAYOUT(&Param0 + 312, &Global_99717);
		}
	}
	MEMORY_ATTACK_ON_SIGHT(&Param0 + 312, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Param0 + 312, 4, 10.0f);
	if (!SQUAD_IS_VALID(SQUAD_GET(&Param0 + 312)))
	{
		SQUAD_JOIN(&Param0 + 312, GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_99717, Function_295())));
		SQUAD_GOAL_ADD_RESTRICT_INVESTIGATION_DISTANCE_FROM_SQUAD(SQUAD_GET(&Param0 + 312), 0, 10.0f);
	}
	HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(&Param0 + 312, true);
	HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&Param0 + 312, 322);
	if (Param0.f_220 == 349)
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Param0 + 312, false);
	}
	else
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Param0 + 312, true);
	}
	if (Param0.f_220 == 332)
	{
		SET_ACTOR_MAX_SPEED(&Param0 + 312, 2);
	}
	if (Param0.f_220 == 358)
	{
		SET_ACTOR_FACTION(&Param0 + 312, 20);
		SET_ACTOR_IS_COMPANION(&Param0 + 312, 1);
		SET_ALLOW_EXECUTE(&Param0 + 312, 0);
		SET_ACTOR_INVULNERABILITY(&Param0 + 312, true);
	}
	if (iParam1 == 8)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_CALL_OVER", "RCM_CALL_OVER_PRE3");
	}
	if (iParam1 == 9)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_CALL_OVER", "RCM_CALL_OVER_PRE4");
	}
	if (iParam1 == 52)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_CALL_OVER", "RCM_CALL_OVER_PREDEED");
	}
	if (iParam1 == 53)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_CALL_OVER", "RCM_CALL_OVER_PRE3");
	}
	if (iParam1 == 25)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_STILL_HERE", "RCM_STILL_HERE_RCM2");
	}
	if (iParam1 == 55)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_STILL_HERE", "RCM_STILL_HERE_RCM14");
	}
	if (iParam1 == 46)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_CALL_OVER", "KILLERPIMP_WAITINGFORPAY");
	}
	if (iParam1 == 48)
	{
		AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	}
	if ((Param0.f_220 != 340 || Param0.f_220 != 341) || Param0.f_220 != 342)
	{
		SET_AMBIENT_VOICE_NAME(&Param0 + 312, "RCM_SAM");
	}
	if (Param0.f_220 == 633)
	{
		SET_AMBIENT_VOICE_NAME(&Param0 + 312, "MISC_Jenny");
	}
	if (Param0.f_220 == 368)
	{
		SET_AMBIENT_VOICE_NAME(&Param0 + 312, "COMPANION_FBI");
	}
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(&Param0 + 312, 0);
	uVar5 = Function_322(&Param0);
	SET_RCM_WAS_JOHN_NOW_JACK(&Param0 + 312, uVar5);
	Function_321(iParam1, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11);
	iVar12 = Function_320(iParam1);
	switch (iVar12)
	{
		case 0x00000001:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 1, 0, true, iVar6, iVar7, iVar8, iVar9, iVar10, iVar11);
			break;
		
		case 0x00000000:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 1, 0, false, iVar6, iVar7, iVar8, iVar9, iVar10, iVar11);
			break;
		
		case 0x00000002:
		case 0xFFFFFFFF:
		default:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
			break;
	}
	if (iParam1 == 2)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 1, 1, false, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (iParam1 == 70)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 1, 1, false, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (iParam1 == 27)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (iParam1 == 55)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	AI_GOAL_LOOK_AT_PLAYER_WHEN_WITHIN(&Param0 + 312, 15.0f);
	MEMORY_CLEAR_EVENTS(&Param0 + 312, 1);
	return;
}

int Function_320(int iParam0) //Position: 0x153AE / 86958
{
	if (Function_108())
	{
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 1;
			
			case 0x00000001:
				return 1;
			
			case 0x00000002:
				return 0;
			
			case 0x00000003:
				return 2;
			
			case 0x00000004:
				return 1;
			
			case 0x00000005:
				return 2;
			
			case 0x00000006:
				return 2;
			
			case 0x00000007:
				return 2;
			
			case 0x00000008:
				return 0;
			
			case 0x00000009:
				return 0;
			
			case 0x0000000A:
				return 2;
			
			case 0x0000000B:
				return 0;
			
			case 0x0000000C:
				return 0;
			
			case 0x0000000D:
				return 2;
			
			case 0x0000000E:
				return 2;
			
			case 0x0000000F:
				return 1;
			
			case 0x00000010:
				return 2;
			
			case 0x00000011:
				return 1;
			
			case 0x00000012:
				return 2;
			
			case 0x00000013:
				return 1;
			
			case 0x00000014:
				return 1;
			
			case 0x00000015:
				return 1;
			
			case 0x00000016:
				return 0;
			
			case 0x00000017:
				return 1;
			
			case 0x00000018:
				return 2;
			
			case 0x00000019:
				return 1;
			
			case 0x0000001A:
				return 0;
			
			case 0x0000001B:
				return 0;
			
			case 0x0000001C:
				return 1;
			
			case 0x0000001D:
				return 0;
			
			case 0x0000001E:
				return 0;
			
			case 0x0000001F:
				return 0;
			
			case 0x00000020:
				return 1;
			
			case 0x00000021:
				return 1;
			
			case 0x00000022:
				return 0;
			
			case 0x00000023:
				return 1;
			
			case 0x00000024:
				return 0;
			
			case 0x00000025:
				return 2;
			
			case 0x00000026:
				return 1;
			
			case 0x00000027:
				return 1;
			
			case 0x00000028:
				return 0;
			
			case 0x00000029:
				return 1;
			
			case 0x0000002A:
				return 0;
			
			case 0x0000002B:
				return 1;
			
			case 0x0000002C:
				return 0;
			
			case 0x0000002D:
				return 1;
			
			case 0x0000002E:
				return 0;
			
			case 0x0000002F:
				return 1;
			
			case 0x00000030:
				return 0;
			
			case 0x00000031:
				return 1;
			
			case 0x00000032:
				return 2;
			
			case 0x00000033:
				return 1;
			
			case 0x00000034:
				return 0;
			
			case 0x00000035:
				return 0;
			
			case 0x00000036:
				return 1;
			
			case 0x00000037:
				return 0;
			
			case 0x00000038:
				return 0;
			
			case 0x00000039:
				return 1;
			
			case 0x0000003A:
				return 1;
			
			case 0x0000003B:
				return 0;
			
			case 0x0000003C:
				return 1;
			
			case 0x0000003D:
				return 1;
			
			case 0x0000003E:
				return 0;
			
			case 0x0000003F:
				return 0;
			
			case 0x00000040:
				return 1;
			
			case 0x00000041:
				return 1;
			
			case 0x00000042:
				return 1;
			
			case 0x00000043:
				return 1;
			
			case 0x00000044:
				return 1;
			
			case 0x00000045:
				return 1;
			
			case 0x00000046:
				return 0;
			
			case 0x00000047:
				return 0;
			
			case 0x00000048:
				return 1;
			
			case 0x00000049:
				return 1;
			
			case 0x0000004A:
				return 0;
			
			case 0x0000004B:
				return 0;
			
			case 0x0000004C:
				return 1;
			}
		
		default:
	}
	return 4294967295;
}

void Function_321(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6) //Position: 0x1562D / 87597
{
	uParam3 = 2;
	uParam4 = 20.0f;
	iParam5 = 7.0f;
	uParam6 = 1;
	if (Function_108())
	{
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000000:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000004:
				uParam1 = 1;
				uParam2 = 1;
				break;
			
			case 0x0000000F:
				uParam1 = 0;
				uParam2 = 1;
				uParam3 = 3;
				iParam5 = 2,5f;
				uParam4 = 8.0f;
				break;
			
			case 0x00000013:
				uParam1 = 0;
				uParam2 = 1;
				uParam3 = 3;
				iParam5 = 2,5f;
				uParam4 = 8.0f;
				break;
			
			case 0x00000015:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000017:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x0000001C:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000020:
				uParam1 = 0;
				uParam2 = 1;
				iParam5 = 3.0f;
				uParam4 = 8.0f;
				break;
			
			case 0x00000023:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000026:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000027:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x0000002B:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000031:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000036:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000039:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x0000003C:
				uParam1 = 0;
				uParam2 = 1;
				uParam3 = 3;
				iParam5 = 3.0f;
				uParam4 = 8.0f;
				break;
			
			case 0x0000003D:
				uParam1 = 1;
				uParam2 = 1;
				break;
			
			case 0x00000040:
				uParam1 = 1;
				uParam2 = 1;
				break;
			
			case 0x00000044:
				uParam1 = 1;
				uParam2 = 1;
				break;
			
			case 0x00000048:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x0000004B:
				uParam1 = 1;
				uParam2 = 1;
				break;
			
			default:
				uParam1 = 0;
				uParam2 = 1;
				break;
			}
	}
}

int Function_322(struct<257> Param0) //Position: 0x15848 / 88136
{
	var uVar0;
	int iVar1;
	
	if (GET_ACTOR_ENUM(&Global_54076) != 1)
	{
		return 0;
	}
	uVar0 = Param0.f_220;
	iVar1 = Param0.f_256;
	while (iVar1 != 4294967295)
	{
		if (Global_116927[iVar16].f_36 != TO_FLOAT(false))
		{
			return 1;
		}
		if (Function_323(Global_99725[iVar143].f_220, uVar0))
		{
			return 0;
		}
		iVar1 = Global_99725[iVar143].f_256;
	}
	return 0;
}

bool Function_323(int iParam0, int iParam1) //Position: 0x158A9 / 88233
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0x00000154:
		case 0x00000155:
		case 0x00000156:
			if ((iParam1 != 340 || iParam1 != 341) || iParam1 != 342)
			{
				return 1;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_324(struct<229> Param0) //Position: 0x158F3 / 88307
{
	bool bVar0;
	var uVar1;
	var uVar3;
	bool bVar5;
	bool bVar6;
	
	if (IS_ACTOR_VALID(&Param0 + 312) && IS_GRINGO_VALID(&Param0 + 320))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&Param0 + 320), "ForceMusicGringoUse", true);
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&Param0 + 320), "ForceAllowSun", true);
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&Param0 + 320), "ForceAllowRain", true);
		TASK_CLEAR(&Param0 + 312);
		TASK_PRIORITY_SET(&Param0 + 312, 2);
		if (!Function_56(Param0.f_228, 16384))
		{
			bVar0 = true;
			if (!&bParam1)
			{
				if (GET_CURRENT_GRINGO(&Param0 + 312) == &Param0 + 320)
				{
					bVar0 = false;
				}
				else
				{
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&Param0 + 320), &uVar1);
					GET_OBJECT_POSITION(&Param0 + 312, &uVar3);
					bVar5 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(&Param0 + 312), &uVar1, 3212836864);
					bVar6 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(&Param0 + 312), &uVar3, 3212836864);
					if (bVar6 || bVar5)
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				SNAP_ACTOR_TO_GRINGO(&Param0 + 312, GET_OBJECT_FROM_GRINGO(&Param0 + 320), "UseCase1", true, 0, 0);
			}
		}
		TASK_USE_GRINGO(&Param0 + 312, &Param0 + 320, "UseCase1", 4294967295, 1);
	}
	return;
}

void Function_325(struct<209> Param0) //Position: 0x15A57 / 88663
{
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		TASK_CLEAR(&Param0 + 312);
		TASK_PRIORITY_SET(&Param0 + 312, 2);
		TASK_GO_TO_COORD_AND_STAY(&Param0 + 312, &Param0 + 184, 1, Param0.f_208);
	}
	return;
}

struct<8> Function_326(int iParam0) //Position: 0x15A94 / 88724
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

var Function_327(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x15AA6 / 88742
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_328(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_310(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_328(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x15AE4 / 88804
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_310(&(Param0[iVar02]), 4);
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

var Function_329(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x15BB3 / 89011
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_310(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_310(&(Param0[iVar02]), 8);
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

