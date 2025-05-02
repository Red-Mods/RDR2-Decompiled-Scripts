//Decompiled with MagicRDR v1.0
//Function Count : 362
//Statics Count : 443
//Natives Count : 561
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
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	int iLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343 = 2;
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
	struct<2> Local_355 = { 0, 0 } ;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	int iLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	struct<2> Local_392 = { 0, 0 } ;
	var uLocal_394 = 0;
	struct<2> Local_395 = { 0, 0 } ;
	var uLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	int iLocal_437 = 0;
	var uLocal_438 = 0;
	int iLocal_439 = 0;
	var uLocal_440 = 0;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
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
	iLocal_354 = 0;
	Local_355 = Vector(-1332,692f, 13,051f, 4275,087f);
	Local_392 = Vector(-1346,46f, 13,05f, 4285,61f);
	Local_395 = Vector(-1348,21f, 13,05f, 4280,94f);
	iLocal_398 = 0;
	iLocal_437 = 0;
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
			iLocal_326 = 1000;
			bLocal_353 = true;
			Function_360(&iLocal_343, "dead_ground_male", 5, 0);
			Function_360(&iLocal_343, "RandomCharMissions", 10, 0);
			while (!IS_EXITFLAG_SET())
			{
				if (!IS_ACTOR_VALID(&iLocal_338))
				{
					iLocal_338 = &Global_99725[ScriptParam_043] + 312;
				}
				switch (iLocal_398)
				{
					case 0x00000000:
						if (!Function_357(&(Global_99725[ScriptParam_043]), 48, 0, 1))
						{
							Function_356(&Global_99725[ScriptParam_043] + 228, 64);
							Function_354(&(Global_99725[ScriptParam_043]), 48, 0, 1, 1);
							iLocal_398 = 13;
						}
						else if ((Function_350(&iLocal_343) && IS_ACTOR_VALID(&iLocal_338)) && !Function_349(48))
						{
							if (IS_LAYOUTREF_VALID(&uLocal_340))
							{
								if (IS_ACTOR_VALID(&iLocal_338))
								{
									Function_348(&iLocal_338);
									DISABLE_CHILD_SECTOR("sep_graveCoverSingle01x");
									ENABLE_CHILD_SECTOR("sep_graveEva01x");
									Function_341(&(Global_99725[ScriptParam_043]), ScriptParam_0, 0x41f00000, 0x42200000, 0);
									Function_340(StackVal, StackVal, &iLocal_360, &iLocal_338, Local_392, Local_395, 100, 2, &uLocal_340, 0, 1, 1);
									iLocal_398 = 1;
								}
							}
							else if (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("KillerPimp_layout")))
							{
								Function_338();
								uLocal_340 = &iLocal_439;
							}
							else
							{
								uLocal_340 = FIND_NAMED_LAYOUT("KillerPimp_layout");
							}
						}
						break;
					
					case 0x00000001:
						if (!Function_357(&(Global_99725[ScriptParam_043]), 48, 0, 1) || Function_349(48))
						{
							Function_356(&Global_99725[ScriptParam_043] + 228, 64);
							Function_354(&(Global_99725[ScriptParam_043]), 48, 0, 1, 1);
							iLocal_398 = 13;
						}
						else if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
						{
							if (Function_334(&Global_99725[ScriptParam_043] + 288, 0, 1, 0, 0, 0))
							{
								Function_333(&(Global_99725[4843]));
								Global_99725[4843].f_236 = 1;
								iLocal_398 = 3;
							}
						}
						Function_341(&(Global_99725[ScriptParam_043]), ScriptParam_0, 0x41f00000, 0x42200000, 0);
						break;
					
					case 0x00000003:
						GATEWAY_DISABLE(&Global_99725[ScriptParam_043] + 288, 1);
						iLocal_398 = 4;
						break;
					
					case 0x00000004:
						if (Function_302("$/cutscene/RCM_16_CS03/RCM_16_CS03", &iLocal_326, 83553, 83546, 82088, 81945, 81788, 81781, 1, 1, 2, 2, 0))
						{
							Function_301(&(Global_99725[4843]));
							iLocal_398 = 6;
						}
						Function_138(&iLocal_360, &iLocal_437, &iLocal_399, &uLocal_438, 48);
						break;
					
					case 0x00000006:
						if (Function_138(&iLocal_360, &iLocal_437, &iLocal_399, &uLocal_438, 48))
						{
							Function_134(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							DESTROY_VOLUME(&uLocal_358);
							Function_133();
							SET_PLAYER_CONTROL(0, 1, 0, 0);
							iLocal_398 = 7;
						}
						break;
					
					case 0x00000007:
						if (DECOR_GET_INT(&Global_54076, "iDuelResult") == 5001)
						{
							Function_128(50, 1, 0);
							Function_113(100, 1, 0);
							Global_6655 = 1;
							Global_6659 = 7;
							UI_SET_STRING("GENERIC_DBUFFER64_0", UI_GET_STRING("KillerPimp_END"));
							Function_111("GENERIC_DBUFFER64_0", 7,5f, 0, 2, 0, 0, 0, 0);
							Function_109(407, 1, 0, 0);
							Function_63(48, 1, 1, 0);
							Function_9();
							DECOR_REMOVE(&Global_54076, "iDuelResult");
							ACTOR_DATA_GRAVITY_LIMIT(0);
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
							iLocal_398 = 13;
						}
						else
						{
							DECOR_REMOVE(&Global_54076, "iDuelResult");
							ACTOR_DATA_GRAVITY_LIMIT(0);
							Function_356(&Global_99725[ScriptParam_043] + 228, 512);
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
							iLocal_398 = 13;
						}
						Function_8(&(Global_43791[Global_46866[4]]), 8192);
						break;
				}
				WAIT(false);
			}
			break;
	}
	if (IS_LAYOUTREF_VALID(&uLocal_340))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_340);
		RELEASE_LAYOUT_REF(&uLocal_340);
	}
	if (bLocal_353)
	{
		Function_7();
	}
	Function_3(&iLocal_343);
	Function_1(0, 0, 0);
	return;
}

int Function_1(bool bParam0, bool bParam1, bool bParam2) //Position: 0x51A / 1306
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

void Function_2(bool bParam0) //Position: 0x54C / 1356
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

void Function_3(int iParam0) //Position: 0x569 / 1385
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

void Function_4(struct<2>[] Param0, int iParam1) //Position: 0x591 / 1425
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

void Function_5(struct<13> Param0) //Position: 0x6DC / 1756
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_6(struct<13> Param0) //Position: 0x6F9 / 1785
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0x717 / 1815
{
	RELEASE_LAYOUT_REF(&iLocal_439);
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x724 / 1828
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_9() //Position: 0x735 / 1845
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_TARGETED_JOURNAL_ENTRY();
	bVar1 = GET_JOURNAL_ENTRY_IN_LIST(0, 0);
	if (bVar0 == bVar1)
	{
		return;
	}
	Function_62(bVar0);
	if (bVar1 != 4294967295 || bVar1 != 0)
	{
		return;
	}
	Function_10(bVar1);
	return;
}

