//Decompiled with MagicRDR v1.0
//Function Count : 104
//Statics Count : 444
//Natives Count : 160
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<117> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 3;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 4;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 25;
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
	var uLocal_173 = 5;
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
	var uLocal_189 = 5;
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
	var uLocal_205 = 3;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 4;
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
	var uLocal_242 = 21;
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
	var uLocal_306 = 21;
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
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 21;
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
	bool bLocal_422 = false;
	struct<13> Local_423 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_436 = false;
	bool bLocal_437 = false;
	bool bLocal_438 = false;
	bool bLocal_439 = false;
	bool bLocal_440 = false;
	bool bLocal_441 = false;
	bool bLocal_442 = false;
	bool bLocal_443 = false;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_103 = 6;
	Local_114.f_1208 = ADD_SCRIPT_USE_CONTEXT("quit", false, 4, false, 0, 0, 0, 4294967295, 0);
	Local_114.f_1216 = CREATE_LAYOUT("testLayout");
	Function_100(&iLocal_104);
	Function_100(&iLocal_107);
	Function_100(&iLocal_110);
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_103)
		{
			case 0x00000006:
				Function_99(&uLocal_42, 1015, 3, 0);
				Function_99(&uLocal_42, 1018, 3, 0);
				Function_99(&uLocal_42, 1012, 3, 0);
				Function_99(&uLocal_42, 1008, 3, 0);
				Function_99(&uLocal_42, 1078, 3, 0);
				Function_99(&uLocal_42, 976, 3, 0);
				Function_99(&uLocal_42, 980, 3, 0);
				Function_99(&uLocal_42, 1177, 3, 0);
				Function_99(&uLocal_42, 111, 3, 0);
				Function_99(&uLocal_42, 51, 3, 0);
				Function_99(&uLocal_42, 31, 3, 0);
				Function_99(&uLocal_42, 113, 3, 0);
				Function_99(&uLocal_42, 36, 3, 0);
				Function_99(&uLocal_42, 118, 3, 0);
				Function_97();
				Function_95();
				Function_80();
				Function_78();
				Function_77();
				Function_76();
				Function_75();
				Function_74();
				Function_73();
				Function_72();
				Function_71();
				Function_65(1, 0, 0, 0, 0);
				Function_64(0,35f, 0,5f);
				Function_63();
				Function_62();
				if (Function_56(&iLocal_104, 2.0f))
				{
					if (Local_114.f_1220 == 1)
					{
						REPORT_METRICS_PERFORMANCE();
					}
					Function_100(&iLocal_104);
				}
				iLocal_103 = 7;
				break;
			
			case 0x00000007:
				if (Function_50(&uLocal_42))
				{
					Function_49();
					Function_44();
					Function_42(0);
					if (Function_56(&iLocal_104, 2.0f))
					{
						if (Local_114.f_1220 == 1)
						{
							REPORT_METRICS_PERFORMANCE();
						}
						Function_100(&iLocal_104);
					}
					iLocal_103 = 8;
				}
				break;
			
			case 0x00000008:
				if (IS_SCRIPT_USE_CONTEXT_VALID(Local_114.f_1208))
				{
					if (IS_SCRIPT_USE_CONTEXT_PRESSED(Local_114.f_1208))
					{
						RELEASE_SCRIPT_USE_CONTEXT(Local_114.f_1208);
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
					else
					{
						Function_29();
						Function_25();
						Function_24();
						Function_23();
						if (Local_114.f_456 <= 5)
						{
							Function_22();
						}
						if (Local_114.f_460 <= 4)
						{
							Function_21();
						}
						if (Local_114.f_464 <= 3)
						{
							Function_20();
						}
						if (Local_114.f_468 <= 5)
						{
							Function_19();
						}
					}
				}
				if (Function_56(&iLocal_104, 2.0f))
				{
					if (Local_114.f_1220 == 1)
					{
						REPORT_METRICS_PERFORMANCE();
					}
					Function_100(&iLocal_104);
				}
				if (Local_114.f_1224 == 0)
				{
					Function_10();
				}
				break;
		}
		WAIT(false);
	}
	Local_114.f_1200 = 1;
	Function_80();
	Function_7();
	Function_3(&uLocal_42);
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_HELP();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	HUD_CLEAR_SMALL_TEXT();
	Function_2();
	Function_1();
	GUI_CLOSE_WINDOW(bLocal_435);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x264 / 612
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_2() //Position: 0x26F / 623
{
	if (IS_LAYOUTREF_VALID(Local_114.f_1216))
	{
		RELEASE_LAYOUT_OBJECTS(Local_114.f_1216);
		RELEASE_LAYOUT_REF(Local_114.f_1216);
	}
	return;
}

