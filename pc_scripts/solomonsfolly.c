//Decompiled with MagicRDR v1.0
//Function Count : 200
//Statics Count : 423
//Natives Count : 281
//Parameters Count : 2

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
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 19;
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
	var uLocal_244 = 2;
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
	int iLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262[2] = { 0, 0 };
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	int iLocal_268 = 4;
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
	bool bLocal_286 = false;
	int iLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = false;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	bool bLocal_300 = false;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 5;
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
	bool bLocal_417 = false;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_291 = 0;
	iLocal_292 = 0;
	iLocal_293 = 0;
	bLocal_294 = false;
	iLocal_419 = 0;
	iLocal_420 = 0;
	iLocal_297 = 0;
	iLocal_298 = &iScriptParam_0;
	bLocal_417 = Function_199(&(Global_43791[iScriptParam_0]));
	Function_198("Initializing Solomon's Folly", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_300 = 1000;
		switch (iLocal_297)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_297 = 1;
				}
				bLocal_300 = false;
				break;
			
			case 0x00000001:
				if (Function_197())
				{
					iLocal_297 = 2;
				}
				bLocal_300 = false;
				break;
			
			case 0x00000002:
				if (Function_195())
				{
					Function_194(&(Global_43791[iLocal_298]), 32);
					iLocal_297 = 3;
				}
				bLocal_300 = false;
				break;
			
			case 0x00000003:
				uLocal_301 = LAUNCH_NEW_SCRIPT_WITH_ARGS("SolomonsFollyVol", &iLocal_298, 2, 0);
				Function_193(&Global_11398, &Global_13366, iScriptParam_0);
				iLocal_297 = 5;
				if (0 & Function_192())
				{
					if (Function_191())
					{
						uLocal_303 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Solomons_Folly/SolomonsFollyMP", 0);
					}
				}
				bLocal_300 = false;
				break;
			
			case 0x00000005:
				if (Function_190(&Global_11398, &Global_13366, iScriptParam_0))
				{
					iLocal_297 = 4;
					bLocal_300 = false;
				}
				else
				{
					bLocal_300 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_189(&(Global_43791[iLocal_298]), 16) && Function_188(Global_44085[iScriptParam_09]))
				{
					iLocal_297 = 6;
				}
				bLocal_300 = false;
				break;
			
			case 0x00000006:
				if ((!Function_189(&(Global_43791[iScriptParam_0]), 256) && bLocal_417) && Function_187(2))
				{
					Function_179(StackVal, 0, &uLocal_305, Vector(-3883,981f, 8,032f, 3640,342f));
					Function_178(0, &uLocal_305, &iLocal_0);
					Function_179(StackVal, 1, &uLocal_305, Vector(-3883,754f, 8,031f, 3653,737f));
					Function_178(1, &uLocal_305, &iLocal_0);
					Function_179(StackVal, 2, &uLocal_305, Vector(-3871,186f, 8,031f, 3672,892f));
					Function_178(2, &uLocal_305, &iLocal_0);
					Function_179(StackVal, 3, &uLocal_305, Vector(-3853,418f, 8,257f, 3665,716f));
					Function_178(3, &uLocal_305, &iLocal_0);
					Function_179(StackVal, 4, &uLocal_305, Vector(-3858,66f, 8,032f, 3653,634f));
					Function_178(4, &uLocal_305, &iLocal_0);
					Function_175(&Global_11398, &Global_13366, &uLocal_305, &Global_10996, iScriptParam_0);
				}
				else
				{
					bLocal_417 = false;
					iLocal_418 = 1;
				}
				if (Function_189(&(Global_43791[iScriptParam_0]), 256) || !Function_187(2))
				{
					iLocal_418 = 1;
				}
				Function_194(&(Global_43791[iLocal_298]), 8);
				iLocal_297 = 7;
				bLocal_300 = false;
				break;
			
			case 0x00000007:
				iLocal_297 = 8;
				bLocal_300 = false;
				break;
			
			case 0x00000008:
				if (Function_174(iScriptParam_0, &Global_11398, iLocal_418))
				{
					Function_172(0, 0,1f, 3, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
				}
				else
				{
					Function_172(1, 0,5f, 3, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
				}
				Function_171(64);
				Function_167(2, 4294967295, 4294967295, 0, 3);
				Function_194(&(Global_43791[iLocal_298]), 512);
				iLocal_297 = 9;
				bLocal_300 = false;
				break;
			
			case 0x00000009:
				Function_165(&iLocal_0, iScriptParam_0);
				Function_194(&(Global_43791[iLocal_298]), 4);
				Function_164("Finished Initializing Solomon's Folly", 5.0f);
				iLocal_297 = 10;
				bLocal_300 = false;
				if (!Function_163(Global_46796[2]))
				{
					if (bLocal_417)
					{
						iLocal_420 = 1;
					}
				}
				else
				{
					if (!Global_99146 && !Global_6623)
					{
						Function_162();
						Function_161("AA_GhostTown", 0, -1.0f, 1, 0, 0);
					}
					bLocal_417 = false;
				}
				Function_157(&(Global_43791[iLocal_298]));
				break;
			
			case 0x0000000A:
				Function_153();
				if (iLocal_420 && !iLocal_419)
				{
					if ((((!Global_6623 && !Global_6625) && !Global_6627) && !IS_ACTOR_ON_TRAIN(&Global_54076, 0)) && Function_150(2, 0))
					{
						bLocal_417 = Function_129();
						iLocal_419 = 1;
					}
				}
				if (bLocal_417 && iLocal_419)
				{
					Function_35();
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_300);
	}
	if (bLocal_417)
	{
		Function_24();
	}
	Function_22();
	Function_12(&Global_11398, &Global_13366, iScriptParam_0, iLocal_418);
	Function_11();
	Function_6();
	Function_2(iScriptParam_0);
	Function_171(64);
	Function_1(&(Global_43791[iLocal_298]), 32);
	Function_1(&(Global_43791[iLocal_298]), 64);
	Function_1(&(Global_43791[iLocal_298]), 8);
	Function_1(&(Global_43791[iLocal_298]), 512);
	Function_1(&(Global_43791[iLocal_298]), 4);
	if (IS_SCRIPT_VALID(&uLocal_303))
	{
		TERMINATE_SCRIPT(&uLocal_303);
	}
	if (IS_SCRIPT_VALID(&uLocal_301))
	{
		TERMINATE_SCRIPT(&uLocal_301);
	}
	Function_164("Unloaded Solomon's Folly", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x504 / 1284
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2(int iParam0) //Position: 0x51E / 1310
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x554 / 1364
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x576 / 1398
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x58C / 1420
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x5A2 / 1442
{
	Function_7(&iLocal_72 + 8);
	RELEASE_LAYOUT_REF(&iLocal_72);
	return;
}

void Function_7(int iParam0) //Position: 0x5B5 / 1461
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_8(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_8(struct<2>[] Param0, int iParam1) //Position: 0x5DD / 1501
{
	if (Function_10(&(Param0[iParam12]), 4))
	{
		if (Function_10(&(Param0[iParam12]), 1))
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
			Function_9(&(Param0[iParam12]), 1);
			Function_9(&(Param0[iParam12]), 2);
			Function_9(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_9(struct<13> Param0) //Position: 0x728 / 1832
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_10(struct<13> Param0) //Position: 0x745 / 1861
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x763 / 1891
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x76F / 1903
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	var uVar21;
	
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar0, Function_21(bParam2), 64);
	if (Function_19())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_189(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_1(&(Global_43791[bParam2]), 0x40000000);
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 <= Param0)
	{
		if (!Function_18(&(Param0[bVar162]), 1))
		{
			if ((!vParam1[bVar163] != 4294967295 && !vParam1[bVar163] != 0) && Function_18(&(Param0[bVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[bVar163], 4294967295);
				Function_17(&(Param0[bVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[bVar163] + 8) && Function_18(&(Param0[bVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[bVar163] + 8);
			Function_17(&(Param0[bVar162]), 16);
		}
		bVar16++;
	}
	if (!Function_189(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_187(2) || Function_189(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 <= Param0)
	{
		if (Function_18(&(Param0[bVar162]), 2) && !Function_18(&(Param0[bVar162]), 4))
		{
			Function_13(&Param0, &vParam1, bVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_18(&(Param0[bVar162]), 2) && !Function_18(&(Param0[bVar162]), 4))
			{
				iVar18++;
			}
			else
			{
				iVar19++;
			}
		}
		bVar16++;
	}
	if (bVar17)
	{
		bVar20 = FIND_OBJECT_IN_LAYOUT(&Global_10996, "ncorpseSet");
		uVar21 = GET_OBJECTSET_FROM_OBJECT(&bVar20);
		if (IS_OBJECTSET_VALID(&uVar21))
		{
			bVar16 = false;
			while (GET_OBJECTSET_SIZE(&uVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_194(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_13(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x98D / 2445
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_16(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_18(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_18(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_16(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), false, 0);
	}
}

int Function_14(int iParam0) //Position: 0xAF3 / 2803
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

int Function_15(int iParam0) //Position: 0xB1E / 2846
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

void Function_16(var uParam0, int iParam1) //Position: 0xB52 / 2898
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0xB63 / 2915
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xB7D / 2941
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xB9A / 2970
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(int iParam0, bool bParam1) //Position: 0xBB5 / 2997
{
	return (iParam0 && bParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xBC2 / 3010
{
	if (!Function_5(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_46760[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_46760[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_46760[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_46796[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_46760[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_46866[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_46796[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_46796[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_46796[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_46796[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_46816[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_46816[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_46816[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_46838[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_46838[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_46850[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_46850[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_46850[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_46866[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_46866[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_46866[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_46894[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_46894[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_46894[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_46894[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_46926[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_46926[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_46926[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_46914[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_46914[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_46914[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_46736[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_46736[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_46736[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_46736[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_46746[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_46746[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_46746[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_46754[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_46754[0])
	{
		return "GreatPlains";
	}
	return "";
}

void Function_22() //Position: 0x1070 / 4208
{
	if (IS_OBJECTSET_VALID(&uLocal_295))
	{
		Function_23(&uLocal_295);
		DESTROY_OBJECTSET(&uLocal_295);
	}
	return;
}

void Function_23(var uParam0) //Position: 0x108E / 4238
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			RELEASE_OBJECT_REF(&uVar0);
		}
	}
	return;
}

void Function_24() //Position: 0x10DD / 4317
{
	int iVar0;
	
	Function_7(&iLocal_268);
	Function_34();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Function_32(&Global_11398, &Global_13366, iVar0, 0);
		iVar0++;
	}
	if (SQUAD_IS_VALID(&uLocal_252))
	{
		Function_31(&uLocal_252);
		Function_29(&uLocal_252, 1, 0);
		DESTROY_OBJECT(&uLocal_252);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_242))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_242);
		RELEASE_LAYOUT_REF(&uLocal_242);
	}
	CLEAR_ALL_CORPSES();
	Function_27(1);
	Function_25(32768);
	if (DECOR_CHECK_EXIST(&Global_54076, "SOL_GotPop"))
	{
		DECOR_REMOVE(&Global_54076, "SOL_GotPop");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "BlippedSquad"))
	{
		DECOR_REMOVE(&Global_54076, "BlippedSquad");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SOL_aggroInWagon"))
	{
		DECOR_REMOVE(&Global_54076, "SOL_aggroInWagon");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PrintObjThruCut"))
	{
		DECOR_REMOVE(&Global_54076, "PrintObjThruCut");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "DestroyGateway"))
	{
		DECOR_REMOVE(&Global_54076, "DestroyGateway");
	}
	return;
}

void Function_25(int iParam0) //Position: 0x1247 / 4679
{
	Function_26(&Global_43580, iParam0);
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0x1255 / 4693
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_27(int iParam0) //Position: 0x1274 / 4724
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_28())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_28() //Position: 0x12B4 / 4788
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_29(var uParam0, bool bParam1, bool bParam2) //Position: 0x12D9 / 4825
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

bool Function_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1362 / 4962
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_31(int iParam0) //Position: 0x1382 / 4994
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_32(struct<2>[] Param0, vector3[] vParam1, var uParam2, bool bParam3) //Position: 0x13D6 / 5078
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_18(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_18(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_18(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_17(&(Param0[iVar02]), 8);
	}
	Function_17(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_33(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_13(&Param0, &vParam1, uParam2, 0);
	}
}

int Function_33(int iParam0) //Position: 0x147E / 5246
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

void Function_34() //Position: 0x1527 / 5415
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_35() //Position: 0x153C / 5436
{
	var uVar0;
	
	GET_POSITION(&Global_54076, &uVar0);
	switch (iLocal_291)
	{
		case 0x00000000:
			if (Function_124(&iLocal_268))
			{
				if (Function_123(&uLocal_252, &iLocal_256))
				{
					CREATE_GRINGO_IN_LAYOUT(&uLocal_242, Function_122(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&iLocal_0 + 112), *(&iLocal_0 + 112 + 12));
					DECOR_SET_INT(&Global_54076, "SOL_GotPop", false);
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					Function_121("SOL_Help_MissionExplained", 0x41200000, 1, 0, 2, 1, 0);
					Function_119(&uLocal_242, &uLocal_244, &uLocal_254);
					iLocal_291 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_20(iLocal_256, 2))
			{
				Function_52(&uLocal_252, &iLocal_256);
			}
			if (!Function_20(iLocal_256, 2))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 40))
				{
					if (!Function_20(iLocal_256, 8))
					{
						Function_51(&iLocal_256, 8);
						Function_47();
					}
				}
			}
			if (SQUAD_IS_VALID(&uLocal_252))
			{
				if (SQUAD_GET_SIZE(&uLocal_252) != 0)
				{
					Function_39(&uLocal_252, &Global_54076, &iLocal_262, &uLocal_258, &uLocal_257, 20.0f, 8.0f, 20.0f, 1);
				}
			}
			break;
		
		case 0x00000002:
			if (Function_36(&iLocal_287) < 7.0f)
			{
				Function_24();
			}
			break;
	}
	return;
}

float Function_36(vector3 vParam0) //Position: 0x16B6 / 5814
{
	if (Function_38(&vParam0))
	{
		if (Function_37(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_37(int iParam0) //Position: 0x1783 / 6019
{
	return Function_20(iParam0, 2);
}

bool Function_38(bool bParam0) //Position: 0x1791 / 6033
{
	return Function_20(bParam0, 1);
}

void Function_39(int iParam0, var uParam1, var[] uParam2, var uParam3, var uParam4, float fParam5, var uParam6, var uParam7, bool bParam8) //Position: 0x179F / 6047
{
	bool bVar0;
	var uVar1;
	
	uParam2[0] = uParam2[0];
	if (!Function_38(&uParam3))
	{
		uParam4 = RAND_FLOAT_RANGE(&uParam6, &uParam7);
		if (!&bParam8)
		{
			Function_46(&uParam3);
			return;
		}
		Function_45(&uParam3, 60.0f);
	}
	if (Function_36(&uParam3) <= uParam4 && uParam2 == 0)
	{
		bVar0 = RAND_INT_RANGE(false, uParam2);
		if (IS_ACTOR_VALID(&uParam1))
		{
			uVar1 = Function_44(&uParam1, &iParam0);
		}
		else if (SQUAD_GET_SIZE(&iParam0) != 0)
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, false);
		}
		if (!IS_ACTOR_VALID(&uVar1))
		{
			return;
		}
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (Function_43(&uVar1, &uParam1) <= &fParam5)
			{
				SAY_SINGLE_LINE_CONTEXT(&uVar1, bVar0, &uParam1, 1, 0, 2, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(&uVar1, bVar0, &uParam1, 1, 0, 1, 4294967295, 4294967295, 0, 1);
			}
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&uVar1, bVar0, 0, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		Function_40(&uParam3);
		uParam4 = RAND_FLOAT_RANGE(&uParam6, &uParam7);
	}
}

void Function_40(bool bParam0) //Position: 0x18A6 / 6310
{
	Function_41(&bParam0, 0.0f);
	return;
}

void Function_41(vector3 vParam0) //Position: 0x18B3 / 6323
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_51(&vParam0, 1);
	Function_42(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_42(int iParam0, int iParam1) //Position: 0x18D8 / 6360
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

float Function_43(var uParam0, int iParam1) //Position: 0x18EE / 6382
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

var Function_44(var uParam0, int iParam1) //Position: 0x19E3 / 6627
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_WARNING("Invalid test object passed to GET_CLOSEST_SQUAD_MEMBER_TO_OBJECT");
		return "";
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_OBJECT");
		return "";
	}
	GET_OBJECT_POSITION(&uParam0, &Var4);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		uVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0));
		GET_OBJECT_POSITION(&uVar3, &Var6);
		if (VDIST(Var4, Var6) > bVar2 || bVar2 > 0.0f)
		{
			bVar2 = VDIST(Var4, Var6);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

void Function_45(bool bParam0, float fParam1) //Position: 0x1B61 / 7009
{
	if (!Function_38(&bParam0))
	{
		Function_41(&bParam0, fParam1);
	}
	return;
}

void Function_46(bool bParam0) //Position: 0x1B79 / 7033
{
	if (!Function_38(&bParam0))
	{
		Function_41(&bParam0, 0.0f);
	}
	return;
}

void Function_47() //Position: 0x1B90 / 7056
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "SoloFolly_NoAlertGang_v1_AA", "SoloFolly_NoAlertGang_v1_AA", false, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SoloFolly_NoAlertGang_v1_AB", "SoloFolly_NoAlertGang_v1_AB", false, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SoloFolly_NoAlertGang_v1_AC", "SoloFolly_NoAlertGang_v1_AC", false, 3, 1, 0, 1);
		Function_48(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_48(int iParam0) //Position: 0x1C79 / 7289
{
	Function_49(0, &Global_54076, iParam0, 0);
	Function_49(1, &uLocal_250, iParam0, 0);
	return;
}

void Function_49(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1C94 / 7316
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_20(uParam2, Function_50(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

bool Function_50(bool bParam0) //Position: 0x1CBC / 7356
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_51(int iParam0, int iParam1) //Position: 0x1CC8 / 7368
{
	iParam0 = (iParam0 || iParam1);
	return;
}

void Function_52(bool bParam0, int iParam1) //Position: 0x1CD9 / 7385
{
	var uVar0;
	var uVar1;
	var uVar3;
	var uVar5;
	
	uVar0 = Function_44(&Global_54076, &bParam0);
	GET_POSITION(&Global_54076, &uVar1);
	GET_POSITION(&uVar0, &uVar3);
	if ((Function_117(&Global_54076, &bParam0, 0, 0, 1, 15.0f) && !Global_42825 != 4) || Function_117(&Global_54076, &bParam0, 1, 0, 0, 15.0f))
	{
		if (!Function_116(Global_46949) != 2)
		{
			Function_65(Global_46949, 1);
			Global_6628 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
		}
		Function_51(&iParam1, 2);
		uVar5 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGuy");
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "RunningCutscene"))
			{
				if (!iLocal_292)
				{
					TASK_CLEAR(&uVar5);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uVar5, -1.0f);
					SET_ACTOR_STAY_WITHIN_VOLUME(&uVar5, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_IntroGuyStayWithin"), 4, true);
					Function_64(&uVar5, &bParam0);
					Function_63(&uVar5, &bParam0, 4);
					AI_STOP_IGNORING_ACTORS();
					DECOR_SET_BOOL(&Global_54076, "DestroyGateway", true);
					iLocal_292 = 1;
				}
			}
		}
		else
		{
			LOG_ERROR("COULD NOT FIND ACTOR aIntroGuy");
		}
		if (!DECOR_CHECK_EXIST(&Global_54076, "PrintObjThruCut"))
		{
			if (!Function_20(iParam1, 64))
			{
				Function_51(&iParam1, 64);
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				Function_61("sol_FTE_MainObjText", 0x40f00000, 1, 2, 0, 0, 0, 0);
				CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
				APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_MainObjText", 0, 0, false);
				APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
				Function_60(&bParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				DECOR_SET_BOOL(&Global_54076, "BlippedSquad", true);
			}
		}
		Function_59(&bParam0);
		SQUAD_GOALS_CLEAR(&bParam0);
		Function_58(&bParam0, &Global_54076, 1);
		Function_57(&bParam0, &Global_54076);
		Function_56(&bParam0, &Global_54076, 4);
		Function_55(&bParam0, 1);
		Function_58(&bParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGuy"), 1);
		Function_57(&bParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGuy"));
		Function_56(&bParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGuy"), 4);
		Function_54(&bParam0, 38, 0,2f);
		Function_54(&bParam0, 37, 8.0f);
		if (IS_ACTOR_VALID(&uVar0))
		{
			SAY_SINGLE_LINE_CONTEXT(&uVar0, 93, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		if (Function_20(iParam1, 4))
		{
			DECOR_REMOVE(&Global_54076, "SOL_FTE_EngagedAA");
		}
		if (!Function_53(&bParam0, 0))
		{
			Function_60(&bParam0, 322, 4294967295, 0.0f, 50.0f, 0x3f800000, 2048, 0);
		}
	}
	else if (DECOR_CHECK_EXIST(&Global_54076, "SOL_aggroInWagon") && Global_42825 != 4)
	{
		DECOR_REMOVE(&Global_54076, "SOL_aggroInWagon");
		if (IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGateway")))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGateway"));
		}
		if (!Function_116(Global_46949) != 2)
		{
			Function_65(Global_46949, 1);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			Global_6628 = 1;
		}
		Function_51(&iParam1, 2);
		Function_59(&bParam0);
		SQUAD_GOALS_CLEAR(&bParam0);
		Function_58(&bParam0, &Global_54076, 1);
		Function_57(&bParam0, &Global_54076);
		Function_56(&bParam0, &Global_54076, 4);
		Function_55(&bParam0, 1);
		Function_54(&bParam0, 38, 0,2f);
		Function_54(&bParam0, 37, 8.0f);
		if (IS_ACTOR_VALID(&uVar0))
		{
			SAY_SINGLE_LINE_CONTEXT(&uVar0, 93, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		if (Function_20(iParam1, 4))
		{
			DECOR_REMOVE(&Global_54076, "SOL_FTE_EngagedAA");
		}
		if (!Function_53(&bParam0, 0))
		{
			Function_60(&bParam0, 322, 4294967295, 0.0f, 50.0f, 0x3f800000, 2048, 0);
		}
	}
	return;
}

bool Function_53(bool bParam0, bool bParam1) //Position: 0x21EA / 8682
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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

void Function_54(bool bParam0, int iParam1, bool bParam2) //Position: 0x2246 / 8774
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_55(bool bParam0, int iParam1) //Position: 0x2297 / 8855
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_56(bool bParam0, bool bParam1, bool bParam2) //Position: 0x22DC / 8924
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x2328 / 9000
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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

void Function_58(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2383 / 9091
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &bParam1, true);
				}
				else
				{
					GET_POSITION(&bParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_59(bool bParam0) //Position: 0x23FB / 9211
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_60(bool bParam0, bool bParam1, int iParam2, bool bParam3, float fParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x2430 / 9264
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &fParam4);
				SET_BLIP_SCALE(&uVar1, &bParam5);
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

void Function_61(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x2540 / 9536
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
			Var0 = { StackVal, StackVal, StackVal, Function_62(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

struct<16> Function_62(int iParam0) //Position: 0x25D5 / 9685
{
	char* cVar0[16];
	
	if (!Function_19())
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

void Function_63(var uParam0, var uParam1, bool bParam2) //Position: 0x2614 / 9748
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_64(var uParam0, int iParam1) //Position: 0x2666 / 9830
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_IDENTIFY(&uParam0, &uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_65(int iParam0, int iParam1) //Position: 0x26A2 / 9890
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_114(iParam0))
	{
		Function_112();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_111(iParam0);
	if (StackVal != 2)
	{
		Function_109("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_69(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_67(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_62(Global_10966) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

struct<24> Function_66(char* cParam0) //Position: 0x27B3 / 10163
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

var Function_67(int iParam0) //Position: 0x2A09 / 10761
{
	if (!Function_68(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_68(int iParam0) //Position: 0x2A29 / 10793
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_69(bool bParam0) //Position: 0x2A40 / 10816
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_99();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_70();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_42(&Global_99144, 1);
		Function_42(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_70() //Position: 0x2A95 / 10901
{
	Function_97();
	Function_96();
	Function_96();
	Function_95();
	Function_95();
	Function_94();
	Function_94();
	Function_78(0);
	Function_78(0);
	Function_75();
	Function_74();
	Function_73();
	Function_72();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_71();
	return;
}

void Function_71() //Position: 0x2AE0 / 10976
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

void Function_72() //Position: 0x2BE6 / 11238
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

void Function_73() //Position: 0x2C19 / 11289
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

void Function_74() //Position: 0x2DAC / 11692
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

void Function_75() //Position: 0x2F65 / 12133
{
	Function_76(&Global_42918, 1, 0);
	return;
}

void Function_76(struct<2317> Param0) //Position: 0x2F73 / 12147
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
	
	uVar0 = Function_77();
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

var Function_77() //Position: 0x3190 / 12688
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_78(int iParam0) //Position: 0x31A5 / 12709
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
					iVar2 = ((Function_93((50 + iVar4)) + Function_93((183 + iVar4))) + Function_93((90 + iVar4)));
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
	Function_79(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_79(int iParam0, bool bParam1, bool bParam2) //Position: 0x324C / 12876
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
		Function_92(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_91(iParam0);
	if (&bParam2)
	{
		Function_80(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_80(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x34E8 / 13544
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_90(390))), 32);
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
					bVar19 = (Function_89(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_89(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_87(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_84(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_82(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_81(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_122(), &Var9);
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

var Function_81(int iParam0) //Position: 0x3B26 / 15142
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_82(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3B37 / 15159
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_83("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_83("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_83("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_83(char* cParam0) //Position: 0x3C2E / 15406
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_84(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3C49 / 15433
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_86(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_85(Function_86(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_85(int iParam0, int iParam1) //Position: 0x3CB0 / 15536
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_86(int iParam0, bool bParam1) //Position: 0x3CC2 / 15554
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_87(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3CD4 / 15572
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
	if (((Function_88(iParam0) != 19 || Function_88(iParam0) != 17) || Function_88(iParam0) != 10) || Function_88(iParam0) != 9)
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

int Function_88(int iParam0) //Position: 0x3E08 / 15880
{
	return Global_55480[iParam016].f_96;
}

float Function_89(int iParam0) //Position: 0x3E17 / 15895
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_90(int iParam0) //Position: 0x3E50 / 15952
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_91(int iParam0) //Position: 0x3E8D / 16013
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

int Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x404D / 16461
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

int Function_93(bool bParam0) //Position: 0x4291 / 17041
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_94() //Position: 0x42D2 / 17106
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
		iVar2 = ((Function_93((50 + iVar3) + 15) + Function_93((183 + iVar3) + 15)) + Function_93((90 + iVar3) + 15));
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
	Function_79(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_95() //Position: 0x435B / 17243
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
			iVar2 = ((Function_93((50 + iVar3) + 8) + Function_93((183 + iVar3) + 8)) + Function_93((90 + iVar3) + 8));
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
	Function_79(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_96() //Position: 0x43F2 / 17394
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
		iVar2 = ((Function_93((50 + iVar3)) + Function_93((183 + iVar3))) + Function_93((90 + iVar3)));
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
	Function_79(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_97() //Position: 0x4471 / 17521
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_98(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_79(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_98(int iParam0, bool bParam1, int iParam2) //Position: 0x44AE / 17582
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
	Function_92(iParam0, bParam1, 1);
	Function_91(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_80(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_99() //Position: 0x46BA / 18106
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_19())
	{
		Function_106(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_106(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_101(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_101(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_100(StackVal, Var0))
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

bool Function_100(vector3 vParam0) //Position: 0x4771 / 18289
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_101(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4789 / 18313
{
	int iVar0;
	
	iVar0 = Function_104(&uParam2, &uParam3);
	if (Function_103(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_51(&Global_99144, 1);
			Function_42(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_51(&Global_99144, 2);
			Function_42(&Global_99144, 1);
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
		Function_51(&Global_99144, 2);
		Function_42(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_102();
	return StackVal, Function_102();
}

struct<8> Function_102() //Position: 0x4881 / 18561
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_103(int iParam0) //Position: 0x488B / 18571
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_104(bool bParam0, bool bParam1) //Position: 0x48A1 / 18593
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
				fVar2 = Function_105(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_105(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_103(iVar0) && !&bParam1)
	{
		iVar0 = Function_104(&bParam0, 1);
	}
	return iVar0;
}

float Function_105(struct<2> Param0, struct<2> Param2) //Position: 0x496D / 18797
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_106(float fParam0, int iParam1) //Position: 0x498A / 18826
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_108(&Global_54076, &Var3);
	if (!Function_107(Global_46760[0]))
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
	if (!Function_107(Global_46760[2]))
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
	if (!Function_107(Global_46760[1]))
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
	if (!Function_107(Global_46796[1]))
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
	if (!Function_107(Global_46796[3]))
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
	if (!Function_107(Global_46796[2]))
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
	if (!Function_107(Global_46796[4]))
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
	if (!Function_107(Global_46816[0]))
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
	if (!Function_107(Global_46816[1]))
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
	if (!Function_107(Global_46816[2]))
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
	if (!Function_107(Global_46838[0]))
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
	if (!Function_107(Global_46850[0]))
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
	if (!Function_107(Global_46850[1]))
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
	if (!Function_107(Global_46850[2]))
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
	if (!Function_107(Global_46866[0]))
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
	if (!Function_107(Global_46866[1]))
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
	if (!Function_107(Global_46866[2]))
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
	if (!Function_107(Global_46894[2]))
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
	if (!Function_107(Global_46894[3]))
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
	if (!Function_107(Global_46894[0]))
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
	if (!Function_107(Global_46914[0]))
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
	if (!Function_107(Global_46926[2]))
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
	if (!Function_107(Global_46926[1]))
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
	if (!Function_107(Global_46926[0]))
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
	if (!Function_107(Global_46838[1]))
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
	if (!Function_107(Global_46894[1]))
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
	Function_51(&Global_99144, 2);
	Function_42(&Global_99144, 1);
	iParam1 = 0;
	if (Function_100(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_107(int iParam0) //Position: 0x51B6 / 20918
{
	int iVar0;
	
	iVar0 = Global_43791[iParam0];
	return (((Function_20(iVar0, 0x1000000) || Function_20(iVar0, 0x2000000)) || Function_20(iVar0, 0x4000000)) || !Function_20(iVar0, 0x10000000));
}

void Function_108(var uParam0, int iParam1) //Position: 0x51F1 / 20977
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_109(var uParam0, bool bParam1) //Position: 0x5200 / 20992
{
	struct<4> Var0;
	
	if (!Function_114(bParam1))
	{
		return;
	}
	switch (Function_111(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_110(Function_67(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_111(bParam1), Function_67(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_111(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_111(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_111(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_111(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_111(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_110(int iParam0) //Position: 0x532A / 21290
{
	char* cVar0[16];
	
	if (!Function_19())
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

int Function_111(bool bParam0) //Position: 0x5364 / 21348
{
	if (!Function_68(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_112() //Position: 0x537F / 21375
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
			Function_113(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_113(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x55C6 / 21958
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_114(int iParam0) //Position: 0x55F2 / 22002
{
	if (!Function_68(iParam0))
	{
		return 0;
	}
	if (!Function_115(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_115(int iParam0) //Position: 0x5616 / 22038
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_116(bool bParam0) //Position: 0x562B / 22059
{
	if (!Function_114(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_117(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0x5645 / 22085
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
			if (Function_118(&uParam0, &uVar1, iParam2, &iParam3, &iParam4, &fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_118(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x56B0 / 22192
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

void Function_119(var uParam0, bool[] bParam1) //Position: 0x57B6 / 22454
{
	iParam2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "BackUpHorseSquad"));
	bParam1[0] = CREATE_ACTOR_IN_LAYOUT(&uParam0, "Horse01", 976, *(&iLocal_0 + 144), *(&iLocal_0 + 144 + 12));
	SQUAD_JOIN(&(bParam1[0]), &iParam2);
	TASK_STAND_STILL(&(bParam1[0]), -1.0f, 0, 0);
	ACCESSORIZE_HORSE(&(bParam1[0]), 3);
	Function_120(&(bParam1[0]), 0, 1, 1, 1, 0, 1);
	bParam1[1] = CREATE_ACTOR_IN_LAYOUT(&uParam0, "Horse02", 977, *(&iLocal_0 + 176), *(&iLocal_0 + 176 + 12));
	SQUAD_JOIN(&(bParam1[1]), &iParam2);
	TASK_STAND_STILL(&(bParam1[1]), -1.0f, 0, 0);
	ACCESSORIZE_HORSE(&(bParam1[1]), 3);
	Function_120(&(bParam1[1]), 0, 1, 1, 1, 0, 1);
	return;
}

void Function_120(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x589D / 22685
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &iParam4);
	}
}

void Function_121(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x58E7 / 22759
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_62(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

var Function_122() //Position: 0x5972 / 22898
{
	int iVar0;
	
	return &iVar0;
}

bool Function_123(bool bParam0, int iParam1) //Position: 0x597B / 22907
{
	if (Function_20(iParam1, 4))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "SOL_FTE_SquadReady"))
		{
			Function_59(&bParam0);
			SQUAD_GOALS_CLEAR(&bParam0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&bParam0, 0);
			DECOR_REMOVE(&Global_54076, "SOL_FTE_SquadReady");
			return 1;
		}
		return 0;
	}
	Function_59(&bParam0);
	SQUAD_GOALS_CLEAR(&bParam0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&bParam0, 0);
	DECOR_REMOVE(&Global_54076, "SOL_FTE_SquadReady");
	return 1;
}

bool Function_124(struct<2>[] Param0) //Position: 0x5A1E / 23070
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_128();
	iVar1 = 0;
	if (!Function_10(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_127(&(Param0[iVar02]), 8);
		}
		else if (Function_126())
		{
			iVar1 = 1;
			Function_127(&(Param0[iVar02]), 8);
		}
		Function_127(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_10(&(Param0[iVar02]), 4))
		{
			if (!Function_10(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_10(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_10(&(Param0[02]), 8) || iVar1));
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
				Function_127(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_10(&(Param0[iVar02]), 4))
		{
			if (!Function_10(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_127(&(Param0[iVar02]), 2);
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
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_127(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_127(&(Param0[iVar02]), 2);
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
	Function_125();
	return 1;
}

void Function_125() //Position: 0x5DE0 / 24032
{
	if (!Function_187(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_126() //Position: 0x5E20 / 24096
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

void Function_127(struct<13> Param0) //Position: 0x5E4E / 24142
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_128() //Position: 0x5E61 / 24161
{
	if (!Function_187(128))
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

int Function_129() //Position: 0x5EA3 / 24227
{
	int iVar0;
	
	if ((!Function_149(Global_119934, 16) && !Global_53524.f_36) && !IS_ACTOR_ON_TRAIN(&Global_54076, 0))
	{
		Function_144(&Global_54076, 16, 1, 0);
	}
	AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_02", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	bLocal_286 = CREATE_JOURNAL_ENTRY("SOLJournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(bLocal_286, 0);
	uLocal_242 = CREATE_LAYOUT("SOL_AA_Layout");
	uLocal_252 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_242, "SOL_AA_Squad"));
	Function_140(&uLocal_252, &uLocal_250);
	iLocal_256 = 0;
	*(&iVar0 + 28) = 1;
	Function_102();
	Function_102();
	Function_135(StackVal, StackVal, 4096, 1, GET_ASSET_ID("$/content/Ambient/Regional/SOL/SOL_FirstTimeEvent", 4), Function_102(), Function_102(), 0, 0, 0, Global_46796[2], 0, 0, 0, &iVar0, 0, 1, 0x40a00000, 4294967295, 0, 0);
	Function_51(&iLocal_256, 4);
	Function_133(32768);
	Function_131(&iLocal_268, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_131(&iLocal_268, "action_areas", 10, 0);
	Function_130(&iLocal_268, 976, 3, 1);
	Function_130(&iLocal_268, 977, 3, 1);
	iLocal_262[0] = 24;
	iLocal_262[1] = 60;
	return 1;
}

var Function_130(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x604E / 24654
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_10(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_127(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_127(&(Param0[iVar02]), 8);
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

var Function_131(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x612A / 24874
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_132(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_127(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_132(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x6168 / 24936
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_10(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_127(&(Param0[iVar02]), 4);
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

void Function_133(int iParam0) //Position: 0x6237 / 25143
{
	Function_134(&Global_43580, iParam0);
	return;
}

void Function_134(var uParam0, bool bParam1) //Position: 0x6245 / 25157
{
	int iVar0;
	
	iVar0 = (uParam0 && bParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

int Function_135(int iParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) //Position: 0x626D / 25197
{
	int iVar0;
	
	uParam11 = uParam11;
	uParam12 = uParam12;
	uParam13 = uParam13;
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_139(&(Global_38380[iVar036]), 4))
			{
				if (!IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
				{
					Global_38380[iVar036].f_4 = uParam7;
					Global_38380[iVar036].f_88 = &uParam19;
					Global_38380[iVar036].f_104 = &uParam20;
					Global_38380[iVar036].f_84 = &uParam17;
					Global_38380[iVar036].f_92 = &uParam18;
					Global_38380[iVar036].f_12 = 4294967295;
					(&Global_38380[iVar036] + 16) = &uParam2;
					*(&Global_38380[iVar036] + 24) = Param3;
					*(&Global_38380[iVar036] + 36) = Param5;
					*(&Global_38380[iVar036] + 72) = &uParam8;
					Global_38380[iVar036].f_56 = uParam10;
					*(&Global_38380[iVar036] + 64) = &uParam9;
					Global_38380[iVar036].f_96 = &uParam15;
					Global_38380[iVar036].f_100 = &uParam16;
					Global_38380[iVar036].f_108 = 0.0f;
					Function_138(&uParam14, &Global_38380[iVar036] + 112);
					Global_38380[iVar036].f_112 = uParam1;
					Function_137(&(Global_38380[iVar036]), 1);
					Function_136(&(Global_38380[iVar036]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_136(vector3 vParam0) //Position: 0x63BB / 25531
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	vParam0.f_8 = (vParam0.z - iVar0);
	return;
}

void Function_137(vector3 vParam0) //Position: 0x63D8 / 25560
{
	vParam0.f_8 = (vParam0.z || iParam1);
	return;
}

void Function_138(struct<157> Param0) //Position: 0x63EB / 25579
{
	Param1 = Param0;
	Param1.f_24 = Param0.f_24;
	*(&Param1 + 28) = &Param0 + 28;
	Param1.f_4 = StackVal;
	Param1.f_8 = StackVal;
	*(&Param1 + 36) = { StackVal, *(&Param0 + 36) };
	(&Param1 + 36)->f_16 = (&Param0 + 36)->f_16;
	(&Param1 + 36)->f_20 = (&Param0 + 36)->f_20;
	(&Param1 + 36)->f_24 = (&Param0 + 36)->f_24;
	(&Param1 + 36)->f_28 = (&Param0 + 36)->f_28;
	Param1.f_68 = Param0.f_68;
	(&Param1 + 68)->f_4 = StackVal;
	(&Param1 + 68)->f_8 = StackVal;
	Param1.f_84 = Param0.f_84;
	(&Param1 + 84)->f_4 = StackVal;
	(&Param1 + 84)->f_8 = StackVal;
	(&Param1 + 84)->f_12 = (&Param0 + 84)->f_12;
	(&Param1 + 84)->f_16 = (&Param0 + 84)->f_16;
	(&Param1 + 84)->f_20 = (&Param0 + 84)->f_20;
	(&Param1 + 84)->f_24 = (&Param0 + 84)->f_24;
	(&Param1 + 84)->f_32 = (&Param0 + 84)->f_32;
	(&Param1 + 84)->f_36 = (&Param0 + 84)->f_36;
	(&Param1 + 84)->f_40 = (&Param0 + 84)->f_40;
	(&Param1 + 84)->f_44 = (&Param0 + 84)->f_44;
	(&Param1 + 84)->f_52 = (&Param0 + 84)->f_52;
	(&Param1 + 84)->f_48 = (&Param0 + 84)->f_48;
	(&Param1 + 84)->f_56 = (&Param0 + 84)->f_56;
	(&Param1 + 84)->f_28 = (&Param0 + 84)->f_28;
	Param1.f_148 = Param0.f_148;
	(&Param1 + 148)->f_4 = StackVal;
	Param1.f_156 = Param0.f_156;
	(&Param1 + 156)->f_4 = StackVal;
	(&Param1 + 156)->f_8 = StackVal;
	return;
}

bool Function_139(vector3 vParam0) //Position: 0x659B / 26011
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_140(var uParam0, bool bParam1) //Position: 0x65B9 / 26041
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		bVar1 = Function_141(&Global_11398, &Global_13366, iVar0, 0, 0, 1);
		if (IS_ACTOR_VALID(&bVar1))
		{
			if (GET_ACTOR_ENUM(&bVar1) == 493)
			{
				bParam1 = &bVar1;
			}
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bVar1);
			GIVE_WEAPON_TO_ACTOR(&bVar1, 40, false, 1, 1);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bVar1, true);
			SET_ACTOR_STAY_WITHIN_VOLUME(&bVar1, &iLocal_0 + 24, 4, true);
			MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
			SQUAD_JOIN(&bVar1, &uParam0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0, 690856);
		}
		iVar0++;
	}
	return;
}

var Function_141(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x6640 / 26176
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_18(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_18(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16))
			{
				REVIVE_PERS_CHAR(&vParam1[iVar03] + 16, 1);
			}
			if (!Function_18(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_16(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_143(StackVal, &Global_10996, Function_122(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_18(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_16(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_16(&(Param0[iVar02]), 1);
	Function_142(&vParam1[iVar03] + 16, 1);
	if (&bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(&uVar1, 1);
	}
	if (!&bParam4)
	{
		if (IS_ACTOR_HOGTIED(&uVar1))
		{
			FREE_FROM_HOGTIE(&uVar1);
		}
	}
	return &uVar1;
}

int Function_142(int iParam0, bool bParam1) //Position: 0x6807 / 26631
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
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
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_143(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x68B9 / 26809
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (&fParam6 > 1.0f)
	{
		fParam6 = 60.0f;
	}
	uVar2 = CREATE_PERS_CHAR_IN_LAYOUT(&uParam0, &uParam1, uParam2, Param4, &fParam6);
	if (!IS_PERS_CHAR_VALID(&uVar2))
	{
		return "";
	}
	uVar3 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(&uVar2), "Persistent_Char_Brain", &uParam3, Var0, Var0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_122(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(&uVar2);
		return "";
	}
	(&iVar4 + 36) = Param4;
	iVar4 = *(&iVar4 + 36);
	*(&iVar4 + 12) = *(&iVar4 + 36);
	*(&iVar4 + 24) = *(&iVar4 + 36);
	*(&iVar4 + 48) = *(&iVar4 + 36);
	*(&iVar4 + 60) = *(&iVar4 + 36);
	*(&iVar4 + 72) = &uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar3), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar4, 22);
	return &uVar2;
}

void Function_144(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x69E0 / 27104
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_146(&uParam0, uParam1, &uParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_145(&cVar1, &uParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_145(char* cParam0) //Position: 0x6A55 / 27221
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

bool Function_146(int iParam0, var uParam1, int iParam2) //Position: 0x6A8F / 27279
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
		if (Function_148(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_147(uVar0))
		{
			case 0x00000002:
				if (!Function_149(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_147(char* cParam0) //Position: 0x6B0B / 27403
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

int Function_148(int iParam0) //Position: 0x6BAC / 27564
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_42(&iVar1, 2147483648);
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

bool Function_149(var uParam0, int iParam1) //Position: 0x6BE9 / 27625
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_150(int iParam0, bool bParam1) //Position: 0x6BFC / 27644
{
	int iVar0;
	
	iVar0 = Function_151(iParam0);
	if (!Function_68(iVar0))
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

var Function_151(int iParam0) //Position: 0x6C3A / 27706
{
	if (!Function_152(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_152(int iParam0) //Position: 0x6C54 / 27732
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_153() //Position: 0x6C6A / 27754
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<2> Var3;
	
	if (bLocal_294)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(&uLocal_295) - 1))
		{
			iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_295);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_155(&Global_54076, &iVar1) > 100.0f)
			{
				Function_154(&iVar1);
				Var3 = Function_154(&iVar1);
				if (!Function_20(iLocal_293, bVar2))
				{
					Function_51(&iLocal_293, bVar2);
					CLEAR_AREA_OF_GRASS(Var3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_42(&iLocal_293, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

struct<8> Function_154(int iParam0) //Position: 0x6CF8 / 27896
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

float Function_155(var uParam0, int iParam1) //Position: 0x6D21 / 27937
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_156(&uParam0);
			Var0 = Function_156(&uParam0);
			Function_156(&iParam1);
			Var2 = Function_156(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_156(int iParam0) //Position: 0x6DBE / 28094
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

int Function_157(var uParam0) //Position: 0x6E2C / 28204
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<8> Var6;
	var uVar14;
	
	if (!Function_189(&uParam0, 2048))
	{
		return 0;
	}
	uLocal_295 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", &Global_46715, 12, 0);
	bLocal_294 = true;
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "f_AreaTreasure");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		Function_154(&iVar1);
		Var2 = Function_154(&iVar1);
		Function_160(&iVar1);
		Var4 = Function_160(&iVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_158("NoAATreasure") };
		uVar14 = CREATE_GRINGO_IN_LAYOUT(&Global_46715, &Var6, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Var2, Var4);
		DECOR_SET_BOOL(&uVar14, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(&uVar14, &uLocal_295);
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 1;
}

struct<32> Function_158(char* cParam0) //Position: 0x6F56 / 28502
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_159("0", &cVar8, ""), 4);
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

struct<32> Function_159(char* cParam0) //Position: 0x6FC2 / 28610
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<8> Function_160(bool bParam0) //Position: 0x6FE4 / 28644
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

int Function_161(char* cParam0) //Position: 0x700D / 28685
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		if (STRING_LENGTH(&(Global_99485[iVar019])) == 0)
		{
			strcpy(&(Global_99485[iVar019]), &cParam0, 32);
			*(&Global_99485[iVar019] + 64) = &uParam1;
			Global_99485[iVar019].f_72 = uParam2;
			Global_99485[iVar019].f_76 = uParam3;
			strcpy(&Global_99485[iVar019] + 84, &cParam4, 32);
			Global_99485[iVar019].f_80 = 1;
			Global_99485[iVar019].f_148 = &uParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_162() //Position: 0x709A / 28826
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		Global_99485[iVar019].f_76 = 0;
		strcpy(&Global_99485[iVar019] + 84, "", 32);
		Global_99485[iVar019].f_72 = 1.0f;
		(&Global_99485[iVar019] + 64) = "";
		strcpy(&(Global_99485[iVar019]), "", 32);
		Global_99485[iVar019].f_80 = 0;
		Global_99485[iVar019].f_148 = 0;
		iVar0++;
	}
	return;
}

bool Function_163(int iParam0) //Position: 0x710C / 28940
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Function_189(&(Global_43791[iParam0]), 2048);
}

void Function_164(char* cParam0) //Position: 0x712A / 28970
{
	if (!Function_187(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 2;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = (Global_21610.f_128 + fParam1);
	}
	return;
}

void Function_165(int iParam0, bool bParam1) //Position: 0x716A / 29034
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_46715 = &iParam0;
	Global_40000.f_12 = bParam1;
	Global_43789 = bParam1;
	if (IS_OBJECT_VALID(&Global_44085[bParam19] + 56))
	{
		if (!IS_WORLD_SECTOR_LOADED(&Global_44085[bParam19] + 56))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(&Global_44085[bParam19] + 56);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_166(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_166(var uParam0, int iParam1) //Position: 0x725A / 29274
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_167(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x7267 / 29287
{
	if (Global_40000 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_40000, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_40022 = Global_40000;
	Global_40022.f_4 = StackVal;
	Global_40022.f_8 = StackVal;
	Global_40022.f_12 = Global_40000.f_12;
	*(&Global_40022 + 16) = &Global_40000 + 16;
	*(&Global_40022 + 24) = &Global_40000 + 24;
	*(&Global_40022 + 32) = &Global_40000 + 32;
	*(&Global_40022 + 48) = &Global_40000 + 48;
	Global_40022.f_64 = Global_40000.f_64;
	Global_40022.f_68 = Global_40000.f_68;
	Global_40000.f_8 = uParam0;
	Global_40000 = iParam1;
	Global_40000.f_4 = iParam2;
	Global_40000.f_64 = 99;
	Global_40000.f_68 = &uParam3;
	Global_40000.f_72 = 0;
	Global_40000.f_76 = &iParam4;
	Global_40000.f_80 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_168();
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

void Function_168() //Position: 0x7355 / 29525
{
	int iVar0;
	
	Global_41176 = Function_169(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_169(int iParam0) //Position: 0x73A3 / 29603
{
	if (!Function_170(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_170(int iParam0) //Position: 0x73BB / 29627
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_171(bool bParam0) //Position: 0x73D0 / 29648
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_172(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x73E3 / 29667
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&iParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(&uParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	Global_43580.f_4 = iParam2;
	Global_43580.f_12 = iParam0;
	*(&Global_43580 + 24) = &iParam3;
	*(&Global_43580 + 32) = &uParam4;
	Global_43580.f_48 = fParam1;
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_43580 + 24);
	if (IS_ITERATOR_VALID(&uVar0))
	{
		ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
		ITERATE_ON_PARTIAL_NAME(&uVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(&uVar0) >= 0)
		{
			*(&Global_43580 + 40) = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar0));
		}
		DESTROY_ITERATOR(&uVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_173();
	}
	if (&bParam5)
	{
		Function_25(1048576);
	}
}

void Function_173() //Position: 0x74F1 / 29937
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_25(16384);
	}
	return;
}

bool Function_174(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x750D / 29965
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_189(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_150(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = Param1;
	stradd(&cVar0, &Global_44085[Global_46722[Global_43787]9] + 32, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	Global_46717 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

void Function_175(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x75CB / 30155
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_187(2))
	{
		return;
	}
	if (Function_189(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_176(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_1(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_194(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_176(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x7683 / 30339
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_189(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(&iParam0, 2))
	{
		return 1;
	}
	if (Function_18(&iParam0, 4))
	{
		if (IS_LATER_THAN(&iParam0 + 8, false))
		{
			return 0;
		}
	}
	if (&iParam1 + 8 == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_44085[iParam59] + 32, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		(&iParam1 + 16) = Function_143(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_100(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_177(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_177(int iParam0, struct<2> Param1) //Position: 0x7804 / 30724
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_100(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_100(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_100(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_100(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_100(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_100(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

void Function_178(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x794A / 31050
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(&iParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 72) = &iParam2;
	return;
}

void Function_179(var uParam0, float fParam1, struct<2> Param2) //Position: 0x79A9 / 31145
{
	if (Function_100(StackVal, Param2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_VEC_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_186(StackVal, uParam0, &fParam1, Param2);
		Function_185(StackVal, uParam0, &fParam1, Param2);
		Function_184(StackVal, uParam0, &fParam1, Param2);
		Function_183(StackVal, uParam0, &fParam1, Param2);
		Function_182(StackVal, uParam0, &fParam1, Param2);
		Function_180(StackVal, uParam0, &fParam1, Param2);
	}
}

void Function_180(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x7A59 / 31321
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_181(struct<2> Param0, struct<2> Param2) //Position: 0x7AC0 / 31424
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_182(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x7AEC / 31468
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_183(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x7B55 / 31573
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_184(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x7BC0 / 31680
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_185(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x7C26 / 31782
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_186(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x7C8F / 31887
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

bool Function_187(int iParam0) //Position: 0x7CF3 / 31987
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_188(int iParam0) //Position: 0x7D0F / 32015
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_189(&(Global_43791[iParam0]), 4);
}

bool Function_189(var uParam0, int iParam1) //Position: 0x7D2B / 32043
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_190(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x7D48 / 32072
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_189(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_18(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_18(&(Param0[iVar02]), 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED(vParam1[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool Function_191() //Position: 0x7E31 / 32305
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_192() //Position: 0x7E40 / 32320
{
	return 0;
}

void Function_193(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x7E47 / 32327
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_189(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_194(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_16(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_16(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_194(var uParam0, int iParam1) //Position: 0x7F37 / 32567
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_195() //Position: 0x7F48 / 32584
{
	var uVar0;
	
	Function_196(3, 3);
	uVar0 = &uVar0;
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_pipe", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_131(&iLocal_72 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	if (!Function_124(&iLocal_72 + 8))
	{
		return 0;
	}
	iLocal_72 = FIND_NAMED_LAYOUT("SolomonsFolly_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_72))
	{
		iLocal_72 = CREATE_LAYOUT("SolomonsFolly_layout");
	}
	*(&iLocal_72 + 320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "horse_tend", "horse_tend", Vector(-3886,287f, 8,031368f, 3666,087f), Vector(0.0f, 24,50254f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 320), 0);
	*(&iLocal_72 + 328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "horse_tend1", "horse_tend", Vector(-3879,951f, 8,031368f, 3664,002f), Vector(0.0f, -21,59647f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 328), 0);
	*(&iLocal_72 + 336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "lean_rail_nospawn", "rand_idle_stand", Vector(-3880,666f, 8,0314f, 3650,173f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 336), 0);
	*(&iLocal_72 + 344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "lean_rail_nospawn1", "lean_rail_nospawn", Vector(-3871,544f, 8,031368f, 3644,944f), Vector(0.0f, -115,9268f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 344), 0);
	*(&iLocal_72 + 352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "lean_rail_nospawn2", "sit_ground_smoke", Vector(-3877,937f, 8,031368f, 3649,749f), Vector(0.0f, -160,7627f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 352), 0);
	*(&iLocal_72 + 360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "lean_rail_nospawn3", "Rand_Idle_NearWall", Vector(-3894,272f, 8,031368f, 3657,718f), Vector(0.0f, 90,4f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 360), 0);
	*(&iLocal_72 + 368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Pee_nospawn", "Pee_nospawn", Vector(-3891,185f, 8,248527f, 3642,67f), Vector(0.0f, 103,8443f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 368), 0);
	*(&iLocal_72 + 376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall_nospawn", Vector(-3863,142f, 8,031205f, 3667,236f), Vector(0.0f, 89,53924f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 376), 0);
	*(&iLocal_72 + 384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Rand_Idle_NearWall_nospawn1", "Rand_Idle_NearWall_nospawn", Vector(-3888,794f, 8,050787f, 3659,307f), Vector(0.0f, -0,07773406f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 384), 0);
	*(&iLocal_72 + 392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Rand_Idle_NearWall_nospawn2", "Rand_Idle_NearWall_nospawn", Vector(-3883,159f, 8,0314f, 3655,339f), Vector(0.0f, -89,91225f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 392), 0);
	*(&iLocal_72 + 400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Rand_Idle_NearWall_nospawn3", "Rand_Idle_NearWall_nospawn", Vector(-3894,356f, 8,031368f, 3651,616f), Vector(0.0f, 90,20004f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 400), 0);
	*(&iLocal_72 + 408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", Vector(-3860,98f, 8,108f, 3666,415f), Vector(0.0f, -37,33218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 408), 0);
	*(&iLocal_72 + 416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground_nospawn", Vector(-3859,292f, 8,108f, 3666,88f), Vector(0.0f, 44,87476f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 416), 0);
	*(&iLocal_72 + 424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Rand_Idle_Sit_Ground_nospawn2", "Rand_Idle_Sit_Ground_nospawn", Vector(-3860,21f, 8,108f, 3665,34f), Vector(0.0f, 195,6956f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 424), 0);
	*(&iLocal_72 + 432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Rand_Idle_Sit_Ground_nospawn3", "Rand_Idle_Sit_Ground_nospawn", Vector(-3884,378f, 8,0314f, 3641,4f), Vector(0.0f, -80,13517f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 432), 0);
	*(&iLocal_72 + 440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Rand_Idle_Sit_Ground_nospawn4", "Rand_Idle_Sit_Ground_nospawn", Vector(-3882,454f, 8,0314f, 3642,967f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 440), 0);
	*(&iLocal_72 + 448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Rand_Idle_Sit_Ground_nospawn5", "Rand_Idle_Sit_Ground_nospawn", Vector(-3883,799f, 8,031368f, 3640,234f), Vector(0.0f, -128,7982f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 448), 0);
	*(&iLocal_72 + 456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", Vector(-3881,514f, 8,0314f, 3652,284f), Vector(0.0f, -43,41955f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 456), 0);
	*(&iLocal_72 + 464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", Vector(-3882,638f, 8,10568f, 3647,491f), Vector(0.0f, -63,84495f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 464), 0);
	*(&iLocal_72 + 472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "rand_idle_stand_nospawn2", "rand_idle_stand_nospawn", Vector(-3892,518f, 8,031368f, 3654,296f), Vector(0.0f, 91,79656f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 472), 0);
	*(&iLocal_72 + 480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "rand_idle_stand_nospawn3", "rand_idle_stand_nospawn", Vector(-3858,053f, 8,037922f, 3667,973f), Vector(0.0f, 235,9549f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 480), 0);
	*(&iLocal_72 + 488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "sit_fence_low", "rand_idle_stand", Vector(-3872,869f, 8,031368f, 3647,877f), Vector(0.0f, 197,6196f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 488), 0);
	*(&iLocal_72 + 496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "sit_fence_low1", "sit_fence_low", Vector(-3877,933f, 8,0314f, 3648,887f), Vector(0.0f, 198,479f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 496), 0);
	*(&iLocal_72 + 504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "sit_fence_low2", "stand_lookdistance_w_any", Vector(-3870,753f, 8,031368f, 3643,591f), Vector(0.0f, 246,2744f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 504), 0);
	*(&iLocal_72 + 512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "sit_fence_low3", "stand_drunk_rowdydrink", Vector(-3879,691f, 8,043528f, 3639,626f), Vector(0.0f, 496,633f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 512), 0);
	*(&iLocal_72 + 520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Sit_Ground_Smoke_Pipe", "Sit_Ground_Smoke_Pipe", Vector(-3880,869f, 8,031368f, 3641,252f), Vector(0.0f, 89,00776f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 520), 0);
	*(&iLocal_72 + 528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "sleeping_scripted", "sleeping_scripted", Vector(-3861,427f, 5,3052f, 3665,194f), Vector(0.0f, -171,3626f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 528), 0);
	*(&iLocal_72 + 536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "sleeping_scripted1", "sleeping_scripted", Vector(-3859,787f, 5,3052f, 3665,354f), Vector(0.0f, -160,2201f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 536), 0);
	*(&iLocal_72 + 544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-3858,218f, 5,1805f, 3666,486f), Vector(0.0f, 90,45209f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 544), 0);
	*(&iLocal_72 + 552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "sleeping_wall_scripted1", "sleeping_wall_scripted", Vector(-3859,963f, 8,108f, 3663,768f), Vector(0.0f, 179,7243f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 552), 0);
	*(&iLocal_72 + 560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "sleeping_wall_scripted2", "sleeping_wall_scripted", Vector(-3858,312f, 8,108f, 3666,258f), Vector(0.0f, 90,50348f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 560), 0);
	*(&iLocal_72 + 568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "smoking_stand_nospawn", "smoking_stand_nospawn", Vector(-3861,364f, 8,108f, 3665,483f), Vector(0.0f, -115,5969f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 568), 0);
	*(&iLocal_72 + 576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "smoking_stand_nospawn1", "smoking_stand_nospawn", Vector(-3856,394f, 8,031269f, 3668,523f), Vector(0.0f, -97,2945f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 576), 0);
	*(&iLocal_72 + 584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "smoking_stand_nospawn2", "smoking_stand_nospawn", Vector(-3860,003f, 8,065629f, 3677,832f), Vector(0.0f, 179,24f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 584), 0);
	*(&iLocal_72 + 592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "smoking_stand_nospawn3", "smoking_stand_nospawn", Vector(-3882,023f, 8,031368f, 3653,764f), Vector(0.0f, -114,9832f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 592), 0);
	*(&iLocal_72 + 600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-3881,101f, 8,0314f, 3642,451f), Vector(0.0f, 51,00673f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 600), 0);
	*(&iLocal_72 + 608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", Vector(-3882,953f, 8,0314f, 3639,743f), Vector(0.0f, 204,0172f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 608), 0);
	*(&iLocal_72 + 616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "stand_dnd_rowdydrink2", "stand_dnd_rowdydrink", Vector(-3881,05f, 8,0314f, 3640,238f), Vector(0.0f, 120,6179f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 616), 0);
	*(&iLocal_72 + 624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "stand_dnd_rowdydrink3", "stand_dnd_rowdydrink", Vector(-3883,583f, 8,031368f, 3642,598f), Vector(0.0f, -30,45416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 624), 0);
	*(&iLocal_72 + 632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3881,895f, 8,094611f, 3639,77f), Vector(0.0f, -202,8046f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 632), 0);
	*(&iLocal_72 + 640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-3878,354f, 8,0314f, 3651,71f), Vector(0.0f, 65,16217f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_72 + 640), 0);
	*(&iLocal_72 + 648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "Locked_Footlocker", "Locked_Footlocker", Vector(-3857,969f, 5,217027f, 3667,865f), Vector(0.0f, 90.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_72 + 648, "scrap", true);
	*(&iLocal_72 + 656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-3878,235f, 8,010163f, 3644f), Vector(0.0f, 19,31323f, 0.0f));
	*(&iLocal_72 + 664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-3852.0f, 8,083919f, 3649,17f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_72 + 672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_72, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-3854,197f, 8,306006f, 3667,999f), Vector(0.0f, 0.0f, 0.0f));
	return 1;
}

void Function_196(int iParam0, int iParam1) //Position: 0x9634 / 38452
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

bool Function_197() //Position: 0x967E / 38526
{
	var uVar0;
	
	Function_196(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("SolomonsFolly_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("SolomonsFolly_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_IntroGateway", 2,802597E-45f, Vector(-3849,616f, 7,85091f, 3691,068f), Vector(0.0f, 1,89674f, 0.0f), Vector(4.0f, 4,354144f, 5.0f));
	*(&iLocal_0 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_IntroGuyStayWithin", 2,802597E-45f, Vector(-3863,048f, 8,031288f, 3673,791f), Vector(0.0f, 0.0f, 0.0f), Vector(13,24575f, 15,28493f, 22,47986f));
	*(&iLocal_0 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_StayWithin", 4,203895E-45f, Vector(-3872,699f, 8,016368f, 3654,726f), Vector(0.0f, -6,517303f, 0.0f), Vector(27,61474f, 24,60358f, 24,60358f));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_checkToTeleport", 2,802597E-45f, Vector(-3848,638f, 8,151739f, 3690,908f), Vector(0.0f, 9,246823f, 0.0f), Vector(1,606799f, 2,792696f, 1,669583f));
	*(&iLocal_0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_BackStoryAudio", 4,203895E-45f, Vector(-3872,787f, -4,179912f, 3655,062f), Vector(0.0f, 20.0f, 0.0f), Vector(52,44255f, 52,44255f, 52,44255f));
	*(&iLocal_0 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_checkToTeleport1", 2,802597E-45f, Vector(-3848,515f, 8,151739f, 3690,888f), Vector(0.0f, 9,246823f, 0.0f), Vector(1,088144f, 2,792696f, 1,151851f));
	*(&iLocal_0 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_CheckPlayerHorse", 2,802597E-45f, Vector(-3852f, 7,322431f, 3692,225f), Vector(0.0f, 9,246823f, 0.0f), Vector(13,58006f, 8,668309f, 7,806126f));
	*(&iLocal_0 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_TaskFloyd", 4,203895E-45f, Vector(-3872,699f, 8,016368f, 3654,726f), Vector(0.0f, -6,517303f, 0.0f), Vector(45,42352f, 40,47045f, 40,47045f));
	*(&iLocal_0 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_FloydGoToSpot", 2,802597E-45f, Vector(-3804.0f, 11,04313f, 3839,724f), Vector(0.0f, -19,27435f, 0.0f), Vector(13,15839f, 13,15839f, 13,15839f));
	*(&iLocal_0 + 80) = Vector(-3849,539f, 7,110469f, 3704,663f);
	*(&iLocal_0 + 80 + 12) = Vector(0.0f, 34,72779f, 0.0f);
	*(&iLocal_0 + 104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "solf_teleport", Vector(-3849,539f, 7,110469f, 3704,663f), Vector(0.0f, 34,72779f, 0.0f));
	*(&iLocal_0 + 112) = Vector(-3884,749f, 11,36244f, 3656,567f);
	*(&iLocal_0 + 112 + 12) = Vector(0.0f, 90.0f, 0.0f);
	*(&iLocal_0 + 136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_treasureChest", Vector(-3884,749f, 11,36244f, 3656,567f), Vector(0.0f, 90.0f, 0.0f));
	*(&iLocal_0 + 144) = Vector(-3845,863f, 7,203487f, 3691,134f);
	*(&iLocal_0 + 144 + 12) = Vector(0.0f, 139,3468f, 0.0f);
	*(&iLocal_0 + 168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Horse_01", Vector(-3845,863f, 7,203487f, 3691,134f), Vector(0.0f, 139,3468f, 0.0f));
	*(&iLocal_0 + 176) = Vector(-3871,263f, 8,031364f, 3632,737f);
	*(&iLocal_0 + 176 + 12) = Vector(0.0f, 153,2865f, 0.0f);
	*(&iLocal_0 + 200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Horse_02", Vector(-3871,263f, 8,031364f, 3632,737f), Vector(0.0f, 153,2865f, 0.0f));
	*(&iLocal_0 + 208) = Vector(-3848,506f, 7,259078f, 3690,77f);
	*(&iLocal_0 + 208 + 12) = Vector(0.0f, 46,26167f, 0.0f);
	*(&iLocal_0 + 232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_introCharacter", Vector(-3848,506f, 7,259078f, 3690,77f), Vector(0.0f, 46,26167f, 0.0f));
	*(&iLocal_0 + 240) = Vector(-3849,637f, 7,223391f, 3690,532f);
	*(&iLocal_0 + 240 + 12) = Vector(0.0f, -66,90496f, 0.0f);
	*(&iLocal_0 + 264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_teleportJohnCrouch", Vector(-3849,637f, 7,223391f, 3690,532f), Vector(0.0f, -66,90496f, 0.0f));
	*(&iLocal_0 + 272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_TeleportHorse", Vector(-3847,326f, 7,233026f, 3696,481f), Vector(0.0f, 17,12666f, 0.0f));
	*(&iLocal_0 + 280) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ncover_low", Vector(-3860,079f, 8,04738f, 3682,166f), Vector(0.0f, 6,738969f, 0.0f), 4);
	return 1;
}

void Function_198(char* cParam0) //Position: 0x9BBC / 39868
{
	if (!Function_187(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 1;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = Global_21610.f_128;
	}
	return;
}

int Function_199(int iParam0) //Position: 0x9BF9 / 39929
{
	if (Global_6666)
	{
		return 0;
	}
	iParam0 = &iParam0;
	if (Global_6623 || Global_6622)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6622)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6646)
	{
		return 1;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	if (Function_189(&iParam0, 256))
	{
		return 0;
	}
	return 1;
}

