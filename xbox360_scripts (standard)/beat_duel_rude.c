//Decompiled with MagicRDR v1.0
//Function Count : 280
//Statics Count : 516
//Natives Count : 397
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
	struct<65> Local_195 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_260 = 0;
	var uLocal_261 = 6;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270[4] = { 0, 0, 0, 0 };
	var uLocal_275 = 4;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	bool bLocal_283 = false;
	int iLocal_284 = 0;
	var uLocal_285 = 0;
	bool bLocal_286 = false;
	float fLocal_287 = 0.0f;
	bool bLocal_288 = false;
	char* cLocal_289[16] = "";
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	bool bLocal_296 = false;
	bool bLocal_297 = false;
	bool bLocal_298 = false;
	bool bLocal_299 = false;
	bool bLocal_300 = false;
	bool bLocal_301 = false;
	int iLocal_302 = 0;
	bool bLocal_303 = false;
	bool bLocal_304 = false;
	bool bLocal_305 = false;
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
	var uLocal_320 = 3;
	var uLocal_321 = 0;
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
	var uLocal_334 = 3;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 3;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 3;
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
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 3;
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
	var uLocal_375 = 3;
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
	var uLocal_390 = 3;
	var uLocal_391 = 0;
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
	var uLocal_403 = 3;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 3;
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
	bool bLocal_463 = false;
	bool bLocal_464 = false;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3[1];
	int iVar5[1];
	bool bVar7;
	bool bVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	bool bVar60;
	int iVar61;
	int iVar62;
	float fVar63;
	int iVar64;
	var uVar65;
	int iVar66;
	bool bVar67;
	
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
	iLocal_269 = 1;
	iLocal_284 = 0;
	strcpy(&cLocal_289, "thief", 16);
	iLocal_293 = 0;
	iLocal_294 = 0;
	iLocal_295 = 0;
	bLocal_296 = false;
	bLocal_297 = false;
	bLocal_298 = false;
	bLocal_299 = false;
	bLocal_300 = true;
	bLocal_303 = false;
	bLocal_304 = false;
	bLocal_305 = false;
	bLocal_464 = false;
	iVar0 = 0;
	bVar1 = CREATE_LAYOUT(Function_279());
	bVar7 = 16;
	Function_278(&uLocal_280, 0.0f);
	bVar56 = false;
	iVar57 = 0;
	iVar58 = 0;
	iVar59 = 0;
	iVar62 = 0;
	fVar63 = 0.0f;
	if (!IS_POPSET_VALID(Global_30750[0]))
	{
		iVar0 = 5;
	}
	else
	{
		Function_276(&bVar7, "Dueling/duel_Easy_A_npc", 8, 0);
		Function_276(&bVar7, "Dueling/duel_Easy_B_npc", 8, 0);
		Function_276(&bVar7, "spit_to_duel", 5, 0);
		Function_276(&bVar7, "custom/spit_to_duel", 8, 0);
		Function_276(&bVar7, "stand_ambient", 5, 0);
		Function_276(&bVar7, "custom/stand_ambient", 8, 0);
		Function_276(&bVar7, "stand_guntricks_e_any", 1, 0);
		Function_276(&bVar7, "ready2_duel_challenger", 5, 0);
		Function_276(&bVar7, "custom/ready2_duel_challenger", 8, 0);
		iVar64 = Function_275(10, 4);
		switch (Global_29004)
		{
			case 0x00000000:
				if (iVar64 == 0)
				{
					iVar5[0] = 140;
				}
				else if (iVar64 == 1)
				{
					iVar5[0] = 141;
				}
				else if (iVar64 == 2)
				{
					iVar5[0] = 139;
				}
				else
				{
					iVar5[0] = 142;
				}
				break;
			
			case 0x00000001:
				if (iVar64 == 0)
				{
					iVar5[0] = 281;
				}
				else if (iVar64 == 1)
				{
					iVar5[0] = 278;
				}
				else if (iVar64 == 2)
				{
					iVar5[0] = 281;
				}
				else
				{
					iVar5[0] = 278;
				}
				break;
			
			case 0x00000002:
				if (iVar64 == 0)
				{
					iVar5[0] = 140;
				}
				else if (iVar64 == 1)
				{
					iVar5[0] = 141;
				}
				else if (iVar64 == 2)
				{
					iVar5[0] = 139;
				}
				else
				{
					iVar5[0] = 142;
				}
				break;
		}
		Function_274(&bVar7, iVar5[0], 3, 0);
		Function_273(&iVar5, 1);
		iVar61 = 0;
		while (iVar61 <= 4)
		{
			uLocal_270[iVar61] = Function_271(Global_30750[0], 1, 0, 1);
			if (uLocal_270[iVar61] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_274(&bVar7, uLocal_270[iVar61], 3, 0);
			}
			iVar61++;
		}
		if (iVar0 != 5)
		{
			Function_273(&uLocal_270, 4);
		}
		if (Global_3382 == 1)
		{
			iVar0 = 5;
		}
	}
	iVar66 = 0;
	bVar67 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar60 = 600;
		if (Function_270(&bVar67, &iVar0, &iVar66, &bVar60, bVar56))
		{
			if (bVar67)
			{
				Function_268(&bVar3, 4294967295);
			}
			else
			{
				if (iVar62 >= 3)
				{
					iVar0 = 6;
				}
				Function_266(&bVar3, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_260(&bVar7))
				{
					iVar0 = 1;
					bVar60 = false;
				}
				break;
			
			case 0x00000001:
				if (Function_256(ScriptParam_0.f_32, ScriptParam_0.f_52, &Local_226, &uLocal_268, 0.0f, 0.0f, 0.0f, 1))
				{
					*(&ScriptParam_0 + 8) = { StackVal, StackVal, Local_226 };
					*(&ScriptParam_0 + 20) = { StackVal, StackVal, *(&Local_226 + 12) };
					iVar0 = 2;
					bVar60 = false;
				}
				else
				{
					iVar0 = 5;
					bVar60 = false;
				}
				break;
			
			case 0x00000002:
				if (!Function_252(ScriptParam_0.f_56, 0, &iVar57, &bLocal_303, 0, 1, 1, 1))
				{
					iVar0 = 5;
					bVar60 = false;
					break;
				}
				if ((StackVal || Function_250(StackVal, VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_251(), *(&ScriptParam_0 + 8), 1.0f, 65.0f, 1, 1, 0)) && !ScriptParam_0.f_32)
				{
					PRINTVECTOR(*(&ScriptParam_0 + 8));
					PRINTNL();
					PRINTVECTOR(Global_34574);
					PRINTNL();
					iVar0 = 5;
					bVar60 = false;
					break;
				}
				bLocal_301 = CREATE_GRINGO_IN_LAYOUT(StackVal, bVar1, Function_279(), "stand_guntricks_e_any", *(&ScriptParam_0 + 8), 0.0f, 0.0f);
				memcpy(&cLocal_289, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_248("duel"), 4);
				bVar3[0] = CREATE_ACTOR_IN_LAYOUT(bVar1, &cLocal_289, iVar5[0], *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
				DECOR_SET_BOOL(bVar3[0], "nnostickup", true);
				DECOR_SET_STRING(bVar3[0], "TAUNT_AUDIO", "DUEL");
				TASK_USE_GRINGO(bVar3[0], GET_GRINGO_FROM_OBJECT(bLocal_301), "UseCase1", 4294967295, 1);
				SNAP_ACTOR_TO_GRINGO(bVar3[0], bLocal_301, "UseCase1", false, 0, 0);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar3[0], 0);
				ACTOR_ENABLE_VARIABLE_MESH(bVar3[0], 5, true);
				ACTOR_FORCE_WEAPON_RENDER(bVar3[0], 1, 1);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar3[0], false);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar3[0], 0);
				UNK_0x99AFD2D1(bVar3[0], 1, 1);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar3[0]);
				GIVE_WEAPON_TO_ACTOR(bVar3[0], 4, false, 1, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3[0], Global_34573, -1.0f, 0);
				iVar0 = 3;
				bVar60 = false;
				if (!Function_245(ScriptParam_0.f_56, 0.0f, 1, 0, ScriptParam_0.f_32))
				{
					iVar0 = 5;
					bVar60 = false;
					break;
				}
				bVar2 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_279(), 3, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, 20.0f, ScriptParam_0.f_52);
				DECOR_SET_INT(bVar2, "script", GET_THIS_SCRIPT_ID());
				Function_240(&bVar2, ScriptParam_0.f_32);
				break;
			
			case 0x00000003:
				if (!Function_252(ScriptParam_0.f_56, bVar3[0], &iVar57, &bLocal_303, bLocal_296, 1, 1, 1))
				{
					if (bLocal_296 == 1)
					{
						Function_237("duelHelp05", bLocal_296, 1);
						if (IS_OBJECT_VALID(bLocal_283))
						{
							Function_236(bLocal_283);
						}
					}
					iVar0 = 5;
					bVar60 = false;
					break;
				}
				if (IS_ACTOR_VALID(bVar3[0]))
				{
					if (Function_235(Global_34573, bVar3[0]) < Function_233(1))
					{
						if (bLocal_296 == 1)
						{
							Function_237("duelHelp05", bLocal_296, 1);
							if (IS_OBJECT_VALID(bLocal_283))
							{
								Function_236(bLocal_283);
							}
						}
						iVar0 = 5;
						bVar60 = false;
						break;
					}
					else if (Function_230(bVar3[0], &iLocal_302, &fVar63, uVar65, 0, 0x40400000) && !iLocal_294)
					{
						if (IS_OBJECT_VALID(bLocal_283))
						{
							Function_236(bLocal_283);
						}
						switch (iLocal_302)
						{
							case 0x00000001:
								Function_237("duelHelp03", bLocal_296, 1);
								bLocal_303 = true;
								break;
							
							case 0x00000002:
								Function_237("duelHelp04", bLocal_296, 1);
								bLocal_304 = true;
								break;
							
							case 0x00000010:
								Function_237("duelHelp04", bLocal_296, 1);
								if (bLocal_296 || iVar62 < 4)
								{
									bLocal_304 = true;
								}
								else
								{
									bLocal_303 = true;
								}
								break;
							
							case 0x00000004:
								Function_237("duelHelp10", bLocal_296, 1);
								bLocal_304 = true;
								break;
							
							case 0x00000008:
								if (GET_LAST_HIT_FLAGS(bVar3[0]) != 1)
								{
									Function_229(bVar3[0]);
								}
								if (bLocal_296)
								{
									Function_226(4294967196, 1, 0);
								}
								Function_237("duelHelp02", bLocal_296, 1);
								bLocal_303 = true;
								break;
						}
						iVar0 = 5;
						bVar60 = false;
						break;
					}
				}
				if (Function_224(bVar3[0], 0))
				{
					if (Function_235(Global_34573, bVar3[0]) < Function_233(1))
					{
						if (bLocal_296 == 1)
						{
							Function_223("duelHelp05", 0x41200000, 1, 0, 2, 1, 0);
							if (IS_OBJECT_VALID(bLocal_283))
							{
								Function_236(bLocal_283);
							}
						}
						iVar0 = 5;
						break;
					}
				}
				else if (!iLocal_294)
				{
					if (GET_LAST_ATTACKER(bVar3[0]) == Global_34573)
					{
						Function_226(4294967196, 1, 0);
					}
					iVar0 = 5;
				}
				if (IS_ACTOR_VALID(bVar3[0]) && !iLocal_294)
				{
					if (GET_LAST_ATTACKER(bVar3[0]) == Global_34573)
					{
						Function_226(4294967196, 1, 0);
						iVar0 = 5;
						Function_223("duelHelp02", 0x41200000, 1, 0, 2, 1, 0);
						if (IS_OBJECT_VALID(bLocal_283))
						{
							Function_236(bLocal_283);
						}
					}
				}
				if (Function_103(&iVar62, &bVar3, bVar1, &iVar57, &bVar60, ScriptParam_0.f_32))
				{
					iVar0 = 5;
					bVar60 = false;
				}
				if (iVar62 >= 0)
				{
					Function_102();
					Function_90(StackVal, StackVal, Function_102(), &bVar56, ScriptParam_0.f_56, bVar3[0], 100, 0x42a00000, 1);
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar60 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar60 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar60);
		}
	}
	if (bLocal_297)
	{
		Function_25(&uLocal_306);
	}
	Function_266(&bVar3, 4294967295);
	if (bLocal_464)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_224))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_224);
	}
	if (IS_VOLUME_VALID(bLocal_225))
	{
		DESTROY_VOLUME(bLocal_225);
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (bLocal_299)
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(bLocal_288))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_288);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(bLocal_288))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_288);
		}
		Function_24();
	}
	if (iLocal_293 && !bLocal_298)
	{
		Function_10(453, 1, 0, 0);
	}
	if (!bVar56)
	{
		if (Function_224(bVar3[0], 0))
		{
			TASK_WANDER(bVar3[0], -1.0f);
			TASK_PRIORITY_SET(bVar3[0], 2);
		}
		if (IS_OBJECT_VALID(bVar1))
		{
			UNK_0xA936E73B(bVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar1, 1);
		}
		Function_245(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (Function_224(bVar3[0], 0))
	{
		if (DECOR_CHECK_EXIST(bVar3[0], "nnostickup"))
		{
			DECOR_REMOVE(bVar3[0], "nnostickup");
		}
		AI_GOAL_LOOK_CLEAR(bVar3[0]);
		if (IS_MOVER_FROZEN(bVar3[0]))
		{
			SET_MOVER_FROZEN(bVar3[0], false);
		}
		Function_9(bVar3[0]);
		Function_8(bVar3[0], 4294967196);
		RESET_ANIM_SET_FOR_ACTOR(bVar3[0], 1);
		if (bLocal_303)
		{
			TASK_FLEE_ACTOR(bVar3[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
		}
		else if (bLocal_304)
		{
			Function_7(bVar3[0], &Global_34573);
		}
		else if (bLocal_305)
		{
			TASK_TAUNT_ACTOR_IN_PLACE(bVar3[0], Global_34573, 11.0f);
		}
		else
		{
			TASK_WANDER(bVar3[0], -1.0f);
		}
		Function_6(bVar3[0]);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar3[0], 1);
		UNK_0x99AFD2D1(bVar3[0], 0, 0);
	}
	if (IS_BLIP_VALID(bLocal_286))
	{
		REMOVE_BLIP(bLocal_286);
	}
	if (IS_OBJECT_VALID(bLocal_283))
	{
		Function_236(bLocal_283);
	}
	Function_2(&bVar7);
	Function_1(&iVar5, 1);
	Function_1(&uLocal_270, 4);
	RELEASE_LAYOUT_REF(bVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xA91 / 2705
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

void Function_2(int iParam0) //Position: 0xAB3 / 2739
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

void Function_3(var uParam0, int iParam1) //Position: 0xAD9 / 2777
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

void Function_4(var uParam0, int iParam1) //Position: 0xC07 / 3079
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0xC21 / 3105
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(bool bParam0) //Position: 0xC3E / 3134
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

int Function_7(bool bParam0, int iParam1) //Position: 0xC8A / 3210
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, false);
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
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, true);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, true);
	return 1;
}