void Function_3(int iParam0) //Position: 0x290 / 656
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_4(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x2B6 / 694
{
	if (Function_6(uParam0[iParam13], 4))
	{
		if (Function_6(uParam0[iParam13], 1))
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
			Function_5(uParam0[iParam13], 1);
			Function_5(uParam0[iParam13], 2);
			Function_5(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x3E4 / 996
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_6(int iParam0, int iParam1) //Position: 0x3FE / 1022
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0x41B / 1051
{
	Function_8(4096);
	return;
}

void Function_8(int iParam0) //Position: 0x427 / 1063
{
	if (Function_9(iParam0, 1) && !Function_9(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_9(var uParam0, bool bParam1) //Position: 0x454 / 1108
{
	return (uParam0 && bParam1) == 0;
}

void Function_10() //Position: 0x461 / 1121
{
	switch (iLocal_113)
	{
		case 0x00000000:
			Local_114.f_1196 = 0;
			Function_18();
			Local_114.f_1200 = 1;
			Function_80();
			Local_114.f_1112 = 0;
			Function_11();
			iLocal_113 = 1;
			break;
		
		case 0x00000001:
			if (Function_56(&iLocal_107, 60.0f))
			{
				iLocal_113 = 2;
				Function_100(&iLocal_107);
			}
			break;
		
		case 0x00000002:
			if (Function_56(&iLocal_110, 3.0f))
			{
				REPORT_METRICS_PERFORMANCE();
				Function_100(&iLocal_110);
			}
			if (Function_56(&iLocal_107, 60.0f))
			{
				Function_100(&iLocal_107);
			}
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_11() //Position: 0x4E8 / 1256
{
	Function_17();
	WAIT(false);
	switch (Local_114.f_1112)
	{
		case 0x00000000:
			Function_13(0);
			Local_114.f_484 = "HUMAN_MODE_DIFFERENT";
			Function_12("HUMAN_MODE_DIFFERENT", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_13(1);
			Local_114.f_484 = "HUMAN_MODE_HALF_SAME";
			Function_12("HUMAN_MODE_HALF_SAME", 1,75f, 0, 0, 2, 1, 0);
			break;
	}
	return;
}

void Function_12(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x599 / 1433
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

void Function_13(bool bParam0) //Position: 0x5E4 / 1508
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 10;
	while (iVar0 < 20)
	{
		if (IS_VOLUME_VALID((*&Local_114 + 1024)[iVar0]))
		{
			GET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME((*&Local_114 + 1024)[iVar0]), &vVar1);
			strcpy(&Local_34, "ntestHuman", 32);
			Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
			if (!bParam0)
			{
				(*&Local_114 + 84)[iVar0] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, Function_14(), vVar1, 0.0f, 0.0f, 0.0f);
			}
			else
			{
				(*&Local_114 + 84)[iVar0] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 111, vVar1, 0.0f, 0.0f, 0.0f);
			}
			if (IS_ACTOR_VALID((*&Local_114 + 84)[iVar0]))
			{
				TASK_WANDER_IN_VOLUME((*&Local_114 + 84)[iVar0], (*&Local_114 + 1024)[iVar0], -1f);
				TASK_PRIORITY_SET((*&Local_114 + 84)[iVar0], true);
			}
		}
		iVar0++;
	}
	return;
}

var Function_14() //Position: 0x6AC / 1708
{
	bool bVar0;
	int iVar1;
	
	bVar0 = RAND_INT_RANGE(false, 3);
	if (bVar0 == 0)
	{
		iVar1 = 51;
	}
	if (bVar0 == 1)
	{
		iVar1 = 31;
	}
	if (bVar0 == 2)
	{
		iVar1 = 113;
	}
	if (bVar0 == 3)
	{
		iVar1 = 36;
	}
	return iVar1;
}

struct<32> Function_15(bool bParam0) //Position: 0x6E3 / 1763
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16("0", &cVar8, ""), 4);
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

struct<32> Function_16(char* cParam0, char* cParam1, char* cParam2) //Position: 0x74D / 1869
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_17() //Position: 0x76C / 1900
{
	int iVar0;
	
	iVar0 = 10;
	while (iVar0 < 20)
	{
		if (IS_ACTOR_VALID((*&Local_114 + 84)[iVar0]))
		{
			TASK_CLEAR((*&Local_114 + 84)[iVar0]);
			DESTROY_ACTOR((*&Local_114 + 84)[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_18() //Position: 0x7AA / 1962
{
	vector3 vVar0;
	
	if (Local_114.f_1196 != 0)
	{
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_422, false))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_422, false, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
		}
		if (IS_PLAYER_CONTROLLABLE(0))
		{
			SET_PLAYER_CONTROL(0, 0, 0, 0);
		}
	}
	switch (Local_114.f_1196)
	{
		case 0x00000000:
			REMOVE_CAMERA_FROM_CHANNEL(bLocal_422, 0);
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
			Local_114.f_472 = "CAMERA_MODE_NORMAL";
			Function_12("CAMERA_MODE_NORMAL", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			*(&Local_114 + 1172) = { -824,75f, 94,17f, 2394,71f };
			*(&Local_114 + 1184) = { -0,201f, -0,191f, -0,961f };
			Local_114.f_472 = "CAMERA_MODE_INDOORS_NO_WINDOWS";
			Function_12("CAMERA_MODE_INDOORS_NO_WINDOWS", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			*(&Local_114 + 1172) = { -952,7f, 92,41f, 2424,12f };
			*(&Local_114 + 1184) = { 0,738f, -0,216f, 0,639f };
			Local_114.f_472 = "CAMERA_MODE_INDOORS_WITH_WINDOWS";
			Function_12("CAMERA_MODE_INDOORS_WITH_WINDOWS", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000003:
			vVar0 = { -850,768f, 91,354f, 2395,796f };
			TELEPORT_ACTOR(GET_PLAYER_ACTOR(0), &vVar0, 1, 1, 1);
			*(&Local_114 + 1172) = { -853,12f, 92,35f, 2396,93f };
			*(&Local_114 + 1184) = { 822.0f, -0,034f, -0,568f };
			Local_114.f_472 = "CAMERA_MODE_OUTSIDE_WITH_PLAYER";
			Function_12("CAMERA_MODE_OUTSIDE_WITH_PLAYER", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000004:
			vVar0 = { -850,768f, 91,354f, 2395,796f };
			TELEPORT_ACTOR(GET_PLAYER_ACTOR(0), &vVar0, 1, 1, 1);
			*(&Local_114 + 1172) = { -851,799f, 93,264f, 2401,087f };
			*(&Local_114 + 1184) = { -0,833f, 0,016f, 0,553f };
			Local_114.f_472 = "CAMERA_MODE_OUTSIDE_NO_PLAYER";
			Function_12("CAMERA_MODE_OUTSIDE_NO_PLAYER", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000005:
			*(&Local_114 + 1172) = { -1012,07f, 112,37f, 2489,58f };
			*(&Local_114 + 1184) = { 0,809f, -0,244f, 0,535f };
			Local_114.f_472 = "CAMERA_MODE_OUTSIDE_VISTA";
			Function_12("CAMERA_MODE_OUTSIDE_VISTA", 1,75f, 0, 0, 2, 1, 0);
			break;
	}
	return;
}

int Function_19() //Position: 0xB2B / 2859
{
	if (!IS_ACTOR_VALID((*&Local_114 + 24)[0]))
	{
		strcpy(&Local_34, "ntestHorse", 32);
		Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
		(*&Local_114 + 24)[0] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 976, *(&Local_114 + 300[03]), -9,353f, -143,386f, 0.0f);
		TASK_STAND_STILL((*&Local_114 + 24)[0], -1.0f, 0, 0);
		TASK_PRIORITY_SET((*&Local_114 + 24)[0], true);
		Local_114.f_468++;
	}
	if (!IS_ACTOR_VALID((*&Local_114 + 24)[1]))
	{
		strcpy(&Local_34, "ntestHorse", 32);
		Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
		(*&Local_114 + 24)[1] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 976, *(&Local_114 + 300[13]), -29,915f, 48,015f, 0.0f);
		TASK_FOLLOW_PATH((*&Local_114 + 24)[1], Local_4.f_64, 1, 1, 0, 1, false);
		TASK_PRIORITY_SET((*&Local_114 + 24)[1], true);
		Local_114.f_468++;
	}
	if (!IS_ACTOR_VALID((*&Local_114 + 24)[2]))
	{
		strcpy(&Local_34, "ntestHorse", 32);
		Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
		(*&Local_114 + 24)[2] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 976, *(&Local_114 + 300[23]), -56,677f, 117,901f, 0.0f);
		TASK_FOLLOW_PATH((*&Local_114 + 24)[2], Local_4.f_68, 1, 1, 0, 1, false);
		TASK_PRIORITY_SET((*&Local_114 + 24)[2], true);
		Local_114.f_468++;
	}
	if (!IS_ACTOR_VALID((*&Local_114 + 24)[3]))
	{
		strcpy(&Local_34, "ntestHorse", 32);
		Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
		(*&Local_114 + 24)[3] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 976, *(&Local_114 + 300[33]), -56,677f, 117,901f, 0.0f);
		TASK_STAND_STILL((*&Local_114 + 24)[3], -1.0f, 0, 0);
		TASK_PRIORITY_SET((*&Local_114 + 24)[3], true);
		Local_114.f_468++;
	}
	if (!IS_ACTOR_VALID((*&Local_114 + 24)[4]))
	{
		strcpy(&Local_34, "ntestHorse", 32);
		Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
		(*&Local_114 + 24)[4] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 976, *(&Local_114 + 300[43]), -29,915f, 48,015f, 0.0f);
		TASK_STAND_STILL((*&Local_114 + 24)[4], -1.0f, 0, 0);
		TASK_PRIORITY_SET((*&Local_114 + 24)[4], true);
		Local_114.f_468++;
	}
	return 1;
}

int Function_20() //Position: 0xD87 / 3463
{
	while (Local_114.f_464 <= 3)
	{
		strcpy(&Local_34, "testDog", 32);
		Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
		(*&Local_114 + 48)[Local_114.f_464] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 1078, *(&Local_114 + 364[Local_114.f_4643]), 0.0f, 0.0f, 0.0f);
		Local_114.f_464++;
	}
	return 1;
}

int Function_21() //Position: 0xDE7 / 3559
{
	while (Local_114.f_460 <= 4)
	{
		strcpy(&Local_34, "testChicken", 32);
		Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
		(*&Local_114 + 64)[Local_114.f_460] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 1015, *(&Local_114 + 404[Local_114.f_4603]), 0.0f, 0.0f, 0.0f);
		Local_114.f_460++;
	}
	return 1;
}

int Function_22() //Position: 0xE4B / 3659
{
	while (Local_114.f_456 <= 5)
	{
		strcpy(&Local_34, "testCow", 32);
		Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
		Local_114[Local_114.f_456] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 1008, *(&Local_114 + 236[Local_114.f_4563]), 0.0f, 0.0f, 0.0f);
		Local_114.f_456++;
	}
	if (GET_TASK_STATUS(Local_114[0], 16) != 1)
	{
		TASK_FOLLOW_PATH(Local_114[0], Local_4.f_44, 1, 1, 0, 1, false);
		TASK_PRIORITY_SET(Local_114[0], true);
	}
	if (GET_TASK_STATUS(Local_114[1], 16) != 1)
	{
		TASK_FOLLOW_PATH(Local_114[1], Local_4.f_48, 1, 1, 0, 1, false);
		TASK_PRIORITY_SET(Local_114[1], true);
	}
	if (GET_TASK_STATUS(Local_114[2], 16) != 1)
	{
		TASK_FOLLOW_PATH(Local_114[2], Local_4.f_52, 1, 1, 0, 1, false);
		TASK_PRIORITY_SET(Local_114[2], true);
	}
	if (GET_TASK_STATUS(Local_114[3], 16) != 1)
	{
		TASK_FOLLOW_PATH(Local_114[3], Local_4.f_56, 1, 1, 0, 1, false);
		TASK_PRIORITY_SET(Local_114[3], true);
	}
	if (GET_TASK_STATUS(Local_114[4], 16) != 1)
	{
		TASK_FOLLOW_PATH(Local_114[4], Local_4.f_60, 1, 1, 0, 1, false);
		TASK_PRIORITY_SET(Local_114[4], true);
	}
	return 1;
}

void Function_23() //Position: 0xF70 / 3952
{
	if (Local_114.f_1116 == 2)
	{
		if (IS_ACTOR_VALID((*&Local_114 + 84)[10]))
		{
			if (GET_TASK_STATUS((*&Local_114 + 84)[10], 16) == 0)
			{
				TASK_FOLLOW_PATH((*&Local_114 + 84)[10], Local_4.f_72, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 84)[10], true);
			}
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[11]))
		{
			if (GET_TASK_STATUS((*&Local_114 + 84)[11], 16) == 0)
			{
				TASK_FOLLOW_PATH((*&Local_114 + 84)[11], Local_4.f_76, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 84)[11], true);
			}
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[12]))
		{
			if (GET_TASK_STATUS((*&Local_114 + 84)[12], 16) == 0)
			{
				TASK_FOLLOW_PATH((*&Local_114 + 84)[12], Local_4.f_80, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 84)[12], true);
			}
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[13]))
		{
			if (GET_TASK_STATUS((*&Local_114 + 84)[13], 16) == 0)
			{
				TASK_FOLLOW_PATH((*&Local_114 + 84)[13], Local_4.f_84, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 84)[13], true);
			}
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[14]))
		{
			if (GET_TASK_STATUS((*&Local_114 + 84)[14], 16) == 0)
			{
				TASK_FOLLOW_PATH((*&Local_114 + 84)[14], Local_4.f_88, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 84)[14], true);
			}
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[15]))
		{
			if (GET_TASK_STATUS((*&Local_114 + 84)[15], 16) == 0)
			{
				TASK_FOLLOW_PATH((*&Local_114 + 84)[15], Local_4.f_92, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 84)[15], true);
			}
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[16]))
		{
			if (GET_TASK_STATUS((*&Local_114 + 84)[16], 16) == 0)
			{
				TASK_FOLLOW_PATH((*&Local_114 + 84)[16], Local_4.f_96, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 84)[16], true);
			}
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[17]))
		{
			if (GET_TASK_STATUS((*&Local_114 + 84)[17], 16) == 0)
			{
				TASK_FOLLOW_PATH((*&Local_114 + 84)[17], Local_4.f_100, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 84)[17], true);
			}
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[18]))
		{
			if (GET_TASK_STATUS((*&Local_114 + 84)[18], 16) == 0)
			{
				TASK_FOLLOW_PATH((*&Local_114 + 84)[18], Local_4.f_104, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 84)[18], true);
			}
		}
		if (IS_ACTOR_VALID(Local_114[0]))
		{
			if (GET_TASK_STATUS(Local_114[0], 16) == 0)
			{
				TASK_FOLLOW_PATH(Local_114[0], Local_4.f_44, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET(Local_114[0], true);
			}
		}
		if (IS_ACTOR_VALID(Local_114[1]))
		{
			if (GET_TASK_STATUS(Local_114[1], 16) == 0)
			{
				TASK_FOLLOW_PATH(Local_114[1], Local_4.f_48, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET(Local_114[1], true);
			}
		}
		if (IS_ACTOR_VALID(Local_114[2]))
		{
			if (GET_TASK_STATUS(Local_114[2], 16) == 0)
			{
				TASK_FOLLOW_PATH(Local_114[2], Local_4.f_52, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET(Local_114[2], true);
			}
		}
		if (IS_ACTOR_VALID(Local_114[3]))
		{
			if (GET_TASK_STATUS(Local_114[3], 16) == 0)
			{
				TASK_FOLLOW_PATH(Local_114[3], Local_4.f_56, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET(Local_114[3], true);
			}
		}
		if (IS_ACTOR_VALID(Local_114[4]))
		{
			if (GET_TASK_STATUS(Local_114[4], 16) == 0)
			{
				TASK_FOLLOW_PATH(Local_114[4], Local_4.f_60, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET(Local_114[4], true);
			}
		}
		if (IS_ACTOR_VALID((*&Local_114 + 24)[1]))
		{
			if (GET_TASK_STATUS((*&Local_114 + 24)[1], 16) == 0)
			{
				TASK_FOLLOW_PATH((*&Local_114 + 24)[1], Local_4.f_64, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 24)[1], true);
			}
		}
		if (IS_ACTOR_VALID((*&Local_114 + 24)[2]))
		{
			if (GET_TASK_STATUS((*&Local_114 + 24)[2], 16) == 0)
			{
				TASK_FOLLOW_PATH((*&Local_114 + 24)[2], Local_4.f_68, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 24)[2], true);
			}
		}
	}
	return;
}

void Function_24() //Position: 0x132B / 4907
{
	if (Local_114.f_1196 != 0)
	{
		SET_CAMERA_POSITION(bLocal_422, *(&Local_114 + 1172));
		SET_CAMERA_DIRECTION(bLocal_422, *(&Local_114 + 1184), 1);
	}
	else if (IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_422, false))
	{
		REMOVE_CAMERA_FROM_CHANNEL(bLocal_422, 0);
	}
	return;
}

