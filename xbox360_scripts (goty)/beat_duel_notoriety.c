//Decompiled with MagicRDR v1.0
//Function Count : 288
//Statics Count : 518
//Natives Count : 405
//Parameters Count : 51

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	struct<7> Local_5[12];
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
	var uLocal_181 = 2;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	struct<65> Local_195 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267[4] = { 0, 0, 0, 0 };
	var uLocal_272 = 4;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	int iLocal_277 = 0;
	bool bLocal_278 = false;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	bool bLocal_282 = false;
	bool bLocal_283 = false;
	bool bLocal_284 = false;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	bool bLocal_289 = false;
	bool bLocal_290 = false;
	int iLocal_291 = 0;
	var uLocal_292 = 0;
	bool bLocal_293 = false;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	bool bLocal_298 = false;
	bool bLocal_299 = false;
	bool bLocal_300 = false;
	bool bLocal_301 = false;
	bool bLocal_302 = false;
	int iLocal_303 = 0;
	vector3 vLocal_304 = { 0.0f, 0.0f, 0.0f };
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
	var uLocal_321 = 3;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 3;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 3;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 3;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 3;
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
	var uLocal_376 = 3;
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
	var uLocal_391 = 3;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 3;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 3;
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
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	int iLocal_464 = 0;
	bool bLocal_465 = false;
	int iLocal_466 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2[1];
	int iVar4[1];
	bool bVar6;
	bool bVar49;
	float fVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	bool bVar54;
	bool bVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	var uVar60;
	int iVar61;
	bool bVar62;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_4 = 0;
	iLocal_154 = 0;
	iLocal_155 = 0;
	iLocal_188 = 0;
	iLocal_189 = 0;
	iLocal_221 = 0;
	iLocal_223 = 0;
	bLocal_282 = false;
	bLocal_283 = false;
	bLocal_284 = false;
	iLocal_285 = 0;
	iLocal_286 = 1;
	iLocal_287 = 0;
	iLocal_288 = 0;
	iLocal_291 = 0;
	bLocal_298 = false;
	bLocal_299 = false;
	bLocal_300 = false;
	bLocal_301 = false;
	bLocal_302 = true;
	bLocal_465 = false;
	iLocal_466 = 0;
	iVar0 = 0;
	bVar1 = CREATE_LAYOUT(Function_287());
	bVar6 = 14;
	Function_286(&uLocal_279, 0.0f);
	fVar50 = 0.0f;
	iVar52 = 0;
	iVar53 = Function_285(9, 4);
	switch (Global_29004)
	{
		case 0x00000000:
			if (iVar53 == 0)
			{
				iVar4[0] = 133;
			}
			else if (iVar53 == 1)
			{
				iVar4[0] = 135;
			}
			else if (iVar53 == 2)
			{
				iVar4[0] = 143;
			}
			else
			{
				iVar4[0] = 137;
			}
			break;
		
		case 0x00000001:
			if (iVar53 == 0)
			{
				iVar4[0] = 279;
			}
			else if (iVar53 == 1)
			{
				iVar4[0] = 280;
			}
			else if (iVar53 == 2)
			{
				iVar4[0] = 282;
			}
			else
			{
				iVar4[0] = 280;
			}
			break;
		
		case 0x00000002:
			if (iVar53 == 0)
			{
				iVar4[0] = 133;
			}
			else if (iVar53 == 1)
			{
				iVar4[0] = 135;
			}
			else if (iVar53 == 2)
			{
				iVar4[0] = 143;
			}
			else
			{
				iVar4[0] = 137;
			}
			break;
	}
	Function_284(&iVar4, 1);
	Function_283(&bVar6, iVar4[0], 3, 0);
	Function_281(&bVar6, "Dueling/duel_Easy_A_npc", 8, 0);
	Function_281(&bVar6, "Dueling/duel_Easy_B_npc", 8, 0);
	Function_281(&bVar6, "notoriety_duel_challenger", 5, 0);
	Function_281(&bVar6, "custom/notoriety_duel_challenger", 8, 0);
	Function_281(&bVar6, "ready2_duel_challenger", 5, 0);
	Function_281(&bVar6, "custom/ready2_duel_challenger", 8, 0);
	Function_281(&bVar6, "Rand_Idle_Stand", 1, 0);
	MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(4);
	iVar51 = 0;
	while (iVar51 <= 4)
	{
		uLocal_267[iVar51] = Function_279(Global_30750[0], 1, 0, 1);
		if (uLocal_267[iVar51] == 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_283(&bVar6, uLocal_267[iVar51], 3, 0);
		}
		iVar51++;
	}
	if (iVar0 != 5)
	{
		Function_284(&uLocal_267, 4);
	}
	bVar55 = false;
	iVar56 = 0;
	iVar57 = 0;
	iVar58 = 0;
	if (Global_3382)
	{
		iVar0 = 5;
	}
	iVar61 = 0;
	bVar62 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar59 = 600;
		if (Function_278(&bVar62, &iVar0, &iVar61, &iVar59, bVar55))
		{
			if (bVar62)
			{
				Function_276(&bVar2, 4294967295);
			}
			else
			{
				if (iVar52 >= 0)
				{
					iVar0 = 6;
				}
				Function_274(&bVar2, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_268(&bVar6))
				{
					iVar0 = 1;
					iVar59 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_264(ScriptParam_0.f_32, ScriptParam_0.f_52, &Local_224, &uLocal_266, 0.0f, 0.0f, 0.0f, 1))
				{
					*(&ScriptParam_0 + 8) = { StackVal, StackVal, Local_224 };
					*(&ScriptParam_0 + 20) = { StackVal, StackVal, *(&Local_224 + 12) };
					iVar0 = 2;
					iVar59 = 0;
				}
				else
				{
					iVar0 = 5;
					iVar59 = 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_260(ScriptParam_0.f_56, 0, &iVar56, &bLocal_282, 0, 1, 1, 1))
				{
					iVar0 = 5;
					iVar59 = 0;
					break;
				}
				if ((StackVal || Function_258(StackVal, VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_259(), *(&ScriptParam_0 + 8), 1.0f, 65.0f, 1, 1, 0)) && !ScriptParam_0.f_32)
				{
					PRINTVECTOR(*(&ScriptParam_0 + 8));
					PRINTNL();
					PRINTVECTOR(Global_34574);
					PRINTNL();
					iVar0 = 5;
					iVar59 = 0;
					break;
				}
				iVar51 = 0;
				while (iVar51 <= 1)
				{
					memcpy(&uLocal_294, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_256("duel"), 4);
					bVar2[iVar51] = CREATE_ACTOR_IN_LAYOUT(bVar1, &uLocal_294, iVar4[iVar51], *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
					SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar2[iVar51], 0);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar2[iVar51], false);
					DECOR_SET_BOOL(bVar2[iVar51], "nnostickup", 1);
					iVar51++;
				}
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar2[0], 8, "FASTWALK");
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar2[0]);
				GIVE_WEAPON_TO_ACTOR(bVar2[0], 4, 0, 1, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar2[0], Global_34573, -1.0f, 1);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar2[0], false);
				ACTOR_ENABLE_VARIABLE_MESH(bVar2[0], 5, 1);
				ACTOR_FORCE_WEAPON_RENDER(bVar2[0], 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar2[0], 0);
				UNK_0x99AFD2D1(bVar2[0], 1, 1);
				bVar49 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bVar1, Function_287(), "Rand_Idle_Stand", *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20)));
				SNAP_ACTOR_TO_GRINGO(bVar2[0], GET_OBJECT_FROM_GRINGO(bVar49), "UseCase1", 0, 0, 0);
				TASK_USE_GRINGO(bVar2[0], bVar49, "UseCase1", 4294967295, 1);
				TASK_PRIORITY_SET(bVar2[0], 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar2[0], Global_34573, -1.0f, 1);
				Function_253(ScriptParam_0.f_56, 0.0f, 1, 0, ScriptParam_0.f_32);
				bVar54 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_287(), 3, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, 20.0f, ScriptParam_0.f_52);
				DECOR_SET_INT(bVar54, "script", GET_THIS_SCRIPT_ID());
				Function_248(&bVar54, ScriptParam_0.f_32);
				iVar0 = 3;
				iVar59 = 0;
				break;
			
			case 0x00000003:
				if (!Function_260(ScriptParam_0.f_56, bVar2[0], &iVar56, &bLocal_282, bLocal_298, 1, 1, 1))
				{
					if (bLocal_298 == 1)
					{
						Function_245("duelHelp05", bLocal_298, 1);
						if (IS_OBJECT_VALID(bLocal_289))
						{
							Function_244(bLocal_289);
						}
					}
					iVar0 = 5;
					iVar59 = 0;
					break;
				}
				if (IS_ACTOR_VALID(bVar2[0]))
				{
					if (Function_243(Global_34573, bVar2[0]) < Function_241(1))
					{
						if (bLocal_298 == 1)
						{
							Function_245("duelHelp05", bLocal_298, 1);
							if (IS_OBJECT_VALID(bLocal_289))
							{
								Function_244(bLocal_289);
							}
						}
						iVar0 = 5;
						iVar59 = 0;
						break;
					}
					else if (Function_238(bVar2[0], &iLocal_303, &fVar50, uVar60, 0, 0x40400000) && !iLocal_285)
					{
						if (IS_OBJECT_VALID(bLocal_289))
						{
							Function_244(bLocal_289);
						}
						switch (iLocal_303)
						{
							case 0x00000001:
								Function_245("duelHelp03", bLocal_298, 1);
								bLocal_282 = true;
								break;
							
							case 0x00000002:
								Function_245("duelHelp04", bLocal_298, 1);
								bLocal_283 = true;
								break;
							
							case 0x00000010:
								Function_245("duelHelp04", bLocal_298, 1);
								if (bLocal_298 || iVar52 < 3)
								{
									bLocal_283 = true;
								}
								else
								{
									bLocal_282 = true;
								}
								break;
							
							case 0x00000004:
								Function_245("duelHelp10", bLocal_298, 1);
								bLocal_283 = true;
								break;
							
							case 0x00000008:
								if (GET_LAST_HIT_FLAGS(bVar2[0]) != 1)
								{
									Function_237(bVar2[0]);
								}
								if (bLocal_298)
								{
									Function_234(4294967196, 1, 0);
									Function_245("duelHelp02", bLocal_298, 1);
								}
								bLocal_283 = true;
								break;
						}
						iVar0 = 5;
						iVar59 = 0;
						break;
					}
				}
				if (Function_113(&iVar52, &bVar2, bVar1, ScriptParam_0.f_32, &iVar59))
				{
					iVar0 = 5;
					iVar59 = 0;
				}
				if (iVar52 >= 0)
				{
					Function_112();
					Function_100(StackVal, StackVal, Function_112(), &bVar55, ScriptParam_0.f_56, bVar2[0], 100, 0x42a00000, 1);
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar59 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar59 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar59);
		}
	}
	if (bLocal_299)
	{
		Function_29(&uLocal_307);
	}
	if (bLocal_465)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_274(&bVar2, 4294967295);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (bLocal_301)
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(bLocal_290))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_290);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(bLocal_290))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_290);
		}
		Function_28();
	}
	if (iLocal_288 && !bLocal_300)
	{
		Function_14(453, 1, 0, 0);
	}
	if (!bVar55)
	{
		if (Function_12(bVar2[0], 0))
		{
			TASK_WANDER(bVar2[0], -1.0f);
			TASK_PRIORITY_SET(bVar2[0], 2);
		}
		if (IS_OBJECT_VALID(bVar1))
		{
			UNK_0xA936E73B(bVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar1, 1);
		}
		Function_253(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	Function_10(bVar2[0]);
	if (Function_12(bVar2[0], 0))
	{
		SET_ACTOR_CAN_PLAY_GESTURES(bVar2[0], true);
		if (DECOR_CHECK_EXIST(bVar2[0], "nnostickup"))
		{
			DECOR_REMOVE(bVar2[0], "nnostickup");
		}
		AI_GOAL_LOOK_CLEAR(bVar2[0]);
		if (IS_MOVER_FROZEN(bVar2[0]))
		{
			SET_MOVER_FROZEN(bVar2[0], 0);
		}
		Function_9(bVar2[0]);
		Function_8(bVar2[0], 4294967196);
		RESET_ANIM_SET_FOR_ACTOR(bVar2[0], 1);
		if (bLocal_282)
		{
			TASK_FLEE_ACTOR(bVar2[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
		}
		else if (bLocal_283)
		{
			Function_7(bVar2[0], &Global_34573);
		}
		else if (bLocal_284)
		{
			DECOR_SET_STRING(bVar2[0], "TAUNT_AUDIO", "DUEL");
			TASK_TAUNT_ACTOR_IN_PLACE(bVar2[0], Global_34573, 11.0f);
		}
		else
		{
			TASK_WANDER(bVar2[0], -1.0f);
		}
		Function_6(bVar2[0]);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar2[0], 1);
		UNK_0x99AFD2D1(bVar2[0], 0, 0);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_277))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iLocal_277);
	}
	if (IS_VOLUME_VALID(bLocal_278))
	{
		DESTROY_VOLUME(bLocal_278);
	}
	if (IS_OBJECT_VALID(bLocal_289))
	{
		Function_244(bLocal_289);
	}
	Function_2(&bVar6);
	Function_1(&iVar4, 1);
	Function_1(&uLocal_267, 4);
	RELEASE_LAYOUT_REF(bVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x9C6 / 2502
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x9E8 / 2536
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

void Function_3(var uParam0, int iParam1) //Position: 0xA0E / 2574
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

void Function_4(var uParam0, int iParam1) //Position: 0xB3C / 2876
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0xB56 / 2902
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(bool bParam0) //Position: 0xB73 / 2931
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

int Function_7(bool bParam0, int iParam1) //Position: 0xBBF / 3007
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, 0);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, 1);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

void Function_8(bool bParam0, bool bParam1) //Position: 0xCA4 / 3236
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_9(bool bParam0) //Position: 0xCC4 / 3268
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

int Function_10(bool bParam0) //Position: 0xCF6 / 3318
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_11(bParam0);
		return 1;
	}
	return 0;
}

void Function_11(bool bParam0) //Position: 0xD0C / 3340
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

