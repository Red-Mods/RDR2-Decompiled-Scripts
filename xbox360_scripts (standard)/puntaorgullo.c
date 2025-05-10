//Decompiled with MagicRDR v1.0
//Function Count : 101
//Statics Count : 465
//Natives Count : 131
//Parameters Count : 2

#region Local Var
	struct<49> Local_0 = { 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
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
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 2;
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
	var uLocal_404 = 0;
	int iLocal_405 = 0;
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
	var uLocal_427 = 1;
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
	bool bLocal_457 = false;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	bool bLocal_460 = false;
	bool bLocal_461 = false;
	bool bLocal_462 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar1;
	vector3 vVar2;
	
	iLocal_405 = 0;
	Function_100(iScriptParam_0);
	SET_DUST_LEVEL(2);
	ALLOW_TUMBLEWEEDS(1);
	Function_99("Initializing PuntaOrgullo", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_457 = 1000;
		switch (iLocal_405)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_405 = 1;
				}
				bLocal_457 = false;
				break;
			
			case 0x00000001:
				if (Function_97())
				{
					if (Function_93(41, 0))
					{
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					}
					iLocal_405 = 2;
				}
				bLocal_457 = false;
				break;
			
			case 0x00000002:
				if (Function_84())
				{
					Function_83(&(Global_29008[iScriptParam_0]), 32);
					iLocal_405 = 3;
				}
				Function_79(Local_0);
				bLocal_457 = false;
				break;
			
			case 0x00000003:
				bLocal_460 = LAUNCH_NEW_SCRIPT_WITH_ARGS("PuntaOrgulloVol", &iScriptParam_0, 2, 0);
				Function_78(&Global_6810, &Global_7947, iScriptParam_0);
				iLocal_405 = 5;
				bLocal_457 = false;
				break;
			
			case 0x00000005:
				if (Function_77(&Global_6810, &Global_7947, iScriptParam_0))
				{
					iLocal_405 = 4;
					bLocal_457 = false;
				}
				else
				{
					bLocal_457 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_76(&(Global_29008[iScriptParam_0]), 16))
				{
					iLocal_405 = 6;
				}
				bLocal_457 = false;
				break;
			
			case 0x00000006:
				Function_74(0, &uLocal_364, Local_0, -3679,491f, 42,8246f, 2107,083f, -3680,329f, 42,74f, 2115,949f, -3661,467f, 42,165f, 2152,03f, -3661,467f, 42,165f, 2152,03f, -3640,249f, 42,74f, 2104,202f, -3677,26f, 42,74f, 2107,369f);
				Function_74(1, &uLocal_364, Local_0, -3679,491f, 42,8246f, 2107,083f, -3680,329f, 42,74f, 2115,949f, -3661,467f, 42,165f, 2152,03f, -3661,467f, 42,165f, 2152,03f, -3640,249f, 42,74f, 2104,202f, -3677,26f, 42,74f, 2107,369f);
				Function_68(&Global_6810, &Global_7947, &uLocal_364, Global_6289, iScriptParam_0);
				Function_63(4, Local_13.f_1400, Local_13.f_612, 0, 0, 0, Local_0.f_32);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_13, "punv_player_house")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_13, "punv_player_house"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_13, "punv_player_house"));
				}
				else
				{
					LOG_ERROR("PUN: Cannot find punv_player_house to restrict players room");
				}
				Function_83(&(Global_29008[iScriptParam_0]), 8);
				if (Function_76(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_62(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_405 = 10;
				}
				else
				{
					iLocal_405 = 7;
				}
				bLocal_457 = false;
				break;
			
			case 0x00000007:
				Function_48(iScriptParam_0);
				iLocal_405 = 8;
				bLocal_457 = false;
				break;
			
			case 0x00000008:
				Function_47(1, Global_30685[0], -4355,349f, 30,16f, 4384,089f);
				if (!Function_46(&Global_30685))
				{
					Function_42(StackVal, 3, 1.0f, 0, Local_0, !Function_46(&Global_30685));
					Function_41(64);
					Function_37(1, 10, 6, 0, 3);
				}
				Function_83(&(Global_29008[iScriptParam_0]), 512);
				iLocal_405 = 9;
				bLocal_457 = false;
				break;
			
			case 0x00000009:
				if (!Function_46(&Global_30685))
				{
					Function_35(Local_0, iScriptParam_0);
				}
				Global_29004 = 1;
				Function_83(&(Global_29008[iScriptParam_0]), 4);
				Function_34("Finished Initializing PuntaOrgullo", 5.0f);
				iLocal_405 = 10;
				bLocal_457 = false;
				iLocal_459 = 0;
				break;
			
			case 0x0000000A:
				if (!iLocal_459)
				{
					if (IS_LAYOUTREF_VALID(Global_30616))
					{
						bVar1 = FIND_OBJECT_IN_LAYOUT(Global_30616, "f_playerHorse");
						if (IS_OBJECT_VALID(bVar1))
						{
							vVar2 = { 0.0f, 0.0f, 0.0f };
							GET_OBJECT_POSITION(bVar1, &vVar2);
							iLocal_459 = Function_31(StackVal, StackVal, vVar2, 0, 0);
							Function_30(StackVal, StackVal, vVar2, 1, &bLocal_462);
						}
					}
				}
				else if (!IS_GRINGO_VALID(bLocal_462))
				{
					iLocal_459 = 0;
				}
				if (!Function_46(&Global_30685))
				{
					if (iLocal_458)
					{
						iLocal_458 = 0;
						iLocal_405 = 8;
						bLocal_457 = false;
					}
				}
				else
				{
					iLocal_458 = 1;
				}
				if (Function_22(0))
				{
					if (!IS_SCRIPT_VALID(iLocal_461))
					{
						bLocal_461 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_406, 51, 0);
					}
				}
				if (Function_76(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_405 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_457);
	}
	Function_21(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_11(&Global_6810, &Global_7947, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_62(&(Global_29008[iScriptParam_0]), 32);
	Function_62(&(Global_29008[iScriptParam_0]), 64);
	Function_62(&(Global_29008[iScriptParam_0]), 8);
	Function_62(&(Global_29008[iScriptParam_0]), 512);
	Function_62(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_460))
	{
		TERMINATE_SCRIPT(bLocal_460);
	}
	Function_34("Unloaded PuntaOrgullo", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x595 / 1429
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x5CB / 1483
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x5ED / 1517
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x603 / 1539
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x619 / 1561
{
	Function_6(&Local_13 + 4);
	RELEASE_LAYOUT_REF(Local_13);
	return;
}

void Function_6(int iParam0) //Position: 0x62B / 1579
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_7(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x651 / 1617
{
	if (Function_9(uParam0[iParam13], 4))
	{
		if (Function_9(uParam0[iParam13], 1))
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
			Function_8(uParam0[iParam13], 1);
			Function_8(uParam0[iParam13], 2);
			Function_8(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x77F / 1919
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x799 / 1945
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x7B6 / 1974
{
	Function_6(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7C8 / 1992
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	if (Function_76(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
		Function_62(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_18(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_18(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_17(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_18(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_17(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_76(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_16(2) || Function_76(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2) && !Function_18(uParam0[iVar02], 4))
		{
			Function_12(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_18(uParam0[iVar02], 2) && !Function_18(uParam0[iVar02], 4))
			{
				iVar2++;
			}
			else
			{
				iVar3++;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar5 = GET_OBJECTSET_FROM_OBJECT(bVar4);
		if (IS_OBJECTSET_VALID(bVar5))
		{
			iVar0 = 0;
			while (GET_OBJECTSET_SIZE(bVar5) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar5));
				CLEAN_OBJECTSET(bVar5);
			}
			DESTROY_OBJECTSET(bVar5);
		}
		if (StackVal && !(((iVar2 != 0 && iVar3 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_83(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9B3 / 2483
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_15(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_18(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_18(uParam0[iParam22], 1) && !bParam3)
	{
		Function_15(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xB02 / 2818
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

int Function_14(int iParam0) //Position: 0xB2D / 2861
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_15(var uParam0, int iParam1) //Position: 0xB61 / 2913
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xB70 / 2928
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xB8C / 2956
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(var uParam0, int iParam1) //Position: 0xBA3 / 2979
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0xBBF / 3007
{
	if (!Function_4(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_30640[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_30640[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_30640[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_30658[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_30640[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_30693[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_30658[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_30658[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_30658[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_30658[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_30668[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_30668[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_30668[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_30679[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_30679[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_30685[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_30685[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_30685[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_30693[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_30693[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_30693[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_30707[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_30707[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_30707[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_30707[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_30723[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_30723[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_30723[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_30717[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_30717[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_30717[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_30628[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_30628[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_30628[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_30628[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_30633[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_30633[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_30633[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_30637[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_30637[0])
	{
		return "GreatPlains";
	}
	return "";
}

bool Function_20() //Position: 0x106D / 4205
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_21(int iParam0) //Position: 0x1076 / 4214
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_29155[iParam010] == Global_30621[0])
	{
		STREAMING_EVICT_ACTOR(1177, 4294967295);
	}
	else if (Global_29155[iParam010] == Global_30621[1])
	{
		STREAMING_EVICT_ACTOR(1179, 4294967295);
	}
	else if (Global_29155[iParam010] == Global_30621[2])
	{
		STREAMING_EVICT_ACTOR(1178, 4294967295);
	}
	return;
}

bool Function_22(int iParam0) //Position: 0x10E1 / 4321
{
	if (!IS_LATER_THAN(GET_TIME_OF_DAY(), Function_29()))
	{
		return 0;
	}
	if (Global_63399 != 32 || Global_63399 != 1)
	{
		return 0;
	}
	if (Global_3403)
	{
		return 0;
	}
	if (Global_3404)
	{
		return 0;
	}
	if (Function_27())
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (Function_25(0) == 0)
		{
			return 0;
		}
	}
	if (!Function_24(0))
	{
		return 0;
	}
	if (Function_20())
	{
		return 0;
	}
	if (Global_3391)
	{
		return 0;
	}
	if (Function_23(1, 2, 1, 1))
	{
		return 0;
	}
	if (Global_26361.f_56 <= GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	return 1;
}

bool Function_23(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1164 / 4452
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

bool Function_24(int iParam0) //Position: 0x1208 / 4616
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_25965[iParam0];
}

int Function_25(int iParam0) //Position: 0x1223 / 4643
{
	if (iParam0 == 1)
	{
		if (Global_3386 == 1)
		{
			return 0;
		}
	}
	if (Global_3386 == 0)
	{
		return 0;
	}
	if (Global_29006 == Global_30640[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30717[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30668[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30658[1])
	{
		return 1;
	}
	if (Global_29006 == Global_30685[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30723[1])
	{
		return 1;
	}
	if (Global_29006 == Global_30693[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30707[1])
	{
		if (!Function_26(Global_30707[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_26(bool bParam0) //Position: 0x12D7 / 4823
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_76(&(Global_29008[bParam0]), 2048);
}

bool Function_27() //Position: 0x12F5 / 4853
{
	return Function_28(StackVal, 1);
}

int Function_28(var uParam0, bool bParam1) //Position: 0x1304 / 4868
{
	return (uParam0 && bParam1) == 0;
}

var Function_29() //Position: 0x1311 / 4881
{
	return StackVal;
}

void Function_30(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x131C / 4892
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	if (bParam3)
	{
		*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	}
	else
	{
		*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
	}
}

bool Function_31(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x13CE / 5070
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_33(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam3)
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[0], 1);
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[1], 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_32(uVar0[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar4) && !bVar4 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar4);
			}
			GRINGO_ENABLE_SPAWN(uVar0[0], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[0], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_32(uVar0[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar5) && !bVar5 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar5);
			}
			GRINGO_ENABLE_SPAWN(uVar0[1], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[1], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_32(bool bParam0, bool bParam1) //Position: 0x152F / 5423
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x153C / 5436
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

void Function_34(bool bParam0, float fParam1) //Position: 0x15E6 / 5606
{
	if (!Function_16(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_35(bool bParam0, bool bParam1) //Position: 0x1624 / 5668
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_36(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_20())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x171E / 5918
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x172B / 5931
{
	if (Global_26361 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_26361, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_26376 = Global_26361;
	Global_26376.f_4 = StackVal;
	Global_26376.f_8 = StackVal;
	Global_26376.f_12 = Global_26361.f_12;
	Global_26376.f_16 = Global_26361.f_16;
	Global_26376.f_20 = Global_26361.f_20;
	Global_26376.f_24 = Global_26361.f_24;
	Global_26376.f_32 = Global_26361.f_32;
	Global_26376.f_40 = Global_26361.f_40;
	Global_26376.f_44 = Global_26361.f_44;
	Global_26361.f_8 = uParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = uParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_38();
	}
	if (iParam1 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam1, 0);
	}
	if (iParam2 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam2, 0);
	}
}

void Function_38() //Position: 0x180F / 6159
{
	int iVar0;
	
	Global_26960 = Function_39(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_39(int iParam0) //Position: 0x185D / 6237
{
	if (!Function_40(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_40(int iParam0) //Position: 0x1875 / 6261
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_41(bool bParam0) //Position: 0x188A / 6282
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

void Function_42(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x189D / 6301
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = uParam1;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_45();
	}
	if (bParam5)
	{
		Function_43(1048576);
	}
}

void Function_43(int iParam0) //Position: 0x19B0 / 6576
{
	Function_44(&Global_28842, iParam0);
	return;
}

void Function_44(var uParam0, var uParam1) //Position: 0x19BE / 6590
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_45() //Position: 0x19D9 / 6617
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_43(16384);
	}
	return;
}

bool Function_46(int iParam0) //Position: 0x19F5 / 6645
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_4((*iParam0)[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_29008[(*iParam0)[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_47(int iParam0, var uParam1, vector3 vParam2) //Position: 0x1A42 / 6722
{
	if (!Function_40(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_26316[iParam0] = uParam1;
	*(&Global_26316 + 16[iParam03]) = { StackVal, StackVal, vParam2 };
}

void Function_48(int iParam0) //Position: 0x1AA4 / 6820
{
	switch (Global_30619)
	{
		case 0x00000000:
			Function_61(iParam0);
			break;
		
		case 0x00000001:
			Function_61(iParam0);
			Function_56(iParam0);
			break;
		
		case 0x00000002:
			Function_56(iParam0);
			break;
		
		case 0x00000003:
			break;
	}
	if (!Global_3365)
	{
		Function_56(iParam0);
		Function_61(iParam0);
	}
	Function_52(7, 2, 0, 0, 50, 2, 0, 0, 4, iParam0, "$/content/Ambient/Roaming/event_donkey_lead", 31, 2, 185.0f, 8, 55, 0);
	Function_51(&Global_17483[775] + 120, 1, 3.0f, 112, 4294967295);
	Function_50(&Global_17483[775] + 120, -5.0f, 2);
	Function_49(&Global_17483[775] + 120);
	return;
}

void Function_49(int iParam0) //Position: 0x1B70 / 7024
{
	iParam0->f_16 = 1;
	return;
}

void Function_50(int iParam0, float fParam1, int iParam2) //Position: 0x1B7B / 7035
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_51(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1B91 / 7057
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x1BB7 / 7095
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_53(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_53(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x1BF9 / 7161
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075][0] = iParam2;
	Global_17483[iParam075][1] = iParam3;
	Global_17483[iParam075][2] = iParam4;
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
	(*&Global_17483[iParam075] + 32)[0] = (Global_17483[iParam075][0] - (*&Global_17483[iParam075] + 16)[0]);
	(*&Global_17483[iParam075] + 32)[1] = (Global_17483[iParam075][1] - (*&Global_17483[iParam075] + 16)[1]);
	(*&Global_17483[iParam075] + 32)[2] = (Global_17483[iParam075][2] - (*&Global_17483[iParam075] + 16)[2]);
	Global_17483[iParam075].f_76 = uParam1;
	Global_17483[iParam075].f_120 = uParam5;
	(&Global_17483[iParam075] + 120)->f_4 = iParam6;
	(&Global_17483[iParam075] + 120)->f_8 = uParam13;
	Global_17483[iParam075].f_80 = uParam7;
	Global_17483[iParam075].f_84 = uParam8;
	Global_17483[iParam075].f_92 = 4294967295;
	Global_17483[iParam075].f_88 = uParam15;
	Global_17483[iParam075].f_96 = GET_ASSET_ID(cParam9, 4);
	Global_17483[iParam075].f_100 = uParam10;
	Global_17483[iParam075].f_104 = uParam11;
	Global_17483[iParam075].f_72 = uParam12;
	(&Global_17483[iParam075] + 120)->f_128 = 0;
	strcpy(&Global_17483[iParam075] + 120 + 24, "", 8);
	(&Global_17483[iParam075] + 120 + 24)->f_8 = 50.0f;
	(&Global_17483[iParam075] + 120 + 24)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120)->f_60 = 1;
	(&Global_17483[iParam075] + 120 + 60)->f_4 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_8 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_16 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_24 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_32 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_28 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_36 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_40 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_44 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_52 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_48 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_56 = 0.0f;
	(&Global_17483[iParam075] + 120)->f_120 = 0;
	Global_63398 = 30.0f;
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(true, false, 0, 0);
		if (!Global_3365)
		{
			if (Global_3420)
			{
				bVar2 = false;
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_55(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_54(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_55(bParam14 * 60);
	ADD_TIME(&uVar0, 0, false, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_54(int iParam0, int iParam1) //Position: 0x1F89 / 8073
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_55(int iParam0) //Position: 0x1FAA / 8106
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_56(int iParam0) //Position: 0x1FC0 / 8128
{
	Function_52(28, 2, 25, 4294967146, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_aftermath", 63, 2, 180.0f, 8, 55, 0);
	Function_51(&Global_17483[2875] + 120, 1, 9.0f, 64, 752);
	Function_60(&Global_17483[2875] + 120, 20.0f);
	Function_59(&Global_17483[2875] + 120, 5.0f);
	Function_58(&Global_17483[2875] + 120, 12.0f, 5.0f);
	Function_57(&Global_17483[2875] + 120, 0,4f, 8.0f);
	Function_50(&Global_17483[2875] + 120, -4.0f, 2);
	Function_49(&Global_17483[2875] + 120);
	return;
}

void Function_57(int iParam0, float fParam1, int iParam2) //Position: 0x2096 / 8342
{
	(iParam0 + 60)->f_52 = fParam1;
	(iParam0 + 60)->f_56 = iParam2;
	return;
}

void Function_58(int iParam0, float fParam1, int iParam2) //Position: 0x20AC / 8364
{
	(iParam0 + 60)->f_44 = fParam1;
	(iParam0 + 60)->f_48 = iParam2;
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x20C2 / 8386
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_60(int iParam0, int iParam1) //Position: 0x20D0 / 8400
{
	(iParam0 + 60)->f_20 = iParam1;
	return;
}

void Function_61(int iParam0) //Position: 0x20DE / 8414
{
	Function_52(30, 2, 50, 4294967196, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_execution", 63, 2, 180.0f, 8, 55, 0);
	Function_51(&Global_17483[3075] + 120, 2, 5.0f, 96, 752);
	Function_60(&Global_17483[3075] + 120, 32.0f);
	Function_59(&Global_17483[3075] + 120, 5.0f);
	Function_58(&Global_17483[3075] + 120, 19,9f, 8.0f);
	Function_57(&Global_17483[3075] + 120, 0,4f, 4.0f);
	Function_50(&Global_17483[3075] + 120, 0.0f, 4);
	Function_49(&Global_17483[3075] + 120);
	return;
}

void Function_62(var uParam0, int iParam1) //Position: 0x21AC / 8620
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_63(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x21C3 / 8643
{
	var uVar0;
	bool bVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_67(bParam1, bParam2);
	if (!Function_66(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_65(bParam4, 0);
		}
		else
		{
			Function_64(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_65(bParam5, 0);
		}
		else
		{
			Function_64(bParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		Global_16537[iParam021].f_80 = bParam1;
		if (Global_16537[iParam021].f_40 != 3 || !Global_3365)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), true);
			DECOR_SET_BOOL(bParam1, "SavingAtBedAllowed", true);
		}
		else
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), false);
			if (DECOR_CHECK_EXIST(bParam1, "SavingAtBedAllowed"))
			{
				DECOR_REMOVE(bParam1, "SavingAtBedAllowed");
			}
		}
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		GET_OBJECT_POSITION(bParam6, &uVar0);
		bVar3[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar0, 3.0f, 0);
		bVar3[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uVar0, 3.0f, 0);
		if (IS_GRINGO_VALID(bVar3[0]))
		{
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_32(bVar3[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar6) && !bVar6 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar6, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar6, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar6);
			}
			GRINGO_ENABLE_SPAWN(bVar3[0], 0);
		}
		if (IS_GRINGO_VALID(bVar3[1]))
		{
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_32(bVar3[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar7) && !bVar7 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar7, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar7, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar7);
			}
			GRINGO_ENABLE_SPAWN(bVar3[1], 0);
		}
		if (Global_16537[iParam021].f_40 == 3)
		{
			if (DECOR_CHECK_EXIST(bParam6, "PlayerHouse_NoHorse"))
			{
				DECOR_REMOVE(bParam6, "PlayerHouse_NoHorse");
			}
		}
		else
		{
			DECOR_SET_BOOL(bParam6, "PlayerHouse_NoHorse", true);
		}
	}
	Global_16537[iParam021].f_68 = bParam4;
	Global_16537[iParam021].f_72 = bParam5;
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_56))
	{
		DESTROY_OBJECT(Global_16537[iParam021].f_56);
		Global_16537[iParam021].f_56 = "";
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_60))
	{
		DESTROY_OBJECT(Global_16537[iParam021].f_60);
		Global_16537[iParam021].f_60 = "";
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Global_16537[iParam021].f_64))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iParam021].f_64);
		Global_16537[iParam021].f_64 = "";
	}
	if (!iParam0 != 1)
	{
		GET_OBJECT_POSITION(bParam2, &(Global_16537[iParam021]));
	}
	Global_16537[iParam021].f_12 = GET_OBJECT_HEADING(bParam2);
	GET_OBJECT_POSITION(bParam3, &Global_16537[iParam021] + 16);
	Global_16537[iParam021].f_76 = bParam6;
}

void Function_64(bool bParam0, bool bParam1) //Position: 0x2556 / 9558
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

void Function_65(bool bParam0, bool bParam1) //Position: 0x25AA / 9642
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

bool Function_66(int iParam0) //Position: 0x25FB / 9723
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_67(bool bParam0, bool bParam1) //Position: 0x2611 / 9745
{
	if (!IS_OBJECT_VALID(bParam1))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Flag passed!");
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Bad Gringo passed!");
		return 0;
	}
	if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bParam0), "nPlayerUse", "MyRestartFlag", bParam1))
	{
		return 1;
	}
	LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: falied to update bed gringo - does it have a PlayerUse and MyRestartFlag???");
	return 0;
}

void Function_68(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x276B / 10091
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_76(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_69(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
			{
				iVar1++;
			}
			else
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	if (StackVal == 3)
	{
		return;
	}
	if (iVar1 >= 0)
	{
		Function_62(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_83(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_69(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x281D / 10269
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_76(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(uParam0, 2))
	{
		return 1;
	}
	if (Function_18(uParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, false))
		{
			return 0;
		}
	}
	if (StackVal == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_29155[iParam510] + 20, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		uParam1->f_8 = Function_72(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_71(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(uParam0, 4);
	}
	Function_70(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_70(bool bParam0, int iParam1) //Position: 0x2988 / 10632
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_71(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_71(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_71(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_71(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_71(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_71(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_71(vector3 vParam0) //Position: 0x2AC4 / 10948
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_72(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2ADC / 10972
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

var Function_73() //Position: 0x2BF5 / 11253
{
	float fVar0;
	
	return fVar0;
}

void Function_74(int iParam0, var uParam1, bool bParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, vector3 vParam12, vector3 vParam15, vector3 vParam18) //Position: 0x2BFD / 11261
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_75(StackVal, StackVal, vParam3, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam3);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, vParam6, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam6);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, vParam9, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam9);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, vParam12, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam12);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, vParam15, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam15);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, vParam18, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam18);
		PRINTNL();
	}
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam3 };
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam6 };
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam9 };
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam12 };
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam15 };
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam18 };
	uParam1[bVar020]->f_72 = bParam2;
}

bool Function_75(vector3 vParam0, vector3 vParam3) //Position: 0x2EA4 / 11940
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_76(var uParam0, int iParam1) //Position: 0x2ED1 / 11985
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_77(var uParam0, var uParam1, int iParam2) //Position: 0x2EED / 12013
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_20())
	{
		return 1;
	}
	if (Function_76(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_19(iParam2), 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_18(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_18(uParam0[iVar02], 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED((*uParam1)[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_78(var uParam0, var uParam1, int iParam2) //Position: 0x2FB9 / 12217
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	if (!Function_76(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_19(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
			Function_83(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_15(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_15(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

int Function_79(bool bParam0) //Position: 0x308F / 12431
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	char* cVar13[32];
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar7 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar7, 12);
		ITERATE_ON_PARTIAL_NAME(bVar7, "nCampfire0");
		bVar0 = START_OBJECT_ITERATOR(bVar7);
		while (IS_OBJECT_VALID(bVar0))
		{
			bVar8 = RAND_INT_RANGE(true, 10000) > 2750;
			bVar9 = (((bVar8 || DECOR_CHECK_EXIST(bVar0, "guero")) || DECOR_CHECK_EXIST(bVar0, "always")) || Global_3370);
			bVar10 = Function_20();
			bVar11 = (Function_81() && !Function_80(1, 1));
			if (bVar9 && !bVar10)
			{
			}
			else if ((bVar10 && Function_81()) && DECOR_CHECK_EXIST(bVar0, "MP_ONLY"))
			{
			}
			else if (bVar10 && !bVar11)
			{
				bVar12 = GET_GRINGO_FROM_OBJECT(bVar0);
				if (IS_GRINGO_VALID(bVar12))
				{
					GRINGO_ALLOW_ACTIVATION(bVar12, false);
				}
			}
			else
			{
				GET_OBJECT_POSITION(bVar0, &vVar1);
				GET_OBJECT_ORIENTATION(bVar0, &uVar4);
				strcpy(&cVar13, "p", 32);
				stradd(&cVar13, GET_OBJECT_NAME(bVar0), 32);
				CREATE_POINT_IN_LAYOUT(bParam0, &cVar13, vVar1, 0.0f, 0.0f, 0.0f);
				DESTROY_OBJECT(bVar0);
			}
			bVar0 = OBJECT_ITERATOR_NEXT(bVar7);
		}
		DESTROY_ITERATOR(bVar7);
		return 1;
	}
	LOG_ERROR("District layout isn't valid can't setup campfires");
	return 0;
}

bool Function_80(bool bParam0, bool bParam1) //Position: 0x31D8 / 12760
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_81() //Position: 0x31F8 / 12792
{
	if (Function_20())
	{
		return (Function_82() != 1 || Function_82() != 0);
	}
	return 0;
}

int Function_82() //Position: 0x3211 / 12817
{
	return Global_79349.f_16;
}

void Function_83(var uParam0, int iParam1) //Position: 0x321D / 12829
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_84() //Position: 0x322C / 12844
{
	bool bVar0;
	
	Function_92(3, 3);
	bVar0 = bVar0;
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/campfire01_bad", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/campfire03_law", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/riverwash", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sleeping", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_5", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/campfire01_law", 1, 0);
	Function_90(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	if (!Function_85(&Local_13 + 4))
	{
		return 0;
	}
	Local_13 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(Local_13))
	{
		Local_13 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	*(&Local_13 + 476) = { -3568f, 10,03922f, 4690,101f };
	*(&Local_13 + 476 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_13.f_500 = CREATE_POINT_IN_LAYOUT(Local_13, "punf_bhint", -3568f, 10,03922f, 4690,101f, 0.0f, 0.0f, 0.0f);
	*(&Local_13 + 504) = { -3385,052f, 55,49248f, 4743,046f };
	*(&Local_13 + 504 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_13.f_528 = CREATE_POINT_IN_LAYOUT(Local_13, "punf_bhint1", -3385,052f, 55,49248f, 4743,046f, 0.0f, 0.0f, 0.0f);
	*(&Local_13 + 532) = { -3858,618f, 7,561752f, 4324,156f };
	*(&Local_13 + 532 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_13.f_556 = CREATE_POINT_IN_LAYOUT(Local_13, "punf_bhint2", -3858,618f, 7,561752f, 4324,156f, 0.0f, 0.0f, 0.0f);
	*(&Local_13 + 560) = { -2719,469f, 56,13536f, 4626,306f };
	*(&Local_13 + 560 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_13.f_584 = CREATE_POINT_IN_LAYOUT(Local_13, "punf_bhint4", -2719,469f, 56,13536f, 4626,306f, 0.0f, 0.0f, 0.0f);
	*(&Local_13 + 588) = { -3838,222f, 2,936056f, 4224,813f };
	*(&Local_13 + 588 + 12) = { 0.0f, 9,896287f, 0.0f };
	Local_13.f_612 = CREATE_POINT_IN_LAYOUT(Local_13, "player_save_flag_PUC", -3838,222f, 2,936056f, 4224,813f, 0.0f, 9,896287f, 0.0f);
	*(&Local_13 + 616) = { -3361,005f, 57,105f, 4753,646f };
	*(&Local_13 + 616 + 12) = { 0.0f, 71,122f, 0.0f };
	Local_13.f_640 = CREATE_POINT_IN_LAYOUT(Local_13, "punf_bhint5", -3361,005f, 57,105f, 4753,646f, 0.0f, 71,122f, 0.0f);
	*(&Local_13 + 644) = { -3387,089f, 56,047f, 4760,838f };
	*(&Local_13 + 644 + 12) = { 0.0f, 66,78f, 0.0f };
	Local_13.f_668 = CREATE_POINT_IN_LAYOUT(Local_13, "punf_bhint6", -3387,089f, 56,047f, 4760,838f, 0.0f, 66,78f, 0.0f);
	*(&Local_13 + 672) = { -3342,636f, 60,009f, 4761,252f };
	*(&Local_13 + 672 + 12) = { 0.0f, 80,667f, 0.0f };
	Local_13.f_696 = CREATE_POINT_IN_LAYOUT(Local_13, "pltf_bhtreas", -3342,636f, 60,009f, 4761,252f, 0.0f, 80,667f, 0.0f);
	Local_13.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker1", "Locked_Footlocker", -3544,657f, 14,49005f, 4673,083f, 0.0f, -493,7166f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_700, "scrap", true);
	Local_13.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire07", "Campfire01", -3162,487f, 5,701304f, 4001,499f, 0.0f, 170,011f, 0.0f);
	Local_13.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire09", "Campfire05", -4024,297f, 4,000141f, 4094,753f, 0.0f, 180,8559f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_708, "MP_ONLY", true);
	Local_13.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire010", "Campfire03", -4234,257f, 12,04705f, 3993,879f, 0.0f, 141,0463f, 0.0f);
	Local_13.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire011", "Campfire01_bad", -4453,055f, 3,011759f, 3922,932f, 0.0f, 184,9782f, 0.0f);
	Local_13.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire05", "Campfire05", -4569,796f, 3,011755f, 3990,204f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_720, "MP_ONLY", true);
	Local_13.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire013", "Campfire03_bad", -4426,577f, 2,007832f, 4030,568f, 0.0f, 0.0f, 0.0f);
	Local_13.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire016", "Campfire05", -4011,23f, 27,1059f, 4608,542f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_728, "MP_ONLY", true);
	Local_13.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire017", "Campfire04", -4298,417f, 20,33175f, 4887,738f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_732, "MP_ONLY", true);
	Local_13.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire018", "Campfire02", -4463,917f, 18,89766f, 4799,959f, 0.0f, 0.0f, 0.0f);
	Local_13.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire019", "Campfire05", -4859,982f, 71,27844f, 4734,235f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_740, "MP_ONLY", true);
	Local_13.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire021", "Campfire03_law", -4420,074f, 17,06668f, 4707,93f, 0.0f, 0.0f, 0.0f);
	Local_13.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire03", "Campfire01_bad", -4602,909f, 34,13333f, 4676,658f, 0.0f, 0.0f, 0.0f);
	Local_13.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire023", "Campfire03", -3106,648f, 34,13283f, 4616,734f, 0.0f, 0.0f, 0.0f);
	Local_13.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire024", "Campfire01_bad", -3300,361f, 39,15295f, 4631,043f, 0.0f, 0.0f, 0.0f);
	Local_13.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire026", "Campfire05", -4102,554f, 25,09805f, 4641,447f, 0.0f, 0.0f, 0.0f);
	Local_13.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire027", "Campfire03_bad", -3944f, 27,10707f, 4767,612f, 0.0f, 0.0f, 0.0f);
	Local_13.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire031", "Campfire05", -4741,271f, 54,21176f, 4761,272f, 0.0f, 0.0f, 0.0f);
	Local_13.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire032", "Campfire02", -4552.0f, 17,12078f, 4744f, 0.0f, 0.0f, 0.0f);
	Local_13.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", -4632,535f, 11,04314f, 4158,549f, 0.0f, 0.0f, 0.0f);
	Local_13.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", -4426,68f, 9,035282f, 4084.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", -4493,135f, 31,7201f, 4356,126f, 0.0f, 92,51361f, 0.0f);
	Local_13.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", -4558,406f, 28,35676f, 4676f, 0.0f, 0.0f, 0.0f);
	Local_13.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", -4805,758f, 56,31878f, 4690,146f, 0.0f, 0.0f, 0.0f);
	Local_13.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", -4668f, 37,131f, 4772f, 0.0f, 0.0f, 0.0f);
	Local_13.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", -4364,523f, 38,22166f, 4939,899f, 0.0f, 0.0f, 0.0f);
	Local_13.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", -4409,146f, 21,25448f, 4785,146f, 0.0f, 0.0f, 0.0f);
	Local_13.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", -4189,719f, 33,21698f, 4571,824f, 0.0f, 0.0f, 0.0f);
	Local_13.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", -4472,893f, 19,16406f, 4472.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", -4084f, 28,10982f, 4472.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", -4149,149f, 26,06166f, 4640,418f, 0.0f, 0.0f, 0.0f);
	Local_13.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", -4356,042f, 19,05772f, 4866,668f, 0.0f, 0.0f, 0.0f);
	Local_13.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", -3978,189f, 22,98985f, 4722,898f, 0.0f, 0.0f, 0.0f);
	Local_13.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", -3843,246f, 19,07475f, 4624,743f, 0.0f, 0.0f, 0.0f);
	Local_13.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", -3794,123f, 16,16675f, 4523,952f, 0.0f, 0.0f, 0.0f);
	Local_13.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", -3684f, 42,5381f, 4797,563f, 0.0f, 0.0f, 0.0f);
	Local_13.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", -4380,303f, 20,46654f, 4539,749f, 0.0f, 0.0f, 0.0f);
	Local_13.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", -3656,912f, 16,05293f, 4323,089f, 0.0f, 0.0f, 0.0f);
	Local_13.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", -4185,621f, 26,89562f, 4823,349f, 0.0f, 0.0f, 0.0f);
	Local_13.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear20", "Player_Herb_PricklyPear", -4076,728f, 8,020976f, 4300.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear21", "Player_Herb_PricklyPear", -3381,186f, 41,79821f, 4516.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear22", "Player_Herb_PricklyPear", -3293,425f, 24,08786f, 4250,755f, 0.0f, 0.0f, 0.0f);
	Local_13.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear23", "Player_Herb_PricklyPear", -3163,528f, 12,40064f, 4184,124f, 0.0f, 0.0f, 0.0f);
	Local_13.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear24", "Player_Herb_PricklyPear", -3914,963f, 6,85247f, 4232,754f, 0.0f, 0.0f, 0.0f);
	Local_13.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear25", "Player_Herb_PricklyPear", -4341,831f, 10,03922f, 3941,085f, 0.0f, 0.0f, 0.0f);
	Local_13.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear26", "Player_Herb_PricklyPear", -3491,775f, 39,79387f, 4621,221f, 0.0f, 0.0f, 0.0f);
	Local_13.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear27", "Player_Herb_PricklyPear", -3763,327f, 11,09543f, 4268,9f, 0.0f, 0.0f, 0.0f);
	Local_13.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear28", "Player_Herb_PricklyPear", -4177,569f, 19,92033f, 4230,45f, 0.0f, 0.0f, 0.0f);
	Local_13.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear29", "Player_Herb_PricklyPear", -3877,123f, 7,098152f, 4314,877f, 0.0f, 0.0f, 0.0f);
	Local_13.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear30", "Player_Herb_PricklyPear", -4604,543f, 13,05097f, 4078,206f, 0.0f, 0.0f, 0.0f);
	Local_13.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear31", "Player_Herb_PricklyPear", -4189,641f, 6,694569f, 4036,434f, 0.0f, 0.0f, 0.0f);
	Local_13.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear33", "Player_Herb_PricklyPear", -4286,105f, 19,51563f, 4523,792f, 0.0f, 0.0f, 0.0f);
	Local_13.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear34", "Player_Herb_PricklyPear", -3964f, 26,36402f, 4591,619f, 0.0f, 0.0f, 0.0f);
	Local_13.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear73", "Player_Herb_PricklyPear", -3921,737f, 10,23184f, 4457,994f, 0.0f, 0.0f, 0.0f);
	Local_13.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear74", "Player_Herb_PricklyPear", -3462,793f, 48,18824f, 4724.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear75", "Player_Herb_PricklyPear", -3242,406f, 52,46712f, 4662,22f, 0.0f, 0.0f, 0.0f);
	Local_13.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear76", "Player_Herb_PricklyPear", -3834,247f, 52,18822f, 4872,777f, 0.0f, 0.0f, 0.0f);
	Local_13.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear77", "Player_Herb_PricklyPear", -3600f, 21,08236f, 4282,167f, 0.0f, 0.0f, 0.0f);
	Local_13.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Drink10", "Sit_Ground_Drink", -3566,151f, 10,03922f, 4684,807f, 0.0f, 125,7517f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_932), 0);
	Local_13.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_13, "rand_idle_stand", "rand_idle_stand", -3543,14f, 14,39135f, 4677,602f, 0.0f, 104,3152f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_936), 0);
	Local_13.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Drink2", "Sit_Ground_Drink", -3542,386f, 14,49005f, 4675,354f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_940), 0);
	Local_13.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Drink1", "Sit_Ground_Drink", -3542,094f, 14,49005f, 4673,319f, 0.0f, 136,8575f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_944), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_rand_idle_stand2", "rand_idle_stand", -2748,117f, 46,183f, 4608,924f, 0.0f, 72,66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_rand_idle_stand1", "rand_idle_stand", -2738,463f, 52,114f, 4605,324f, 0.0f, 72,66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "ndiab_Pee1", "Pee", -2732,317f, 55,88308f, 4602,23f, 0.0f, -78,35882f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_stand_guntricks_e_any", "stand_guntricks_e_any", -2721,312f, 56,135f, 4626,071f, 0.0f, -71,04374f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_stand_drunk_throwbottle", "stand_drunk_throwbottle", -2717,047f, 56,13536f, 4626,959f, 0.0f, 28,81129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_stand_lookdistance_w_any", "stand_lookdistance_w_any", -2719,872f, 56,14576f, 4632,723f, 0.0f, -160,4651f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_Pee", "Pee", -2719,947f, 56,14061f, 4619,677f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_rand_idle_stand", "rand_idle_stand", -2732,475f, 54,799f, 4620,533f, 0.0f, 72,66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -2719,381f, 56,136f, 4624,018f, 0.0f, -86,41405f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -2717,162f, 56,13536f, 4622,923f, 0.0f, -199,554f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_Campfire_Tend", "Sit_Ground_Campfire_Tend", -2718,725f, 56,19336f, 4625,808f, 0.0f, -49,80202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_stand", "rand_idle_stand", -2755,338f, 44,574f, 4608,967f, 0.0f, 47,45972f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_Sit_Ground1", "Rand_Idle_Sit_Ground", -2747,982f, 46,58796f, 4617,084f, 0.0f, -261,3201f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_sit_smokediab", "sit_ground_smoke", -2750,69f, 46,5379f, 4619,904f, 0.0f, -279,5391f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_smoking_stand", "smoking_stand", -2713,061f, 57,17479f, 4633,203f, 0.0f, -192,8825f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Diab_Sit_Ground", "Rand_Idle_Sit_Ground", -2730,924f, 55,25158f, 4607,433f, 0.0f, 70,70719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_horse_stay7", "horse_stay", -2717,415f, 46,003f, 4670,128f, 0.0f, -28,21038f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_horse_stay6", "horse_stay", -2728,029f, 48,83f, 4663,372f, 0.0f, -302,0126f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_horse_stay5", "horse_stay", -2744,786f, 47,842f, 4622,784f, 0.0f, -28,21038f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_horse_stay", "horse_stay", -2752,478f, 45,581f, 4613,565f, 0.0f, -302,0126f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_lookdistance_binocs", "look_distance_binocs", -2739,578f, 52,528f, 4609,783f, 0.0f, 120,0453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "diab_lookdistance_binocs1", "look_distance_binocs", -2723,603f, 48,057f, 4670,079f, 0.0f, 120,0453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_diab", "stand_lookdistance_w_any", -2711,862f, 45,174f, 4549,208f, 0.0f, 183,9572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Dia_lookdistance_binocs", "look_distance_binocs", -2751,219f, 41,231f, 4569,213f, 0.0f, 105,7632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Only", "Sit_Ground_Only", -3544,161f, 14,49005f, 4675,211f, 0.0f, -35,80775f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_948), 0);
	Local_13.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_ground_smoke10", "sit_ground_smoke", -3552,318f, 20,33336f, 4707,359f, 0.0f, -96,85366f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_952), 0);
	Local_13.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Drink", "Sit_Ground_Drink", -3550,872f, 20,26141f, 4706,266f, 0.0f, -184,3158f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_956), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_look_distance_binocs2", "look_distance_binocs", -3563,442f, 17,07998f, 4662,798f, 0.0f, 14,69602f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_horse_tend2", "horse_tend", -3569,781f, 10,02471f, 4677,918f, 0.0f, -183,2637f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_horse_stay1", "horse_stay", -3567,08f, 10,039f, 4678,634f, 0.0f, -38,47382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_horse_tend1", "horse_tend", -3585,365f, 10,03922f, 4692,382f, 0.0f, -58,05069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_horse_stay", "horse_stay", -3582,068f, 10,16748f, 4693,933f, 0.0f, -76,20228f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_horse_tend", "horse_tend", -3583,761f, 10,06808f, 4690,108f, 0.0f, -61,44313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_960), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_rand_idle_stand1", "rand_idle_stand", -3546,922f, 14,49005f, 4672,127f, 0.0f, 133,9157f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_sleeping_scripted2", "sleeping_scripted", -3563,274f, 10,108f, 4684,026f, 0.0f, -218,0335f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker5", "Locked_Footlocker", -3839,084f, 2,935274f, 4227,305f, 0.0f, 4,809028f, 0.0f);
	Local_13.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_ground_smoke", "sit_ground_smoke", -3831,97f, 2,137364f, 4213,593f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_968), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pue_horse_stay1", "horse_stay", -3846,59f, 2,616897f, 4220.0f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pue_horse_stay", "horse_stay", -3842,54f, 2,837366f, 4226,175f, 0.0f, -193,8496f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pue_horse_tend", "horse_tend", -3844,865f, 2,973f, 4226,62f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pue_Pee", "Pee", -3850,322f, 4,144f, 4229,261f, 0.0f, 102,0665f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pue_stand_guntrick", "stand_guntricks_e_any", -3834,501f, 2,258546f, 4216,329f, 0.0f, -6,798063f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pue_riverwash", "nriverwash", -3831,051f, 1,483f, 4220,467f, 0.0f, -57,8837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pue_stand_lookdistance", "stand_lookdistance_w_any", -3849,787f, 7,337f, 4240,15f, 0.0f, 270,0022f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pue_window_R", "look_out_window_R", -3839,42f, 2,941082f, 4224,783f, 0.0f, 93,35406f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pue_Sit_Ground", "Rand_Idle_Sit_Ground", -3838,539f, 2,941082f, 4225,021f, 0.0f, 54,31423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pue_sit_docks", "nsit_docks", -3830,538f, 2,177495f, 4213,612f, 0.0f, -135,9579f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_sleeping_scripted1", "sleeping_scripted", -3551,362f, 20,431f, 4709,676f, 0.0f, 13,06262f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_sit_ground_play_harmonica", "sit_ground_play_harmonica", -3549,921f, 20,32929f, 4708,246f, 0.0f, 69,86318f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -3563,03f, 18,60939f, 4708,513f, 0.0f, 136,4816f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_look_distance_binocs1", "look_distance_binocs", -3549,38f, 20,22122f, 4704,918f, 0.0f, 23,99923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_stand_guntricks_e_any", "stand_guntricks_e_any", -3569,209f, 10,03922f, 4686,378f, 0.0f, -62,98453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -3577,605f, 9,625031f, 4667,982f, 0.0f, -9,328076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_Pee", "Pee", -3551,588f, 10,68554f, 4688,082f, 0.0f, -87,17547f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -3567,046f, 10,03922f, 4687,078f, 0.0f, 13,78003f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_smoking_stand", "smoking_stand", -3579,044f, 9,793329f, 4671,625f, 0.0f, -319,5549f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -3568,74f, 10,02699f, 4684,736f, 0.0f, 230,0923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_sleeping_scripted", "sleeping_scripted", -3542,32f, 14,49005f, 4672,359f, 0.0f, -126,5194f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_stand_announce", "stand_announce", -3558,897f, 17,39976f, 4661,43f, 0.0f, -179,4728f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_stand_lookdistance_w_any", "stand_lookdistance_w_any", -3565,633f, 16,92693f, 4663,674f, 0.0f, -11,63906f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sid_look_distance_binocs", "look_distance_binocs", -3555,776f, 18,28032f, 4658,035f, 0.0f, 51,24591f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear78", "Player_Herb_PricklyPear", -3590,427f, 24,09413f, 4297,574f, 0.0f, 0.0f, 0.0f);
	Local_13.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear79", "Player_Herb_PricklyPear", -4140,784f, 30,07766f, 4359,824f, 0.0f, 0.0f, 0.0f);
	Local_13.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear80", "Player_Herb_PricklyPear", -4727,197f, 59,61876f, 4714,125f, 0.0f, -108,8801f, 0.0f);
	Local_13.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear81", "Player_Herb_PricklyPear", -4274,932f, 20,08273f, 4767,003f, 0.0f, 0.0f, 0.0f);
	Local_13.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker3", "Locked_Footlocker", -3341,697f, 60,06153f, 4762,584f, 0.0f, 20,63023f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_horse_stay3", "horse_stay", -3374,934f, 47,48188f, 4702,021f, 0.0f, -18,36461f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_horse_stay2", "horse_stay", -3405,209f, 49,85294f, 4723,533f, 0.0f, 97,535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_smoking_stand2", "smoking_stand", -3368,674f, 56,19841f, 4749,482f, 0.0f, -337,4679f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", -3359,302f, 57,98686f, 4759,069f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_Rand_Idle_Sit_Ground4", "Rand_Idle_Sit_Ground", -3385,947f, 56,12448f, 4761,743f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_lookdistance_binocs5", "look_distance_binocs", -3364,368f, 50,58201f, 4712,998f, 0.0f, 56,20469f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_lookdistance_binocs4", "look_distance_binocs", -3358,165f, 48,05708f, 4680,735f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_stand_lookdistance1", "stand_lookdistance_w_any", -3386,745f, 48,04662f, 4706,654f, 0.0f, 29,63346f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_lookdistance_binocs3", "look_distance_binocs", -3402,552f, 51,57449f, 4734,544f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plta_stand_lookdistance", "stand_lookdistance_w_any", -3397,058f, 48,07362f, 4708,585f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "pun_smoking_stand1", "smoking_stand", -3362,111f, 56,98337f, 4750,522f, 0.0f, -267,2515f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_stand1", "rand_idle_stand", -3367,398f, 55,96766f, 4740,842f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_stand_spit", "stand_spit", -3400,005f, 53,02031f, 4739,182f, 0.0f, 18,25717f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_sit_ground_smoke", "sit_ground_smoke", -3376,3f, 56,40027f, 4746,254f, 0.0f, 61,63646f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_rand_idle_stand", "rand_idle_stand", -3408,065f, 52,341f, 4739,222f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_horse_stay1", "horse_stay", -3398,433f, 55,29071f, 4753,295f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_horse_stay", "horse_stay", -3405,549f, 53,05554f, 4742,302f, 0.0f, 98,06629f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_drunk_throwbottle", "stand_drunk_throwbottle", -3380,9f, 55,83662f, 4741,939f, 0.0f, -17,49117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", -3369,956f, 56,21962f, 4747,671f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_Pee", "Pee", -3390,581f, 55,248f, 4749,821f, 0.0f, -166,7814f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -3367,293f, 56,27127f, 4747,336f, 0.0f, 87,42749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_smoking_stand", "smoking_stand", -3369,253f, 56,20813f, 4743,391f, 0.0f, 87,17111f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_stand_guntricks_e_any", "stand_guntricks_e_any", -3371,387f, 56,2196f, 4746,512f, 0.0f, 24,36719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "plt_look_distance_binocs2", "look_distance_binocs", -3389,051f, 47,53177f, 4700,163f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear82", "Player_Herb_PricklyPear", -4501,43f, 19,14546f, 4487,654f, 0.0f, 0.0f, 0.0f);
	Local_13.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear72", "Player_Herb_PricklyPear", -3306,959f, 39,31733f, 4485,227f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear71", "Player_Herb_PricklyPear", -3294,075f, 6,459073f, 4080f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker", "Locked_Footlocker", -3861,684f, 6,829773f, 4317,187f, 0.0f, -165,349f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -3875,95f, 9,035301f, 4332,05f, 0.0f, -223,8547f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_sleeping1", "sleeping", -3859,652f, 7,0667f, 4320,313f, 0.0f, 116,6932f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_Pee_nospawn", "Pee_nospawn", -3867,383f, 7,484222f, 4281,296f, 0.0f, 425,9995f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_sleeping", "sleeping", -3859,669f, 6,903308f, 4317,758f, 0.0f, -131,6545f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_sit_ground_smoke1", "sit_ground_smoke", -3862,264f, 6,999852f, 4319,712f, 0.0f, -142,6826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -3888,642f, 7,098955f, 4311,407f, 0.0f, 132,3517f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_stand_lookdistance_w_any", "stand_lookdistance_w_any", -3872f, 8,045292f, 4285,055f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_rand_idle_stand", "rand_idle_stand", -3859,487f, 8,505493f, 4293,897f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -3860f, 7,522324f, 4325,883f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_horse_stay2", "horse_stay", -3856,691f, 8,325266f, 4293,951f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_horse_stay1", "horse_stay", -3854,29f, 8,783296f, 4335,07f, 0.0f, 1,794803f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_horse_stay", "horse_stay", -3856,527f, 8,618322f, 4334,046f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nCrT_Yawn2", "stand_yawning_n_any", -3839,57f, 9,503844f, 4315,619f, 0.0f, 300,2774f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_horse_tend1", "horse_tend", -3851,085f, 9,136021f, 4338,731f, 0.0f, -175,3594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_rand_idle_stand1", "rand_idle_stand", -3907,57f, 8,015f, 4308,359f, 0.0f, -120,7614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_look_distance_binocs1", "look_distance_binocs", -3919,962f, 8,015f, 4306,852f, 0.0f, 103,8305f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_horse_tend", "horse_tend", -3852,886f, 8,974073f, 4336,7f, 0.0f, -176,1855f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1008), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT__look_distance_binocs", "look_distance_binocs", -3871,676f, 9,375f, 4305,959f, 0.0f, -224,6903f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -3857,507f, 7,871f, 4307,467f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_horse_stay5", "horse_stay", -3847,016f, 9,325869f, 4338,026f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "CrT_horse_stay4", "horse_stay", -3848,894f, 9,203953f, 4339,044f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear35", "Player_Herb_PricklyPear", -3133,017f, 36,10571f, 4557,55f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear36", "Player_Herb_PricklyPear", -3163,875f, 37,14511f, 4557,292f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear37", "Player_Herb_PricklyPear", -3108f, 35,13727f, 4484,593f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear38", "Player_Herb_PricklyPear", -3116f, 34,13333f, 4440.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear39", "Player_Herb_PricklyPear", -3313,94f, 40,27979f, 4434,933f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear40", "Player_Herb_PricklyPear", -3196f, 38,14905f, 4668,886f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear41", "Player_Herb_PricklyPear", -3116f, 40,15668f, 4684.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear42", "Player_Herb_PricklyPear", -3110,445f, 35,13728f, 4660.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear43", "Player_Herb_PricklyPear", -3282,099f, 40,15684f, 4583,203f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear44", "Player_Herb_PricklyPear", -3312,71f, 38,14905f, 4667,29f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear45", "Player_Herb_PricklyPear", -3387,117f, 44,17185f, 4646,421f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear46", "Player_Herb_PricklyPear", -3436,896f, 22,08629f, 4417,115f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear47", "Player_Herb_PricklyPear", -3395,47f, 41,1608f, 4602,824f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear48", "Player_Herb_PricklyPear", -3550,464f, 6,620461f, 4570,535f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear49", "Player_Herb_PricklyPear", -3873,01f, 18,0706f, 4561,492f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear50", "Player_Herb_PricklyPear", -3860,274f, 15,07009f, 4639,726f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear51", "Player_Herb_PricklyPear", -3720,529f, 12,21378f, 4781,691f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear52", "Player_Herb_PricklyPear", -3906,22f, 27,1059f, 4755,946f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear53", "Player_Herb_PricklyPear", -4028,633f, 34,2771f, 4916.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear54", "Player_Herb_PricklyPear", -4113,239f, 33,12943f, 4933,24f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear55", "Player_Herb_PricklyPear", -4142,28f, 28,91674f, 4837,522f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear56", "Player_Herb_PricklyPear", -4157,844f, 23,29663f, 4739,758f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear57", "Player_Herb_PricklyPear", -4187,375f, 24,64962f, 4735,156f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear58", "Player_Herb_PricklyPear", -4246,079f, 23,09832f, 4833,922f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear59", "Player_Herb_PricklyPear", -4089,535f, 23,56466f, 4705,024f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear60", "Player_Herb_PricklyPear", -4042,739f, 26,21959f, 4665,643f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear61", "Player_Herb_PricklyPear", -3985,936f, 25,14525f, 4650,064f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear62", "Player_Herb_PricklyPear", -3964f, 24,09413f, 4620,622f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear63", "Player_Herb_PricklyPear", -3925,73f, 14,05492f, 4520.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear64", "Player_Herb_PricklyPear", -3896f, 16,05245f, 4513,779f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear65", "Player_Herb_PricklyPear", -3902,233f, 8,031385f, 4477,767f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear66", "Player_Herb_PricklyPear", -3949,548f, 11,5296f, 4456,587f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear67", "Player_Herb_PricklyPear", -4072f, 7,012664f, 4276.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear68", "Player_Herb_PricklyPear", -4032f, 7,883675f, 4240.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear69", "Player_Herb_PricklyPear", -3908,567f, 7,907296f, 4267,709f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_PricklyPear70", "Player_Herb_PricklyPear", -3869,266f, 7,051301f, 4274,734f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls", "Player_Herb_woollyBlueCurls", -3116,625f, 7,027439f, 4040f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls1", "Player_Herb_woollyBlueCurls", -3195,682f, 11,05647f, 4070,123f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls2", "Player_Herb_woollyBlueCurls", -3236,957f, 7,02744f, 4039,739f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls3", "Player_Herb_woollyBlueCurls", -3318,133f, 6,285552f, 4099,07f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls4", "Player_Herb_woollyBlueCurls", -3418,286f, 6,273073f, 4178,574f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls5", "Player_Herb_woollyBlueCurls", -3116,365f, 13,19427f, 4303,721f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls6", "Player_Herb_woollyBlueCurls", -3181,101f, 13,2906f, 4349,328f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls7", "Player_Herb_woollyBlueCurls", -3168f, 11,53559f, 4393,568f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls8", "Player_Herb_woollyBlueCurls", -3328,261f, 39,34695f, 4431,806f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1192 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls9", "Player_Herb_woollyBlueCurls", -3372,252f, 39,11925f, 4463,432f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls10", "Player_Herb_woollyBlueCurls", -3357,001f, 24,09412f, 4357,001f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1200 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls11", "Player_Herb_woollyBlueCurls", -3244.0f, 37,14493f, 4520f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1204 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls12", "Player_Herb_woollyBlueCurls", -3287,507f, 70,34961f, 4733,125f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1208 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls13", "Player_Herb_woollyBlueCurls", -3336f, 39,37475f, 4630,026f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1212 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls14", "Player_Herb_woollyBlueCurls", -3378,919f, 46,0826f, 4685,082f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1216 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls15", "Player_Herb_woollyBlueCurls", -3458,412f, 40,1588f, 4595,002f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1220 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls16", "Player_Herb_woollyBlueCurls", -3482,208f, 40,39444f, 4524,735f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1224 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls17", "Player_Herb_woollyBlueCurls", -3433,55f, 22,08629f, 4419,86f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1228 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls18", "Player_Herb_woollyBlueCurls", -3510,125f, 25,09805f, 4357,875f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1232 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Player_Herb_woollyBlueCurls19", "Player_Herb_woollyBlueCurls", -3473,502f, 7,027458f, 4284.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1236 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker2", "Locked_Footlocker", -4866,375f, 17,067f, 4107,945f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1240 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker4", "Locked_Footlocker", -3454,651f, 7,888914f, 4283,069f, 0.0f, 10,23197f, 0.0f);
	Local_13.f_1244 = CREATE_GRINGO_IN_LAYOUT(Local_13, "treasure_hunting_5", "treasure_hunting_5", -3860,103f, 15,1966f, 4316,584f, 0.0f, 184,057f, 0.0f);
	Local_13.f_1248 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire033", "Campfire01", -4542,765f, 24,39446f, 4651,873f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1252 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire034", "Campfire01", -4684.0f, 21,14939f, 4588f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1256 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire060", "Campfire02", -4040f, 4,0157f, 4105,844f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1260 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire063", "Campfire02", -4103,984f, 34,19405f, 4554,11f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1264 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire062", "Campfire02", -3896f, 7,706976f, 4212.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1268 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire061", "Campfire02", -4012f, 7,707736f, 4200.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1272 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire059", "Campfire02", -4125,93f, 8,087302f, 4234,096f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1276 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire058", "Campfire02", -4212,016f, 19,76294f, 4331,824f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire057", "Campfire02", -4220,016f, 19,44476f, 4403,824f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1284 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire056", "Campfire03", -4132,188f, 27,6606f, 4423,231f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1288 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire055", "Campfire03", -3879,919f, 7,629743f, 4212.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1292 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire054", "Campfire03", -3527,104f, 27,1059f, 4376,896f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1296 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire052", "Campfire03", -3696f, 18,0706f, 4496.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1300 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire051", "Campfire03", -3810,45f, 16,52399f, 4509,55f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1304 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire050", "Campfire03", -3678,991f, 14,46896f, 4360.0f, 0.0f, 16,74681f, 0.0f);
	Local_13.f_1308 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire049", "Campfire03", -3816f, 10,15505f, 4360.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1312 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire048", "Campfire03", -3695,819f, 8,035632f, 4300,293f, 0.0f, 21,46014f, 0.0f);
	Local_13.f_1316 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire047", "Campfire03", -4068f, 9,579922f, 4328.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1320 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire046", "Campfire03", -3860f, 10,03923f, 4352.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1324 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire045", "Campfire03", -4000f, 5,73634f, 4156.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1328 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire044", "Campfire01", -4276,709f, 50,41082f, 4219,306f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1332 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire043", "Campfire01", -4356,738f, 55,46604f, 4216,74f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1336 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire039", "Campfire01", -4308,016f, 39,29932f, 4321,996f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1340 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire038", "Campfire01", -4592,177f, 21,56481f, 4195,824f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1344 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire036", "Campfire01", -4736.0f, 4,015678f, 4208.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1348 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire035", "Campfire01", -4600,016f, 14,11363f, 4399,855f, 0.0f, -84,81538f, 0.0f);
	Local_13.f_1352 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire64", "Campfire01", -4207,466f, 34,63542f, 4519,471f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1356 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire02", "Campfire02", -4606,735f, 14,07416f, 4391,949f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_1356, "MP_ONLY", true);
	Local_13.f_1360 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire030", "Campfire03", -4312,595f, 27,16458f, 4155,245f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1364 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire028", "Campfire02", -3742,653f, 10,62494f, 4260.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1368 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire022", "Campfire01_law", -4549,409f, 20,07076f, 4284,618f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_1368, "MP_ONLY", true);
	Local_13.f_1372 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire020", "Campfire05", -3924,768f, 7,822199f, 4349,599f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1376 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire014", "Campfire02", -4064,623f, 6,84568f, 4248,364f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1380 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire08", "Campfire04", -3881,527f, 7,286815f, 4193,192f, 0.0f, 179,5666f, 0.0f);
	DECOR_SET_BOOL(Local_13.f_1380, "MP_ONLY", true);
	Local_13.f_1384 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire037", "Campfire01", -4728.0f, 5,019634f, 4060.0f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1388 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire040", "Campfire01", -4288.0f, 11,04314f, 3945,51f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1392 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire041", "Campfire01", -4233,28f, 12,14476f, 4005,51f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1396 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Campfire042", "Campfire01", -4242,38f, 15,05889f, 4057,62f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1400 = CREATE_GRINGO_IN_LAYOUT(Local_13, "player_sleep_PUC", "player_sleep_bed_R", -3837,743f, 2,943747f, 4225,485f, 0.0f, -174,3147f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1400), 1);
	return 1;
}

bool Function_85(int iParam0) //Position: 0x91E9 / 37353
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_89();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_88(iParam0[iVar03], 8);
		}
		else if (Function_87())
		{
			iVar1 = 1;
			Function_88(iParam0[iVar03], 8);
		}
		Function_88(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_9(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_88(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
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
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
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
	Function_86();
	return 1;
}

void Function_86() //Position: 0x9564 / 38244
{
	if (!Function_16(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_87() //Position: 0x95A4 / 38308
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

void Function_88(var uParam0, int iParam1) //Position: 0x95CF / 38351
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_89() //Position: 0x95E0 / 38368
{
	if (!Function_16(128))
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

var Function_90(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9622 / 38434
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_91(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_88(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_91(var uParam0, int iParam1, int iParam2) //Position: 0x965A / 38490
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_88(uParam0[iVar03], 4);
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

void Function_92(int iParam0, int iParam1) //Position: 0x971E / 38686
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

bool Function_93(var uParam0, bool bParam1) //Position: 0x9767 / 38759
{
	int iVar0;
	
	iVar0 = Function_95(uParam0);
	if (!Function_94(iVar0))
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

bool Function_94(int iParam0) //Position: 0x97A4 / 38820
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_95(int iParam0) //Position: 0x97BB / 38843
{
	if (!Function_96(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96(int iParam0) //Position: 0x97D5 / 38869
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_97() //Position: 0x97EB / 38891
{
	var uVar0;
	
	Function_92(3, 3);
	uVar0 = uVar0;
	Function_90(&Local_0 + 4, "p_uti_cover2x1x", 0, 0);
	Function_90(&Local_0 + 4, "p_uti_cover1x1x", 0, 0);
	if (!Function_85(&Local_0 + 4))
	{
		return 0;
	}
	Local_0 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	Local_0.f_32 = CREATE_POINT_IN_LAYOUT(Local_0, "f_playerHorse", -3829,98f, 2,74f, 4227,475f, 0.0f, 0.0f, 0.0f);
	Local_0.f_36 = Function_98(Local_0, "cover2x1x0", "p_uti_cover2x1x", -3825,586f, 2,900937f, 4226,143f, 0.0f, 82,24956f, 0.0f, 1);
	Local_0.f_40 = Function_98(Local_0, "cover2x1x1", "p_uti_cover2x1x", -3849,503f, 3,143f, 4213,479f, 0.0f, 77,38024f, 0.0f, 1);
	Local_0.f_44 = Function_98(Local_0, "cover1x1x0", "p_uti_cover1x1x", -3850,03f, 3,715f, 4225,948f, 0.0f, 16,0873f, 0.0f, 1);
	Local_0.f_48 = Function_98(Local_0, "cover1x1x1", "p_uti_cover1x1x", -3850,701f, 3,365f, 4220,66f, 0.0f, 29,73987f, 0.0f, 1);
	return 1;
}

var Function_98(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x99A6 / 39334
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	iParam9 = iParam9;
	return "";
}

void Function_99(bool bParam0, int iParam1) //Position: 0x99D0 / 39376
{
	if (!Function_16(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

void Function_100(int iParam0) //Position: 0x9A0B / 39435
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_29155[iParam010] == Global_30621[0])
	{
		STREAMING_REQUEST_ACTOR(1177, true, false);
	}
	else if (Global_29155[iParam010] == Global_30621[1])
	{
		STREAMING_REQUEST_ACTOR(1179, true, false);
	}
	else if (Global_29155[iParam010] == Global_30621[2])
	{
		STREAMING_REQUEST_ACTOR(1178, true, false);
	}
	return;
}