int Function_25() //Position: 0x1369 / 4969
{
	if (!Function_28(Local_114.f_1120, 4, 0, 4294967295) || GET_ACTOR_STUCK_STATE(Local_114.f_1120) != 1)
	{
		Function_27();
	}
	if (IS_ACTOR_VALID(Local_114.f_1120))
	{
		if (GET_TASK_STATUS(Local_114.f_1124, 16) == 0)
		{
			Function_26();
		}
	}
	else
	{
		Function_44();
	}
	return 1;
}

void Function_26() //Position: 0x13B0 / 5040
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(*(&Local_114 + 1132), StackVal, StackVal) + Vector(0.0f, 2.0f, 0.0f) };
	TELEPORT_ACTOR(Local_114.f_1120, &vVar0, 1, 1, 1);
	SET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(Local_114.f_1120), *(&Local_114 + 1156));
	if (Local_114.f_1116 == 2)
	{
		TASK_FOLLOW_PATH(Local_114.f_1124, Local_4.f_40, 4, 1, 0, 1, false);
	}
	return;
}

void Function_27() //Position: 0x13FF / 5119
{
	if (IS_ACTOR_VALID(Local_114.f_1120))
	{
		DESTROY_ACTOR(Local_114.f_1120);
	}
	if (IS_ACTOR_VALID(Local_114.f_1128))
	{
		DESTROY_ACTOR(Local_114.f_1128);
	}
	if (IS_ACTOR_VALID(Local_114.f_1124))
	{
		DESTROY_ACTOR(Local_114.f_1124);
	}
	WAIT(false);
	return;
}

bool Function_28(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1442 / 5186
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(bParam0) <= 1)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(bParam0) <= iParam1)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(bParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 2)
			{
				if (bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 3)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= iParam3)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	return 1;
}

void Function_29() //Position: 0x14FB / 5371
{
	if (IS_DEBUGKEY_PRESSED(46))
	{
		Function_41();
	}
	if (IS_DEBUGKEY_PRESSED(30))
	{
		Function_40();
	}
	if (IS_DEBUGKEY_PRESSED(35))
	{
		Function_39();
	}
	if (IS_DEBUGKEY_PRESSED(38))
	{
		Function_38();
	}
	if (IS_DEBUGKEY_PRESSED(36))
	{
		Function_35();
	}
	if (IS_DEBUGKEY_PRESSED(34))
	{
		Function_34();
	}
	if (IS_DEBUGKEY_PRESSED(31))
	{
		Function_32();
	}
	if (IS_DEBUGKEY_PRESSED(49))
	{
		Function_30();
	}
	return;
}

void Function_30() //Position: 0x1559 / 5465
{
	int iVar0;
	
	iVar0 = Local_114.f_1224;
	iVar0++;
	if (iVar0 >= 1)
	{
		Local_114.f_1224 = 0;
	}
	else
	{
		Local_114.f_1224 = iVar0;
	}
	Function_31();
	return;
}

void Function_31() //Position: 0x1585 / 5509
{
	switch (Local_114.f_1224)
	{
		case 0x00000001:
			Function_12("MONKEY_MODE_DISABLED", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000000:
			Function_12("MONKEY_MODE_ENABLED", 1,75f, 0, 0, 2, 1, 0);
			break;
	}
	return;
}

void Function_32() //Position: 0x15EE / 5614
{
	int iVar0;
	
	iVar0 = Local_114.f_1220;
	iVar0++;
	if (iVar0 >= 1)
	{
		Local_114.f_1220 = 0;
	}
	else
	{
		Local_114.f_1220 = iVar0;
	}
	Function_33();
	return;
}

void Function_33() //Position: 0x161A / 5658
{
	switch (Local_114.f_1220)
	{
		case 0x00000000:
			Function_12("SPEW_MODE_DISABLED", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_12("SPEW_MODE_ENABLED", 1,75f, 0, 0, 2, 1, 0);
			break;
	}
	return;
}

void Function_34() //Position: 0x167F / 5759
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	
	iVar0 = 0;
	bVar7 = 5000.0f;
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (IS_ACTOR_VALID((*&Local_114 + 84)[iVar0]))
		{
			if (IS_ACTOR_ALIVE((*&Local_114 + 84)[iVar0]))
			{
				GET_POSITION((*&Local_114 + 84)[iVar0], &vVar1);
				if (VDIST(vVar4, vVar1) > bVar7)
				{
					bVar7 = VDIST(vVar4, vVar1);
					bVar8 = (*&Local_114 + 84)[iVar0];
				}
			}
		}
		iVar0++;
	}
	if (IS_ACTOR_VALID(bVar8))
	{
		KILL_ACTOR(bVar8);
		Function_12("KILLED CLOSEST ACTOR", 1,75f, 0, 0, 2, 1, 0);
	}
	else
	{
		Function_12("NO ACTORS KILLED", 1,75f, 0, 0, 2, 1, 0);
	}
	return;
}

void Function_35() //Position: 0x1750 / 5968
{
	int iVar0;
	
	iVar0 = Local_114.f_1204;
	iVar0++;
	if (iVar0 >= 2)
	{
		Local_114.f_1204 = 0;
	}
	else
	{
		Local_114.f_1204 = iVar0;
	}
	Function_37();
	Function_36();
	return;
}

void Function_36() //Position: 0x177F / 6015
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (IS_ACTOR_VALID((*&Local_114 + 84)[iVar0]))
		{
			switch (Local_114.f_1116)
			{
				case 0x00000000:
					TASK_CLEAR((*&Local_114 + 84)[iVar0]);
					TASK_STAND_STILL((*&Local_114 + 84)[iVar0], -1.0f, 0, 0);
					TASK_PRIORITY_SET((*&Local_114 + 84)[iVar0], 2);
					break;
				
				case 0x00000001:
					TASK_CLEAR((*&Local_114 + 84)[iVar0]);
					TASK_STAND_STILL((*&Local_114 + 84)[iVar0], -1.0f, 0, 0);
					TASK_PRIORITY_SET((*&Local_114 + 84)[iVar0], true);
					break;
				
				case 0x00000002:
					if (IS_VOLUME_VALID((*&Local_114 + 1024)[iVar0]))
					{
						TASK_CLEAR((*&Local_114 + 84)[iVar0]);
						TASK_WANDER_IN_VOLUME((*&Local_114 + 84)[iVar0], (*&Local_114 + 1024)[iVar0], -1f);
						TASK_PRIORITY_SET((*&Local_114 + 84)[iVar0], true);
					}
					break;
				}
		}
		iVar0++;
	}
	if (Local_114.f_1116 == 2)
	{
		if (IS_ACTOR_VALID((*&Local_114 + 84)[10]))
		{
			TASK_CLEAR((*&Local_114 + 84)[10]);
			TASK_FOLLOW_PATH((*&Local_114 + 84)[10], Local_4.f_72, 1, 1, 0, 1, false);
			TASK_PRIORITY_SET((*&Local_114 + 84)[10], true);
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[11]))
		{
			TASK_CLEAR((*&Local_114 + 84)[11]);
			TASK_FOLLOW_PATH((*&Local_114 + 84)[11], Local_4.f_76, 1, 1, 0, 1, false);
			TASK_PRIORITY_SET((*&Local_114 + 84)[11], true);
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[12]))
		{
			TASK_CLEAR((*&Local_114 + 84)[12]);
			TASK_FOLLOW_PATH((*&Local_114 + 84)[12], Local_4.f_80, 1, 1, 0, 1, false);
			TASK_PRIORITY_SET((*&Local_114 + 84)[12], true);
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[13]))
		{
			TASK_CLEAR((*&Local_114 + 84)[13]);
			TASK_FOLLOW_PATH((*&Local_114 + 84)[13], Local_4.f_84, 1, 1, 0, 1, false);
			TASK_PRIORITY_SET((*&Local_114 + 84)[13], true);
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[14]))
		{
			TASK_CLEAR((*&Local_114 + 84)[14]);
			TASK_FOLLOW_PATH((*&Local_114 + 84)[14], Local_4.f_88, 1, 1, 0, 1, false);
			TASK_PRIORITY_SET((*&Local_114 + 84)[14], true);
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[15]))
		{
			TASK_CLEAR((*&Local_114 + 84)[15]);
			TASK_FOLLOW_PATH((*&Local_114 + 84)[15], Local_4.f_92, 1, 1, 0, 1, false);
			TASK_PRIORITY_SET((*&Local_114 + 84)[15], true);
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[16]))
		{
			TASK_CLEAR((*&Local_114 + 84)[16]);
			TASK_FOLLOW_PATH((*&Local_114 + 84)[16], Local_4.f_96, 1, 1, 0, 1, false);
			TASK_PRIORITY_SET((*&Local_114 + 84)[16], true);
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[17]))
		{
			TASK_CLEAR((*&Local_114 + 84)[17]);
			TASK_FOLLOW_PATH((*&Local_114 + 84)[17], Local_4.f_100, 1, 1, 0, 1, false);
			TASK_PRIORITY_SET((*&Local_114 + 84)[17], true);
		}
		if (IS_ACTOR_VALID((*&Local_114 + 84)[18]))
		{
			TASK_CLEAR((*&Local_114 + 84)[18]);
			TASK_FOLLOW_PATH((*&Local_114 + 84)[18], Local_4.f_104, 1, 1, 0, 1, false);
			TASK_PRIORITY_SET((*&Local_114 + 84)[18], true);
		}
	}
	if (IS_ACTOR_VALID(Local_114.f_1124))
	{
		switch (Local_114.f_1116)
		{
			case 0x00000000:
				TASK_OVERRIDE_SET_MOVETYPE(Local_114.f_1124, 5);
				TASK_PRIORITY_SET(Local_114.f_1124, 2);
				break;
			
			case 0x00000001:
				TASK_OVERRIDE_SET_MOVETYPE(Local_114.f_1124, 5);
				TASK_PRIORITY_SET(Local_114.f_1124, true);
				break;
			
			case 0x00000002:
				TASK_OVERRIDE_SET_MOVETYPE(Local_114.f_1124, 4);
				TASK_PRIORITY_SET(Local_114.f_1124, true);
				break;
			}
	}
	if (!Local_114.f_1212)
	{
		switch (Local_114.f_1116)
		{
			case 0x00000000:
				Function_12("MOVE_MODE_STAND_LOW", 1,75f, 0, 0, 2, 1, 0);
				break;
			
			case 0x00000001:
				Function_12("MOVE_MODE_STAND_HIGH", 1,75f, 0, 0, 2, 1, 0);
				break;
			
			case 0x00000002:
				Function_12("MOVE_MODE_WALK", 1,75f, 0, 0, 2, 1, 0);
				break;
		}
	}
	else
	{
		Local_114.f_1212 = 0;
	}
	return;
}