bool Function_12(bool bParam0, bool bParam1) //Position: 0xD38 / 3384
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, 1);
			}
			Function_10(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_10(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_13(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_13(bool bParam0, int iParam1) //Position: 0xDD4 / 3540
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_14(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xE1E / 3614
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
	Function_27(iParam0, TO_FLOAT(bParam1), 1);
	Function_26(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_15(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_15(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x103E / 4158
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_25(390))), 32);
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
					bVar19 = (Function_24(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_24(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_22(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_19(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_17(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_16(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_287(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_16(int iParam0) //Position: 0x166B / 5739
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_17(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x167C / 5756
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_18("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_18("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_18("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_18(char* cParam0, bool bParam1) //Position: 0x1771 / 6001
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_19(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x178A / 6026
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_21(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_20(Function_21(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_20(int iParam0, int iParam1) //Position: 0x17EF / 6127
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_21(int iParam0, int iParam1) //Position: 0x1801 / 6145
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_22(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1813 / 6163
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
	if (((Function_23(iParam0) != 19 || Function_23(iParam0) != 17) || Function_23(iParam0) != 10) || Function_23(iParam0) != 9)
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

int Function_23(int iParam0) //Position: 0x1943 / 6467
{
	return Global_35278[iParam020].f_48;
}

float Function_24(int iParam0) //Position: 0x1952 / 6482
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_25(int iParam0) //Position: 0x198B / 6539
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_26(int iParam0) //Position: 0x19C8 / 6600
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

int Function_27(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B62 / 7010
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

void Function_28() //Position: 0x1DA6 / 7590
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (IS_ACTORSET_VALID(iLocal_222))
	{
		iVar0 = GET_OBJECTSET_SIZE(iLocal_222);
		iVar1 = 0;
		while (iVar1 <= iVar0)
		{
			bVar2 = GET_ACTOR_FROM_ACTORSET(iLocal_222, iVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar2, 1);
			}
			iVar1++;
		}
		DESTROY_ACTORSET(iLocal_222);
	}
	return;
}

void Function_29(int iParam0) //Position: 0x1DEB / 7659
{
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj");
	}
	if (iParam0->f_532 == 5)
	{
		if (Function_99(iParam0->f_584, 32768))
		{
			Function_98(256);
		}
	}
	Function_97();
	Function_95(1);
	if (Function_99(iParam0->f_584, 32))
	{
		if (Function_93(iParam0->f_624))
		{
			switch (iParam0->f_620)
			{
				case 0x00000002:
					Function_48(iParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_45(iParam0->f_624);
					break;
				
				default:
					Function_36(iParam0->f_624);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_30(iParam0, 0);
	}
	if (IS_VOLUME_VALID(iParam0->f_504))
	{
		DESTROY_VOLUME(iParam0->f_504);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_540))
	{
		DESTROY_OBJECTSET(iParam0->f_540);
	}
	if (IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		RELEASE_LAYOUT_OBJECTS(iParam0->f_28);
		DESTROY_LAYOUT(iParam0->f_28);
	}
	if (Function_99(iParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_99(iParam0->f_584, 16))
	{
		Global_3382 = 0;
	}
	return;
}

void Function_30(int iParam0, bool bParam1) //Position: 0x1F48 / 8008
{
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_35(iParam0->f_568);
		Function_33(iParam0 + 568, 1, 0);
		if (bParam1 == 1)
		{
			Function_32(iParam0->f_568);
			Function_35(iParam0->f_568);
			Function_31(iParam0->f_568, Global_34573, -1.0f, -1.0f, 0, 1);
		}
		Function_33(iParam0 + 568, 0, 0);
		SQUAD_MAKE_EMPTY(iParam0->f_568);
		DESTROY_OBJECT(iParam0->f_568);
	}
	return;
}

void Function_31(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x1FAD / 8109
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
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		bVar0++;
	}
}

void Function_32(bool bParam0) //Position: 0x201B / 8219
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_33(var uParam0, bool bParam1, bool bParam2) //Position: 0x2050 / 8272
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_34(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_34(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x20CC / 8396
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_35(bool bParam0) //Position: 0x20E6 / 8422
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

void Function_36(int iParam0) //Position: 0x2118 / 8472
{
	int iVar0;
	
	if (!Function_93(iParam0))
	{
		Function_43();
		return;
	}
	iVar0 = Function_42(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_37("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_37(char* cParam0, int iParam1) //Position: 0x216B / 8555
{
	struct<4> Var0;
	
	if (!Function_93(iParam1))
	{
		return;
	}
	switch (Function_42(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_38(Function_40(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_42(iParam1), Function_40(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_42(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_42(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_42(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_42(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_42(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_38(int iParam0) //Position: 0x228F / 8847
{
	char* cVar0[16];
	
	if (!Function_39())
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

bool Function_39() //Position: 0x22C9 / 8905
{
	if (Function_99(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_40(int iParam0) //Position: 0x22E4 / 8932
{
	if (!Function_41(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

bool Function_41(int iParam0) //Position: 0x2304 / 8964
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_42(int iParam0) //Position: 0x231B / 8987
{
	if (!Function_41(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_43() //Position: 0x2336 / 9014
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
			Function_44(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_44(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x257D / 9597
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_45(int iParam0) //Position: 0x25A6 / 9638
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_93(iParam0))
	{
		return;
	}
	iVar0 = Function_42(iParam0);
	if (StackVal == 2)
	{
		Function_37("nDEED_FAIL", iParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_47(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_46(int iParam0) //Position: 0x264C / 9804
{
	char* cVar0[16];
	
	if (!Function_39())
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

struct<24> Function_47(char* cParam0) //Position: 0x268B / 9867
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

void Function_48(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x28E1 / 10465
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_93(iParam0))
	{
		Function_43();
		return;
	}
	iVar0 = Function_42(iParam0);
	if (!iVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_92())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_6269 = Function_40(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_47(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		if (Function_92())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_86();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_92())
	{
		Function_85();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_37("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_80(iParam0);
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
						switch (Function_40(iParam0))
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
			Function_52(1);
			Function_50(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_49(iParam0, &Var14);
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

void Function_49(int iParam0, int iParam1) //Position: 0x2B35 / 11061
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_50(bool bParam0, int iParam1) //Position: 0x2B6F / 11119
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_51())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

bool Function_51() //Position: 0x2BB1 / 11185
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_52(bool bParam0) //Position: 0x2BBA / 11194
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
	Function_54();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_53(&Global_63095, 1);
		Function_53(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_53(int iParam0, int iParam1) //Position: 0x2C0B / 11275
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_54() //Position: 0x2C1E / 11294
{
	Function_68();
	Function_67();
	Function_67();
	Function_66();
	Function_66();
	Function_65();
	Function_65();
	Function_62(0);
	Function_62(0);
	if (!Function_51())
	{
		Function_59();
		Function_58();
		Function_57();
		Function_56();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_55();
	return;
}

void Function_55() //Position: 0x2C70 / 11376
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

void Function_56() //Position: 0x2D76 / 11638
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

void Function_57() //Position: 0x2DA9 / 11689
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

void Function_58() //Position: 0x2F37 / 12087
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

void Function_59() //Position: 0x30EB / 12523
{
	Function_60(&Global_28260, 1, 0);
	return;
}

void Function_60(int iParam0, bool bParam1, var uParam2) //Position: 0x30F9 / 12537
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_61();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || uParam2)
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
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
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

var Function_61() //Position: 0x32EA / 13034
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_62(int iParam0) //Position: 0x32FF / 13055
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
	Function_63(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_63(int iParam0, bool bParam1, bool bParam2) //Position: 0x33A5 / 13221
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
		Function_27(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_26(iParam0);
	if (bParam2)
	{
		Function_15(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_64(int iParam0) //Position: 0x3640 / 13888
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<8> Function_65() //Position: 0x3681 / 13953
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
	Function_63(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_66() //Position: 0x370A / 14090
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
	Function_63(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_67() //Position: 0x37A1 / 14241
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
	Function_63(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_68() //Position: 0x3820 / 14368
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_69(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_63(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_69(int iParam0, bool bParam1, int iParam2) //Position: 0x3859 / 14425
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
	Function_27(iParam0, bParam1, 1);
	Function_26(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_15(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_70() //Position: 0x3A63 / 14947
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_39())
	{
		Function_77(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_77(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_72(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_72(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_71(StackVal, StackVal, vVar0))
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

bool Function_71(vector3 vParam0) //Position: 0x3B1E / 15134
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_72(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3B36 / 15158
{
	int iVar0;
	
	iVar0 = Function_75(uParam2, uParam3);
	if (Function_74(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_73(&Global_63095, 1);
			Function_53(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_73(&Global_63095, 2);
			Function_53(&Global_63095, 1);
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
		Function_73(&Global_63095, 2);
		Function_53(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_112();
	return StackVal, StackVal, Function_112();
}

void Function_73(var uParam0, int iParam1) //Position: 0x3C1D / 15389
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_74(int iParam0) //Position: 0x3C2C / 15404
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_75(bool bParam0, bool bParam1) //Position: 0x3C42 / 15426
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
		fVar2 = Function_76(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
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

float Function_76(vector3 vParam0, vector3 vParam3) //Position: 0x3D09 / 15625
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_77(var uParam0, int iParam1) //Position: 0x3D26 / 15654
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	
	*uParam0 = *uParam0;
	fVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_79(Global_34573, &vVar4);
	if (!Function_78(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -130.87f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.09f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 206.26f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 106.17f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 343.64f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 165.38f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -97.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -6.71f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -180.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 22.55f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -104.45f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 270.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 59.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 20.74f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 94.65f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_78(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -39.9f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	fVar10 = VDIST(vVar4, vVar7);
	if (fVar10 > fVar0)
	{
		fVar0 = fVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_73(&Global_63095, 2);
	Function_53(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_71(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_78(int iParam0) //Position: 0x454C / 17740
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_99(uVar0, 0x1000000) || Function_99(uVar0, 0x2000000)) || Function_99(uVar0, 0x4000000)) || !Function_99(uVar0, 0x10000000));
}

void Function_79(bool bParam0, int iParam1) //Position: 0x4587 / 17799
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_80(int iParam0) //Position: 0x4594 / 17812
{
	int iVar0;
	int iVar1;
	
	if (!Function_41(iParam0))
	{
		return;
	}
	switch (Function_42(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_40(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_14(12, 1, 0, 0);
				Function_84(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_14(13, 1, 0, 0);
				Function_84(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_14(14, 1, 0, 0);
				Function_84(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_14(15, 1, 0, 0);
				Function_84(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_14(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_40(iParam0))
			{
				case 0x00000000:
					if (Function_83(iParam0) == 1)
					{
						iVar0 = Function_82(iParam0);
						if (Function_81(iVar0))
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
								Function_14(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_14(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_14(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_82(iParam0) == 0)
			{
				if (Function_83(iParam0) == 1)
				{
					Function_14(458, 1, 0, 0);
					iVar0 = Function_40(iParam0);
					if (Function_81(iVar0))
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
			if (Function_83(iParam0) == 1)
			{
				Function_14(400, 1, 0, 0);
			}
			switch (Function_40(iParam0))
			{
				case 0x00000001:
					Function_14(402, 1, 0, 0);
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
					Function_14(403, 1, 0, 0);
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

bool Function_81(int iParam0) //Position: 0x4A70 / 19056
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(int iParam0) //Position: 0x4A86 / 19078
{
	if (!Function_41(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 4) & 255;
}

int Function_83(int iParam0) //Position: 0x4AA5 / 19109
{
	if (!Function_41(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x4ABF / 19135
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(1, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

void Function_85() //Position: 0x4B26 / 19238
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
	PLAYSTAT_INT("HC_MONEY", Function_64(0));
	PLAYSTAT_INT("HC_FAME", Function_64(3));
	PLAYSTAT_INT("HC_HONOR", Function_64(1));
	return;
}

void Function_86() //Position: 0x4C7E / 19582
{
	int iVar0;
	int iVar1;
	
	if (!Function_91(Global_6269))
	{
		return;
	}
	iVar0 = Function_64(24);
	iVar1 = Function_90(Global_6269);
	if (!Function_91(iVar0) && Function_89(iVar1) < 0)
	{
		Function_63(24, Global_6269, 0);
		Function_87(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_89(Function_90(iVar0)))
	{
		Function_63(24, Global_6269, 0);
		Function_87(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4CFE / 19710
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
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x5050 / 20560
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_89(int iParam0) //Position: 0x50D3 / 20691
{
	if (!Function_93(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_90(int iParam0) //Position: 0x50ED / 20717
{
	if (!Function_91(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_91(int iParam0) //Position: 0x5107 / 20743
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_92() //Position: 0x511D / 20765
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_93(int iParam0) //Position: 0x5148 / 20808
{
	if (!Function_41(iParam0))
	{
		return 0;
	}
	if (!Function_94(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_94(int iParam0) //Position: 0x516C / 20844
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_95(int iParam0) //Position: 0x5181 / 20865
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_96())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_96() //Position: 0x51BD / 20925
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

void Function_97() //Position: 0x51E2 / 20962
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_98(int iParam0) //Position: 0x51F6 / 20982
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

bool Function_99(bool bParam0, bool bParam1) //Position: 0x5213 / 21011
{
	return (bParam0 && bParam1) == 0;
}

void Function_100(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x5220 / 21024
{
	int iVar0;
	
	iVar0 = 0;
	if (!*uParam3)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(bParam5))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam5, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	else if (!Function_71(StackVal, StackVal, vParam0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	if (*uParam3 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_111(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_110(0);
		}
		if (bParam8)
		{
			Function_108(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_106(iParam4);
			Global_3401 = 1;
		}
		Function_104(iParam4);
		if (Function_103(StackVal, 32768))
		{
			Function_101(1);
		}
		Global_16876[iParam46].f_12++;
		Function_14(408, 1, 0, 0);
	}
}

void Function_101(bool bParam0) //Position: 0x5327 / 21287
{
	if (bParam0)
	{
		Function_102(0x10000000);
	}
	else
	{
		Function_98(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_102(int iParam0) //Position: 0x534B / 21323
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_103(var uParam0, int iParam1) //Position: 0x535E / 21342
{
	return (uParam0 && iParam1) == 0;
}

void Function_104(int iParam0) //Position: 0x536B / 21355
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_99(StackVal, 524288))
	{
		if (Global_16876[iParam06].f_16 < 0 && Global_16876[iParam06].f_16 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_16876[iParam06].f_16 <= 2 && Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_105(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_105(int iParam0) //Position: 0x540F / 21519
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_106(int iParam0) //Position: 0x5425 / 21541
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_107(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_107(var uParam0, var uParam1, int iParam2) //Position: 0x54C3 / 21699
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_108(int iParam0, int iParam1) //Position: 0x54DB / 21723
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_109(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_109(int iParam0) //Position: 0x555D / 21853
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_110(int iParam0) //Position: 0x55AB / 21931
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_105(900)), 0);
	return;
}

void Function_111(int iParam0) //Position: 0x55CD / 21965
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_105(200)), 0);
	return;
}

vector3 Function_112() //Position: 0x55EE / 21998
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_113(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4) //Position: 0x55F7 / 22007
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	
	bVar0 = false;
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_233(uParam3))
			{
				return 0;
			}
			if (Function_34((*uParam1)[0], 1.0f, 15.0f, 1, 1, 0) && MEMORY_GET_IS_VISIBLE((*uParam1)[0], Global_34573))
			{
				AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[0], Global_34573, -1.0f, 1);
				AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
				uVar4 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, Global_34573, 0, 3212836864);
				TASK_FACE_ACTOR(0, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[0], uVar4);
				TASK_SEQUENCE_RELEASE(uVar4, 1);
				Function_286(&uLocal_279, 0.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_34((*uParam1)[0], 1.0f, 15.0f, 1, 1, 0) && MEMORY_GET_IS_VISIBLE((*uParam1)[0], Global_34573))
			{
				ADD_BLIP_FOR_ACTOR((*uParam1)[0], 325, 0.0f, 3, 0);
				Function_230();
				Function_229((*uParam1)[0], Global_34573, "duelNotoriety_msg01", "duelNotoriety_msg01", 5, 60, 1, 1);
				Function_286(&uLocal_279, 0.0f);
				*uParam0 = 2;
				*uParam4 = 0;
			}
			else if (Function_225(&uLocal_279, 15.0f))
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			*uParam4 = 50;
			if (GET_NTH_TASK_STATUS((*uParam1)[0], 0) == 0)
			{
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "notoriety_duel_challenger", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "notoriety_duel_challenger");
				*uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_225(&uLocal_279, 3.5f) && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
			{
				AI_GOAL_LOOK_CLEAR((*uParam1)[0]);
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
				if (!Function_264(StackVal, StackVal, uParam3, 0.0f, &Local_224, &uLocal_266, Local_224, 0))
				{
					LOG_ERROR("Failed to populate duel IDX");
					return 1;
				}
				if (!Function_223(&Local_224, uLocal_266))
				{
					LOG_ERROR("Failed to populate duel data");
					return 1;
				}
				vLocal_304 = { StackVal, StackVal, *(&Local_224 + 24) };
				UNK_0x44986367(StackVal, Function_221(StackVal, StackVal, StackVal, &vVar1, *(&Local_224 + 24), *(&Local_224 + 36)));
				VNORMALIZE(&vVar1);
				VSCALE(&vVar1, (VDIST(*(&Local_224 + 24), *(&Local_224 + 36)) * 0.5f));
				vLocal_304 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar1, vLocal_304, StackVal) };
				vLocal_304 = { StackVal, StackVal, Vector(vLocal_304, StackVal, StackVal) + Vector(0.0f, 0.2f, 0.0f) };
				bLocal_293 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_287(), 0, vLocal_304, 0.0f, 0.0f, 0.0f, 2.5f, 2.5f, 2.5f);
				bLocal_290 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_287(), 3, *(&Local_224 + 24), 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 20.0f);
				Function_220(bParam2, &bLocal_290, &Local_224 + 24, 20.0f);
				bLocal_301 = true;
				iLocal_288 = 1;
				bLocal_278 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_287(), 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f, 4.0f, 15.0f);
				iLocal_277 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("acceptDuelChallenge", bLocal_278, 25, 5, 0, false, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(bLocal_278, (*uParam1)[0], Function_287(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				Function_286(&uLocal_279, 0.0f);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_277))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iLocal_277))
				{
					Function_214(&uLocal_307, Function_215(1, 3, 2));
					Function_192(&uLocal_307, 0, 4294967295, 0.0f, 0.0f, 0.0f, 1, 1, 0);
					Function_141(&uLocal_307);
					bLocal_299 = true;
					bLocal_298 = true;
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
					Function_140((*uParam1)[0]);
					Function_10((*uParam1)[0]);
					RELEASE_SCRIPT_USE_CONTEXT(iLocal_277);
					DESTROY_VOLUME(bLocal_278);
					HUD_CLEAR_HELP();
					*uParam0 = 5;
				}
				else if (Function_225(&uLocal_279, 30.0f))
				{
					Function_245("duelHelp05", bLocal_298, 1);
					if (Function_243((*uParam1)[0], Global_34573) > 30.0f)
					{
						bLocal_284 = true;
						Function_229((*uParam1)[0], Global_34573, "FIGHT", 0, 5, 60, 1, 1);
					}
					return 1;
				}
			}
			return 1;
			break;
		
		case 0x00000005:
			Function_140((*uParam1)[0]);
			if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573) && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
			{
				Function_10((*uParam1)[0]);
				bLocal_289 = Function_139(bParam2, Function_287(), bLocal_293, Global_34573, 0, 330, 4294967295, 0, 0, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_289)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_289));
					ADD_BLIP_FOR_OBJECT(bLocal_289, 330, 0.0f, 3, 0);
				}
				uVar4 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &Local_224 + 36, 1);
				TASK_FACE_COORD(0, &Local_224 + 24, 0);
				TASK_FACE_COORD(0, &Local_224 + 24, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[0], uVar4);
				TASK_SEQUENCE_RELEASE(uVar4, 1);
				Function_138("duelHelp06", 0x41200000, 1, 0, 2, 1, 0);
				Function_286(&uLocal_279, 0.0f);
				*uParam0 = 6;
			}
			break;
		
		case 0x00000006:
			Function_140((*uParam1)[0]);
			*uParam4 = 0;
			if (GET_NTH_TASK_STATUS((*uParam1)[0], 1) != 0 && bLocal_302)
			{
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "ready2_duel_challenger", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "ready2_duel_challenger");
				_AIATTENTIONATTRACTOR(bParam2, *(&Local_224 + 36), 1045220557, 1065353216, 0, 0);
				SET_MOVER_FROZEN((*uParam1)[0], 1);
				bLocal_302 = false;
				Function_286(&uLocal_279, 0.0f);
				*uParam0 = 6;
			}
			else if (bLocal_302)
			{
				Function_286(&uLocal_279, 0.0f);
			}
			if (Function_225(&uLocal_279, 30.0f))
			{
				Function_245("duelHelp05", bLocal_298, 1);
				Function_244(bLocal_289);
				if (Function_243((*uParam1)[0], Global_34573) > 30.0f)
				{
					bLocal_284 = true;
					Function_229((*uParam1)[0], Global_34573, "FIGHT", 0, 5, 60, 1, 1);
				}
				return 1;
			}
			if (GATEWAY_UPDATE(bLocal_289))
			{
				_AIATTENTIONATTRACTOR(bParam2, *(&Local_224 + 36), 1045220557, 1065353216, 0, 0);
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
				{
					if (iLocal_287)
					{
						iLocal_287 = 0;
						HUD_CLEAR_HELP();
					}
					Function_138("duelHelp01", 0x41200000, 1, 0, 2, 1, 0);
				}
				else if (!IS_ACTOR_ON_FOOT(Global_34573))
				{
					if (iLocal_287)
					{
						iLocal_287 = 0;
						HUD_CLEAR_HELP();
					}
					Function_138("duelHelp09", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					if (IS_MOVER_FROZEN((*uParam1)[0]))
					{
						SET_MOVER_FROZEN((*uParam1)[0], 0);
					}
					AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[0], 1);
					UNK_0x99AFD2D1((*uParam1)[0], 0, 0);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_237((*uParam1)[0]);
					HUD_CLEAR_HELP_QUEUE();
					Function_244(bLocal_289);
					Function_8((*uParam1)[0], 0);
					*uParam0 = 7;
					iLocal_285 = 1;
					*uParam4 = 0;
				}
			}
			else if (Function_135(Global_34573, bLocal_289) > 7.0f)
			{
				if (iLocal_286)
				{
					Function_286(&uLocal_279, 0.0f);
					iLocal_286 = 0;
				}
				if (iLocal_287 == 0)
				{
					HUD_CLEAR_HELP();
					Function_138("duelHelp07", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_287 = 1;
				}
			}
			else if (Function_225(&uLocal_279, 6.0f) && iLocal_287 != 1)
			{
				iLocal_287 = 0;
				HUD_CLEAR_HELP();
			}
			break;
		
		case 0x00000007:
			if (Function_115(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iLocal_291, (*uParam1)[0], Global_34573, &bParam2, &Local_224 + 24, &Local_224 + 36, &bVar0, &bLocal_290, &uLocal_267, 4, uLocal_266, Local_224, &uLocal_272, &uLocal_292, 1, 2, 0))
			{
				if (bVar0)
				{
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					bLocal_282 = true;
					Function_114(9);
					bLocal_300 = true;
					return 1;
				}
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_114(int iParam0) //Position: 0x5DBE / 23998
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_14(409, 1, 0, 0);
	}
	return;
}

bool Function_115(var uParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10, struct<53> Param11) //Position: 0x5DEF / 24047
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	float fVar10;
	
	switch (*uParam0)
	{
		case 0x00000000:
			if ((!HUD_IS_FADING() && !HUD_IS_FADED()) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
			}
			if (HUD_IS_FADED())
			{
				STREAMING_OVERRIDE_MAIN_POI(StackVal, StackVal, StackVal, StackVal, Function_221(StackVal, StackVal, *uParam4, 0.0f, *uParam4, *uParam5), 0.0f);
				Function_133(9);
				iLocal_221 = 1;
				Function_108(0, GET_THIS_SCRIPT_ID());
				*uParam54 = Function_124(0, 1, 0, 0, 0, 0, 1, 0);
				if (IS_ACTOR_VALID(*uParam54))
				{
					if (!DECOR_CHECK_EXIST(*uParam54, "HorseLeash"))
					{
						bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/horseHitch", &Global_34574, 50.0f, 0);
						if (IS_GRINGO_VALID(bVar0))
						{
							bVar4 = GET_ACTOR_FROM_OBJECT(Function_123(bVar0, "UseCase1"));
							if (IS_ACTOR_VALID(bVar4) && !bVar4 != *uParam54)
							{
								DESTROY_ACTOR(GET_ACTOR_FROM_OBJECT(Function_123(bVar0, "UseCase1")));
							}
							DECOR_SET_BOOL(*uParam54, "ignoreactorinduel", 1);
							GRINGO_GET_USE_COMPONENT_POSITION_EXT(bVar0, "UseCase1", &vVar1);
							SET_OBJECT_POSITION(*uParam54, vVar1);
							SET_OBJECT_ORIENTATION(*uParam54, 0.0f, GRINGO_GET_USE_COMPONENT_HEADING_EXT(bVar0, "UseCase1"), 0.0f);
							SNAP_ACTOR_TO_GRINGO(*uParam54, GET_OBJECT_FROM_GRINGO(bVar0), "UseCase1", 1, 0, 0);
							TASK_USE_GRINGO(*uParam54, bVar0, "UseCase1", 1, 1);
						}
						else
						{
							LOG_ERROR("Could not find horse hitch gringo for duel");
							DESTROY_ACTOR(*uParam54);
						}
					}
				}
				if (bParam55)
				{
					iLocal_223 = iParam9;
					if (Param11.f_60 <= iParam9)
					{
						iLocal_223 = Param11.f_60;
					}
					if (Param11.f_56 == 0)
					{
						Function_121(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, uParam8, iLocal_223, uParam3, bParam1, Param11, uParam53);
					}
				}
				CLEAR_AMBIENT_OBJECTS_VOLUME(*uParam7, 15);
				HUD_CLEAR_HELP_QUEUE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
			MAKE_ACTOR_READY_FOR_ACTION(bParam1, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			HUD_ENABLE(1);
			SET_HUD_MAP_DRAW_ENABLED(0);
			TELEPORT_ACTOR(bParam1, uParam5, 1, 1, 1);
			GIVE_WEAPON_TO_ACTOR(bParam1, 4, 0, 1, 1);
			if (Function_64(451) <= 1)
			{
				Local_195.f_60 = 0;
			}
			else if (Function_64(451) <= 3)
			{
				Local_195.f_60 = 1;
			}
			else
			{
				Local_195.f_60 = 2;
			}
			if (iParam56 <= Local_195.f_60)
			{
				Local_195.f_60 = iParam56;
			}
			Local_195.f_52 = Function_21(150, (50 + Function_64(451) * 15));
			Local_195.f_48 = uParam57;
			if (Function_92())
			{
				if (Function_64(451) < 1)
				{
					Local_195.f_60 = 1;
					Local_195.f_48 = 0;
					Local_195.f_52 = 175;
				}
				else
				{
					Local_195.f_60 = 2;
					Local_195.f_48 = 0;
					Local_195.f_52 = 195;
				}
			}
			Local_195 = bParam2;
			Local_195.f_4 = bParam1;
			*(&Local_195 + 8) = { StackVal, StackVal, *uParam4 };
			*(&Local_195 + 20) = { StackVal, StackVal, *uParam5 };
			vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_195 + 20), *(&Local_195 + 8), StackVal) };
			fVar8 = UNK_0x9C40E671(&vVar5);
			fVar9 = Param11.f_48;
			fVar10 = Param11.f_52;
			Local_195.f_32 = CREATE_VOLUME_IN_LAYOUT(*uParam3, "Duel_StayOut", 2, *(&Local_195 + 20), 0.0f, fVar8, 0.0f, fVar9, 10.0f, fVar10);
			Local_195.f_36 = 1;
			Local_195.f_64 = uParam10;
			bLocal_220 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling", &Local_195, 25, 0);
			if (!IS_SCRIPT_VALID(bLocal_220))
			{
				Function_118();
				return 0;
			}
			*uParam0 = 2;
			break;
		
		case 0x00000002:
			if (!IS_SCRIPT_VALID(bLocal_220))
			{
				switch (DECOR_GET_INT(bParam2, "iDuelResult"))
				{
					case 0x00001389:
						if (IS_ACTOR_VALID(bParam1))
						{
							Function_117(bParam1);
							*(&Local_195 + 20) = { StackVal, StackVal, Function_117(bParam1) };
						}
						if (IS_ACTOR_VALID(*uParam54))
						{
							if (DECOR_CHECK_EXIST(*uParam54, "ignoreactorinduel"))
							{
								DECOR_REMOVE(*uParam54, "ignoreactorinduel");
							}
						}
						if (bParam55)
						{
							Function_116(uParam53, iLocal_223);
						}
						Function_118();
						*uParam6 = 1;
						return 1;
						break;
					
					case 0x0000138A:
						TASK_FLEE_ACTOR(bParam1, Global_34573, -1.0f, -1.0f, 0, 0, 0);
						if (IS_ACTOR_VALID(bParam1))
						{
							Function_117(bParam1);
							*(&Local_195 + 20) = { StackVal, StackVal, Function_117(bParam1) };
						}
						if (IS_ACTOR_VALID(*uParam54))
						{
							if (DECOR_CHECK_EXIST(*uParam54, "ignoreactorinduel"))
							{
								DECOR_REMOVE(*uParam54, "ignoreactorinduel");
							}
						}
						if (bParam55)
						{
							Function_116(uParam53, iLocal_223);
						}
						Function_118();
						*uParam6 = 1;
						return 1;
						break;
					
					case 0x0000138B:
						if (IS_ACTOR_VALID(*uParam54))
						{
							if (DECOR_CHECK_EXIST(*uParam54, "ignoreactorinduel"))
							{
								DECOR_REMOVE(*uParam54, "ignoreactorinduel");
							}
						}
						Function_118();
						*uParam6 = 1;
						return 1;
						break;
					
					case 0x0000138D:
						if (IS_ACTOR_VALID(*uParam54))
						{
							if (DECOR_CHECK_EXIST(*uParam54, "ignoreactorinduel"))
							{
								DECOR_REMOVE(*uParam54, "ignoreactorinduel");
							}
						}
						Function_118();
						*uParam6 = 1;
						return 1;
						break;
					
					default:
						break;
					}
			}
			break;
	}
	return 1;
}

void Function_116(var uParam0, int iParam1) //Position: 0x634A / 25418
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS((*uParam0)[iVar0], 1);
		iVar0++;
	}
	return;
}

vector3 Function_117(bool bParam0) //Position: 0x636D / 25453
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_118() //Position: 0x637E / 25470
{
	if (iLocal_221)
	{
		Function_119(9);
		iLocal_221 = 0;
	}
	return;
}

void Function_119(int iParam0) //Position: 0x6391 / 25489
{
	Function_120(&Global_28842, iParam0);
	return;
}

void Function_120(var uParam0, var uParam1) //Position: 0x639F / 25503
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_121(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46) //Position: 0x63BA / 25530
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	uParam3 = uParam3;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&iParam4 + 64[iVar03]), *(&iParam4 + 36), StackVal) };
		fVar4 = UNK_0x9C40E671(&vVar1);
		(*uParam46)[iVar0] = CREATE_ACTOR_IN_LAYOUT(*uParam2, Function_287(), (*uParam0)[iVar0], *(&iParam4 + 64[iVar03]), 0.0f, fVar4, 0.0f);
		TASK_FACE_COORD((*uParam46)[iVar0], &iParam4 + 36, 1);
		TASK_PRIORITY_SET((*uParam46)[iVar0], 1);
		iVar0++;
	}
	Function_122(uParam46, iParam1, 1, &iParam4);
}

int Function_122(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x643B / 25659
{
	int iVar0;
	int iVar1;
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
	iVar1 = RAND_INT_RANGE(0, (iParam1 - 1));
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar3 = ((iVar2 + iVar1) % iParam1);
		if (IS_ACTOR_MALE((*uParam0)[iVar3]))
		{
			if ((*iParam3 + 140)[iVar3] & 4096 != 0)
			{
				if (UNK_0xE094DB31((*uParam0)[iVar3], 0))
				{
					iVar0 = iVar3;
				}
			}
		}
		iVar2++;
	}
	iVar4 = 4294967295;
	iVar1 = RAND_INT_RANGE(0, (iParam1 - 1));
	iVar5 = 8192 | 16384;
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar6 = ((iVar2 + iVar1) % iParam1);
		if (((*iParam3 + 140)[iVar6] && iVar5) != 0)
		{
			iVar4 = iVar6;
		}
		iVar2++;
	}
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 <= iParam1)
	{
		bVar9 = (*iParam3 + 140)[iVar8];
		if (!bParam2)
		{
			Function_73(&bVar9, 4);
		}
		if (iVar8 == iVar0)
		{
			Function_73(&bVar9, 8);
		}
		if (iVar8 == iVar4)
		{
			Function_73(&bVar9, 16);
		}
		if (bParam2)
		{
			bVar10 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			if (bVar10 < 0.5f || iVar7 <= 3)
			{
				Function_73(&bVar9, 64);
			}
			else
			{
				iVar7++;
			}
		}
		DECOR_SET_INT((*uParam0)[iVar8], "DuelIsCrowdActor", bVar9);
		iVar8++;
	}
	return 1;
}

var Function_123(bool bParam0, bool bParam1) //Position: 0x657E / 25982
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

var Function_124(var uParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x658B / 25995
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381)
	{
		Function_132(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_131())
		{
			return "";
		}
	}
	if (!Function_129())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_128();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_127(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_127(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_127(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_127(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_126(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_126(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_51() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_287(), bVar0, fParam2, fParam3, fParam4, 0.0f, fParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_287(), 993, fParam2, fParam3, fParam4, 0.0f, fParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { fParam2, fParam3, fParam4 };
				if (!Function_71(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_287(), bVar0, fParam2, fParam3, fParam4, 0.0f, fParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_287(), 993, fParam2, fParam3, fParam4, 0.0f, fParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_125(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_51() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_125(bool bParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x68E1 / 26849
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, uParam4);
	}
}

var Function_126(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x691E / 26910
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

vector3 Function_127(bool bParam0) //Position: 0x69B9 / 27065
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

void Function_128() //Position: 0x69E0 / 27104
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

bool Function_129() //Position: 0x6A52 / 27218
{
	if (Function_130() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_130() //Position: 0x6A68 / 27240
{
	return Global_12976.f_152;
}

bool Function_131() //Position: 0x6A73 / 27251
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_132(var uParam0, bool bParam1, bool bParam2) //Position: 0x6A93 / 27283
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_73(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_73(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_133(int iParam0) //Position: 0x6AC0 / 27328
{
	Function_134(&Global_28842, iParam0);
	return;
}

void Function_134(var uParam0, int iParam1) //Position: 0x6ACE / 27342
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

float Function_135(bool bParam0, bool bParam1) //Position: 0x6AF1 / 27377
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_137(bParam0);
			vVar0 = { StackVal, StackVal, Function_137(bParam0) };
			Function_136(bParam1);
			vVar3 = { StackVal, StackVal, Function_136(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_136(bool bParam0) //Position: 0x6B91 / 27537
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

vector3 Function_137(bool bParam0) //Position: 0x6BFD / 27645
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

void Function_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6C67 / 27751
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

bool Function_139(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7, int iParam8, var uParam9) //Position: 0x6CE2 / 27874
{
	bool bVar0;
	
	bVar0 = CREATE_GATEWAY_IN_LAYOUT(uParam0, uParam1, bParam2, uParam3, uParam4, uParam6, uParam7, iParam8, uParam9, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
		}
		ADD_BLIP_FOR_OBJECT(bVar0, iParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(bVar0, "volrestrict", bParam2);
		DECOR_SET_BOOL(bVar0, "voldestroy", iParam8);
	}
	return bVar0;
}

void Function_140(bool bParam0) //Position: 0x6D5F / 27999
{
	if (Function_12(bParam0, 0))
	{
		switch (iLocal_466)
		{
			case 0x00000000:
				Function_229(Global_34573, bParam0, "duelNotorietyPlayer_msg01", 0, 5, 60, 1, 1);
				iLocal_466 = 1;
				break;
			
			case 0x00000001:
				if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
				{
					Function_229(bParam0, Global_34573, "duelNotoriety_msg02", "duelNotoriety_msg02", 5, 60, 1, 1);
					iLocal_466 = 2;
				}
				break;
			
			case 0x00000002:
				break;
			}
	}
	return;
}

void Function_141(int iParam0) //Position: 0x6E06 / 28166
{
	if (Function_99(iParam0->f_584, 4))
	{
		Function_191();
	}
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	Function_190(1);
	if (Function_99(iParam0->f_584, 32))
	{
		if (Function_41(iParam0->f_624))
		{
			Function_189(iParam0->f_624, 1);
		}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_30(iParam0, 0);
	}
	Function_73(iParam0 + 584, 16);
	Global_3382 = 1;
	if (Function_99(iParam0->f_584, 64))
	{
		Global_13111 = 4294967295;
	}
	Function_142(iParam0, 1);
	return;
}

void Function_142(var uParam0, int iParam1) //Position: 0x6E87 / 28295
{
	int iVar0;
	
	if (uParam0->f_620 != 0 && iParam1 != 1)
	{
		uParam0->f_620 = iParam1;
	}
	else if (uParam0->f_620 == 1)
	{
		uParam0->f_620 = iParam1;
		if (uParam0->f_488 != 4294967295)
		{
			if (uParam0->f_620 == 2)
			{
				iVar0 = Function_188(uParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_187(uParam0) != 1)
				{
					Function_165(uParam0->f_488, iVar0, 1);
				}
				if (uParam0->f_484 != 1 || uParam0->f_484 != 0)
				{
					Function_234(200, 1, 0);
				}
				else
				{
					Function_146(50, 1, 0);
				}
				if (uParam0->f_332 > 0)
				{
					Function_145(uParam0->f_332, 1);
				}
				else
				{
					Function_143(uParam0->f_332, 1);
				}
			}
			else if (uParam0->f_620 == 3)
			{
			}
		}
		else
		{
			LOG_ERROR("NO ENEMY FACTION");
		}
	}
	return;
}

int Function_143(bool bParam0, bool bParam1) //Position: 0x6F5C / 28508
{
	bool bVar0;
	
	bVar0 = Function_64(0);
	if ((Function_64(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_144(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_64(0));
	return 1;
}

int Function_144(int iParam0, bool bParam1, int iParam2) //Position: 0x6FEC / 28652
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
	Function_26(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_15(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_145(bool bParam0, bool bParam1) //Position: 0x71E7 / 29159
{
	bool bVar0;
	
	bVar0 = Function_64(0);
	if ((Function_64(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_14(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_64(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_14(597, bParam0, 0, 0);
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

void Function_146(int iParam0, bool bParam1, bool bParam2) //Position: 0x72B2 / 29362
{
	int iVar0;
	bool bVar1;
	
	if (Function_164(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_92())
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
	iVar0 = Function_64(3);
	Function_161();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_159(3, bVar1);
		if (!bParam2)
		{
			if (!Function_158(Global_76848, 4))
			{
				Function_153(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_14(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_24(3));
	iVar0 = Function_64(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_148(4, Function_152(Global_12976.f_156), 1);
				Function_147(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_148(4, Function_152(Global_12976.f_156), 1);
				Function_147(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_148(4, Function_152(Global_12976.f_156), 1);
				Function_147(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_148(4, Function_152(Global_12976.f_156), 1);
				Function_147(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_148(4, Function_152(Global_12976.f_156), 1);
				Function_147(Global_12976.f_152, Global_12976.f_156);
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

void Function_147(int iParam0, int iParam1) //Position: 0x7481 / 29825
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_148(int iParam0, char* cParam1, bool bParam2) //Position: 0x76DF / 30431
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
	Function_87(iParam0, cParam1, 0, 1);
	iVar1 = Function_149();
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

int Function_149() //Position: 0x7864 / 30820
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
	Function_150();
	return 0;
}

void Function_150() //Position: 0x7903 / 30979
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
		Function_151(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_151(int iParam0) //Position: 0x79B2 / 31154
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

var Function_152(int iParam0) //Position: 0x7A10 / 31248
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

void Function_153(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7A9F / 31391
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_155(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_154(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_154(char* cParam0, int iParam1) //Position: 0x7B0B / 31499
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

bool Function_155(bool bParam0, var uParam1, int iParam2) //Position: 0x7B42 / 31554
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
		if (Function_157(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_156(uVar0))
		{
			case 0x00000002:
				if (!Function_158(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_156(char* cParam0) //Position: 0x7BBA / 31674
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

int Function_157(int iParam0) //Position: 0x7C5B / 31835
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_53(&iVar1, 2147483648);
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

bool Function_158(var uParam0, int iParam1) //Position: 0x7C98 / 31896
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_159(int iParam0, bool bParam1) //Position: 0x7CAB / 31915
{
	bool bVar0;
	int iVar1;
	
	Function_14(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_160(iParam0, 4294967295);
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
	iVar1 = Function_149();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_160(int iParam0, int iParam1) //Position: 0x7E48 / 32328
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

void Function_161() //Position: 0x7E89 / 32393
{
	Function_163(3, 0.0f);
	Function_162(3, 10000.0f);
	return;
}

int Function_162(int iParam0, int iParam1) //Position: 0x7E9F / 32415
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_163(int iParam0, int iParam1) //Position: 0x7EDF / 32479
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_164(int iParam0) //Position: 0x7F1F / 32543
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_165(int iParam0, char* cParam1, bool bParam2) //Position: 0x7F2E / 32558
{
	char* cVar0[32];
	
	if (!Function_186(3))
	{
		return;
	}
	if (Function_51())
	{
		return;
	}
	if (Function_39())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if (bParam2)
			{
				switch (cParam1)
				{
					case 0x00000019:
						if (IS_PS3() || Function_185())
						{
							Function_166(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_166(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_166(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_185())
					{
						Function_166(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_166(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_166(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_166(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

void Function_166(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x804C / 32844
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_184(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_186(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_183(bParam0, 2))
	{
		Function_14(456, 1, 0, 0);
		Function_182(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_138(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_181(bParam0, iParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || iParam1);
		Function_182(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_180(0, 0, 1, 1))
			{
				Function_52(1);
				Function_50(1, 0);
			}
			else
			{
				Function_179();
			}
		}
		Function_174(bParam0);
		if (StackVal && !Function_99(((((!Function_173() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_99((((Function_173() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_39())
		{
			if (!Function_158(Global_76846, 2))
			{
				Function_153(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_168();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_167(3, iParam1);
				break;
			
			case 0x00000005:
				Function_167(3, SHIFT_LEFT(iParam1, 6));
				break;
			
			case 0x00000006:
				Function_167(3, SHIFT_LEFT(iParam1, 12));
				break;
			
			case 0x00000007:
				Function_167(3, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x00000008:
				Function_167(3, SHIFT_LEFT(iParam1, 24));
				break;
			
			case 0x00000009:
				Function_167(2, SHIFT_LEFT(iParam1, 18));
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

void Function_167(int iParam0, bool bParam1) //Position: 0x82E2 / 33506
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

void Function_168() //Position: 0x834D / 33613
{
	if (Function_184(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_172(Global_28180);
			Global_28180.f_8 = Function_169(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_172(Global_28180);
			Global_28180.f_8 = Function_169(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_169(int iParam0, int iParam1) //Position: 0x83C8 / 33736
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
					if (Function_171(6, 0) || Function_171(12, 0))
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
					if (Function_170(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_171(5, 0))
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
					if (Function_170(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_170(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_170(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_170(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_171(26, 0))
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
					if (Function_170(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_170(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_170(27) && iVar18)
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
					if (Function_170(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_170(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_170(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_170(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_171(17, 0) && iVar15)
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
					if (Function_170(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_171(6, 0) && Function_170(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_170(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_171(9, 0) && Function_170(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_170(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_171(8, 0) && iVar19)
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
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_170(int iParam0) //Position: 0x8FB9 / 36793
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_171(int iParam0, bool bParam1) //Position: 0x8FCE / 36814
{
	int iVar0;
	
	iVar0 = Function_90(iParam0);
	if (!Function_41(iVar0))
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

int Function_172(int iParam0) //Position: 0x900B / 36875
{
	int iVar0;
	int iVar1;
	
	if (!Function_184(iParam0))
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

bool Function_173() //Position: 0x905A / 36954
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_174(bool bParam0) //Position: 0x9087 / 36999
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
			if (Function_181(bParam0, Function_178(bVar24)))
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
			if (Function_181(bParam0, Function_178(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_177(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_176(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_175(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_175(int iParam0) //Position: 0x9237 / 37431
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_184(iParam0))
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

void Function_176(var uParam0, int iParam1) //Position: 0x928E / 37518
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

var Function_177(int iParam0) //Position: 0x92B3 / 37555
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_184(iParam0))
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

int Function_178(bool bParam0) //Position: 0x9309 / 37641
{
	return SHIFT_LEFT(1, bParam0);
}

void Function_179() //Position: 0x9315 / 37653
{
	return;
}

bool Function_180(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x931B / 37659
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

bool Function_181(bool bParam0, int iParam1) //Position: 0x93BF / 37823
{
	int iVar0;
	
	if (!Function_184(bParam0))
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

void Function_182(int iParam0, int iParam1) //Position: 0x941E / 37918
{
	if (!Function_184(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_183(int iParam0, int iParam1) //Position: 0x9473 / 38003
{
	int iVar0;
	
	if (!Function_184(iParam0))
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

bool Function_184(int iParam0) //Position: 0x94A0 / 38048
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_185() //Position: 0x94B6 / 38070
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_99(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_186(int iParam0) //Position: 0x94E6 / 38118
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_187(int iParam0) //Position: 0x9502 / 38146
{
	return !Function_99(iParam0->f_584, 16384);
}

var Function_188(int iParam0) //Position: 0x9514 / 38164
{
	return iParam0->f_492;
}

void Function_189(int iParam0, int iParam1) //Position: 0x951F / 38175
{
	int iVar0;
	
	if (!Function_93(iParam0))
	{
		Function_43();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_42(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_52(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_40(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_190(int iParam0) //Position: 0x9586 / 38278
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_96())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_191() //Position: 0x95BB / 38331
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_192(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0x95CF / 38351
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_213(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_71(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_73(iParam0 + 584, 4);
	}
	else
	{
		Function_53(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_41(iParam0->f_624))
		{
			Function_212(iParam0->f_624, 1);
			Function_73(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_73(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_256("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_196(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_195(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_194(iParam0 + 572);
	}
	Function_194(iParam0 + 44);
	Function_193(0);
}

void Function_193(int iParam0) //Position: 0x971E / 38686
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_105(105)), 0);
	return;
}

void Function_194(int iParam0) //Position: 0x973F / 38719
{
	Function_286(iParam0, 0.0f);
	return;
}

void Function_195(bool bParam0, bool bParam1) //Position: 0x974B / 38731
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
			SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_196(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x978C / 38796
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	int iVar17;
	
	Function_210(10.0f);
	Var14 = { StackVal, Function_210(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_209(bParam4) || bParam4 != 0)
		{
			bVar16 = Function_199(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = bParam4;
		}
		iVar17 = 0;
		while (iVar17 < (iParam2 - 1))
		{
			Function_197(&Var14, iVar17);
			GET_OBJECT_RELATIVE_POSITION(uParam3, Function_197(&Var14, iVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_256("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			iVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

vector3 Function_197(var uParam0, int iParam1) //Position: 0x987E / 39038
{
	vector3 vVar0;
	
	if (!Function_198(uParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return 0.0f, 0.0f, 0.0f;
	}
	if (iParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return 0.0f, 0.0f, 0.0f;
	}
	if (iParam1 >= (GET_NUM_FORMATION_LOCATIONS(*uParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(*uParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return 0.0f, 0.0f, 0.0f;
	}
	GET_FORMATION_LOCATION(*uParam0, iParam1, &vVar0);
	vVar0.x = (StackVal * vVar0.x);
	vVar0.f_4 = (StackVal * vVar0.y);
	vVar0.f_8 = (StackVal * vVar0.z);
	return StackVal, StackVal, vVar0;
}

bool Function_198(int iParam0) //Position: 0x99BF / 39359
{
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(*iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

var Function_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x99E1 / 39393
{
	return Function_200(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_200(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x99FA / 39418
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_203(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_203(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_203(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_203(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_203(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_203(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_203(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_203(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_203(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_203(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_203(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_203(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_203(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_203(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_201(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_201(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x9C4F / 40015
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_202(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_202(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_202(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_202(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_202(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_202(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_202(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_202(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_202(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_202(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_202(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_202(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_202(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_202(Global_30750[13], bVar0);
	}
	return Function_203(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_202(bool bParam0, bool bParam1) //Position: 0x9DA0 / 40352
{
	int iVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_203(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x9E5E / 40542
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_208();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_209(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_207(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_207(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_206(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_209(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_206(bVar0))
				{
					Function_205();
				}
				Function_204(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_209(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
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

void Function_204(int iParam0) //Position: 0xA151 / 41297
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_205() //Position: 0xA205 / 41477
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_206(bool bParam0) //Position: 0xA23F / 41535
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_207(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA26C / 41580
{
	int iVar0;
	
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
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

void Function_208() //Position: 0xA3BD / 41917
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_205();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_205();
	return;
}

bool Function_209(bool bParam0) //Position: 0xA408 / 41992
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_210(int iParam0) //Position: 0xA41F / 42015
{
	Function_211(iParam0, 10);
	return StackVal, Function_211(iParam0, 10);
}

struct<8> Function_211(var uParam0, int iParam1) //Position: 0xA42C / 42028
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_212(int iParam0, int iParam1) //Position: 0xA445 / 42053
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_93(iParam0))
	{
		Function_43();
		return;
	}
	iVar0 = Function_42(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_52(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_40(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_47(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

void Function_213(int iParam0) //Position: 0xA4EB / 42219
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_256(&Var0) };
		iParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_214(int iParam0, int iParam1) //Position: 0xA560 / 42336
{
	if (Function_41(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_73(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_215(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA5B5 / 42421
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_219(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_216(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_216(bParam0, bParam1, bParam2, 4294967295);
}

int Function_216(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA613 / 42515
{
	var uVar0;
	
	if (!Function_218(bParam2))
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
	uVar0 = Function_219(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_217(uVar0);
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

int Function_217(int iParam0) //Position: 0xA768 / 42856
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

bool Function_218(int iParam0) //Position: 0xA7A6 / 42918
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_219(int iParam0, int iParam1, int iParam2) //Position: 0xA7BB / 42939
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_220(bool bParam0, var uParam1, var uParam2, float fParam3) //Position: 0xA7DB / 42971
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_287(), bParam0, 15, 1);
	iLocal_222 = CREATE_ACTORSET_IN_LAYOUT(bParam0, "DuelExemptedFromStayout", 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_287(), 0, *uParam2, 0.0f, 0.0f, 0.0f, (fParam3 * 1.5f), 20.0f, (fParam3 * 1.5f));
	iVar2 = LOCATE_ACTORS_IN_VOLUME(bVar1, iVar0, 0, 1);
	bVar3 = false;
	while (bVar3 <= iVar2)
	{
		bVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, iVar0));
		if (IS_ACTOR_VALID(bVar4) && DOES_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar4))
		{
			bVar5 = false;
			if (IS_ACTOR_HORSE(bVar4) && DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
			{
				bVar5 = true;
			}
			else if (!IS_ACTOR_OUTDOORS(bVar4))
			{
				bVar5 = true;
			}
			if (bVar5)
			{
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar4, 0);
				ADD_ACTORSET_MEMBER(iLocal_222, bVar4);
			}
		}
		bVar3++;
	}
	DESTROY_OBJECTSET(iVar0);
	DESTROY_VOLUME(bVar1);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam1);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam1);
}

var Function_221(vector3 vParam0, vector3 vParam3) //Position: 0xA8CA / 43210
{
	var uVar0;
	
	Function_222(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_222(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xA8E4 / 43236
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_223(int iParam0, int iParam1) //Position: 0xA907 / 43271
{
	if (iParam1 <= 0)
	{
		return Function_224(iParam0, iParam1);
	}
	if (Global_29006 == Global_30640[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -2175.953f, 16.256f, 2611.705f };
			*(iParam0 + 36) = { -2166.595f, 16.214f, 2611.732f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2160.472f, 16.902f, 2605.667f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2158.75f, 16.881f, 2605.917f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2155.889f, 16.434f, 2617.996f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2157.149f, 16.447f, 2619.214f };
			(*iParam0 + 140)[3] = 18944;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -2157.237f, 16.256f, 2611.759f };
			*(iParam0 + 36) = { -2166.595f, 16.214f, 2611.732f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2164.137f, 16.909f, 2619.3f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -2171.411f, 16.449f, 2619.825f };
			(*iParam0 + 140)[1] = 7168;
			*(iParam0 + 64[23]) = { -2173.083f, 16.449f, 2620.048f };
			(*iParam0 + 140)[2] = 12800;
			*(iParam0 + 64[33]) = { -2168.264f, 16.881f, 2605.223f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -2141.009f, 16.097f, 2610.77f };
			*(iParam0 + 36) = { -2152.214f, 16.097f, 2611.114f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2163.959f, 16.909f, 2619.74f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2165.694f, 16.909f, 2620.008f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2161.763f, 16.881f, 2605.855f };
			(*iParam0 + 140)[2] = 4352;
			*(iParam0 + 64[33]) = { -2157.148f, 16.881f, 2602.253f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -2163.419f, 16.097f, 2611.458f };
			*(iParam0 + 36) = { -2152.214f, 16.097f, 2611.114f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2146.166f, 16.399f, 2604.041f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2144.782f, 16.437f, 2604.025f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2134.941f, 16.449f, 2619.2f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2142.436f, 16.451f, 2620.109f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -2109.022f, 16.306f, 2610.545f };
			*(iParam0 + 36) = { -2120.304f, 16.097f, 2610.42f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2128.746f, 16.582f, 2618.448f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2130.542f, 16.583f, 2618.705f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2132.521f, 16.583f, 2618.72f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -2131.128f, 16.617f, 2603.082f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -2131.586f, 16.306f, 2610.295f };
			*(iParam0 + 36) = { -2120.304f, 16.097f, 2610.42f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2109.311f, 17.032f, 2602.233f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2084.119f, 16.722f, 2620.025f };
			(*iParam0 + 140)[1] = 2304;
			*(iParam0 + 64[23]) = { -2110.06f, 16.574f, 2618.706f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2112.009f, 16.574f, 2618.81f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(iParam0 + 24) = { -2181.665f, 16.199f, 2626.591f };
			*(iParam0 + 36) = { -2181.558f, 16.27f, 2617.295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 70.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2187.365f, 16.947f, 2611.735f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2187.344f, 16.947f, 2610.434f };
			(*iParam0 + 140)[1] = 16896;
			*(iParam0 + 64[23]) = { -2175.141f, 16.563f, 2603.119f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2173.878f, 16.846f, 2603.615f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(iParam0 + 24) = { -2181.451f, 16.199f, 2607.999f };
			*(iParam0 + 36) = { -2181.558f, 16.27f, 2617.295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2171.507f, 16.91f, 2626.342f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2171.085f, 17.419f, 2628.723f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2188.435f, 46.438f, 2629.844f };
			(*iParam0 + 140)[2] = 6400;
			*(iParam0 + 64[33]) = { -2186.93f, 16.354f, 2624.667f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(iParam0 + 24) = { -2182.602f, 16.279f, 2582.669f };
			*(iParam0 + 36) = { -2182.557f, 16.283f, 2592.741f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2175.813f, 16.892f, 2598.68f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2175.771f, 16.892f, 2599.781f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2187.98f, 16.947f, 2605.092f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2188.852f, 16.947f, 2604.008f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(iParam0 + 24) = { -2182.512f, 16.279f, 2602.813f };
			*(iParam0 + 36) = { -2182.557f, 16.283f, 2592.741f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2192.36f, 16.58f, 2590.16f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2175.242f, 16.431f, 2579.68f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { -2174.96f, 16.393f, 2581.227f };
			(*iParam0 + 140)[2] = 12800;
			*(iParam0 + 64[33]) = { -2174.707f, 16.359f, 2583.002f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
	}
	if (Global_29006 == Global_30668[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -833.757f, 92.093f, 2405.053f };
			*(iParam0 + 36) = { -824.86f, 92.111f, 2405.911f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -826.829f, 92.604f, 2399.558f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -825.39f, 92.604f, 2400.278f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -817.222f, 92.228f, 2400.68f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -815.883f, 92.122f, 2401.766f };
			(*iParam0 + 140)[3] = 12800;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -815.963f, 92.093f, 2406.769f };
			*(iParam0 + 36) = { -824.86f, 92.111f, 2405.911f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -834.486f, 92.625f, 2412.879f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -833.019f, 92.604f, 2398.71f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { -830.829f, 92.597f, 2398.705f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -827.994f, 92.604f, 2399.416f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -948.017f, 90.246f, 2443.329f };
			*(iParam0 + 36) = { -940.246f, 90.101f, 2439.536f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -944.354f, 90.362f, 2433.664f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -943.069f, 90.368f, 2432.761f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -936.299f, 90.374f, 2429.44f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -935.053f, 90.383f, 2429.297f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -932.475f, 90.246f, 2435.743f };
			*(iParam0 + 36) = { -940.246f, 90.101f, 2439.536f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -943.643f, 90.353f, 2452.65f };
			(*iParam0 + 140)[0] = 7168;
			*(iParam0 + 64[13]) = { -945.45f, 90.35f, 2452.563f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -957.561f, 90.786f, 2438.436f };
			(*iParam0 + 140)[2] = 2304;
			*(iParam0 + 64[33]) = { -953.349f, 90.786f, 2436.586f };
			(*iParam0 + 140)[3] = 20736;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -773.226f, 92.264f, 2441.655f };
			*(iParam0 + 36) = { -779.513f, 92.261f, 2435.719f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789.443f, 92.336f, 2433.929f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -788.805f, 93.291f, 2415.236f };
			(*iParam0 + 140)[1] = 4352;
			*(iParam0 + 64[23]) = { -782.939f, 93.132f, 2421.574f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -781.724f, 93.106f, 2422.239f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -785.8f, 92.264f, 2429.783f };
			*(iParam0 + 36) = { -779.513f, 92.261f, 2435.719f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789.063f, 93.199f, 2416.324f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -787.695f, 93.291f, 2416.819f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -784.003f, 92.958f, 2422.655f };
			(*iParam0 + 140)[2] = 4096;
			*(iParam0 + 64[33]) = { -788.074f, 92.302f, 2435.201f };
			(*iParam0 + 140)[3] = 4096;
			return 1;
		}
	}
	if (Global_29006 == Global_30668[1])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { 161.801f, 73.036f, 2209.601f };
			*(iParam0 + 36) = { 154.678f, 73.036f, 2214.532f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 151.093f, 73.781f, 2231.127f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 149.66f, 73.778f, 2229.832f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { 149.334f, 73.78f, 2232.961f };
			(*iParam0 + 140)[2] = 20736;
			*(iParam0 + 64[33]) = { 130.805f, 73.285f, 2225.233f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { 147.555f, 73.036f, 2219.463f };
			*(iParam0 + 36) = { 154.678f, 73.036f, 2214.532f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 132.103f, 73.286f, 2222.323f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { 163.447f, 73.758f, 2196.496f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 164.755f, 73.755f, 2196.096f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 168.478f, 73.286f, 2214.951f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { 112.178f, 73.036f, 2307.669f };
			*(iParam0 + 36) = { 113.796f, 73.036f, 2299.295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 110.108f, 73.286f, 2288.538f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { 121.847f, 73.286f, 2288.113f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 121.773f, 73.286f, 2289.774f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 121.96f, 73.286f, 2291.226f };
			(*iParam0 + 140)[3] = 4608;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { 115.414f, 73.036f, 2290.921f };
			*(iParam0 + 36) = { 113.796f, 73.036f, 2299.295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 117.484f, 73.286f, 2310.052f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { 105.745f, 73.286f, 2310.477f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 105.819f, 73.286f, 2308.816f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 105.632f, 73.286f, 2307.364f };
			(*iParam0 + 140)[3] = 4608;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { 125.52f, 72.495f, 2253.003f };
			*(iParam0 + 36) = { 123.009f, 73.014f, 2261.074f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 112.309f, 73.767f, 2280.208f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { 112.308f, 73.641f, 2277.641f };
			(*iParam0 + 140)[1] = 9216;
			*(iParam0 + 64[23]) = { 113.096f, 73.649f, 2273.542f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { 113.108f, 73.66f, 2271.663f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { 120.498f, 72.495f, 2269.145f };
			*(iParam0 + 36) = { 123.009f, 73.014f, 2261.074f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 112.671f, 73.644f, 2276.903f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { 117.043f, 73.643f, 2240.313f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 118.516f, 73.712f, 2240.557f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 124.33f, 76.749f, 2238.564f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30685[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -4297.778f, 22.269f, 4404.503f };
			*(iParam0 + 36) = { -4304.795f, 22.573f, 4404.685f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4306.099f, 22.155f, 4415.161f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { -4311.022f, 23.058f, 4412.995f };
			(*iParam0 + 140)[1] = 4608;
			*(iParam0 + 64[23]) = { -4311.679f, 23.058f, 4411.987f };
			(*iParam0 + 140)[2] = 13312;
			*(iParam0 + 64[33]) = { -4313.768f, 26.886f, 4406.992f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -4304.795f, 22.573f, 4404.685f };
			*(iParam0 + 36) = { -4297.778f, 22.269f, 4404.503f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4305.446f, 22.139f, 4414.692f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -4306.939f, 22.322f, 4414.795f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4309.754f, 23.058f, 4413.441f };
			(*iParam0 + 140)[2] = 6400;
			*(iParam0 + 64[33]) = { -4313.768f, 26.886f, 4406.992f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -4267.992f, 18.109f, 4437.149f };
			*(iParam0 + 36) = { -4275.026f, 18.178f, 4441.885f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4278.334f, 18.071f, 4449.653f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4279.857f, 18.071f, 4449.824f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -4281.086f, 18.071f, 4438.504f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { -4279.52f, 18.071f, 4437.386f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -4282.06f, 18.109f, 4446.621f };
			*(iParam0 + 36) = { -4275.026f, 18.178f, 4441.885f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4277.958f, 18.071f, 4437.547f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4276.217f, 18.076f, 4436.355f };
			(*iParam0 + 140)[1] = 4608;
			*(iParam0 + 64[23]) = { -4270.787f, 18.071f, 4432.743f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { -4269.763f, 18.071f, 4433.286f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -4318.445f, 22.086f, 4450.013f };
			*(iParam0 + 36) = { -4318.897f, 22.086f, 4440.917f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4330.111f, 25.409f, 4422.815f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4329.889f, 25.581f, 4421.464f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4329.611f, 25.573f, 4420.175f };
			(*iParam0 + 140)[2] = 4352;
			*(iParam0 + 64[33]) = { -4312.611f, 22.004f, 4423.452f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -4319.349f, 22.086f, 4431.821f };
			*(iParam0 + 36) = { -4318.897f, 22.086f, 4440.917f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4322.033f, 22.087f, 4455.366f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4323.083f, 22.087f, 4453.766f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4324.211f, 22.094f, 4451.612f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { -4325.245f, 22.128f, 4450.168f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
	}
	if (Global_29006 == Global_30693[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -2732.999f, 32.668f, 4258.262f };
			*(iParam0 + 36) = { -2724.731f, 32.559f, 4254.918f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2720.958f, 32.28f, 4245.056f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2719.41f, 32.28f, 4244.509f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2713.209f, 32.808f, 4256.949f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2714.787f, 32.827f, 4257.932f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -2716.179f, 32.668f, 4250.88f };
			*(iParam0 + 36) = { -2724.589f, 33.196f, 4254.571f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2725.793f, 32.826f, 4264.401f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2726.701f, 32.825f, 4265.115f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2737.822f, 32.607f, 4253.199f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2736.711f, 32.607f, 4251.915f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -2678.78f, 31.48f, 4241.123f };
			*(iParam0 + 36) = { -2688.745f, 31.42f, 4241.607f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2700.972f, 31.57f, 4254.442f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2702.482f, 32.011f, 4254.482f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2704.879f, 32.28f, 4235.066f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2704.098f, 32.176f, 4233.792f };
			(*iParam0 + 140)[3] = 20736;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -2698.71f, 31.48f, 4242.091f };
			*(iParam0 + 36) = { -2688.745f, 31.42f, 4241.607f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2679.489f, 32.5f, 4232.727f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2677.893f, 32.5f, 4233.058f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2671.652f, 31.192f, 4248.009f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2683.122f, 31.548f, 4248.685f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30707[2])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -819.766f, 12.801f, 3773.009f };
			*(iParam0 + 36) = { -813.468f, 12.801f, 3766.967f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -804.586f, 13.051f, 3742.726f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -803.14f, 13.551f, 3764.739f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { -804.056f, 13.551f, 3765.803f };
			(*iParam0 + 140)[2] = 20992;
			*(iParam0 + 64[33]) = { -805.158f, 13.551f, 3767.062f };
			(*iParam0 + 140)[3] = 512;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -807.17f, 12.801f, 3760.925f };
			*(iParam0 + 36) = { -813.468f, 12.801f, 3766.967f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -809.813f, 13.551f, 3771.118f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -812.055f, 13.551f, 3773.48f };
			(*iParam0 + 140)[1] = 16896;
			*(iParam0 + 64[23]) = { -813.522f, 13.551f, 3774.942f };
			(*iParam0 + 140)[2] = 13312;
			*(iParam0 + 64[33]) = { -816.089f, 13.551f, 3777.198f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -787.179f, 12.801f, 3736.633f };
			*(iParam0 + 36) = { -793.017f, 12.801f, 3743.048f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -811.045f, 13.051f, 3750.048f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -810.352f, 13.051f, 3748.774f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -806.995f, 13.051f, 3746.105f };
			(*iParam0 + 140)[2] = 21504;
			*(iParam0 + 64[33]) = { -806.253f, 13.051f, 3744.332f };
			(*iParam0 + 140)[3] = 512;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -798.855f, 12.801f, 3749.463f };
			*(iParam0 + 36) = { -793.017f, 12.801f, 3743.048f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789.346f, 13.04f, 3730.211f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -786.917f, 13.037f, 3728.203f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -785.021f, 13.051f, 3724.668f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -782.264f, 13.036f, 3740.828f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -804.814f, 13.051f, 3719.617f };
			*(iParam0 + 36) = { -798.673f, 13.051f, 3713.655f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -800.2f, 13.12f, 3705.603f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -799.261f, 13.12f, 3704.608f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -797.36f, 13.12f, 3703.65f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -788.266f, 13.051f, 3712.833f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -798.673f, 13.051f, 3713.655f };
			*(iParam0 + 36) = { -804.814f, 13.051f, 3719.617f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -804.219f, 13.051f, 3729.436f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -805.748f, 13.051f, 3729.628f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -808.559f, 13.051f, 3730.366f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -813.656f, 13.051f, 3715.872f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30717[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { 735.953f, 78.306f, 1324.242f };
			*(iParam0 + 36) = { 735.953f, 78.306f, 1315.071f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 729.253f, 48.486f, 1309.157f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 729.192f, 78.486f, 1307.499f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 742.653f, 78.425f, 1306.141f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 743.264f, 78.425f, 1307.125f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { 735.953f, 78.306f, 1305.9f };
			*(iParam0 + 36) = { 735.953f, 78.306f, 1315.071f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 742.376f, 78.425f, 1320.613f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 741.937f, 78.425f, 1321.135f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 741.855f, 78.425f, 1322.617f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 729.187f, 78.486f, 1322.833f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { 788.067f, 78.306f, 1292.354f };
			*(iParam0 + 36) = { 788.064f, 78.306f, 1301.43f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 794.4f, 78.456f, 1312.086f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 794.491f, 78.456f, 1313.429f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 781.088f, 78.413f, 1322.206f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 780.901f, 78.413f, 1320.856f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { 788.061f, 78.306f, 1310.506f };
			*(iParam0 + 36) = { 788.064f, 78.306f, 1301.43f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 782.021f, 78.419f, 1294.476f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 779.472f, 78.42f, 1290.639f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 780.614f, 78.42f, 1289.73f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 797.764f, 78.468f, 1288.355f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { 686.033f, 78.197f, 1303.161f };
			*(iParam0 + 36) = { 685.943f, 78.195f, 1312.249f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 692.386f, 78.49f, 1319.771f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 693.316f, 78.474f, 1329.634f };
			(*iParam0 + 140)[1] = 256;
			*(iParam0 + 64[23]) = { 680.325f, 79.321f, 1325.2f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 679.214f, 79.322f, 1323.885f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { 685.853f, 78.197f, 1321.337f };
			*(iParam0 + 36) = { 685.943f, 78.195f, 1312.249f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 671.907f, 78.472f, 1293.629f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 671.832f, 78.47f, 1291.321f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 691.761f, 78.49f, 1290.059f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 691.998f, 78.49f, 1296.535f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(iParam0 + 24) = { 739.831f, 78.306f, 1252.583f };
			*(iParam0 + 36) = { 730.21f, 78.306f, 1252.583f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 723.05f, 78.471f, 1260.361f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 719.061f, 78.471f, 1260.12f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 718.014f, 78.471f, 1259.29f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 699.142f, 78.527f, 1242.135f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(iParam0 + 24) = { 720.589f, 78.306f, 1252.583f };
			*(iParam0 + 36) = { 730.21f, 78.306f, 1252.583f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 743.34f, 78.504f, 1244.251f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 755.658f, 78.422f, 1260.858f };
			(*iParam0 + 140)[1] = 512;
			*(iParam0 + 64[23]) = { 746.283f, 78.422f, 1259.612f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { 744.823f, 78.421f, 1260.437f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(iParam0 + 24) = { 686.412f, 78.306f, 1351.855f };
			*(iParam0 + 36) = { 686.271f, 78.306f, 1361.19f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 693.253f, 78.381f, 1375.135f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 691.817f, 78.373f, 1376.577f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 681.885f, 78.446f, 1380.694f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 680.597f, 78.502f, 1372.951f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(iParam0 + 24) = { 686.13f, 78.306f, 1370.525f };
			*(iParam0 + 36) = { 686.271f, 78.306f, 1361.19f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 679.044f, 78.306f, 1346.869f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 678.93f, 79.291f, 1340.874f };
			(*iParam0 + 140)[1] = 4352;
			*(iParam0 + 64[23]) = { 692.642f, 78.485f, 1345.834f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 693.52f, 78.485f, 1347.342f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 10)
		{
			*(iParam0 + 24) = { 732.158f, 78.314f, 1399.543f };
			*(iParam0 + 36) = { 741.11f, 78.306f, 1397.618f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 750.645f, 78.611f, 1386.18f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 751.968f, 78.606f, 1385.991f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 756.953f, 78.306f, 1385.658f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { 751.965f, 80.39f, 1404.842f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 11)
		{
			*(iParam0 + 24) = { 750.062f, 78.314f, 1395.693f };
			*(iParam0 + 36) = { 741.11f, 78.306f, 1397.618f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 175.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 734.462f, 79.769f, 1408.614f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 731.99f, 79.78f, 1408.546f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 727.562f, 78.811f, 1408.402f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 723.946f, 78.804f, 1407.98f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
	}
	return 0;
}

int Function_224(int iParam0, int iParam1) //Position: 0xD3D1 / 54225
{
	if (iLocal_4 != 0)
	{
		iParam0->f_56 = 1;
		iParam0->f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967295)
	{
		iParam0->f_56 = 1;
		iParam0->f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967292)
	{
		iParam0->f_48 = 10.0f;
		iParam0->f_52 = 30.0f;
		iParam0->f_56 = 1;
		iParam0->f_60 = 4;
		*(iParam0 + 64[03]) = { 111.425f, 73.767f, 2280.372f };
		(*iParam0 + 140)[0] = 5120;
		*(iParam0 + 64[13]) = { 112.086f, 73.639f, 2278.207f };
		(*iParam0 + 140)[1] = 12800;
		*(iParam0 + 64[23]) = { 113.136f, 73.646f, 2273.555f };
		(*iParam0 + 140)[2] = 1024;
		*(iParam0 + 64[33]) = { 113.364f, 73.645f, 2272.118f };
		(*iParam0 + 140)[3] = 16896;
		return 1;
	}
	if (iParam1 == 4294967294)
	{
		if (Global_29006 == Global_30668[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -806.792f, 92.727f, 2373.401f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -807.277f, 92.736f, 2375.261f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -809.876f, 92.834f, 2381.274f };
			(*iParam0 + 140)[2] = 35072;
			*(iParam0 + 64[33]) = { -823.197f, 92.307f, 2378.322f };
			(*iParam0 + 140)[3] = 1024;
			*(iParam0 + 64[43]) = { -823.026f, 92.375f, 2376.612f };
			(*iParam0 + 140)[4] = 35072;
			*(iParam0 + 64[53]) = { -822.463f, 92.431f, 2375.01f };
			(*iParam0 + 140)[5] = 20992;
			return 1;
		}
		if (Global_29006 == Global_30640[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -2160.207f, 16.882f, 2605.83f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2158.595f, 16.881f, 2605.596f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2159.184f, 16.894f, 2605.341f };
			(*iParam0 + 140)[2] = 35072;
			*(iParam0 + 64[33]) = { -2155.752f, 16.449f, 2618.374f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { -2153.08f, 16.371f, 2616.611f };
			(*iParam0 + 140)[4] = 17408;
			*(iParam0 + 64[53]) = { -2154.778f, 16.401f, 2617.199f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
		if (Global_29006 == Global_30668[1])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { 155.69f, 73.755f, 2200.008f };
			(*iParam0 + 140)[0] = 39168;
			*(iParam0 + 64[13]) = { 158.627f, 73.755f, 2198.852f };
			(*iParam0 + 140)[1] = 13312;
			*(iParam0 + 64[23]) = { 160.233f, 73.755f, 2197.97f };
			(*iParam0 + 140)[2] = 4608;
			*(iParam0 + 64[33]) = { 172.272f, 73.286f, 2210.202f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { 169.259f, 73.286f, 2213.359f };
			(*iParam0 + 140)[4] = 21504;
			*(iParam0 + 64[53]) = { 168.629f, 73.286f, 2214.713f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
		if (Global_29006 == Global_30707[2])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -809.175f, 16.665f, 3709.376f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -807.866f, 16.665f, 3708.143f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -806.33f, 16.665f, 3706.44f };
			(*iParam0 + 140)[2] = 20992;
			*(iParam0 + 64[33]) = { -800.715f, 16.665f, 3700.73f };
			(*iParam0 + 140)[3] = 4352;
			*(iParam0 + 64[43]) = { -785.693f, 13.051f, 3713.464f };
			(*iParam0 + 140)[4] = 35072;
			*(iParam0 + 64[53]) = { -785.114f, 13.051f, 3716.611f };
			(*iParam0 + 140)[5] = 35072;
			return 1;
		}
		if (Global_29006 == Global_30717[1])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -143.332f, 119.009f, 1353.172f };
			*(iParam0 + 64[13]) = { -144.653f, 120.644f, 1357.015f };
			*(iParam0 + 64[23]) = { -144.869f, 119.855f, 1359.631f };
			*(iParam0 + 64[33]) = { -129.628f, 118.869f, 1352.225f };
			*(iParam0 + 64[43]) = { -128.989f, 118.869f, 1358.801f };
			*(iParam0 + 64[53]) = { -129.897f, 118.869f, 1361.462f };
			return 1;
		}
		if (Global_29006 == Global_30717[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 100.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 853.294f, 77.517f, 1279.476f };
			*(iParam0 + 64[13]) = { 852.864f, 77.517f, 1282.613f };
			*(iParam0 + 64[23]) = { 853.532f, 77.517f, 1283.355f };
			*(iParam0 + 64[33]) = { 859.177f, 77.517f, 1267.618f };
			*(iParam0 + 64[43]) = { 861.636f, 77.517f, 1278.204f };
			*(iParam0 + 64[53]) = { 861.581f, 77.517f, 1279.349f };
			return 1;
		}
		if (Global_29006 == Global_30693[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 50.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -2689.855f, 31.151f, 4274.476f };
			(*iParam0 + 140)[0] = 35072;
			*(iParam0 + 64[13]) = { -2689.877f, 31.151f, 4278.589f };
			(*iParam0 + 140)[1] = 13312;
			*(iParam0 + 64[23]) = { -2690.326f, 31.152f, 4279.999f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { -2703.691f, 31.151f, 4280.464f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { -2704.23f, 31.155f, 4278.981f };
			(*iParam0 + 140)[4] = 21504;
			*(iParam0 + 64[53]) = { -2703.474f, 31.146f, 4271.279f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
	}
	if (iParam1 == 4294967293)
	{
		if (Global_29006 == Global_30658[4])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -3679.563f, 8.483f, 3479.026f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -3675.23f, 8.26f, 3484.906f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { -3673.747f, 8.256f, 3481.049f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { -3675.517f, 8.201f, 3492.157f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	iParam0->f_48 = 10.0f;
	iParam0->f_52 = 30.0f;
	iParam0->f_56 = 1;
	iParam0->f_60 = 0;
	return 1;
}

bool Function_225(var uParam0, float fParam1) //Position: 0xDBEF / 56303
{
	if (Function_228(uParam0))
	{
		if (Function_226(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_226(bool bParam0) //Position: 0xDC0B / 56331
{
	if (Function_228(bParam0))
	{
		if (Function_227(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_227(int iParam0) //Position: 0xDCD3 / 56531
{
	return Function_99(*iParam0, 2);
}

bool Function_228(bool bParam0) //Position: 0xDCE0 / 56544
{
	return Function_99(*bParam0, 1);
}

void Function_229(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xDCED / 56557
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_243(bParam0, Global_34573) >= IntToFloat(iParam5))
		{
			if (!IS_ACTOR_VALID(bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
			if (bParam6)
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 0, 1))
					{
						iParam3 = iParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					iParam3 = iParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

void Function_230() //Position: 0xDD7D / 56701
{
	int iVar0;
	
	bLocal_465 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_232(3);
		if (iVar0 == 0)
		{
			iLocal_464 = "FTR_SONG_02";
		}
		else if (iVar0 == 1)
		{
			iLocal_464 = "FTR_SONG_03";
		}
		else if (iVar0 == 2)
		{
			iLocal_464 = "FTR_SONG_07";
		}
	}
	else if (Global_29004 == 2)
	{
		if (Function_231())
		{
			iLocal_464 = "NRT_SONG_04";
		}
		else
		{
			iLocal_464 = "NRT_SONG_05";
		}
	}
	else if (Global_29004 == 1)
	{
		iVar0 = Function_232(3);
		if (iVar0 == 0)
		{
			iLocal_464 = "MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_464 = "MEX_SONG_03";
		}
		else if (iVar0 == 2)
		{
			iLocal_464 = "MEX_SONG_05";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(iLocal_464, "PASTORAL", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_231() //Position: 0xDE8B / 56971
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_232(bool bParam0) //Position: 0xDE9E / 56990
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_233(bool bParam0) //Position: 0xDEB7 / 57015
{
	return 0;
	if (!IS_ACTOR_ON_FOOT(Global_34573))
	{
		if (bParam0)
		{
			HUD_CLEAR_OBJECTIVE_QUEUE();
			PRINT_OBJECTIVE_B("You must be on foot to get challenged to a duel. Once you are on foot the challenger will respond to you.", 10.0f, 1, 2, 1, 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_234(int iParam0, bool bParam1, bool bParam2) //Position: 0xDF4E / 57166
{
	int iVar0;
	bool bVar1;
	
	if (Function_164(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_92())
	{
		bVar1 = (bVar1 / 2);
	}
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
			Function_159(1, bVar1);
			if (!bParam2)
			{
				if (!Function_158(Global_76848, 1))
				{
					Function_153(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_236(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_158(Global_76848, 2))
				{
					Function_153(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_14(1, bVar1, 0, 0);
	}
	else
	{
		Function_144(1, (4294967295 * bVar1), 0);
	}
	if (Function_64(1) <= 4294962296)
	{
		Function_63(1, 4294962296, 0);
	}
	else if (Function_64(1) >= 5000)
	{
		Function_63(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_24(1));
	iVar0 = Function_64(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_148(2, Function_235(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_148(2, Function_235(Global_12976.f_152), 0);
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
				Function_148(2, Function_235(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_148(2, Function_235(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_148(2, Function_235(Global_12976.f_152), 1);
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
				Function_148(2, Function_235(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_148(2, Function_235(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_148(2, Function_235(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_148(2, Function_235(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_148(2, Function_235(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_148(2, Function_235(Global_12976.f_152), 1);
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
				Function_148(2, Function_235(Global_12976.f_152), 0);
			}
			break;
	}
	Function_147(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_235(int iParam0) //Position: 0xE26F / 57967
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

int Function_236(int iParam0, bool bParam1) //Position: 0xE312 / 58130
{
	bool bVar0;
	int iVar1;
	
	Function_144(iParam0, bParam1, 0);
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
	iVar1 = Function_160(iParam0, 4294967295);
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
	iVar1 = Function_149();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_237(bool bParam0) //Position: 0xE4AE / 58542
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", 1);
	}
	return;
}

int Function_238(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0xE4E2 / 58594
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
		fVar0 = Function_243(bParam0, Global_34573);
		if (!Function_99(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_239(bParam0);
				return 1;
			}
		}
		if (!Function_99(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_239(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_239(bParam0);
				return 1;
			}
		}
		if (!Function_99(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_239(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_239(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_99(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_239(bParam0);
				return 1;
			}
		}
		if (!Function_99(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_239(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_239(bool bParam0) //Position: 0xE679 / 59001
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_240(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_240(bool bParam0) //Position: 0xE6AD / 59053
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_241(bool bParam0) //Position: 0xE6C4 / 59076
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_242(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_242(var uParam0, int iParam1) //Position: 0xE6FF / 59135
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

float Function_243(bool bParam0, bool bParam1) //Position: 0xE788 / 59272
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

void Function_244(bool bParam0) //Position: 0xE879 / 59513
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

void Function_245(var uParam0, bool bParam1, bool bParam2) //Position: 0xE903 / 59651
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_247(uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_246();
		}
	}
	return;
}

void Function_246() //Position: 0xE92C / 59692
{
	switch (Global_29004)
	{
		case 0x00000000:
			AUDIO_MUSIC_ONE_SHOT("FTR_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT("MEX_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_ONE_SHOT("NRT_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_247(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xE9B5 / 59829
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
			Var0 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, iVar4, iParam5, iParam6);
	}
}

int Function_248(var uParam0, int iParam1) //Position: 0xEA3A / 59962
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
	Function_250(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_249(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_249(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xEB9B / 60315
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_256("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_250(bool bParam0) //Position: 0xEC36 / 60470
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
						Function_252(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_251(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_252(iVar0);
						}
					}
					else if (Function_251(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_252(iVar0);
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
			Function_252(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_251(bool bParam0, vector3 vParam1) //Position: 0xED97 / 60823
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_137(bParam0);
		vVar0 = { StackVal, StackVal, Function_137(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_252(int iParam0) //Position: 0xEE11 / 60945
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

int Function_253(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xEE72 / 61042
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	fParam1 = fParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_255("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_254(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_254(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_254(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_254(bool bParam0) //Position: 0xF0CF / 61647
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

void Function_255(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF115 / 61717
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<32> Function_256(bool bParam0) //Position: 0xF18C / 61836
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_257("0", &cVar8, ""), 4);
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

struct<32> Function_257(char* cParam0, char* cParam1, char* cParam2) //Position: 0xF1F6 / 61942
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_258(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0xF215 / 61973
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

float Function_259() //Position: 0xF231 / 62001
{
	float fVar0;
	var uVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_242(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_260(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xF262 / 62050
{
	if (StackVal & 64 == 64)
	{
		if (!*iParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_243(Global_34573, bParam1) > 15.0f)
				{
					*iParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*iParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*iParam2)
		{
			return 0;
		}
		if (Function_263() && !*iParam2)
		{
			return 0;
		}
		if (Function_262(iParam0) && !*iParam2)
		{
			return 0;
		}
		if (Global_3387 && !bParam4)
		{
			return 0;
		}
		if (Global_3410)
		{
			return 0;
		}
		if (Global_3384)
		{
			return 0;
		}
		if (Global_3403 && iParam7)
		{
			*iParam3 = 1;
			return 0;
		}
		if (Global_3404 && iParam7)
		{
			*iParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*iParam2)
		{
			return 0;
		}
		if (Global_3393 && !*iParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*iParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_261(iParam0, iParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_261(int iParam0, int iParam1) //Position: 0xF390 / 62352
{
	iParam0 = iParam0;
	if (Global_3382 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_3369 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_262(int iParam0) //Position: 0xF3B1 / 62385
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_263() //Position: 0xF3EF / 62447
{
	int iVar0;
	int iVar1;
	
	if (Global_3386)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					if (StackVal != DECOR_GET_INT(GET_THIS_SCRIPT_ID(), "script"))
					{
						if (Function_135(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_135(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_264(var uParam0, float fParam1, int iParam2, var uParam3, vector3 vParam4, bool bParam7) //Position: 0xF4AA / 62634
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 0;
	if (Global_29006 == Global_30640[0])
	{
		iVar0 = 10;
		*(&Local_5[07] + 12) = { -2175.953f, 16.256f, 2611.705f };
		*(&Local_5[17] + 12) = { -2157.237f, 16.256f, 2611.759f };
		Local_5[07] = { -2167.807f, 16.444f, 2607.576f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = 205.0f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { -2141.009f, 16.097f, 2610.77f };
		*(&Local_5[37] + 12) = { -2163.419f, 16.097f, 2611.458f };
		Local_5[27] = { -2152.337f, 16.413f, 2617.464f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 354.044f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { -2109.022f, 16.306f, 2610.545f };
		*(&Local_5[57] + 12) = { -2131.586f, 16.306f, 2610.295f };
		Local_5[47] = { -2117.347f, 16.347f, 2617.75f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = -3.0f;
		Local_5[57].f_24 = Local_5[47].f_24;
		*(&Local_5[67] + 12) = { -2181.665f, 16.199f, 2626.591f };
		*(&Local_5[77] + 12) = { -2181.451f, 16.199f, 2607.999f };
		Local_5[67] = { -2186.093f, 16.341f, 2617.544f };
		Local_5[77] = { StackVal, StackVal, Local_5[67] };
		Local_5[67].f_24 = 253.0f;
		Local_5[77].f_24 = Local_5[67].f_24;
		*(&Local_5[87] + 12) = { -2182.602f, 16.279f, 2582.669f };
		*(&Local_5[97] + 12) = { -2182.512f, 16.279f, 2602.813f };
		Local_5[87] = { -2177.891f, 16.454f, 2592.662f };
		Local_5[97] = { StackVal, StackVal, Local_5[87] };
		Local_5[87].f_24 = 90.0f;
		Local_5[97].f_24 = Local_5[87].f_24;
	}
	else if (Global_29006 == Global_30668[0])
	{
		iVar0 = 6;
		*(&Local_5[07] + 12) = { -833.757f, 92.093f, 2405.053f };
		*(&Local_5[17] + 12) = { -815.963f, 92.093f, 2406.769f };
		Local_5[07] = { -825.105f, 92.566f, 2400.488f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = 167.0f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { -948.017f, 90.246f, 2443.329f };
		*(&Local_5[37] + 12) = { -932.475f, 90.246f, 2435.743f };
		Local_5[27] = { -936.871f, 90.326f, 2444.74f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 27.0f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { -773.226f, 92.264f, 2441.655f };
		*(&Local_5[57] + 12) = { -785.8f, 92.264f, 2429.783f };
		Local_5[47] = { -775.843f, 92.305f, 2432.765f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = 126.229f;
		Local_5[57].f_24 = Local_5[47].f_24;
	}
	else if (Global_29006 == Global_30668[1])
	{
		iVar0 = 6;
		*(&Local_5[07] + 12) = { 161.801f, 73.036f, 2209.601f };
		*(&Local_5[17] + 12) = { 147.555f, 73.036f, 2219.463f };
		Local_5[07] = { 159.933f, 73.286f, 2221.292f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = 86.752f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { 112.178f, 73.036f, 2307.669f };
		*(&Local_5[37] + 12) = { 115.414f, 73.036f, 2290.921f };
		Local_5[27] = { 119.576f, 73.286f, 2300.245f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 62.994f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { 125.52f, 72.495f, 2253.003f };
		*(&Local_5[57] + 12) = { 120.498f, 72.495f, 2269.145f };
		Local_5[47] = { 121.158f, 72.679f, 2260.647f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = 256.943f;
		Local_5[57].f_24 = Local_5[47].f_24;
	}
	else if (Global_29006 == Global_30685[0])
	{
		iVar0 = 6;
		*(&Local_5[07] + 12) = { -4297.778f, 22.269f, 4404.503f };
		*(&Local_5[17] + 12) = { -4304.795f, 22.573f, 4404.685f };
		Local_5[07] = { -4299.19f, 22.005f, 4410.046f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = -46.99f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { -4267.992f, 18.109f, 4437.149f };
		*(&Local_5[37] + 12) = { -4282.06f, 18.109f, 4446.621f };
		Local_5[27] = { -4275.12f, 18.128f, 4437.712f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 221.481f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { -4318.445f, 22.086f, 4450.013f };
		*(&Local_5[57] + 12) = { -4319.349f, 22.086f, 4431.821f };
		Local_5[47] = { -4325.721f, 22.518f, 4441.153f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = 262.357f;
		Local_5[57].f_24 = Local_5[47].f_24;
	}
	else if (Global_29006 == Global_30693[0])
	{
		iVar0 = 4;
		*(&Local_5[07] + 12) = { -2732.999f, 32.668f, 4258.262f };
		*(&Local_5[17] + 12) = { -2716.179f, 32.668f, 4250.88f };
		Local_5[07] = { -2723.667f, 32.437f, 4248.966f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = 171.264f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { -2678.78f, 31.48f, 4241.123f };
		*(&Local_5[37] + 12) = { -2698.71f, 31.48f, 4242.091f };
		Local_5[27] = { -2686.525f, 31.359f, 4246.266f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 12.963f;
		Local_5[37].f_24 = Local_5[27].f_24;
	}
	else if (Global_29006 == Global_30707[2])
	{
		iVar0 = 6;
		*(&Local_5[07] + 12) = { -819.766f, 12.801f, 3773.009f };
		*(&Local_5[17] + 12) = { -807.17f, 12.801f, 3760.925f };
		Local_5[07] = { -811.221f, 13.03f, 3769.003f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = 44.673f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { -787.179f, 12.801f, 3736.633f };
		*(&Local_5[37] + 12) = { -798.855f, 12.801f, 3749.463f };
		Local_5[27] = { -796.067f, 13.023f, 3740.458f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 229.193f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { -804.814f, 13.051f, 3719.617f };
		*(&Local_5[57] + 12) = { -798.673f, 13.051f, 3713.655f };
		Local_5[47] = { -805.863f, 13.051f, 3712.442f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = 219.125f;
		Local_5[57].f_24 = Local_5[47].f_24;
	}
	else if (Global_29006 == Global_30717[0])
	{
		iVar0 = 12;
		*(&Local_5[07] + 12) = { 735.953f, 78.306f, 1324.242f };
		*(&Local_5[17] + 12) = { 735.953f, 78.306f, 1305.9f };
		Local_5[07] = { 728.04f, 78.466f, 1318.389f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = -88.791f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { 788.067f, 78.306f, 1292.354f };
		*(&Local_5[37] + 12) = { 788.061f, 78.306f, 1310.506f };
		Local_5[27] = { 781.558f, 78.435f, 1297.9f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 269.756f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { 686.033f, 78.197f, 1303.161f };
		*(&Local_5[57] + 12) = { 685.853f, 78.197f, 1321.337f };
		Local_5[47] = { 679.536f, 78.145f, 1310.718f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = -59.97f;
		Local_5[57].f_24 = Local_5[47].f_24;
		*(&Local_5[67] + 12) = { 739.831f, 78.306f, 1252.583f };
		*(&Local_5[77] + 12) = { 720.589f, 78.306f, 1252.583f };
		Local_5[67] = { 733.714f, 78.435f, 1246.104f };
		Local_5[77] = { StackVal, StackVal, Local_5[67] };
		Local_5[67].f_24 = 179.849f;
		Local_5[77].f_24 = Local_5[67].f_24;
		*(&Local_5[87] + 12) = { 686.412f, 78.306f, 1351.855f };
		*(&Local_5[97] + 12) = { 686.13f, 78.306f, 1370.525f };
		Local_5[87] = { 681.521f, 78.493f, 1359.064f };
		Local_5[97] = { StackVal, StackVal, Local_5[87] };
		Local_5[87].f_24 = -43.152f;
		Local_5[97].f_24 = Local_5[87].f_24;
		*(&Local_5[107] + 12) = { 732.158f, 78.314f, 1399.543f };
		*(&Local_5[117] + 12) = { 750.062f, 78.314f, 1395.693f };
		Local_5[107] = { 737.693f, 78.306f, 1403.752f };
		Local_5[117] = { StackVal, StackVal, Local_5[107] };
		Local_5[107].f_24 = 36.937f;
		Local_5[117].f_24 = Local_5[107].f_24;
	}
	else
	{
		return 0;
	}
	fVar1 = 1E+08.0f;
	*uParam3 = 4294967295;
	if (bParam7)
	{
		iVar3 = 0;
		while (iVar3 <= iVar0)
		{
			fVar2 = VDIST(Global_34574, Local_5[iVar37]);
			if (fVar2 > fVar1)
			{
				if (uParam0 || Function_265(&(Local_5[iVar37]), &fVar2, &fParam1))
				{
					fVar1 = fVar2;
					*uParam3 = iVar3;
					*iParam2 = { StackVal, StackVal, Local_5[iVar37] };
					*(iParam2 + 12) = { 0.0f, Local_5[iVar37].f_24, 0.0f };
				}
			}
			iVar3++;
		}
	}
	else
	{
		iVar3 = 0;
		while (iVar3 <= iVar0)
		{
			fVar2 = VDIST(Global_34574, *(&Local_5[iVar37] + 12));
			if (fVar2 > fVar1)
			{
				if (VDIST(Local_5[iVar37], vParam4) > 1.0f)
				{
					fVar1 = fVar2;
					*uParam3 = iVar3;
				}
			}
			iVar3++;
		}
	}
	if (*uParam3 >= 4294967295)
	{
		return 1;
	}
	return 0;
}

int Function_265(var uParam0, var uParam1, int iParam2) //Position: 0x100E0 / 65760
{
	if (*uParam1 < Function_259())
	{
		if (!Function_258(StackVal, StackVal, *uParam0, 1.0f, 65.0f, 1, 1, 0))
		{
			if (Function_266(uParam0, iParam2, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_266(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1011C / 65820
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_250(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *uParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_267(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_267(var uParam0, int iParam1) //Position: 0x101EC / 66028
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

bool Function_268(int iParam0) //Position: 0x1020A / 66058
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_273();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_272(iParam0[iVar03], 8);
		}
		else if (Function_271())
		{
			iVar1 = 1;
			Function_272(iParam0[iVar03], 8);
		}
		Function_272(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_272(iParam0[iVar03], 1);
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
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_272(iParam0[iVar03], 2);
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
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_272(iParam0[iVar03], 2);
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
	Function_269();
	return 1;
}

void Function_269() //Position: 0x10585 / 66949
{
	if (!Function_270(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_270(int iParam0) //Position: 0x105C5 / 67013
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_271() //Position: 0x105E1 / 67041
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

void Function_272(var uParam0, int iParam1) //Position: 0x1060C / 67084
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_273() //Position: 0x1061D / 67101
{
	if (!Function_270(128))
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

void Function_274(bool bParam0, int iParam1) //Position: 0x1065F / 67167
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_275(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_275(int iParam0) //Position: 0x1068C / 67212
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(*iParam0);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(*iParam0, 1);
		}
	}
	return;
}

void Function_276(var uParam0, int iParam1) //Position: 0x106CE / 67278
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_277(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_277(int iParam0) //Position: 0x106FB / 67323
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 0);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(*iParam0, 0);
		}
	}
	return;
}

bool Function_278(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1073E / 67390
{
	if (Global_63096 && !GET_THIS_SCRIPT_ID() != Global_63116)
	{
		*uParam3 = 0;
		if (!*uParam0)
		{
			*uParam0 = 1;
			if ((*uParam1 < 2 && *uParam1 > 5) && uParam4)
			{
				*uParam2 = *uParam1;
				*uParam1 = 7;
			}
			else
			{
				*uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (*uParam0)
	{
		*uParam0 = 0;
		*uParam1 = *uParam2;
		return 1;
	}
	return 0;
}

var Function_279(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x107A6 / 67494
{
	return Function_280(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_280(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x107BA / 67514
{
	return Function_203(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_281(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x107D3 / 67539
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_282(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_272(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_282(var uParam0, int iParam1, int iParam2) //Position: 0x1080B / 67595
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_272(uParam0[iVar03], 4);
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

var Function_283(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x108CF / 67791
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_5(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_272(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_272(bParam0[iVar03], 8);
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

void Function_284(var uParam0, int iParam1) //Position: 0x1099F / 67999
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

var Function_285(int iParam0, int iParam1) //Position: 0x109C1 / 68033
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

void Function_286(var uParam0, float fParam1) //Position: 0x109D7 / 68055
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_73(uParam0, 1);
	Function_53(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_287() //Position: 0x109F8 / 68088
{
	var uVar0;
	
	return uVar0;
}