void Function_10(bool bParam0) //Position: 0x766 / 1894
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
	Function_62(GET_TARGETED_JOURNAL_ENTRY());
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
				if (Function_61(iVar6) && !Function_59(iVar6))
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
				Function_58();
			}
			else if (iVar5 != Global_42827)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
				{
					Function_57(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
			{
				Function_51();
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
				if (!Function_50(Global_99725[iVar143].f_228, 2048))
				{
					iVar3 = iVar1;
					if (Function_28(&(Global_99725[iVar143]), iVar3))
					{
						Function_27(&Global_99725[iVar143] + 228, 64);
						Function_23(&(Global_99725[iVar143]), iVar3);
						if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
						{
							DESTROY_OBJECT(&Global_99725[iVar143] + 288);
							Function_11(&(Global_99725[iVar143]), 7);
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

void Function_11(struct<229> Param0) //Position: 0x920 / 2336
{
	float fVar0;
	int iVar1;
	
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_50(Param0.f_228, 2048) || Global_6623) || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return;
	}
	fVar0 = Param0.f_180;
	*(&Param0 + 288) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_22(), *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, iParam1, Param0.f_176, 0, 1, 1);
	Function_12(&Param0);
	iVar1 = GATEWAY_GET_MARKER(&Param0 + 288);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

void Function_12(struct<217> Param0) //Position: 0x9F0 / 2544
{
	float fVar0;
	var uVar1;
	
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		return;
	}
	*(&Param0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_22(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	fVar0 = 20.0f;
	if (Function_21(Param0.f_216))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 336, Function_22(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0));
	DECOR_SET_INT(&uVar1, "category", 512);
	Function_13(&uVar1, 0);
	return;
}

int Function_13(var uParam0, int iParam1) //Position: 0xAAE / 2734
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
	Function_17(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_14(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_14(int iParam0, var uParam1, struct<2> Param2) //Position: 0xC18 / 3096
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 3, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_15(char* cParam0) //Position: 0xCC0 / 3264
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16("0", &cVar8, ""), 4);
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

struct<32> Function_16(char* cParam0) //Position: 0xD2C / 3372
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_17(int iParam0) //Position: 0xD4E / 3406
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
						Function_20(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_18(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_20(iVar0);
						}
					}
					else if (Function_18(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_20(iVar0);
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
			Function_20(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_18(int iParam0, struct<2> Param1) //Position: 0xEBC / 3772
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_19(&iParam0);
		Var0 = Function_19(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_19(int iParam0) //Position: 0xF33 / 3891
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

void Function_20(int iParam0) //Position: 0xF9F / 3999
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

bool Function_21(int iParam0) //Position: 0x1007 / 4103
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_22() //Position: 0x101D / 4125
{
	int iVar0;
	
	return &iVar0;
}

void Function_23(struct<153> Param0) //Position: 0x1026 / 4134
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	struct<9> Var4;
	
	Var0 = *(&Param0 + 196);
	Var0.f_4 = (StackVal + 0,5f);
	fVar2 = 1.0f;
	fVar3 = 50.0f;
	if (((StackVal && Function_25(Function_26(iParam1), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_24(iParam1)) || Global_116927[iParam16].f_20 != 1)
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

int Function_24(int iParam0) //Position: 0x1195 / 4501
{
	if ((Global_116927[iParam06] != 3 || Global_116927[iParam06] != 4) || Global_116927[iParam06] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_25(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x11C1 / 4545
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_26(int iParam0) //Position: 0x11E2 / 4578
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

void Function_27(var uParam0, int iParam1) //Position: 0x11F7 / 4599
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_28(struct<249> Param0) //Position: 0x1208 / 4616
{
	if (Function_50(Global_99725[iParam143].f_228, 64))
	{
		return 1;
	}
	if (Function_26(iParam1))
	{
		Function_27(&Global_99725[iParam143] + 228, 64);
		return 1;
	}
	if ((Function_49(iParam1) || Function_48(iParam1)) || Function_349(iParam1))
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
	if (Function_21(Param0.f_216))
	{
		if (Function_47(&(Global_43791[Param0.f_216]), 256))
		{
			return 0;
		}
	}
	if (Function_39(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		if (!((((Global_99146 || Global_6627) || Global_6610) || Param0.f_236) || GET_ACTOR_INVULNERABILITY(&Param0 + 312)))
		{
			if (!Function_37(&Param0))
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
	if (!Function_29(&Param0, iParam1))
	{
		return 0;
	}
	Function_27(&Global_99725[iParam143] + 228, 64);
	return 1;
}

bool Function_29(struct<265> Param0) //Position: 0x1338 / 4920
{
	int iVar0;
	
	if (!Param0.f_260 != 0)
	{
		if (Function_36(&Param0 + 260, 4))
		{
			if (!Function_35(iParam1))
			{
				return 0;
			}
		}
		if (Function_36(&Param0 + 260, 1))
		{
			if (!Function_48(Param0.f_256))
			{
				return 0;
			}
		}
		if (Function_36(&Param0 + 260, 2) && Global_6606)
		{
			iVar0 = Function_33(Param0.f_264);
			if (Function_30(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_36(&Param0 + 260, 8) && Global_6606)
		{
			if (Function_30(Param0.f_252))
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
				if (!Function_36(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_36(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_36(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_36(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_36(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_36(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_30(int iParam0) //Position: 0x1499 / 5273
{
	if (!Function_32(iParam0))
	{
		return 0;
	}
	if (!Function_31(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_31(int iParam0) //Position: 0x14BD / 5309
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_32(int iParam0) //Position: 0x14D2 / 5330
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_33(int iParam0) //Position: 0x14E9 / 5353
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_34(int iParam0) //Position: 0x1503 / 5379
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_35(int iParam0) //Position: 0x1519 / 5401
{
	return Global_116927[iParam06].f_16;
}

bool Function_36(var uParam0, int iParam1) //Position: 0x1529 / 5417
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_37(struct<237> Param0) //Position: 0x1546 / 5446
{
	if (!Param0.f_236)
	{
		if (Function_38())
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

bool Function_38() //Position: 0x1615 / 5653
{
	if (Function_50(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_39(int iParam0) //Position: 0x1630 / 5680
{
	if (!Function_46(1048576) || Global_6624)
	{
		return 1;
	}
	if (!Function_50(Global_99725[iParam043].f_228, 32768))
	{
		if ((Global_6646 || Global_6648) || Global_6647)
		{
			if (!Function_45(Global_119935, 0x8000000))
			{
				Function_40(&Global_54076, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

void Function_40(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x168B / 5771
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_42(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_41(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_41(char* cParam0) //Position: 0x1700 / 5888
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

bool Function_42(int iParam0, var uParam1, int iParam2) //Position: 0x173A / 5946
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
		if (Function_44(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_43(uVar0))
		{
			case 0x00000002:
				if (!Function_45(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_43(char* cParam0) //Position: 0x17B6 / 6070
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

int Function_44(int iParam0) //Position: 0x1857 / 6231
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_356(&iVar1, 2147483648);
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

bool Function_45(var uParam0, int iParam1) //Position: 0x1894 / 6292
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_46(int iParam0) //Position: 0x18A7 / 6311
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_47(var uParam0, int iParam1) //Position: 0x18C3 / 6339
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(int iParam0) //Position: 0x18E0 / 6368
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_49(int iParam0) //Position: 0x18F5 / 6389
{
	if (Global_116927[iParam06] == 0)
	{
		return 1;
	}
	return 0;
}

bool Function_50(bool bParam0, bool bParam1) //Position: 0x190A / 6410
{
	return (bParam0 && bParam1) == 0;
}

void Function_51() //Position: 0x1917 / 6423
{
	if (Function_56(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_55(Global_42827);
			*(&Global_42827 + 8) = Function_52(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_55(Global_42827);
			*(&Global_42827 + 8) = Function_52(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_52(int iParam0, int iParam1) //Position: 0x1997 / 6551
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
					if (Function_54(6, 0) || Function_54(12, 0))
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
					if (Function_48(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_54(5, 0))
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
					if (Function_48(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_48(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_48(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_48(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_54(26, 0))
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
					if (Function_48(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_48(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_48(27) && iVar16)
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
					if (Function_48(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_48(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_48(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_48(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_54(17, 0) && iVar13)
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
					if (Function_48(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_54(6, 0) && Function_48(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_48(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_54(9, 0) && Function_48(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_48(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_54(8, 0) && iVar17)
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
	if (Function_53(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_53(StackVal, vVar2))
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
	if (!Function_53(StackVal, vVar2))
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

bool Function_53(char* cParam0) //Position: 0x25FA / 9722
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

bool Function_54(int iParam0, bool bParam1) //Position: 0x2612 / 9746
{
	int iVar0;
	
	iVar0 = Function_33(iParam0);
	if (!Function_32(iVar0))
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

int Function_55(int iParam0) //Position: 0x2650 / 9808
{
	int iVar0;
	int iVar1;
	
	if (!Function_56(iParam0))
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

bool Function_56(int iParam0) //Position: 0x269F / 9887
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_57(int iParam0) //Position: 0x26B5 / 9909
{
	if (Global_42827 == iParam0)
	{
		return 1;
	}
	if (!Function_56(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_59(iParam0))
	{
		return 0;
	}
	if (!Function_61(iParam0))
	{
		return 0;
	}
	Global_42827 = iParam0;
	Global_42827.f_16 = 1;
	return 1;
}

void Function_58() //Position: 0x271E / 10014
{
	Global_42827 = 4294967295;
	if (IS_BLIP_VALID(&Global_42827 + 8))
	{
		REMOVE_BLIP(&Global_42827 + 8);
	}
	Global_42827.f_16 = 1;
	return;
}

bool Function_59(int iParam0) //Position: 0x2743 / 10051
{
	if (!Function_56(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_60(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_60(int iParam0, int iParam1) //Position: 0x2794 / 10132
{
	int iVar0;
	
	if (!Function_56(iParam0))
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

bool Function_61(int iParam0) //Position: 0x27C1 / 10177
{
	if (!Function_56(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_60(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_62(bool bParam0) //Position: 0x2813 / 10259
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
			Function_58();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_63(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x284D / 10317
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
	if (!Function_38())
	{
		if (!Function_45(Global_119934, 2097152))
		{
			Function_40(&Global_54076, 2097152, 1, 0);
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
		Function_108(&iVar1);
		PRINTNL();
		(&Global_99725[iVar0 + 143] + 240) = &iVar1;
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
	Function_356(&Global_99725[iParam043] + 228, 64);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_107();
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
		Function_10(Global_99725[iParam043].f_224);
	}
	if (&Global_99717 + 16 == iParam0)
	{
		Global_99717.f_28 = 0;
		Global_99717.f_24 = 999.0f;
		*(&Global_99717 + 16) = 4294967295;
	}
	if (&bParam2)
	{
		if (!Function_106(0, 0, 1, 1))
		{
			Function_67(1);
			Function_66(&bParam1, 7);
		}
		else
		{
			Function_65();
		}
	}
	bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 1);
	if (IS_ACTOR_VALID(&Global_99725[iParam043] + 312))
	{
		Function_64(iParam0, &iVar18, &iVar19, &iVar20, &iVar21, &iVar22, &iVar23);
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

void Function_64(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2DE5 / 11749
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

void Function_65() //Position: 0x2F86 / 12166
{
	return;
}

void Function_66(bool bParam0, int iParam1) //Position: 0x2F8C / 12172
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

void Function_67(bool bParam0) //Position: 0x2FCB / 12235
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_97();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_68();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_356(&Global_99144, 1);
		Function_356(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_68() //Position: 0x3020 / 12320
{
	Function_95();
	Function_94();
	Function_94();
	Function_93();
	Function_93();
	Function_92();
	Function_92();
	Function_76(0);
	Function_76(0);
	Function_73();
	Function_72();
	Function_71();
	Function_70();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_69();
	return;
}

void Function_69() //Position: 0x306B / 12395
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

void Function_70() //Position: 0x3171 / 12657
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

void Function_71() //Position: 0x31A4 / 12708
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

void Function_72() //Position: 0x3337 / 13111
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

void Function_73() //Position: 0x34F0 / 13552
{
	Function_74(&Global_42918, 1, 0);
	return;
}

void Function_74(struct<2317> Param0) //Position: 0x34FE / 13566
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
	
	uVar0 = Function_75();
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

var Function_75() //Position: 0x371B / 14107
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_76(int iParam0) //Position: 0x3730 / 14128
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
					iVar2 = ((Function_91((50 + iVar4)) + Function_91((183 + iVar4))) + Function_91((90 + iVar4)));
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
	Function_77(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_77(int iParam0, bool bParam1, bool bParam2) //Position: 0x37D7 / 14295
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
		Function_90(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_89(iParam0);
	if (&bParam2)
	{
		Function_78(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_78(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x3A73 / 14963
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_88(390))), 32);
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
					bVar19 = (Function_87(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_87(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_85(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_82(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_80(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_79(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_22(), &Var9);
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

var Function_79(int iParam0) //Position: 0x40BA / 16570
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_80(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x40CB / 16587
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_81("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_81("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_81("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_81(char* cParam0) //Position: 0x41C2 / 16834
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_82(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x41DD / 16861
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_84(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_83(Function_84(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_83(int iParam0, int iParam1) //Position: 0x4244 / 16964
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_84(int iParam0, bool bParam1) //Position: 0x4256 / 16982
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_85(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4268 / 17000
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
	if (((Function_86(iParam0) != 19 || Function_86(iParam0) != 17) || Function_86(iParam0) != 10) || Function_86(iParam0) != 9)
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

int Function_86(int iParam0) //Position: 0x439C / 17308
{
	return Global_55480[iParam016].f_96;
}

float Function_87(int iParam0) //Position: 0x43AB / 17323
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_88(int iParam0) //Position: 0x43E4 / 17380
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_89(int iParam0) //Position: 0x4421 / 17441
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

int Function_90(int iParam0, bool bParam1, bool bParam2) //Position: 0x45BB / 17851
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

int Function_91(bool bParam0) //Position: 0x47FF / 18431
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_92() //Position: 0x4840 / 18496
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
		iVar2 = ((Function_91((50 + iVar3) + 15) + Function_91((183 + iVar3) + 15)) + Function_91((90 + iVar3) + 15));
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
	Function_77(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_93() //Position: 0x48C9 / 18633
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
			iVar2 = ((Function_91((50 + iVar3) + 8) + Function_91((183 + iVar3) + 8)) + Function_91((90 + iVar3) + 8));
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
	Function_77(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_94() //Position: 0x4960 / 18784
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
		iVar2 = ((Function_91((50 + iVar3)) + Function_91((183 + iVar3))) + Function_91((90 + iVar3)));
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
	Function_77(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_95() //Position: 0x49DF / 18911
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_96(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_77(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_96(int iParam0, bool bParam1, int iParam2) //Position: 0x4A1C / 18972
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
	Function_90(iParam0, bParam1, 1);
	Function_89(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_78(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_97() //Position: 0x4C28 / 19496
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_38())
	{
		Function_103(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_103(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_98(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_98(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_53(StackVal, Var0))
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

struct<8> Function_98(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x4CDF / 19679
{
	int iVar0;
	
	iVar0 = Function_101(&uParam2, &fParam3);
	if (Function_100(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_27(&Global_99144, 1);
			Function_356(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_27(&Global_99144, 2);
			Function_356(&Global_99144, 1);
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
		Function_27(&Global_99144, 2);
		Function_356(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_99();
	return StackVal, Function_99();
}

struct<8> Function_99() //Position: 0x4DD7 / 19927
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_100(int iParam0) //Position: 0x4DE1 / 19937
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_101(bool bParam0, bool bParam1) //Position: 0x4DF7 / 19959
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
				fVar2 = Function_102(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_102(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_100(iVar0) && !&bParam1)
	{
		iVar0 = Function_101(&bParam0, 1);
	}
	return iVar0;
}

float Function_102(struct<2> Param0, struct<2> Param2) //Position: 0x4EC3 / 20163
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_103(float fParam0, int iParam1) //Position: 0x4EE0 / 20192
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_105(&Global_54076, &Var3);
	if (!Function_104(Global_46760[0]))
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
	if (!Function_104(Global_46760[2]))
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
	if (!Function_104(Global_46760[1]))
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
	if (!Function_104(Global_46796[1]))
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
	if (!Function_104(Global_46796[3]))
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
	if (!Function_104(Global_46796[2]))
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
	if (!Function_104(Global_46796[4]))
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
	if (!Function_104(Global_46816[0]))
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
	if (!Function_104(Global_46816[1]))
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
	if (!Function_104(Global_46816[2]))
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
	if (!Function_104(Global_46838[0]))
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
	if (!Function_104(Global_46850[0]))
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
	if (!Function_104(Global_46850[1]))
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
	if (!Function_104(Global_46850[2]))
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
	if (!Function_104(Global_46866[0]))
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
	if (!Function_104(Global_46866[1]))
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
	if (!Function_104(Global_46866[2]))
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
	if (!Function_104(Global_46894[2]))
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
	if (!Function_104(Global_46894[3]))
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
	if (!Function_104(Global_46894[0]))
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
	if (!Function_104(Global_46914[0]))
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
	if (!Function_104(Global_46926[2]))
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
	if (!Function_104(Global_46926[1]))
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
	if (!Function_104(Global_46926[0]))
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
	if (!Function_104(Global_46838[1]))
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
	if (!Function_104(Global_46894[1]))
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
	Function_27(&Global_99144, 2);
	Function_356(&Global_99144, 1);
	iParam1 = 0;
	if (Function_53(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_104(int iParam0) //Position: 0x570C / 22284
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_50(uVar0, 0x1000000) || Function_50(uVar0, 0x2000000)) || Function_50(uVar0, 0x4000000)) || !Function_50(uVar0, 0x10000000));
}

void Function_105(var uParam0, int iParam1) //Position: 0x5747 / 22343
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_106(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x5756 / 22358
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

void Function_107() //Position: 0x5805 / 22533
{
	bool bVar0;
	
	bVar0 = Function_91(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

void Function_108(int iParam0) //Position: 0x5863 / 22627
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

int Function_109(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x58AD / 22701
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
	Function_90(iParam0, TO_FLOAT(bParam1), 1);
	Function_89(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_78(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_110(iParam0);
	return 1;
}

void Function_110(bool bParam0) //Position: 0x5AD5 / 23253
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

void Function_111(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x5B73 / 23411
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
			Var0 = { StackVal, StackVal, StackVal, Function_112(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

struct<16> Function_112(int iParam0) //Position: 0x5C08 / 23560
{
	char* cVar0[16];
	
	if (!Function_38())
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

void Function_113(int iParam0, bool bParam1, bool bParam2) //Position: 0x5C47 / 23623
{
	int iVar0;
	bool bVar1;
	
	if (Function_127(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_126())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_91(1);
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
			Function_125(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_45(Global_119936, 1))
				{
					Function_40(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_123(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_45(Global_119936, 2))
				{
					Function_40(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_109(1, bVar1, 0, 0);
	}
	else
	{
		Function_122(1, (4294967295 * bVar1), 0);
	}
	if (Function_91(1) <= 4294962296)
	{
		Function_77(1, 4294962296, 0);
	}
	else if (Function_91(1) >= 5000)
	{
		Function_77(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_87(1));
	iVar0 = Function_91(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_115(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_115(2, Function_121(Global_21369.f_244), 0);
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
				Function_115(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_115(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_115(2, Function_121(Global_21369.f_244), 1);
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
				Function_115(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_115(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_115(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_115(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_115(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_115(2, Function_121(Global_21369.f_244), 1);
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
				Function_115(2, Function_121(Global_21369.f_244), 0);
			}
			break;
	}
	Function_114(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_114(int iParam0, int iParam1) //Position: 0x5F6E / 24430
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

int Function_115(int iParam0, char* cParam1) //Position: 0x61D8 / 25048
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
	Function_119(iParam0, &cParam1, 0, 1);
	iVar1 = Function_116();
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

int Function_116() //Position: 0x6368 / 25448
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
	Function_117();
	return 0;
}

void Function_117() //Position: 0x6409 / 25609
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
		Function_118(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_118(int iParam0) //Position: 0x64C7 / 25799
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

int Function_119(int iParam0, char* cParam1) //Position: 0x652D / 25901
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
		Function_120(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x6884 / 26756
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

var Function_121(int iParam0) //Position: 0x690C / 26892
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

int Function_122(int iParam0, bool bParam1, int iParam2) //Position: 0x69AF / 27055
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
	Function_89(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_78(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_123(int iParam0, bool bParam1) //Position: 0x6BAC / 27564
{
	bool bVar0;
	int iVar1;
	
	Function_122(iParam0, bParam1, 0);
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
	iVar1 = Function_124(iParam0, 4294967295);
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
	iVar1 = Function_116();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_124(int iParam0, int iParam1) //Position: 0x6D57 / 27991
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

int Function_125(int iParam0, bool bParam1) //Position: 0x6D9C / 28060
{
	bool bVar0;
	int iVar1;
	
	Function_109(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_124(iParam0, 4294967295);
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
	iVar1 = Function_116();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

bool Function_126() //Position: 0x6F48 / 28488
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_127(int iParam0) //Position: 0x6F73 / 28531
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_128(int iParam0, bool bParam1, bool bParam2) //Position: 0x6F82 / 28546
{
	int iVar0;
	bool bVar1;
	
	if (Function_127(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_126())
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
	iVar0 = Function_91(3);
	Function_130();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_125(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_45(Global_119936, 4))
			{
				Function_40(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_109(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_87(3));
	iVar0 = Function_91(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_115(4, Function_129(Global_21369.f_248), 1);
				Function_114(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_115(4, Function_129(Global_21369.f_248), 1);
				Function_114(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_115(4, Function_129(Global_21369.f_248), 1);
				Function_114(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_115(4, Function_129(Global_21369.f_248), 1);
				Function_114(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_115(4, Function_129(Global_21369.f_248), 1);
				Function_114(Global_21369.f_244, Global_21369.f_248);
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

var Function_129(int iParam0) //Position: 0x7156 / 29014
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

void Function_130() //Position: 0x71E5 / 29157
{
	Function_132(3, 0.0f);
	Function_131(3, 10000.0f);
	return;
}

int Function_131(int iParam0, int iParam1) //Position: 0x71FB / 29179
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_132(int iParam0, int iParam1) //Position: 0x723B / 29243
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

void Function_133() //Position: 0x727B / 29307
{
	if (UI_ISACTIVE("dueling"))
	{
		UI_EXIT("dueling");
	}
	if (UI_ISACTIVE("ncutscenes"))
	{
		UI_EXIT("ncutscenes");
	}
	return;
}

void Function_134(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, bool bParam10) //Position: 0x72BF / 29375
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
		uVar0 = Function_75();
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
		Function_109(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_137();
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
	Function_135(&uParam9, &bParam10);
}

void Function_135(var uParam0, bool bParam1) //Position: 0x738E / 29582
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
		Function_136();
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

void Function_136() //Position: 0x745D / 29789
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

void Function_137() //Position: 0x74D5 / 29909
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_138(struct<125> Param0) //Position: 0x74EA / 29930
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
			Function_286(&Param0);
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
					Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 28), *(&Param0 + 16), StackVal);
					VSCALE(&Var0, 0,5f);
					*(&Param0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_201, "Duel_StayOut", 2, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
				}
				Param0.f_84 = 4294967293;
				if (&iParam4 >= 4294967295)
				{
					Function_27(&Global_99725[&iParam443] + 228, 512);
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
				Function_285(&Param0 + 80, Param0.f_52, !IS_ACTOR_ALIVE(&Param0 + 56), &Param0);
				Function_273(&Param0);
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
				if (Function_350(&iLocal_103))
				{
					Function_272(&Param2 + 72);
					iParam1 = 2;
					SET_HUD_MAP_DRAW_ENABLED(0);
				}
				else
				{
					Function_270(&Param0);
				}
				break;
			
			case 0x00000002:
				if (Function_270(&Param0) || Function_268(&Param2 + 72) < 2.0f)
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
					Function_244(&Param0);
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
						Function_356(&Global_99725[&iParam443] + 228, 512);
					}
					Function_2(1.0f);
					Function_286(&Param0);
					PRINTSTRING("Dueling - Fail");
					PRINTNL();
					return 1;
				}
				break;
			
			case 0x00000005:
				Function_350(&iLocal_103);
				Function_270(&Param0);
				break;
			
			case 0x00000006:
				if (HUD_IS_FADED())
				{
					if (Function_350(&iLocal_103))
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
						Function_244(&Param0);
						if (Param0.f_48)
						{
							*(&Param2 + 32) = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling_Tutorial", &Param0 + 88, 8, 0);
						}
						SET_HUD_MAP_DRAW_ENABLED(0);
						Global_6610 = 1;
					}
					Function_243(&Param0);
					if (Function_238(&uParam3, &Param2 + 56, &Param0, &Param0 + 8, !Param0.f_48))
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
				Function_243(&Param0);
				if (Function_238(&uParam3, &Param2 + 56, &Param0, &Param0 + 8, !Param0.f_48))
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
					Function_237("Dueling_Tutorial_DrawNow", "DUEL_CAMERA_CUT_MASTER", 3212836864, 0, 0, 0, 0);
					*(&Param2 + 104) = 1;
				}
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&Param0 + 8, "draw") || IS_ACTION_NODE_PLAYING_PARTIAL(&Param0 + 8, "nhold_draw"))
				{
				}
				Function_234(&Param0);
				if (Function_233())
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
				else if (Function_232() == 5003)
				{
					if (HUD_IS_SHOWING_BIG_TEXT())
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_BIG_TEXT_QUEUE();
					}
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&Param0), "iDuelResult", 5003);
					Function_272(&Param2 + 40);
					iParam1 = 13;
				}
				break;
			
			case 0x0000000B:
				Function_234(&Param0);
				if (Function_232() >= 4294967295)
				{
					Function_150(&Param0, &Param2 + 96);
					if (&Param2 + 88)
					{
						if (!HAS_ACCESSORY_ENUM(&Param0 + 8, 0))
						{
							*(&Param2 + 88) = 0;
							Function_109(455, 1, 0, 0);
						}
					}
					Function_272(&Param2 + 40);
					if (Function_232() == 5003)
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
							Function_149(&Param0);
							iParam1 = 12;
						}
					}
				}
				break;
			
			case 0x0000000C:
				Function_234(&Param0);
				if (Function_148())
				{
					if (!bLocal_205)
					{
						Function_143(&Param0);
					}
					*(&Param2 + 112) = 1;
				}
				if (Function_139(&Param0))
				{
					iParam1 = 13;
				}
				break;
			
			case 0x0000000D:
				Function_234(&Param0);
				if (IS_ACTOR_VALID(&Param0 + 8))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&Param0 + 8);
				}
				if (Function_148())
				{
					if (!bLocal_205)
					{
						Function_143(&Param0);
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
					Function_286(&Param0);
					PRINTSTRING("Dueling - Terminating Cleanly");
					PRINTNL();
					*(&Param2 + 140) = 1;
				}
				break;
			
			case 0x0000000E:
				if (!bLocal_205)
				{
					Function_143(&Param0);
				}
				if (IS_SCRIPT_VALID(&Param2 + 32))
				{
					TERMINATE_SCRIPT(&Param2 + 32);
				}
				Function_286(&Param0);
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
		Function_286(&Param0);
		PRINTSTRING("Dueling - Pass");
		PRINTNL();
		return 1;
	}
	if (&Param2 + 120)
	{
		if (&iParam4 >= 4294967295)
		{
			Function_356(&Global_99725[&iParam443] + 228, 512);
		}
		if (IS_SCRIPT_VALID(&Param2 + 32))
		{
			TERMINATE_SCRIPT(&Param2 + 32);
		}
		Function_286(&Param0);
		PRINTSTRING("Dueling - Fail");
		PRINTNL();
		return 1;
	}
	return 0;
}

bool Function_139(struct<16> Param0) //Position: 0x7D84 / 32132
{
	float fVar0;
	
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	fVar0 = (GET_CURRENT_GAME_TIME() - fLocal_204);
	Function_140(&Param0, fVar0);
	if (fVar0 < 5.0f)
	{
		return 1;
	}
	return 0;
}

void Function_140(struct<16> Param0) //Position: 0x7DB3 / 32179
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
							Function_141(&uVar2, bVar3);
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

void Function_141(var uParam0, bool bParam1) //Position: 0x7EB5 / 32437
{
	if ((bParam1 && 8) != 0)
	{
		Function_142(&uParam0, bParam1, "hat_tip");
	}
	else if ((bParam1 && 32) != 0)
	{
	}
	else
	{
		Function_142(&uParam0, bParam1, "Reaction");
	}
	return;
}

void Function_142(var uParam0, var uParam1, struct<16> Param2) //Position: 0x7EF8 / 32504
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

void Function_143(int iParam0) //Position: 0x7F70 / 32624
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
			if (Function_147(&iParam0 + 56) == &iLocal_201)
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
		Function_145(9);
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
	Function_144(1);
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

void Function_144(int iParam0) //Position: 0x82B1 / 33457
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_145(int iParam0) //Position: 0x82C4 / 33476
{
	Function_146(&Global_43580, iParam0);
	return;
}

void Function_146(var uParam0, int iParam1) //Position: 0x82D2 / 33490
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

int Function_147(var uParam0) //Position: 0x82F1 / 33521
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

bool Function_148() //Position: 0x8358 / 33624
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

void Function_149(struct<16> Param0) //Position: 0x838F / 33679
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

void Function_150(int iParam0, int iParam1) //Position: 0x842F / 33839
{
	switch (Function_232())
	{
		case 0x0000138A:
			Function_167(Function_227(GET_ACTOR_ENUM(&iParam0), 6, 4), (!Global_6623 && !Function_226()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5002);
			MEMORY_CLEAR_ALL(&iParam0 + 8);
			SET_ACTOR_FACE_STYLE(&iParam0 + 8, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0 + 8, false);
			AI_GLOBAL_CLEAR_DANGER(&iParam0 + 8);
			AUDIO_PLAY_VOCAL_EFFECT(&iParam0 + 8, 10, 1);
			Function_109(451, 1, 0, 0);
			Function_109(454, 1, 0, 0);
			Function_109(452, 1, 0, 0);
			if (!Global_6623 && !(((Function_166(48) || Function_166(74)) || Function_166(51)) || Function_166(67)))
			{
				Function_128(100, 1, 0);
				Function_113(200, 1, 0);
			}
			Function_151(6, Global_43789);
			break;
		
		case 0x00001389:
			Function_167(Function_227(GET_ACTOR_ENUM(&iParam0), 6, 4), (!Global_6623 && !Function_226()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5001);
			Function_109(451, 1, 0, 0);
			Function_109(452, 1, 0, 0);
			if (!Global_6623 && !(((Function_166(48) || Function_166(74)) || Function_166(51)) || Function_166(67)))
			{
				Function_128(50, 1, 0);
			}
			if (iParam1 && !(((Function_166(48) || Function_166(74)) || Function_166(51)) || Function_166(67)))
			{
				if (!DECOR_CHECK_EXIST(&iParam0 + 8, "honor"))
				{
					Function_113(4294967196, 1, 0);
				}
				else
				{
					DECOR_SET_BOOL(&iParam0, "bDrewFirst", true);
				}
			}
			Function_151(6, Global_43789);
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

void Function_151(int iParam0, int iParam1) //Position: 0x8647 / 34375
{
	if (!Function_165(3))
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_46760[0])
			{
				if (IS_PS3() || Function_164())
				{
					Function_152(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_46914[0])
			{
				Function_152(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_46816[0])
			{
				Function_152(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_46796[1])
			{
				Function_152(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_46894[2])
			{
				Function_152(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_46894[3])
			{
				Function_152(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_46926[2])
			{
				Function_152(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_46760[0])
			{
				if (Function_61(2) && !Function_59(2))
				{
					Function_152(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_152(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x8752 / 34642
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_56(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_165(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_60(bParam0, 2))
	{
		Function_109(456, 1, 0, 0);
		Function_163(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_162(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_161(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_163(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_106(0, 0, 1, 1))
			{
				Function_67(1);
				Function_66(1, 0);
			}
			else
			{
				Function_65();
			}
		}
		Function_156(bParam0);
		if (StackVal && !Function_50(((((!Function_155() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_50((((Function_155() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_38())
		{
			if (!Function_45(Global_119934, 2))
			{
				Function_40(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_51();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_154(3, bParam1);
				break;
			
			case 0x00000005:
				Function_154(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_154(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_154(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_154(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_154(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_153(2, 24);
				break;
			
			case 0x00000003:
				Function_153(2, 25);
				break;
			
			case 0x0000000F:
				Function_153(2, 26);
				break;
			
			case 0x0000000D:
				Function_153(2, 27);
				break;
			
			case 0x0000000E:
				Function_153(2, 28);
				break;
			}
	}
}

void Function_153(int iParam0, int iParam1) //Position: 0x89F1 / 35313
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

void Function_154(int iParam0, bool bParam1) //Position: 0x8A5B / 35419
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

bool Function_155() //Position: 0x8ACA / 35530
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_156(bool bParam0) //Position: 0x8AF7 / 35575
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
			if (Function_161(bParam0, Function_160(bVar24)))
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
			if (Function_161(bParam0, Function_160(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_159(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_158(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_157(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_157(int iParam0) //Position: 0x8CA7 / 36007
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_56(iParam0))
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

void Function_158(bool bParam0, bool bParam1) //Position: 0x8CFE / 36094
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

var Function_159(int iParam0) //Position: 0x8D23 / 36131
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_56(iParam0))
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

int Function_160(bool bParam0) //Position: 0x8D79 / 36217
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_161(bool bParam0, int iParam1) //Position: 0x8D85 / 36229
{
	int iVar0;
	
	if (!Function_56(bParam0))
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

void Function_162(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8DE4 / 36324
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_112(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

void Function_163(bool bParam0, int iParam1) //Position: 0x8E6F / 36463
{
	if (!Function_56(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_164() //Position: 0x8EC4 / 36548
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_50(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_165(int iParam0) //Position: 0x8EF4 / 36596
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_166(int iParam0) //Position: 0x8F10 / 36624
{
	if (Global_116927[iParam06] == 5)
	{
		return 1;
	}
	return 0;
}

void Function_167(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x8F25 / 36645
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_225(12);
	Function_223(2);
	Function_221((15 - Function_222(105)));
	if (Function_220(bParam0) == 1)
	{
		iVar2 = Function_219(bParam0);
		Function_214(&(Global_6667[iVar228]));
		Function_213(4194304);
		if (&bParam3)
		{
			Function_190(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_188(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_190(iVar2, &uVar0, 0);
		}
		bVar1 = Function_187();
		if (&bParam1)
		{
			Function_184(iVar2, bParam0, bVar1);
			Function_183();
		}
	}
	Function_170(bParam0, &bParam1, &iParam2, bVar1);
	if (Function_220(bParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_169(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_220(bParam0) == 1)
		{
			iVar2 = Function_219(bParam0);
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
	Function_168();
}

void Function_168() //Position: 0x9019 / 36889
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_54(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

void Function_169(int iParam0, bool bParam1) //Position: 0x904B / 36939
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
							Function_40(&Global_54076, 0x1000000, 3, 0);
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
							Function_40(&Global_54076, 0x1000000, 3, 0);
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
							Function_40(&Global_54076, 0x1000000, 3, 0);
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
							Function_40(&Global_54076, 0x1000000, 3, 0);
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
							Function_40(&Global_54076, 0x1000000, 3, 0);
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
							Function_40(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_169(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_169(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_169(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_169(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_169(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_169(57, 0);
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

void Function_170(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9348 / 37704
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_30(bParam0))
	{
		Function_181();
		return;
	}
	bVar0 = Function_220(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_126())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_219(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_180(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_112(Global_10966) };
		}
		if (Function_126())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_178();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_126())
	{
		Function_177();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_175("DEED_COMPLETE", bParam0);
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
			Function_172(bParam0);
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
						switch (Function_219(bParam0))
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
			Function_67(1);
			Function_66(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_171(bParam0, &Var14);
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

void Function_171(int iParam0, struct<41> Param1) //Position: 0x95A6 / 38310
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_172(bool bParam0) //Position: 0x95E4 / 38372
{
	int iVar0;
	int iVar1;
	
	if (!Function_32(bParam0))
	{
		return;
	}
	switch (Function_220(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_219(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_109(12, 1, 0, 0);
				Function_153(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_109(13, 1, 0, 0);
				Function_153(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_109(14, 1, 0, 0);
				Function_153(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_109(15, 1, 0, 0);
				Function_153(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_109(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_219(bParam0))
			{
				case 0x00000000:
					if (Function_174(bParam0) == 1)
					{
						iVar0 = Function_173(bParam0);
						if (Function_21(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_153(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_153(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_153(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_153(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_153(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_153(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_153(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_153(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_153(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_153(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_153(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_153(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_153(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_153(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_153(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_153(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_153(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_153(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_153(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_153(4, 19);
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
								Function_109(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_109(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_109(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_173(bParam0) == 0)
			{
				if (Function_174(bParam0) == 1)
				{
					Function_109(458, 1, 0, 0);
					iVar0 = Function_219(bParam0);
					if (Function_21(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_153(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_153(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_153(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_153(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_153(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_153(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_153(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_153(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_174(bParam0) == 1)
			{
				Function_109(400, 1, 0, 0);
			}
			switch (Function_219(bParam0))
			{
				case 0x00000001:
					Function_109(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_153(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_153(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_153(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_109(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_153(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_153(6, 9);
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

int Function_173(bool bParam0) //Position: 0x9AC0 / 39616
{
	if (!Function_32(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_174(bool bParam0) //Position: 0x9ADF / 39647
{
	if (!Function_32(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_175(var uParam0, bool bParam1) //Position: 0x9AF9 / 39673
{
	struct<4> Var0;
	
	if (!Function_30(bParam1))
	{
		return;
	}
	switch (Function_220(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_176(Function_219(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_220(bParam1), Function_219(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_220(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_220(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_220(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_220(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_220(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_176(int iParam0) //Position: 0x9C23 / 39971
{
	char* cVar0[16];
	
	if (!Function_38())
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

void Function_177() //Position: 0x9C5D / 40029
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
	PLAYSTAT_INT("HC_MONEY", Function_91(0));
	PLAYSTAT_INT("HC_FAME", Function_91(3));
	PLAYSTAT_INT("HC_HONOR", Function_91(1));
	return;
}

void Function_178() //Position: 0x9DBF / 40383
{
	int iVar0;
	int iVar1;
	
	if (!Function_34(Global_10966))
	{
		return;
	}
	iVar0 = Function_91(24);
	iVar1 = Function_33(Global_10966);
	if (!Function_34(iVar0) && Function_179(iVar1) < 0)
	{
		Function_77(24, Global_10966, 0);
		Function_119(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_179(Function_33(iVar0)))
	{
		Function_77(24, Global_10966, 0);
		Function_119(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_179(int iParam0) //Position: 0x9E3F / 40511
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_180(char* cParam0) //Position: 0x9E59 / 40537
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

void Function_181() //Position: 0xA0AF / 41135
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
			Function_182(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_182(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA2F6 / 41718
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_183() //Position: 0xA322 / 41762
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

void Function_184(int iParam0, int iParam1, bool bParam2) //Position: 0xA350 / 41808
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
	
	if (!Function_34(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_186(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_176(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_91(42) - Global_53524.f_168);
				bVar1 = (Function_91(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_176(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_88(49)) - Global_53524.f_176);
				bVar3 = (Function_91(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_176(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_91(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_176(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_176(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_185(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_128(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_112(iParam0) };
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

int Function_185(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0xA5EC / 42476
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

int Function_186(int iParam0) //Position: 0xA7B4 / 42932
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

var Function_187() //Position: 0xA849 / 43081
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_188(int iParam0) //Position: 0xA86E / 43118
{
	if (!Function_34(iParam0))
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
			Function_128(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_128(25, 1, 0);
			Function_189(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_189(50, 1, 1);
			Function_128(250, 1, 0);
			Function_113(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_128(75, 1, 0);
			Function_113(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_128(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_189(50, 1, 1);
			Function_128(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_189(5, 1, 1);
			Function_113(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_128(75, 1, 0);
			Function_113(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_189(5, 1, 1);
			Function_128(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_128(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_113(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_189(25, 1, 1);
			Function_128(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_189(10, 1, 1);
			Function_128(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_128(50, 1, 0);
			Function_113(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_128(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_128(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_113(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_189(20, 1, 1);
			Function_128(75, 1, 0);
			Function_113(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_189(25, 1, 1);
			Function_128(150, 1, 0);
			Function_113(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_189(10, 1, 1);
			Function_128(150, 1, 0);
			Function_113(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_128(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_113(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_113(100, 1, 0);
			Function_189(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_189(3, 1, 1);
			Function_128(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_113(125, 1, 0);
			Function_128(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_189(50, 1, 1);
			Function_128(100, 1, 0);
			Function_113(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_189(50, 1, 1);
			Function_128(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_189(75, 1, 1);
			Function_128(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_128(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_128(75, 1, 0);
			Function_113(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_128(250, 1, 0);
			Function_113(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_128(75, 1, 0);
			Function_113(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_128(200, 1, 0);
			Function_113(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_128(75, 1, 0);
			Function_113(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_128(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_189(50, 1, 1);
			Function_128(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_189(100, 1, 1);
			Function_128(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_128(200, 1, 0);
			Function_113(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_128(300, 1, 0);
			Function_113(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_128(300, 1, 0);
			Function_113(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_128(300, 1, 0);
			Function_113(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_128(500, 1, 0);
			Function_113(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_128(150, 1, 0);
			Function_113(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_113(25, 1, 0);
			Function_189(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_128(150, 1, 0);
			Function_113(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_113(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_113(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_113(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_113(150, 1, 0);
			Function_189(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_113(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_113(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_113(150, 1, 0);
			Function_189(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_113(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_113(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

int Function_189(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAD3D / 44349
{
	bool bVar0;
	
	bVar0 = Function_91(0);
	if ((Function_91(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_109(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_91(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_109(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_91(597) + Function_91(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_190(int iParam0, var uParam1, bool bParam2) //Position: 0xAE0F / 44559
{
	struct<4> Var0;
	
	if (!Function_34(iParam0))
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
			Function_211(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_209(Global_46760[0]);
			Function_209(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_207(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_209(Global_46816[0]);
			Function_205(0);
			Function_203(2, 1);
			Function_203(0, 1);
			Function_203(1, 1);
			break;
		
		case 0x00000003:
			Function_209(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_209(Global_46816[0]);
			Function_209(Global_46760[0]);
			Function_201(0, 1);
			Function_201(15, 1);
			Function_201(9, 1);
			Function_201(12, 1);
			Function_201(16, 1);
			Function_203(3, 1);
			break;
		
		case 0x00000005:
			Function_209(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_207(21, &bParam2, 4);
			Function_209(Global_46816[0]);
			Function_203(39, 1);
			break;
		
		case 0x00000007:
			Function_209(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_209(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_164())
				{
					if (!Function_61(4))
					{
						Function_200(4, 0, 0, 1, 0);
					}
				}
			}
			Function_209(Global_46760[0]);
			Function_209(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_209(Global_46760[0]);
			Function_209(Global_46816[2]);
			Function_8(&(Global_43791[Global_46816[2]]), 32768);
			Function_199(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_207(9, &bParam2, 4);
			Function_209(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_209(Global_46760[0]);
			Function_209(Global_46796[0]);
			Function_8(&(Global_43791[Global_46796[0]]), 32768);
			Function_199(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_209(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_209(Global_46760[0]);
			Function_209(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_209(Global_46760[1]);
			Function_209(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_209(Global_46838[0]);
			Function_209(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_209(Global_46796[5]);
			Function_209(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_207(21, &bParam2, 4);
			Function_209(Global_46760[4]);
			Function_209(Global_46796[4]);
			Function_198(&Global_119935, 0x2000000);
			Function_198(&Global_119935, 0x4000000);
			Function_198(&Global_119935, 4096);
			Function_198(&Global_119935, 8);
			Function_198(&Global_119935, 8388608);
			Function_198(&Global_119935, 524288);
			Function_198(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_209(Global_46760[4]);
			Function_209(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_199(&(Global_43791[Global_46760[4]]), 256);
			Function_209(Global_46760[4]);
			Function_209(Global_46796[0]);
			Function_8(&(Global_43791[Global_46796[0]]), 32768);
			Function_199(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_209(Global_46760[0]);
			Function_209(Global_46760[5]);
			Function_207(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_209(Global_46796[3]);
			Function_8(&(Global_43791[Global_46796[3]]), 32768);
			Function_199(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_207(9, &bParam2, 4);
			Function_209(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_8(&(Global_43791[Global_46838[1]]), 32768);
			Function_209(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_207(12, &bParam2, 4);
			Function_199(&(Global_43791[Global_46838[1]]), 256);
			Function_209(Global_46816[3]);
			Function_209(Global_46866[0]);
			Function_209(Global_46850[0]);
			Function_205(4);
			Function_201(13, 1);
			Function_201(1, 1);
			Function_201(18, 1);
			Function_203(34, 1);
			Function_203(44, 1);
			Function_203(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_207(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_209(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_209(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_209(Global_46866[0]);
			Function_209(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_209(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_209(Global_46850[0]);
			Function_209(Global_46866[0]);
			Function_209(Global_46866[1]);
			Function_209(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_207(23, &bParam2, 3);
			Function_201(23, 1);
			Function_209(Global_46850[0]);
			Function_209(Global_46850[2]);
			Function_8(&(Global_43791[Global_46850[2]]), 32768);
			Function_199(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_207(19, &bParam2, 4);
			Function_209(Global_46850[0]);
			Function_209(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_207(24, &bParam2, 3);
			Function_201(24, 1);
			Function_209(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_209(Global_46850[0]);
			Function_209(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_209(Global_46866[12]);
			Function_209(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_209(Global_46866[12]);
			Function_209(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_207(25, &bParam2, 10);
			Function_209(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_209(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_209(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_207(13, &bParam2, 4);
			Function_209(Global_46866[2]);
			Function_209(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_61(8))
				{
					Function_200(8, 0, 0, 1, 0);
				}
			}
			Function_209(Global_46850[0]);
			Function_205(9);
			Function_201(7, 1);
			Function_201(11, 1);
			Function_201(3, 1);
			Function_201(20, 1);
			Function_203(57, 1);
			break;
		
		case 0x0000002A:
			Function_207(2, &bParam2, 4);
			Function_209(Global_46914[0]);
			Function_209(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_209(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_209(Global_46914[0]);
			Function_209(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_209(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_209(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_209(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_207(17, &bParam2, 4);
			Function_209(Global_46926[0]);
			Function_209(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_59(15))
				{
					Function_197(15, 0, 1);
				}
			}
			Function_153(2, 26);
			Function_199(&(Global_43791[Global_46914[1]]), 256);
			Function_205(11);
			Function_209(Global_46914[1]);
			Function_209(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_209(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_209(Global_46914[1]);
			Function_209(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_209(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_209(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_209(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_209(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_209(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_209(Global_46914[1]);
			Function_191(11);
			Function_205(12);
			Global_26200[1114].f_40 = 0;
			Function_203(56, 1);
			if (!&bParam2)
			{
				if (!Function_61(9))
				{
					Function_200(9, 0, 0, 0, 0);
				}
				if (!Function_61(10))
				{
					Function_200(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_176(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_191(int iParam0) //Position: 0xB72A / 46890
{
	var uVar0;
	
	if (!Function_100(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_196(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_196(&Global_26200[iParam014] + 88, 0);
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
			Function_192(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_192(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xB8A7 / 47271
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
		Function_194(Function_195(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_194(Function_195(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_194(StackVal);
				Var1 = Function_194(StackVal);
				if (Function_193(StackVal, StackVal, Var1, Var3))
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

bool Function_193(struct<2> Param0, struct<2> Param2) //Position: 0xB9B2 / 47538
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_194(int iParam0) //Position: 0xB9DE / 47582
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

var Function_195(vector3 vParam0) //Position: 0xBA35 / 47669
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

void Function_196(var uParam0, int iParam1) //Position: 0xBA83 / 47747
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

void Function_197(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBADE / 47838
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_56(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_59(bParam0))
	{
		if (!Function_61(bParam0))
		{
			Function_200(bParam0, 1, 0, 0, 1);
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
		Function_109(457, 1, 0, 0);
		Function_163(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_106(0, 0, 1, 1))
			{
				Function_67(1);
				Function_66(1, 0);
			}
			else
			{
				Function_65();
			}
		}
	}
	return;
}

void Function_198(var uParam0, int iParam1) //Position: 0xBC7F / 48255
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_199(var uParam0, int iParam1) //Position: 0xBC90 / 48272
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_200(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xBCAA / 48298
{
	char* cVar0[32];
	
	if (!Function_56(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_165(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_61(bParam0))
	{
		Function_109(456, 1, 0, 0);
		Function_163(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_106(0, 0, 1, 1))
			{
				Function_67(1);
				Function_66(1, 5);
			}
			else
			{
				Function_65();
			}
		}
		Function_156(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_155() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_155() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_162(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_38())
		{
			if (!Function_45(Global_119934, 2))
			{
				Function_40(&Global_54076, 2, 1, 0);
			}
		}
	}
}

int Function_201(int iParam0, int iParam1) //Position: 0xBE06 / 48646
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_202(iParam0, iParam1);
	Function_40(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_202(int iParam0, int iParam1) //Position: 0xBE7B / 48763
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_203(int iParam0, int iParam1) //Position: 0xBED8 / 48856
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_204(iParam0, iParam1);
	Function_40(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_204(int iParam0, int iParam1) //Position: 0xBF4B / 48971
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_205(int iParam0) //Position: 0xBFA6 / 49062
{
	var uVar0;
	var uVar1;
	
	if (!Function_100(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_206(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_206(&Global_26200[iParam014] + 88, 0);
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
			Function_109(468, 1, 0, 0);
			Function_153(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_162("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_192(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_200(14, 1, 0, 0, 0);
				Function_152(14, 1, 0, 0, 0);
			}
			if (!Function_106(0, 0, 1, 1))
			{
				Function_67(1);
				Function_66(1, 6);
			}
			else
			{
				Function_65();
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
			Function_162("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_109(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_153(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_206(var uParam0, int iParam1) //Position: 0xC268 / 49768
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

void Function_207(bool bParam0, bool bParam1, int iParam2) //Position: 0xC2C0 / 49856
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_208(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_211(bParam0, 0, 0);
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

bool Function_208(int iParam0, int iParam1) //Position: 0xC333 / 49971
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_209(int iParam0) //Position: 0xC347 / 49991
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_47(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_8(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_109(473, 1, 0, 0);
		iVar0 = Function_210(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_109(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_109(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_109(476, 1, 0, 0);
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
		Function_153(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_153(7, 30);
	}
	if (Function_87(473) <= Function_88(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_210(int iParam0) //Position: 0xC438 / 50232
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_21(iParam0))
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

int Function_211(bool bParam0, bool bParam1, int iParam2) //Position: 0xC490 / 50320
{
	if (!Function_212(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_75(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_75(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_75(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_212(int iParam0) //Position: 0xC4EA / 50410
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_213(int iParam0) //Position: 0xC4FC / 50428
{
	int iVar0;
	
	if (Function_50(iParam0, 1) && Function_50(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_214(struct<185> Param0) //Position: 0xC530 / 50480
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
			Function_215(4, 0, 0);
		}
	}
	return;
}

void Function_215(bool bParam0, var uParam1, int iParam2) //Position: 0xC59B / 50587
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
		Function_216(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_216(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC685 / 50821
{
	int iVar0;
	
	Function_218(bParam0);
	Function_108(&bParam1);
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
	Function_217();
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

void Function_217() //Position: 0xC804 / 51204
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_218(int iParam0) //Position: 0xC810 / 51216
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

int Function_219(bool bParam0) //Position: 0xC856 / 51286
{
	if (!Function_32(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

int Function_220(bool bParam0) //Position: 0xC876 / 51318
{
	if (!Function_32(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_221(int iParam0) //Position: 0xC891 / 51345
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_222(105)), 0);
	return;
}

int Function_222(int iParam0) //Position: 0xC8B4 / 51380
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_223(int iParam0) //Position: 0xC8CB / 51403
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_108(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_108(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_108(&Global_21369 + 48);
	PRINTNL();
	Function_224(&iParam0);
	return;
}

void Function_224(int iParam0) //Position: 0xC96D / 51565
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_222(90)), 0);
	return;
}

void Function_225(var uParam0) //Position: 0xC990 / 51600
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &uParam0, 0);
	return;
}

bool Function_226() //Position: 0xC9AD / 51629
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_99725)
	{
		if (Function_166(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_227(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC9D3 / 51667
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_231(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_228(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_228(bParam0, bParam1, bParam2, 4294967295);
}

int Function_228(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xCA31 / 51761
{
	var uVar0;
	
	if (!Function_230(bParam2))
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
	uVar0 = Function_231(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_229(uVar0);
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

var Function_229(int iParam0) //Position: 0xCB95 / 52117
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

bool Function_230(int iParam0) //Position: 0xCBD3 / 52179
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_231(int iParam0, int iParam1, bool bParam2) //Position: 0xCBE8 / 52200
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_232() //Position: 0xCC08 / 52232
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

bool Function_233() //Position: 0xCC74 / 52340
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

void Function_234(int iParam0) //Position: 0xCCA8 / 52392
{
	if (iLocal_191 == 0)
	{
		if (Function_236(&iParam0))
		{
			Function_235(&iParam0);
			iLocal_191 = 1;
		}
	}
	return;
}

void Function_235(struct<16> Param0) //Position: 0xCCC6 / 52422
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
						Function_142(&uVar2, bVar3, "GunfireShock");
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

bool Function_236(int iParam0) //Position: 0xCD6A / 52586
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

void Function_237(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xCE24 / 52772
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

bool Function_238(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xCE5F / 52831
{
	if (!Function_242(&iParam1))
	{
		Function_272(&iParam1);
	}
	switch (uParam0)
	{
		case 0x000003EC:
			UI_LABEL_SET_TEXT("RacePosition", GET_ACTOR_ENUM_STRING(&uParam3));
			UI_ENTER("RacePosition");
			PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
			if (Global_116927[516] != 5 && bParam4)
			{
				Function_162("RCM_Gunslinger_Warning", 10.0f, 1, 0, 0, 1, 0);
			}
			Function_240(&iParam1);
			uParam0 = 1006;
			break;
		
		case 0x000003EE:
			if (Function_268(&iParam1) < (5.0f - 1.0f) && UI_ISACTIVE("RacePosition"))
			{
				UI_EXIT("RacePosition");
			}
			if (Function_268(&iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(&iParam2, "Tutorial0Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				if (UI_ISACTIVE("RacePosition"))
				{
					UI_EXIT("RacePosition");
				}
				Function_240(&iParam1);
				uParam0 = 1007;
			}
			break;
		
		case 0x000003EF:
			if (Function_268(&iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(&iParam2, "Tutorial1Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_240(&iParam1);
				uParam0 = 1104;
			}
			break;
		
		case 0x00000450:
			if (Function_268(&iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(&iParam2, "Tutorial2Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_239();
				Function_240(&iParam1);
				uParam0 = 1000;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_239() //Position: 0xD07F / 53375
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
							Function_142(&uVar2, bVar3, "point");
						}
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_240(int iParam0) //Position: 0xD11A / 53530
{
	Function_241(&iParam0, 0.0f);
	return;
}

void Function_241(vector3 vParam0) //Position: 0xD127 / 53543
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_27(&vParam0, 1);
	Function_356(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_242(int iParam0) //Position: 0xD14C / 53580
{
	return Function_50(iParam0, 1);
}

void Function_243(struct<16> Param0) //Position: 0xD15A / 53594
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	iLocal_191 = 0;
	return;
}

void Function_244(struct<89> Param0) //Position: 0xD16F / 53615
{
	var uVar0;
	var uVar1;
	struct<61> Var2;
	
	bLocal_205 = false;
	iLocal_206 = 0;
	if (!IS_ACTOR_VALID(&Param0 + 8))
	{
		LOG_ERROR("dueler is not valid, exiting dueling");
		Function_286(&Param0);
		TERMINATE_THIS_SCRIPT();
	}
	AUDIO_ALLOW_PREDUEL_SPEECH(&Param0 + 8);
	AUDIO_ALLOW_PREDUEL_SPEECH(&Param0);
	if (IS_VOLUME_VALID(&Param0 + 40))
	{
		FIRE_STOP_FLAMES_IN_VOLUME(&Param0 + 40);
		Function_267(&Param0 + 40);
		Function_265(&Param0 + 40, &iLocal_201, 0);
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
	if (Function_263(1))
	{
		Function_261(9);
		iLocal_192 = 1;
	}
	Function_348(&Param0 + 8);
	if (!Function_260(GET_ACTOR_ENUM(&Param0), 6, 4))
	{
		Function_228(GET_ACTOR_ENUM(&Param0), 6, 4, 4294967295);
		Param0.f_48 = 1;
	}
	else if (Function_174(Function_227(GET_ACTOR_ENUM(&Param0), 6, 4)) < 0)
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
	Function_259(&Param0 + 8, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Param0, 0);
	ACTOR_FORCE_WEAPON_RENDER(&Param0 + 8, 1, 1);
	ACTOR_ENABLE_VARIABLE_MESH(&Param0 + 8, 5, true);
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	Function_258(&Param0);
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
		Function_257(&Param0 + 8);
		TELEPORT_ACTOR_WITH_HEADING(&Param0 + 56, Function_257(&Param0 + 8), GET_OBJECT_HEADING(&Param0 + 8), 1, 1, true);
		RESET_ANIM_SET_FOR_ACTOR(&Param0 + 56, 1);
		SET_LINKED_ANIM_TARGET(&Param0 + 8, &Param0 + 56);
		SET_ANIM_SET_FOR_ACTOR(&Param0 + 8, "duel_hostage", 0);
		SET_ANIM_SET_FOR_ACTOR(&Param0 + 56, "duel_hostage", 0);
		DESTROY_OBJECT(DROP_ACCESSORY_ENUM(&Param0 + 8, 0));
		ADD_DUEL_HOSTAGE(&Param0 + 56, &Param0);
		SET_EMOTION(&Param0 + 56, 3, -1.0f);
		TASK_FLEE_ACTOR(&Param0 + 56, &Param0 + 8, 20.0f, -1.0f, 0, 0, 0);
	}
	Function_270(&Param0);
	if (IS_VOLUME_VALID(&Param0 + 72))
	{
		uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), &iLocal_201, 4294967295, 1);
		LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(&uVar1, &Param0 + 72, "", 1);
		Function_256(&uVar1);
		DESTROY_OBJECTSET(&uVar1);
	}
	iLocal_207 = 0;
	*(&Var2 + 64) = 6;
	*(&Var2 + 168) = 6;
	uVar30 = 6;
	if (Function_254(&Var2, Param0.f_84))
	{
		iLocal_207 = Var2.f_56;
		if (Var2.f_60 >= 0)
		{
			if (Var2.f_56 == 1)
			{
				Function_253(&iLocal_201, &Var2, &Param0, &uVar30);
			}
			else if (Var2.f_56 == 2)
			{
				Function_250(50.0f, &iLocal_201, &Var2, &Param0, &uVar30);
			}
		}
	}
	Function_247(&Param0, &iLocal_201);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(&Param0 + 8);
	if (!Function_126())
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
	if (Function_126())
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
	Function_246(1);
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
	Function_245(&uLocal_197, 0.0f);
	return;
}

void Function_245(int iParam0, float fParam1) //Position: 0xD818 / 55320
{
	if (!Function_242(&iParam0))
	{
		Function_241(&iParam0, fParam1);
	}
	return;
}

void Function_246(int iParam0) //Position: 0xD830 / 55344
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

int Function_247(int iParam0, int iParam1) //Position: 0xD84D / 55373
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
	uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), &iParam1, 15, 1);
	iVar2 = LOCATE_ACTORS_IN_VOLUME(&uVar0, &uVar1, 0, 1);
	uLocal_189 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), &iParam1, 15, 1);
	bVar3 = false;
	while (bVar3 <= iVar2)
	{
		iVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uVar1));
		if (((((&iVar4 == &iParam0 + 8 && &iVar4 == &iParam0 + 56) && &iVar4 == &iParam0) && IS_ACTOR_HUMAN(&iVar4)) && !IS_OBJECT_IN_OBJECTSET(&iVar4, &uLocal_187)) && !DECOR_CHECK_EXIST(&iVar4, "ignoreactorinduel"))
		{
			if (DECOR_CHECK_EXIST(&iVar4, "DuelIsCrowdActor"))
			{
				Function_248(&iVar4, &iParam0, &iParam1);
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

void Function_248(var uParam0, int iParam1, int iParam2) //Position: 0xD9CE / 55758
{
	bool bVar0;
	var uVar1[2];
	
	iParam2 = &iParam2;
	if (DECOR_CHECK_EXIST(&uParam0, "DuelIsCrowdActor"))
	{
		bVar0 = DECOR_GET_INT(&uParam0, "DuelIsCrowdActor");
		Function_249(bVar0, &uVar1);
		SET_ANIM_SET_FOR_ACTOR(&uParam0, &(uVar1[0]), 0);
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, &(uVar1[1]));
	}
	TASK_FACE_ACTOR(&uParam0, &iParam1 + 8, 1, 3212836864);
	TASK_PRIORITY_SET(&uParam0, true);
	return;
}

void Function_249(var uParam0, int[] iParam1) //Position: 0xDA51 / 55889
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

int Function_250(var uParam0, var uParam1, struct<61> Param2) //Position: 0xDC08 / 56328
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
	uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), &uParam1, 15, 1);
	iVar4 = LOCATE_ACTORS_IN_VOLUME(&uVar0, &uVar1, 0, 1);
	iVar5 = 0;
	bVar6 = false;
	while (bVar6 <= iVar4)
	{
		iVar7 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, &uVar1));
		if ((((((((((&iVar7 == &iParam3 + 8 && &iVar7 == &iParam3 + 56) && &iVar7 == &iParam3) && IS_ACTOR_HUMAN(&iVar7)) && !IS_ACTOR_HOGTIED(&iVar7)) && !IS_ACTOR_RIDING_VEHICLE(&iVar7)) && !IS_ACTOR_RIDING(&iVar7)) && !IS_ACTOR_DRUNK(&iVar7)) && !IS_OBJECT_IN_OBJECTSET(&iVar7, &uLocal_187)) && !DECOR_CHECK_EXIST(&iVar7, "ignoreactorinduel")) && iVar5 > Param2.f_60)
		{
			uParam4[iVar5] = &iVar7;
			Function_252(GET_PERS_CHAR_FROM_ACTOR(&iVar7), 1);
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
	Function_251(&uParam4, iVar5, 0, &Param2);
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

int Function_251(var[] uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xDDFE / 56830
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
			Function_27(&bVar9, 4);
		}
		if (iVar8 == iVar0)
		{
			Function_27(&bVar9, 8);
		}
		if (iVar8 == iVar4)
		{
			Function_27(&bVar9, 16);
		}
		if (bParam2)
		{
			bVar10 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			if (bVar10 < 0,5f || iVar7 <= 3)
			{
				Function_27(&bVar9, 64);
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

int Function_252(bool bParam0, bool bParam1) //Position: 0xDF4A / 57162
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

void Function_253(var uParam0, struct<61> Param1) //Position: 0xDFFC / 57340
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
			uParam3[iVar0] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uParam0, Function_22(), uLocal_208[iVar0], *(&Param1 + 64[iVar12]), Vector(0.0f, bVar5, 0.0f));
			TASK_FACE_COORD(&(uParam3[iVar0]), &Param1 + 36, 1);
			TASK_PRIORITY_SET(&(uParam3[iVar0]), true);
			uVar6 = GET_OBJECT_MODEL_NAME(&(uParam3[iVar0]));
			PRINTFLOAT(bVar5);
			PRINTNL();
			iVar0++;
		}
		iVar1++;
	}
	Function_251(&uParam3, iVar0, 0, &Param1);
}

bool Function_254(struct<61> Param0) //Position: 0xE0C9 / 57545
{
	if (iParam1 <= 0)
	{
		return Function_255(&Param0, iParam1);
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

int Function_255(struct<61> Param0) //Position: 0x10E50 / 69200
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

void Function_256(var uParam0) //Position: 0x116F2 / 71410
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

struct<8> Function_257(int iParam0) //Position: 0x11741 / 71489
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

void Function_258(int iParam0) //Position: 0x1176A / 71530
{
	bool bVar0;
	void fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		fVar1 = GET_WEAPON_EQUIPPED(&iParam0, true);
		if (Function_212(fVar1))
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

void Function_259(int iParam0, bool bParam1) //Position: 0x11813 / 71699
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	DECOR_SET_INT(&iParam0, "honor", bParam1);
	return;
}

bool Function_260(bool bParam0, int iParam1, int iParam2) //Position: 0x11835 / 71733
{
	int iVar0;
	
	iVar0 = Function_227(bParam0, iParam1, iParam2);
	return Function_30(iVar0);
}

void Function_261(int iParam0) //Position: 0x1184B / 71755
{
	Function_262(&Global_43580, iParam0);
	return;
}

void Function_262(var uParam0, int iParam1) //Position: 0x11859 / 71769
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

bool Function_263(int iParam0) //Position: 0x11881 / 71809
{
	return Function_264(&Global_43580, iParam0);
}

int Function_264(var uParam0, int iParam1) //Position: 0x1188F / 71823
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_265(bool bParam0, bool bParam1, int iParam2) //Position: 0x118AC / 71852
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
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), &bParam1, 15, 1);
	LOCATE_ACTORS_IN_VOLUME(&bParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		iVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&iVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&iVar2);
			if (((!ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3) && IS_ACTOR_VEHICLE(&iVar3)) && &iVar3 == &iParam2) && !Function_266(&iVar3))
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

bool Function_266(int iParam0) //Position: 0x119B8 / 72120
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	return (bVar0 <= 1155 && bVar0 >= 1176);
}

void Function_267(var uParam0) //Position: 0x119DF / 72159
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

float Function_268(vector3 vParam0) //Position: 0x11A2C / 72236
{
	if (Function_242(&vParam0))
	{
		if (Function_269(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_269(int iParam0) //Position: 0x11AF9 / 72441
{
	return Function_50(iParam0, 2);
}

int Function_270(int iParam0) //Position: 0x11B07 / 72455
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
		uLocal_185 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), &iLocal_201, 15, 1);
	}
	else
	{
		Function_271(&uLocal_185);
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
			if (!bVar12 && !Function_266(&iVar11))
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

void Function_271(var uParam0) //Position: 0x11CF2 / 72946
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

void Function_272(int iParam0) //Position: 0x11D32 / 73010
{
	if (!Function_242(&iParam0))
	{
		Function_241(&iParam0, 0.0f);
	}
	return;
}

void Function_273(struct<85> Param0) //Position: 0x11D49 / 73033
{
	struct<61> Var0;
	
	*(&Var0 + 64) = 6;
	*(&Var0 + 168) = 6;
	if (Param0.f_84 <= 0)
	{
		if (Function_254(&Var0, Param0.f_84))
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
						uLocal_208[iVar29] = Function_276(&(Global_46972[0]), 1, 0, 1);
						Function_274(&iLocal_103, uLocal_208[iVar29], 3, 0);
						iVar29++;
					}
					iVar28++;
				}
			}
		}
	}
	return;
}

var Function_274(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11DD3 / 73171
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_275(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_275(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_275(struct<13> Param0) //Position: 0x11EAF / 73391
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

var Function_276(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x11EC2 / 73410
{
	return Function_277(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_277(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x11ED9 / 73433
{
	return Function_278(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_278(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x11EF7 / 73463
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
		Function_284();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_283(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_282(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_282(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_281(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_283(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_281(bVar0))
				{
					Function_280();
				}
				Function_279(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_283(bVar1))
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

void Function_279(int iParam0) //Position: 0x121F0 / 74224
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

void Function_280() //Position: 0x122A4 / 74404
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

bool Function_281(bool bParam0) //Position: 0x122DF / 74463
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

void Function_282(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x1230C / 74508
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

bool Function_283(bool bParam0) //Position: 0x12467 / 74855
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_284() //Position: 0x1247E / 74878
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_280();
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
	Function_280();
	return;
}

void Function_285(var uParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x124CA / 74954
{
	Function_360(&iLocal_103, "duel_player", 5, 0);
	Function_360(&iLocal_103, "Dueling/duel_player", 8, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			Function_274(&iLocal_103, 59, 2, 0);
		}
		Function_360(&iLocal_103, "duel_hostage", 5, 0);
		Function_360(&iLocal_103, "Dueling/duel_hostage", 8, 0);
		bLocal_193 = "duel_hostage";
	}
	else
	{
		if ((Function_260(GET_ACTOR_ENUM(&uParam3), 6, 4) && uParam0 != 0) && !Global_6623)
		{
			if (Function_174(Function_227(GET_ACTOR_ENUM(&uParam3), 6, 4)) > 10)
			{
				uParam0 = 2;
			}
			else if (Function_174(Function_227(GET_ACTOR_ENUM(&uParam3), 6, 4)) > 5)
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
						Function_360(&iLocal_103, "duel_easy_A_npc", 5, 0);
						Function_360(&iLocal_103, "Dueling/duel_Easy_A_npc", 8, 0);
						bLocal_193 = "duel_Easy_A_npc";
						break;
					
					case 0x00000001:
						Function_360(&iLocal_103, "duel_easy_B_npc", 5, 0);
						Function_360(&iLocal_103, "Dueling/duel_Easy_B_npc", 8, 0);
						bLocal_193 = "duel_Easy_B_npc";
						break;
				}
				break;
			
			case 0x00000001:
				switch (bLocal_203)
				{
					case 0x00000000:
						Function_360(&iLocal_103, "duel_mid_A_npc", 5, 0);
						Function_360(&iLocal_103, "Dueling/duel_Mid_A_npc", 8, 0);
						bLocal_193 = "duel_Mid_A_npc";
						break;
					
					case 0x00000001:
						Function_360(&iLocal_103, "duel_mid_B_npc", 5, 0);
						Function_360(&iLocal_103, "Dueling/duel_Mid_B_npc", 8, 0);
						bLocal_193 = "duel_Mid_B_npc";
						break;
					
					case 0x00000002:
						Function_360(&iLocal_103, "duel_mid_C_npc", 5, 0);
						Function_360(&iLocal_103, "Dueling/duel_Mid_C_npc", 8, 0);
						bLocal_193 = "duel_Mid_C_npc";
						break;
				}
				break;
			
			case 0x00000002:
				switch (bLocal_203)
				{
					case 0x00000000:
						Function_360(&iLocal_103, "duel_hard_A_npc", 5, 0);
						Function_360(&iLocal_103, "Dueling/duel_Hard_A_npc", 8, 0);
						bLocal_193 = "duel_Hard_A_npc";
						break;
					
					case 0x00000001:
						Function_360(&iLocal_103, "duel_hard_B_npc", 5, 0);
						Function_360(&iLocal_103, "Dueling/duel_Hard_B_npc", 8, 0);
						bLocal_193 = "duel_Hard_B_npc";
						break;
					
					case 0x00000002:
						Function_360(&iLocal_103, "duel_hard_C_npc", 5, 0);
						Function_360(&iLocal_103, "Dueling/duel_Hard_C_npc", 8, 0);
						bLocal_193 = "duel_Hard_C_npc";
						break;
				}
				break;
			}
	}
	bLocal_195 = &bLocal_193;
	Function_360(&iLocal_103, "nminigames", 10, 0);
	Function_360(&iLocal_103, "crowd_duel", 5, 0);
	Function_360(&iLocal_103, "custom/crowd_duel_center", 8, 0);
	Function_360(&iLocal_103, "custom/crowd_duel_left", 8, 0);
	Function_360(&iLocal_103, "custom/crowd_duel_right", 8, 0);
}

void Function_286(int iParam0) //Position: 0x1296E / 76142
{
	if (!bLocal_205)
	{
		Function_143(&iParam0);
	}
	if (!iLocal_206)
	{
		Function_287(&iParam0);
	}
	return;
}

void Function_287(struct<125> Param0) //Position: 0x1298C / 76172
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
	Function_288(&Param0);
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

int Function_288(int iParam0) //Position: 0x12ADC / 76508
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
					Function_300(GET_PERS_CHAR_FROM_ACTOR(&uVar2));
				}
			}
			else if (iLocal_207 == 1)
			{
				DECOR_REMOVE(&uVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(&uVar2, 1);
				TASK_CLEAR(&uVar2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar2, true);
				Function_291(&uVar2, 1, 0, 2);
			}
			else if (iLocal_207 == 0)
			{
				DECOR_REMOVE(&uVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(&uVar2, 1);
				if ((bVar3 && 64) != 0)
				{
					Function_289(&uVar2, bVar3, &iParam0 + 16);
				}
				else
				{
					TASK_CLEAR(&uVar2);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar2, true);
					Function_291(&uVar2, 1, 0, 2);
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

void Function_289(int iParam0, var uParam1, int iParam2) //Position: 0x12CAB / 76971
{
	bool bVar0;
	var uVar1;
	var uVar3;
	
	uParam1 = uParam1;
	TASK_CLEAR(&iParam0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1,5f), 1, 0);
	uVar1 = Vector(0.0f, 0.0f, 0.0f);
	Function_19(&iParam0);
	uVar3 = Function_19(&iParam0);
	Function_290(&iParam2, &uVar3, &uVar1);
	TASK_GO_NEAR_COORD(false, &uVar1, 5.0f, 1);
	TASK_WANDER(false, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_PRIORITY_SET(&iParam0, 2);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(&iParam0, 0);
	return;
}

void Function_290(vector3 vParam0) //Position: 0x12D15 / 77077
{
	vParam2 = vParam1;
	vParam2 = (vParam2 + ((vParam1 - vParam0) * 3.0f));
	vParam2.f_8 = (vParam2.z + ((vParam1.z - vParam0.z) * 3.0f));
	vParam2 = (vParam2 + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	vParam2.f_8 = (vParam2.z + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	return;
}

int Function_291(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x12D76 / 77174
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
					Function_292(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_292(&uParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_292(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x12E64 / 77412
{
	char* cVar0[32];
	
	Function_299();
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
	if (Function_298(&uParam0) == 1)
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
	Function_297(&uParam0, 0);
	Function_296(&uParam0, iParam1);
	Function_295(&uParam0, &uParam2);
	Function_294(&uParam0, uParam3);
	if (Function_293(&uParam0) != 5)
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

int Function_293(int iParam0) //Position: 0x130D0 / 78032
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_294(var uParam0, bool bParam1) //Position: 0x130F4 / 78068
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_295(var uParam0, int iParam1) //Position: 0x13118 / 78104
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_296(var uParam0, bool bParam1) //Position: 0x1313E / 78142
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_297(var uParam0, bool bParam1) //Position: 0x13165 / 78181
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_298(bool bParam0) //Position: 0x13189 / 78217
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_299() //Position: 0x131A8 / 78248
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

int Function_300(int iParam0) //Position: 0x131F7 / 78327
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_301(struct<221> Param0) //Position: 0x132A0 / 78496
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	ENABLE_USE_CONTEXTS(1);
	Global_39922.f_88 |= 16384;
	if (IS_ACTOR_VALID(&Param0 + 312) && Param0.f_220 == 358)
	{
		SET_ACTOR_INVULNERABILITY(&Param0 + 312, false);
	}
	SET_ACTOR_INVULNERABILITY(&Global_54076, false);
	return;
}

bool Function_302(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0x132E9 / 78569
{
	var uVar0;
	var uVar6;
	bool bVar7;
	
	if (!DECOR_CHECK_EXIST(&Global_54076, "RCM_Cutscene_HideActors"))
	{
		Function_315();
		Function_314();
		DECOR_SET_BOOL(&Global_54076, "RCM_Cutscene_HideActors", true);
	}
	SET_RCM_ACTOR_CALL_OVER_SUPPRESS(2.0f);
	bVar7 = Function_303(&uParam0, &uParam1, &uVar0, &uVar6, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6, &uParam7, 0, &uParam8, &uParam9, &uParam10, &uParam11, &uParam12, 1);
	if (bVar7)
	{
		DECOR_REMOVE(&Global_54076, "RCM_Cutscene_HideActors");
		return 1;
	}
	return 0;
}

int Function_303(var uParam0, int iParam1, struct<41> Param2) //Position: 0x133A2 / 78754
{
	if (!&bParam15)
	{
		Function_311(&iParam1, &uParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (uParam3 != 99 && (Function_310(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&uParam0, 0, &uParam11, &uParam12, &uParam13, &uParam14);
				Call_Loc(uParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_240(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_309())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_308(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_240(&iParam1 + 4);
						iParam1 = 1004;
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
					Function_308(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_268(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_268(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&uParam5);
					if (StackVal)
					{
						Function_306(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_308(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_240(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&uParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_2(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(&uParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (&bParam16)
					{
						Function_304();
						if (!IS_OBJECT_VALID(&iParam1 + 24))
						{
							HUD_ENABLE(1);
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
				Call_Loc(&uParam8);
				if (StackVal)
				{
					Function_135(1, 1);
					if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
					{
						DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(&iParam1 + 32))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						DESTROY_VOLUME(&iParam1 + 32);
					}
					if (IS_LAYOUTREF_VALID(&Global_10996))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
						}
					}
					iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(&uParam9);
				if (StackVal)
				{
					Call_Loc(&uParam7);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && uParam3 == 99) && !Function_310(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_304() //Position: 0x13A04 / 80388
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_305();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_305() //Position: 0x13A49 / 80457
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_306(var uParam0, int iParam1) //Position: 0x13A5B / 80475
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_307(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_307(int iParam0) //Position: 0x13AED / 80621
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == &iParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

int Function_308(bool bParam0) //Position: 0x13B1E / 80670
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(&uVar1);
						DECOR_SET_BOOL(&uVar1, "refdbycutscene", true);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&uVar1)))
					{
						SET_MOST_RECENT_MOUNT(&uVar1, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(&uVar1);
					DECOR_REMOVE(&uVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_309() //Position: 0x13BE1 / 80865
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_310(struct<37> Param0) //Position: 0x13C1E / 80926
{
	return Param0.f_36;
}

void Function_311(var uParam0, int iParam1) //Position: 0x13C29 / 80937
{
	Function_312(&uParam0, &iParam1, 0);
	return;
}

void Function_312(var uParam0, bool bParam1, bool bParam2) //Position: 0x13C39 / 80953
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_98250 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_313(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_109(20, 1, 0, 0);
		uParam0 = 1105;
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
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				if (((((((uParam0 == 1000 && uParam0 == 1001) && uParam0 == 1002) && uParam0 == 1003) && uParam0 == 1103) && uParam0 == 1104) && uParam0 == 1105) && uParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_313(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_109(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_313(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x13DB1 / 81329
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &iParam5);
		}
	}
}

int Function_314() //Position: 0x13DDB / 81371
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
	uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (IS_LAYOUTREF_VALID(&Global_99717))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar0, &Global_99717);
		}
	}
	if (IS_ACTOR_VALID(&uVar1))
	{
		if (IS_LAYOUTREF_VALID(&Global_99717))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar1, &Global_99717);
		}
	}
	return 1;
}

void Function_315() //Position: 0x13E36 / 81462
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	var uVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	
	uVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), &Global_99717, 15, 0);
	Var3 = Global_54078;
	uVar5 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_22(), 2, Var3, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	LOCATE_ACTORS_IN_VOLUME(&uVar5, &uVar2, 0, 1);
	bVar6 = false;
	while (bVar6 < (GET_OBJECTSET_SIZE(&uVar2) - 1))
	{
		uVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, &uVar2));
		if (IS_ACTOR_VALID(&uVar0))
		{
			bVar7 = false;
			while (bVar7 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar7);
				if (GET_ACTOR_ENUM(&uVar1) == GET_ACTOR_ENUM(&uVar0))
				{
					if (IS_ACTOR_DRAFTED(&uVar0))
					{
						uVar8 = GET_ACTOR_DRAFTED_TO(&uVar0);
						if (IS_ACTOR_VALID(&uVar8))
						{
							if (!STRINGS_ARE_EQUAL(GET_LAYOUT_NAME(GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&uVar8))), "cutscene layout"))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(&uVar0), &uVar0);
							}
						}
					}
					else if (!STRINGS_ARE_EQUAL(GET_LAYOUT_NAME(GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&uVar0))), "cutscene layout"))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(&uVar0), &uVar0);
					}
				}
				bVar7++;
			}
		}
		bVar6++;
	}
	DISBAND_OBJECTSET(&uVar2);
	DESTROY_OBJECTSET(&uVar2);
	DESTROY_VOLUME(&uVar5);
	return;
}

int Function_316() //Position: 0x13F75 / 81781
{
	return 1;
}

int Function_317() //Position: 0x13F7C / 81788
{
	if (HUD_IS_FADED())
	{
		Function_137();
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		SET_ACTOR_INVULNERABILITY(&iLocal_338, false);
		SET_ACTOR_INVULNERABILITY(&Global_54076, false);
		DECOR_SET_INT(&iLocal_338, "iAdditionalMoney", 200);
		Function_348(&iLocal_338);
		Function_259(&iLocal_338, 0);
		Function_27(&Global_99725[4843] + 228, 512);
		GATEWAY_DISABLE(&Global_99725[4843] + 288, 1);
		AI_STOP_IGNORING_ACTORS();
		DECOR_SET_BOOL(&Global_54076, "unpauseduel", true);
	}
	iLocal_398 = 6;
	return 1;
}

int Function_318() //Position: 0x14019 / 81945
{
	Function_137();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(&iLocal_338, false);
	SET_ACTOR_INVULNERABILITY(&Global_54076, false);
	DECOR_SET_INT(&iLocal_338, "iAdditionalMoney", 200);
	Function_348(&iLocal_338);
	Function_259(&iLocal_338, 0);
	Function_27(&Global_99725[4843] + 228, 512);
	GATEWAY_DISABLE(&Global_99725[4843] + 288, 1);
	AI_STOP_IGNORING_ACTORS();
	DECOR_SET_BOOL(&Global_54076, "unpauseduel", true);
	iLocal_437 = 6;
	iLocal_398 = 6;
	return 1;
}

int Function_319() //Position: 0x140A8 / 82088
{
	if (!iLocal_354)
	{
		Function_321(StackVal, Local_355, &uLocal_358);
		Function_320(&Global_99725[4843] + 320, 0);
		iLocal_354 = 1;
	}
	Function_138(&iLocal_360, &iLocal_437, &iLocal_399, &uLocal_438, 48);
	return 1;
}

void Function_320(var uParam0, bool bParam1) //Position: 0x140E8 / 82152
{
	var uVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&uParam0, "UseCase1");
	bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
	while (bVar1 >= 4294967295)
	{
		iVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, &uVar0);
		uVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar2, &uParam0);
		if (IS_PHYSINST_VALID(&uVar3))
		{
			if (&bParam1)
			{
				SHOW_PHYSINST(&uVar3);
			}
			else
			{
				HIDE_PHYSINST(&uVar3);
			}
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, bVar1 + 1);
	}
	return;
}

void Function_321(vector3 vParam0) //Position: 0x14171 / 82289
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	
	vVar3 = vParam0;
	Function_323(0, 0x40400000);
	if (!Function_53(StackVal, vParam0))
	{
		iVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		iVar1 = &Global_21369 + 72;
		iVar2 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_VOLUME_VALID(&iParam2))
			{
				if (IS_ACTOR_IN_VOLUME(&iVar1, &iParam2))
				{
					TELEPORT_ACTOR(&iVar1, &vVar3, 1, 1, 1);
					vVar3 = (vParam0.x + 1,5f);
					vVar3.f_8 = (vParam0.z + 1,5f);
				}
			}
			else if (Function_322(&iVar1, &Global_54076) > 4.0f)
			{
				TELEPORT_ACTOR(&iVar1, &vVar3, 1, 1, 1);
				vVar3 = (vParam0.x + 1,5f);
				vVar3.f_8 = (vParam0.z + 1,5f);
			}
			TASK_CLEAR(&iVar1);
			TASK_STAND_STILL(&iVar1, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&iVar1, true);
		}
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (&iVar0 != &iVar1)
			{
				if (IS_VOLUME_VALID(&iParam2))
				{
					if (IS_ACTOR_IN_VOLUME(&iVar0, &iParam2))
					{
						TELEPORT_ACTOR(&iVar0, &vVar3, 1, 1, 1);
						vVar3 = (vParam0.x + 2,5f);
						vVar3.f_8 = (vParam0.z + 2,5f);
					}
				}
				else if (Function_322(&iVar0, &Global_54076) > 4.0f)
				{
					TELEPORT_ACTOR(&iVar0, &vVar3, 1, 1, 1);
					vVar3 = (vParam0.x + 2,5f);
					vVar3.f_8 = (vParam0.z + 2,5f);
				}
				TASK_CLEAR(&iVar0);
				TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&iVar0, true);
			}
		}
		if (IS_ACTOR_VALID(&iVar2))
		{
			if (IS_VOLUME_VALID(&iParam2))
			{
				if (IS_ACTOR_IN_VOLUME(&iVar2, &iParam2))
				{
					TELEPORT_ACTOR(&iVar2, &vVar3, 1, 1, 1);
				}
			}
			else if (Function_322(&iVar2, &Global_54076) > 8.0f)
			{
				TELEPORT_ACTOR(&iVar2, &vVar3, 1, 1, 1);
			}
		}
	}
	return;
}

float Function_322(int iParam0, int iParam1) //Position: 0x1431A / 82714
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

void Function_323(float fParam0, float fParam1) //Position: 0x1440F / 82959
{
	*(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_325();
	Function_324();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_324() //Position: 0x14520 / 83232
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_325() //Position: 0x14554 / 83284
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

int Function_326() //Position: 0x1465A / 83546
{
	return 1;
}

int Function_327() //Position: 0x14661 / 83553
{
	uLocal_358 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_340, "tempcutscenevol", 2, *(&Global_99725[4843] + 184), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	Function_330(0, 0, 1, 1, 0, 1, 1, &uLocal_358, 1, 1, 1, 1, 0x3f800000, 0);
	Function_328(StackVal, &uLocal_340, *(&Global_99725[4843] + 196), &uLocal_358, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_328(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, bool bParam8, bool bParam9) //Position: 0x146DA / 83674
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &uParam5;
	Var2.f_4 = &uParam6;
	Var2.f_8 = &uParam7;
	if (&bParam4)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(&Global_54076, &Param1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, "CutsceneVol", 2, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &uParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_329(&uVar1, &uParam0);
			}
		}
		if (!Function_53(StackVal, Var2))
		{
			if (!IS_ACTOR_VALID(&bVar0))
			{
				bVar0 = &Global_21369 + 72;
			}
			if (IS_ACTOR_VALID(&bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&bVar0, &Var2, 1, 1, 1);
					TASK_CLEAR(&bVar0);
					TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&uVar1, &Var2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (&bParam9)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(&bParam3);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(&bParam3, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bParam3);
		if (&bParam8)
		{
			Global_99170 = &bParam3;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_329(var uParam0, float fParam1) //Position: 0x1497A / 84346
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&uParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(&uParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		uVar4 = GET_DRAFT_ACTOR(bVar2, &uParam0);
		if (IS_ACTOR_VALID(&uVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &fParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		uVar5 = GET_ACTOR_IN_VEHICLE_SEAT(&uParam0, bVar3);
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!IS_ACTOR_PLAYER(&uVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &fParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_330(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x149FC / 84476
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
	Function_137();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_75();
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
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_332(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_22(), 2, Function_332(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_109(19, 1, 0, 0);
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
	if (uParam10 && !Function_38())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_331()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_331()));
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
	if (Function_46(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_213(0x4000000);
	}
	if (Function_46(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_213(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

var Function_331() //Position: 0x14CAE / 85166
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

struct<8> Function_332(int iParam0) //Position: 0x14D3C / 85308
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_333(bool bParam0) //Position: 0x14D4E / 85326
{
	int iVar0;
	
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	ENABLE_USE_CONTEXTS(0);
	iVar0 = Global_39922.f_88 & 16384;
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	if (IS_ACTOR_VALID(&bParam0 + 312))
	{
		SET_ACTOR_INVULNERABILITY(&bParam0 + 312, true);
		MEMORY_CLEAR_EVENTS(&bParam0 + 312, 1);
	}
	SET_ACTOR_INVULNERABILITY(&Global_54076, true);
	return;
}

bool Function_334(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x14DA2 / 85410
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
				Function_337(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_336(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
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
				if (Function_336(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_335(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_335(&uVar5, &iVar3);
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

int Function_335(vector3 vParam0) //Position: 0x14FD7 / 85975
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_53(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_53(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_336(var uParam0, bool bParam1) //Position: 0x1504D / 86093
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_337(var uParam0, bool bParam1) //Position: 0x1506E / 86126
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
	else if (!&bParam1 || Function_336(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

void Function_338() //Position: 0x150D8 / 86232
{
	var uVar0;
	
	Function_339(4, 1);
	uVar0 = &uVar0;
	iLocal_439 = CREATE_LAYOUT("KillerPimp_layout");
	return;
}

void Function_339(int iParam0, bool bParam1) //Position: 0x15104 / 86276
{
	switch (&bParam1)
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

void Function_340(struct<125> Param0) //Position: 0x1514E / 86350
{
	struct<2> Var0;
	
	Param0 = &Global_54076;
	(&Param0 + 8) = &uParam1;
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

int Function_341(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4) //Position: 0x151F9 / 86521
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		if (!(((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28))
		{
			if (UNK_0x214AFB8C(&iParam0 + 136))
			{
				bVar0 = VDIST(Global_54078, *(&iParam0 + 184));
				if (&Global_99717 + 16 == fParam1)
				{
					uVar1 = Global_99717.f_28;
					uVar2 = Function_343(StackVal, GET_ASSET_NAME(&iParam0 + 136, 9), &uVar1, *(&iParam0 + 184), 0, &fParam2, &fParam3, 2, 1, 2, 2, 0, 1);
					Global_99717.f_28 = uVar1;
					Global_99717.f_24 = bVar0;
					if (bVar0 < &fParam3)
					{
						*(&Global_99717 + 16) = 4294967295;
						Global_99717.f_24 = 999.0f;
					}
					return uVar2;
				}
				if (bVar0 > &fParam2)
				{
					if (&Global_99717 + 16 != 4294967295 || (&Global_99717 + 16 == fParam1 && bVar0 > Global_99717.f_24))
					{
						iVar3 = Global_99717.f_28;
						if (iVar3 == 0)
						{
							if (GET_ACTOR_ENUM(&Global_54076) == 1)
							{
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_342(&iParam0));
							}
						}
						if (IS_ACTORSET_VALID(&iParam4))
						{
							bVar4 = false;
							while (bVar4 <= GET_ACTORSET_SIZE(&iParam4))
							{
								uVar5 = GET_ACTOR_FROM_ACTORSET(&iParam4, bVar4);
								if (IS_ACTOR_VALID(&uVar5))
								{
									CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(&uVar5), &uVar5);
								}
								bVar4++;
							}
						}
						uVar6 = Function_343(StackVal, GET_ASSET_NAME(&iParam0 + 136, 9), &iVar3, *(&iParam0 + 184), 0, &fParam2, &fParam3, 2, 1, 2, 2, 0, 1);
						Global_99717.f_28 = iVar3;
						*(&Global_99717 + 16) = fParam1;
						Global_99717.f_24 = bVar0;
						return uVar6;
					}
				}
			}
		}
	}
	return 0;
}

int Function_342(struct<257> Param0) //Position: 0x15384 / 86916
{
	if (Param0.f_256 != 4294967295)
	{
		if (Global_116927[Param0.f_2566].f_36 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_342(&(Global_99725[Param0.f_25643]));
	}
	return 0;
}

int Function_343(var uParam0, int iParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x153C0 / 86976
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_346(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_347()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
	{
		if (!&bParam4 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && iParam1 == 0)
		{
			if (iParam1 != 5)
			{
				iParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			iParam1 = 0;
			return 0;
		}
		if ((iParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_53(StackVal, Var16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&Var18, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(Var16, Var18);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(Var16, Var18, 1);
					}
				}
			}
		}
		switch (iParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					iParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0))
				{
					iParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_344();
					CUTSCENE_MANAGER_RESUME_LOADING();
					iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					iParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				iParam1 = 0;
				break;
		}
	}
	else if ((!Function_346(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_347()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		iParam1 = 0;
	}
	else if (!Function_346(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_344() //Position: 0x15628 / 87592
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &Var5, &Var7);
			Function_345(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_345(char* cParam0) //Position: 0x1567C / 87676
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, &cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam3, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam6, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_346(var uParam0, struct<2> Param1, float fParam3) //Position: 0x157A5 / 87973
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_19(&uParam0);
		if (VDIST(Function_19(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_347() //Position: 0x15831 / 88113
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_348(int iParam0) //Position: 0x15840 / 88128
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

bool Function_349(int iParam0) //Position: 0x15877 / 88183
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_350(struct<2>[] Param0) //Position: 0x1588C / 88204
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_353();
	iVar1 = 0;
	if (!Function_6(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_275(&(Param0[iVar02]), 8);
		}
		else if (Function_352())
		{
			iVar1 = 1;
			Function_275(&(Param0[iVar02]), 8);
		}
		Function_275(&(Param0[iVar02]), 16);
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
				Function_275(&(Param0[iVar02]), 1);
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
							Function_275(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_275(&(Param0[iVar02]), 2);
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
							Function_275(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_275(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_275(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_275(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_275(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_275(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_275(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_275(&(Param0[iVar02]), 2);
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
	Function_351();
	return 1;
}

void Function_351() //Position: 0x15C4E / 89166
{
	if (!Function_46(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_352() //Position: 0x15C8E / 89230
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

void Function_353() //Position: 0x15CBC / 89276
{
	if (!Function_46(128))
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

void Function_354(struct<229> Param0) //Position: 0x15CFE / 89342
{
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if (((!&bParam2 || Function_48(iParam1)) || Function_349(iParam1)) || iParam1 != &Param0 + 36)
		{
			REMOVE_BLIP(&Param0 + 272);
			REMOVE_BLIP(&Param0 + 280);
		}
	}
	else if (&bParam2)
	{
		if (Function_50(Global_99725[iParam143].f_228, 64) && iParam1 == &Param0 + 36)
		{
			Function_23(&Param0, iParam1);
		}
		if (!(Function_48(iParam1) || Function_349(iParam1)))
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
		if (!Function_50(Param0.f_228, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 320));
		}
		else
		{
			(&Param0 + 320) = "";
		}
		Function_356(&Param0 + 228, 32);
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
		Function_355(&Param0);
	}
	Function_356(&Param0 + 228, 256);
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

void Function_355(struct<229> Param0) //Position: 0x15F01 / 89857
{
	if (Function_50(Param0.f_228, 1))
	{
		STREAMING_EVICT_ACTOR(Param0.f_220, 4294967295);
		Function_356(&Param0 + 228, 1);
	}
	if (Function_50(Param0.f_228, 8))
	{
		REMOVE_STRING_TABLE("RandomCharMissions");
		Function_356(&Param0 + 228, 8);
	}
	if (Function_50(Param0.f_228, 2))
	{
		STREAMING_EVICT_GRINGO(&Param0 + 120);
		Function_356(&Param0 + 228, 2);
	}
	if (Function_50(Param0.f_228, 4))
	{
		STREAMING_EVICT_PROP(&Param0 + 128);
		Function_356(&Param0 + 228, 4);
	}
	return;
}

void Function_356(int iParam0, int iParam1) //Position: 0x15F90 / 90000
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_357(struct<265> Param0) //Position: 0x15FA6 / 90022
{
	if (!Param0.f_260 != 0)
	{
		if (Function_36(&Param0 + 260, 4))
		{
			if (!Function_35(iParam1))
			{
				return 0;
			}
		}
		if (Function_36(&Param0 + 260, 1))
		{
			if (&Global_99725[Param0.f_25643] + 36 != &Global_99725[iParam143] + 36 || iParam3)
			{
				if (!Function_48(Param0.f_256))
				{
					return 0;
				}
			}
		}
		if (Function_36(&Param0 + 260, 2) && Global_6606)
		{
			if (!Function_54(Param0.f_264, 0))
			{
				return 0;
			}
		}
		if (Function_36(&Param0 + 260, 8) && Global_6606)
		{
			if (!Function_359(Param0.f_252, 0))
			{
				return 0;
			}
		}
		if (!&bParam2)
		{
			return 1;
		}
		return Function_358(&Param0);
	}
	return 1;
}

int Function_358(struct<261> Param0) //Position: 0x16072 / 90226
{
	if (!Param0.f_260 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_36(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_36(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_36(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_36(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_36(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_36(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_359(int iParam0, bool bParam1) //Position: 0x1612D / 90413
{
	if (!Function_30(iParam0))
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

var Function_360(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x16164 / 90468
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_361(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_275(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_361(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x161A2 / 90530
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_275(&(Param0[iVar02]), 4);
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