void Function_37() //Position: 0x1B60 / 7008
{
	int iVar0;
	
	Local_114.f_1212 = 1;
	switch (Local_114.f_1204)
	{
		case 0x00000000:
			Local_114.f_1116 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (IS_ACTOR_ALIVE(Local_114[iVar0]))
				{
					TASK_CLEAR(Local_114[iVar0]);
					TASK_STAND_STILL(Local_114[iVar0], -1.0f, 0, 0);
					TASK_PRIORITY_SET(Local_114[iVar0], 2);
				}
				iVar0++;
			}
			if (IS_ACTOR_ALIVE((*&Local_114 + 24)[1]))
			{
				TASK_CLEAR((*&Local_114 + 24)[1]);
				TASK_STAND_STILL((*&Local_114 + 24)[1], -1.0f, 0, 0);
				TASK_PRIORITY_SET((*&Local_114 + 24)[1], 2);
			}
			if (IS_ACTOR_ALIVE((*&Local_114 + 24)[2]))
			{
				TASK_CLEAR((*&Local_114 + 24)[2]);
				TASK_STAND_STILL((*&Local_114 + 24)[2], -1.0f, 0, 0);
				TASK_PRIORITY_SET((*&Local_114 + 24)[2], 2);
			}
			Local_114.f_480 = "MOVE_MODE_GLOBAL_STAND_LOW";
			Function_12("MOVE_MODE_GLOBAL_STAND_LOW", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Local_114.f_1116 = 1;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (IS_ACTOR_ALIVE(Local_114[iVar0]))
				{
					TASK_CLEAR(Local_114[iVar0]);
					TASK_STAND_STILL(Local_114[iVar0], -1.0f, 0, 0);
					TASK_PRIORITY_SET(Local_114[iVar0], true);
				}
				iVar0++;
			}
			if (IS_ACTOR_ALIVE((*&Local_114 + 24)[1]))
			{
				TASK_CLEAR((*&Local_114 + 24)[1]);
				TASK_STAND_STILL((*&Local_114 + 24)[1], -1.0f, 0, 0);
				TASK_PRIORITY_SET((*&Local_114 + 24)[1], true);
			}
			if (IS_ACTOR_ALIVE((*&Local_114 + 24)[2]))
			{
				TASK_CLEAR((*&Local_114 + 24)[2]);
				TASK_STAND_STILL((*&Local_114 + 24)[2], -1.0f, 0, 0);
				TASK_PRIORITY_SET((*&Local_114 + 24)[2], true);
			}
			Local_114.f_480 = "MOVE_MODE_GLOBAL_STAND_HIGH";
			Function_12("MOVE_MODE_GLOBAL_STAND_HIGH", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Local_114.f_1116 = 2;
			if (IS_ACTOR_ALIVE(Local_114[0]))
			{
				TASK_CLEAR(Local_114[0]);
				TASK_FOLLOW_PATH(Local_114[0], Local_4.f_44, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET(Local_114[0], true);
			}
			if (IS_ACTOR_ALIVE(Local_114[1]))
			{
				TASK_CLEAR(Local_114[1]);
				TASK_FOLLOW_PATH(Local_114[1], Local_4.f_48, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET(Local_114[1], true);
			}
			if (IS_ACTOR_ALIVE(Local_114[2]))
			{
				TASK_CLEAR(Local_114[2]);
				TASK_FOLLOW_PATH(Local_114[2], Local_4.f_52, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET(Local_114[2], true);
			}
			if (IS_ACTOR_ALIVE(Local_114[3]))
			{
				TASK_CLEAR(Local_114[3]);
				TASK_FOLLOW_PATH(Local_114[3], Local_4.f_56, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET(Local_114[3], true);
			}
			if (IS_ACTOR_ALIVE(Local_114[4]))
			{
				TASK_CLEAR(Local_114[4]);
				TASK_FOLLOW_PATH(Local_114[4], Local_4.f_60, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET(Local_114[4], true);
			}
			if (IS_ACTOR_ALIVE((*&Local_114 + 24)[1]))
			{
				TASK_CLEAR((*&Local_114 + 24)[1]);
				TASK_FOLLOW_PATH((*&Local_114 + 24)[1], Local_4.f_64, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 24)[1], true);
			}
			if (IS_ACTOR_ALIVE((*&Local_114 + 24)[2]))
			{
				TASK_CLEAR((*&Local_114 + 24)[2]);
				TASK_FOLLOW_PATH((*&Local_114 + 24)[2], Local_4.f_68, 1, 1, 0, 1, false);
				TASK_PRIORITY_SET((*&Local_114 + 24)[2], true);
			}
			Local_114.f_480 = "MOVE_MODE_GLOBAL_WALK";
			Function_12("MOVE_MODE_GLOBAL_WALK", 1,75f, 0, 0, 2, 1, 0);
			break;
	}
	return;
}

void Function_38() //Position: 0x1F00 / 7936
{
	int iVar0;
	
	iVar0 = Local_114.f_1116;
	iVar0++;
	if (iVar0 >= 2)
	{
		Local_114.f_1116 = 0;
	}
	else
	{
		Local_114.f_1116 = iVar0;
	}
	Function_36();
	return;
}

void Function_39() //Position: 0x1F2C / 7980
{
	int iVar0;
	
	iVar0 = Local_114.f_1112;
	iVar0++;
	if (iVar0 >= 1)
	{
		Local_114.f_1112 = 0;
	}
	else
	{
		Local_114.f_1112 = iVar0;
	}
	Function_11();
	return;
}

void Function_40() //Position: 0x1F58 / 8024
{
	int iVar0;
	
	iVar0 = Local_114.f_1200;
	iVar0++;
	if (iVar0 >= 1)
	{
		Local_114.f_1200 = 0;
	}
	else
	{
		Local_114.f_1200 = iVar0;
	}
	Function_80();
	return;
}

void Function_41() //Position: 0x1F84 / 8068
{
	int iVar0;
	
	iVar0 = Local_114.f_1196;
	iVar0++;
	if (iVar0 >= 5)
	{
		Local_114.f_1196 = 0;
	}
	else
	{
		Local_114.f_1196 = iVar0;
	}
	Function_18();
	return;
}

void Function_42(bool bParam0) //Position: 0x1FB0 / 8112
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (IS_VOLUME_VALID((*&Local_114 + 1024)[iVar0]))
		{
			GET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME((*&Local_114 + 1024)[iVar0]), &vVar2);
			strcpy(&Local_34, "ntestHuman", 32);
			Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
			if (!bParam0)
			{
				(*&Local_114 + 84)[iVar0] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, Function_14(), vVar2, 0.0f, 0.0f, 0.0f);
			}
			else
			{
				(*&Local_114 + 84)[iVar0] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 111, vVar2, 0.0f, 0.0f, 0.0f);
			}
			if (IS_ACTOR_VALID((*&Local_114 + 84)[iVar0]))
			{
				TASK_WANDER_IN_VOLUME((*&Local_114 + 84)[iVar0], (*&Local_114 + 1024)[iVar0], -1f);
				TASK_PRIORITY_SET((*&Local_114 + 84)[iVar0], true);
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar5 = 9;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		strcpy(&Local_34, "ntestHuman", 32);
		Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
		if (!bParam0)
		{
			(*&Local_114 + 84)[iVar5] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, Function_14(), *(&Local_114 + 768[iVar13]), 0.0f, 0.0f, 0.0f);
		}
		else
		{
			(*&Local_114 + 84)[iVar5] = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 111, *(&Local_114 + 768[iVar13]), 0.0f, 0.0f, 0.0f);
		}
		iVar5++;
		iVar1++;
	}
	TASK_FOLLOW_PATH((*&Local_114 + 84)[10], Local_4.f_72, 1, 1, 0, 1, false);
	TASK_PRIORITY_SET((*&Local_114 + 84)[10], true);
	TASK_FOLLOW_PATH((*&Local_114 + 84)[11], Local_4.f_76, 1, 1, 0, 1, false);
	TASK_PRIORITY_SET((*&Local_114 + 84)[11], true);
	TASK_FOLLOW_PATH((*&Local_114 + 84)[12], Local_4.f_80, 1, 1, 0, 1, false);
	TASK_PRIORITY_SET((*&Local_114 + 84)[12], true);
	TASK_FOLLOW_PATH((*&Local_114 + 84)[13], Local_4.f_84, 1, 1, 0, 1, false);
	TASK_PRIORITY_SET((*&Local_114 + 84)[13], true);
	TASK_FOLLOW_PATH((*&Local_114 + 84)[14], Local_4.f_88, 1, 1, 0, 1, false);
	TASK_PRIORITY_SET((*&Local_114 + 84)[14], true);
	TASK_FOLLOW_PATH((*&Local_114 + 84)[15], Local_4.f_92, 1, 1, 0, 1, false);
	TASK_PRIORITY_SET((*&Local_114 + 84)[15], true);
	TASK_FOLLOW_PATH((*&Local_114 + 84)[16], Local_4.f_96, 1, 1, 0, 1, false);
	TASK_PRIORITY_SET((*&Local_114 + 84)[16], true);
	TASK_FOLLOW_PATH((*&Local_114 + 84)[17], Local_4.f_100, 1, 1, 0, 1, false);
	TASK_PRIORITY_SET((*&Local_114 + 84)[17], true);
	TASK_FOLLOW_PATH((*&Local_114 + 84)[18], Local_4.f_104, 1, 1, 0, 1, false);
	TASK_PRIORITY_SET((*&Local_114 + 84)[18], true);
	strcpy(&Local_34, "testShop", 32);
	Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
	Local_114.f_488 = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 118, -827,144f, 92,552f, 2389,565f, -23,306f, 161,91f, 0.0f);
	TASK_STAND_STILL(Local_114.f_488, -1.0f, 0, 0);
	TASK_PRIORITY_SET(Local_114.f_488, true);
	(*&Local_114 + 84)[iVar5] = Local_114.f_488;
	iVar5++;
	strcpy(&Local_34, "testStation", 32);
	Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
	Function_43(GET_OBJECT_FROM_GRINGO(Local_114.f_500));
	Local_114.f_492 = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 118, Function_43(GET_OBJECT_FROM_GRINGO(Local_114.f_500)), -23,306f, 161,91f, 0.0f);
	TASK_USE_GRINGO(Local_114.f_492, Local_114.f_500, "UseCase1", 4294967295, 1);
	TASK_PRIORITY_SET(Local_114.f_492, true);
	(*&Local_114 + 84)[iVar5] = Local_114.f_492;
	iVar5++;
	strcpy(&Local_34, "testStation", 32);
	Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
	Function_43(GET_OBJECT_FROM_GRINGO(Local_114.f_504));
	Local_114.f_496 = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, 118, Function_43(GET_OBJECT_FROM_GRINGO(Local_114.f_504)), -23,306f, 161,91f, 0.0f);
	TASK_USE_GRINGO(Local_114.f_496, Local_114.f_504, "UseCase1", 4294967295, 1);
	TASK_PRIORITY_SET(Local_114.f_496, true);
	(*&Local_114 + 84)[iVar5] = Local_114.f_496;
	iVar5++;
	return;
}

