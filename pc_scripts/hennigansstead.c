//Decompiled with MagicRDR v1.0
//Function Count : 94
//Statics Count : 460
//Natives Count : 117
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 41;
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
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	bool bLocal_251 = false;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 6;
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
	int iLocal_395 = 0;
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
	var uLocal_421 = 1;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_248 = 0;
	iLocal_249 = &iScriptParam_0;
	Function_93(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(0);
	Function_92("Initializing Hennigan's Stead", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_251 = 1000;
		switch (iLocal_248)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_248 = 1;
				}
				bLocal_251 = false;
				break;
			
			case 0x00000001:
				if (Function_91())
				{
					iLocal_248 = 2;
				}
				bLocal_251 = false;
				break;
			
			case 0x00000002:
				if (Function_82())
				{
					Function_81(&(Global_43791[iLocal_249]), 32);
					iLocal_248 = 3;
					Function_79(&iLocal_0);
				}
				bLocal_251 = false;
				break;
			
			case 0x00000003:
				uLocal_253 = LAUNCH_NEW_SCRIPT_WITH_ARGS("HennigansSteadVol", &iLocal_249, 2, 0);
				Function_78(&Global_11518, &Global_13542, iScriptParam_0);
				iLocal_248 = 5;
				bLocal_251 = false;
				break;
			
			case 0x00000005:
				if (Function_77(&Global_11518, &Global_13542, iScriptParam_0))
				{
					iLocal_248 = 4;
					bLocal_251 = false;
				}
				else
				{
					bLocal_251 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_76(&(Global_43791[iLocal_249]), 16))
				{
					iLocal_248 = 6;
				}
				bLocal_251 = false;
				break;
			
			case 0x00000006:
				Function_75(StackVal, 0, &uLocal_261, Vector(-944,133f, 102,366f, 2743,287f));
				Function_74(StackVal, 0, &uLocal_261, Vector(-944,133f, 102,366f, 2743,287f));
				Function_73(StackVal, 0, &uLocal_261, Vector(-944,133f, 102,366f, 2743,287f));
				Function_72(StackVal, 0, &uLocal_261, Vector(-944,133f, 102,366f, 2743,287f));
				Function_71(StackVal, 0, &uLocal_261, Vector(-944,133f, 102,366f, 2743,287f));
				Function_69(StackVal, 0, &uLocal_261, Vector(-944,133f, 102,366f, 2743,287f));
				Function_68(0, &uLocal_261, &iLocal_4);
				Function_75(StackVal, 1, &uLocal_261, Vector(-941,958f, 102,394f, 2739,952f));
				Function_74(StackVal, 1, &uLocal_261, Vector(-941,958f, 102,394f, 2739,952f));
				Function_73(StackVal, 1, &uLocal_261, Vector(-941,958f, 102,394f, 2739,952f));
				Function_72(StackVal, 1, &uLocal_261, Vector(-941,958f, 102,394f, 2739,952f));
				Function_71(StackVal, 1, &uLocal_261, Vector(-941,958f, 102,394f, 2739,952f));
				Function_69(StackVal, 1, &uLocal_261, Vector(-941,958f, 102,394f, 2739,952f));
				Function_68(1, &uLocal_261, &iLocal_4);
				Function_75(StackVal, 2, &uLocal_261, Vector(118,66f, 72,43f, 2676,99f));
				Function_74(StackVal, 2, &uLocal_261, Vector(118,66f, 72,43f, 2676,99f));
				Function_73(StackVal, 2, &uLocal_261, Vector(118,66f, 72,43f, 2676,99f));
				Function_72(StackVal, 2, &uLocal_261, Vector(118,66f, 72,43f, 2676,99f));
				Function_71(StackVal, 2, &uLocal_261, Vector(118,66f, 72,43f, 2676,99f));
				Function_69(StackVal, 2, &uLocal_261, Vector(118,66f, 72,43f, 2676,99f));
				Function_68(2, &uLocal_261, &iLocal_4);
				Function_75(StackVal, 3, &uLocal_261, Vector(126,44f, 72,46f, 2675,08f));
				Function_74(StackVal, 3, &uLocal_261, Vector(126,44f, 72,46f, 2675,08f));
				Function_73(StackVal, 3, &uLocal_261, Vector(126,44f, 72,46f, 2675,08f));
				Function_72(StackVal, 3, &uLocal_261, Vector(126,44f, 72,46f, 2675,08f));
				Function_71(StackVal, 3, &uLocal_261, Vector(126,44f, 72,46f, 2675,08f));
				Function_69(StackVal, 3, &uLocal_261, Vector(126,44f, 72,46f, 2675,08f));
				Function_68(3, &uLocal_261, &iLocal_4);
				Function_62(&Global_11518, &Global_13542, &uLocal_261, &Global_10994, iScriptParam_0);
				Function_81(&(Global_43791[iLocal_249]), 8);
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_61(&(Global_43791[iScriptParam_0]), 131072);
					if ((!Global_39324[1] && !Global_39324[2]) && !Global_39324[3])
					{
						CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Butter_Bridge", Vector(33,938f, 94,713f, 2742,488f), Vector(0.0f, 214.0f, 0.0f), Vector(30.0f, 40.0f, 100.0f));
					}
					if (Global_39324[2] && !Global_39324[3])
					{
						CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Butter_Bridge", Vector(33,938f, 94,713f, 2742,488f), Vector(0.0f, 214.0f, 0.0f), Vector(30.0f, 40.0f, 100.0f));
					}
					iLocal_248 = 10;
				}
				else
				{
					iLocal_248 = 7;
				}
				bLocal_251 = false;
				break;
			
			case 0x00000007:
				uLocal_252 = uLocal_252;
				Function_60(iScriptParam_0);
				if (Function_58(512))
				{
					Function_48(iScriptParam_0);
				}
				Function_47(64);
				if (Function_46(1) != 9 && Function_45(301) != 0.0f)
				{
					uLocal_255 = LAUNCH_NEW_SCRIPT("$/content/Ambient/Roaming/mh_named_boar", 0);
				}
				if (!Global_39324[4])
				{
					CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Tanners_Span", Vector(-559,71f, 103,778f, 2079,285f), Vector(0.0f, 293.0f, 0.0f), Vector(30.0f, 20.0f, 100.0f));
				}
				if (!Global_39324[12])
				{
					CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Masons_Bridge", Vector(-143,489f, 81,505f, 2210,089f), Vector(0.0f, 26.0f, 0.0f), Vector(30.0f, 20.0f, 80.0f));
				}
				Function_81(&(Global_43791[iLocal_249]), 64);
				iLocal_248 = 8;
				bLocal_251 = false;
				break;
			
			case 0x00000008:
				Function_44(StackVal, 0, Global_46816[0], Vector(-819,6454f, 93,80083f, 2436,405f));
				if (!Function_43(&Global_46816))
				{
					Function_39(2, 0,5f, 0, &iLocal_0, &Global_44085[iLocal_2499] + 8, !Function_43(&Global_46816));
					Function_35(0, 8, 4, 0, 2);
					Function_47(64);
				}
				Function_81(&(Global_43791[iLocal_249]), 512);
				iLocal_248 = 9;
				bLocal_251 = false;
				break;
			
			case 0x00000009:
				if (!Function_43(&Global_46816))
				{
					Function_33(&iLocal_0, iScriptParam_0);
				}
				Global_43787 = 0;
				Function_81(&(Global_43791[iLocal_249]), 4);
				Function_32("Finished Initializing Hennigan's Stead", 5.0f);
				iLocal_248 = 10;
				bLocal_251 = false;
				break;
			
			case 0x0000000A:
				if (!Function_43(&Global_46816))
				{
					if (iLocal_395)
					{
						iLocal_395 = 0;
						iLocal_248 = 8;
						bLocal_251 = false;
					}
				}
				else
				{
					iLocal_395 = 1;
				}
				if (0 & Function_31())
				{
					if (IS_VOLUME_VALID(&Global_44085[Global_46816[5]9] + 8))
					{
						if (IS_ACTOR_IN_VOLUME(Function_30(), &Global_44085[Global_46816[5]9] + 8))
						{
							if (!IS_SCRIPT_VALID(&uLocal_257))
							{
								uLocal_257 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Wilderness/boarWildernessAA", 0);
							}
						}
						else if (IS_SCRIPT_VALID(&uLocal_257))
						{
							TERMINATE_SCRIPT(&uLocal_257);
						}
					}
				}
				if (Function_23(0))
				{
					if (!IS_SCRIPT_VALID(&uLocal_259))
					{
						uLocal_259 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_396, 62, 0);
					}
				}
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_248 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_251);
	}
	Function_22(iScriptParam_0);
	Function_11(&Global_11518, &Global_13542, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_47(64);
	Function_61(&(Global_43791[iLocal_249]), 32);
	Function_61(&(Global_43791[iLocal_249]), 64);
	Function_61(&(Global_43791[iLocal_249]), 8);
	Function_61(&(Global_43791[iLocal_249]), 512);
	Function_61(&(Global_43791[iLocal_249]), 4);
	if (IS_SCRIPT_VALID(&uLocal_253))
	{
		TERMINATE_SCRIPT(&uLocal_253);
	}
	if (IS_SCRIPT_VALID(&uLocal_255))
	{
		TERMINATE_SCRIPT(&uLocal_255);
	}
	if (IS_SCRIPT_VALID(&uLocal_257))
	{
		TERMINATE_SCRIPT(&uLocal_257);
	}
	Function_32("Unloaded Hennigan's Stead", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x845 / 2117
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x87B / 2171
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x89D / 2205
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x8B3 / 2227
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x8C9 / 2249
{
	Function_6(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_6(int iParam0) //Position: 0x8DC / 2268
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_7(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x904 / 2308
{
	if (Function_9(&(Param0[iParam12]), 4))
	{
		if (Function_9(&(Param0[iParam12]), 1))
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
			Function_8(&(Param0[iParam12]), 1);
			Function_8(&(Param0[iParam12]), 2);
			Function_8(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_8(struct<13> Param0) //Position: 0xA4F / 2639
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0xA6C / 2668
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0xA8A / 2698
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xA96 / 2710
{
	char* cVar0[64];
	int iVar16;
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
	if (Function_76(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_61(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_18(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_18(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_17(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_18(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_17(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_76(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_16(2) || Function_76(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_18(&(Param0[iVar162]), 2) && !Function_18(&(Param0[iVar162]), 4))
		{
			Function_12(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_18(&(Param0[iVar162]), 2) && !Function_18(&(Param0[iVar162]), 4))
			{
				iVar18++;
			}
			else
			{
				iVar19++;
			}
		}
		iVar16++;
	}
	if (bVar17)
	{
		bVar20 = FIND_OBJECT_IN_LAYOUT(&Global_10996, "ncorpseSet");
		uVar21 = GET_OBJECTSET_FROM_OBJECT(&bVar20);
		if (IS_OBJECTSET_VALID(&uVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(&uVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_81(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0xCB4 / 3252
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_15(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_18(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_18(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xE1A / 3610
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

int Function_14(int iParam0) //Position: 0xE45 / 3653
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

void Function_15(var uParam0, int iParam1) //Position: 0xE79 / 3705
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xE8A / 3722
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xEA6 / 3750
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xEC0 / 3776
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xEDD / 3805
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(var uParam0, int iParam1) //Position: 0xEF8 / 3832
{
	return (uParam0 && iParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xF05 / 3845
{
	if (!Function_4(iParam0))
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

void Function_22(int iParam0) //Position: 0x13B3 / 5043
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_44085[iParam09] == Global_46722[0])
	{
		STREAMING_EVICT_ACTOR(1177, 4294967295);
	}
	else if (Global_44085[iParam09] == Global_46722[1])
	{
		STREAMING_EVICT_ACTOR(1179, 4294967295);
	}
	else if (Global_44085[iParam09] == Global_46722[2])
	{
		STREAMING_EVICT_ACTOR(1178, 4294967295);
	}
	return;
}

bool Function_23(int iParam0) //Position: 0x141E / 5150
{
	if (!IS_LATER_THAN(GET_TIME_OF_DAY(), Function_29()))
	{
		return 0;
	}
	if (Global_99472 != 32 || Global_99472 != 1)
	{
		return 0;
	}
	if (Global_6646)
	{
		return 0;
	}
	if (Global_6647)
	{
		return 0;
	}
	if (Function_28())
	{
		return 0;
	}
	if (&iParam0 == 0)
	{
		if (Function_26(0) == 0)
		{
			return 0;
		}
	}
	if (!Function_25(0))
	{
		return 0;
	}
	if (Global_6634)
	{
		return 0;
	}
	if (Function_24(1, 2, 1, 1))
	{
		return 0;
	}
	if (Global_40000.f_80 <= GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	return 1;
}

bool Function_24(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x149C / 5276
{
	uParam0 = &uParam0;
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
	if (Global_6636 && uParam2)
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
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_25(int iParam0) //Position: 0x154B / 5451
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_39248[iParam0];
}

int Function_26(int iParam0) //Position: 0x1566 / 5478
{
	if (&iParam0 == 1)
	{
		if (Global_6629 == 1)
		{
			return 0;
		}
	}
	if (Global_6629 == 0)
	{
		return 0;
	}
	if (Global_43789 == Global_46760[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46914[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46816[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46796[1])
	{
		return 1;
	}
	if (Global_43789 == Global_46850[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46926[1])
	{
		return 1;
	}
	if (Global_43789 == Global_46866[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46894[1])
	{
		if (!Function_27(Global_46894[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_27(bool bParam0) //Position: 0x161B / 5659
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_76(&(Global_43791[bParam0]), 2048);
}

bool Function_28() //Position: 0x1639 / 5689
{
	return Function_20(StackVal, 1);
}

var Function_29() //Position: 0x1648 / 5704
{
	return &Global_21369 + 8;
}

var Function_30() //Position: 0x1654 / 5716
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

int Function_31() //Position: 0x1669 / 5737
{
	return 0;
}

void Function_32(char* cParam0) //Position: 0x1670 / 5744
{
	if (!Function_16(128))
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

void Function_33(int iParam0, bool bParam1) //Position: 0x16B0 / 5808
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
		Function_34(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_34(var uParam0, int iParam1) //Position: 0x17A0 / 6048
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_35(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x17AD / 6061
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
	(&Global_40022 + 16) = &Global_40000 + 16;
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
		Function_36();
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

void Function_36() //Position: 0x189B / 6299
{
	int iVar0;
	
	Global_41176 = Function_37(StackVal);
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

int Function_37(bool bParam0) //Position: 0x18E9 / 6377
{
	if (!Function_38(bParam0))
	{
		return 0;
	}
	return Global_40060[bParam0];
}

bool Function_38(bool bParam0) //Position: 0x1901 / 6401
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_39(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x1916 / 6422
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&uParam3))
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
	Global_43580.f_12 = uParam0;
	*(&Global_43580 + 24) = &uParam3;
	*(&Global_43580 + 32) = &uParam4;
	Global_43580.f_48 = uParam1;
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
		Function_42();
	}
	if (&bParam5)
	{
		Function_40(1048576);
	}
}

void Function_40(int iParam0) //Position: 0x1A24 / 6692
{
	Function_41(&Global_43580, iParam0);
	return;
}

void Function_41(var uParam0, var uParam1) //Position: 0x1A32 / 6706
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_42() //Position: 0x1A51 / 6737
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_40(16384);
	}
	return;
}

bool Function_43(int[] iParam0) //Position: 0x1A6D / 6765
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_4(iParam0[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_43791[iParam0[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_44(int iParam0, var uParam1, struct<2> Param2) //Position: 0x1ABE / 6846
{
	if (!Function_38(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_39922[iParam0] = uParam1;
	*(&Global_39922 + 32[iParam02]) = Param2;
}

float Function_45(int iParam0) //Position: 0x1B1F / 6943
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_46(int iParam0) //Position: 0x1B58 / 7000
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_47(int iParam0) //Position: 0x1B80 / 7040
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_48(int iParam0) //Position: 0x1B93 / 7059
{
	if (Function_57(349) == 0)
	{
		Function_53(53, 2, 760, 0, 770, 2, 2, 0, 4, iParam0, "$/content/DLC/MoOutfitsPack/event_jackalope", 63, 0, 50.0f, 2, 15, 0);
	}
	else
	{
		Function_53(53, 2, 760, 0, 770, 2, 0, 0, 4, iParam0, "$/content/DLC/MoOutfitsPack/event_jackalope", 63, 0, 50.0f, 2, 45, 0);
	}
	Function_52(&Global_27462[5352] + 188, 2, 8.0f, 1, 704);
	Function_51(&Global_27462[5352] + 188, 19,9f, 0,6f);
	Function_50(&Global_27462[5352] + 188, 0.0f, 2);
	Function_49(&Global_27462[5352] + 188, 10.0f);
	return;
}

void Function_49(int iParam0, int iParam1) //Position: 0x1C8B / 7307
{
	(&iParam0 + 84)->f_32 = iParam1;
	return;
}

void Function_50(int iParam0, float fParam1, int iParam2) //Position: 0x1C9A / 7322
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_51(int iParam0, float fParam1, int iParam2) //Position: 0x1CB2 / 7346
{
	(&iParam0 + 84)->f_44 = fParam1;
	(&iParam0 + 84)->f_52 = iParam2;
	return;
}

void Function_52(struct<85> Param0) //Position: 0x1CCA / 7370
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x1CF4 / 7412
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_54(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &uParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_54(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x1D3B / 7483
{
	var uVar0;
	char[] cVar1[4];
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052][0] = iParam2;
	Global_27462[iParam052][1] = iParam3;
	Global_27462[iParam052][2] = iParam4;
	(*&Global_27462[iParam052] + 32)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_27462[iParam052] + 32)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_27462[iParam052] + 32)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
	(*&Global_27462[iParam052] + 64)[0] = (Global_27462[iParam052][0] - (*&Global_27462[iParam052] + 32)[0]);
	(*&Global_27462[iParam052] + 64)[1] = (Global_27462[iParam052][1] - (*&Global_27462[iParam052] + 32)[1]);
	(*&Global_27462[iParam052] + 64)[2] = (Global_27462[iParam052][2] - (*&Global_27462[iParam052] + 32)[2]);
	Global_27462[iParam052].f_140 = uParam1;
	Global_27462[iParam052].f_188 = uParam5;
	(&Global_27462[iParam052] + 188)->f_4 = iParam6;
	(&Global_27462[iParam052] + 188)->f_8 = &bParam13;
	Global_27462[iParam052].f_144 = uParam7;
	Global_27462[iParam052].f_148 = uParam8;
	Global_27462[iParam052].f_156 = 4294967295;
	Global_27462[iParam052].f_152 = &uParam15;
	*(&Global_27462[iParam052] + 160) = GET_ASSET_ID(&cParam9, 4);
	Global_27462[iParam052].f_168 = uParam10;
	Global_27462[iParam052].f_172 = uParam11;
	Global_27462[iParam052].f_136 = &uParam12;
	(&Global_27462[iParam052] + 188)->f_156 = 0;
	strcpy(&Global_27462[iParam052] + 188 + 36, "", 8);
	(&Global_27462[iParam052] + 188 + 36)->f_16 = 50.0f;
	(&Global_27462[iParam052] + 188 + 36)->f_20 = 4294967295;
	(&Global_27462[iParam052] + 188)->f_84 = 1;
	(&Global_27462[iParam052] + 188 + 84)->f_4 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_8 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_12 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_16 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_20 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_24 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_32 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_20 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_28 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_36 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_40 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_44 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_52 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_48 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_56 = 0.0f;
	(&Global_27462[iParam052] + 188)->f_148 = 0;
	if (!Function_19())
	{
		Global_99471 = 30.0f;
	}
	else
	{
		Global_99471 = (30.0f * 0,8f);
	}
	if (!UNK_0x214AFB8C(&Global_26652[iParam04] + 24))
	{
		cVar1 = MAKE_TIME_OF_DAY_EX(1, 0, 0, 0);
		if (!Global_6606)
		{
			if (Global_6665)
			{
				bVar2 = false;
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_56(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_55(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_56(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_55(int iParam0, int iParam1) //Position: 0x20F9 / 8441
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_56(int iParam0) //Position: 0x211C / 8476
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

int Function_57(int iParam0) //Position: 0x2133 / 8499
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_58(int iParam0) //Position: 0x2174 / 8564
{
	return Function_59(Global_131807.f_1304, iParam0);
}

int Function_59(var uParam0, int iParam1) //Position: 0x2186 / 8582
{
	return (uParam0 && iParam1) == 0;
}

void Function_60(int iParam0) //Position: 0x2193 / 8595
{
	Function_53(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_52(&Global_27462[1852] + 188, 1, 5.0f, 1, 640);
	Function_49(&Global_27462[1852] + 188, 5.0f);
	Function_51(&Global_27462[552] + 188, 19,9f, 0,7f);
	Function_50(&Global_27462[552] + 188, -4.0f, 2);
	return;
}

void Function_61(var uParam0, int iParam1) //Position: 0x2228 / 8744
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_62(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x2242 / 8770
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_76(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_63(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_61(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_81(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_63(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x22FA / 8954
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_76(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(&iParam0, 2))
	{
		return 1;
	}
	if (Function_18(&iParam0, 4))
	{
		if (IS_LATER_THAN(&iParam0 + 8, 0))
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
		(&iParam1 + 16) = Function_66(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_65(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_64(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_64(int iParam0, struct<2> Param1) //Position: 0x247B / 9339
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_65(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_65(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_65(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_65(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_65(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_65(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

bool Function_65(vector3 vParam0) //Position: 0x25C1 / 9665
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_66(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x25D9 / 9689
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_67(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

var Function_67() //Position: 0x2700 / 9984
{
	int iVar0;
	
	return &iVar0;
}

void Function_68(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x2709 / 9993
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

void Function_69(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2768 / 10088
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_70(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_70(struct<2> Param0, struct<2> Param2) //Position: 0x27CF / 10191
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_71(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x27FB / 10235
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_70(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_72(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2864 / 10340
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_70(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_73(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x28CF / 10447
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_70(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_74(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2935 / 10549
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_70(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_75(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x299E / 10654
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_70(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

bool Function_76(var uParam0, int iParam1) //Position: 0x2A02 / 10754
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_77(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x2A1F / 10783
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
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
	if (Function_76(&(Global_43791[iParam2]), 0x40000000))
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

void Function_78(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x2B08 / 11016
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
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
	if (!Function_76(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_81(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_15(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_15(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

int Function_79(var uParam0) //Position: 0x2BF8 / 11256
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[32];
	
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		uVar5 = CREATE_OBJECT_ITERATOR(&uParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar5, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar5, "nCampfire0");
		iVar0 = START_OBJECT_ITERATOR(&uVar5);
		while (IS_OBJECT_VALID(&iVar0))
		{
			bVar6 = RAND_INT_RANGE(1, 10000) > 2750;
			bVar7 = (((bVar6 || DECOR_CHECK_EXIST(&iVar0, "guero")) || DECOR_CHECK_EXIST(&iVar0, "always")) || Global_6611);
			bVar8 = false;
			bVar9 = (Function_31() && !Function_80(1, 1));
			if (bVar7 && !bVar8)
			{
			}
			else if ((bVar8 && Function_31()) && DECOR_CHECK_EXIST(&iVar0, "MP_ONLY"))
			{
			}
			else if (bVar8 && !bVar9)
			{
				cVar10 = GET_GRINGO_FROM_OBJECT(&iVar0);
				if (IS_GRINGO_VALID(&cVar10))
				{
					GRINGO_ALLOW_ACTIVATION(&cVar10, false);
				}
			}
			else
			{
				GET_OBJECT_POSITION(&iVar0, &Var1);
				GET_OBJECT_ORIENTATION(&iVar0, &uVar3);
				strcpy(&cVar11, "p", 32);
				stradd(&cVar11, GET_OBJECT_NAME(&iVar0), 32);
				CREATE_POINT_IN_LAYOUT(StackVal, &uParam0, &cVar11, Var1, Vector(0.0f, 0.0f, 0.0f));
				DESTROY_OBJECT(&iVar0);
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&uVar5);
		}
		DESTROY_ITERATOR(&uVar5);
		return 1;
	}
	LOG_ERROR("District layout isn't valid can't setup campfires");
	return 0;
}

bool Function_80(int iParam0, bool bParam1) //Position: 0x2D57 / 11607
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && iParam0);
	if (&bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_81(var uParam0, int iParam1) //Position: 0x2D78 / 11640
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_82() //Position: 0x2D89 / 11657
{
	int iVar0;
	
	Function_90(3, 3);
	iVar0 = &iVar0;
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/any_washcloths", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/campfire01_bad", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/digging", 1, 0);
	Function_88(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_attached_link", 1, 0);
	if (!Function_83(&iLocal_4 + 8))
	{
		return 0;
	}
	iLocal_4 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("HennigansStead_layout");
	}
	*(&iLocal_4 + 672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint1", Vector(-1260,309f, 109,4274f, 2764.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint2", Vector(118,7035f, 72,28235f, 2676.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint3", Vector(-1236f, 22,08622f, 3209,463f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint4", Vector(-275,5703f, 73,237f, 2391,477f), Vector(0.0f, 88,54858f, 0.0f));
	*(&iLocal_4 + 704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint8", Vector(-175,9999f, 72,39375f, 2332.0f), Vector(0.0f, 88,54858f, 0.0f));
	*(&iLocal_4 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint5", Vector(-275,5844f, 73,237f, 2393,654f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint6", Vector(-117,8339f, 72,35263f, 2437,834f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 728) = Vector(-108,0001f, 55,2157f, 2808.0f);
	*(&iLocal_4 + 728 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint7", Vector(-108,0001f, 55,2157f, 2808.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 760) = Vector(-499,047f, 75,045f, 2209,638f);
	*(&iLocal_4 + 760 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint9", Vector(-499,047f, 75,045f, 2209,638f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 792) = Vector(-479,216f, 74,86f, 2216,221f);
	*(&iLocal_4 + 792 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint10", Vector(-479,216f, 74,86f, 2216,221f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 824) = Vector(-492,624f, 73,197f, 2215,717f);
	*(&iLocal_4 + 824 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 848) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint11", Vector(-492,624f, 73,197f, 2215,717f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 856) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint12", Vector(-1278,561f, 109,428f, 2748,028f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint13", Vector(-1301,064f, 109,312f, 2760,115f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brbf_bhint", Vector(-486,841f, 20,486f, 3033,398f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 880) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brbf_bhtreas", Vector(-474,747f, 22,192f, 3020,728f), Vector(0.0f, 124,597f, 0.0f));
	*(&iLocal_4 + 888) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brbf_bhtreas1", Vector(-494,267f, 20,081f, 3021,206f), Vector(0.0f, 353,651f, 0.0f));
	*(&iLocal_4 + 896) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hgnf_bhint14", Vector(-1284,527f, 109,428f, 2777,638f), Vector(0.0f, 192,563f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire059", "Campfire03", Vector(156,6837f, 94,36859f, 2732.0f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_sit_ground_smoke1", "sit_ground_smoke", Vector(-1290,285f, 109,428f, 2772,222f), Vector(0.0f, 83,22361f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nMesc_Pee2", "Pee", Vector(-1287,66f, 109,428f, 2794,27f), Vector(0.0f, 96,73806f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nMesc_Pee1", "Pee", Vector(-1298,734f, 109,524f, 2776,841f), Vector(0.0f, 96,73806f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_rand_idle_stand4", "rand_idle_stand", Vector(-1300,399f, 109,428f, 2770,623f), Vector(0.0f, 109,37f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_stay41", "horse_stay", Vector(-283,3955f, 73,24915f, 2391,313f), Vector(0.0f, -108,7701f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_4 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_Herb_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-1223,988f, 22,24839f, 3209,047f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 904), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew99", "Player_Herb_WildFeverFew", Vector(-555,1674f, 98,38434f, 2635,168f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew98", "Player_Herb_WildFeverFew", Vector(-444f, 96,37646f, 2640.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew97", "Player_Herb_WildFeverFew", Vector(-360f, 97,38037f, 2576.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew96", "Player_Herb_WildFeverFew", Vector(-194,2945f, 72,28235f, 2424.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew95", "Player_Herb_WildFeverFew", Vector(-259,3197f, 75,29413f, 2460.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew94", "Player_Herb_WildFeverFew", Vector(-279,608f, 77,30195f, 2495,608f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew93", "Player_Herb_WildFeverFew", Vector(-204,0001f, 95,37256f, 2672.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew92", "Player_Herb_WildFeverFew", Vector(-29,24244f, 96,31554f, 2602,664f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew91", "Player_Herb_WildFeverFew", Vector(29,16964f, 93,36469f, 2668,45f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew90", "Player_Herb_WildFeverFew", Vector(-36,00005f, 96,37646f, 2712.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew89", "Player_Herb_WildFeverFew", Vector(177,1115f, 102,4101f, 2588,1f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew88", "Player_Herb_WildFeverFew", Vector(206,8056f, 108,4235f, 2538,181f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew87", "Player_Herb_WildFeverFew", Vector(143,7577f, 73,28625f, 2408,242f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew86", "Player_Herb_WildFeverFew", Vector(111,9999f, 106,4157f, 2569,412f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew85", "Player_Herb_WildFeverFew", Vector(43,99994f, 86,33722f, 2162,004f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew84", "Player_Herb_WildFeverFew", Vector(95,99993f, 73,28625f, 2368.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew83", "Player_Herb_WildFeverFew", Vector(12,00003f, 78,30591f, 2416f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew82", "Player_Herb_WildFeverFew", Vector(-68,00001f, 77,30194f, 2452,171f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew81", "Player_Herb_WildFeverFew", Vector(-68.0f, 74,29022f, 2336.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew80", "Player_Herb_WildFeverFew", Vector(-126,4242f, 74,29022f, 2380,598f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew79", "Player_Herb_WildFeverFew", Vector(-143,7193f, 73,28625f, 2431,689f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew78", "Player_Herb_WildFeverFew", Vector(-255,2952f, 72,28235f, 2363,295f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew77", "Player_Herb_WildFeverFew", Vector(-254,8817f, 76,11722f, 2447,886f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew76", "Player_Herb_WildFeverFew", Vector(-442,5462f, 92,42317f, 2431,439f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew75", "Player_Herb_WildFeverFew", Vector(-498,2016f, 92,36078f, 2466,082f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew74", "Player_Herb_WildFeverFew", Vector(-424f, 97,38037f, 2580.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew73", "Player_Herb_WildFeverFew", Vector(-538,4169f, 98,38431f, 2616,292f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew72", "Player_Herb_WildFeverFew", Vector(-388f, 96,37646f, 2672.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew71", "Player_Herb_WildFeverFew", Vector(-417,5648f, 98,38428f, 2721,565f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew70", "Player_Herb_WildFeverFew", Vector(-546,5907f, 96,37646f, 2494,59f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew69", "Player_Herb_WildFeverFew", Vector(-576,0001f, 98,38428f, 2544f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew68", "Player_Herb_WildFeverFew", Vector(-711,9999f, 99,38824f, 2600f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew67", "Player_Herb_WildFeverFew", Vector(-647,9999f, 101,3961f, 2609,018f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew66", "Player_Herb_WildFeverFew", Vector(-595,8665f, 99,38828f, 2703,866f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew65", "Player_Herb_WildFeverFew", Vector(-727,9998f, 100,3922f, 2696f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew64", "Player_Herb_WildFeverFew", Vector(-707,9999f, 103,4039f, 2752f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew63", "Player_Herb_WildFeverFew", Vector(-691,4358f, 97,39969f, 2803,564f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew62", "Player_Herb_WildFeverFew", Vector(-975,5092f, 104,2495f, 2749,441f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew61", "Player_Herb_WildFeverFew", Vector(-866,3646f, 100,3922f, 2698,365f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew60", "Player_Herb_WildFeverFew", Vector(-880,0001f, 100,3922f, 2740.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew59", "Player_Herb_WildFeverFew", Vector(-872,2901f, 97,38037f, 2820,291f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew58", "Player_Herb_WildFeverFew", Vector(-776,0001f, 93,36469f, 2356f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew57", "Player_Herb_WildFeverFew", Vector(-687,5164f, 98,04729f, 2401,762f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew56", "Player_Herb_WildFeverFew", Vector(-785,8874f, 104,959f, 2280,578f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew55", "Player_Herb_WildFeverFew", Vector(-881,8164f, 110,4574f, 2594,953f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew54", "Player_Herb_WildFeverFew", Vector(-1048f, 101,3961f, 2464.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew53", "Player_Herb_WildFeverFew", Vector(-808,0001f, 100,3922f, 2561,289f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew52", "Player_Herb_WildFeverFew", Vector(-920.0f, 92,36078f, 2304f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew51", "Player_Herb_WildFeverFew", Vector(-1081,386f, 102,4f, 2312.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew50", "Player_Herb_WildFeverFew", Vector(-1128.0f, 110,4313f, 2208.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew49", "Player_Herb_WildFeverFew", Vector(-835,6993f, 111,4353f, 2119,555f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew48", "Player_Herb_WildFeverFew", Vector(-1113,683f, 105,4117f, 2112f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew47", "Player_Herb_WildFeverFew", Vector(-1108.0f, 104,4078f, 2492.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew46", "Player_Herb_WildFeverFew", Vector(-1093,78f, 104,461f, 2528,803f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew45", "Player_Herb_WildFeverFew", Vector(-1021,638f, 109,4289f, 2592f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew44", "Player_Herb_WildFeverFew", Vector(-955,6125f, 107,4232f, 2656,625f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew43", "Player_Herb_WildFeverFew", Vector(-944,0001f, 102,3681f, 2756.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew42", "Player_Herb_WildFeverFew", Vector(-1040f, 102,4f, 2792.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew41", "Player_Herb_WildFeverFew", Vector(-1028f, 101,3961f, 2860.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew40", "Player_Herb_WildFeverFew", Vector(-928,6227f, 101,3961f, 2852,623f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew39", "Player_Herb_WildFeverFew", Vector(-1008,839f, 100,3922f, 2932,839f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew38", "Player_Herb_WildFeverFew", Vector(-1056f, 100,3922f, 2848.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew37", "Player_Herb_WildFeverFew", Vector(-1172f, 95,37256f, 2892,693f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew36", "Player_Herb_WildFeverFew", Vector(-1360f, 95,37256f, 2908.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew35", "Player_Herb_WildFeverFew", Vector(-1320f, 96,37646f, 2980,488f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew34", "Player_Herb_WildFeverFew", Vector(-1200,504f, 110,2503f, 2844,896f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew33", "Player_Herb_WildFeverFew", Vector(-1328f, 118,4628f, 2800.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew32", "Player_Herb_WildFeverFew", Vector(-1444,78f, 115,451f, 2700.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew31", "Player_Herb_WildFeverFew", Vector(-1184f, 98,38432f, 2581,499f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew30", "Player_Herb_WildFeverFew", Vector(-1152.0f, 99,99776f, 2483,981f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew29", "Player_Herb_WildFeverFew", Vector(-1258,333f, 92,15118f, 2541,586f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew28", "Player_Herb_WildFeverFew", Vector(-1331,99f, 94,37176f, 2584,034f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew27", "Player_Herb_WildFeverFew", Vector(-1367,219f, 96,36912f, 2526,926f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew26", "Player_Herb_WildFeverFew", Vector(-1435,734f, 97,38392f, 2523,012f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_horse_stay7", "horse_stay", Vector(-487,679f, 72,291f, 2206,794f), Vector(0.0f, 234,1342f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_horse_tend7", "horse_tend", Vector(-491,2f, 72,336f, 2199,114f), Vector(0.0f, -170,8492f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_horse_stay6", "horse_stay", Vector(-494,0805f, 72,54624f, 2198,433f), Vector(0.0f, 70,08273f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_horse_tend6", "horse_tend", Vector(-501,2441f, 75,6872f, 2227,825f), Vector(0.0f, 175,3533f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_sit_ground_smoke2", "sit_ground_smoke", Vector(-484,8762f, 71,99495f, 2203,452f), Vector(0.0f, -51,32996f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_sit_ground_smoke", "sit_ground_smoke", Vector(-481,8283f, 71,87337f, 2201,816f), Vector(0.0f, 129,3626f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-485,2202f, 72,02464f, 2201,932f), Vector(0.0f, -94,26432f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-482,8451f, 71,85525f, 2203,732f), Vector(0.0f, 18,83562f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-477,8831f, 71,81006f, 2202,998f), Vector(0.0f, -86,38677f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-481,474f, 71,80349f, 2199,808f), Vector(0.0f, -18,62923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-486,1086f, 72,11655f, 2200,902f), Vector(0.0f, -18,62923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-485,8302f, 72,53257f, 2211,344f), Vector(0.0f, 162,0719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-489,738f, 75,217f, 2246,711f), Vector(0.0f, 210,8284f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-483,6721f, 72,0414f, 2200,771f), Vector(0.0f, -156,7047f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_rand_idle_stand2", "rand_idle_stand", Vector(-513,642f, 78,714f, 2228,851f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_rand_idle_stand1", "rand_idle_stand", Vector(-494,992f, 74,165f, 2222,989f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_stand_yawning_n_any1", "stand_yawning_n_any", Vector(-476,394f, 72,594f, 2208,338f), Vector(0.0f, 103,7064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-487,985f, 72,13816f, 2203,913f), Vector(0.0f, -80,51714f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_horse_tend5", "horse_tend", Vector(-485,1934f, 73,68908f, 2227,357f), Vector(0.0f, 175,3533f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_horse_stay5", "horse_stay", Vector(-483,493f, 72,62349f, 2208,31f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_horse_tend4", "horse_tend", Vector(-486,133f, 73,017f, 2219,355f), Vector(0.0f, -170,8492f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_horse_stay4", "horse_stay", Vector(-494,391f, 73,535f, 2216,439f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_Pee2", "Pee", Vector(-500,917f, 75,958f, 2222,902f), Vector(0.0f, 28,07549f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-503,7881f, 76,21277f, 2224,989f), Vector(0.0f, -154,3103f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mtf_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-509,9192f, 76,2117f, 2242,053f), Vector(0.0f, 220,4564f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew25", "Player_Herb_WildFeverFew", Vector(-1468.0f, 99,38824f, 2560,833f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew24", "Player_Herb_WildFeverFew", Vector(-1549,159f, 101,3961f, 2545,159f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew23", "Player_Herb_WildFeverFew", Vector(-1552f, 99,38818f, 2588.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew22", "Player_Herb_WildFeverFew", Vector(-1635,405f, 104,4078f, 2508,201f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew21", "Player_Herb_WildFeverFew", Vector(-1362,88f, 97,13873f, 2502,447f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew20", "Player_Herb_WildFeverFew", Vector(-1476.0f, 101,3961f, 2506,032f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew19", "Player_Herb_WildFeverFew", Vector(-1560.0f, 107,4196f, 2492,373f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew18", "Player_Herb_WildFeverFew", Vector(-1548.0f, 98,38428f, 2204.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew17", "Player_Herb_WildFeverFew", Vector(-1553,751f, 100,3922f, 2276.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew16", "Player_Herb_WildFeverFew", Vector(-1592.0f, 102,4f, 2304.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew15", "Player_Herb_WildFeverFew", Vector(-1556.0f, 101,3961f, 2345,271f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", Vector(-1627,523f, 96,37029f, 2150,974f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", Vector(-1841,983f, 54,47337f, 1869,646f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", Vector(-1824.0f, 57,18702f, 1852,473f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "repair_kneel1", "repair_kneel", Vector(-902,2922f, 100,3209f, 2754,921f), Vector(0.0f, 214,3136f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-905,372f, 102,4f, 2714,956f), Vector(0.0f, -33,62195f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_fence_low1", "sit_fence_low", Vector(-926,543f, 102,3234f, 2736,779f), Vector(0.0f, 116,8946f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "repair_kneel", "repair_kneel", Vector(-931,642f, 102,4139f, 2749,984f), Vector(0.0f, 137,5986f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_fence_low", "sit_fence_low", Vector(-894,3243f, 100,392f, 2739,188f), Vector(0.0f, -84,98307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_hammer_wall", "stand_hammer_wall", Vector(-928,8274f, 102,4108f, 2743,607f), Vector(0.0f, 127,8027f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nsit_docks", "nsit_docks", Vector(-928,1281f, 105,605f, 2752,568f), Vector(0.0f, 37,12743f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "any_washCloths", "any_washCloths", Vector(-933,0951f, 102,4479f, 2758,384f), Vector(0.0f, -65,5621f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "look_out_window_L", "look_out_window_L", Vector(-982,127f, 104,716f, 2722,818f), Vector(0.0f, 91,278f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_docks1", "nsit_docks", Vector(-982,0966f, 104,716f, 2721,483f), Vector(0.0f, 67,37092f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", Vector(-1258,205f, 103,8316f, 2092,937f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", Vector(-1440,801f, 98,38428f, 2152,988f), Vector(0.0f, 80,5882f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", Vector(-1442,045f, 99,40326f, 2240,109f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", Vector(-890,355f, 99,87654f, 2194,054f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", Vector(-1016f, 111,3676f, 2224f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", Vector(-1617,097f, 93,76676f, 2187,019f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", Vector(-1760,903f, 96,82294f, 1933,656f), Vector(0.0f, 54,47325f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", Vector(-1269,262f, 110,4314f, 2072,898f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", Vector(-1910,234f, 40,64242f, 1863,484f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", Vector(-1816,805f, 53,13725f, 1890,521f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-1959,485f, 75,21778f, 1828,361f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_tend41", "horse_tend", Vector(-282,807f, 73,153f, 2397,404f), Vector(0.0f, -105,3701f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_stay31", "horse_stay", Vector(-285,8602f, 73,25476f, 2394,963f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_sit_docks1", "nsit_docks", Vector(-290,5338f, 72,49307f, 2419,896f), Vector(0.0f, -179,4226f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_stay71", "horse_stay", Vector(-119,6366f, 72,03043f, 2427,21f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_tend31", "horse_tend", Vector(-121,785f, 72,25f, 2429,164f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_stay61", "horse_stay", Vector(-132,6584f, 73,51955f, 2425,296f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_stay51", "horse_stay", Vector(-130,0145f, 73,31475f, 2424,778f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_stand_lookdistanc21", "stand_lookdistance_w_any", Vector(-112,3357f, 73,28622f, 2448,212f), Vector(0.0f, -113,7659f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nStil_Pee1", "Pee", Vector(-104,0126f, 72,15959f, 2431,303f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_stand_lookdistance11", "stand_lookdistance_w_any", Vector(-121,4438f, 73,18758f, 2444,482f), Vector(0.0f, 82,29852f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_Rand_Idle_NearWall11", "Rand_Idle_NearWall", Vector(-112,6356f, 72,353f, 2443,39f), Vector(0.0f, -25,94683f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_campfire_talk1", "campfire_talk", Vector(-115,0204f, 72,35263f, 2440,231f), Vector(0.0f, 131,5032f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_Campfire_Tend11", "Sit_Ground_Campfire_Tend", Vector(-112,7236f, 72,353f, 2441,722f), Vector(0.0f, 69,00607f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-279,7706f, 73,139f, 2391,325f), Vector(0.0f, 22,22883f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-274,7329f, 73,15596f, 2395,753f), Vector(0.0f, 179,5037f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_lie_sleep_on_bed_l", "lie_sleep_on_bed_l", Vector(-274,4596f, 73,25157f, 2391,465f), Vector(0.0f, -92,90387f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_lean_rail", "nlean_rail", Vector(-275,3539f, 73,12715f, 2398,184f), Vector(0.0f, -179,8969f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_rand_idle_stand1", "rand_idle_stand", Vector(-274,7468f, 73,148f, 2396,871f), Vector(0.0f, 254,0465f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-171,5715f, 72,39375f, 2330,361f), Vector(0.0f, 89,22446f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_horse_tend1", "horse_tend", Vector(-109,4213f, 55,21569f, 2806,907f), Vector(0.0f, -141,5272f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_horse_tend", "horse_tend", Vector(-111,8189f, 55,2157f, 2809,007f), Vector(0.0f, 103,6899f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_horse_stay3", "horse_stay", Vector(-114,0363f, 55,2157f, 2810,398f), Vector(0.0f, -134,0859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_horse_stay2", "horse_stay", Vector(-112,4162f, 55,2157f, 2807,465f), Vector(0.0f, 91,06381f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_horse_stay1", "horse_stay", Vector(-118,7427f, 55,2157f, 2812,998f), Vector(0.0f, 206,9627f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_horse_stay", "horse_stay", Vector(-109,9179f, 55,21569f, 2807,491f), Vector(0.0f, 49,26177f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_smoking_stand", "smoking_stand", Vector(-104,1135f, 55,47424f, 2807,156f), Vector(0.0f, 211,2294f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_sit_ground_smoke", "sit_ground_smoke", Vector(-103,5438f, 55,44496f, 2801,546f), Vector(0.0f, -132,4733f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_play_harmonica", "sit_ground_play_harmonica", Vector(-104,0469f, 55,32558f, 2803,035f), Vector(0.0f, -82,07317f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-102,1707f, 55,36632f, 2804,345f), Vector(0.0f, -3,558987f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_stand_lookdistance", "stand_lookdistance_w_any", Vector(-117,0521f, 55,2157f, 2805,38f), Vector(0.0f, 58,87966f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "pasted__Man_Pee", "Pee", Vector(-95,50251f, 55,21611f, 2799,677f), Vector(0.0f, 241,5218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "pasted__Man_smoking_stand", "smoking_stand", Vector(-100,1235f, 55,34239f, 2802,147f), Vector(0.0f, 74,89233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_look_distance_binocs", "look_distance_binocs", Vector(-119,8045f, 55,2157f, 2815,365f), Vector(0.0f, 172,6626f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_stay2", "horse_stay", Vector(-176,4697f, 72,47968f, 2336,637f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_stay1", "horse_stay", Vector(-178,5961f, 72,28235f, 2344,056f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_stay", "horse_stay", Vector(-176,0005f, 72,40929f, 2338,774f), Vector(0.0f, 85,15128f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_tend1", "horse_tend", Vector(-182,9534f, 72,61275f, 2342,223f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-178,0995f, 72,53835f, 2332,596f), Vector(0.0f, -18,7411f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-174,1021f, 72,39375f, 2332,586f), Vector(0.0f, -23,18213f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_look_distance_binocs", "look_distance_binocs", Vector(-163,9925f, 72,23011f, 2335,94f), Vector(0.0f, -4,903682f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_rand_idle_stand", "rand_idle_stand", Vector(-169,1717f, 72,3328f, 2331,828f), Vector(0.0f, -11,84327f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_smoking_stand", "smoking_stand", Vector(-172,7588f, 72,39375f, 2331,682f), Vector(0.0f, 10,0226f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-174,9404f, 72,39375f, 2330,198f), Vector(0.0f, -99,68264f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Stil_horse_tend", "horse_tend", Vector(-173,0439f, 72,21784f, 2337,289f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_rand_idle_stand3", "rand_idle_stand", Vector(-1310,823f, 108,507f, 2759,502f), Vector(0.0f, 109,37f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_rand_idle_stand2", "rand_idle_stand", Vector(-1290,639f, 109,428f, 2772,813f), Vector(0.0f, 109,37f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_rand_idle_stand1", "rand_idle_stand", Vector(-1277,641f, 109,427f, 2777,696f), Vector(0.0f, 109,37f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay11", "horse_stay", Vector(-1277,705f, 109,427f, 2753,559f), Vector(0.0f, 9,925353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay10", "horse_stay", Vector(-1290,404f, 116,455f, 2716,549f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay9", "horse_stay", Vector(-1303,118f, 108,424f, 2746,513f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay8", "horse_stay", Vector(-1291,411f, 108,424f, 2745,976f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_stand_holy_water", "stand_holy_water", Vector(-1266,753f, 109,4274f, 2762,999f), Vector(0.0f, 91,55917f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_Campfire_Tend2", "Sit_Ground_Campfire_Tend", Vector(-1304,773f, 111,4353f, 2731,426f), Vector(0.0f, -138,5776f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand1", "smoking_stand", Vector(-1302,064f, 111,4353f, 2730,996f), Vector(0.0f, 125,0703f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_sleeping_wal1", "sleeping_wall_scripted", Vector(-1267,786f, 109,4274f, 2786,777f), Vector(0.0f, -234,9549f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay12", "horse_stay", Vector(-1246,143f, 109,779f, 2734,597f), Vector(0.0f, 9,925353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay7", "horse_stay", Vector(-1309,688f, 109,325f, 2771,592f), Vector(0.0f, 9,925353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay6", "horse_stay", Vector(-1279,988f, 109,427f, 2788,018f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay5", "horse_stay", Vector(-1284,899f, 109,428f, 2779,304f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay4", "horse_stay", Vector(-1275,122f, 109,427f, 2793,871f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_stand_guntricks1", "stand_guntricks_e_any", Vector(-1273,336f, 109,4274f, 2749,484f), Vector(0.0f, -76,89563f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bac_Locked_Footlocker", "Locked_Footlocker", Vector(112,1806f, 71,25297f, 2685,642f), Vector(0.0f, -155,5412f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	DECOR_SET_INT(&iVar0, "GringoDollarAmt", true);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_LockedFootlocker", "Locked_Footlocker", Vector(-1231,767f, 22,25275f, 3206,919f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	DECOR_SET_INT(&iVar0, "GringoDollarAmt", true);
	*(&iLocal_4 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_Campfire_Tend", "Sit_Ground_Drink", Vector(-1232,077f, 22,27966f, 3211,868f), Vector(0.0f, 68,73868f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 912), 0);
	*(&iLocal_4 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "look_out_window_L1", "look_out_window_L", Vector(-1237,542f, 22,2412f, 3212,973f), Vector(0.0f, 178,7504f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 920), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_horse_tend2", "horse_tend", Vector(-1246,379f, 22,62883f, 3213,033f), Vector(0.0f, -101,8198f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_horse_tend1", "horse_tend", Vector(-1252,025f, 23,933f, 3209,663f), Vector(0.0f, -95,92507f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_horse_tend", "horse_tend", Vector(-1218,964f, 24,87803f, 3201,336f), Vector(0.0f, 96,76688f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_horse_stay2", "horse_stay", Vector(-1249,464f, 23,35681f, 3211,482f), Vector(0.0f, -78,81496f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_horse_stay1", "horse_stay", Vector(-1217,079f, 24,57645f, 3202,547f), Vector(0.0f, 88,79853f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_horse_stay", "horse_stay", Vector(-1216,456f, 23,98988f, 3204,24f), Vector(0.0f, 63,17963f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_look_distance_binocs", "look_distance_binocs", Vector(-1230,744f, 22,27831f, 3209,075f), Vector(0.0f, -98,96873f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-1240,388f, 22,12842f, 3206,192f), Vector(0.0f, 88,11987f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_Pee", "Pee", Vector(-1225,842f, 22,606f, 3204,7f), Vector(0.0f, -31,56896f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-1236,22f, 22,24551f, 3207,925f), Vector(0.0f, 36,00572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-1234,064f, 22,25175f, 3207,401f), Vector(0.0f, -97,59713f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1238,701f, 22,34453f, 3206,441f), Vector(0.0f, -115,5628f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Grn_smoking_stand", "smoking_stand", Vector(-1233,578f, 22,25408f, 3212.0f), Vector(0.0f, 45,14069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bac_hhorse_tend2", "horse_tend", Vector(97,78033f, 71,27844f, 2684.0f), Vector(0.0f, -203,1011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bac_hhorse_tend1", "horse_tend", Vector(100,0754f, 71,27844f, 2683,136f), Vector(0.0f, -181,4435f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bac_hhorse_tend", "horse_tend", Vector(108f, 71,27842f, 2675,017f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bac_hhorse_stay2", "horse_stay", Vector(102,0794f, 71,27847f, 2682,786f), Vector(0.0f, -35,9964f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bac_hhorse_stay1", "horse_stay", Vector(106,0782f, 71,15269f, 2676,675f), Vector(0.0f, 33,68391f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bac_horse_stay", "horse_stay", Vector(102,9418f, 71,1523f, 2677,747f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bach_use_shelf", "nuse_shelf", Vector(124,6688f, 72,42136f, 2671,896f), Vector(0.0f, 294,9007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bach_lie_sleep", "lie_sleep_on_bed_r", Vector(123,6714f, 72,42126f, 2669,944f), Vector(0.0f, -63,85365f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bach_look_out_window", "look_out_window_L", Vector(121,8701f, 72,41193f, 2670,781f), Vector(0.0f, 117,1071f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bach_look_distance", "stand_lookdistance_w_any", Vector(129,3817f, 72,4876f, 2674,44f), Vector(0.0f, -93,00282f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bach_smoking_stand", "rand_idle_stand", Vector(126,5116f, 72,4119f, 2675,403f), Vector(0.0f, 182,2345f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bach_NearWall_Shoulder_R", "Rand_Idle_NearWall", Vector(122,0145f, 72,40353f, 2674,539f), Vector(0.0f, -240,2579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_stand_guntricks", "stand_guntricks_e_any", Vector(-1270,788f, 109,4274f, 2749,184f), Vector(0.0f, 84,16376f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_drunk_throwbottle", "stand_drunk_throwbottle", Vector(-1265,812f, 109,4274f, 2746,996f), Vector(0.0f, -70,91444f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-1263,234f, 109,4274f, 2748,075f), Vector(0.0f, -8,879789f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_play_harmonica", "sit_ground_play_harmonica", Vector(-1264,823f, 109,4274f, 2745,407f), Vector(0.0f, -131,5376f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_Campfire_Tend1", "Sit_Ground_Campfire_Tend", Vector(-1261,675f, 109,4274f, 2745,347f), Vector(0.0f, 97,42413f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-1261,765f, 109,4274f, 2747,085f), Vector(0.0f, -317,9632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay3", "horse_stay", Vector(-1246,143f, 109,779f, 2734,597f), Vector(0.0f, 9,925353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay2", "horse_stay", Vector(-1231,185f, 109,4274f, 2745,39f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay1", "horse_stay", Vector(-1251,29f, 109,4274f, 2761,342f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_horse_stay", "horse_stay", Vector(-1255,198f, 109,4274f, 2763,017f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_Pee", "Pee", Vector(-1235,608f, 109,4274f, 2751,687f), Vector(0.0f, 96,73806f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_rand_idle_stand", "rand_idle_stand", Vector(-1249,862f, 109,5147f, 2754,044f), Vector(0.0f, 109,37f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-1241,34f, 108,515f, 2755,404f), Vector(0.0f, 122,3701f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_smoking_stand", "smoking_stand", Vector(-1244,553f, 109,4274f, 2768,205f), Vector(0.0f, -77,75138f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1243,383f, 109,4517f, 2766,101f), Vector(0.0f, -156,7047f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1242,411f, 109,4274f, 2769,383f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_sit_ground_smoke", "sit_ground_smoke", Vector(-1240,573f, 109,4021f, 2768,07f), Vector(0.0f, 83,22361f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1339,527f, 116,455f, 2778,435f), Vector(0.0f, -160,6844f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1286,395f, 116,417f, 2719,064f), Vector(0.0f, -160,6844f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1281,565f, 113,7627f, 2808.0f), Vector(0.0f, -160,6844f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Mesc_lookdistance_binocs", "look_distance_binocs", Vector(-1246,043f, 112,232f, 2789,971f), Vector(0.0f, -122,5477f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire056", "Campfire03_bad", Vector(-362,1945f, 97,38037f, 2566,195f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire055", "Campfire05", Vector(-478,236f, 97,38037f, 2650,236f), Vector(0.0f, -87,95684f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire054", "Campfire05", Vector(-552,0001f, 98,38428f, 2648f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire052", "Campfire05", Vector(-1045,133f, 109,4274f, 2254,867f), Vector(0.0f, -62,4227f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire051", "Campfire01_bad", Vector(-1119,719f, 105,4117f, 2122,559f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire050", "Campfire05", Vector(-1552,548f, 99,38824f, 2164f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire049", "Campfire04", Vector(-948,0001f, 106,4156f, 2704f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire048", "Campfire05", Vector(-784,0001f, 97,38317f, 2664,547f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire047", "Campfire04", Vector(32,0001f, 98,38428f, 2912,956f), Vector(0.0f, 85,25139f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_stand_yawning_n_any1", "stand_yawning_n_any", Vector(-484,842f, 20,486f, 3036,186f), Vector(0.0f, 103,7064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_smoking_stand4", "smoking_stand", Vector(-490,907f, 20,081f, 3028,224f), Vector(0.0f, -92,93414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_rand_idle_stand3", "rand_idle_stand", Vector(-483,113f, 20,354f, 3018,092f), Vector(0.0f, -27,62441f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_rand_idle_stand2", "rand_idle_stand", Vector(-485,8575f, 20,11623f, 3020,444f), Vector(0.0f, -16,63606f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-487,818f, 20,08f, 3027,049f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-472,17f, 23,539f, 3002,219f), Vector(0.0f, -22,8892f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_rand_idle_stand1", "rand_idle_stand", Vector(-479,193f, 21,395f, 3011,36f), Vector(0.0f, -54,23795f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_stand_yawning_n_any", "stand_yawning_n_any", Vector(-490,8237f, 20,09063f, 3018,624f), Vector(0.0f, 314,5764f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_smoking_stand3", "smoking_stand", Vector(-489,166f, 22,934f, 3008,071f), Vector(0.0f, 125,0703f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_smoking_stand2", "smoking_stand", Vector(-486,841f, 20,486f, 3033,398f), Vector(0.0f, -92,93414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_rand_idle_stand", "rand_idle_stand", Vector(-487,3976f, 20,04222f, 3030,592f), Vector(0.0f, 0,05803982f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-516,832f, 22,626f, 3011,923f), Vector(0.0f, 71,97202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-484,013f, 20,46403f, 3030,633f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_horse_stay3", "horse_stay", Vector(-486,5086f, 20,25895f, 3023,12f), Vector(0.0f, -73,51933f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_horse_stay2", "horse_stay", Vector(-485,694f, 20,12819f, 3025,852f), Vector(0.0f, -70,77419f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_Pee1", "Pee", Vector(-502,053f, 22,795f, 3020,031f), Vector(0.0f, -245,9337f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_smoking_stand1", "smoking_stand", Vector(-481,0595f, 20,49036f, 3034,915f), Vector(0.0f, -92,93414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_horse_stay1", "horse_stay", Vector(-497,898f, 22,734f, 3008,745f), Vector(0.0f, -71,77749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_horse_stay", "horse_stay", Vector(-501,242f, 22,723f, 3007,798f), Vector(0.0f, -71,77749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_lie_sleep_on_bed_r", "lie_sleep_on_bed_r", Vector(-488,8596f, 20,48626f, 3033,328f), Vector(0.0f, 21,64087f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_look_out_window_L", "look_out_window_L", Vector(-486,3459f, 20,5107f, 3032,663f), Vector(0.0f, -66,49553f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-499.0f, 22,663f, 3009,645f), Vector(0.0f, 247,5717f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_Pee", "Pee", Vector(-491,229f, 20,038f, 3030,695f), Vector(0.0f, 62,1369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_stand_lookdistance", "stand_lookdistance_w_any", Vector(-481,405f, 24,341f, 2997,675f), Vector(0.0f, -22,8892f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-490,3297f, 20,08626f, 3026,724f), Vector(0.0f, -66,90773f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_lean_rail", "nlean_rail", Vector(-488,092f, 20,47741f, 3037,65f), Vector(0.0f, -162,8951f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire046", "Campfire01", Vector(33,71349f, 94,36859f, 2583,156f), Vector(0.0f, 178,6161f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire045", "Campfire01_bad", Vector(52,73235f, 93,36469f, 2577,877f), Vector(0.0f, 89,43166f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire044", "Campfire01_bad", Vector(-12,00003f, 95,37256f, 2596.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire043", "Campfire04", Vector(-354,289f, 82,32156f, 2196,203f), Vector(0.0f, 89,04195f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire042", "Campfire04", Vector(-336,0105f, 76,29803f, 2377,477f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire041", "Campfire04", Vector(-508.0f, 88,88226f, 2344f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire040", "Campfire01", Vector(-35,7155f, 89,34904f, 2530,951f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire039", "Campfire01", Vector(205,6499f, 104,4238f, 2584,944f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire038", "Campfire01", Vector(17,18601f, 90,35291f, 2542,814f), Vector(0.0f, 97,82784f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire037", "Campfire01", Vector(40,7115f, 92,36078f, 2551,289f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire035", "Campfire01", Vector(-38,61609f, 96,30435f, 2695,379f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire034", "Campfire01", Vector(-381,8329f, 86,93017f, 2089,833f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire033", "Campfire01", Vector(-488,6985f, 91,35676f, 2124,877f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire031", "Campfire01", Vector(-636.0f, 96,37646f, 2228.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire030", "Campfire01", Vector(-653,2507f, 96,37646f, 2253,657f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire029", "Campfire01", Vector(-747,4767f, 101,396f, 2171,295f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire028", "Campfire01", Vector(-1376f, 117,4588f, 2610,934f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire027", "Campfire01", Vector(-1277,852f, 117,4588f, 2611,575f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire026", "Campfire01", Vector(-1526,463f, 99,3818f, 2225,518f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire025", "Campfire01", Vector(-1316,073f, 94,34322f, 2566,855f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire024", "Campfire01", Vector(-1333,725f, 96,38882f, 2246,294f), Vector(0.0f, 27,59212f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire023", "Campfire01", Vector(-1185,474f, 112,0102f, 2160,028f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire022", "Campfire01", Vector(-1040f, 101,3961f, 2468.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire021", "Campfire01", Vector(-412,0001f, 97,38037f, 2694,152f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire019", "Campfire01", Vector(-956,2631f, 106,4156f, 2682,451f), Vector(0.0f, -103,3852f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire018", "Campfire03", Vector(-871,9999f, 97,38037f, 2804f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire017", "Campfire01", Vector(-1047,587f, 102,4f, 2790,888f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire016", "Campfire01", Vector(-1120,982f, 99,38824f, 2791,018f), Vector(0.0f, 109,0583f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire015", "Campfire01", Vector(-993,5774f, 101,4007f, 2895,97f), Vector(0.0f, 101,4003f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire014", "Campfire01", Vector(-1236f, 95,37256f, 2896.0f), Vector(0.0f, 68,2284f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire013", "Campfire01", Vector(-1298,68f, 96,37646f, 2961,082f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire012", "Campfire01", Vector(-1361,375f, 94,26417f, 2970,619f), Vector(0.0f, -228,3143f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire011", "Campfire01", Vector(-1380,812f, 118,49f, 2847,833f), Vector(0.0f, -105,805f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire010", "Campfire01", Vector(-1472,835f, 80,31372f, 2817,708f), Vector(0.0f, 100,8404f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire09", "Campfire01", Vector(-1453,252f, 80,31372f, 2824.0f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire08", "Campfire01", Vector(-1459,474f, 118,4628f, 2734,008f), Vector(0.0f, 55,5816f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire07", "Campfire01", Vector(-1570,172f, 100,3922f, 2143,943f), Vector(0.0f, -86,05379f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire06", "Campfire01", Vector(-1626,055f, 104,4078f, 2499,888f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire05", "Campfire01", Vector(-1642,908f, 103,4039f, 2463,479f), Vector(0.0f, 117,6219f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire03", "Campfire01", Vector(-1711,887f, 46,18039f, 2185,038f), Vector(0.0f, 87,34352f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire01", "Campfire01", Vector(-1769,727f, 42,1647f, 2423,407f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire060", "Campfire01", Vector(-990,0055f, 101,4004f, 2855,315f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire061", "Campfire01", Vector(-1024,396f, 101,3961f, 2870,422f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire062", "Campfire01", Vector(-1084,115f, 101,3961f, 2804,115f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire063", "Campfire01", Vector(-1092f, 100,3922f, 2832f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire064", "Campfire01", Vector(-1134,502f, 99,38824f, 2802,502f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire065", "Campfire01", Vector(-1050,557f, 101,3961f, 2816.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire066", "Campfire01", Vector(-852,0001f, 100,3922f, 2688f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire067", "Campfire01", Vector(-859,4987f, 100,3922f, 2717,108f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire068", "Campfire01", Vector(-871,4346f, 100,3922f, 2684f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire069", "Campfire01", Vector(-936,0001f, 107,4196f, 2656,35f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire070", "Campfire01", Vector(-970,7598f, 106,4156f, 2658,76f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire071", "Campfire01", Vector(-948,9295f, 106,4156f, 2676f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire072", "Campfire01", Vector(-543,9219f, 102,4f, 2759,639f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire074", "Campfire01", Vector(-567,9999f, 102,4f, 2757,253f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire075", "Campfire01", Vector(-518,1526f, 100,3922f, 2732,255f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire076", "Campfire01_bad", Vector(-571,8811f, 101,3961f, 2738,932f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire077", "Campfire01", Vector(-609,6843f, 99,38828f, 2696,082f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire079", "Campfire01", Vector(-427,4243f, 98,38428f, 2718,325f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire081", "Campfire01", Vector(-55,99994f, 89,349f, 2528,528f), Vector(0.0f, 58,17722f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire083", "Campfire01", Vector(-332,4246f, 76,29803f, 2366,257f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire084", "Campfire01", Vector(-315,9999f, 76,29803f, 2358,513f), Vector(0.0f, 109,6635f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire085", "Campfire01", Vector(-33,10468f, 95,37256f, 2589,066f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire086", "Campfire01", Vector(3,064902f, 95,3725f, 2876,447f), Vector(0.0f, -86,96823f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire087", "Campfire01", Vector(-808,0001f, 99,38824f, 2660.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire088", "Campfire01", Vector(-786,0499f, 97,38037f, 2608.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire089", "Campfire01", Vector(-1065,151f, 100,3922f, 2836.0f), Vector(0.0f, 0.0f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire090", "Campfire01", Vector(1,620422f, 74,29016f, 2340,822f), Vector(0.0f, -126,948f, 0.0f));
	DECOR_SET_BOOL(&iVar0, "MP_ONLY", 1);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire091", "Campfire01", Vector(29,07159f, 75,29413f, 2373,896f), Vector(0.0f, -42,47477f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire092", "Campfire01", Vector(1,678968f, 76,29803f, 2390,144f), Vector(0.0f, 113,8837f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire093", "Campfire01", Vector(4,160243f, 78,30591f, 2425,663f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire094", "Campfire01", Vector(-39,99992f, 76,29803f, 2396,489f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire095", "Campfire01", Vector(-71,99994f, 74,29022f, 2343,664f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire096", "Campfire01", Vector(-11,99994f, 89,34901f, 2527,622f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire097", "Campfire01", Vector(-43,89724f, 79,30981f, 2433,757f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire098", "Campfire01", Vector(-161,3723f, 81,31763f, 2504,029f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire099", "Campfire01_bad", Vector(-201,9949f, 72,28236f, 2428,262f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire0100", "Campfire01", Vector(-224,935f, 75,29413f, 2486,827f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Campfire0101", "Campfire01", Vector(-259,9999f, 78,30591f, 2497,48f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Locked_Footlocker", "Locked_Footlocker", Vector(-72,00005f, 54,39764f, 2820.0f), Vector(0.0f, -599,5076f, 0.0f));
	*(&iLocal_4 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "any_washCloths1", "any_washCloths", Vector(119,6759f, 72,28231f, 2672,96f), Vector(0.0f, 101,6139f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 936), 0);
	*(&iLocal_4 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rand_idle_stand", "rand_idle_stand", Vector(125,609f, 72,40736f, 2675,811f), Vector(0.0f, 221,8964f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 944), 0);
	*(&iLocal_4 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_docks2", "nsit_docks", Vector(120,7647f, 71,27381f, 2683,097f), Vector(0.0f, -154,344f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 952), 0);
	*(&iLocal_4 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "digging", "digging", Vector(129,3431f, 72,33885f, 2666,097f), Vector(0.0f, -53,53743f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 960), 0);
	*(&iLocal_4 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mex_flirt_sit_stool_attached", "mex_flirt_sit_stool_attached_link", Vector(123,4719f, 72,37572f, 2675,644f), Vector(0.0f, 21,733f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 968), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "brb_rand_idle_stand4", "rand_idle_stand", Vector(-479,348f, 20,168f, 3030,72f), Vector(0.0f, -16,63606f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_sit_ground_smoke1", "sit_ground_smoke", Vector(-101,755f, 55,48045f, 2800,974f), Vector(0.0f, -174,9355f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Man_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-117,9614f, 55,2157f, 2809,237f), Vector(0.0f, 110,4136f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	return 1;
}

bool Function_83(struct<2>[] Param0) //Position: 0xAE42 / 44610
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_87();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_86(&(Param0[iVar02]), 8);
		}
		else if (Function_85())
		{
			iVar1 = 1;
			Function_86(&(Param0[iVar02]), 8);
		}
		Function_86(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_9(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_9(&(Param0[02]), 8) || iVar1));
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
				Function_86(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_86(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_86(&(Param0[iVar02]), 2);
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
							Function_86(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_86(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_86(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_86(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_86(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_86(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_86(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_86(&(Param0[iVar02]), 2);
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
	Function_84();
	return 1;
}

void Function_84() //Position: 0xB204 / 45572
{
	if (!Function_16(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_85() //Position: 0xB244 / 45636
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

void Function_86(struct<13> Param0) //Position: 0xB272 / 45682
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_87() //Position: 0xB285 / 45701
{
	if (!Function_16(128))
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

var Function_88(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xB2C7 / 45767
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_89(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_86(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_89(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xB305 / 45829
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_86(&(Param0[iVar02]), 4);
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

void Function_90(int iParam0, int iParam1) //Position: 0xB3D4 / 46036
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

bool Function_91() //Position: 0xB41E / 46110
{
	var uVar0;
	
	Function_90(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("HennigansStead_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "pikv_helperHerdDest", 4,203895E-45f, Vector(-764.0f, 101,3961f, 2200.0f), Vector(0.0f, 20.0f, 0.0f), Vector(26,34139f, 9,701624f, 26,34139f));
	return 1;
}

void Function_92(char* cParam0) //Position: 0xB4C0 / 46272
{
	if (!Function_16(128))
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

void Function_93(int iParam0) //Position: 0xB4FD / 46333
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_44085[iParam09] == Global_46722[0])
	{
		STREAMING_REQUEST_ACTOR(1177, 1, false);
	}
	else if (Global_44085[iParam09] == Global_46722[1])
	{
		STREAMING_REQUEST_ACTOR(1179, 1, false);
	}
	else if (Global_44085[iParam09] == Global_46722[2])
	{
		STREAMING_REQUEST_ACTOR(1178, 1, false);
	}
	return;
}