void Function_8(bool bParam0, bool bParam1) //Position: 0xD6F / 3439
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_9(bool bParam0) //Position: 0xD8F / 3471
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

int Function_10(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xDC1 / 3521
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
	Function_23(iParam0, TO_FLOAT(bParam1), 1);
	Function_22(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_11(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xFE1 / 4065
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_21(390))), 32);
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
					bVar19 = (Function_20(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_20(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_18(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_15(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_12(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_279(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_12(int iParam0) //Position: 0x160E / 5646
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_13(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x161F / 5663
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_14(char* cParam0, char* cParam1) //Position: 0x1714 / 5908
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_15(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x172D / 5933
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_17(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_16(Function_17(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_16(int iParam0, int iParam1) //Position: 0x1792 / 6034
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_17(int iParam0, bool bParam1) //Position: 0x17A4 / 6052
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_18(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x17B6 / 6070
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
	if (((Function_19(iParam0) != 19 || Function_19(iParam0) != 17) || Function_19(iParam0) != 10) || Function_19(iParam0) != 9)
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

int Function_19(int iParam0) //Position: 0x18E6 / 6374
{
	return Global_35278[iParam020].f_48;
}

float Function_20(int iParam0) //Position: 0x18F5 / 6389
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_21(int iParam0) //Position: 0x192E / 6446
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_22(int iParam0) //Position: 0x196B / 6507
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

int Function_23(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B05 / 6917
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

void Function_24() //Position: 0x1D1F / 7455
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ACTORSET_VALID(bLocal_222))
	{
		iVar0 = GET_OBJECTSET_SIZE(bLocal_222);
		bVar1 = false;
		while (bVar1 <= iVar0)
		{
			bVar2 = GET_ACTOR_FROM_ACTORSET(bLocal_222, bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar2, 1);
			}
			bVar1++;
		}
		DESTROY_ACTORSET(bLocal_222);
	}
	return;
}

void Function_25(int iParam0) //Position: 0x1D64 / 7524
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
		if (Function_89(iParam0->f_584, 32768))
		{
			Function_88(256);
		}
	}
	Function_87();
	Function_85(1);
	if (Function_89(iParam0->f_584, 32))
	{
		if (Function_83(iParam0->f_624))
		{
			switch (iParam0->f_620)
			{
				case 0x00000002:
					Function_43(iParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_40(iParam0->f_624);
					break;
				
				default:
					Function_32(iParam0->f_624);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_26(iParam0, 0);
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
	if (Function_89(iParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_89(iParam0->f_584, 16))
	{
		Global_3382 = 0;
	}
	return;
}

void Function_26(int iParam0, bool bParam1) //Position: 0x1EC1 / 7873
{
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_31(iParam0->f_568);
		Function_29(iParam0 + 568, 1, 0);
		if (bParam1 == 1)
		{
			Function_28(iParam0->f_568);
			Function_31(iParam0->f_568);
			Function_27(iParam0->f_568, Global_34573, -1.0f, -1.0f, 0, 1);
		}
		Function_29(iParam0 + 568, 0, 0);
		SQUAD_MAKE_EMPTY(iParam0->f_568);
		DESTROY_OBJECT(iParam0->f_568);
	}
	return;
}

void Function_27(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x1F26 / 7974
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
			TASK_PRIORITY_SET(bVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_28(bool bParam0) //Position: 0x1F94 / 8084
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

void Function_29(var uParam0, bool bParam1, bool bParam2) //Position: 0x1FC9 / 8137
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

bool Function_30(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2045 / 8261
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_31(bool bParam0) //Position: 0x205F / 8287
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

void Function_32(bool bParam0) //Position: 0x2091 / 8337
{
	int iVar0;
	
	if (!Function_83(bParam0))
	{
		Function_38();
		return;
	}
	iVar0 = Function_37(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_33("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_33(char* cParam0, bool bParam1) //Position: 0x20E4 / 8420
{
	struct<4> Var0;
	
	if (!Function_83(bParam1))
	{
		return;
	}
	switch (Function_37(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_34(Function_35(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_37(bParam1), Function_35(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_37(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_37(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_37(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_37(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_37(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_34(int iParam0) //Position: 0x2208 / 8712
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_35(bool bParam0) //Position: 0x222D / 8749
{
	if (!Function_36(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_36(int iParam0) //Position: 0x224D / 8781
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_37(bool bParam0) //Position: 0x2264 / 8804
{
	if (!Function_36(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_38() //Position: 0x227F / 8831
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
			Function_39(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_39(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x24C6 / 9414
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_40(bool bParam0) //Position: 0x24EF / 9455
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_83(bParam0))
	{
		return;
	}
	iVar0 = Function_37(bParam0);
	if (StackVal == 2)
	{
		Function_33("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_41(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_41(int iParam0) //Position: 0x2595 / 9621
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_42(char* cParam0) //Position: 0x25BF / 9663
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

void Function_43(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2815 / 10261
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_83(bParam0))
	{
		Function_38();
		return;
	}
	iVar0 = Function_37(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_35(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_41(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_77();
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
		Function_33("DEED_COMPLETE", bParam0);
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
			Function_72(bParam0);
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
						switch (Function_35(bParam0))
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
			Function_47(1);
			Function_45(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_44(bParam0, &Var14);
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

void Function_44(int iParam0, int iParam1) //Position: 0x2A27 / 10791
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_45(bool bParam0, int iParam1) //Position: 0x2A61 / 10849
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_46())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_46() //Position: 0x2AA3 / 10915
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_47(bool bParam0) //Position: 0x2AAC / 10924
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_65();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_49();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_48(&Global_63095, 1);
		Function_48(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_48(int iParam0, int iParam1) //Position: 0x2AFD / 11005
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_49() //Position: 0x2B10 / 11024
{
	Function_63();
	Function_62();
	Function_62();
	Function_61();
	Function_61();
	Function_60();
	Function_60();
	Function_57();
	Function_57();
	if (!Function_46())
	{
		Function_54();
		Function_53();
		Function_52();
		Function_51();
	}
	Function_50();
	return;
}

void Function_50() //Position: 0x2B43 / 11075
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

void Function_51() //Position: 0x2C49 / 11337
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

void Function_52() //Position: 0x2C7C / 11388
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

void Function_53() //Position: 0x2E0A / 11786
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

void Function_54() //Position: 0x2FBE / 12222
{
	Function_55(&Global_28260, 1, 0);
	return;
}

void Function_55(int iParam0, bool bParam1, var uParam2) //Position: 0x2FCC / 12236
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
	
	bVar0 = Function_56();
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

var Function_56() //Position: 0x31BD / 12733
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_57() //Position: 0x31D2 / 12754
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
				iVar2 = ((Function_59((50 + iVar4)) + Function_59((183 + iVar4))) + Function_59((90 + iVar4)));
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
	Function_58(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_58(int iParam0, bool bParam1, bool bParam2) //Position: 0x326D / 12909
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
		Function_23(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_22(iParam0);
	if (bParam2)
	{
		Function_11(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_59(bool bParam0) //Position: 0x3508 / 13576
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_60() //Position: 0x3549 / 13641
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
		iVar2 = ((Function_59((50 + iVar3) + 15) + Function_59((183 + iVar3) + 15)) + Function_59((90 + iVar3) + 15));
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
	Function_58(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_61() //Position: 0x35D2 / 13778
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
			iVar2 = ((Function_59((50 + iVar3) + 8) + Function_59((183 + iVar3) + 8)) + Function_59((90 + iVar3) + 8));
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
	Function_58(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_62() //Position: 0x3669 / 13929
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
		iVar2 = ((Function_59((50 + iVar3)) + Function_59((183 + iVar3))) + Function_59((90 + iVar3)));
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
	Function_58(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_63() //Position: 0x36E8 / 14056
{
	Function_64(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_58(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_64(int iParam0, bool bParam1, int iParam2) //Position: 0x370E / 14094
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
	Function_23(iParam0, bParam1, 1);
	Function_22(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_11(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_65() //Position: 0x3918 / 14616
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_67(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_67(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_66(StackVal, StackVal, vVar0))
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

bool Function_66(vector3 vParam0) //Position: 0x39B9 / 14777
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_67(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x39D1 / 14801
{
	int iVar0;
	
	iVar0 = Function_70(uParam2, fParam3);
	if (Function_69(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_68(&Global_63095, 1);
			Function_48(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_68(&Global_63095, 2);
			Function_48(&Global_63095, 1);
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
		Function_68(&Global_63095, 2);
		Function_48(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_102();
	return StackVal, StackVal, Function_102();
}

void Function_68(var uParam0, int iParam1) //Position: 0x3AB8 / 15032
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_69(int iParam0) //Position: 0x3AC7 / 15047
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_70(bool bParam0, bool bParam1) //Position: 0x3ADD / 15069
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
				fVar2 = Function_71(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_71(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_69(bVar0) && !bParam1)
	{
		bVar0 = Function_70(bParam0, 1);
	}
	return bVar0;
}

float Function_71(vector3 vParam0, vector3 vParam3) //Position: 0x3BA4 / 15268
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_72(bool bParam0) //Position: 0x3BC1 / 15297
{
	int iVar0;
	int iVar1;
	
	if (!Function_36(bParam0))
	{
		return;
	}
	switch (Function_37(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_35(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_10(12, 1, 0, 0);
				Function_76(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_10(13, 1, 0, 0);
				Function_76(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_10(14, 1, 0, 0);
				Function_76(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_10(15, 1, 0, 0);
				Function_76(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_10(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_35(bParam0))
			{
				case 0x00000000:
					if (Function_75(bParam0) == 1)
					{
						iVar0 = Function_74(bParam0);
						if (Function_73(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_76(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_76(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_76(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_76(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_76(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_76(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_76(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_76(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_76(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_76(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_76(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_76(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_76(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_76(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_76(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_76(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_76(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_76(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_76(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_76(4, 19);
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
								Function_10(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_10(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_10(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_74(bParam0) == 0)
			{
				if (Function_75(bParam0) == 1)
				{
					Function_10(458, 1, 0, 0);
					iVar0 = Function_35(bParam0);
					if (Function_73(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_76(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_76(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_76(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_76(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_76(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_76(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_76(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_76(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_75(bParam0) == 1)
			{
				Function_10(400, 1, 0, 0);
			}
			switch (Function_35(bParam0))
			{
				case 0x00000001:
					Function_10(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_76(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_76(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_76(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_10(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_76(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_76(6, 9);
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

bool Function_73(int iParam0) //Position: 0x409E / 16542
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_74(bool bParam0) //Position: 0x40B4 / 16564
{
	if (!Function_36(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_75(bool bParam0) //Position: 0x40D3 / 16595
{
	if (!Function_36(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_76(int iParam0, bool bParam1) //Position: 0x40ED / 16621
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

void Function_77() //Position: 0x4154 / 16724
{
	int iVar0;
	int iVar1;
	
	if (!Function_82(Global_6269))
	{
		return;
	}
	iVar0 = Function_59(24);
	iVar1 = Function_81(Global_6269);
	if (!Function_82(iVar0) && Function_80(iVar1) < 0)
	{
		Function_58(24, Global_6269, 0);
		Function_78(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_80(Function_81(iVar0)))
	{
		Function_58(24, Global_6269, 0);
		Function_78(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_78(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x41D4 / 16852
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
		Function_79(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_79(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4526 / 17702
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_80(int iParam0) //Position: 0x45A9 / 17833
{
	if (!Function_83(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_81(int iParam0) //Position: 0x45C3 / 17859
{
	if (!Function_82(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_82(int iParam0) //Position: 0x45DD / 17885
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_83(int iParam0) //Position: 0x45F3 / 17907
{
	if (!Function_36(iParam0))
	{
		return 0;
	}
	if (!Function_84(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_84(int iParam0) //Position: 0x4617 / 17943
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_85(int iParam0) //Position: 0x462C / 17964
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_86())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_86() //Position: 0x4668 / 18024
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

void Function_87() //Position: 0x468D / 18061
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_88(int iParam0) //Position: 0x46A1 / 18081
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

bool Function_89(bool bParam0, bool bParam1) //Position: 0x46BE / 18110
{
	return (bParam0 && bParam1) == 0;
}

void Function_90(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x46CB / 18123
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
	else if (!Function_66(StackVal, StackVal, vParam0))
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
			Function_101(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_100(0);
		}
		if (bParam8)
		{
			Function_98(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_96(iParam4);
			Global_3401 = 1;
		}
		Function_94(iParam4);
		if (Function_93(StackVal, 32768))
		{
			Function_91(1);
		}
		Global_16876[iParam46].f_12++;
		Function_10(408, 1, 0, 0);
	}
}

void Function_91(bool bParam0) //Position: 0x47D2 / 18386
{
	if (bParam0)
	{
		Function_92(0x10000000);
	}
	else
	{
		Function_88(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_92(int iParam0) //Position: 0x47F6 / 18422
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_93(var uParam0, int iParam1) //Position: 0x4809 / 18441
{
	return (uParam0 && iParam1) == 0;
}

void Function_94(int iParam0) //Position: 0x4816 / 18454
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_89(StackVal, 524288))
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
			bVar1 = Function_95(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_95(int iParam0) //Position: 0x48BA / 18618
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_96(int iParam0) //Position: 0x48D0 / 18640
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
	Function_97(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_97(var uParam0, var uParam1, int iParam2) //Position: 0x496E / 18798
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_98(int iParam0, bool bParam1) //Position: 0x4986 / 18822
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == bParam1)
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
			Function_99(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_99(int iParam0) //Position: 0x4A08 / 18952
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

void Function_100(int iParam0) //Position: 0x4A56 / 19030
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_95(900)), 0);
	return;
}

void Function_101(int iParam0) //Position: 0x4A78 / 19064
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_95(200)), 0);
	return;
}

vector3 Function_102() //Position: 0x4A99 / 19097
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_103(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x4AA2 / 19106
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	
	bVar6 = false;
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_222(uParam5))
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 20.0f, 1, 1, 0))
			{
				*uParam3 = 1;
				AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[0], Global_34573, -1.0f, 1);
				AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
				bVar7 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[0], bVar7);
				TASK_SEQUENCE_RELEASE(bVar7, 1);
				*uParam0 = 1;
				*uParam4 = 0;
			}
			break;
		
		case 0x00000001:
			*uParam4 = 0;
			if (GET_NTH_TASK_STATUS((*uParam1)[0], 0) == 0)
			{
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "stand_ambient", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "stand_ambient/one_hnd");
				Function_219();
				Function_218((*uParam1)[0], Global_34573, "duelRude_msg01", "duelRude_msg01", 5, 60, 1, 1);
				Function_278(&uLocal_280, 0.0f);
				bLocal_286 = ADD_BLIP_FOR_ACTOR((*uParam1)[0], 325, 0.0f, 3, 0);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 10.0f, 1, 1, 0) && !IS_ACTOR_PLAYING_NODE_IN_TREE((*uParam1)[0], "stand_ambient/one_hnd"))
			{
				AI_GOAL_LOOK_CLEAR((*uParam1)[0]);
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "spit_to_duel", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "spit_to_duel");
				*uParam0 = 3;
			}
			else if (Function_235(Global_34573, (*uParam1)[0]) < 50.0f || Function_214(&uLocal_280, 15.0f))
			{
				Function_212((*uParam1)[0]);
				TASK_WANDER((*uParam1)[0], 3212836864);
				Function_6((*uParam1)[0]);
				return 1;
			}
			break;
		
		case 0x00000003:
			*uParam4 = 0;
			if (!IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[0], "spit_to_duel"))
			{
				AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[0], Global_34573, -1.0f, 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "default_character_Main/AI_Taunt/TauntIdle/TauntC/TauntC");
				Function_218((*uParam1)[0], Global_34573, "duelRude_msg02", "duelRude_msg02", 5, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[0], 1);
				UNK_0x99AFD2D1((*uParam1)[0], 0, 0);
				Function_278(&uLocal_280, 0.0f);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_214(&uLocal_280, 3.0f) && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
			{
				TASK_TAUNT_ACTOR_IN_PLACE((*uParam1)[0], Global_34573, -1.0f);
				iLocal_293 = 1;
				bLocal_225 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_279(), false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f, 4.0f, 15.0f);
				bLocal_224 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("acceptDuelChallenge", bLocal_225, 25, 5, 0, false, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(bLocal_225, (*uParam1)[0], Function_279(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				Function_223("duelHelp08", 0x41200000, 1, 0, 2, 1, 0);
				Function_278(&uLocal_280, 0.0f);
				*uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_224))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_224))
				{
					Function_206(&uLocal_306, Function_207(1, 3, 2));
					Function_184(&uLocal_306, 0, 4294967295, 0.0f, 0.0f, 0.0f, 1, 1, 0);
					Function_134(&uLocal_306);
					bLocal_297 = true;
					bLocal_296 = true;
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
					Function_218(Global_34573, (*uParam1)[0], "duelRudePlayer_msg01", 0, 5, 60, 1, 1);
					Function_212((*uParam1)[0]);
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_224);
					DESTROY_VOLUME(bLocal_225);
					HUD_CLEAR_HELP();
					Function_223("duelHelp06", 0x41200000, 1, 0, 2, 1, 0);
					Function_278(&uLocal_280, 0.0f);
					*uParam0 = 6;
				}
				else if (Function_214(&uLocal_280, 30.0f))
				{
					Function_237("duelHelp05", bLocal_296, 1);
					if (Function_235((*uParam1)[0], Global_34573) > 30.0f)
					{
						bLocal_305 = true;
						Function_218((*uParam1)[0], Global_34573, "FIGHT", 0, 5, 60, 1, 1);
					}
					return 1;
				}
			}
			return 1;
			break;
		
		case 0x00000006:
			if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573) && Function_214(&uLocal_280, 3.0f))
			{
				if (!Function_256(StackVal, StackVal, uParam5, 0.0f, &Local_226, &uLocal_268, Local_226, 0))
				{
					LOG_ERROR("Failed to populate duel IDX");
					return 1;
				}
				if (!Function_132(&Local_226, uLocal_268))
				{
					LOG_ERROR("Failed to populate duel data");
					return 1;
				}
				bLocal_288 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_279(), 3, *(&Local_226 + 24), 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 20.0f);
				Function_131(bParam2, &bLocal_288, &Local_226 + 24, 20.0f);
				bLocal_299 = true;
				vVar3 = { StackVal, StackVal, *(&Local_226 + 24) };
				UNK_0x44986367(StackVal, Function_129(StackVal, StackVal, StackVal, &vVar0, *(&Local_226 + 24), *(&Local_226 + 36)));
				VNORMALIZE(&vVar0);
				VSCALE(&vVar0, (VDIST(*(&Local_226 + 24), *(&Local_226 + 36)) * 0,5f));
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, vVar3, StackVal) };
				vVar3 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, 0,2f, 0.0f) };
				fLocal_287 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_279(), false, vVar3, 0.0f, 0.0f, 0.0f, 2,5f, 2,5f, 2,5f);
				bLocal_283 = Function_128(bParam2, Function_279(), fLocal_287, Global_34573, 0, 330, 4294967295, 0, 0, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_283)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_283));
					ADD_BLIP_FOR_OBJECT(bLocal_283, 330, 0.0f, 3, 0);
				}
				AI_GOAL_LOOK_CLEAR((*uParam1)[0]);
				bVar7 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &Local_226 + 36, 1);
				TASK_FACE_COORD(0, &Local_226 + 24, 0);
				TASK_FACE_COORD(0, &Local_226 + 24, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[0], bVar7);
				TASK_SEQUENCE_RELEASE(bVar7, 1);
				TOGGLE_ACTOR_ACTION_SIGNAL_ON((*uParam1)[0], 8, "FASTWALK");
				Function_278(&uLocal_280, 0.0f);
				*uParam0 = 7;
			}
			break;
		
		case 0x00000007:
			*uParam4 = 0;
			if (GET_NTH_TASK_STATUS((*uParam1)[0], 1) != 0 && bLocal_300 != 1)
			{
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "ready2_duel_challenger", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "ready2_duel_challenger");
				_AIATTENTIONATTRACTOR(bParam2, *(&Local_226 + 36), 1045220557, 1065353216, 0, 0);
				SET_MOVER_FROZEN((*uParam1)[0], true);
				bLocal_300 = false;
				Function_278(&uLocal_280, 0.0f);
			}
			else if (bLocal_300)
			{
				Function_278(&uLocal_280, 0.0f);
			}
			if (Function_214(&uLocal_280, 30.0f))
			{
				Function_237("duelHelp05", bLocal_296, 1);
				Function_236(bLocal_283);
				if (Function_235((*uParam1)[0], Global_34573) > 30.0f)
				{
					bLocal_305 = true;
					Function_218((*uParam1)[0], Global_34573, "FIGHT", 0, 5, 60, 1, 1);
				}
				return 1;
			}
			if (GATEWAY_UPDATE(bLocal_283))
			{
				_AIATTENTIONATTRACTOR(bParam2, *(&Local_226 + 36), 1045220557, 1065353216, 0, 0);
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
				{
					if (iLocal_295)
					{
						iLocal_295 = 0;
						HUD_CLEAR_HELP();
					}
					Function_223("duelHelp01", 0x41200000, 1, 0, 2, 1, 0);
				}
				else if (!IS_ACTOR_ON_FOOT(Global_34573))
				{
					if (iLocal_295)
					{
						iLocal_295 = 0;
						HUD_CLEAR_HELP();
					}
					Function_223("duelHelp09", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					if (IS_MOVER_FROZEN((*uParam1)[0]))
					{
						SET_MOVER_FROZEN((*uParam1)[0], false);
					}
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_229((*uParam1)[0]);
					if (IS_BLIP_VALID(bLocal_286))
					{
						REMOVE_BLIP(bLocal_286);
					}
					HUD_CLEAR_HELP_QUEUE();
					DESTROY_VOLUME(bLocal_225);
					Function_236(bLocal_283);
					Function_8((*uParam1)[0], 0);
					*uParam0 = 8;
					iLocal_294 = 1;
					*uParam4 = 0;
				}
			}
			else if (Function_125(Global_34573, bLocal_283) > 7.0f)
			{
				if (iLocal_269)
				{
					Function_278(&uLocal_280, 0.0f);
					iLocal_269 = 0;
				}
				if (iLocal_295 == 0)
				{
					HUD_CLEAR_HELP();
					Function_223("duelHelp07", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_295 = 1;
				}
			}
			else if (Function_214(&uLocal_280, 6.0f) && iLocal_295 != 1)
			{
				iLocal_295 = 0;
				HUD_CLEAR_HELP();
			}
			break;
		
		case 0x00000008:
			if (Function_105(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iLocal_284, (*uParam1)[0], Global_34573, &bParam2, &Local_226 + 24, &Local_226 + 36, &bVar6, &bLocal_288, &uLocal_270, 4, uLocal_268, Local_226, &uLocal_275, &uLocal_285, 1, 2, 0))
			{
				if (bVar6)
				{
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					bLocal_303 = true;
					Function_104(10);
					bLocal_298 = true;
					return 1;
				}
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_104(int iParam0) //Position: 0x53C3 / 21443
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_10(409, 1, 0, 0);
	}
	return;
}

bool Function_105(var uParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10, struct<53> Param11) //Position: 0x53F4 / 21492
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	bool bVar8;
	var uVar9;
	var uVar10;
	
	switch (*uParam0)
	{
		case 0x00000000:
			if ((!HUD_IS_FADING() && !HUD_IS_FADED()) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
			}
			if (HUD_IS_FADED())
			{
				STREAMING_OVERRIDE_MAIN_POI(StackVal, StackVal, StackVal, StackVal, Function_129(StackVal, StackVal, *uParam4, 0.0f, *uParam4, *uParam5), 0.0f);
				Function_123(9);
				iLocal_221 = 1;
				Function_98(0, GET_THIS_SCRIPT_ID());
				*uParam54 = Function_114(0, 1, 0, 0, 0, 0, 1, 0);
				if (IS_ACTOR_VALID(*uParam54))
				{
					if (!DECOR_CHECK_EXIST(*uParam54, "HorseLeash"))
					{
						bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/horseHitch", &Global_34574, 50.0f, 0);
						if (IS_GRINGO_VALID(bVar0))
						{
							bVar4 = GET_ACTOR_FROM_OBJECT(Function_113(bVar0, "UseCase1"));
							if (IS_ACTOR_VALID(bVar4) && !bVar4 != *uParam54)
							{
								DESTROY_ACTOR(GET_ACTOR_FROM_OBJECT(Function_113(bVar0, "UseCase1")));
							}
							DECOR_SET_BOOL(*uParam54, "ignoreactorinduel", true);
							GRINGO_GET_USE_COMPONENT_POSITION_EXT(bVar0, "UseCase1", &vVar1);
							SET_OBJECT_POSITION(*uParam54, vVar1);
							SET_OBJECT_ORIENTATION(*uParam54, 0.0f, GRINGO_GET_USE_COMPONENT_HEADING_EXT(bVar0, "UseCase1"), 0.0f);
							SNAP_ACTOR_TO_GRINGO(*uParam54, GET_OBJECT_FROM_GRINGO(bVar0), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(*uParam54, bVar0, "UseCase1", true, 1);
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
						Function_111(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, uParam8, iLocal_223, uParam3, bParam1, Param11, uParam53);
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
			HUD_ENABLE(true);
			SET_HUD_MAP_DRAW_ENABLED(0);
			TELEPORT_ACTOR(bParam1, uParam5, 1, 1, 1);
			GIVE_WEAPON_TO_ACTOR(bParam1, 4, false, 1, 1);
			if (Function_59(451) <= 1)
			{
				Local_195.f_60 = 0;
			}
			else if (Function_59(451) <= 3)
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
			Local_195.f_52 = Function_17(150, (50 + Function_59(451) * 15));
			Local_195.f_48 = uParam57;
			Local_195 = bParam2;
			Local_195.f_4 = bParam1;
			*(&Local_195 + 8) = { StackVal, StackVal, *uParam4 };
			*(&Local_195 + 20) = { StackVal, StackVal, *uParam5 };
			vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_195 + 20), *(&Local_195 + 8), StackVal) };
			bVar8 = UNK_0x9C40E671(&vVar5);
			uVar9 = Param11.f_48;
			uVar10 = Param11.f_52;
			Local_195.f_32 = CREATE_VOLUME_IN_LAYOUT(*uParam3, "Duel_StayOut", 2, *(&Local_195 + 20), 0.0f, bVar8, 0.0f, uVar9, 10.0f, uVar10);
			Local_195.f_36 = 1;
			Local_195.f_64 = uParam10;
			bLocal_220 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling", &Local_195, 25, 0);
			if (!IS_SCRIPT_VALID(bLocal_220))
			{
				Function_108();
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
							Function_107(bParam1);
							*(&Local_195 + 20) = { StackVal, StackVal, Function_107(bParam1) };
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
							Function_106(uParam53, iLocal_223);
						}
						Function_108();
						*uParam6 = 1;
						return 1;
						break;
					
					case 0x0000138A:
						TASK_FLEE_ACTOR(bParam1, Global_34573, -1.0f, -1.0f, 0, 0, 0);
						if (IS_ACTOR_VALID(bParam1))
						{
							Function_107(bParam1);
							*(&Local_195 + 20) = { StackVal, StackVal, Function_107(bParam1) };
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
							Function_106(uParam53, iLocal_223);
						}
						Function_108();
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
						Function_108();
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
						Function_108();
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

void Function_106(var uParam0, int iParam1) //Position: 0x591C / 22812
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS((*uParam0)[iVar0], true);
		iVar0++;
	}
	return;
}

vector3 Function_107(bool bParam0) //Position: 0x593F / 22847
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_108() //Position: 0x5950 / 22864
{
	if (iLocal_221)
	{
		Function_109(9);
		iLocal_221 = 0;
	}
	return;
}

void Function_109(int iParam0) //Position: 0x5963 / 22883
{
	Function_110(&Global_28842, iParam0);
	return;
}

void Function_110(var uParam0, var uParam1) //Position: 0x5971 / 22897
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_111(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46) //Position: 0x598C / 22924
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	
	uParam3 = uParam3;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&iParam4 + 64[iVar03]), *(&iParam4 + 36), StackVal) };
		bVar4 = UNK_0x9C40E671(&vVar1);
	}
}

int Function_112(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x5A0D / 23053
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
	bVar1 = RAND_INT_RANGE(false, (iParam1 - 1));
	iVar5 = 8192 | 16384;
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar6 = ((iVar2 + bVar1) % iParam1);
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
			Function_68(&bVar9, 4);
		}
		if (iVar8 == iVar0)
		{
			Function_68(&bVar9, 8);
		}
		if (iVar8 == iVar4)
		{
			Function_68(&bVar9, 16);
		}
		if (bParam2)
		{
			bVar10 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			if (bVar10 < 0,5f || iVar7 <= 3)
			{
				Function_68(&bVar9, 64);
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

var Function_113(bool bParam0, bool bParam1) //Position: 0x5B50 / 23376
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

var Function_114(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x5B5D / 23389
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
	if (Global_3381 || Function_122(1))
	{
		Function_121(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_120())
		{
			return "";
		}
	}
	if (!Function_118())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_117(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_117(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_117(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_117(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_116(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_116(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_46() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_279(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_279(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
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
				vVar10 = { bParam2, bParam3, bParam4 };
				if (!Function_66(StackVal, StackVal, vVar10))
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
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_279(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_279(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
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
		Function_115(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_46() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_115(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5EB5 / 24245
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, bParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

var Function_116(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x5EF2 / 24306
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

vector3 Function_117(bool bParam0) //Position: 0x5F8D / 24461
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

bool Function_118() //Position: 0x5FB4 / 24500
{
	if (Function_119() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_119() //Position: 0x5FCA / 24522
{
	return Global_12976.f_152;
}

bool Function_120() //Position: 0x5FD5 / 24533
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_121(var uParam0, bool bParam1, bool bParam2) //Position: 0x5FF5 / 24565
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_68(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_68(&Global_12976 + 36 + 20, 64);
	}
	return;
}

int Function_122(int iParam0) //Position: 0x6022 / 24610
{
	int iVar0;
	
	if (!Function_82(iParam0))
	{
		return 0;
	}
	iVar0 = Function_81(iParam0);
	if (!Function_83(Function_81(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_123(int iParam0) //Position: 0x6058 / 24664
{
	Function_124(&Global_28842, iParam0);
	return;
}

void Function_124(var uParam0, int iParam1) //Position: 0x6066 / 24678
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

float Function_125(bool bParam0, bool bParam1) //Position: 0x6089 / 24713
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_127(bParam0);
			vVar0 = { StackVal, StackVal, Function_127(bParam0) };
			Function_126(bParam1);
			vVar3 = { StackVal, StackVal, Function_126(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_126(bool bParam0) //Position: 0x6129 / 24873
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

vector3 Function_127(bool bParam0) //Position: 0x6195 / 24981
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

bool Function_128(bool bParam0, bool bParam1, bool bParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x61FF / 25087
{
	bool bVar0;
	
	bVar0 = CREATE_GATEWAY_IN_LAYOUT(bParam0, bParam1, bParam2, uParam3, iParam4, iParam6, iParam7, bParam8, iParam9, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
		}
		ADD_BLIP_FOR_OBJECT(bVar0, bParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(bVar0, "volrestrict", bParam2);
		DECOR_SET_BOOL(bVar0, "voldestroy", bParam8);
	}
	return bVar0;
}

var Function_129(vector3 vParam0, vector3 vParam3) //Position: 0x627C / 25212
{
	var uVar0;
	
	Function_130(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_130(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6296 / 25238
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_131(bool bParam0, var uParam1, var uParam2, float fParam3) //Position: 0x62B9 / 25273
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_279(), bParam0, 15, 1);
	bLocal_222 = CREATE_ACTORSET_IN_LAYOUT(bParam0, "DuelExemptedFromStayout", 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_279(), false, *uParam2, 0.0f, 0.0f, 0.0f, (fParam3 * 1,5f), 20.0f, (fParam3 * 1,5f));
	iVar2 = LOCATE_ACTORS_IN_VOLUME(bVar1, bVar0, 0, 1);
	bVar3 = false;
	while (bVar3 <= iVar2)
	{
		bVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
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
				ADD_ACTORSET_MEMBER(bLocal_222, bVar4);
			}
		}
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam1);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam1);
}

bool Function_132(int iParam0, int iParam1) //Position: 0x63A8 / 25512
{
	if (iParam1 <= 0)
	{
		return Function_133(iParam0, iParam1);
	}
	if (Global_29006 == Global_30640[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -2175,953f, 16,256f, 2611,705f };
			*(iParam0 + 36) = { -2166,595f, 16,214f, 2611,732f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2160,472f, 16,902f, 2605,667f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2158,75f, 16,881f, 2605,917f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2155,889f, 16,434f, 2617,996f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2157,149f, 16,447f, 2619,214f };
			(*iParam0 + 140)[3] = 18944;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -2157,237f, 16,256f, 2611,759f };
			*(iParam0 + 36) = { -2166,595f, 16,214f, 2611,732f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2164,137f, 16,909f, 2619,3f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -2171,411f, 16,449f, 2619,825f };
			(*iParam0 + 140)[1] = 7168;
			*(iParam0 + 64[23]) = { -2173,083f, 16,449f, 2620,048f };
			(*iParam0 + 140)[2] = 12800;
			*(iParam0 + 64[33]) = { -2168,264f, 16,881f, 2605,223f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -2141,009f, 16,097f, 2610,77f };
			*(iParam0 + 36) = { -2152,214f, 16,097f, 2611,114f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2163,959f, 16,909f, 2619,74f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2165,694f, 16,909f, 2620,008f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2161,763f, 16,881f, 2605,855f };
			(*iParam0 + 140)[2] = 4352;
			*(iParam0 + 64[33]) = { -2157,148f, 16,881f, 2602,253f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -2163,419f, 16,097f, 2611,458f };
			*(iParam0 + 36) = { -2152,214f, 16,097f, 2611,114f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2146,166f, 16,399f, 2604,041f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2144,782f, 16,437f, 2604,025f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2134,941f, 16,449f, 2619,2f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2142,436f, 16,451f, 2620,109f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -2109,022f, 16,306f, 2610,545f };
			*(iParam0 + 36) = { -2120,304f, 16,097f, 2610,42f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2128,746f, 16,582f, 2618,448f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2130,542f, 16,583f, 2618,705f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2132,521f, 16,583f, 2618,72f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -2131,128f, 16,617f, 2603,082f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -2131,586f, 16,306f, 2610,295f };
			*(iParam0 + 36) = { -2120,304f, 16,097f, 2610,42f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2109,311f, 17,032f, 2602,233f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2084,119f, 16,722f, 2620,025f };
			(*iParam0 + 140)[1] = 2304;
			*(iParam0 + 64[23]) = { -2110,06f, 16,574f, 2618,706f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2112,009f, 16,574f, 2618,81f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(iParam0 + 24) = { -2181,665f, 16,199f, 2626,591f };
			*(iParam0 + 36) = { -2181,558f, 16,27f, 2617,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 70.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2187,365f, 16,947f, 2611,735f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2187,344f, 16,947f, 2610,434f };
			(*iParam0 + 140)[1] = 16896;
			*(iParam0 + 64[23]) = { -2175,141f, 16,563f, 2603,119f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2173,878f, 16,846f, 2603,615f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(iParam0 + 24) = { -2181,451f, 16,199f, 2607,999f };
			*(iParam0 + 36) = { -2181,558f, 16,27f, 2617,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2171,507f, 16,91f, 2626,342f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2171,085f, 17,419f, 2628,723f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2188,435f, 46,438f, 2629,844f };
			(*iParam0 + 140)[2] = 6400;
			*(iParam0 + 64[33]) = { -2186,93f, 16,354f, 2624,667f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(iParam0 + 24) = { -2182,602f, 16,279f, 2582,669f };
			*(iParam0 + 36) = { -2182,557f, 16,283f, 2592,741f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2175,813f, 16,892f, 2598,68f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2175,771f, 16,892f, 2599,781f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2187,98f, 16,947f, 2605,092f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2188,852f, 16,947f, 2604,008f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(iParam0 + 24) = { -2182,512f, 16,279f, 2602,813f };
			*(iParam0 + 36) = { -2182,557f, 16,283f, 2592,741f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2192,36f, 16,58f, 2590,16f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2175,242f, 16,431f, 2579,68f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { -2174,96f, 16,393f, 2581,227f };
			(*iParam0 + 140)[2] = 12800;
			*(iParam0 + 64[33]) = { -2174,707f, 16,359f, 2583,002f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
	}
	if (Global_29006 == Global_30668[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -833,757f, 92,093f, 2405,053f };
			*(iParam0 + 36) = { -824,86f, 92,111f, 2405,911f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -826,829f, 92,604f, 2399,558f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -825,39f, 92,604f, 2400,278f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -817,222f, 92,228f, 2400,68f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -815,883f, 92,122f, 2401,766f };
			(*iParam0 + 140)[3] = 12800;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -815,963f, 92,093f, 2406,769f };
			*(iParam0 + 36) = { -824,86f, 92,111f, 2405,911f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -834,486f, 92,625f, 2412,879f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -833,019f, 92,604f, 2398,71f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { -830,829f, 92,597f, 2398,705f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -827,994f, 92,604f, 2399,416f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -948,017f, 90,246f, 2443,329f };
			*(iParam0 + 36) = { -940,246f, 90,101f, 2439,536f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -944,354f, 90,362f, 2433,664f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -943,069f, 90,368f, 2432,761f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -936,299f, 90,374f, 2429,44f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -935,053f, 90,383f, 2429,297f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -932,475f, 90,246f, 2435,743f };
			*(iParam0 + 36) = { -940,246f, 90,101f, 2439,536f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -943,643f, 90,353f, 2452,65f };
			(*iParam0 + 140)[0] = 7168;
			*(iParam0 + 64[13]) = { -945,45f, 90,35f, 2452,563f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -957,561f, 90,786f, 2438,436f };
			(*iParam0 + 140)[2] = 2304;
			*(iParam0 + 64[33]) = { -953,349f, 90,786f, 2436,586f };
			(*iParam0 + 140)[3] = 20736;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -773,226f, 92,264f, 2441,655f };
			*(iParam0 + 36) = { -779,513f, 92,261f, 2435,719f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789,443f, 92,336f, 2433,929f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -788,805f, 93,291f, 2415,236f };
			(*iParam0 + 140)[1] = 4352;
			*(iParam0 + 64[23]) = { -782,939f, 93,132f, 2421,574f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -781,724f, 93,106f, 2422,239f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -785,8f, 92,264f, 2429,783f };
			*(iParam0 + 36) = { -779,513f, 92,261f, 2435,719f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789,063f, 93,199f, 2416,324f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -787,695f, 93,291f, 2416,819f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -784,003f, 92,958f, 2422,655f };
			(*iParam0 + 140)[2] = 4096;
			*(iParam0 + 64[33]) = { -788,074f, 92,302f, 2435,201f };
			(*iParam0 + 140)[3] = 4096;
			return 1;
		}
	}
	if (Global_29006 == Global_30668[1])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { 161,801f, 73,036f, 2209,601f };
			*(iParam0 + 36) = { 154,678f, 73,036f, 2214,532f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 151,093f, 73,781f, 2231,127f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 149,66f, 73,778f, 2229,832f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { 149,334f, 73,78f, 2232,961f };
			(*iParam0 + 140)[2] = 20736;
			*(iParam0 + 64[33]) = { 130,805f, 73,285f, 2225,233f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { 147,555f, 73,036f, 2219,463f };
			*(iParam0 + 36) = { 154,678f, 73,036f, 2214,532f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 132,103f, 73,286f, 2222,323f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { 163,447f, 73,758f, 2196,496f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 164,755f, 73,755f, 2196,096f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 168,478f, 73,286f, 2214,951f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { 112,178f, 73,036f, 2307,669f };
			*(iParam0 + 36) = { 113,796f, 73,036f, 2299,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 110,108f, 73,286f, 2288,538f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { 121,847f, 73,286f, 2288,113f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 121,773f, 73,286f, 2289,774f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 121,96f, 73,286f, 2291,226f };
			(*iParam0 + 140)[3] = 4608;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { 115,414f, 73,036f, 2290,921f };
			*(iParam0 + 36) = { 113,796f, 73,036f, 2299,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 117,484f, 73,286f, 2310,052f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { 105,745f, 73,286f, 2310,477f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 105,819f, 73,286f, 2308,816f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 105,632f, 73,286f, 2307,364f };
			(*iParam0 + 140)[3] = 4608;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { 125,52f, 72,495f, 2253,003f };
			*(iParam0 + 36) = { 123,009f, 73,014f, 2261,074f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 112,309f, 73,767f, 2280,208f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { 112,308f, 73,641f, 2277,641f };
			(*iParam0 + 140)[1] = 9216;
			*(iParam0 + 64[23]) = { 113,096f, 73,649f, 2273,542f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { 113,108f, 73,66f, 2271,663f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { 120,498f, 72,495f, 2269,145f };
			*(iParam0 + 36) = { 123,009f, 73,014f, 2261,074f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 112,671f, 73,644f, 2276,903f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { 117,043f, 73,643f, 2240,313f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 118,516f, 73,712f, 2240,557f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 124,33f, 76,749f, 2238,564f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30685[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -4297,778f, 22,269f, 4404,503f };
			*(iParam0 + 36) = { -4304,795f, 22,573f, 4404,685f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4306,099f, 22,155f, 4415,161f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { -4311,022f, 23,058f, 4412,995f };
			(*iParam0 + 140)[1] = 4608;
			*(iParam0 + 64[23]) = { -4311,679f, 23,058f, 4411,987f };
			(*iParam0 + 140)[2] = 13312;
			*(iParam0 + 64[33]) = { -4313,768f, 26,886f, 4406,992f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -4304,795f, 22,573f, 4404,685f };
			*(iParam0 + 36) = { -4297,778f, 22,269f, 4404,503f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4305,446f, 22,139f, 4414,692f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -4306,939f, 22,322f, 4414,795f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4309,754f, 23,058f, 4413,441f };
			(*iParam0 + 140)[2] = 6400;
			*(iParam0 + 64[33]) = { -4313,768f, 26,886f, 4406,992f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -4267,992f, 18,109f, 4437,149f };
			*(iParam0 + 36) = { -4275,026f, 18,178f, 4441,885f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4278,334f, 18,071f, 4449,653f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4279,857f, 18,071f, 4449,824f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -4281,086f, 18,071f, 4438,504f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { -4279,52f, 18,071f, 4437,386f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -4282,06f, 18,109f, 4446,621f };
			*(iParam0 + 36) = { -4275,026f, 18,178f, 4441,885f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4277,958f, 18,071f, 4437,547f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4276,217f, 18,076f, 4436,355f };
			(*iParam0 + 140)[1] = 4608;
			*(iParam0 + 64[23]) = { -4270,787f, 18,071f, 4432,743f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { -4269,763f, 18,071f, 4433,286f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -4318,445f, 22,086f, 4450,013f };
			*(iParam0 + 36) = { -4318,897f, 22,086f, 4440,917f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4330,111f, 25,409f, 4422,815f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4329,889f, 25,581f, 4421,464f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4329,611f, 25,573f, 4420,175f };
			(*iParam0 + 140)[2] = 4352;
			*(iParam0 + 64[33]) = { -4312,611f, 22,004f, 4423,452f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -4319,349f, 22,086f, 4431,821f };
			*(iParam0 + 36) = { -4318,897f, 22,086f, 4440,917f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4322,033f, 22,087f, 4455,366f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4323,083f, 22,087f, 4453,766f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4324,211f, 22,094f, 4451,612f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { -4325,245f, 22,128f, 4450,168f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
	}
	if (Global_29006 == Global_30693[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -2732,999f, 32,668f, 4258,262f };
			*(iParam0 + 36) = { -2724,731f, 32,559f, 4254,918f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2720,958f, 32,28f, 4245,056f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2719,41f, 32,28f, 4244,509f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2713,209f, 32,808f, 4256,949f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2714,787f, 32,827f, 4257,932f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -2716,179f, 32,668f, 4250,88f };
			*(iParam0 + 36) = { -2724,589f, 33,196f, 4254,571f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2725,793f, 32,826f, 4264,401f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2726,701f, 32,825f, 4265,115f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2737,822f, 32,607f, 4253,199f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2736,711f, 32,607f, 4251,915f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -2678,78f, 31,48f, 4241,123f };
			*(iParam0 + 36) = { -2688,745f, 31,42f, 4241,607f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2700,972f, 31,57f, 4254,442f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2702,482f, 32,011f, 4254,482f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2704,879f, 32,28f, 4235,066f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2704,098f, 32,176f, 4233,792f };
			(*iParam0 + 140)[3] = 20736;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -2698,71f, 31,48f, 4242,091f };
			*(iParam0 + 36) = { -2688,745f, 31,42f, 4241,607f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2679,489f, 32,5f, 4232,727f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2677,893f, 32,5f, 4233,058f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2671,652f, 31,192f, 4248,009f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2683,122f, 31,548f, 4248,685f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30707[2])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -819,766f, 12,801f, 3773,009f };
			*(iParam0 + 36) = { -813,468f, 12,801f, 3766,967f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -804,586f, 13,051f, 3742,726f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -803,14f, 13,551f, 3764,739f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { -804,056f, 13,551f, 3765,803f };
			(*iParam0 + 140)[2] = 20992;
			*(iParam0 + 64[33]) = { -805,158f, 13,551f, 3767,062f };
			(*iParam0 + 140)[3] = 512;
			return 1;
		}
		if (iParam1 != 1)
		{
			*(iParam0 + 24) = { -807,17f, 12,801f, 3760,925f };
			*(iParam0 + 36) = { -813,468f, 12,801f, 3766,967f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -809,813f, 13,551f, 3771,118f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -812,055f, 13,551f, 3773,48f };
			(*iParam0 + 140)[1] = 16896;
			*(iParam0 + 64[23]) = { -813,522f, 13,551f, 3774,942f };
			(*iParam0 + 140)[2] = 13312;
			*(iParam0 + 64[33]) = { -816,089f, 13,551f, 3777,198f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -787,179f, 12,801f, 3736,633f };
			*(iParam0 + 36) = { -793,017f, 12,801f, 3743,048f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -811,045f, 13,051f, 3750,048f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -810,352f, 13,051f, 3748,774f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -806,995f, 13,051f, 3746,105f };
			(*iParam0 + 140)[2] = 21504;
			*(iParam0 + 64[33]) = { -806,253f, 13,051f, 3744,332f };
			(*iParam0 + 140)[3] = 512;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -798,855f, 12,801f, 3749,463f };
			*(iParam0 + 36) = { -793,017f, 12,801f, 3743,048f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789,346f, 13,04f, 3730,211f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -786,917f, 13,037f, 3728,203f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -785,021f, 13,051f, 3724,668f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -782,264f, 13,036f, 3740,828f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -804,814f, 13,051f, 3719,617f };
			*(iParam0 + 36) = { -798,673f, 13,051f, 3713,655f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -800,2f, 13,12f, 3705,603f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -799,261f, 13,12f, 3704,608f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -797,36f, 13,12f, 3703,65f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -788,266f, 13,051f, 3712,833f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -798,673f, 13,051f, 3713,655f };
			*(iParam0 + 36) = { -804,814f, 13,051f, 3719,617f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -804,219f, 13,051f, 3729,436f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -805,748f, 13,051f, 3729,628f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -808,559f, 13,051f, 3730,366f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -813,656f, 13,051f, 3715,872f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30717[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { 735,953f, 78,306f, 1324,242f };
			*(iParam0 + 36) = { 735,953f, 78,306f, 1315,071f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 729,253f, 48,486f, 1309,157f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 729,192f, 78,486f, 1307,499f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 742,653f, 78,425f, 1306,141f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 743,264f, 78,425f, 1307,125f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { 735,953f, 78,306f, 1305,9f };
			*(iParam0 + 36) = { 735,953f, 78,306f, 1315,071f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 742,376f, 78,425f, 1320,613f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 741,937f, 78,425f, 1321,135f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 741,855f, 78,425f, 1322,617f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 729,187f, 78,486f, 1322,833f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { 788,067f, 78,306f, 1292,354f };
			*(iParam0 + 36) = { 788,064f, 78,306f, 1301,43f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 794,4f, 78,456f, 1312,086f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 794,491f, 78,456f, 1313,429f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 781,088f, 78,413f, 1322,206f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 780,901f, 78,413f, 1320,856f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { 788,061f, 78,306f, 1310,506f };
			*(iParam0 + 36) = { 788,064f, 78,306f, 1301,43f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 782,021f, 78,419f, 1294,476f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 779,472f, 78,42f, 1290,639f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 780,614f, 78,42f, 1289,73f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 797,764f, 78,468f, 1288,355f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { 686,033f, 78,197f, 1303,161f };
			*(iParam0 + 36) = { 685,943f, 78,195f, 1312,249f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 692,386f, 78,49f, 1319,771f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 693,316f, 78,474f, 1329,634f };
			(*iParam0 + 140)[1] = 256;
			*(iParam0 + 64[23]) = { 680,325f, 79,321f, 1325,2f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 679,214f, 79,322f, 1323,885f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { 685,853f, 78,197f, 1321,337f };
			*(iParam0 + 36) = { 685,943f, 78,195f, 1312,249f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 671,907f, 78,472f, 1293,629f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 671,832f, 78,47f, 1291,321f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 691,761f, 78,49f, 1290,059f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 691,998f, 78,49f, 1296,535f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(iParam0 + 24) = { 739,831f, 78,306f, 1252,583f };
			*(iParam0 + 36) = { 730,21f, 78,306f, 1252,583f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 723,05f, 78,471f, 1260,361f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 719,061f, 78,471f, 1260,12f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 718,014f, 78,471f, 1259,29f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 699,142f, 78,527f, 1242,135f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(iParam0 + 24) = { 720,589f, 78,306f, 1252,583f };
			*(iParam0 + 36) = { 730,21f, 78,306f, 1252,583f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 743,34f, 78,504f, 1244,251f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 755,658f, 78,422f, 1260,858f };
			(*iParam0 + 140)[1] = 512;
			*(iParam0 + 64[23]) = { 746,283f, 78,422f, 1259,612f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { 744,823f, 78,421f, 1260,437f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(iParam0 + 24) = { 686,412f, 78,306f, 1351,855f };
			*(iParam0 + 36) = { 686,271f, 78,306f, 1361,19f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 693,253f, 78,381f, 1375,135f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 691,817f, 78,373f, 1376,577f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 681,885f, 78,446f, 1380,694f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 680,597f, 78,502f, 1372,951f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(iParam0 + 24) = { 686,13f, 78,306f, 1370,525f };
			*(iParam0 + 36) = { 686,271f, 78,306f, 1361,19f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 679,044f, 78,306f, 1346,869f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 678,93f, 79,291f, 1340,874f };
			(*iParam0 + 140)[1] = 4352;
			*(iParam0 + 64[23]) = { 692,642f, 78,485f, 1345,834f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 693,52f, 78,485f, 1347,342f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 10)
		{
			*(iParam0 + 24) = { 732,158f, 78,314f, 1399,543f };
			*(iParam0 + 36) = { 741,11f, 78,306f, 1397,618f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 750,645f, 78,611f, 1386,18f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 751,968f, 78,606f, 1385,991f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 756,953f, 78,306f, 1385,658f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { 751,965f, 80,39f, 1404,842f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 11)
		{
			*(iParam0 + 24) = { 750,062f, 78,314f, 1395,693f };
			*(iParam0 + 36) = { 741,11f, 78,306f, 1397,618f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 175.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 734,462f, 79,769f, 1408,614f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 731,99f, 79,78f, 1408,546f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 727,562f, 78,811f, 1408,402f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 723,946f, 78,804f, 1407,98f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
	}
	return 0;
}

int Function_133(int iParam0, int iParam1) //Position: 0x8E72 / 36466
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
		*(iParam0 + 64[03]) = { 111,425f, 73,767f, 2280,372f };
		(*iParam0 + 140)[0] = 5120;
		*(iParam0 + 64[13]) = { 112,086f, 73,639f, 2278,207f };
		(*iParam0 + 140)[1] = 12800;
		*(iParam0 + 64[23]) = { 113,136f, 73,646f, 2273,555f };
		(*iParam0 + 140)[2] = 1024;
		*(iParam0 + 64[33]) = { 113,364f, 73,645f, 2272,118f };
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
			*(iParam0 + 64[03]) = { -806,792f, 92,727f, 2373,401f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -807,277f, 92,736f, 2375,261f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -809,876f, 92,834f, 2381,274f };
			(*iParam0 + 140)[2] = 35072;
			*(iParam0 + 64[33]) = { -823,197f, 92,307f, 2378,322f };
			(*iParam0 + 140)[3] = 1024;
			*(iParam0 + 64[43]) = { -823,026f, 92,375f, 2376,612f };
			(*iParam0 + 140)[4] = 35072;
			*(iParam0 + 64[53]) = { -822,463f, 92,431f, 2375,01f };
			(*iParam0 + 140)[5] = 20992;
			return 1;
		}
		if (Global_29006 == Global_30640[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -2160,207f, 16,882f, 2605,83f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2158,595f, 16,881f, 2605,596f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2159,184f, 16,894f, 2605,341f };
			(*iParam0 + 140)[2] = 35072;
			*(iParam0 + 64[33]) = { -2155,752f, 16,449f, 2618,374f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { -2153,08f, 16,371f, 2616,611f };
			(*iParam0 + 140)[4] = 17408;
			*(iParam0 + 64[53]) = { -2154,778f, 16,401f, 2617,199f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
		if (Global_29006 == Global_30668[1])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { 155,69f, 73,755f, 2200,008f };
			(*iParam0 + 140)[0] = 39168;
			*(iParam0 + 64[13]) = { 158,627f, 73,755f, 2198,852f };
			(*iParam0 + 140)[1] = 13312;
			*(iParam0 + 64[23]) = { 160,233f, 73,755f, 2197,97f };
			(*iParam0 + 140)[2] = 4608;
			*(iParam0 + 64[33]) = { 172,272f, 73,286f, 2210,202f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { 169,259f, 73,286f, 2213,359f };
			(*iParam0 + 140)[4] = 21504;
			*(iParam0 + 64[53]) = { 168,629f, 73,286f, 2214,713f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
		if (Global_29006 == Global_30707[2])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -809,175f, 16,665f, 3709,376f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -807,866f, 16,665f, 3708,143f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -806,33f, 16,665f, 3706,44f };
			(*iParam0 + 140)[2] = 20992;
			*(iParam0 + 64[33]) = { -800,715f, 16,665f, 3700,73f };
			(*iParam0 + 140)[3] = 4352;
			*(iParam0 + 64[43]) = { -785,693f, 13,051f, 3713,464f };
			(*iParam0 + 140)[4] = 35072;
			*(iParam0 + 64[53]) = { -785,114f, 13,051f, 3716,611f };
			(*iParam0 + 140)[5] = 35072;
			return 1;
		}
		if (Global_29006 == Global_30717[1])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -143,332f, 119,009f, 1353,172f };
			*(iParam0 + 64[13]) = { -144,653f, 120,644f, 1357,015f };
			*(iParam0 + 64[23]) = { -144,869f, 119,855f, 1359,631f };
			*(iParam0 + 64[33]) = { -129,628f, 118,869f, 1352,225f };
			*(iParam0 + 64[43]) = { -128,989f, 118,869f, 1358,801f };
			*(iParam0 + 64[53]) = { -129,897f, 118,869f, 1361,462f };
			return 1;
		}
		if (Global_29006 == Global_30717[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 100.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 853,294f, 77,517f, 1279,476f };
			*(iParam0 + 64[13]) = { 852,864f, 77,517f, 1282,613f };
			*(iParam0 + 64[23]) = { 853,532f, 77,517f, 1283,355f };
			*(iParam0 + 64[33]) = { 859,177f, 77,517f, 1267,618f };
			*(iParam0 + 64[43]) = { 861,636f, 77,517f, 1278,204f };
			*(iParam0 + 64[53]) = { 861,581f, 77,517f, 1279,349f };
			return 1;
		}
		if (Global_29006 == Global_30693[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 50.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -2689,855f, 31,151f, 4274,476f };
			(*iParam0 + 140)[0] = 35072;
			*(iParam0 + 64[13]) = { -2689,877f, 31,151f, 4278,589f };
			(*iParam0 + 140)[1] = 13312;
			*(iParam0 + 64[23]) = { -2690,326f, 31,152f, 4279,999f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { -2703,691f, 31,151f, 4280,464f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { -2704,23f, 31,155f, 4278,981f };
			(*iParam0 + 140)[4] = 21504;
			*(iParam0 + 64[53]) = { -2703,474f, 31,146f, 4271,279f };
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
			*(iParam0 + 64[03]) = { -3679,563f, 8,483f, 3479,026f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -3675,23f, 8,26f, 3484,906f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { -3673,747f, 8,256f, 3481,049f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { -3675,517f, 8,201f, 3492,157f };
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

void Function_134(int iParam0) //Position: 0x9690 / 38544
{
	if (Function_89(iParam0->f_584, 4))
	{
		Function_183();
	}
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	Function_182(1);
	if (Function_89(iParam0->f_584, 32))
	{
		if (Function_36(iParam0->f_624))
		{
			Function_181(iParam0->f_624, 1);
		}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_26(iParam0, 0);
	}
	Function_68(iParam0 + 584, 16);
	Global_3382 = 1;
	if (Function_89(iParam0->f_584, 64))
	{
		Global_13111 = 4294967295;
	}
	Function_135(iParam0, 1);
	return;
}

void Function_135(var uParam0, int iParam1) //Position: 0x9711 / 38673
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
				iVar0 = Function_180(uParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_179(uParam0) != 1)
				{
					Function_158(uParam0->f_488, iVar0, 1);
				}
				if (uParam0->f_484 != 1 || uParam0->f_484 != 0)
				{
					Function_226(200, 1, 0);
				}
				else
				{
					Function_139(50, 1, 0);
				}
				if (uParam0->f_332 > 0)
				{
					Function_138(uParam0->f_332, 1);
				}
				else
				{
					Function_136(uParam0->f_332, 1);
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

int Function_136(bool bParam0, bool bParam1) //Position: 0x97E6 / 38886
{
	bool bVar0;
	
	bVar0 = Function_59(0);
	if ((Function_59(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_137(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_59(0));
	return 1;
}

int Function_137(int iParam0, bool bParam1, int iParam2) //Position: 0x9876 / 39030
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
	Function_22(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_11(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_138(bool bParam0, bool bParam1) //Position: 0x9A71 / 39537
{
	bool bVar0;
	
	bVar0 = Function_59(0);
	if ((Function_59(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_10(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_59(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_10(597, bParam0, 0, 0);
	}
	if ((Function_59(597) + Function_59(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_139(int iParam0, bool bParam1, bool bParam2) //Position: 0x9B3C / 39740
{
	int iVar0;
	bool bVar1;
	
	if (Function_157(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_59(3);
	Function_154();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_152(3, bVar1);
		if (!bParam2)
		{
			if (!Function_151(Global_76848, 4))
			{
				Function_146(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_10(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_20(3));
	iVar0 = Function_59(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_141(4, Function_145(Global_12976.f_156), 1);
				Function_140(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_141(4, Function_145(Global_12976.f_156), 1);
				Function_140(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_141(4, Function_145(Global_12976.f_156), 1);
				Function_140(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_141(4, Function_145(Global_12976.f_156), 1);
				Function_140(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_141(4, Function_145(Global_12976.f_156), 1);
				Function_140(Global_12976.f_152, Global_12976.f_156);
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

void Function_140(int iParam0, int iParam1) //Position: 0x9CFF / 40191
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

int Function_141(int iParam0, char* cParam1, bool bParam2) //Position: 0x9F5D / 40797
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
	Function_78(iParam0, cParam1, 0, 1);
	iVar1 = Function_142();
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

int Function_142() //Position: 0xA0E2 / 41186
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
	Function_143();
	return 0;
}

void Function_143() //Position: 0xA181 / 41345
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
		Function_144(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_144(int iParam0) //Position: 0xA230 / 41520
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

var Function_145(int iParam0) //Position: 0xA28E / 41614
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

void Function_146(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xA31D / 41757
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_148(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_147(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_147(char* cParam0, int iParam1) //Position: 0xA389 / 41865
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

bool Function_148(bool bParam0, var uParam1, int iParam2) //Position: 0xA3C0 / 41920
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
		if (Function_150(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_149(uVar0))
		{
			case 0x00000002:
				if (!Function_151(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_149(char* cParam0) //Position: 0xA438 / 42040
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

int Function_150(int iParam0) //Position: 0xA4D9 / 42201
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_48(&iVar1, 2147483648);
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

bool Function_151(var uParam0, int iParam1) //Position: 0xA516 / 42262
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0, bool bParam1) //Position: 0xA529 / 42281
{
	bool bVar0;
	int iVar1;
	
	Function_10(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_153(iParam0, 4294967295);
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
	iVar1 = Function_142();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_153(int iParam0, int iParam1) //Position: 0xA6C6 / 42694
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

void Function_154() //Position: 0xA707 / 42759
{
	Function_156(3, 0.0f);
	Function_155(3, 10000.0f);
	return;
}

int Function_155(int iParam0, int iParam1) //Position: 0xA71D / 42781
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_156(int iParam0, int iParam1) //Position: 0xA75D / 42845
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_157(int iParam0) //Position: 0xA79D / 42909
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_158(int iParam0, char* cParam1, bool bParam2) //Position: 0xA7AC / 42924
{
	char* cVar0[32];
	
	if (!Function_178(3))
	{
		return;
	}
	if (Function_46())
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
						if (IS_PS3())
						{
							Function_159(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_159(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_159(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3())
					{
						Function_159(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_159(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_159(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_159(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

void Function_159(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xA8B9 / 43193
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_177(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_178(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_176(bParam0, 2))
	{
		Function_10(456, 1, 0, 0);
		Function_175(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_223(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_174(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_175(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_173(0, 0, 1, 1))
			{
				Function_47(1);
				Function_45(1, 0);
			}
			else
			{
				Function_172();
			}
		}
		Function_167(bParam0);
		if (StackVal && !Function_89(((((!Function_166() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_89((((Function_166() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_151(Global_76846, 2))
		{
			Function_146(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_161();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_160(3, bParam1);
				break;
			
			case 0x00000005:
				Function_160(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_160(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_160(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_160(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_160(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_76(2, 24);
				break;
			
			case 0x00000003:
				Function_76(2, 25);
				break;
			
			case 0x0000000F:
				Function_76(2, 26);
				break;
			
			case 0x0000000D:
				Function_76(2, 27);
				break;
			
			case 0x0000000E:
				Function_76(2, 28);
				break;
			}
	}
}

void Function_160(int iParam0, bool bParam1) //Position: 0xAB48 / 43848
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

void Function_161() //Position: 0xABA7 / 43943
{
	if (Function_177(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_165(Global_28180);
			Global_28180.f_8 = Function_162(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_165(Global_28180);
			Global_28180.f_8 = Function_162(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_162(int iParam0, int iParam1) //Position: 0xAC22 / 44066
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
					if (Function_164(6, 0) || Function_164(12, 0))
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
					if (Function_163(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_164(5, 0))
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
					if (Function_163(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_163(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_163(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_163(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_164(26, 0))
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
					if (Function_163(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_163(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_163(27) && iVar18)
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
					if (Function_163(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_163(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_163(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_163(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_164(17, 0) && iVar15)
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
					if (Function_163(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_164(6, 0) && Function_163(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_163(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_164(9, 0) && Function_163(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_163(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_164(8, 0) && iVar19)
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
	if (Function_66(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_66(StackVal, StackVal, vVar3))
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
	if (!Function_66(StackVal, StackVal, vVar3))
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

int Function_163(int iParam0) //Position: 0xB813 / 47123
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_164(int iParam0, bool bParam1) //Position: 0xB828 / 47144
{
	int iVar0;
	
	iVar0 = Function_81(iParam0);
	if (!Function_36(iVar0))
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

int Function_165(int iParam0) //Position: 0xB865 / 47205
{
	int iVar0;
	int iVar1;
	
	if (!Function_177(iParam0))
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

bool Function_166() //Position: 0xB8B4 / 47284
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_167(bool bParam0) //Position: 0xB8E1 / 47329
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
			if (Function_174(bParam0, Function_171(bVar24)))
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
			if (Function_174(bParam0, Function_171(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_170(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_169(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_168(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_168(int iParam0) //Position: 0xBA91 / 47761
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_177(iParam0))
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

void Function_169(bool bParam0, bool bParam1) //Position: 0xBAE8 / 47848
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

var Function_170(int iParam0) //Position: 0xBB0D / 47885
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_177(iParam0))
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

int Function_171(bool bParam0) //Position: 0xBB63 / 47971
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_172() //Position: 0xBB6F / 47983
{
	return;
}

bool Function_173(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0xBB75 / 47989
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

bool Function_174(bool bParam0, int iParam1) //Position: 0xBC19 / 48153
{
	int iVar0;
	
	if (!Function_177(bParam0))
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

void Function_175(int iParam0, int iParam1) //Position: 0xBC78 / 48248
{
	if (!Function_177(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_176(int iParam0, int iParam1) //Position: 0xBCCD / 48333
{
	int iVar0;
	
	if (!Function_177(iParam0))
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

bool Function_177(int iParam0) //Position: 0xBCFA / 48378
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_178(int iParam0) //Position: 0xBD10 / 48400
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_179(int iParam0) //Position: 0xBD2C / 48428
{
	return !Function_89(iParam0->f_584, 16384);
}

var Function_180(int iParam0) //Position: 0xBD3E / 48446
{
	return iParam0->f_492;
}

void Function_181(int iParam0, int iParam1) //Position: 0xBD49 / 48457
{
	int iVar0;
	
	if (!Function_83(iParam0))
	{
		Function_38();
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
	iVar0 = Function_37(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_47(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_35(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_182(int iParam0) //Position: 0xBDB0 / 48560
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_86())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_183() //Position: 0xBDE5 / 48613
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_184(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0xBDF9 / 48633
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_205(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_66(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_68(iParam0 + 584, 4);
	}
	else
	{
		Function_48(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_36(iParam0->f_624))
		{
			Function_204(iParam0->f_624, 1);
			Function_68(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_68(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_248("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_188(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_187(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_186(iParam0 + 572);
	}
	Function_186(iParam0 + 44);
	Function_185(0);
}

void Function_185(int iParam0) //Position: 0xBF48 / 48968
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_95(105)), 0);
	return;
}

void Function_186(int iParam0) //Position: 0xBF69 / 49001
{
	Function_278(iParam0, 0.0f);
	return;
}

void Function_187(bool bParam0, bool bParam1) //Position: 0xBF75 / 49013
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

void Function_188(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xBFB6 / 49078
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	int iVar17;
	
	Function_202(10.0f);
	Var14 = { StackVal, Function_202(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_201(bParam4) || bParam4 != 0)
		{
			bVar16 = Function_191(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = bParam4;
		}
		iVar17 = 0;
		while (iVar17 < (iParam2 - 1))
		{
			Function_189(&Var14, iVar17);
			GET_OBJECT_RELATIVE_POSITION(uParam3, Function_189(&Var14, iVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_248("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			iVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

vector3 Function_189(var uParam0, bool bParam1) //Position: 0xC0A9 / 49321
{
	vector3 vVar0;
	
	if (!Function_190(uParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(*uParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(*uParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return 0.0f, 0.0f, 0.0f;
	}
	GET_FORMATION_LOCATION(*uParam0, bParam1, &vVar0);
	vVar0.x = (StackVal * vVar0.x);
	vVar0.f_4 = (StackVal * vVar0.y);
	vVar0.f_8 = (StackVal * vVar0.z);
	return StackVal, StackVal, vVar0;
}

bool Function_190(int iParam0) //Position: 0xC1EA / 49642
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

var Function_191(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC20C / 49676
{
	return Function_192(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_192(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0xC225 / 49701
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_195(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_195(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_195(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_195(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_195(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_195(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_195(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_195(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_195(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_195(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_195(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_195(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_195(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_195(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_193(StackVal, StackVal, iParam0, bParam1, bParam2, fParam5, vParam6);
}

var Function_193(var uParam0, bool bParam1, bool bParam2, float fParam3, vector3 vParam4) //Position: 0xC47A / 50298
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_194(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_194(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_194(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_194(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_194(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_194(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_194(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_194(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_194(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_194(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_194(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_194(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_194(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_194(Global_30750[13], bVar0);
	}
	return Function_195(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, fParam3, vParam4);
}

void Function_194(bool bParam0, bool bParam1) //Position: 0xC5CB / 50635
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0xC689 / 50825
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
		Function_200();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_201(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_199(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_199(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_198(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_201(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_198(bVar0))
				{
					Function_197();
				}
				Function_196(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_201(bVar1))
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

void Function_196(int iParam0) //Position: 0xC97C / 51580
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

void Function_197() //Position: 0xCA30 / 51760
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

bool Function_198(bool bParam0) //Position: 0xCA6A / 51818
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

void Function_199(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xCA97 / 51863
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
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
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

void Function_200() //Position: 0xCBE8 / 52200
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_197();
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
	Function_197();
	return;
}

bool Function_201(bool bParam0) //Position: 0xCC33 / 52275
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_202(int iParam0) //Position: 0xCC4A / 52298
{
	Function_203(iParam0, 10);
	return StackVal, Function_203(iParam0, 10);
}

struct<8> Function_203(var uParam0, int iParam1) //Position: 0xCC57 / 52311
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_204(int iParam0, int iParam1) //Position: 0xCC70 / 52336
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_83(iParam0))
	{
		Function_38();
		return;
	}
	iVar0 = Function_37(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_47(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_35(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_41(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar11);
		APPEND_JOURNAL_ENTRY(bVar11, 0);
	}
	return;
}

void Function_205(int iParam0) //Position: 0xCD16 / 52502
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_248(&Var0) };
		iParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_206(int iParam0, int iParam1) //Position: 0xCD8B / 52619
{
	if (Function_36(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_68(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_207(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCDE0 / 52704
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_211(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_208(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_208(bParam0, bParam1, bParam2, 4294967295);
}

int Function_208(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xCE3E / 52798
{
	var uVar0;
	
	if (!Function_210(bParam2))
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
	uVar0 = Function_211(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_209(uVar0);
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

int Function_209(int iParam0) //Position: 0xCF93 / 53139
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

bool Function_210(int iParam0) //Position: 0xCFD1 / 53201
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_211(int iParam0, int iParam1, int iParam2) //Position: 0xCFE6 / 53222
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_212(bool bParam0) //Position: 0xD006 / 53254
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_213(bParam0);
		return 1;
	}
	return 0;
}

void Function_213(bool bParam0) //Position: 0xD01C / 53276
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

bool Function_214(var uParam0, float fParam1) //Position: 0xD048 / 53320
{
	if (Function_217(uParam0))
	{
		if (Function_215(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_215(bool bParam0) //Position: 0xD064 / 53348
{
	if (Function_217(bParam0))
	{
		if (Function_216(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_216(int iParam0) //Position: 0xD12C / 53548
{
	return Function_89(*iParam0, 2);
}

bool Function_217(bool bParam0) //Position: 0xD139 / 53561
{
	return Function_89(*bParam0, 1);
}

void Function_218(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xD146 / 53574
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_235(bParam0, Global_34573) >= IntToFloat(iParam5))
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

void Function_219() //Position: 0xD1D6 / 53718
{
	int iVar0;
	
	bLocal_464 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_221(3);
		if (iVar0 == 0)
		{
			bLocal_463 = "FTR_SONG_02";
		}
		else if (iVar0 == 1)
		{
			bLocal_463 = "FTR_SONG_03";
		}
		else if (iVar0 == 2)
		{
			bLocal_463 = "FTR_SONG_07";
		}
	}
	else if (Global_29004 == 2)
	{
		if (Function_220())
		{
			bLocal_463 = "NRT_SONG_04";
		}
		else
		{
			bLocal_463 = "NRT_SONG_05";
		}
	}
	else if (Global_29004 == 1)
	{
		iVar0 = Function_221(3);
		if (iVar0 == 0)
		{
			bLocal_463 = "MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			bLocal_463 = "MEX_SONG_03";
		}
		else if (iVar0 == 2)
		{
			bLocal_463 = "MEX_SONG_05";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(bLocal_463, "PASTORAL", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_220() //Position: 0xD2E4 / 53988
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_221(bool bParam0) //Position: 0xD2F7 / 54007
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(false, bParam0) / 1000);
}

bool Function_222(bool bParam0) //Position: 0xD310 / 54032
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

void Function_223(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xD3A7 / 54183
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_224(bool bParam0, bool bParam1) //Position: 0xD3F2 / 54258
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, true);
			}
			Function_212(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_212(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_225(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_225(bool bParam0, int iParam1) //Position: 0xD48E / 54414
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

void Function_226(int iParam0, bool bParam1, bool bParam2) //Position: 0xD4D8 / 54488
{
	int iVar0;
	bool bVar1;
	
	if (Function_157(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_59(1);
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
			Function_152(1, bVar1);
			if (!bParam2)
			{
				if (!Function_151(Global_76848, 1))
				{
					Function_146(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_228(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_151(Global_76848, 2))
				{
					Function_146(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_10(1, bVar1, 0, 0);
	}
	else
	{
		Function_137(1, (4294967295 * bVar1), 0);
	}
	if (Function_59(1) <= 4294962296)
	{
		Function_58(1, 4294962296, 0);
	}
	else if (Function_59(1) >= 5000)
	{
		Function_58(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_20(1));
	iVar0 = Function_59(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_141(2, Function_227(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_141(2, Function_227(Global_12976.f_152), 0);
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
				Function_141(2, Function_227(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_141(2, Function_227(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_141(2, Function_227(Global_12976.f_152), 1);
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
				Function_141(2, Function_227(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_141(2, Function_227(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_141(2, Function_227(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_141(2, Function_227(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_141(2, Function_227(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_141(2, Function_227(Global_12976.f_152), 1);
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
				Function_141(2, Function_227(Global_12976.f_152), 0);
			}
			break;
	}
	Function_140(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_227(int iParam0) //Position: 0xD7ED / 55277
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

int Function_228(int iParam0, bool bParam1) //Position: 0xD890 / 55440
{
	bool bVar0;
	int iVar1;
	
	Function_137(iParam0, bParam1, 0);
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
	iVar1 = Function_153(iParam0, 4294967295);
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
	iVar1 = Function_142();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_229(bool bParam0) //Position: 0xDA2C / 55852
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

int Function_230(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0xDA60 / 55904
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
		fVar0 = Function_235(bParam0, Global_34573);
		if (!Function_89(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_231(bParam0);
				return 1;
			}
		}
		if (!Function_89(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_231(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_231(bParam0);
				return 1;
			}
		}
		if (!Function_89(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_231(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_231(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_89(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_231(bParam0);
				return 1;
			}
		}
		if (!Function_89(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_231(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_231(bool bParam0) //Position: 0xDBF7 / 56311
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_232(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_232(bool bParam0) //Position: 0xDC2B / 56363
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_233(bool bParam0) //Position: 0xDC42 / 56386
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_234(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_234(var uParam0, int iParam1) //Position: 0xDC7D / 56445
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

float Function_235(bool bParam0, bool bParam1) //Position: 0xDD06 / 56582
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

void Function_236(bool bParam0) //Position: 0xDDF7 / 56823
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

void Function_237(var uParam0, bool bParam1, bool bParam2) //Position: 0xDE81 / 56961
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_239(uParam0, 0x40f00000, 1, 2, 0, 0, 0);
		if (bParam2)
		{
			Function_238();
		}
	}
	return;
}

void Function_238() //Position: 0xDEA9 / 57001
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

void Function_239(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xDF32 / 57138
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, iParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, iParam2, iVar0, iParam5, iParam6);
	}
}

int Function_240(var uParam0, int iParam1) //Position: 0xDF85 / 57221
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
	Function_242(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_241(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_241(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xE0E6 / 57574
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_248("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_242(bool bParam0) //Position: 0xE181 / 57729
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
						Function_244(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_243(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_244(iVar0);
						}
					}
					else if (Function_243(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_244(iVar0);
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
			Function_244(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_243(bool bParam0, vector3 vParam1) //Position: 0xE2E2 / 58082
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_127(bParam0);
		vVar0 = { StackVal, StackVal, Function_127(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_244(int iParam0) //Position: 0xE35C / 58204
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

bool Function_245(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE3BD / 58301
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
		Function_247("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_246(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_246(bVar0);
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
			Function_246(bVar0);
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

void Function_246(bool bParam0) //Position: 0xE61A / 58906
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

void Function_247(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xE660 / 58976
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

struct<32> Function_248(bool bParam0) //Position: 0xE6A7 / 59047
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_249("0", &cVar8, ""), 4);
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

struct<32> Function_249(char* cParam0, char* cParam1, char* cParam2) //Position: 0xE711 / 59153
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_250(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0xE730 / 59184
{
}

float Function_251() //Position: 0xE74C / 59212
{
	float fVar0;
	var uVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_234(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_252(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xE77D / 59261
{
	if (StackVal & 64 == 64)
	{
		if (!*iParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_235(Global_34573, bParam1) > 15.0f)
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
		if (Function_255() && !*iParam2)
		{
			return 0;
		}
		if (Function_254(iParam0) && !*iParam2)
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
		if (!Function_253(iParam0, iParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_253(int iParam0, int iParam1) //Position: 0xE8AB / 59563
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

int Function_254(int iParam0) //Position: 0xE8CC / 59596
{
	bool bVar0;
	
	if (StackVal & 64 == 64)
	{
		bVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (bVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_255() //Position: 0xE90A / 59658
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
						if (Function_125(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_125(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_256(var uParam0, float fParam1, int iParam2, var uParam3, vector3 vParam4, bool bParam7) //Position: 0xE9C5 / 59845
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	if (Global_29006 == Global_30640[0])
	{
		iVar0 = 10;
		*(&Local_5[07] + 12) = { -2175,953f, 16,256f, 2611,705f };
		*(&Local_5[17] + 12) = { -2157,237f, 16,256f, 2611,759f };
		Local_5[07] = { -2167,807f, 16,444f, 2607,576f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = 205.0f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { -2141,009f, 16,097f, 2610,77f };
		*(&Local_5[37] + 12) = { -2163,419f, 16,097f, 2611,458f };
		Local_5[27] = { -2152,337f, 16,413f, 2617,464f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 354,044f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { -2109,022f, 16,306f, 2610,545f };
		*(&Local_5[57] + 12) = { -2131,586f, 16,306f, 2610,295f };
		Local_5[47] = { -2117,347f, 16,347f, 2617,75f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = -3.0f;
		Local_5[57].f_24 = Local_5[47].f_24;
		*(&Local_5[67] + 12) = { -2181,665f, 16,199f, 2626,591f };
		*(&Local_5[77] + 12) = { -2181,451f, 16,199f, 2607,999f };
		Local_5[67] = { -2186,093f, 16,341f, 2617,544f };
		Local_5[77] = { StackVal, StackVal, Local_5[67] };
		Local_5[67].f_24 = 253.0f;
		Local_5[77].f_24 = Local_5[67].f_24;
		*(&Local_5[87] + 12) = { -2182,602f, 16,279f, 2582,669f };
		*(&Local_5[97] + 12) = { -2182,512f, 16,279f, 2602,813f };
		Local_5[87] = { -2177,891f, 16,454f, 2592,662f };
		Local_5[97] = { StackVal, StackVal, Local_5[87] };
		Local_5[87].f_24 = 90.0f;
		Local_5[97].f_24 = Local_5[87].f_24;
	}
	else if (Global_29006 == Global_30668[0])
	{
		iVar0 = 6;
		*(&Local_5[07] + 12) = { -833,757f, 92,093f, 2405,053f };
		*(&Local_5[17] + 12) = { -815,963f, 92,093f, 2406,769f };
		Local_5[07] = { -825,105f, 92,566f, 2400,488f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = 167.0f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { -948,017f, 90,246f, 2443,329f };
		*(&Local_5[37] + 12) = { -932,475f, 90,246f, 2435,743f };
		Local_5[27] = { -936,871f, 90,326f, 2444,74f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 27.0f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { -773,226f, 92,264f, 2441,655f };
		*(&Local_5[57] + 12) = { -785,8f, 92,264f, 2429,783f };
		Local_5[47] = { -775,843f, 92,305f, 2432,765f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = 126,229f;
		Local_5[57].f_24 = Local_5[47].f_24;
	}
	else if (Global_29006 == Global_30668[1])
	{
		iVar0 = 6;
		*(&Local_5[07] + 12) = { 161,801f, 73,036f, 2209,601f };
		*(&Local_5[17] + 12) = { 147,555f, 73,036f, 2219,463f };
		Local_5[07] = { 159,933f, 73,286f, 2221,292f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = 86,752f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { 112,178f, 73,036f, 2307,669f };
		*(&Local_5[37] + 12) = { 115,414f, 73,036f, 2290,921f };
		Local_5[27] = { 119,576f, 73,286f, 2300,245f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 62,994f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { 125,52f, 72,495f, 2253,003f };
		*(&Local_5[57] + 12) = { 120,498f, 72,495f, 2269,145f };
		Local_5[47] = { 121,158f, 72,679f, 2260,647f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = 256,943f;
		Local_5[57].f_24 = Local_5[47].f_24;
	}
	else if (Global_29006 == Global_30685[0])
	{
		iVar0 = 6;
		*(&Local_5[07] + 12) = { -4297,778f, 22,269f, 4404,503f };
		*(&Local_5[17] + 12) = { -4304,795f, 22,573f, 4404,685f };
		Local_5[07] = { -4299,19f, 22,005f, 4410,046f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = -46,99f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { -4267,992f, 18,109f, 4437,149f };
		*(&Local_5[37] + 12) = { -4282,06f, 18,109f, 4446,621f };
		Local_5[27] = { -4275,12f, 18,128f, 4437,712f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 221,481f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { -4318,445f, 22,086f, 4450,013f };
		*(&Local_5[57] + 12) = { -4319,349f, 22,086f, 4431,821f };
		Local_5[47] = { -4325,721f, 22,518f, 4441,153f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = 262,357f;
		Local_5[57].f_24 = Local_5[47].f_24;
	}
	else if (Global_29006 == Global_30693[0])
	{
		iVar0 = 4;
		*(&Local_5[07] + 12) = { -2732,999f, 32,668f, 4258,262f };
		*(&Local_5[17] + 12) = { -2716,179f, 32,668f, 4250,88f };
		Local_5[07] = { -2723,667f, 32,437f, 4248,966f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = 171,264f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { -2678,78f, 31,48f, 4241,123f };
		*(&Local_5[37] + 12) = { -2698,71f, 31,48f, 4242,091f };
		Local_5[27] = { -2686,525f, 31,359f, 4246,266f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 12,963f;
		Local_5[37].f_24 = Local_5[27].f_24;
	}
	else if (Global_29006 == Global_30707[2])
	{
		iVar0 = 6;
		*(&Local_5[07] + 12) = { -819,766f, 12,801f, 3773,009f };
		*(&Local_5[17] + 12) = { -807,17f, 12,801f, 3760,925f };
		Local_5[07] = { -811,221f, 13,03f, 3769,003f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = 44,673f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { -787,179f, 12,801f, 3736,633f };
		*(&Local_5[37] + 12) = { -798,855f, 12,801f, 3749,463f };
		Local_5[27] = { -796,067f, 13,023f, 3740,458f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 229,193f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { -804,814f, 13,051f, 3719,617f };
		*(&Local_5[57] + 12) = { -798,673f, 13,051f, 3713,655f };
		Local_5[47] = { -805,863f, 13,051f, 3712,442f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = 219,125f;
		Local_5[57].f_24 = Local_5[47].f_24;
	}
	else if (Global_29006 == Global_30717[0])
	{
		iVar0 = 12;
		*(&Local_5[07] + 12) = { 735,953f, 78,306f, 1324,242f };
		*(&Local_5[17] + 12) = { 735,953f, 78,306f, 1305,9f };
		Local_5[07] = { 728,04f, 78,466f, 1318,389f };
		Local_5[17] = { StackVal, StackVal, Local_5[07] };
		Local_5[07].f_24 = -88,791f;
		Local_5[17].f_24 = Local_5[07].f_24;
		*(&Local_5[27] + 12) = { 788,067f, 78,306f, 1292,354f };
		*(&Local_5[37] + 12) = { 788,061f, 78,306f, 1310,506f };
		Local_5[27] = { 781,558f, 78,435f, 1297,9f };
		Local_5[37] = { StackVal, StackVal, Local_5[27] };
		Local_5[27].f_24 = 269,756f;
		Local_5[37].f_24 = Local_5[27].f_24;
		*(&Local_5[47] + 12) = { 686,033f, 78,197f, 1303,161f };
		*(&Local_5[57] + 12) = { 685,853f, 78,197f, 1321,337f };
		Local_5[47] = { 679,536f, 78,145f, 1310,718f };
		Local_5[57] = { StackVal, StackVal, Local_5[47] };
		Local_5[47].f_24 = -59,97f;
		Local_5[57].f_24 = Local_5[47].f_24;
		*(&Local_5[67] + 12) = { 739,831f, 78,306f, 1252,583f };
		*(&Local_5[77] + 12) = { 720,589f, 78,306f, 1252,583f };
		Local_5[67] = { 733,714f, 78,435f, 1246,104f };
		Local_5[77] = { StackVal, StackVal, Local_5[67] };
		Local_5[67].f_24 = 179,849f;
		Local_5[77].f_24 = Local_5[67].f_24;
		*(&Local_5[87] + 12) = { 686,412f, 78,306f, 1351,855f };
		*(&Local_5[97] + 12) = { 686,13f, 78,306f, 1370,525f };
		Local_5[87] = { 681,521f, 78,493f, 1359,064f };
		Local_5[97] = { StackVal, StackVal, Local_5[87] };
		Local_5[87].f_24 = -43,152f;
		Local_5[97].f_24 = Local_5[87].f_24;
		*(&Local_5[107] + 12) = { 732,158f, 78,314f, 1399,543f };
		*(&Local_5[117] + 12) = { 750,062f, 78,314f, 1395,693f };
		Local_5[107] = { 737,693f, 78,306f, 1403,752f };
		Local_5[117] = { StackVal, StackVal, Local_5[107] };
		Local_5[107].f_24 = 36,937f;
		Local_5[117].f_24 = Local_5[107].f_24;
	}
	else
	{
		return 0;
	}
	bVar1 = 1E+08.0f;
	*uParam3 = 4294967295;
	if (bParam7)
	{
		iVar3 = 0;
		while (iVar3 <= iVar0)
		{
			bVar2 = VDIST(Global_34574, Local_5[iVar37]);
			if (bVar2 > bVar1)
			{
				if (uParam0 || Function_257(&(Local_5[iVar37]), &bVar2, &fParam1))
				{
					bVar1 = bVar2;
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
			bVar2 = VDIST(Global_34574, *(&Local_5[iVar37] + 12));
			if (bVar2 > bVar1)
			{
				if (VDIST(Local_5[iVar37], vParam4) > 1.0f)
				{
					bVar1 = bVar2;
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

int Function_257(var uParam0, var uParam1, int iParam2) //Position: 0xF5FA / 62970
{
	if (*uParam1 < Function_251())
	{
		if (!Function_250(StackVal, StackVal, *uParam0, 1.0f, 65.0f, 1, 1, 0))
		{
			if (Function_258(uParam0, iParam2, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_258(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xF636 / 63030
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
	Function_242(4294967295);
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
			else if (Function_259(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_259(var uParam0, int iParam1) //Position: 0xF706 / 63238
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_260(int iParam0) //Position: 0xF724 / 63268
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_265();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_264(iParam0[iVar03], 8);
		}
		else if (Function_263())
		{
			iVar1 = 1;
			Function_264(iParam0[iVar03], 8);
		}
		Function_264(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_264(iParam0[iVar03], 1);
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
							Function_264(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_264(iParam0[iVar03], 2);
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
							Function_264(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_264(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_264(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_264(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_264(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_264(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_264(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_264(iParam0[iVar03], 2);
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
	Function_261();
	return 1;
}

void Function_261() //Position: 0xFA9F / 64159
{
	if (!Function_262(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_262(int iParam0) //Position: 0xFADF / 64223
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_263() //Position: 0xFAFB / 64251
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

void Function_264(var uParam0, int iParam1) //Position: 0xFB26 / 64294
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_265() //Position: 0xFB37 / 64311
{
	if (!Function_262(128))
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

void Function_266(bool bParam0, int iParam1) //Position: 0xFB79 / 64377
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_267(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_267(int iParam0) //Position: 0xFBA6 / 64422
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, true);
		CLEAR_ACTOR_MAX_SPEED(*iParam0);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(*iParam0, true);
		}
	}
	return;
}

void Function_268(var uParam0, int iParam1) //Position: 0xFBE8 / 64488
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_269(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_269(int iParam0) //Position: 0xFC15 / 64533
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, false);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, false);
			MEMORY_ALLOW_SHOOTING(*iParam0, false);
		}
	}
	return;
}

bool Function_270(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xFC58 / 64600
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

var Function_271(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xFCC0 / 64704
{
	return Function_272(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_272(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xFCD4 / 64724
{
	return Function_195(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

void Function_273(var uParam0, int iParam1) //Position: 0xFCED / 64749
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

var Function_274(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xFD0F / 64783
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
			Function_264(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_264(bParam0[iVar03], 8);
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

var Function_275(int iParam0, int iParam1) //Position: 0xFDDF / 64991
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_276(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xFDF5 / 65013
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_277(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_264(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_277(var uParam0, int iParam1, int iParam2) //Position: 0xFE2D / 65069
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_264(uParam0[iVar03], 4);
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

void Function_278(var uParam0, float fParam1) //Position: 0xFEF1 / 65265
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_68(uParam0, 1);
	Function_48(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_279() //Position: 0xFF12 / 65298
{
	var uVar0;
	
	return uVar0;
}