vector3 Function_43(bool bParam0) //Position: 0x2385 / 9093
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

int Function_44() //Position: 0x23AC / 9132
{
	*(&Local_114 + 1132) = { -824,86f, 93,237f, 2405,625f };
	*(&Local_114 + 1144) = { -938,771f, 90,102f, 2440,898f };
	*(&Local_114 + 1156) = { -6,533f, 108,312f, 0.0f };
	if (!IS_ACTOR_VALID(Local_114.f_1120))
	{
		strcpy(&Local_34, "testSCoach", 32);
		Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
		Local_114.f_1120 = Function_45(StackVal, StackVal, StackVal, StackVal, Local_114.f_1216, &Local_34, 1177, 976, *(&Local_114 + 1132), *(&Local_114 + 1156), 1, 976, 976, 976, 4);
	}
	if (IS_ACTOR_VALID(Local_114.f_1120))
	{
		if (!IS_ACTOR_VALID(Local_114.f_1124))
		{
			strcpy(&Local_34, "testDriver", 32);
			Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
			Local_114.f_1124 = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, Function_14(), -844,075f, 91,685f, 2407,199f, *(&Local_114 + 1156));
			if (IS_ACTOR_VALID(Local_114.f_1124))
			{
				SET_ACTOR_IN_VEHICLE(Local_114.f_1124, Local_114.f_1120, false);
			}
		}
		if (!IS_ACTOR_VALID(Local_114.f_1128))
		{
			strcpy(&Local_34, "testPassenger", 32);
			Local_34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Local_34) };
			Local_114.f_1128 = CREATE_ACTOR_IN_LAYOUT(Local_114.f_1216, &Local_34, Function_14(), -844,075f, 91,685f, 2407,199f, *(&Local_114 + 1156));
			if (IS_ACTOR_VALID(Local_114.f_1128))
			{
				SET_ACTOR_IN_VEHICLE(Local_114.f_1128, Local_114.f_1120, 2);
			}
		}
		if (IS_SEAT_OCCUPIED(Local_114.f_1120, false))
		{
			TASK_FOLLOW_PATH(Local_114.f_1124, Local_4.f_40, 4, 1, 0, 1, false);
		}
	}
	return 1;
}

