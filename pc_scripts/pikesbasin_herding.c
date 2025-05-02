//Decompiled with MagicRDR v1.0
//Function Count : 246
//Statics Count : 431
//Natives Count : 448
//Parameters Count : 62

#region Local Var
	int iLocal_0 = 0;
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
	var uLocal_96 = 2;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
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
	bool bLocal_131[12] = { false, false, false, false, false, false, false, false, false, false, false, false };
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
	bool bLocal_159 = false;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	bool bLocal_163 = false;
	var uLocal_164 = 0;
	var uLocal_165[1] = { 0 };
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	bool bLocal_178 = false;
	struct<2> Local_179 = { 0, 0 } ;
	var uLocal_181 = 0;
	struct<2> Local_182 = { 0, 0 } ;
	var uLocal_184 = 0;
	struct<2> Local_185 = { 0, 0 } ;
	var uLocal_187 = 0;
	struct<2> Local_188 = { 0, 0 } ;
	var uLocal_190 = 0;
	struct<2> Local_191 = { 0, 0 } ;
	var uLocal_193 = 0;
	struct<2> Local_194 = { 0, 0 } ;
	var uLocal_196 = 0;
	struct<2> Local_197 = { 0, 0 } ;
	var uLocal_199 = 0;
	struct<2> Local_200 = { 0, 0 } ;
	var uLocal_202 = 0;
	struct<2> Local_203 = { 0, 0 } ;
	var uLocal_205 = 0;
	struct<2> Local_206 = { 0, 0 } ;
	var uLocal_208 = 0;
	bool bLocal_209 = false;
	bool bLocal_210 = false;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	bool bLocal_237 = false;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	bool bLocal_248 = false;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 15;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
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
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	int iLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	int iLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	int iLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	int iLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	int iLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	int iLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	int iLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	int iLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	int iLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	int iLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
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
	var uVar0;
	var uVar2;
	var uVar4;
	int iVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	var uVar10;
	var uVar11;
	var uVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	var uVar21;
	var uVar23;
	var uVar25;
	var uVar26;
	bool bVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	
	iLocal_106 = 0;
	iLocal_107 = 0;
	uLocal_115 = "";
	uLocal_129 = "";
	bLocal_163 = "";
	iLocal_175 = 0;
	iLocal_176 = 0;
	iLocal_177 = 0;
	bLocal_178 = false;
	Local_179 = Vector(0.0f, 0.0f, 0.0f);
	bLocal_210 = false;
	iLocal_211 = 0;
	iLocal_212 = 0;
	iLocal_213 = 0;
	iLocal_214 = 0;
	iLocal_215 = 0;
	iLocal_216 = 0;
	iLocal_217 = 0;
	iLocal_218 = 0;
	iLocal_219 = 0;
	iLocal_220 = 0;
	iLocal_222 = 0;
	iLocal_223 = 0;
	iLocal_224 = 0;
	iLocal_225 = 0;
	iLocal_226 = 0;
	iLocal_227 = 0;
	iLocal_228 = 0;
	iLocal_229 = 0;
	iLocal_230 = 0;
	iLocal_231 = 0;
	iLocal_232 = 0;
	iLocal_233 = 0;
	iLocal_234 = 0;
	iLocal_235 = 0;
	iLocal_236 = 0;
	bLocal_237 = false;
	iLocal_238 = 0;
	iLocal_239 = 0;
	iLocal_240 = 0;
	iLocal_241 = 0;
	iLocal_242 = 0;
	iLocal_243 = 0;
	iLocal_244 = 0;
	iLocal_245 = 0;
	iLocal_246 = 0;
	iLocal_247 = 0;
	bLocal_248 = false;
	iLocal_249 = 0;
	iLocal_250 = 0;
	iLocal_251 = 0;
	iLocal_252 = 0;
	iLocal_253 = 0;
	iLocal_254 = 0;
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	GET_OBJECT_POSITION(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_playerGoToFlag"), &uVar0);
	while (!IS_EXITFLAG_SET())
	{
		if (!iLocal_253)
		{
			if (!iLocal_250)
			{
				if (iLocal_254 >= 4)
				{
					if (!IS_ACTOR_ALIVE(&bLocal_163) && !iLocal_229)
					{
						DECOR_SET_BOOL(&Global_54076, "RancherDead", true);
						iLocal_229 = 1;
					}
				}
			}
		}
		uVar2 = Vector(0.0f, 0.0f, 0.0f);
		GET_POSITION(&Global_54076, &uVar2);
		uVar4 = Vector(0.0f, 0.0f, 0.0f);
		if (IS_ACTOR_VALID(&bLocal_163))
		{
			GET_POSITION(&bLocal_163, &uVar4);
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "EndMission"))
		{
			if (IS_ACTOR_VALID(&bLocal_163))
			{
				if (Function_245(&Global_54076, &bLocal_163) < 150.0f)
				{
					iLocal_254 = 37;
				}
			}
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "RancherDead"))
		{
			iLocal_254 = 37;
		}
		if (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("PikesBasin_Layout")))
		{
			iLocal_254 = 37;
		}
		if (!iLocal_231)
		{
			if (DECOR_CHECK_EXIST(&Global_54076, "PlayerTalkedHelper"))
			{
				if (Function_245(&Global_54076, &bLocal_163) <= 25.0f)
				{
					SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_ALLY_KEEP_UP", true, false, 0, 0, true, false);
					iLocal_231 = 1;
				}
			}
		}
		if (!iLocal_252)
		{
			if (IS_ACTOR_VALID(&bLocal_163))
			{
				if (SQUAD_IS_VALID(&bLocal_159))
				{
					if (Function_244(&bLocal_159, &Global_54076))
					{
						iLocal_177++;
					}
				}
				if (iLocal_177 == 0 && !Function_243(iLocal_175, 256))
				{
					Function_242(&iLocal_175, 256);
					Function_241();
				}
				else if (iLocal_177 < 50 && Function_243(iLocal_175, 256))
				{
					if (!iLocal_235)
					{
						ACTOR_END_FORCE_HOLSTER(&bLocal_163);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_163, 0);
						MEMORY_PREFER_RIDING(&bLocal_163, false);
						Function_240(&bLocal_163);
						MEMORY_CONSIDER_AS_ENEMY(&bLocal_163, &Global_54076);
						MEMORY_IDENTIFY(&bLocal_163, &Global_54076);
						MEMORY_ATTACK_ON_SIGHT(&bLocal_163, 1);
						SET_ACTOR_FACTION(&bLocal_163, 19);
						TASK_CLEAR(&bLocal_163);
						TASK_PRIORITY_SET(&bLocal_163, true);
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&bLocal_163, -1.0f);
						Function_239();
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_163)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_163));
						}
						DECOR_SET_BOOL(&Global_54076, "KilledCows", true);
						iLocal_254 = 37;
						iLocal_235 = 1;
					}
				}
			}
		}
		if (IS_ACTOR_VALID(&bLocal_163))
		{
			if (IS_ACTOR_ALIVE(&bLocal_163))
			{
				if (!iLocal_224)
				{
					if (Function_245(&Global_54076, &bLocal_163) < 10.0f)
					{
						SET_ACTOR_MIN_SPEED(&bLocal_163, 3);
					}
					else
					{
						SET_ACTOR_MIN_SPEED(&bLocal_163, 2);
					}
				}
			}
		}
		if (!iLocal_230)
		{
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (IS_ACTOR_VALID(&bLocal_163))
				{
					if (IS_ACTOR_ALIVE(&bLocal_163))
					{
						MEMORY_PREFER_RIDING(&bLocal_163, true);
					}
				}
			}
			else if (!IS_ACTOR_RIDING(&Global_54076))
			{
				if (IS_ACTOR_VALID(&bLocal_163))
				{
					if (IS_ACTOR_ALIVE(&bLocal_163))
					{
						MEMORY_PREFER_WALKING(&bLocal_163, 1);
					}
				}
			}
		}
		Function_234(&bLocal_159, &bLocal_163, &uLocal_119);
		switch (iLocal_254)
		{
			case 0x00000000:
				uLocal_115 = CREATE_LAYOUT("NuHerd_Layout");
				bLocal_159 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_115, "cowSquad"));
				Function_230(&iLocal_255);
				Function_229();
				Function_229();
				iLocal_254 = 1;
				break;
			
			case 0x00000001:
				if (Function_224(&iLocal_255))
				{
					iLocal_254 = 2;
				}
				break;
			
			case 0x00000002:
				Function_223(&uLocal_115, &bLocal_159, &uLocal_161);
				iLocal_254 = 3;
				break;
			
			case 0x00000003:
				Function_222(&iLocal_175, &bLocal_163, &uLocal_115, &uLocal_129, &uLocal_117);
				iLocal_254 = 4;
				break;
			
			case 0x00000004:
				iVar6 = 0;
				while (iVar6 <= 4)
				{
					if (!Function_221(&(Global_11704[iVar62]), 2) || Function_221(&(Global_11704[iVar62]), 4))
					{
						bLocal_237 = true;
					}
					iVar6++;
				}
				if (!bLocal_237)
				{
					if (!Function_220(&iLocal_357))
					{
						Function_219(&iLocal_357);
					}
					else
					{
						Function_218(&iLocal_357);
					}
				}
				Function_217(&bLocal_131, &uLocal_157);
				Function_216(&bLocal_131);
				if (!Global_42825 != 5)
				{
					SQUAD_SET_FACTION(&(bLocal_131[7]), 19);
					Function_215(&(bLocal_131[7]), &Global_54076);
				}
				Function_215(&(bLocal_131[7]), &bLocal_163);
				Function_214(&(bLocal_131[7]), &bLocal_163, 4);
				Function_213(&(bLocal_131[7]), -1.0f);
				uLocal_121 = CREATE_VOLUME_SET_IN_LAYOUT(&uLocal_115, "TriggerObjVolume");
				ADD_TO_VOLUME_SET(&uLocal_121, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_VolumeSet01"));
				ADD_TO_VOLUME_SET(&uLocal_121, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_VolumeSet02"));
				ADD_TO_VOLUME_SET(&uLocal_121, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_VolumeSet03"));
				ADD_TO_VOLUME_SET(&uLocal_121, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_VolumeSet04"));
				uLocal_123 = CREATE_VOLUME_SET_IN_LAYOUT(&uLocal_115, "HerdStayOut");
				ADD_TO_VOLUME_SET(&uLocal_123, &iLocal_0 + 40);
				uLocal_125 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_excitedReturn");
				uLocal_119 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_115, "SquadCenter", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				SQUAD_COMPUTE_CENTROID(&bLocal_159, &Local_179);
				SET_OBJECT_POSITION(&uLocal_119, Local_179);
				PRINTSTRING("SQUAD CENTROIDS POSITION: ");
				PRINTVECTOR(Local_179);
				PRINTNL();
				Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarston"));
				Local_185 = Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarston"));
				Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarston"));
				Local_188 = Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarston"));
				Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancher"));
				Local_191 = Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancher"));
				Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancher"));
				Local_194 = Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancher"));
				Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportJohnCrouch"));
				Local_197 = Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportJohnCrouch"));
				Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportJohnCrouch"));
				Local_200 = Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportJohnCrouch"));
				Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancherCrouch"));
				Local_203 = Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancherCrouch"));
				Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancherCrouch"));
				Local_206 = Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancherCrouch"));
				if (IS_VOLUME_VALID(&uLocal_121))
				{
					iLocal_254 = 5;
				}
				else
				{
					LOG_ERROR("volume is not valid");
				}
				break;
			
			case 0x00000005:
				fVar7 = Function_245(&bLocal_163, &Global_54076);
				if (!iLocal_227 && !iLocal_228)
				{
					if ((Function_209(&Global_54076, &(bLocal_131[7]), 1, 1, 1, 30.0f) && !Global_42825 != 5) || Function_209(&Global_54076, &(bLocal_131[7]), 1, 1, 1, 0.0f))
					{
						Function_208(&bLocal_131);
						iLocal_228 = 1;
					}
				}
				if (!Function_243(iLocal_175, 1))
				{
					if (!Function_243(iLocal_175, 65536))
					{
						if (IS_VOLUME_VALID(&uLocal_121))
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_121))
							{
								if (HUD_IS_SHOWING_OBJECTIVE())
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
								}
								Function_207("PIK_Obj_ApproachHelper", 0x40f00000, 1, 2, 0, 0, 0, 0);
								DECOR_SET_BOOL(&Global_54076, "PIK_GivenObjective", true);
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ApproachHelper", 0, 0, false);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_117)))
								{
									ADD_BLIP_FOR_OBJECT(&uLocal_117, 330, 0f, 2, 0);
								}
								Function_206(Global_46950, 1);
								if (!Function_205(Global_46950) != 2)
								{
									Function_204(Global_46950, 1);
									Global_6628 = 1;
									SET_PLAYER_ENDLESS_READYMODE(0, 1);
								}
								Function_242(&iLocal_175, 65536);
							}
							else if (DECOR_CHECK_EXIST(&Global_54076, "PlayerAggroing"))
							{
								if (HUD_IS_SHOWING_OBJECTIVE())
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
								}
								Function_207("PIK_Obj_ApproachHelper", 0x40f00000, 1, 2, 0, 0, 0, 0);
								DECOR_SET_BOOL(&Global_54076, "PIK_GivenObjective", true);
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ApproachHelper", 0, 0, false);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_117)))
								{
									ADD_BLIP_FOR_OBJECT(&uLocal_117, 330, 0f, 2, 0);
								}
								Function_206(Global_46950, 1);
								if (!Function_205(Global_46950) != 2)
								{
									Function_204(Global_46950, 1);
									Global_6628 = 1;
									SET_PLAYER_ENDLESS_READYMODE(0, 1);
								}
								Function_242(&iLocal_175, 65536);
							}
						}
					}
					if (!Function_243(iLocal_176, 1))
					{
						if (fVar7 > 20.0f)
						{
							Function_242(&iLocal_176, 1);
							if (Function_203() > 4)
							{
								SAY_SINGLE_LINE_CONTEXT(&bLocal_163, 46, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&bLocal_163, 108, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
							}
						}
					}
					if (!iLocal_244)
					{
						if (!bLocal_210)
						{
							if (Function_245(&bLocal_163, &Global_54076) < 10.0f && !iLocal_211)
							{
								TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_163, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "introCover")), -1.0f, 0.0f);
								iLocal_211 = 1;
								iLocal_212 = 0;
							}
							if (Function_245(&bLocal_163, &Global_54076) > 10.0f && !iLocal_212)
							{
								TASK_CLEAR(&bLocal_163);
								TASK_HIDE_AT_COVER(&bLocal_163, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "introCover")), -1.0f, 0.0f, 0);
								iLocal_212 = 1;
								iLocal_211 = 0;
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_JOINING_THE_FRAY", true, false, 2, 0, true, false);
								}
							}
						}
					}
					if (!iLocal_225)
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_introGateway")) && IS_ACTOR_RIDING_VEHICLE(&Global_54076))
						{
							if (HUD_IS_SHOWING_HELP_TEXT())
							{
								HUD_CLEAR_HELP();
								HUD_CLEAR_HELP_QUEUE();
							}
							Function_202("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
							iLocal_225 = 1;
						}
					}
					if (iLocal_225)
					{
						if (Function_199(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_introGateway")) <= 15.0f)
						{
							iLocal_225 = 0;
						}
					}
					if (!iLocal_232)
					{
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_157) == 0)
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_BlipSquad6")))
							{
								iVar8 = 0;
								while (iVar8 < 3)
								{
									bVar9 = false;
									while (bVar9 < (SQUAD_GET_SIZE(&(bLocal_131[iVar8])) - 1))
									{
										if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(bLocal_131[iVar8]), bVar9)))
										{
											KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&(bLocal_131[iVar8]), bVar9));
										}
										bVar9++;
									}
									iVar8++;
								}
								iLocal_232 = 1;
							}
						}
					}
					if (!iLocal_244)
					{
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[7])) != 0 && Function_198(&bLocal_131) > 3)
						{
							if (IS_VOLUME_VALID(&uLocal_125))
							{
								if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_125))
								{
									AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
									ACTOR_START_FORCE_HOLSTER(&bLocal_163, 0, 0);
									TASK_CLEAR(&bLocal_163);
									TASK_FACE_ACTOR(&bLocal_163, &Global_54076, 1, 3212836864);
									MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_163, 1);
									RESET_ANIM_SET_FOR_ACTOR(&bLocal_163, 1);
									SET_ANIM_SET_FOR_ACTOR(&bLocal_163, "excited_return", 0);
									SET_ACTION_NODE_FOR_ACTOR(&bLocal_163, "excited_return/mobile_and_loop/loop");
									iLocal_244 = 1;
								}
							}
						}
					}
					if (Function_196(&uLocal_117, 0, 1, 1, 1, 0))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_117)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_117));
						}
						Function_195(&uLocal_117);
						uVar10 = GET_ACTORS_HORSE(&Global_54076);
						Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_TeleportHorse"));
						uVar11 = Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_TeleportHorse"));
						iLocal_227 = 1;
						DECOR_SET_BOOL(&Global_54076, "MakeBadAgain", true);
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[7])) < 0 || Function_198(&bLocal_131) < 3)
						{
							uVar13 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_115, Function_194(), 4,203895E-45f, Vector(-1503,65f, 59,113f, 2460,141f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 6.0f));
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar13);
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar13);
							CLEAR_AMBIENT_OBJECTS_VOLUME(&uVar13, 15);
							DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&uVar13);
							if (IS_ACTOR_VALID(&uVar10))
							{
								if (IS_ACTOR_IN_VOLUME(&uVar10, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_CheckPlayerHorse")))
								{
									TELEPORT_ACTOR(&uVar10, &uVar11, 1, 1, 1);
								}
							}
							DECOR_SET_BOOL(&Global_54076, "PlayerTalkedHelper", true);
							AI_DONT_HARM_ACTOR(&Global_54076);
							AI_DONT_HARM_ACTOR(&bLocal_163);
							Function_189(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
							Function_219(&iLocal_329);
							Function_218(&iLocal_329);
							Function_185(&uLocal_115, 0, 1, 0, 0);
							AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_163, &Global_54076, -1.0f, 0);
							AI_GOAL_LOOK_AT_ACTOR_NEW(&Global_54076, &bLocal_163, -1.0f, 0);
							SET_PLAYER_POSTURE(0, 1, 0);
							Function_183(&Global_54076, 0);
							SET_ACTOR_UPDATE_PRIORITY(&Global_54076, false);
							SET_OBJECT_POSITION(&Global_54076, Local_197);
							SET_OBJECT_ORIENTATION(&Global_54076, Local_200);
							AI_IGNORE_ACTOR(&bLocal_163);
							ATTACH_PLAYER_TO_COVER(0, 1, 1);
							ACTOR_POP_NEXT_GAIT(&Global_54076, 0, 0);
							if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_181("PIK_MainSquad", FIND_NAMED_LAYOUT("PIK_AA_Layout"))) >= 0)
							{
								iLocal_254 = 7;
							}
							else
							{
								iLocal_254 = 9;
							}
						}
						else
						{
							iLocal_254 = 26;
						}
					}
				}
				else if (fVar7 > 20.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(&bLocal_163, 71, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					Function_180("PIK_Helper_PleaseUntie", &bLocal_163, 20.0f, 0, "", 1);
					ADD_BLIP_FOR_ACTOR(&bLocal_163, 325, 0, 2, 0);
					iLocal_254 = 6;
				}
				break;
			
			case 0x00000006:
				if (!IS_ACTOR_HOGTIED(&bLocal_163))
				{
					SAY_SINGLE_LINE_CONTEXT(&bLocal_163, 103, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					Function_180("PIK_Helper_ThanksUntie1", &Global_54076, 25.0f, 0, "", 1);
					Function_180("PIK_Helper_ThanksUntie2", &Global_54076, 25.0f, 0, "", 1);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_163, 0,25f);
					SET_ACTOR_PROOF(&bLocal_163, 128);
					SET_CRIPPLE_ENABLE(&bLocal_163, 0);
					SET_ACTOR_FACTION(&bLocal_163, 20);
					SET_FACTIONS_STATUS_TWO_WAY(20, 14, 4);
					if (!Function_205(Global_46950) != 2)
					{
						Function_204(Global_46950, 1);
						Global_6628 = 1;
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
					}
					iLocal_254 = 36;
				}
				break;
			
			case 0x00000007:
				if (Function_178(&iLocal_329) < 0,5f)
				{
					Function_177();
					iLocal_254 = 8;
				}
				break;
			
			case 0x00000008:
				if (Function_178(&iLocal_329) < 4.0f)
				{
					Function_176();
					iLocal_254 = 10;
				}
				break;
			
			case 0x0000000A:
				if (Function_178(&iLocal_329) < 8,9f)
				{
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_163, 0);
					SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, -92,772f, 0.0f), 0);
					AI_GOAL_LOOK_CLEAR(&bLocal_163);
					TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_163, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "introCover")), -1.0f, 0.0f);
					Function_173(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					Function_218(&iLocal_321);
					if (!Function_205(Global_46950) != 2)
					{
						Function_204(Global_46950, 1);
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
					}
					Function_242(&iLocal_175, 128);
					Function_172(&uLocal_317, 2.0f);
					iLocal_254 = 12;
				}
				break;
			
			case 0x0000000C:
				if (Function_178(&iLocal_329) < 9.0f)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_163)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_163, 325, 0, 2, 0);
					}
					AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
					AI_CLEAR_DONT_HARM_ACTOR(&bLocal_163);
					AI_STOP_IGNORING_ACTOR(&bLocal_163);
					Function_208(&bLocal_131);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_163, 13, false);
					STOP_FORCE_LOOK_AT_COORD(&bLocal_163);
					AI_GOAL_LOOK_CLEAR(&bLocal_163);
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE();
					Function_207("PIK_Obj_KillGroup", 0x40f00000, 1, 2, 0, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_KillGroup", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
					DECOR_SET_BOOL(&Global_54076, "PrintThruCut", true);
					iVar14 = 0;
					while (iVar14 < 11)
					{
						Function_215(&(bLocal_131[iVar14]), &bLocal_163);
						Function_214(&(bLocal_131[iVar14]), &bLocal_163, 4);
						iVar14++;
					}
					iLocal_254 = 13;
				}
				break;
			
			case 0x0000000D:
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[7])) == 0)
				{
					if (Function_178(&iLocal_321) < 7,1f)
					{
						if (SQUAD_IS_VALID(&(bLocal_131[6])))
						{
							if (!iLocal_215)
							{
								if (SQUAD_GET_SIZE(&(bLocal_131[6])) > 4)
								{
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_163);
									TASK_CLEAR(&bLocal_163);
									TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_163, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "cover_low1")), -1.0f, 0.0f);
									Function_218(&iLocal_321);
									AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
									iLocal_215 = 1;
								}
							}
							if (!iLocal_216)
							{
								if (SQUAD_GET_SIZE(&(bLocal_131[6])) < 3)
								{
									TASK_CLEAR(&bLocal_163);
									TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_163, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "cover_low1a")), -1.0f, 0.0f);
									iLocal_216 = 1;
								}
							}
							if (!iLocal_242)
							{
								if (Function_178(&iLocal_321) < 3.0f)
								{
									if (IS_ACTOR_SHOOTING(&Global_54076) || IS_PLAYER_IN_COMBAT(0))
									{
										AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
										iLocal_242 = 1;
									}
								}
							}
							if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[6])) == 0)
							{
								AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
								Function_218(&iLocal_321);
								iLocal_254 = 14;
							}
						}
						if (!iLocal_222)
						{
							if (Function_245(&bLocal_163, &Global_54076) >= 10.0f)
							{
								Function_171();
								iLocal_222 = 1;
							}
						}
					}
				}
				if (!iLocal_234)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[7])) == 0)
					{
						if (!Function_220(&iLocal_361))
						{
							Function_219(&iLocal_361);
							iLocal_234 = 1;
						}
					}
				}
				if (!iLocal_233)
				{
					if (Function_220(&iLocal_361))
					{
						if (Function_178(&iLocal_361) < 5.0f)
						{
							if (IS_ACTOR_IN_VOLUME(&bLocal_163, &iLocal_0 + 8))
							{
								TASK_CLEAR(&bLocal_163);
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_163);
								bVar15 = TASK_SEQUENCE_OPEN();
								TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 304, 5.0f, 4, 0, 1);
								TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 312, 5.0f, 4, 0, 1);
								TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 320, 5.0f, 4, 0, 1);
								TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 328, 5.0f, 4, 0, 1);
								TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 336, 5.0f, 4, 0, 1);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_163, bVar15);
								TASK_SEQUENCE_RELEASE(bVar15, 1);
								LOG_ERROR("TRIGGERING FAIL SAFE 01");
								iLocal_233 = 1;
							}
						}
					}
				}
				break;
			
			case 0x0000000E:
				if (SQUAD_IS_VALID(&(bLocal_131[5])))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[5])) >= 0)
					{
						TASK_CLEAR(&bLocal_163);
						TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_163, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "cover_low2")), -1.0f, 0.0f);
					}
				}
				else
				{
					LOG_ERROR("PIK_canyonSquad6 IS NOT VALID");
				}
				if (!iLocal_240)
				{
					if (Function_178(&iLocal_321) < 3.0f)
					{
						if (IS_ACTOR_SHOOTING(&Global_54076) || IS_PLAYER_IN_COMBAT(0))
						{
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							iLocal_240 = 1;
						}
					}
				}
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[5])) == 0)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
					Function_218(&iLocal_321);
					iLocal_254 = 15;
				}
				if (!iLocal_233)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[7])) == 0)
					{
						if (Function_220(&iLocal_361))
						{
							if (Function_178(&iLocal_361) < 10.0f)
							{
								if (IS_ACTOR_IN_VOLUME(&bLocal_163, &iLocal_0 + 8))
								{
									TASK_CLEAR(&bLocal_163);
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_163);
									bVar16 = TASK_SEQUENCE_OPEN();
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 304, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 312, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 320, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 328, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 336, 5.0f, 4, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&bLocal_163, bVar16);
									TASK_SEQUENCE_RELEASE(bVar16, 1);
									iLocal_233 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 0x0000000F:
				if (SQUAD_IS_VALID(&(bLocal_131[4])))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[4])) >= 0)
					{
						TASK_CLEAR(&bLocal_163);
						TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_163, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "cover_low3")), -1.0f, 0.0f);
						iLocal_254 = 16;
					}
				}
				else
				{
					LOG_ERROR("PIK_canyonSquad6 IS NOT VALID");
				}
				if (!iLocal_241)
				{
					if (Function_178(&iLocal_321) < 3.0f)
					{
						if (IS_ACTOR_SHOOTING(&Global_54076) || IS_PLAYER_IN_COMBAT(0))
						{
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							iLocal_241 = 1;
						}
					}
				}
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[4])) == 0)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
					Function_218(&iLocal_321);
					iLocal_254 = 16;
				}
				if (!iLocal_233)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[7])) == 0)
					{
						if (Function_220(&iLocal_361))
						{
							if (Function_178(&iLocal_361) < 10.0f)
							{
								if (IS_ACTOR_IN_VOLUME(&bLocal_163, &iLocal_0 + 8))
								{
									TASK_CLEAR(&bLocal_163);
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_163);
									bVar17 = TASK_SEQUENCE_OPEN();
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 304, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 312, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 320, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 328, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 336, 5.0f, 4, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&bLocal_163, bVar17);
									TASK_SEQUENCE_RELEASE(bVar17, 1);
									iLocal_233 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 0x00000010:
				if (SQUAD_IS_VALID(&(bLocal_131[4])))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[4])) == 0)
					{
						TASK_CLEAR(&bLocal_163);
						TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_163, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "cover_low4")), -1.0f, 0.0f);
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_157) >= 0)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_207("PIK_Obj_ClearBasin", 0x40f00000, 1, 2, 0, 0, 0, 0);
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ClearBasin", 0, 0, false);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						}
						Function_219(&iLocal_341);
						Function_218(&iLocal_341);
						iLocal_254 = 17;
					}
				}
				else
				{
					LOG_ERROR("PIK_MainSquad IS NOT VALID");
				}
				if (!iLocal_233)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[7])) == 0)
					{
						if (Function_220(&iLocal_361))
						{
							if (Function_178(&iLocal_361) < 10.0f)
							{
								if (IS_ACTOR_IN_VOLUME(&bLocal_163, &iLocal_0 + 8))
								{
									TASK_CLEAR(&bLocal_163);
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_163);
									bVar18 = TASK_SEQUENCE_OPEN();
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 304, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 312, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 320, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 328, 5.0f, 4, 0, 1);
									TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 336, 5.0f, 4, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&bLocal_163, bVar18);
									TASK_SEQUENCE_RELEASE(bVar18, 1);
									iLocal_233 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 0x00000011:
				if (!iLocal_219)
				{
					if (Function_220(&iLocal_341))
					{
						if (Function_178(&iLocal_341) < 2.0f)
						{
							if (Function_245(&Global_54076, &bLocal_163) >= 12.0f)
							{
								Function_170();
								iLocal_219 = 1;
							}
						}
					}
				}
				if (!iLocal_217)
				{
					if (SQUAD_IS_VALID(&uLocal_157))
					{
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_157) < 3)
						{
							TASK_CLEAR(&bLocal_163);
							TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_163, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "cover_low5")), -1.0f, 0.0f);
							iLocal_217 = 1;
						}
					}
				}
				if (SQUAD_IS_VALID(&uLocal_157))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_157) < 0)
					{
						if (!Function_220(&iLocal_349))
						{
							Function_219(&iLocal_349);
							AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
						}
					}
				}
				if (Function_220(&iLocal_349))
				{
					if (Function_178(&iLocal_349) <= 2.0f)
					{
						iLocal_224 = 1;
						CLEAR_ACTOR_MIN_SPEED(&bLocal_163);
						CLEAR_ACTOR_MAX_SPEED(&bLocal_163);
						Function_219(&iLocal_325);
						Function_218(&iLocal_325);
						if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[3])) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[2])) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[1])) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[0])) < 0)
						{
							Function_189(1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
							Function_166(&uLocal_115, 0, 1, 0, 0);
							bLocal_248 = true;
						}
						else
						{
							Function_189(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0x3f800000, 0);
							UI_PUSH("CutsceneWithMessages");
							Function_160(&uLocal_115, 0, 1, 0, 0);
						}
						uLocal_171 = Function_158("pikesBasin", "placement03", 1);
						uLocal_173 = Function_158("pikesBasin", "placement03", 2);
						iLocal_230 = 1;
						if (IS_DOOR_VALID(&uLocal_171))
						{
							Function_157(&uLocal_171, 1);
							OPEN_DOOR_DIRECTION(&uLocal_171, 1);
						}
						else
						{
							LOG_ERROR("GateDoor01 is not valid");
						}
						if (IS_DOOR_VALID(&uLocal_173))
						{
							Function_157(&uLocal_173, 1);
							OPEN_DOOR_DIRECTION(&uLocal_173, 0);
						}
						else
						{
							LOG_ERROR("GateDoor02 is not valid");
						}
						ACTOR_START_FORCE_HOLSTER(&bLocal_163, 0, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_163, 1);
						MEMORY_PREFER_WALKING(&bLocal_163, 1);
						if (IS_ACTOR_RIDING(&Global_54076))
						{
							ACTOR_DISMOUNT_NOW(&Global_54076);
						}
						if (IS_ACTOR_RIDING(&bLocal_163))
						{
							ACTOR_DISMOUNT_NOW(&bLocal_163);
						}
						SET_OBJECT_POSITION(&Global_54076, Local_185);
						SET_OBJECT_ORIENTATION(&Global_54076, Local_188);
						Function_183(&Global_54076, 0);
						TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
						SET_OBJECT_POSITION(&bLocal_163, Local_191);
						SET_OBJECT_ORIENTATION(&bLocal_163, Local_194);
						Function_183(&bLocal_163, 0);
						TASK_STAND_STILL(&bLocal_163, -1.0f, 0, 0);
						AI_GOAL_LOOK_AT_ACTOR(&bLocal_163, &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
						AI_GOAL_LOOK_AT_ACTOR(&Global_54076, &bLocal_163, 0, 1065353216, 3212836864, 3212836864, 0);
						TASK_CLEAR(&Global_54076);
						TASK_CLEAR(&bLocal_163);
						TASK_FACE_ACTOR(&Global_54076, &bLocal_163, 1, 3212836864);
						TASK_FACE_ACTOR(&bLocal_163, &Global_54076, 1, 3212836864);
						iLocal_254 = 18;
					}
				}
				break;
			
			case 0x00000012:
				if (Function_178(&iLocal_325) < 3.0f)
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_163, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_163, "excited_return", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_163, "excited_return/mobile_and_loop/loop");
					iLocal_254 = 19;
				}
				break;
			
			case 0x00000013:
				if (Function_178(&iLocal_325) < 3.0f)
				{
					if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[3])) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[2])) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[1])) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[0])) < 0)
					{
						Function_156();
						SET_CAMERA_POSITION(StackVal, GET_GAME_CAMERA(), Vector(-1175,483f, 76,805f, 2372,638f));
						SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, -318,313f, 0.0f), 0);
						iLocal_254 = 20;
					}
					else
					{
						Function_155();
						SET_CAMERA_POSITION(StackVal, GET_GAME_CAMERA(), Vector(-1175,483f, 76,805f, 2372,638f));
						SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, -318,313f, 0.0f), 0);
						iLocal_254 = 20;
					}
				}
				break;
			
			case 0x00000014:
				if (bLocal_248)
				{
					if (Function_178(&iLocal_325) < 7.0f)
					{
						if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[3])) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[2])) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[1])) < 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[0])) < 0)
						{
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_163, 1);
							Function_173(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							HUD_CLEAR_OBJECTIVE();
							Function_207("PIK_Obj_NeedClear", 0x40f00000, 1, 2, 0, 0, 0, 0);
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_NeedClear", 0, 0, false);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							MEMORY_PREFER_RIDING(&bLocal_163, false);
							TASK_CLEAR(&bLocal_163);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_163, false);
							uVar19 = Vector(-1185,131f, 76,193f, 2358,493f);
							uVar21 = Vector(-1180,357f, 76,299f, 2366,432f);
							uVar23 = Vector(-1168,845f, 76,299f, 2361,572f);
							uVar25 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PIK_AA_Layout"), "aHorsey1");
							uVar26 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PIK_AA_Layout"), "aHorsey2");
							bVar27 = TASK_SEQUENCE_OPEN();
							if (IS_ACTOR_ALIVE(&uVar25))
							{
								TASK_MOUNT(false, &uVar25, 0, 1, 2, 2);
							}
							else
							{
								TASK_MOUNT(false, &uVar26, 0, 1, 2, 2147483647);
							}
							TASK_GO_TO_COORD(0, &uVar19, 2);
							TASK_GO_TO_COORD(0, &uVar21, 2);
							TASK_GO_TO_COORD(0, &uVar23, 2);
							TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Global_54076, &iLocal_0 + 344, 30.0f, 1, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_163, bVar27);
							TASK_SEQUENCE_RELEASE(bVar27, 1);
							Function_154(&bLocal_159);
							SQUAD_GOALS_CLEAR(&bLocal_159);
							Function_153(&bLocal_159, &Global_54076, &iLocal_0 + 344, 25.0f, 4294967295, 1, 7.0f);
							Function_152(&bLocal_159, &uLocal_123);
							if (!Function_151(&(bLocal_131[3]), 1))
							{
								Function_150(&(bLocal_131[3]), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
							}
							iLocal_254 = 21;
						}
					}
				}
				if (!iLocal_249)
				{
					if (!bLocal_248)
					{
						if (Function_220(&iLocal_325))
						{
							if (Function_178(&iLocal_325) < 11.0f)
							{
								if (IS_ACTOR_VALID(&bLocal_163))
								{
									DESTROY_ACTOR(&bLocal_163);
									iLocal_250 = 1;
								}
								if (SQUAD_IS_VALID(&bLocal_159))
								{
									Function_149(&bLocal_159);
									iLocal_252 = 1;
								}
								PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
								iLocal_249 = 1;
							}
						}
					}
				}
				if (!bLocal_248)
				{
					if (Function_220(&iLocal_325))
					{
						if (Function_178(&iLocal_325) < 16.0f)
						{
							if (!iLocal_226)
							{
								Function_173(2, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1);
								UI_POP("CutsceneWithMessages");
								AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
								Function_145(200, 1, 0);
								Function_132(50, 1, 0);
								Function_130(Function_131(1, 1, 1, 0, 0), 1, 1);
								if (!Function_129())
								{
									Function_127(9, 0, 1);
								}
								else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
								{
									Function_127(9, 0, 1);
								}
								SET_WEAPONENUM_LOCKED(15, 0);
								GIVE_WEAPON_TO_ACTOR(&Global_54076, 15, false, 1, 1);
								Function_206(Global_46950, 0);
								if (Function_220(&iLocal_357))
								{
									bLocal_209 = Function_178(&iLocal_357);
									if (Function_126(462) < 0.0f)
									{
										if (bLocal_209 > Function_126(462))
										{
											Function_125(462, bLocal_209, 0);
										}
									}
									else
									{
										Function_125(462, bLocal_209, 0);
									}
								}
								AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
								Function_95(Global_46950);
								Function_37(Global_46950, 1, 1, 0);
								SET_PLAYER_ENDLESS_READYMODE(0, 0);
								if ((Function_36(Global_46952) <= 1 && Function_36(Global_46948) <= 1) && Function_36(Global_46950) <= 1)
								{
									if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
									{
										AWARD_ACHIEVEMENT(12);
									}
								}
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
								DECOR_SET_BOOL(&Global_54076, "RemoveExtraBlips", true);
								DECOR_SET_BOOL(&Global_54076, "EndMission", true);
								iLocal_226 = 1;
							}
						}
					}
				}
				if (!bLocal_248)
				{
					if (Function_220(&iLocal_325))
					{
						if (Function_178(&iLocal_325) < 19.0f)
						{
							iLocal_254 = 37;
						}
					}
				}
				break;
			
			case 0x00000015:
				if (!iLocal_221)
				{
					if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[3])) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[2])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[1])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[0])) != 0)
					{
						iLocal_253 = 1;
						if (IS_ACTOR_VALID(&bLocal_163))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_163)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bLocal_163));
							}
						}
						TASK_CLEAR(&bLocal_163);
						CLEAR_ACTOR_MIN_SPEED(&bLocal_163);
						CLEAR_ACTOR_MAX_SPEED(&bLocal_163);
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_163, false);
						TASK_FOLLOW_OBJECT_ALONG_PATH(&bLocal_163, &uLocal_119, &iLocal_0 + 344, 10.0f, 1, 0);
						Function_154(&bLocal_159);
						SQUAD_GOALS_CLEAR(&bLocal_159);
						bLocal_178 = false;
						while (bLocal_178 < (SQUAD_GET_SIZE(&bLocal_159) - 1))
						{
							SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_159, false, 2, 4294967295);
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_159, bLocal_178), &iLocal_0 + 344, 2, 0, 0, 1, 5.0f);
							bLocal_178++;
						}
						if (Function_220(&iLocal_357))
						{
							bLocal_209 = Function_178(&iLocal_357);
							if (Function_126(462) < 0.0f)
							{
								if (bLocal_209 > Function_126(462))
								{
									Function_125(462, bLocal_209, 0);
								}
							}
							else
							{
								Function_125(462, bLocal_209, 0);
							}
						}
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
						iLocal_221 = 1;
						if (!Function_220(&iLocal_365))
						{
							Function_219(&iLocal_365);
						}
						uLocal_127 = Function_32(&uLocal_115, 0, 1, 1, 0);
						DECOR_SET_BOOL(&Global_54076, "RemoveExtraBlips", true);
						iLocal_254 = 23;
					}
				}
				break;
			
			case 0x00000017:
				if (Function_220(&iLocal_365))
				{
					if (Function_178(&iLocal_365) <= 2.0f)
					{
						Function_189(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0x3f800000, 0);
						UI_PUSH("CutsceneWithMessages");
						Function_31(&uLocal_127, 0);
						if (IS_ACTOR_VALID(&bLocal_163))
						{
							uLocal_169 = GET_ACTORS_HORSE(&bLocal_163);
						}
						if (IS_ACTOR_VALID(&uLocal_169))
						{
							DESTROY_ACTOR(&uLocal_169);
						}
						iVar28 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PIK_AA_Layout"), "aHorsey1");
						iVar29 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PIK_AA_Layout"), "aHorsey2");
						if (IS_ACTOR_VALID(&iVar28))
						{
							if (GET_MOUNT(&Global_54076) == &iVar28)
							{
								RELEASE_ACTOR(&iVar28);
							}
							else
							{
								DESTROY_ACTOR(&iVar28);
							}
						}
						if (IS_ACTOR_VALID(&iVar29))
						{
							if (GET_MOUNT(&Global_54076) == &iVar29)
							{
								RELEASE_ACTOR(&iVar29);
							}
							else
							{
								DESTROY_ACTOR(&iVar29);
							}
						}
						if (SQUAD_IS_VALID(&uLocal_129))
						{
							Function_29(&uLocal_129, 0, 0);
							DESTROY_OBJECT(&uLocal_129);
						}
						if (IS_ACTOR_VALID(&bLocal_163))
						{
							DESTROY_ACTOR(&bLocal_163);
							iLocal_250 = 1;
						}
						if (SQUAD_IS_VALID(&bLocal_159))
						{
							Function_149(&bLocal_159);
							iLocal_252 = 1;
						}
						if (IS_ACTOR_VALID(&(uLocal_165[0])))
						{
							DESTROY_ACTOR(&(uLocal_165[0]));
						}
						Function_218(&iLocal_365);
						iLocal_254 = 24;
					}
				}
				break;
			
			case 0x00000018:
				if (!iLocal_251)
				{
					if (Function_220(&iLocal_365))
					{
						if (Function_178(&iLocal_365) <= 1,5f)
						{
							PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
							iLocal_251 = 1;
						}
					}
				}
				if (!iLocal_243)
				{
					if (Function_220(&iLocal_365))
					{
						if (Function_178(&iLocal_365) <= 7.0f)
						{
							Function_173(2, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1);
							UI_POP("CutsceneWithMessages");
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_206(Global_46950, 0);
							Function_145(200, 1, 0);
							Function_132(50, 1, 0);
							Function_130(Function_131(1, 1, 1, 0, 0), 1, 1);
							if (!Function_129())
							{
								Function_127(9, 0, 1);
							}
							else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
							{
								Function_127(9, 0, 1);
							}
							SET_WEAPONENUM_LOCKED(15, 0);
							GIVE_WEAPON_TO_ACTOR(&Global_54076, 15, false, 1, 1);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_95(Global_46950);
							Function_37(Global_46950, 1, 1, 0);
							SET_PLAYER_ENDLESS_READYMODE(0, 0);
							if ((Function_36(Global_46952) <= 1 && Function_36(Global_46948) <= 1) && Function_36(Global_46950) <= 1)
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
								{
									AWARD_ACHIEVEMENT(12);
								}
							}
							iLocal_243 = 1;
						}
					}
				}
				if (Function_220(&iLocal_365))
				{
					if (Function_178(&iLocal_365) <= 10.0f)
					{
						iLocal_254 = 37;
						DECOR_SET_BOOL(&Global_54076, "EndMission", true);
					}
				}
				break;
			
			case 0x00000016:
				SQUAD_COMPUTE_CENTROID(&bLocal_159, &Local_182);
				SET_OBJECT_POSITION(&uLocal_119, Local_182);
				if (DECOR_CHECK_EXIST(&Global_54076, "EndMission"))
				{
					if (!iLocal_220)
					{
						if (Function_245(&bLocal_163, &Global_54076) >= 10.0f)
						{
							Function_28();
							iLocal_220 = 1;
						}
					}
				}
				break;
			
			case 0x0000001A:
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_163)))
				{
					ADD_BLIP_FOR_ACTOR(&bLocal_163, 325, 0, 2, 0);
				}
				if (!IS_PLAYER_CONTROLLABLE(0))
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
				TASK_CLEAR(&Global_54076);
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_157) >= 0)
				{
					Function_27();
					AI_STOP_IGNORING_ACTOR(&bLocal_163);
					Function_170();
					Function_219(&iLocal_333);
					Function_218(&iLocal_333);
					iLocal_254 = 27;
				}
				else
				{
					Function_27();
					Function_189(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0x3f800000, 0);
					UI_PUSH("CutsceneWithMessages");
					Function_21(&uLocal_115, 0, 1, 0, 0);
					Function_219(&iLocal_345);
					Function_218(&iLocal_345);
					SET_OBJECT_POSITION(&Global_54076, Local_197);
					SET_OBJECT_ORIENTATION(&Global_54076, Local_200);
					SET_OBJECT_POSITION(&bLocal_163, Local_203);
					SET_OBJECT_ORIENTATION(&bLocal_163, Local_206);
					Function_183(&Global_54076, 0);
					Function_183(&bLocal_163, 0);
					TASK_CLEAR(&Global_54076);
					TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					TASK_CLEAR(&bLocal_163);
					TASK_STAND_STILL(&bLocal_163, -1.0f, 0, 0);
					Function_155();
					iLocal_254 = 33;
				}
				break;
			
			case 0x0000001B:
				if (Function_178(&iLocal_333) < 4.0f)
				{
					if (!iLocal_213)
					{
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_163, 0);
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_163);
						TASK_CLEAR(&bLocal_163);
						ACTOR_END_FORCE_HOLSTER(&bLocal_163);
						iLocal_224 = 1;
						bVar30 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 304, 5.0f, 4, 0, 1);
						TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 312, 5.0f, 4, 0, 1);
						TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 320, 5.0f, 4, 0, 1);
						TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 328, 5.0f, 4, 0, 1);
						TASK_GO_NEAR_OBJECT(0, &iLocal_0 + 336, 5.0f, 4, 0, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_163, bVar30);
						TASK_SEQUENCE_RELEASE(bVar30, 1);
						Function_207("PIK_Obj_ClearBasin", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("PB_JournalID"), "PIK_Obj_ClearBasin", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						if (!Function_151(Function_181("PIK_MainSquad", FIND_NAMED_LAYOUT("PIK_AA_Layout")), 1))
						{
							Function_150(Function_181("PIK_MainSquad", FIND_NAMED_LAYOUT("PIK_AA_Layout")), 322, 4294967295, -1.0f, -1.0f, 0x3f800000, 2048, 0);
						}
						iLocal_213 = 1;
						iLocal_254 = 28;
					}
				}
				break;
			
			case 0x0000001C:
				if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_blipMainCampSquad")))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_157) >= 0)
					{
						if (IS_ACTOR_VALID(&bLocal_163))
						{
							if (IS_ACTOR_ALIVE(&bLocal_163))
							{
								TASK_CLEAR(&bLocal_163);
								TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_163, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "cover_low4")), -1.0f, 0.0f);
								Function_17();
								iLocal_254 = 29;
							}
						}
					}
				}
				break;
			
			case 0x0000001D:
				if (SQUAD_IS_VALID(&uLocal_157))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_157) < 0)
					{
						if (!Function_220(&iLocal_353))
						{
							Function_219(&iLocal_353);
						}
					}
				}
				if (Function_220(&iLocal_353))
				{
					if (Function_178(&iLocal_353) <= 2.0f)
					{
						iLocal_224 = 1;
						Function_189(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0x3f800000, 0);
						UI_PUSH("CutsceneWithMessages");
						Function_219(&iLocal_337);
						Function_218(&iLocal_337);
						Function_160(&uLocal_115, 0, 1, 0, 0);
						uLocal_171 = Function_158("pikesBasin", "placement03", 1);
						uLocal_173 = Function_158("pikesBasin", "placement03", 2);
						iLocal_230 = 1;
						if (IS_DOOR_VALID(&uLocal_171))
						{
							Function_157(&uLocal_171, 1);
							OPEN_DOOR_DIRECTION(&uLocal_171, 1);
						}
						else
						{
							LOG_ERROR("GateDoor01 is not valid");
						}
						if (IS_DOOR_VALID(&uLocal_173))
						{
							Function_157(&uLocal_173, 1);
							OPEN_DOOR_DIRECTION(&uLocal_173, 0);
						}
						else
						{
							LOG_ERROR("GateDoor02 is not valid");
						}
						ACTOR_START_FORCE_HOLSTER(&bLocal_163, 0, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_163, 1);
						if (IS_ACTOR_RIDING(&Global_54076))
						{
							ACTOR_DISMOUNT_NOW(&Global_54076);
						}
						if (IS_ACTOR_RIDING(&bLocal_163))
						{
							ACTOR_DISMOUNT_NOW(&bLocal_163);
						}
						Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarston"));
						SET_OBJECT_POSITION(&Global_54076, Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarston")));
						Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarston"));
						SET_OBJECT_ORIENTATION(&Global_54076, Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarston")));
						Function_183(&Global_54076, 0);
						TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
						Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancher"));
						SET_OBJECT_POSITION(&bLocal_163, Function_212(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancher")));
						Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancher"));
						SET_OBJECT_ORIENTATION(&bLocal_163, Function_211(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportRancher")));
						Function_183(&bLocal_163, 0);
						TASK_STAND_STILL(&bLocal_163, -1.0f, 0, 0);
						AI_GOAL_LOOK_AT_ACTOR(&bLocal_163, &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
						AI_GOAL_LOOK_AT_ACTOR(&Global_54076, &bLocal_163, 0, 1065353216, 3212836864, 3212836864, 0);
						TASK_CLEAR(&Global_54076);
						TASK_CLEAR(&bLocal_163);
						TASK_FACE_ACTOR(&Global_54076, &bLocal_163, 1, 3212836864);
						TASK_FACE_ACTOR(&bLocal_163, &Global_54076, 1, 3212836864);
						if (IS_ACTOR_VALID(&bLocal_163))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_163)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bLocal_163));
							}
						}
						iLocal_254 = 30;
					}
				}
				break;
			
			case 0x0000001E:
				if (Function_220(&iLocal_337))
				{
					if (Function_178(&iLocal_337) < 2.0f)
					{
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_163, 0);
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
						SET_ANIM_SET_FOR_ACTOR(&bLocal_163, "stand_shakehands", 0);
						SET_LINKED_ANIM_TARGET(&bLocal_163, &Global_54076);
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_163, "stand_shakehands");
						iLocal_254 = 31;
					}
				}
				break;
			
			case 0x0000001F:
				if (Function_220(&iLocal_337))
				{
					if (Function_178(&iLocal_337) < 3.0f)
					{
						Function_155();
						SET_CAMERA_POSITION(StackVal, GET_GAME_CAMERA(), Vector(-1175,483f, 76,805f, 2372,638f));
						SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, -318,313f, 0.0f), 0);
						iLocal_254 = 32;
					}
				}
				break;
			
			case 0x00000020:
				if (!iLocal_247)
				{
					if (Function_220(&iLocal_337))
					{
						if (Function_178(&iLocal_337) < 11.0f)
						{
							if (IS_ACTOR_VALID(&bLocal_163))
							{
								DESTROY_ACTOR(&bLocal_163);
								iLocal_250 = 1;
							}
							if (SQUAD_IS_VALID(&bLocal_159))
							{
								Function_149(&bLocal_159);
								iLocal_252 = 1;
							}
							PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
							iLocal_247 = 1;
						}
					}
				}
				if (Function_220(&iLocal_337))
				{
					if (Function_178(&iLocal_337) < 16.0f)
					{
						if (!iLocal_218)
						{
							Function_173(2, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1);
							UI_POP("CutsceneWithMessages");
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_145(200, 1, 0);
							Function_132(50, 1, 0);
							Function_130(Function_131(1, 1, 1, 0, 0), 1, 1);
							if (!Function_129())
							{
								Function_127(9, 0, 1);
							}
							else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
							{
								Function_127(9, 0, 1);
							}
							SET_WEAPONENUM_LOCKED(15, 0);
							GIVE_WEAPON_TO_ACTOR(&Global_54076, 15, false, 1, 1);
							Function_206(Global_46950, 0);
							if (Function_220(&iLocal_357))
							{
								bLocal_209 = Function_178(&iLocal_357);
								if (Function_126(462) < 0.0f)
								{
									if (bLocal_209 > Function_126(462))
									{
										Function_125(462, bLocal_209, 0);
									}
								}
								else
								{
									Function_125(462, bLocal_209, 0);
								}
							}
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_95(Global_46950);
							Function_37(Global_46950, 1, 1, 0);
							SET_PLAYER_ENDLESS_READYMODE(0, 0);
							if ((Function_36(Global_46952) <= 1 && Function_36(Global_46948) <= 1) && Function_36(Global_46950) <= 1)
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
								{
									AWARD_ACHIEVEMENT(12);
								}
							}
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
							DECOR_SET_BOOL(&Global_54076, "RemoveExtraBlips", true);
							iLocal_218 = 1;
						}
					}
				}
				if (Function_220(&iLocal_337))
				{
					if (Function_178(&iLocal_337) < 19.0f)
					{
						iLocal_254 = 37;
						DECOR_SET_BOOL(&Global_54076, "EndMission", true);
					}
				}
				break;
			
			case 0x00000021:
				if (Function_220(&iLocal_345))
				{
					if (Function_178(&iLocal_345) <= 1.0f)
					{
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_163, 0);
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
						SET_ANIM_SET_FOR_ACTOR(&bLocal_163, "stand_shakehands", 0);
						SET_LINKED_ANIM_TARGET(&bLocal_163, &Global_54076);
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_163, "stand_shakehands");
						iLocal_254 = 34;
					}
				}
				break;
			
			case 0x00000022:
				if (!iLocal_245)
				{
					if (Function_220(&iLocal_345))
					{
						if (Function_178(&iLocal_345) <= 8.0f)
						{
							if (!DECOR_CHECK_EXIST(&Global_54076, "TriggerSpecialCase"))
							{
								if (IS_ACTOR_VALID(&bLocal_163))
								{
									if (IS_ACTOR_VALID(&bLocal_163))
									{
										DESTROY_ACTOR(&bLocal_163);
										iLocal_250 = 1;
									}
									PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
									iLocal_245 = 1;
								}
							}
						}
					}
				}
				if (!iLocal_246)
				{
					if (Function_220(&iLocal_345))
					{
						if (Function_178(&iLocal_345) <= 15.0f)
						{
							Function_173(2, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1);
							UI_POP("CutsceneWithMessages");
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							DECOR_SET_BOOL(&Global_54076, "TriggerSpecialCase", true);
							Function_145(200, 1, 0);
							Function_132(50, 1, 0);
							Function_130(Function_131(1, 1, 1, 0, 0), 1, 1);
							if (!Function_129())
							{
								Function_127(9, 0, 1);
							}
							else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
							{
								Function_127(9, 0, 1);
							}
							SET_WEAPONENUM_LOCKED(15, 0);
							GIVE_WEAPON_TO_ACTOR(&Global_54076, 15, false, 1, 1);
							Function_206(Global_46950, 0);
							if (Function_220(&iLocal_357))
							{
								bLocal_209 = Function_178(&iLocal_357);
								if (Function_126(462) < 0.0f)
								{
									if (bLocal_209 > Function_126(462))
									{
										Function_125(462, bLocal_209, 0);
									}
								}
								else
								{
									Function_125(462, bLocal_209, 0);
								}
							}
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_95(Global_46950);
							Function_37(Global_46950, 1, 1, 0);
							SET_PLAYER_ENDLESS_READYMODE(0, 0);
							if ((Function_36(Global_46952) <= 1 && Function_36(Global_46948) <= 1) && Function_36(Global_46950) <= 1)
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
								{
									AWARD_ACHIEVEMENT(12);
								}
							}
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
							DECOR_SET_BOOL(&Global_54076, "RemoveExtraBlips", true);
							iLocal_246 = 1;
						}
					}
				}
				if (Function_220(&iLocal_345))
				{
					if (Function_178(&iLocal_345) <= 19.0f)
					{
						iLocal_254 = 37;
						DECOR_SET_BOOL(&Global_54076, "EndMission", true);
					}
				}
				break;
			
			case 0x00000024:
				if (!iLocal_214)
				{
					TASK_CLEAR(&bLocal_163);
					SQUAD_GOALS_CLEAR(&uLocal_129);
					SQUAD_GOAL_ADD_BATTLE_ALLIES(&uLocal_129, 0, &Global_54076, 4294967295);
					iLocal_214 = 1;
				}
				break;
			
			case 0x00000009:
				if (!iLocal_223)
				{
					Function_177();
					Function_176();
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_117)))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_117));
					}
					DESTROY_OBJECT(&uLocal_117);
					SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, -92,772f, 0.0f), 0);
					iLocal_223 = 1;
				}
				if (!iLocal_238)
				{
					if (Function_178(&iLocal_329) < 9.0f)
					{
						AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
						AI_CLEAR_DONT_HARM_ACTOR(&bLocal_163);
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_163)))
						{
							ADD_BLIP_FOR_ACTOR(&bLocal_163, 325, 0, 2, 0);
						}
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_163, 0);
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_163);
						TASK_CLEAR(&bLocal_163);
						SQUAD_GOALS_CLEAR(&uLocal_129);
						SQUAD_GOAL_ADD_BATTLE_ALLIES(&uLocal_129, 0, &Global_54076, 4294967295);
						Function_173(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
						AI_STOP_IGNORING_ACTOR(&bLocal_163);
						if (!IS_PLAYER_CONTROLLABLE(0))
						{
							SET_PLAYER_CONTROL(0, 1, 0, 0);
						}
						TASK_CLEAR(&Global_54076);
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_207("PIK_Obj_PutDown", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iLocal_238 = 1;
					}
				}
				if (!iLocal_239)
				{
					if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[7])) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[6])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[5])) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(bLocal_131[4])) != 0)
					{
						if (Function_220(&iLocal_357))
						{
							bLocal_209 = Function_178(&iLocal_357);
							if (Function_126(462) < 0.0f)
							{
								if (bLocal_209 > Function_126(462))
								{
									Function_125(462, bLocal_209, 0);
								}
							}
							else
							{
								Function_125(462, bLocal_209, 0);
							}
						}
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
						DECOR_SET_BOOL(&Global_54076, "RemoveExtraBlips", true);
						iLocal_239 = 1;
						if (!Function_220(&iLocal_365))
						{
							Function_219(&iLocal_365);
						}
						uLocal_127 = Function_32(&uLocal_115, 0, 1, 1, 0);
						iLocal_254 = 23;
					}
				}
				break;
			
			case 0x00000025:
				if (!iLocal_236)
				{
					if (Function_205(Global_46950) == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_FLEEING", true, false, 2, 0, true, false);
						}
					}
					SET_PLAYER_ENDLESS_READYMODE(0, 0);
					Function_13(&iLocal_255);
					if (!IS_PLAYER_CONTROLLABLE(0))
					{
						SET_PLAYER_CONTROL(0, 1, 0, 0);
					}
					TASK_CLEAR(&Global_54076);
					if (DECOR_CHECK_EXIST(&Global_54076, "TriggerSpecialCase"))
					{
						DECOR_REMOVE(&Global_54076, "TriggerSpecialCase");
					}
					if (DECOR_CHECK_EXIST(&Global_54076, "CleanupHerding"))
					{
						DECOR_REMOVE(&Global_54076, "CleanupHerding");
					}
					if (DECOR_CHECK_EXIST(&Global_54076, "EndMission"))
					{
						DECOR_REMOVE(&Global_54076, "EndMission");
					}
					if (DECOR_CHECK_EXIST(&Global_54076, "shakehands_noCam"))
					{
						DECOR_REMOVE(&Global_54076, "shakehands_noCam");
					}
					if (IS_ACTOR_VALID(&bLocal_163))
					{
						RELEASE_ACTOR(&bLocal_163);
					}
					if (SQUAD_IS_VALID(&uLocal_129))
					{
						Function_29(&uLocal_129, 0, 0);
						DESTROY_OBJECT(&uLocal_129);
					}
					if (IS_LAYOUTREF_VALID(&uLocal_115))
					{
						RELEASE_LAYOUT_OBJECTS(&uLocal_115);
						RELEASE_LAYOUT_REF(&uLocal_115);
					}
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					iLocal_254 = 0;
					iLocal_236 = 1;
				}
				break;
		}
		WAIT(false);
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_13(&iLocal_255);
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	TASK_CLEAR(&Global_54076);
	if (DECOR_CHECK_EXIST(&Global_54076, "shakehands_noCam"))
	{
		DECOR_REMOVE(&Global_54076, "shakehands_noCam");
	}
	if (Function_205(Global_46950) == 2)
	{
		Function_2(Global_46950);
	}
	if (IS_ACTOR_VALID(&bLocal_163))
	{
		RELEASE_ACTOR(&bLocal_163);
	}
	if (SQUAD_IS_VALID(&uLocal_129))
	{
		Function_29(&uLocal_129, 0, 0);
		DESTROY_OBJECT(&uLocal_129);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_115))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_115);
		RELEASE_LAYOUT_REF(&uLocal_115);
	}
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	CLEAR_PRINTED_OBJECTIVE();
	Function_1();
	if (IS_LAYOUTREF_VALID(&uLocal_115))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_115);
		RELEASE_LAYOUT_REF(&uLocal_115);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3512 / 13586
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_2(bool bParam0) //Position: 0x351E / 13598
{
	int iVar0;
	
	if (!Function_11(bParam0))
	{
		Function_9();
		return;
	}
	iVar0 = Function_8(bParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_3("DEED_CANCEL", bParam0);
	}
	Global_21684[bParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_3(bool bParam0, bool bParam1) //Position: 0x3571 / 13681
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
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, &Var0, Function_8(bParam1), Function_6(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "PROCEDURAL", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "LOCATION", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "MINIGAME", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "ACTIONAREA_EVENT", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "JOB", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_4(int iParam0) //Position: 0x369B / 13979
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

bool Function_5() //Position: 0x36D5 / 14037
{
	if (Function_243(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_6(bool bParam0) //Position: 0x36F0 / 14064
{
	if (!Function_7(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_7(int iParam0) //Position: 0x3710 / 14096
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_8(bool bParam0) //Position: 0x3727 / 14119
{
	if (!Function_7(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_9() //Position: 0x3742 / 14146
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
			Function_10(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_10(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3989 / 14729
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_11(int iParam0) //Position: 0x39B5 / 14773
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

bool Function_12(int iParam0) //Position: 0x39D9 / 14809
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_13(int iParam0) //Position: 0x39EE / 14830
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_14(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_14(struct<2>[] Param0, int iParam1) //Position: 0x3A16 / 14870
{
	if (Function_16(&(Param0[iParam12]), 4))
	{
		if (Function_16(&(Param0[iParam12]), 1))
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
			Function_15(&(Param0[iParam12]), 1);
			Function_15(&(Param0[iParam12]), 2);
			Function_15(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_15(struct<13> Param0) //Position: 0x3B61 / 15201
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_16(struct<13> Param0) //Position: 0x3B7E / 15230
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17() //Position: 0x3B9C / 15260
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_BasinEarly", "Pikes_BasinEarly", false, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_18(int iParam0) //Position: 0x3BE5 / 15333
{
	Function_19(0, &Global_54076, iParam0, 0);
	Function_19(1, &bLocal_163, iParam0, 0);
	return;
}

void Function_19(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x3C00 / 15360
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_243(uParam2, Function_20(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &bParam1, 0);
	}
}

int Function_20(bool bParam0) //Position: 0x3C28 / 15400
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_21(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3C34 / 15412
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_194(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "PK_SpecialCase_Ending", 4, 1);
	}
	Function_22(&uVar0);
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

void Function_22(int iParam0) //Position: 0x3CC3 / 15555
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_26(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_25(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_24(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_23(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 5.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 2, 3, 9,5f, 2, 0);
	return;
}

void Function_23(int iParam0) //Position: 0x3D3E / 15678
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1567,24f, 69,14285f, 2447,577f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,041901f, -1,958359f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_24(int iParam0) //Position: 0x3DB3 / 15795
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1565,941f, 69,13454f, 2444,802f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,023458f, -2,153817f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_25(int iParam0) //Position: 0x3E28 / 15912
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,05698f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1505,617f, 60,36197f, 2461,962f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,062034f, -1,05324f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_26(var uParam0) //Position: 0x3E9D / 16029
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 41,57376f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-1503,57f, 60,49177f, 2464,368f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,241011f, -0,886658f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_27() //Position: 0x3F12 / 16146
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_28() //Position: 0x3F27 / 16167
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_CanyonExit", "Pikes_CanyonExit", false, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_29(var uParam0, bool bParam1, bool bParam2) //Position: 0x3F70 / 16240
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_30(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&uVar1);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&uVar1);
				}
				else
				{
					RELEASE_ACTOR(&uVar1);
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

bool Function_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x3FF9 / 16377
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_31(var uParam0, bool bParam1) //Position: 0x401B / 16411
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

var Function_32(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x4031 / 16433
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_194(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "PIK_Vista01", 2, 1);
	}
	Function_33(&uVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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

void Function_33(int iParam0) //Position: 0x40B6 / 16566
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_35(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_34(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7.0f, 0, 0);
	return;
}

void Function_34(int iParam0) //Position: 0x40F1 / 16625
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 57,75359f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1298,358f, 89,32796f, 2378,287f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,085643f, -1,275337f, -0,000837f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_35(int iParam0) //Position: 0x416A / 16746
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 57,75359f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1298,552f, 90,06156f, 2378,257f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,042042f, -1,742399f, -0,000834f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

int Function_36(bool bParam0) //Position: 0x41E3 / 16867
{
	if (!Function_7(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x41FD / 16893
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
		Global_21684[bParam07].f_12++;
		if (Function_129())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_6(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_94(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_93(Global_10966) };
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
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_3("DEED_COMPLETE", bParam0);
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
			Function_80(bParam0);
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
			Function_40(1);
			Function_39(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_38(bParam0, &Var14);
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

void Function_38(int iParam0, struct<41> Param1) //Position: 0x445B / 17499
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x4499 / 17561
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

void Function_40(bool bParam0) //Position: 0x44D8 / 17624
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_70();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_42();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_41(&Global_99144, 1);
		Function_41(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_41(int iParam0, int iParam1) //Position: 0x452D / 17709
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_42() //Position: 0x4543 / 17731
{
	Function_68();
	Function_67();
	Function_67();
	Function_66();
	Function_66();
	Function_65();
	Function_65();
	Function_50(0);
	Function_50(0);
	Function_47();
	Function_46();
	Function_45();
	Function_44();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_43();
	return;
}

void Function_43() //Position: 0x458E / 17806
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

void Function_44() //Position: 0x4694 / 18068
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

void Function_45() //Position: 0x46C7 / 18119
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

void Function_46() //Position: 0x485A / 18522
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

void Function_47() //Position: 0x4A13 / 18963
{
	Function_48(&Global_42918, 1, 0);
	return;
}

void Function_48(struct<2317> Param0) //Position: 0x4A21 / 18977
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
	
	uVar0 = Function_49();
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

var Function_49() //Position: 0x4C3E / 19518
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50(int iParam0) //Position: 0x4C53 / 19539
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
					iVar2 = ((Function_64((50 + iVar4)) + Function_64((183 + iVar4))) + Function_64((90 + iVar4)));
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
	Function_51(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x4CFA / 19706
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
		Function_63(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_62(iParam0);
	if (&bParam2)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x4F96 / 20374
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_61(390))), 32);
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
						Function_59(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_56(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_53(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_194(), &Var9);
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

var Function_53(int iParam0) //Position: 0x55D4 / 21972
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_54(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x55E5 / 21989
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_55(char* cParam0) //Position: 0x56DC / 22236
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_56(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x56F7 / 22263
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_58(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_57(Function_58(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_57(int iParam0, int iParam1) //Position: 0x575E / 22366
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_58(int iParam0, bool bParam1) //Position: 0x5770 / 22384
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_59(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5782 / 22402
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_60(int iParam0) //Position: 0x58B6 / 22710
{
	return Global_55480[iParam016].f_96;
}

var Function_61(int iParam0) //Position: 0x58C5 / 22725
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_62(int iParam0) //Position: 0x5902 / 22786
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

int Function_63(int iParam0, bool bParam1, bool bParam2) //Position: 0x5A9C / 23196
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

int Function_64(bool bParam0) //Position: 0x5CE0 / 23776
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_65() //Position: 0x5D21 / 23841
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

struct<8> Function_66() //Position: 0x5DAA / 23978
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

struct<8> Function_67() //Position: 0x5E41 / 24129
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

void Function_68() //Position: 0x5EC0 / 24256
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_69(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_69(int iParam0, bool bParam1, int iParam2) //Position: 0x5EFD / 24317
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
	Function_63(iParam0, bParam1, 1);
	Function_62(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_52(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_70() //Position: 0x6109 / 24841
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_5())
	{
		Function_77(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_77(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_72(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_72(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_71(StackVal, Var0))
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

bool Function_71(char* cParam0) //Position: 0x61C0 / 25024
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_72(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x61D8 / 25048
{
	int iVar0;
	
	iVar0 = Function_75(&uParam2, &fParam3);
	if (Function_74(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_242(&Global_99144, 1);
			Function_41(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_242(&Global_99144, 2);
			Function_41(&Global_99144, 1);
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
		Function_242(&Global_99144, 2);
		Function_41(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_73();
	return StackVal, Function_73();
}

struct<8> Function_73() //Position: 0x62D0 / 25296
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_74(int iParam0) //Position: 0x62DA / 25306
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_75(bool bParam0, bool bParam1) //Position: 0x62F0 / 25328
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
				fVar2 = Function_76(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_76(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_74(iVar0) && !&bParam1)
	{
		iVar0 = Function_75(&bParam0, 1);
	}
	return iVar0;
}

float Function_76(struct<2> Param0, struct<2> Param2) //Position: 0x63BC / 25532
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_77(float fParam0, int iParam1) //Position: 0x63D9 / 25561
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_79(&Global_54076, &Var3);
	if (!Function_78(Global_46760[0]))
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
	if (!Function_78(Global_46760[2]))
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
	if (!Function_78(Global_46760[1]))
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
	if (!Function_78(Global_46796[1]))
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
	if (!Function_78(Global_46796[3]))
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
	if (!Function_78(Global_46796[2]))
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
	if (!Function_78(Global_46796[4]))
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
	if (!Function_78(Global_46816[0]))
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
	if (!Function_78(Global_46816[1]))
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
	if (!Function_78(Global_46816[2]))
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
	if (!Function_78(Global_46838[0]))
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
	if (!Function_78(Global_46850[0]))
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
	if (!Function_78(Global_46850[1]))
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
	if (!Function_78(Global_46850[2]))
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
	if (!Function_78(Global_46866[0]))
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
	if (!Function_78(Global_46866[1]))
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
	if (!Function_78(Global_46866[2]))
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
	if (!Function_78(Global_46894[2]))
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
	if (!Function_78(Global_46894[3]))
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
	if (!Function_78(Global_46894[0]))
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
	if (!Function_78(Global_46914[0]))
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
	if (!Function_78(Global_46926[2]))
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
	if (!Function_78(Global_46926[1]))
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
	if (!Function_78(Global_46926[0]))
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
	if (!Function_78(Global_46838[1]))
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
	if (!Function_78(Global_46894[1]))
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
	Function_242(&Global_99144, 2);
	Function_41(&Global_99144, 1);
	iParam1 = 0;
	if (Function_71(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_78(int iParam0) //Position: 0x6C05 / 27653
{
	int iVar0;
	
	iVar0 = Global_43791[iParam0];
	return (((Function_243(iVar0, 0x1000000) || Function_243(iVar0, 0x2000000)) || Function_243(iVar0, 0x4000000)) || !Function_243(iVar0, 0x10000000));
}

void Function_79(var uParam0, int iParam1) //Position: 0x6C40 / 27712
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_80(bool bParam0) //Position: 0x6C4F / 27727
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
				Function_84(12, 1, 0, 0);
				Function_83(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_84(13, 1, 0, 0);
				Function_83(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_84(14, 1, 0, 0);
				Function_83(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_84(15, 1, 0, 0);
				Function_83(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_84(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_6(bParam0))
			{
				case 0x00000000:
					if (Function_36(bParam0) == 1)
					{
						iVar0 = Function_82(bParam0);
						if (Function_81(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_83(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_83(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_83(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_83(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_83(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_83(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_83(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_83(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_83(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_83(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_83(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_83(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_83(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_83(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_83(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_83(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_83(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_83(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_83(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_83(4, 19);
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
								Function_84(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_84(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_84(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_82(bParam0) == 0)
			{
				if (Function_36(bParam0) == 1)
				{
					Function_84(458, 1, 0, 0);
					iVar0 = Function_6(bParam0);
					if (Function_81(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_83(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_83(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_83(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_83(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_83(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_83(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_83(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_83(2, 17);
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
				Function_84(400, 1, 0, 0);
			}
			switch (Function_6(bParam0))
			{
				case 0x00000001:
					Function_84(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_83(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_83(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_83(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_84(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_83(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_83(6, 9);
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

bool Function_81(int iParam0) //Position: 0x712B / 28971
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x7141 / 28993
{
	if (!Function_7(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

void Function_83(int iParam0, int iParam1) //Position: 0x7160 / 29024
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

int Function_84(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x71CA / 29130
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
	Function_63(iParam0, TO_FLOAT(bParam1), 1);
	Function_62(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_85(iParam0);
	return 1;
}

void Function_85(int iParam0) //Position: 0x73F2 / 29682
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

void Function_86() //Position: 0x7490 / 29840
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
	PLAYSTAT_INT("HC_MONEY", Function_64(0));
	PLAYSTAT_INT("HC_FAME", Function_64(3));
	PLAYSTAT_INT("HC_HONOR", Function_64(1));
	return;
}

void Function_87() //Position: 0x75F2 / 30194
{
	int iVar0;
	int iVar1;
	
	if (!Function_92(Global_10966))
	{
		return;
	}
	iVar0 = Function_64(24);
	iVar1 = Function_91(Global_10966);
	if (!Function_92(iVar0) && Function_90(iVar1) < 0)
	{
		Function_51(24, Global_10966, 0);
		Function_88(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_90(Function_91(iVar0)))
	{
		Function_51(24, Global_10966, 0);
		Function_88(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_88(int iParam0, char* cParam1) //Position: 0x7672 / 30322
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
		Function_89(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_89(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x79C9 / 31177
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

int Function_90(int iParam0) //Position: 0x7A51 / 31313
{
	if (!Function_11(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_91(int iParam0) //Position: 0x7A6B / 31339
{
	if (!Function_92(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_92(int iParam0) //Position: 0x7A85 / 31365
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_93(int iParam0) //Position: 0x7A9B / 31387
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

struct<24> Function_94(char* cParam0) //Position: 0x7ADA / 31450
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

void Function_95(int iParam0) //Position: 0x7D30 / 32048
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Function_6(iParam0) == Global_46760[2])
	{
		if (Function_124(2) && !Function_123(2))
		{
			Function_115(2, 2, 0, 0, 1);
		}
	}
	if (Function_6(iParam0) == Global_46796[3])
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
	uVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(0) - 1), GET_HOUR(false), GET_MINUTE(0), GET_SECOND(0));
	uVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_36(Global_46948);
	if (Global_46948 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_36(Global_46950);
	if (Global_46950 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_36(Global_46952);
	if (Global_46952 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_36(Global_46951);
	if (Global_46951 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_36(Global_46953);
	if (Global_46953 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469507] + 40, &uVar0, &uVar1) && !Global_46950 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469487] + 40, &uVar0, &uVar1) && !Global_46948 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469527] + 40, &uVar0, &uVar1) && !Global_46952 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469517] + 40, &uVar0, &uVar1) && !Global_46951 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469537] + 40, &uVar0, &uVar1) && !Global_46953 != iParam0)
	{
		return;
	}
	Function_83(2, 24);
	Function_96(10, 0, 1);
	return;
}

void Function_96(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7EEE / 32494
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_114(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
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
		Function_84(457, 1, 0, 0);
		Function_99(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_98(0, 0, 1, 1))
			{
				Function_40(1);
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

void Function_97() //Position: 0x8092 / 32914
{
	return;
}

bool Function_98(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8098 / 32920
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

void Function_99(bool bParam0, int iParam1) //Position: 0x8147 / 33095
{
	if (!Function_114(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

void Function_100(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x819C / 33180
{
	char* cVar0[32];
	
	if (!Function_114(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_113(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_124(bParam0))
	{
		Function_84(456, 1, 0, 0);
		Function_99(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_98(0, 0, 1, 1))
			{
				Function_40(1);
				Function_39(1, 5);
			}
			else
			{
				Function_97();
			}
		}
		Function_108(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_107() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_107() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_202(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_5())
		{
			if (!Function_106(Global_119934, 2))
			{
				Function_101(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_101(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x82F8 / 33528
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_103(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_102(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_102(char* cParam0) //Position: 0x836D / 33645
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

bool Function_103(int iParam0, var uParam1, int iParam2) //Position: 0x83A7 / 33703
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
		if (Function_105(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_104(uVar0))
		{
			case 0x00000002:
				if (!Function_106(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_104(char* cParam0) //Position: 0x8423 / 33827
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

int Function_105(int iParam0) //Position: 0x84C4 / 33988
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

bool Function_106(int iParam0, int iParam1) //Position: 0x8501 / 34049
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_107() //Position: 0x8514 / 34068
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_108(bool bParam0) //Position: 0x8541 / 34113
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
			if (Function_112(bParam0, Function_20(bVar24)))
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
			if (Function_112(bParam0, Function_20(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_111(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_110(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_109(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_109(int iParam0) //Position: 0x86F1 / 34545
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

void Function_110(char* cParam0, bool bParam1) //Position: 0x8748 / 34632
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

var Function_111(int iParam0) //Position: 0x876D / 34669
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

bool Function_112(bool bParam0, int iParam1) //Position: 0x87C3 / 34755
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

bool Function_113(int iParam0) //Position: 0x8822 / 34850
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_114(int iParam0) //Position: 0x883E / 34878
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_115(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x8854 / 34900
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_114(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_113(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_122(bParam0, 2))
	{
		Function_84(456, 1, 0, 0);
		Function_99(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_202(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_112(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_99(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_98(0, 0, 1, 1))
			{
				Function_40(1);
				Function_39(1, 0);
			}
			else
			{
				Function_97();
			}
		}
		Function_108(bParam0);
		if (StackVal && !Function_243(((((!Function_107() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_243((((Function_107() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_5())
		{
			if (!Function_106(Global_119934, 2))
			{
				Function_101(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_117();
		}
		Global_42827.f_16 = 1;
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
				Function_83(2, 24);
				break;
			
			case 0x00000003:
				Function_83(2, 25);
				break;
			
			case 0x0000000F:
				Function_83(2, 26);
				break;
			
			case 0x0000000D:
				Function_83(2, 27);
				break;
			
			case 0x0000000E:
				Function_83(2, 28);
				break;
			}
	}
}

void Function_116(int iParam0, bool bParam1) //Position: 0x8AF3 / 35571
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

void Function_117() //Position: 0x8B62 / 35682
{
	if (Function_114(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_121(Global_42827);
			*(&Global_42827 + 8) = Function_118(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_121(Global_42827);
			*(&Global_42827 + 8) = Function_118(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_118(int iParam0, int iParam1) //Position: 0x8BE2 / 35810
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
					if (Function_120(6, 0) || Function_120(12, 0))
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
					if (Function_119(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_120(5, 0))
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
					if (Function_119(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_119(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_119(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_119(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_120(26, 0))
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
					if (Function_119(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_119(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_119(27) && iVar16)
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
					if (Function_119(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_119(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_119(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_119(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_120(17, 0) && iVar13)
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
					if (Function_119(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_120(6, 0) && Function_119(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_119(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_120(9, 0) && Function_119(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_119(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_120(8, 0) && iVar17)
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
	if (Function_71(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_71(StackVal, vVar2))
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
	if (!Function_71(StackVal, vVar2))
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

int Function_119(int iParam0) //Position: 0x9845 / 38981
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_120(int iParam0, bool bParam1) //Position: 0x985A / 39002
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
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_121(int iParam0) //Position: 0x9898 / 39064
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

bool Function_122(int iParam0, int iParam1) //Position: 0x98E7 / 39143
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

bool Function_123(int iParam0) //Position: 0x9914 / 39188
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

bool Function_124(int iParam0) //Position: 0x9965 / 39269
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

int Function_125(int iParam0, bool bParam1, bool bParam2) //Position: 0x99B7 / 39351
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > bParam1)
	{
		Function_63(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_62(iParam0);
	if (&bParam2)
	{
		Function_52(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_126(int iParam0) //Position: 0x9C24 / 39972
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_127(bool bParam0, bool bParam1, int iParam2) //Position: 0x9C5D / 40029
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_128(bParam0), Function_49()) == 0)
		{
			ADD_ITEM(Function_128(bParam0), Function_49(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_128(bParam0), Function_49(), &iParam2);
	return 1;
}

var Function_128(bool bParam0) //Position: 0x9CAB / 40107
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

bool Function_129() //Position: 0x9D9F / 40351
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_130(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9DCA / 40394
{
	bool bVar0;
	
	bVar0 = Function_64(0);
	if ((Function_64(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_84(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_64(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_84(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_64(597) + Function_64(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

bool Function_131(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9E9C / 40604
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
	switch (&iParam1)
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
	if (&bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_64(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_128(17), &Global_54076))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

void Function_132(int iParam0, bool bParam1, bool bParam2) //Position: 0x9FA3 / 40867
{
	int iVar0;
	bool bVar1;
	
	if (Function_144(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_129())
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
	iVar0 = Function_64(3);
	Function_141();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_139(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_106(Global_119936, 4))
			{
				Function_101(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_84(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_126(3));
	iVar0 = Function_64(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_134(4, Function_138(Global_21369.f_248), 1);
				Function_133(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_134(4, Function_138(Global_21369.f_248), 1);
				Function_133(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_134(4, Function_138(Global_21369.f_248), 1);
				Function_133(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_134(4, Function_138(Global_21369.f_248), 1);
				Function_133(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_134(4, Function_138(Global_21369.f_248), 1);
				Function_133(Global_21369.f_244, Global_21369.f_248);
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

void Function_133(int iParam0, int iParam1) //Position: 0xA177 / 41335
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

int Function_134(int iParam0, char* cParam1) //Position: 0xA3E1 / 41953
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
	Function_88(iParam0, &cParam1, 0, 1);
	iVar1 = Function_135();
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

int Function_135() //Position: 0xA571 / 42353
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
	Function_136();
	return 0;
}

void Function_136() //Position: 0xA612 / 42514
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
		Function_137(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_137(int iParam0) //Position: 0xA6D0 / 42704
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

var Function_138(int iParam0) //Position: 0xA736 / 42806
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

int Function_139(int iParam0, bool bParam1) //Position: 0xA7C5 / 42949
{
	bool bVar0;
	int iVar1;
	
	Function_84(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_135();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_140(int iParam0, int iParam1) //Position: 0xA971 / 43377
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

void Function_141() //Position: 0xA9B6 / 43446
{
	Function_143(3, 0.0f);
	Function_142(3, 10000.0f);
	return;
}

int Function_142(int iParam0, int iParam1) //Position: 0xA9CC / 43468
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0xAA0C / 43532
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_144(int iParam0) //Position: 0xAA4C / 43596
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_145(int iParam0, bool bParam1, bool bParam2) //Position: 0xAA5B / 43611
{
	int iVar0;
	bool bVar1;
	
	if (Function_144(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_129())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
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
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_139(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_106(Global_119936, 1))
				{
					Function_101(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_148(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_106(Global_119936, 2))
				{
					Function_101(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_84(1, bVar1, 0, 0);
	}
	else
	{
		Function_147(1, (4294967295 * bVar1), 0);
	}
	if (Function_64(1) <= 4294962296)
	{
		Function_51(1, 4294962296, 0);
	}
	else if (Function_64(1) >= 5000)
	{
		Function_51(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_126(1));
	iVar0 = Function_64(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_134(2, Function_146(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_134(2, Function_146(Global_21369.f_244), 0);
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
				Function_134(2, Function_146(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_134(2, Function_146(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_134(2, Function_146(Global_21369.f_244), 1);
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
				Function_134(2, Function_146(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_134(2, Function_146(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_134(2, Function_146(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_134(2, Function_146(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_134(2, Function_146(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_134(2, Function_146(Global_21369.f_244), 1);
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
				Function_134(2, Function_146(Global_21369.f_244), 0);
			}
			break;
	}
	Function_133(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_146(int iParam0) //Position: 0xAD82 / 44418
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

int Function_147(int iParam0, bool bParam1, int iParam2) //Position: 0xAE25 / 44581
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
	Function_62(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_148(int iParam0, bool bParam1) //Position: 0xB022 / 45090
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
	iVar1 = Function_135();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_149(bool bParam0) //Position: 0xB1CD / 45517
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_150(int iParam0, bool bParam1, int iParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xB218 / 45592
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &fParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &fParam4);
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

bool Function_151(int iParam0, bool bParam1) //Position: 0xB328 / 45864
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
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

int Function_152(bool bParam0, int iParam1) //Position: 0xB384 / 45956
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_153(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) //Position: 0xB3E2 / 46050
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = uParam3;
	if (iParam4 <= 0)
	{
		iParam4 = SQUAD_GET_SIZE(&uParam0);
	}
	iVar0 = 0;
	while (iVar0 < (iParam4 - 1))
	{
		SQUAD_GOAL_ADD_GENERAL_TASK(&uParam0, false, 2, 4294967295);
		TASK_FOLLOW_OBJECT_ALONG_PATH(0, &uParam1, &uParam2, bVar1, iParam5, iParam6);
		iVar0++;
	}
}

void Function_154(var uParam0) //Position: 0xB42E / 46126
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

void Function_155() //Position: 0xB463 / 46179
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_CompletesHerdPort", "Pikes_CompletesHerdPort", false, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_156() //Position: 0xB4BA / 46266
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_HerdSolo", "Pikes_HerdSolo", false, 2, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_157(var uParam0, int iParam1) //Position: 0xB4FF / 46335
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

int Function_158(var uParam0, var uParam1, int iParam2) //Position: 0xB557 / 46423
{
	return Function_159(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_159(int iParam0, char* cParam1, bool bParam3) //Position: 0xB56B / 46443
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_81(iParam0))
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

var Function_160(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xB610 / 46608
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_194(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nPK_Middle", 4, 1);
	}
	Function_161(&uVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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

void Function_161(int iParam0) //Position: 0xB693 / 46739
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_165(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_164(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_163(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_162(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 5.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 2.0f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 2, 3, 8.0f, 3, 0);
	return;
}

void Function_162(int iParam0) //Position: 0xB715 / 46869
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,84526f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1280,881f, 87,68272f, 2363,648f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,089093f, -1,739692f, -0,006892f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_163(int iParam0) //Position: 0xB78E / 46990
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,84526f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1279,81f, 87,73152f, 2361,008f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,0281f, -2,826691f, -0,006868f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_164(int iParam0) //Position: 0xB807 / 47111
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,45719f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1175,014f, 77,5491f, 2370,723f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,031641f, 1,47904f, -0,000101f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_165(int iParam0) //Position: 0xB880 / 47232
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,45719f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1176,4f, 77,85641f, 2366,599f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,142707f, 1,274346f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_166(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xB8F5 / 47349
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_194(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "PK_Middle_NoVista", 2, 1);
	}
	Function_167(&uVar0);
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

void Function_167(int iParam0) //Position: 0xB980 / 47488
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_169(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_168(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 6.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1.0f, 1);
	return;
}

void Function_168(int iParam0) //Position: 0xB9C6 / 47558
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 34,86373f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1174,259f, 77,6797f, 2370,954f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,03202f, 1,433395f, -0,003608f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_169(var uParam0) //Position: 0xBA3F / 47679
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 34,86373f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-1174,919f, 77,72679f, 2368,758f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,046908f, 1,28889f, -0,00361f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_170() //Position: 0xBAB8 / 47800
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_GMInBasin", "Pikes_GMInBasin", false, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_171() //Position: 0xBAFF / 47871
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_BollardInfo", "Pikes_BollardInfo", false, 2, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_172(vector3 vParam0) //Position: 0xBB4A / 47946
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_242(&vParam0, 1);
	Function_41(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_173(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xBB6F / 47983
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
		uVar0 = Function_49();
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
			SET_ACTOR_INVULNERABILITY(&uVar0, false);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_84(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_27();
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
	Function_174(&iParam9, &iParam10);
}

void Function_174(var uParam0, bool bParam1) //Position: 0xBC3E / 48190
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
		Function_175();
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

void Function_175() //Position: 0xBD0D / 48397
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

void Function_176() //Position: 0xBD85 / 48517
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_Introduces", "Pikes_Introduces", false, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_177() //Position: 0xBDCE / 48590
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_ApproachesRancher", "Pikes_ApproachesRancher", false, 1, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_178(vector3 vParam0) //Position: 0xBE25 / 48677
{
	if (Function_220(&vParam0))
	{
		if (Function_179(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_179(bool bParam0) //Position: 0xBEF2 / 48882
{
	return Function_243(bParam0, 2);
}

int Function_180(char* cParam0) //Position: 0xBF00 / 48896
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		if (STRING_LENGTH(&(Global_99485[iVar019])) == 0)
		{
			strcpy(&(Global_99485[iVar019]), &cParam0, 32);
			(&Global_99485[iVar019] + 64) = &uParam1;
			Global_99485[iVar019].f_72 = uParam2;
			Global_99485[iVar019].f_76 = fParam3;
			strcpy(&Global_99485[iVar019] + 84, &cParam4, 32);
			Global_99485[iVar019].f_80 = 1;
			Global_99485[iVar019].f_148 = &iParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_181(bool bParam0, bool bParam1) //Position: 0xBF8D / 49037
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
		if (STRING_CONTAINS_STRING(&uVar4, &bParam0) || Function_182(&bParam0, &uVar4))
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

int Function_182(char* cParam0) //Position: 0xC04B / 49227
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

void Function_183(bool bParam0, bool bParam1) //Position: 0xC078 / 49272
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&bParam0))
	{
		uVar0 = GET_MOUNT(&bParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&bParam0))
	{
		uVar1 = GET_VEHICLE(&bParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_184(&bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&bParam0, 1);
	}
	return;
}

float Function_184(var uParam0, bool bParam1) //Position: 0xC0E2 / 49378
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

var Function_185(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xC103 / 49411
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_194(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "PikesBasin_Intro", 2, 1);
	}
	Function_186(&uVar0);
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

void Function_186(int iParam0) //Position: 0xC18D / 49549
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_188(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_187(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1.0f, 2);
	return;
}

void Function_187(int iParam0) //Position: 0xC1DE / 49630
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37,1796f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1505,695f, 59,87241f, 2463,905f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,022216f, -0,8085555f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_188(float fParam0) //Position: 0xC253 / 49747
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 37,1796f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(-1506,689f, 59,97955f, 2462,957f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(0,058631f, -1,756424f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_189(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xC2C8 / 49864
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
	Function_27();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_49();
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
				TASK_OVERRIDE_SET_POSTURE(&uVar1, false);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, true);
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
				Function_193(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_194(), 2,802597E-45f, Function_193(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_84(19, 1, 0, 0);
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
	if (iParam10 && !Function_5())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_192()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_192()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", true);
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
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_190(int iParam0) //Position: 0xC57A / 50554
{
	int iVar0;
	
	if (Function_243(iParam0, 1) && Function_243(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_191(int iParam0) //Position: 0xC5AE / 50606
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_192() //Position: 0xC5CA / 50634
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

struct<8> Function_193(var uParam0) //Position: 0xC658 / 50776
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

var Function_194() //Position: 0xC66A / 50794
{
	int iVar0;
	
	return &iVar0;
}

void Function_195(bool bParam0) //Position: 0xC673 / 50803
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&bParam0, "voldestroy"))
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
		DESTROY_OBJECT(&bParam0);
	}
	return;
}

bool Function_196(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xC709 / 50953
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
				Function_183(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_184(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
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
				if (Function_184(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_197(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_197(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(false, 1);
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

int Function_197(vector3 vParam0) //Position: 0xC93E / 51518
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_71(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_71(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

int Function_198(int[] iParam0) //Position: 0xC9B4 / 51636
{
	return (((SQUAD_GET_SIZE(&(iParam0[4])) + SQUAD_GET_SIZE(&(iParam0[5]))) + SQUAD_GET_SIZE(&(iParam0[6]))) + SQUAD_GET_SIZE(&(iParam0[7])));
}

float Function_199(int iParam0, var uParam1) //Position: 0xC9E5 / 51685
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_201(&iParam0);
		Var0 = Function_201(&iParam0);
		Function_200(&uParam1);
		Var2 = Function_200(&uParam1);
		return VDIST(Var0, Var2);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_200(int iParam0) //Position: 0xCA63 / 51811
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_201(int iParam0) //Position: 0xCA75 / 51829
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

void Function_202(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xCAE1 / 51937
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_93(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

int Function_203() //Position: 0xCB6C / 52076
{
	return Global_21369.f_248;
}

void Function_204(int iParam0, int iParam1) //Position: 0xCB77 / 52087
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
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_40(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_6(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_94(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_93(Global_10966) };
		}
		iVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(iVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(iVar12);
		APPEND_JOURNAL_ENTRY(iVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

int Function_205(int iParam0) //Position: 0xCC88 / 52360
{
	if (!Function_11(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_206(int iParam0, bool bParam1) //Position: 0xCCA2 / 52386
{
	if (!Function_11(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = bParam1;
	return;
}

void Function_207(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xCCBD / 52413
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
			Var0 = { StackVal, StackVal, StackVal, Function_93(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_208(bool[] bParam0) //Position: 0xCD52 / 52562
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(&(bParam0[7])))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&(bParam0[7])) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(bParam0[7]), bVar0)))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&(bParam0[7]), bVar0), 13, false);
			}
			bVar0++;
		}
	}
	return;
}

int Function_209(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0xCDA6 / 52646
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_210(&uParam0, &uVar1, iParam2, &iParam3, &iParam4, &fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_210(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xCE11 / 52753
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

struct<8> Function_211(bool bParam0) //Position: 0xCF17 / 53015
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

struct<8> Function_212(bool bParam0) //Position: 0xCF40 / 53056
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

void Function_213(var uParam0, bool bParam1) //Position: 0xCF69 / 53097
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&uParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_214(var uParam0, bool bParam1, bool bParam2) //Position: 0xCFBA / 53178
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
			MEMORY_CONSIDER_AS(&uVar1, &bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_215(var uParam0, bool bParam1) //Position: 0xD006 / 53254
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&bParam1))
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
				MEMORY_IDENTIFY(&uVar1, &bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_216(int[] iParam0) //Position: 0xD061 / 53345
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(&(iParam0[7])))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&(iParam0[7])) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[7]), bVar0)))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&(iParam0[7]), bVar0), 13, true);
			}
			bVar0++;
		}
	}
	return;
}

void Function_217(var[] uParam0) //Position: 0xD0B5 / 53429
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PIK_AA_Layout");
	uParam0[0] = Function_181("PIK_canyonSquad1", &iVar0);
	uParam0[1] = Function_181("PIK_canyonSquad2", &iVar0);
	uParam0[2] = Function_181("PIK_canyonSquad3", &iVar0);
	uParam0[3] = Function_181("PIK_canyonSquad4", &iVar0);
	uParam0[4] = Function_181("PIK_canyonSquad5", &iVar0);
	uParam0[5] = Function_181("PIK_canyonSquad6", &iVar0);
	uParam0[6] = Function_181("PIK_canyonSquad7", &iVar0);
	uParam0[7] = Function_181("PIK_canyonSquad8", &iVar0);
	uParam0[8] = Function_181("PIK_canyonSquad9", &iVar0);
	uParam0[9] = Function_181("PIK_canyonSquad10", &iVar0);
	uParam0[10] = Function_181("PIK_canyonSquad11", &iVar0);
	uParam0[11] = Function_181("PIK_canyonSquad12", &iVar0);
	iParam1 = Function_181("PIK_MainSquad", &iVar0);
	return;
}

void Function_218(int iParam0) //Position: 0xD272 / 53874
{
	Function_172(&iParam0, 0.0f);
	return;
}

void Function_219(int iParam0) //Position: 0xD27F / 53887
{
	if (!Function_220(&iParam0))
	{
		Function_172(&iParam0, 0.0f);
	}
	return;
}

bool Function_220(int iParam0) //Position: 0xD296 / 53910
{
	return Function_243(iParam0, 1);
}

bool Function_221(var uParam0, int iParam1) //Position: 0xD2A4 / 53924
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_222(var uParam0, var uParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xD2C1 / 53953
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	Var0 = Vector(-1503,966f, 59,05378f, 2461,444f);
	Var2 = Vector(0.0f, 274,7909f, 0.0f);
	uParam1 = CREATE_ACTOR_IN_LAYOUT(&bParam2, "Pete_The_Herder", 173, Var0, Var2);
	MEMORY_CONSIDER_AS(&uParam1, &Global_54076, false);
	SET_ACTOR_FACTION(&uParam1, 20);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uParam1, 0,1f);
	AI_GOAL_LOOK_AT_ACTOR_NEW(&uParam1, &Global_54076, -1.0f, 0);
	SET_CRIPPLE_ENABLE(&uParam1, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&uParam1, false);
	AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&uParam1, 1);
	SET_FACTIONS_STATUS_TWO_WAY(20, 14, 4);
	uVar4 = GET_MOUNT(&uParam1);
	if (IS_ACTOR_VALID(&uVar4))
	{
		SET_ACTOR_PROOF(&uVar4, 128);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar4, 0,25f);
	}
	TASK_SHOOT_ENEMIES_FROM_COVER(&uParam1, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "introCover")), -1.0f, 0.0f);
	Function_41(&uParam0, 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uParam1, true);
	SET_ACTOR_STAY_WITHIN_VOLUME(&uParam1, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_helperIntro"), 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam1, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam1, 13, true);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&uParam1, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam1, 12, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam1, 13, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam1, 63, 0);
	bParam3 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bParam2, "PIKHelpSquad"));
	SQUAD_JOIN(&uParam1, &bParam3);
	uParam4 = CREATE_GATEWAY_IN_LAYOUT(&bParam2, Function_194(), FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_introGateway"), &Global_54076, 2, 3, 0, 0, 1, 1);
	SET_ACTOR_FACTION(&uParam1, 20);
}

void Function_223(var uParam0, bool bParam1, int iParam2) //Position: 0xD46B / 54379
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	struct<2> Var5;
	var uVar7;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_IN_LAYOUT(&uVar0, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 8);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar1))
	{
		uVar2 = GET_OBJECT_NAME(&uVar1);
		Var3 = Vector(0.0f, 0.0f, 0.0f);
		Var5 = Vector(0.0f, 0.0f, 0.0f);
		GET_OBJECT_POSITION(&uVar1, &Var3);
		GET_OBJECT_ORIENTATION(&uVar1, &Var5);
		if (STRING_CONTAINS_STRING(&uVar2, "cattle"))
		{
			uVar7 = CREATE_ACTOR_IN_LAYOUT(&uParam0, Function_194(), RAND_INT_RANGE(1009, 1011), Var3, Var5);
			SQUAD_JOIN(&uVar7, &bParam1);
			SET_ACTOR_UPDATE_PRIORITY(&uVar7, false);
			SET_ACTOR_HEARING_MAX_RANGE(&uVar7, 0.0f);
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	iParam2 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&bParam1, 0, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_HerdStayInVolume"), 1, 1);
	return;
}

bool Function_224(struct<2>[] Param0) //Position: 0xD54D / 54605
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_228();
	iVar1 = 0;
	if (!Function_16(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_227(&(Param0[iVar02]), 8);
		}
		else if (Function_226())
		{
			iVar1 = 1;
			Function_227(&(Param0[iVar02]), 8);
		}
		Function_227(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_16(&(Param0[iVar02]), 4))
		{
			if (!Function_16(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_16(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_16(&(Param0[02]), 8) || iVar1));
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
				Function_227(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_16(&(Param0[iVar02]), 4))
		{
			if (!Function_16(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_227(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_227(&(Param0[iVar02]), 2);
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
							Function_227(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_227(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_227(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_227(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_227(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_227(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_227(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_227(&(Param0[iVar02]), 2);
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

void Function_225() //Position: 0xD90F / 55567
{
	if (!Function_191(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_226() //Position: 0xD94F / 55631
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

void Function_227(struct<13> Param0) //Position: 0xD97D / 55677
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_228() //Position: 0xD990 / 55696
{
	if (!Function_191(128))
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

struct<8> Function_229() //Position: 0xD9D2 / 55762
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("PikesHerding_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("PikesHerding_layout");
	}
	(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, 4,203895E-45f, 4,203895E-45f, &iLocal_0, "v_FailSafe", 2,802597E-45f, Vector(-1503,332f, 58,53423f, 2465,817f), Vector(0.0f, 0.0f, 0.0f), Vector(15,35839f, 17,74895f, 21,41887f));
	*(&iLocal_0 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_HerdStayOut1", 2,802597E-45f, Vector(-1285,242f, 75,29413f, 2328,794f), Vector(0.0f, 0.0f, 0.0f), Vector(32,01906f, 35,13971f, 56,75269f));
	*(&iLocal_0 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_HerdStayOut2", 2,802597E-45f, Vector(-1255,361f, 75,29413f, 2351,368f), Vector(0.0f, 84,63895f, 0.0f), Vector(32,01906f, 35,13971f, 56,75269f));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_HerdStayOut3", 2,802597E-45f, Vector(-1251,708f, 75,29413f, 2234,44f), Vector(0.0f, 0.0f, 0.0f), Vector(32,01906f, 35,13971f, 56,75269f));
	*(&iLocal_0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_HerdStayOut4", 2,802597E-45f, Vector(-1199,657f, 75,29413f, 2365,212f), Vector(0.0f, 0.0f, 0.0f), Vector(28,11802f, 10,59501f, 32,09558f));
	*(&iLocal_0 + 48) = Vector(-1532.0f, 54,95007f, 2466,391f);
	*(&iLocal_0 + 48 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 72) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_iPath2_BattleFlag", Vector(-1532.0f, 54,95007f, 2466,391f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 80) = Vector(-1400,943f, 70,2745f, 2243,057f);
	*(&iLocal_0 + 80 + 12) = Vector(0.0f, -200,5033f, 0.0f);
	*(&iLocal_0 + 104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_iPath1_BattleFlag", Vector(-1400,943f, 70,2745f, 2243,057f), Vector(0.0f, -200,5033f, 0.0f));
	*(&iLocal_0 + 112) = Vector(-1250,74f, 80,31372f, 2161,26f);
	*(&iLocal_0 + 112 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_iPath0_BattleFlag", Vector(-1250,74f, 80,31372f, 2161,26f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 144) = Vector(-1142,156f, 83,73206f, 2367,737f);
	*(&iLocal_0 + 144 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_iPath3_BattleFlag", Vector(-1142,156f, 83,73206f, 2367,737f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 176) = Vector(-1492f, 77,30194f, 2280.0f);
	*(&iLocal_0 + 176 + 12) = Vector(0.0f, -39,59162f, 0.0f);
	*(&iLocal_0 + 200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Horse_01", Vector(-1492f, 77,30194f, 2280.0f), Vector(0.0f, -39,59162f, 0.0f));
	*(&iLocal_0 + 208) = Vector(-1312.0f, 75,94304f, 2284.0f);
	*(&iLocal_0 + 208 + 12) = Vector(0.0f, 78,6872f, 0.0f);
	*(&iLocal_0 + 232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Horse_02", Vector(-1312.0f, 75,94304f, 2284.0f), Vector(0.0f, 78,6872f, 0.0f));
	*(&iLocal_0 + 240) = Vector(-1238,239f, 75,86394f, 2521,103f);
	*(&iLocal_0 + 240 + 12) = Vector(0.0f, 78,6872f, 0.0f);
	*(&iLocal_0 + 264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Horse_03", Vector(-1238,239f, 75,86394f, 2521,103f), Vector(0.0f, 78,6872f, 0.0f));
	*(&iLocal_0 + 272) = Vector(-1175,949f, 76,29803f, 2364,051f);
	*(&iLocal_0 + 272 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 296) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_HelperGateSpot", Vector(-1175,949f, 76,29803f, 2364,051f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_location01", Vector(-1381,142f, 70,32686f, 2436,392f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 312) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_location02", Vector(-1286,758f, 68,27748f, 2516,286f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_location03", Vector(-1263,452f, 70,31403f, 2481,219f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 328) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_location04", Vector(-1266,684f, 71,50318f, 2401,141f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 336) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_location05", Vector(-1256.0f, 73,28629f, 2380.0f), Vector(0.0f, 0.0f, 0.0f));
	PushArrayP();
	*(&iLocal_0 + 344) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_0, "c_CowExitHennigans");
	return 1;
}

void Function_230(int iParam0) //Position: 0xE749 / 59209
{
	Function_233(&iParam0, 173, 3, 1);
	Function_233(&iParam0, 976, 3, 1);
	Function_233(&iParam0, 977, 3, 1);
	Function_233(&iParam0, 1009, 3, 1);
	Function_233(&iParam0, 1010, 3, 1);
	Function_233(&iParam0, 1011, 3, 1);
	Function_231(&iParam0, "action_areas", 10, 0);
	Function_231(&iParam0, "AA_tesoro_intro_cover", 5, 0);
	Function_231(&iParam0, "custom/AA_tesoro_intro_cover", 8, 0);
	Function_231(&iParam0, "stand_shakehands", 5, 0);
	Function_231(&iParam0, "custom/stand_shakehands", 8, 0);
	Function_231(&iParam0, "shakehands_link", 1, 0);
	Function_231(&iParam0, "excited_return", 5, 0);
	Function_231(&iParam0, "custom/excited_return", 8, 0);
	return;
}

var Function_231(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xE890 / 59536
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_232(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_227(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_232(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xE8CE / 59598
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_16(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_227(&(Param0[iVar02]), 4);
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

var Function_233(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0xE99D / 59805
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_16(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_227(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_227(&(Param0[iVar02]), 8);
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

void Function_234(var uParam0, var uParam1, int iParam2) //Position: 0xEA79 / 60025
{
	bool bVar0;
	var uVar1;
	var uVar3;
	
	if (IS_OBJECT_VALID(&iParam2))
	{
		if (SQUAD_IS_VALID(&uParam0))
		{
			if (SQUAD_GET_SIZE(&uParam0) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
					if (IS_ACTOR_VALID(&uVar3) && IS_ACTOR_VALID(&uParam1))
					{
						GET_OBJECT_POSITION(&uVar3, &uVar1);
						if ((!Function_238(&uVar3, &uParam1, 50.0f) && !Function_236(&uVar3, &iParam2, 50.0f)) && !WOULD_ACTOR_BE_VISIBLE(Function_235(&uVar3), &uVar1, 3212836864))
						{
							SQUAD_LEAVE(&uVar3);
							DESTROY_ACTOR(&uVar3);
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

var Function_235(int iParam0) //Position: 0xEB20 / 60192
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

bool Function_236(var uParam0, var uParam1, float fParam2) //Position: 0xEB3D / 60221
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_201(&uParam0);
			Function_237(&uParam1);
			if (VDIST(Function_201(&uParam0), Function_237(&uParam1)) >= fParam2)
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

struct<8> Function_237(int iParam0) //Position: 0xEC5B / 60507
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

bool Function_238(var uParam0, var uParam1, bool bParam2) //Position: 0xECC9 / 60617
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
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

void Function_239() //Position: 0xEDDE / 60894
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_FinalWarning", "Pikes_FinalWarning", false, 2, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_240(var uParam0) //Position: 0xEE2B / 60971
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (DECOR_CHECK_EXIST(&uParam0, "nnostickup"))
		{
			DECOR_REMOVE(&uParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&uParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&uParam0, 0);
		TASK_PRIORITY_SET(&uParam0, 2);
	}
	return;
}

void Function_241() //Position: 0xEE7E / 61054
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Pikes_ShootsCow", "Pikes_ShootsCow", false, 2, 1, 0, 1);
		Function_18(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_242(int iParam0, int iParam1) //Position: 0xEEC5 / 61125
{
	iParam0 = (iParam0 || iParam1);
	return;
}

bool Function_243(bool bParam0, int iParam1) //Position: 0xEED6 / 61142
{
	return (bParam0 && iParam1) == 0;
}

bool Function_244(var uParam0, int iParam1) //Position: 0xEEE3 / 61155
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(&uVar3) == &iParam1)
				{
					iVar0 = 1;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

float Function_245(bool bParam0, bool bParam1) //Position: 0xEF55 / 61269
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&bParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