var Function_45(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x2543 / 9539
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			bVar15 = "";
			if (Function_48(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_47(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_46(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (bVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			bVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, bVar18, 0);
			bVar18++;
		}
	}
	return bVar0;
}

bool Function_46(int iParam0, int iParam1) //Position: 0x2777 / 10103
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_47(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x27A9 / 10153
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_48(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x27C1 / 10177
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

void Function_49() //Position: 0x27E8 / 10216
{
	bLocal_422 = CREATE_CAMERA_IN_LAYOUT(Local_114.f_1216, "njobCamera", 0);
	SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_422, false, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
	INIT_CAMERA_FROM_GAME_CAMERA(bLocal_422);
	return;
}

bool Function_50(int iParam0) //Position: 0x281B / 10267
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_55();
	iVar1 = 0;
	if (!Function_6(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_54(iParam0[iVar03], 8);
		}
		else if (Function_53())
		{
			iVar1 = 1;
			Function_54(iParam0[iVar03], 8);
		}
		Function_54(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_6(iParam0[iVar03], 4))
		{
			if (!Function_6(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_6(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_6(iParam0[03], 8) || iVar1));
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
				Function_54(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_6(iParam0[iVar03], 4))
		{
			if (!Function_6(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_54(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_54(iParam0[iVar03], 2);
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
							Function_54(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_54(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_54(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_54(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_54(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_54(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_54(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_54(iParam0[iVar03], 2);
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
	Function_51();
	return 1;
}

void Function_51() //Position: 0x2B96 / 11158
{
	if (!Function_52(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_52(int iParam0) //Position: 0x2BD6 / 11222
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_53() //Position: 0x2BF2 / 11250
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

void Function_54(var uParam0, int iParam1) //Position: 0x2C1D / 11293
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_55() //Position: 0x2C2E / 11310
{
	if (!Function_52(128))
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

bool Function_56(int iParam0, int iParam1) //Position: 0x2C70 / 11376
{
	if (Function_58(iParam0, iParam1))
	{
		Function_57(iParam0);
		return 1;
	}
	return 0;
}

void Function_57(int iParam0) //Position: 0x2C88 / 11400
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_58(var uParam0, float fParam1) //Position: 0x2C9C / 11420
{
	if (Function_61(uParam0))
	{
		if (Function_59(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_59(bool bParam0) //Position: 0x2CB8 / 11448
{
	if (Function_61(bParam0))
	{
		if (Function_60(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_60(int iParam0) //Position: 0x2D80 / 11648
{
	return Function_9(*iParam0, 2);
}

bool Function_61(bool bParam0) //Position: 0x2D8D / 11661
{
	return Function_9(*bParam0, 1);
}

void Function_62() //Position: 0x2D9A / 11674
{
	struct<13> Var0;
	struct<13> Var16;
	
	Local_423 = 1000.0f;
	Local_423.f_4 = 410.0f;
	Local_423.f_8 = 1270.0f;
	Local_423.f_12 = 550.0f;
	bLocal_435 = GUI_MAKE_WINDOW(GUI_MAIN_WINDOW(), &Local_423, "DebugGUI", "");
	Local_427 = 0,85f;
	Local_427.f_4 = 0,85f;
	Local_427.f_8 = 0,85f;
	Local_427.f_12 = 1.0f;
	Local_431 = 0.0f;
	Local_431.f_4 = 0.0f;
	Local_431.f_8 = 0.0f;
	Local_431.f_12 = 0,5f;
	GUI_MAKE_OVERLAY(bLocal_435, &Local_423, "DEBUGMENUBACK", &Local_431, &Local_431, 0);
	Var0 = 900.0f;
	Var0.f_4 = 390.0f;
	Var0.f_8 = 1200.0f;
	Var0.f_12 = 410.0f;
	Var4 = 900.0f;
	Var4.f_4 = 410.0f;
	Var4.f_8 = 1200.0f;
	Var4.f_12 = 430.0f;
	Var8 = 900.0f;
	Var8.f_4 = 430.0f;
	Var8.f_8 = 1200.0f;
	Var8.f_12 = 450.0f;
	Var12 = 900.0f;
	Var12.f_4 = 450.0f;
	Var12.f_8 = 1200.0f;
	Var12.f_12 = 470.0f;
	Var16 = 900.0f;
	Var16.f_4 = 470.0f;
	Var16.f_8 = 1200.0f;
	Var16.f_12 = 490.0f;
	Var20 = 900.0f;
	Var20.f_4 = 490.0f;
	Var20.f_8 = 1200.0f;
	Var20.f_12 = 510.0f;
	Var24 = 900.0f;
	Var24.f_4 = 510.0f;
	Var24.f_8 = 1200.0f;
	Var24.f_12 = 530.0f;
	Var28 = 900.0f;
	Var28.f_4 = 530.0f;
	Var28.f_8 = 1200.0f;
	Var28.f_12 = 550.0f;
	bLocal_436 = GUI_MAKE_TEXT(bLocal_435, &Var0, "Ambient Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_436, &Local_427);
	GUI_SET_TEXT(bLocal_436, "A - Ambient Toggle");
	bLocal_437 = GUI_MAKE_TEXT(bLocal_435, &Var4, "Camera Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_437, &Local_427);
	GUI_SET_TEXT(bLocal_437, "C - Camera Toggle");
	bLocal_438 = GUI_MAKE_TEXT(bLocal_435, &Var8, "Global Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_438, &Local_427);
	GUI_SET_TEXT(bLocal_438, "J - Global Move Toggle");
	bLocal_439 = GUI_MAKE_TEXT(bLocal_435, &Var12, "Move Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_439, &Local_427);
	GUI_SET_TEXT(bLocal_439, "L - Human Move Toggle");
	bLocal_440 = GUI_MAKE_TEXT(bLocal_435, &Var16, "Kill Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_440, &Local_427);
	GUI_SET_TEXT(bLocal_440, "G - Kill Nearest Actor");
	bLocal_441 = GUI_MAKE_TEXT(bLocal_435, &Var20, "Actor Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_441, &Local_427);
	GUI_SET_TEXT(bLocal_441, "H - Actor Mode Toggle");
	bLocal_442 = GUI_MAKE_TEXT(bLocal_435, &Var24, "Spew Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_442, &Local_427);
	GUI_SET_TEXT(bLocal_442, "S - Spew Mode Toggle");
	bLocal_443 = GUI_MAKE_TEXT(bLocal_435, &Var28, "Monkey Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_443, &Local_427);
	GUI_SET_TEXT(bLocal_443, "N - Monkey Mode Toggle");
	GUI_SET_TEXT_JUSTIFY(bLocal_436, 2);
	GUI_SET_TEXT_JUSTIFY(bLocal_437, 2);
	GUI_SET_TEXT_JUSTIFY(bLocal_438, 2);
	GUI_SET_TEXT_JUSTIFY(bLocal_439, 2);
	GUI_SET_TEXT_JUSTIFY(bLocal_440, 2);
	GUI_SET_TEXT_JUSTIFY(bLocal_441, 2);
	GUI_SET_TEXT_JUSTIFY(bLocal_442, 2);
	GUI_SET_TEXT_JUSTIFY(bLocal_443, 2);
	return;
}

void Function_63() //Position: 0x322A / 12842
{
	Global_16517.f_8 = -1.0f;
	Global_16517.f_12 = -1.0f;
	Global_16517.f_16 = 0;
	return;
}

void Function_64(var uParam0, int iParam1) //Position: 0x3242 / 12866
{
	Global_16517.f_8 = uParam0;
	Global_16517.f_12 = iParam1;
	Global_16517.f_16 = 1;
	return;
}

void Function_65(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x325C / 12892
{
	int iVar0;
	bool bVar1;
	
	Function_70(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_69(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_66(StackVal, bVar1, bParam4);
		}
	}
}

void Function_66(bool bParam0, bool bParam1, bool bParam2) //Position: 0x32CE / 13006
{
	int iVar0;
	
	Function_70(bParam0);
	Function_68(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, bParam1);
	Function_67();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
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
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_67() //Position: 0x3447 / 13383
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_68(bool bParam0) //Position: 0x3453 / 13395
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

void Function_69(int iParam0, int iParam1) //Position: 0x3499 / 13465
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_70(iParam0);
	Function_68(iVar0);
	PRINTNL();
	Function_66(iParam0, iVar0, iParam1);
	return;
}

void Function_70(int iParam0) //Position: 0x34BE / 13502
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

void Function_71() //Position: 0x3504 / 13572
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	
	iVar2 = 0;
	bVar6 = false;
	bVar0 = CREATE_OBJECT_ITERATOR(Local_4);
	ITERATE_ON_OBJECT_TYPE(bVar0, 12);
	ITERATE_IN_LAYOUT(bVar0, FIND_NAMED_LAYOUT("artgringolayout"));
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1) && !bVar6)
	{
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bVar1)))
		{
			GET_OBJECT_POSITION(bVar1, &vVar3);
			if (VDIST(vVar3, -948,079f, 90,553f, 2427,758f) > 3.0f)
			{
				iVar2++;
				if (iVar2 == 1)
				{
					Local_114.f_500 = GET_GRINGO_FROM_OBJECT(bVar1);
				}
				if (iVar2 == 2)
				{
					Local_114.f_504 = GET_GRINGO_FROM_OBJECT(bVar1);
					bVar6 = true;
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_72() //Position: 0x35B9 / 13753
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = 0;
	bVar0 = CREATE_OBJECT_ITERATOR(Local_4);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_OBJECT_NAME(bVar1);
		if (STRING_CONTAINS_STRING(bVar2, "f_cow"))
		{
			Function_43(bVar1);
			*(&Local_114 + 236[iVar33]) = { StackVal, StackVal, Function_43(bVar1) };
			iVar3++;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_73() //Position: 0x3622 / 13858
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = 0;
	bVar0 = CREATE_OBJECT_ITERATOR(Local_4);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_OBJECT_NAME(bVar1);
		if (STRING_CONTAINS_STRING(bVar2, "f_chickens"))
		{
			Function_43(bVar1);
			*(&Local_114 + 404[iVar33]) = { StackVal, StackVal, Function_43(bVar1) };
			iVar3++;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_74() //Position: 0x3691 / 13969
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = 0;
	bVar0 = CREATE_OBJECT_ITERATOR(Local_4);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_OBJECT_NAME(bVar1);
		if (STRING_CONTAINS_STRING(bVar2, "f_dog"))
		{
			Function_43(bVar1);
			*(&Local_114 + 364[iVar33]) = { StackVal, StackVal, Function_43(bVar1) };
			iVar3++;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_75() //Position: 0x36FB / 14075
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = 0;
	bVar0 = CREATE_OBJECT_ITERATOR(Local_4);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_OBJECT_NAME(bVar1);
		if (STRING_CONTAINS_STRING(bVar2, "f_horse"))
		{
			Function_43(bVar1);
			*(&Local_114 + 300[iVar33]) = { StackVal, StackVal, Function_43(bVar1) };
			iVar3++;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_76() //Position: 0x3767 / 14183
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = 0;
	bVar0 = CREATE_OBJECT_ITERATOR(Local_4);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_OBJECT_NAME(bVar1);
		if (STRING_CONTAINS_STRING(bVar2, "f_human"))
		{
			Function_43(bVar1);
			*(&Local_114 + 768[iVar33]) = { StackVal, StackVal, Function_43(bVar1) };
			iVar3++;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_77() //Position: 0x37D3 / 14291
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = 0;
	bVar0 = CREATE_OBJECT_ITERATOR(Local_4);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_OBJECT_NAME(bVar1);
		if (STRING_CONTAINS_STRING(bVar2, "v_human"))
		{
			if (iVar3 <= 20)
			{
				(*&Local_114 + 1024)[iVar3] = GET_VOLUME_FROM_OBJECT(bVar1);
				iVar3++;
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_78() //Position: 0x3847 / 14407
{
	Function_79(4096);
	return;
}

void Function_79(int iParam0) //Position: 0x3853 / 14419
{
	int iVar0;
	
	if (Function_9(iParam0, 1) && Function_9(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_80() //Position: 0x3887 / 14471
{
	switch (Local_114.f_1200)
	{
		case 0x00000000:
			Function_79(8735);
			Function_93(287);
			Function_92(524351);
			Function_92(258048);
			Function_12("AMBIENT_MODE_DISABLED", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_8(8735);
			Function_90(287);
			Function_89(524351);
			Function_89(258048);
			Function_12("AMBIENT_MODE_ENABLED", 1,75f, 0, 0, 2, 1, 0);
			break;
	}
	Function_81(1, 0, 1);
	return;
}

void Function_81(var uParam0, bool bParam1, int iParam2) //Position: 0x392C / 14636
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_88(Global_29006))
		{
			Function_87(&(Global_29008[Global_29006]), 131072);
			Function_86(&(Global_29008[Global_29006]), 2097152);
			Function_84(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_83(&(Global_29008[iVar0]), 4) || Function_83(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_86(&(Global_29008[iVar0]), 2097155);
					Function_87(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_82())
			{
			}
			WAIT(false);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_82() //Position: 0x3A37 / 14903
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_83(var uParam0, int iParam1) //Position: 0x3A40 / 14912
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_84(int iParam0) //Position: 0x3A5C / 14940
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_85())
			{
				return;
			}
		}
		if (!Function_83(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_85() //Position: 0x3ADB / 15067
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_83(&(Global_29008[iVar0]), 4) || Function_83(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_86(var uParam0, int iParam1) //Position: 0x3B38 / 15160
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_87(var uParam0, int iParam1) //Position: 0x3B4F / 15183
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_88(int iParam0) //Position: 0x3B5E / 15198
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_89(int iParam0) //Position: 0x3B74 / 15220
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_90(int iParam0) //Position: 0x3B87 / 15239
{
	Function_91(&Global_28842, iParam0);
	return;
}

void Function_91(var uParam0, int iParam1) //Position: 0x3B95 / 15253
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_92(int iParam0) //Position: 0x3BB0 / 15280
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_93(int iParam0) //Position: 0x3BCD / 15309
{
	Function_94(&Global_28842, iParam0);
	return;
}

void Function_94(var uParam0, var uParam1) //Position: 0x3BDB / 15323
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_95() //Position: 0x3BFE / 15358
{
	if (!IS_LAYOUTREF_VALID(Local_114.f_1216))
	{
		Local_114.f_1216 = CREATE_LAYOUT("testLayout");
	}
	Local_114.f_1196 = 0;
	Local_114.f_1200 = 0;
	Local_114.f_1112 = 0;
	Local_114.f_1116 = 2;
	Local_114.f_1204 = 2;
	Local_114.f_1220 = 1;
	if (Function_96("nomonkeymode"))
	{
		Local_114.f_1224 = 1;
	}
	else
	{
		Local_114.f_1224 = 0;
		iLocal_113 = 0;
	}
	Local_114.f_1228 = 0;
	Local_114.f_456 = 0;
	Local_114.f_460 = 0;
	Local_114.f_464 = 0;
	Local_114.f_468 = 0;
	Local_114.f_508 = 0;
	Local_114.f_1212 = 0;
	return;
}

bool Function_96(bool bParam0) //Position: 0x3C9A / 15514
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

int Function_97() //Position: 0x3CB9 / 15545
{
	var uVar0;
	
	Function_98(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("test01_hen_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("test01_hen_layout");
	}
	Local_4.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_human1", 2, -790,9019f, 93,401f, 2382,715f, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
	Local_4.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_human2", 2, -821,3075f, 93,401f, 2349,509f, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
	Local_4.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_human3", 2, -902,0662f, 93,401f, 2396,724f, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
	Local_4.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_human4", 2, -913,6639f, 93,401f, 2360,106f, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
	Local_4.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_human5", 2, -797,0589f, 93,401f, 2421,296f, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
	Local_4.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_human6", 2, -892,9625f, 93,401f, 2443,778f, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
	Local_4.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_human7", 2, -949,5289f, 93,401f, 2441,557f, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
	Local_4.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_human8", 2, -953,6796f, 93,401f, 2402,487f, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
	Local_4.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_human9", 2, -853,657f, 93,401f, 2367,349f, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_chickens1", -883,5396f, 90,454f, 2430,47f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_chickens2", -882,5889f, 90,35291f, 2432,401f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_chickens3", -884,9233f, 90,454f, 2433,637f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_chickens4", -885,9918f, 90,454f, 2430,916f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_cow1", -880,916f, 91,10089f, 2449,784f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_cow2", -878,3541f, 90,62962f, 2471,302f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_cow3", -868,3701f, 91,09616f, 2471,94f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_cow4", -902,5751f, 91,24193f, 2466,917f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_cow5", -932,5222f, 90,35059f, 2466,713f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_horse1", -876,5859f, 92,11542f, 2342,473f, 0.0f, -142,5003f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_horse2", -922,873f, 93,04515f, 2394,888f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_horse3", -891,3814f, 92,40105f, 2371,413f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_horse4", -864,0949f, 92,46407f, 2364,008f, 0.0f, 31,49117f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_horse5", -875,8976f, 91,9112f, 2392,688f, 0.0f, -58,57828f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_dog1", -893,5049f, 90,81808f, 2411,349f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_dog2", -844,0212f, 92,20378f, 2381,68f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_dog3", -838,4879f, 93,40638f, 2424,073f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_human1", -828,8445f, 93,36469f, 2371,914f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_human2", -893,3773f, 90,59923f, 2466,118f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_human3", -924,1326f, 92,89313f, 2381,843f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_human4", -891,6597f, 92,15518f, 2342,377f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_human5", -878,5805f, 91,04387f, 2467,225f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_human6", -870,9523f, 91,65582f, 2433,415f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_human7", -866,6094f, 91,81848f, 2397,763f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_human8", -927,9342f, 91,62694f, 2461,759f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_human9", -823,6166f, 90,95261f, 2466,321f, 0.0f, 0.0f, 0.0f);
	Local_4.f_40 = CREATE_PATH_IN_LAYOUT(Local_4, "p_stagecoach", 5);
	ADD_POINT_TO_PATH(Local_4.f_40, -829,0908f, 91,87222f, 2405,625f);
	ADD_POINT_TO_PATH(Local_4.f_40, -846,4644f, 91,81083f, 2406,599f);
	ADD_POINT_TO_PATH(Local_4.f_40, -882,9191f, 91,23907f, 2421,656f);
	ADD_POINT_TO_PATH(Local_4.f_40, -912,4178f, 91,11148f, 2429,294f);
	ADD_POINT_TO_PATH(Local_4.f_40, -934,3558f, 90,98897f, 2437,515f);
	Local_4.f_44 = CREATE_PATH_IN_LAYOUT(Local_4, "p_cow1", 7);
	ADD_POINT_TO_PATH(Local_4.f_44, -886,1985f, 90,35291f, 2449,303f);
	ADD_POINT_TO_PATH(Local_4.f_44, -884,0001f, 90,35291f, 2456.0f);
	ADD_POINT_TO_PATH(Local_4.f_44, -876,0001f, 90,35291f, 2456,024f);
	ADD_POINT_TO_PATH(Local_4.f_44, -876,0707f, 90,35291f, 2452,071f);
	ADD_POINT_TO_PATH(Local_4.f_44, -880,0001f, 90,35291f, 2452.0f);
	ADD_POINT_TO_PATH(Local_4.f_44, -879,3877f, 90,35291f, 2448,046f);
	ADD_POINT_TO_PATH(Local_4.f_44, -884,0986f, 90,35291f, 2445,454f);
	Local_4.f_48 = CREATE_PATH_IN_LAYOUT(Local_4, "p_cow2", 8);
	ADD_POINT_TO_PATH(Local_4.f_48, -885,4565f, 90,35291f, 2464.0f);
	ADD_POINT_TO_PATH(Local_4.f_48, -884,0001f, 90,35291f, 2469,216f);
	ADD_POINT_TO_PATH(Local_4.f_48, -880,0001f, 90,35291f, 2472.0f);
	ADD_POINT_TO_PATH(Local_4.f_48, -876,0001f, 90,35291f, 2472.0f);
	ADD_POINT_TO_PATH(Local_4.f_48, -871,9528f, 90,35291f, 2468.0f);
	ADD_POINT_TO_PATH(Local_4.f_48, -872,0001f, 90,35291f, 2460.0f);
	ADD_POINT_TO_PATH(Local_4.f_48, -879,9667f, 90,35291f, 2460.0f);
	ADD_POINT_TO_PATH(Local_4.f_48, -883,8519f, 90,35291f, 2460,903f);
	Local_4.f_52 = CREATE_PATH_IN_LAYOUT(Local_4, "p_cow3", 7);
	ADD_POINT_TO_PATH(Local_4.f_52, -870,2077f, 90,35291f, 2477,479f);
	ADD_POINT_TO_PATH(Local_4.f_52, -864,1707f, 90,35291f, 2476,01f);
	ADD_POINT_TO_PATH(Local_4.f_52, -862,8528f, 90,35291f, 2472.0f);
	ADD_POINT_TO_PATH(Local_4.f_52, -865,0341f, 90,35291f, 2467,419f);
	ADD_POINT_TO_PATH(Local_4.f_52, -868,4548f, 90,35291f, 2470,291f);
	ADD_POINT_TO_PATH(Local_4.f_52, -872,0001f, 90,35291f, 2470,933f);
	ADD_POINT_TO_PATH(Local_4.f_52, -872,8658f, 90,35291f, 2480f);
	Local_4.f_56 = CREATE_PATH_IN_LAYOUT(Local_4, "p_cow4", 6);
	ADD_POINT_TO_PATH(Local_4.f_56, -912,0001f, 90,35291f, 2468,018f);
	ADD_POINT_TO_PATH(Local_4.f_56, -908,0001f, 90,35291f, 2464,13f);
	ADD_POINT_TO_PATH(Local_4.f_56, -900,0001f, 90,35291f, 2464,237f);
	ADD_POINT_TO_PATH(Local_4.f_56, -899,9828f, 90,35291f, 2472f);
	ADD_POINT_TO_PATH(Local_4.f_56, -904,0001f, 90,35291f, 2476,124f);
	ADD_POINT_TO_PATH(Local_4.f_56, -912,0001f, 90,35291f, 2473,672f);
	Local_4.f_60 = CREATE_PATH_IN_LAYOUT(Local_4, "p_cow5", 7);
	ADD_POINT_TO_PATH(Local_4.f_60, -935,2687f, 90,35291f, 2469,097f);
	ADD_POINT_TO_PATH(Local_4.f_60, -932,0001f, 90,35291f, 2472,001f);
	ADD_POINT_TO_PATH(Local_4.f_60, -924,0001f, 90,35291f, 2472,042f);
	ADD_POINT_TO_PATH(Local_4.f_60, -916,4521f, 90,35291f, 2464.0f);
	ADD_POINT_TO_PATH(Local_4.f_60, -922,0506f, 90,35291f, 2457,165f);
	ADD_POINT_TO_PATH(Local_4.f_60, -928,0001f, 90,35291f, 2456,871f);
	ADD_POINT_TO_PATH(Local_4.f_60, -935,0468f, 90,35291f, 2464.0f);
	Local_4.f_64 = CREATE_PATH_IN_LAYOUT(Local_4, "p_horse2", 9);
	ADD_POINT_TO_PATH(Local_4.f_64, -935,8875f, 91,35687f, 2396,286f);
	ADD_POINT_TO_PATH(Local_4.f_64, -932,6611f, 91,35687f, 2405,666f);
	ADD_POINT_TO_PATH(Local_4.f_64, -928,0001f, 91,35687f, 2404,039f);
	ADD_POINT_TO_PATH(Local_4.f_64, -916,0252f, 91,35687f, 2408,025f);
	ADD_POINT_TO_PATH(Local_4.f_64, -908,0374f, 91,35687f, 2400,037f);
	ADD_POINT_TO_PATH(Local_4.f_64, -908,0402f, 91,35687f, 2388,04f);
	ADD_POINT_TO_PATH(Local_4.f_64, -912,0001f, 91,35687f, 2384.0f);
	ADD_POINT_TO_PATH(Local_4.f_64, -924,0001f, 91,35687f, 2390,967f);
	ADD_POINT_TO_PATH(Local_4.f_64, -938,6851f, 91,35687f, 2387,351f);
	Local_4.f_68 = CREATE_PATH_IN_LAYOUT(Local_4, "p_horse3", 5);
	ADD_POINT_TO_PATH(Local_4.f_68, -896,0001f, 91,35687f, 2372,124f);
	ADD_POINT_TO_PATH(Local_4.f_68, -888,0001f, 91,35687f, 2376,126f);
	ADD_POINT_TO_PATH(Local_4.f_68, -884,0001f, 91,35687f, 2364,097f);
	ADD_POINT_TO_PATH(Local_4.f_68, -896,0001f, 91,35687f, 2360,147f);
	ADD_POINT_TO_PATH(Local_4.f_68, -900,0001f, 91,35687f, 2368,031f);
	Local_4.f_72 = CREATE_PATH_IN_LAYOUT(Local_4, "p_human0", 5);
	ADD_POINT_TO_PATH(Local_4.f_72, -894,8969f, 90,35291f, 2468.0f);
	ADD_POINT_TO_PATH(Local_4.f_72, -894,9393f, 90,35291f, 2462,939f);
	ADD_POINT_TO_PATH(Local_4.f_72, -890,7435f, 90,35291f, 2462,743f);
	ADD_POINT_TO_PATH(Local_4.f_72, -890,4959f, 90,35291f, 2468.0f);
	ADD_POINT_TO_PATH(Local_4.f_72, -894,7227f, 90,35291f, 2468.0f);
	Local_4.f_76 = CREATE_PATH_IN_LAYOUT(Local_4, "p_human1", 5);
	ADD_POINT_TO_PATH(Local_4.f_76, -832,0001f, 92,36078f, 2368f);
	ADD_POINT_TO_PATH(Local_4.f_76, -825,9052f, 92,36078f, 2368.0f);
	ADD_POINT_TO_PATH(Local_4.f_76, -826,2132f, 92,13472f, 2373,121f);
	ADD_POINT_TO_PATH(Local_4.f_76, -832,1111f, 92,37442f, 2373,173f);
	ADD_POINT_TO_PATH(Local_4.f_76, -832,0001f, 92,36078f, 2368f);
	Local_4.f_80 = CREATE_PATH_IN_LAYOUT(Local_4, "p_human2", 5);
	ADD_POINT_TO_PATH(Local_4.f_80, -934,0869f, 91,35687f, 2380.0f);
	ADD_POINT_TO_PATH(Local_4.f_80, -926,7858f, 91,35687f, 2374,786f);
	ADD_POINT_TO_PATH(Local_4.f_80, -923,539f, 91,35687f, 2382,539f);
	ADD_POINT_TO_PATH(Local_4.f_80, -930,308f, 91,35687f, 2386,308f);
	ADD_POINT_TO_PATH(Local_4.f_80, -934,3043f, 91,35687f, 2380.0f);
	Local_4.f_84 = CREATE_PATH_IN_LAYOUT(Local_4, "p_human3", 5);
	ADD_POINT_TO_PATH(Local_4.f_84, -890,2006f, 91,35687f, 2338,2f);
	ADD_POINT_TO_PATH(Local_4.f_84, -886,9903f, 91,35687f, 2344f);
	ADD_POINT_TO_PATH(Local_4.f_84, -892,0001f, 91,35687f, 2346,497f);
	ADD_POINT_TO_PATH(Local_4.f_84, -895,0751f, 91,37489f, 2340,944f);
	ADD_POINT_TO_PATH(Local_4.f_84, -890,2469f, 91,35687f, 2338,247f);
	Local_4.f_88 = CREATE_PATH_IN_LAYOUT(Local_4, "p_human4", 5);
	ADD_POINT_TO_PATH(Local_4.f_88, -880,0001f, 90,35291f, 2464.0f);
	ADD_POINT_TO_PATH(Local_4.f_88, -875,3629f, 90,35291f, 2464.0f);
	ADD_POINT_TO_PATH(Local_4.f_88, -875,3981f, 90,35291f, 2468.0f);
	ADD_POINT_TO_PATH(Local_4.f_88, -880,0001f, 90,35291f, 2468,053f);
	ADD_POINT_TO_PATH(Local_4.f_88, -880,0001f, 90,35291f, 2464.0f);
	Local_4.f_92 = CREATE_PATH_IN_LAYOUT(Local_4, "p_human5", 5);
	ADD_POINT_TO_PATH(Local_4.f_92, -848.0f, 90,35291f, 2444.0f);
	ADD_POINT_TO_PATH(Local_4.f_92, -852.0f, 90,35294f, 2443,945f);
	ADD_POINT_TO_PATH(Local_4.f_92, -852.0f, 90,35294f, 2439,994f);
	ADD_POINT_TO_PATH(Local_4.f_92, -848.0f, 90,35291f, 2439,942f);
	ADD_POINT_TO_PATH(Local_4.f_92, -848.0f, 90,35291f, 2444.0f);
	Local_4.f_96 = CREATE_PATH_IN_LAYOUT(Local_4, "p_human6", 5);
	ADD_POINT_TO_PATH(Local_4.f_96, -868,0001f, 90,35291f, 2436.0f);
	ADD_POINT_TO_PATH(Local_4.f_96, -872,0001f, 90,35291f, 2435,887f);
	ADD_POINT_TO_PATH(Local_4.f_96, -871,9943f, 90,35291f, 2431,959f);
	ADD_POINT_TO_PATH(Local_4.f_96, -868,0001f, 90,35291f, 2431,933f);
	ADD_POINT_TO_PATH(Local_4.f_96, -867,9262f, 90,35291f, 2435,926f);
	Local_4.f_100 = CREATE_PATH_IN_LAYOUT(Local_4, "p_human7", 5);
	ADD_POINT_TO_PATH(Local_4.f_100, -868,0001f, 91,35958f, 2396,067f);
	ADD_POINT_TO_PATH(Local_4.f_100, -864,0001f, 91,54836f, 2396,002f);
	ADD_POINT_TO_PATH(Local_4.f_100, -864.0f, 91,52386f, 2400,02f);
	ADD_POINT_TO_PATH(Local_4.f_100, -868,0001f, 91,5178f, 2400,064f);
	ADD_POINT_TO_PATH(Local_4.f_100, -868,0001f, 91,35958f, 2396,067f);
	Local_4.f_104 = CREATE_PATH_IN_LAYOUT(Local_4, "p_human8", 5);
	ADD_POINT_TO_PATH(Local_4.f_104, -928,0001f, 90,35291f, 2464.0f);
	ADD_POINT_TO_PATH(Local_4.f_104, -927,9529f, 90,35291f, 2460.0f);
	ADD_POINT_TO_PATH(Local_4.f_104, -924,0001f, 90,35291f, 2460.0f);
	ADD_POINT_TO_PATH(Local_4.f_104, -924,0001f, 90,35291f, 2464.0f);
	ADD_POINT_TO_PATH(Local_4.f_104, -927,9334f, 90,35291f, 2464.0f);
	Local_4.f_108 = CREATE_PATH_IN_LAYOUT(Local_4, "p_human9", 5);
	ADD_POINT_TO_PATH(Local_4.f_108, -824,0001f, 90,35291f, 2468.0f);
	ADD_POINT_TO_PATH(Local_4.f_108, -828,0001f, 90,35291f, 2468.0f);
	ADD_POINT_TO_PATH(Local_4.f_108, -828,0001f, 90,35291f, 2464.0f);
	ADD_POINT_TO_PATH(Local_4.f_108, -823,7744f, 90,36121f, 2464.0f);
	ADD_POINT_TO_PATH(Local_4.f_108, -824,0001f, 90,35291f, 2468.0f);
	Local_4.f_112 = CREATE_PATH_IN_LAYOUT(Local_4, "np_human10", 5);
	ADD_POINT_TO_PATH(Local_4.f_112, -824.0f, 93,36058f, 2419,948f);
	ADD_POINT_TO_PATH(Local_4.f_112, -828.0f, 93,36279f, 2419,947f);
	ADD_POINT_TO_PATH(Local_4.f_112, -828,0001f, 93,22066f, 2416.0f);
	ADD_POINT_TO_PATH(Local_4.f_112, -824,0001f, 93,04232f, 2415,965f);
	ADD_POINT_TO_PATH(Local_4.f_112, -824.0f, 93,3604f, 2419,946f);
	Local_4.f_116 = CREATE_PATH_IN_LAYOUT(Local_4, "np_human11", 5);
	ADD_POINT_TO_PATH(Local_4.f_116, -847,8285f, 91,26502f, 2388.0f);
	ADD_POINT_TO_PATH(Local_4.f_116, -843,7397f, 91,20431f, 2388.0f);
	ADD_POINT_TO_PATH(Local_4.f_116, -843,8341f, 91,28813f, 2392.0f);
	ADD_POINT_TO_PATH(Local_4.f_116, -847,9086f, 91,29056f, 2392.0f);
	ADD_POINT_TO_PATH(Local_4.f_116, -847,8285f, 91,26502f, 2388.0f);
	return 1;
}

void Function_98(int iParam0, int iParam1) //Position: 0x4E19 / 19993
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

var Function_99(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4E62 / 20066
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_6(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_54(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_54(uParam0[iVar03], 8);
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

void Function_100(int iParam0) //Position: 0x4F32 / 20274
{
	Function_101(iParam0, 0.0f);
	return;
}

void Function_101(var uParam0, float fParam1) //Position: 0x4F3E / 20286
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_103(uParam0, 1);
	Function_102(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_102(var uParam0, int iParam1) //Position: 0x4F5F / 20319
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_103(var uParam0, var uParam1) //Position: 0x4F72 / 20338
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

