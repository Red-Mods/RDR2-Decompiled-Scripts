//Decompiled with MagicRDR v1.0
//Function Count : 104
//Statics Count : 497
//Natives Count : 145
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 28;
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
	var uLocal_132 = 19;
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
	int iLocal_282 = 0;
	bool bLocal_283 = false;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 6;
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
	vector3 vLocal_420[12] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	int iLocal_494 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_282 = 0;
	ALLOW_TUMBLEWEEDS(1);
	Function_103("Initializing Plainview", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_283 = 1000;
		switch (iLocal_282)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_282 = 1;
				}
				bLocal_283 = false;
				break;
			
			case 0x00000001:
				if (Function_102())
				{
					Global_98961 = 0;
					iLocal_282 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(24, 12, 2);
				}
				bLocal_283 = false;
				break;
			
			case 0x00000002:
				if (Function_93())
				{
					Function_92(&(Global_43791[iScriptParam_0]), 32);
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "smoking_stand"), 1, 0, 0, 0, 0, 1);
					vLocal_420[03] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "smoking_stand"), 1, 0, 0, 0, 0, 1) };
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand10"), 1, 0, 0, 0, 0, 1);
					vLocal_420[13] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand10"), 1, 0, 0, 0, 0, 1) };
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "smoking_stand1"), 1, 0, 0, 0, 0, 1);
					vLocal_420[23] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "smoking_stand1"), 1, 0, 0, 0, 0, 1) };
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand9"), 1, 0, 0, 0, 0, 1);
					vLocal_420[33] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand9"), 1, 0, 0, 0, 0, 1) };
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "smoking_stand2"), 1, 0, 0, 0, 0, 1);
					vLocal_420[43] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "smoking_stand2"), 1, 0, 0, 0, 0, 1) };
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand11"), 1, 0, 0, 0, 0, 1);
					vLocal_420[53] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand11"), 1, 0, 0, 0, 0, 1) };
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand12"), 1, 0, 0, 0, 0, 1);
					vLocal_420[63] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand12"), 1, 0, 0, 0, 0, 1) };
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "smoking_stand3"), 1, 0, 0, 0, 0, 1);
					vLocal_420[73] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "smoking_stand3"), 1, 0, 0, 0, 0, 1) };
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand8"), 1, 0, 0, 0, 0, 1);
					vLocal_420[83] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand8"), 1, 0, 0, 0, 0, 1) };
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand13"), 1, 0, 0, 0, 0, 1);
					vLocal_420[93] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand13"), 1, 0, 0, 0, 0, 1) };
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand14"), 1, 0, 0, 0, 0, 1);
					vLocal_420[103] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "rand_idle_stand14"), 1, 0, 0, 0, 0, 1) };
					Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "smoking_stand4"), 1, 0, 0, 0, 0, 1);
					vLocal_420[113] = { StackVal, StackVal, Function_91(FIND_OBJECT_IN_LAYOUT(&iLocal_14, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(&iLocal_14, "smoking_stand4"), 1, 0, 0, 0, 0, 1) };
					iLocal_282 = 3;
				}
				bLocal_283 = false;
				break;
			
			case 0x00000003:
				uLocal_284 = LAUNCH_NEW_SCRIPT_WITH_ARGS("PlainviewVol", &iScriptParam_0, 2, 0);
				Function_90(&Global_11726, &Global_13850, iScriptParam_0);
				iLocal_282 = 5;
				bLocal_283 = false;
				break;
			
			case 0x00000005:
				if (Function_89(&Global_11726, &Global_13850, iScriptParam_0))
				{
					iLocal_282 = 4;
					bLocal_283 = false;
				}
				else
				{
					bLocal_283 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_88(&(Global_43791[iScriptParam_0]), 16) && Function_87(Global_44085[iScriptParam_09]))
				{
					iLocal_282 = 6;
				}
				bLocal_283 = false;
				break;
			
			case 0x00000006:
				Function_86(0, &uLocal_286, &iLocal_14 + 1000);
				Function_85(StackVal, 0, &uLocal_286, Vector(-3244,171f, 39,716f, 3764,044f));
				Function_84(StackVal, 0, &uLocal_286, Vector(-3244,171f, 39,716f, 3764,044f));
				Function_83(StackVal, 0, &uLocal_286, Vector(-3244,171f, 39,716f, 3764,044f));
				Function_82(0, &uLocal_286, &iLocal_14 + 1000);
				Function_81(0, &uLocal_286, &iLocal_14 + 1024);
				Function_80(0, &uLocal_286, &iLocal_4);
				Function_86(1, &uLocal_286, &iLocal_14 + 1032);
				Function_85(StackVal, 1, &uLocal_286, Vector(-3132,029f, 43,474f, 3648,082f));
				Function_84(StackVal, 1, &uLocal_286, Vector(-3189,534f, 40,83f, 3712.0f));
				Function_83(StackVal, 1, &uLocal_286, Vector(-3132,029f, 43,474f, 3648,082f));
				Function_79(StackVal, 1, &uLocal_286, Vector(-3189,534f, 40,83f, 3712.0f));
				Function_81(1, &uLocal_286, &iLocal_14 + 1032);
				Function_80(1, &uLocal_286, &iLocal_4);
				Function_86(2, &uLocal_286, &iLocal_14 + 1040);
				Function_85(StackVal, 2, &uLocal_286, Vector(-3214,415f, 40,157f, 3726,164f));
				Function_84(StackVal, 2, &uLocal_286, Vector(-3188,018f, 40,971f, 3714,524f));
				Function_83(StackVal, 2, &uLocal_286, Vector(-3103,037f, 45,199f, 3753,386f));
				Function_79(StackVal, 2, &uLocal_286, Vector(-3188,018f, 40,971f, 3714,524f));
				Function_78(StackVal, 2, &uLocal_286, Vector(-3188,018f, 40,971f, 3714,524f));
				Function_80(2, &uLocal_286, &iLocal_4);
				Function_77(StackVal, 3, &uLocal_286, Vector(-3191,546f, 40,401f, 3775,018f));
				Function_85(StackVal, 3, &uLocal_286, Vector(-3223,475f, 40,152f, 3726,323f));
				Function_84(StackVal, 3, &uLocal_286, Vector(-3191,546f, 40,401f, 3775,018f));
				Function_83(StackVal, 3, &uLocal_286, Vector(-3223,475f, 40,152f, 3726,323f));
				Function_79(StackVal, 3, &uLocal_286, Vector(-3191,546f, 40,401f, 3775,018f));
				Function_81(3, &uLocal_286, &iLocal_14 + 1016);
				Function_80(3, &uLocal_286, &iLocal_4);
				Function_77(StackVal, 4, &uLocal_286, Vector(-3186,631f, 42,496f, 3726,175f));
				Function_85(StackVal, 4, &uLocal_286, Vector(-3147,338f, 43,172f, 3731,099f));
				Function_84(StackVal, 4, &uLocal_286, Vector(-3196,765f, 41,298f, 3745,842f));
				Function_83(StackVal, 4, &uLocal_286, Vector(-3147,338f, 43,172f, 3731,099f));
				Function_79(StackVal, 4, &uLocal_286, Vector(-3196,765f, 41,298f, 3745,842f));
				Function_78(StackVal, 4, &uLocal_286, Vector(-3217,51f, 40,193f, 3749,765f));
				Function_80(4, &uLocal_286, &iLocal_4);
				Function_77(StackVal, 5, &uLocal_286, Vector(-3195,162f, 41,378f, 3739,869f));
				Function_85(StackVal, 5, &uLocal_286, Vector(-3092,851f, 61,055f, 3755,599f));
				Function_84(StackVal, 5, &uLocal_286, Vector(-3196,765f, 41,298f, 3745,842f));
				Function_83(StackVal, 5, &uLocal_286, Vector(-3092,851f, 61,055f, 3755,599f));
				Function_79(StackVal, 5, &uLocal_286, Vector(-3217,51f, 40,193f, 3749,765f));
				Function_78(StackVal, 5, &uLocal_286, Vector(-3196,765f, 41,298f, 3745,842f));
				Function_80(5, &uLocal_286, &iLocal_4);
				Function_76(&iLocal_14 + 1048, GET_OBJECT_FROM_PERS_CHAR(&Global_13850[23] + 16));
				Function_72(&Global_11726, &Global_13850, &uLocal_286, &Global_10996, iScriptParam_0);
				if (Function_88(&(Global_43791[iScriptParam_0]), 256) || !Function_71(2))
				{
					iLocal_494 = 1;
				}
				if (Global_6623)
				{
				}
				Function_65(14, &iLocal_14 + 1008, &iLocal_14 + 960, &iLocal_14 + 992, 0, 0, &iLocal_4 + 32);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "plnv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "plnv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_14, "plnv_players_room"));
				}
				else
				{
					LOG_ERROR("PLN: Cannot find plnv_players_room to restrict players room");
				}
				Function_92(&(Global_43791[iScriptParam_0]), 8);
				if (Function_88(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_64(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_282 = 10;
				}
				else
				{
					iLocal_282 = 7;
				}
				bLocal_283 = false;
				break;
			
			case 0x00000007:
				Function_50(StackVal, &Global_98318, 4, Global_46838[0], "$/content/Frontier/Mini_Games/ArmWrestling_PLN/ArmWrestling_PLN", 4294967295, 0, "PLNArmWrestling", 351, Vector(-3143,472f, 43,179f, 3720,854f), 2,5f, 0, 0);
				Function_49(&Global_98318, 4, 1);
				Function_48(&Global_98318, 4);
				iLocal_282 = 8;
				bLocal_283 = false;
				break;
			
			case 0x00000008:
				if (Function_43(iScriptParam_0, &Global_11726, iLocal_494))
				{
					Function_39(0, 0,1f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_35(2, 4294967295, 4294967295, 0, 3);
					Function_32(&iLocal_4);
				}
				else
				{
					Function_39(1, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
					Function_31(64);
					Function_35(0, 8, 4, 7, 2);
					Function_32(&iLocal_4);
				}
				Function_92(&(Global_43791[iScriptParam_0]), 512);
				iLocal_282 = 9;
				bLocal_283 = false;
				break;
			
			case 0x00000009:
				Function_29(&iLocal_4, iScriptParam_0);
				Function_92(&(Global_43791[iScriptParam_0]), 4);
				Function_28("Finished Initializing Plainview", 5.0f);
				iLocal_282 = 10;
				bLocal_283 = false;
				break;
			
			case 0x0000000A:
				if (!Function_27(Global_98961, 16))
				{
					if (Function_24(&(Global_46838[0])))
					{
						Function_23(&Global_98961, 16);
					}
				}
				Function_20(&vLocal_420);
				if (Function_88(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_282 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_283);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 24);
	Function_11(&Global_11726, &Global_13850, iScriptParam_0, (iLocal_494 || Global_6623));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_31(64);
	Function_64(&(Global_43791[iScriptParam_0]), 32);
	Function_64(&(Global_43791[iScriptParam_0]), 64);
	Function_64(&(Global_43791[iScriptParam_0]), 8);
	Function_64(&(Global_43791[iScriptParam_0]), 512);
	Function_64(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_284))
	{
		TERMINATE_SCRIPT(&uLocal_284);
	}
	Function_28("Unloaded Plainview", 5.0f);
	ALLOW_TUMBLEWEEDS(0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xC8E / 3214
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

void Function_2(int iParam0) //Position: 0xCC4 / 3268
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0xCE6 / 3302
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0xCFC / 3324
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0xD12 / 3346
{
	Function_6(&iLocal_14 + 8);
	RELEASE_LAYOUT_REF(&iLocal_14);
	return;
}

void Function_6(int iParam0) //Position: 0xD25 / 3365
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0xD4D / 3405
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

void Function_8(struct<13> Param0) //Position: 0xE98 / 3736
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0xEB5 / 3765
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0xED3 / 3795
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xEDF / 3807
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
	strcpy(&cVar0, Function_19(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_88(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_64(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_17(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_17(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_16(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_17(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_16(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_88(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_71(2) || Function_88(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_17(&(Param0[iVar162]), 2) && !Function_17(&(Param0[iVar162]), 4))
		{
			Function_12(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_17(&(Param0[iVar162]), 2) && !Function_17(&(Param0[iVar162]), 4))
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
			Function_92(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x10FD / 4349
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_15(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_17(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_17(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1263 / 4707
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

int Function_14(int iParam0) //Position: 0x128E / 4750
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

void Function_15(var uParam0, int iParam1) //Position: 0x12C2 / 4802
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x12D3 / 4819
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x12ED / 4845
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x130A / 4874
{
	if (Function_27(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0x1325 / 4901
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

void Function_20(vector3[] vParam0) //Position: 0x17D3 / 6099
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < (vParam0 - 1))
	{
		if (IS_GRINGO_VALID(&(vParam0[bVar03])) && IS_GRINGO_VALID(&vParam0[bVar03] + 8))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&(vParam0[bVar03]), "UseCase1")))
			{
				Function_23(&vParam0[bVar03] + 16, 64);
				if (Function_27(vParam0[bVar03].f_16, 2))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "1.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				else
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "2.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				if (Function_27(vParam0[bVar03].f_16, 4) && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "3.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "4.parent.SWITCHING ON: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
			{
				if (Function_27(vParam0[bVar03].f_16, 16))
				{
					Function_21(&vParam0[bVar03] + 16, 64);
				}
				else if (Function_27(vParam0[bVar03].f_16, 32))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "5.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					Function_21(&vParam0[bVar03] + 16, 64);
				}
				else
				{
					Function_21(&vParam0[bVar03] + 16, 64);
				}
				if (Function_27(vParam0[bVar03].f_16, 2))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "6.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				if (Function_27(vParam0[bVar03].f_16, 4))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "7.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
			}
			else
			{
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] == &vParam0[iVar13] + 8)
					{
						if (Function_27(vParam0[iVar13].f_16, 64))
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "8.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "8b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
					else if (Function_27(vParam0[bVar03].f_16, 64) && Function_27(vParam0[bVar03].f_16, 16))
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "11b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
					else
					{
						Function_21(&vParam0[bVar03] + 16, 64);
						if (Function_27(vParam0[bVar03].f_16, 1))
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "12b.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "13b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
				}
				else if (Function_27(vParam0[bVar03].f_16, 64) && Function_27(vParam0[bVar03].f_16, 16))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "11.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_21(&vParam0[bVar03] + 16, 64);
					if (Function_27(vParam0[bVar03].f_16, 1))
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "12.parent.SWITCHING ON: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
					}
					else
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "13.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
				}
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] + 8 == &vParam0[iVar13])
					{
					}
					else if (Function_27(vParam0[bVar03].f_16, 64))
					{
						if (Function_27(vParam0[bVar03].f_16, 32))
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "14b.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
						}
						else
						{
							Function_22(StackVal, StackVal, vParam0[bVar03], "14.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
						}
					}
					else if (Function_27(vParam0[bVar03].f_16, 8))
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "15.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
					}
					else
					{
						Function_22(StackVal, StackVal, vParam0[bVar03], "16.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
						Function_21(&vParam0[bVar03] + 16, 64);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					}
				}
				else if (Function_27(vParam0[bVar03].f_16, 64))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "17.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else if (Function_27(vParam0[bVar03].f_16, 8))
				{
					Function_22(StackVal, StackVal, vParam0[bVar03], "18.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else
				{
					Function_21(&vParam0[bVar03] + 16, 64);
					Function_22(StackVal, StackVal, vParam0[bVar03], "19.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
			}
		}
		if (Function_27(vParam0[bVar03].f_16, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x2003 / 8195
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_22(struct<17> Param0) //Position: 0x2019 / 8217
{
	if (Function_27(Param0.f_16, 128))
	{
		PRINTSTRING(&uParam3);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(&uParam4)));
		PRINTNL();
	}
}

void Function_23(var uParam0, int iParam1) //Position: 0x2042 / 8258
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_24(var uParam0) //Position: 0x2053 / 8275
{
	int iVar0;
	
	Function_26(uParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_26(uParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&iVar0))
	{
		SET_PROP_FIXED(&iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	Function_25(uParam0);
	iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_25(uParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&iVar0))
	{
		SET_PROP_FIXED(&iVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	return 1;
}

struct<8> Function_25(int iParam0) //Position: 0x2156 / 8534
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,656f, 16,56962f, 3948,088f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,743f, 43,17878f, 3720,288f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,16f, 20,97986f, 3881,796f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,9332f, 85,11941f, 2118,893f);
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_26(int iParam0) //Position: 0x220A / 8714
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,104f, 16,52992f, 3948,271f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,721f, 43,17878f, 3720,842f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,5623f, 20,97986f, 3882,657f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,932f, 85,11941f, 2119,438f);
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_27(var uParam0, int iParam1) //Position: 0x22BA / 8890
{
	return (uParam0 && iParam1) == 0;
}

void Function_28(char* cParam0) //Position: 0x22C7 / 8903
{
	if (!Function_71(128))
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

void Function_29(int iParam0, bool bParam1) //Position: 0x2307 / 8967
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
		Function_30(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x23F7 / 9207
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_31(int iParam0) //Position: 0x2404 / 9220
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_32(int iParam0) //Position: 0x2417 / 9239
{
	struct<2> Var0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	*(&Global_40000 + 16) = &iParam0;
	*(&Global_40000 + 24) = CREATE_OBJECT_ITERATOR(&Global_40000 + 16);
	ITERATE_EVERYWHERE(&Global_40000 + 24);
	ITERATE_ON_OBJECT_TYPE(&Global_40000 + 24, 8);
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(&Global_40000 + 24) >= 0)
	{
		*(&Global_40000 + 32) = START_OBJECT_ITERATOR(&Global_40000 + 24);
		GET_OBJECT_POSITION(&Global_40000 + 32, &Var0);
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_34(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_33(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_33(var uParam0) //Position: 0x2513 / 9491
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_34() //Position: 0x2530 / 9520
{
	int iVar0;
	
	return &iVar0;
}

void Function_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x2539 / 9529
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
	Global_40000.f_8 = iParam0;
	Global_40000 = iParam1;
	Global_40000.f_4 = iParam2;
	Global_40000.f_64 = 99;
	Global_40000.f_68 = &iParam3;
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

void Function_36() //Position: 0x2627 / 9767
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

int Function_37(int iParam0) //Position: 0x2675 / 9845
{
	if (!Function_38(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_38(bool bParam0) //Position: 0x268D / 9869
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_39(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x26A2 / 9890
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
		Function_42();
	}
	if (&bParam5)
	{
		Function_40(1048576);
	}
}

void Function_40(int iParam0) //Position: 0x27B0 / 10160
{
	Function_41(&Global_43580, iParam0);
	return;
}

void Function_41(var uParam0, var uParam1) //Position: 0x27BE / 10174
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_42() //Position: 0x27DD / 10205
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_40(16384);
	}
	return;
}

bool Function_43(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x27F9 / 10233
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_88(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_44(49, 0))
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

int Function_44(var uParam0, bool bParam1) //Position: 0x28B7 / 10423
{
	int iVar0;
	
	iVar0 = Function_46(uParam0);
	if (!Function_45(iVar0))
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

bool Function_45(int iParam0) //Position: 0x28F5 / 10485
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_46(int iParam0) //Position: 0x290C / 10508
{
	if (!Function_47(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_47(int iParam0) //Position: 0x2926 / 10534
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_48(struct<28>[] Param0, int iParam1) //Position: 0x293C / 10556
{
	Param0[iParam128].f_184 |= 2097152;
	return;
}

void Function_49(struct<28>[] Param0, int iParam1, bool bParam2) //Position: 0x2959 / 10585
{
	Param0[iParam128].f_196 = bParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

void Function_50(struct<28>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x2980 / 10624
{
	if (0 && !&bParam11)
	{
		return;
	}
	if (1 && bParam11)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(&(Global_98936[iParam1])))
	{
		DESTROY_OBJECTSET(&(Global_98936[iParam1]));
	}
	Param0[iParam128].f_4 = Function_59(iParam2, iParam1, 4);
	if (STRING_LENGTH(&iParam3) >= 0)
	{
		*(&Param0[iParam128] + 8) = GET_ASSET_ID(&iParam3, 4);
	}
	else
	{
		*(&Param0[iParam128] + 8) = 4294967295;
	}
	(&Param0[iParam128] + 64) = "";
	(&Param0[iParam128] + 72) = "";
	*(&Param0[iParam128] + 80) = &iParam12;
	Param0[iParam128].f_136 = iParam7;
	Param0[iParam128].f_152 = 5;
	Param0[iParam128].f_184 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	Param0[iParam128].f_188 = iParam4;
	Param0[iParam128].f_192 = 4294967295;
	Param0[iParam128].f_196 = 4294967295;
	Param0[iParam128].f_200 = 4294967295;
	strcpy(&Param0[iParam128] + 16, &cParam6, 16);
	*(&Param0[iParam128] + 88) = Param8;
	Param0[iParam128].f_100 = iParam10;
	Param0[iParam128].f_112 = iParam2;
	if (Global_39266[iParam1] && Function_58(iParam1))
	{
		Function_51(StackVal, iParam2, (1 + iParam1), Param8, 63);
	}
	Param0[iParam128].f_196 = 1;
	Param0[iParam128].f_184 |= 8192;
}

int Function_51(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x2AE9 / 10985
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_4(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_57(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_56(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_55(StackVal, Param2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_15863[iVar02] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_54(uVar3);
		Var6 = Function_54(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_54(StackVal);
				Var4 = Function_54(StackVal);
				if (Function_53(StackVal, StackVal, Var4, Var6))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_15863[iVar12] = iParam0;
		Global_15863[iVar12].f_4 = iParam1;
		Global_15863[iVar12].f_8 = uVar3;
		Global_15863[iVar12].f_12 = &iParam4;
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_52(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(&(Global_16865[iVar1]), 1);
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), true);
		return iVar1;
	}
	return 0;
}

int Function_52(int iParam0) //Position: 0x2CD2 / 11474
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

bool Function_53(struct<2> Param0, struct<2> Param2) //Position: 0x2E09 / 11785
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_54(int iParam0) //Position: 0x2E35 / 11829
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

var Function_55(vector3 vParam0) //Position: 0x2E8C / 11916
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

int Function_56(int iParam0) //Position: 0x2EDA / 11994
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

bool Function_57(vector3 vParam0) //Position: 0x2F92 / 12178
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_58(int iParam0) //Position: 0x2FAA / 12202
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_59(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2FCD / 12237
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_63(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_60(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_60(bParam0, bParam1, bParam2, 4294967295);
}

int Function_60(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x302B / 12331
{
	var uVar0;
	
	if (!Function_62(bParam2))
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
	uVar0 = Function_63(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_61(uVar0);
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

var Function_61(int iParam0) //Position: 0x318F / 12687
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

bool Function_62(int iParam0) //Position: 0x31CD / 12749
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_63(int iParam0, int iParam1, int iParam2) //Position: 0x31E2 / 12770
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_64(var uParam0, int iParam1) //Position: 0x3202 / 12802
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_65(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x321C / 12828
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_70(&uParam1, &uParam2);
	if (!Function_69(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&uParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_68(&uParam4, 0);
		}
		else
		{
			Function_67(&uParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_68(&iParam5, 0);
		}
		else
		{
			Function_67(&iParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		*(&Global_26200[iParam014] + 104) = &uParam1;
		if (Global_26200[iParam014].f_40 != 3 || !Global_6606)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam1), true);
			DECOR_SET_BOOL(&uParam1, "SavingAtBedAllowed", true);
		}
		else
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam1), false);
			if (DECOR_CHECK_EXIST(&uParam1, "SavingAtBedAllowed"))
			{
				DECOR_REMOVE(&uParam1, "SavingAtBedAllowed");
			}
		}
	}
	if (IS_OBJECT_VALID(&iParam6))
	{
		GET_OBJECT_POSITION(&iParam6, &uVar0);
		uVar2[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar0, 3.0f, 0);
		uVar2[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uVar0, 3.0f, 0);
		if (IS_GRINGO_VALID(&(uVar2[0])))
		{
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_66(&(uVar2[0]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar5) && !&iVar5 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar5);
			}
			GRINGO_ENABLE_SPAWN(&(uVar2[0]), 0);
		}
		if (IS_GRINGO_VALID(&(uVar2[1])))
		{
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_66(&(uVar2[1]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar6) && !&iVar6 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar6, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar6, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar6);
			}
			GRINGO_ENABLE_SPAWN(&(uVar2[1]), 0);
		}
		if (Global_26200[iParam014].f_40 == 3)
		{
			if (DECOR_CHECK_EXIST(&iParam6, "PlayerHouse_NoHorse"))
			{
				DECOR_REMOVE(&iParam6, "PlayerHouse_NoHorse");
			}
		}
		else
		{
			DECOR_SET_BOOL(&iParam6, "PlayerHouse_NoHorse", true);
		}
	}
	*(&Global_26200[iParam014] + 80) = &uParam4;
	*(&Global_26200[iParam014] + 88) = &iParam5;
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 56))
	{
		DESTROY_OBJECT(&Global_26200[iParam014] + 56);
		(&Global_26200[iParam014] + 56) = "";
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 64))
	{
		DESTROY_OBJECT(&Global_26200[iParam014] + 64);
		(&Global_26200[iParam014] + 64) = "";
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_26200[iParam014] + 72))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Global_26200[iParam014] + 72);
		(&Global_26200[iParam014] + 72) = "";
	}
	if (!iParam0 != 1)
	{
		GET_OBJECT_POSITION(&uParam2, &(Global_26200[iParam014]));
	}
	Global_26200[iParam014].f_12 = GET_OBJECT_HEADING(&uParam2);
	GET_OBJECT_POSITION(&uParam3, &Global_26200[iParam014] + 16);
	*(&Global_26200[iParam014] + 96) = &iParam6;
}

var Function_66(var uParam0, int iParam1) //Position: 0x35EC / 13804
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_67(var uParam0, int iParam1) //Position: 0x35FB / 13819
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

void Function_68(var uParam0, int iParam1) //Position: 0x3656 / 13910
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

bool Function_69(int iParam0) //Position: 0x36AE / 13998
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_70(var uParam0, int iParam1) //Position: 0x36C4 / 14020
{
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Flag passed!");
		return 0;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Bad Gringo passed!");
		return 0;
	}
	if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(&uParam0), "nPlayerUse", "MyRestartFlag", &iParam1))
	{
		return 1;
	}
	LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: falied to update bed gringo - does it have a PlayerUse and MyRestartFlag???");
	return 0;
}

bool Function_71(int iParam0) //Position: 0x3822 / 14370
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_72(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x383E / 14398
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_71(2))
	{
		return;
	}
	if (Function_88(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_17(&(Param0[iVar02]), 2))
		{
			if (Function_73(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_64(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_92(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_73(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x38F6 / 14582
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_88(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(&iParam0, 2))
	{
		return 1;
	}
	if (Function_17(&iParam0, 4))
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
		(&iParam1 + 16) = Function_75(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_57(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(&iParam0, 4);
	}
	Function_74(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_74(int iParam0, struct<2> Param1) //Position: 0x3A77 / 14967
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_57(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_57(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_57(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_57(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_57(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_57(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

var Function_75(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x3BBD / 15293
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_34(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_76(var uParam0, int iParam1) //Position: 0x3CE4 / 15588
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)), &iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_77(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x3D31 / 15665
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

void Function_78(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x3D95 / 15765
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

void Function_79(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x3DFC / 15868
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_80(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x3E65 / 15973
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

void Function_81(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x3EC4 / 16068
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Night object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 60);
	return;
}

void Function_82(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0x3F2B / 16171
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Evening object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 48);
	return;
}

void Function_83(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x3F94 / 16276
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_84(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4000 / 16384
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_85(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4066 / 16486
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_53(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_86(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x40CF / 16591
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Dawn object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &(Param1[bVar011]));
	PRINTVECTOR(Param1[bVar011]);
	PRINTNL();
	return;
}

int Function_87(int iParam0) //Position: 0x4142 / 16706
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_88(&(Global_43791[iParam0]), 4);
}

bool Function_88(var uParam0, int iParam1) //Position: 0x415E / 16734
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_89(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x417B / 16763
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
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_88(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_17(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_17(&(Param0[iVar02]), 8))
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

void Function_90(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x4264 / 16996
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(bParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_19(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_88(&(Global_43791[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_92(&(Global_43791[bParam2]), 0x40000000);
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

vector3 Function_91(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x4354 / 17236
{
	vector3 vVar0;
	
	vVar0 = GET_GRINGO_FROM_OBJECT(&uParam0);
	*(&vVar0 + 8) = GET_GRINGO_FROM_OBJECT(&bParam1);
	if (bParam2)
	{
		Function_23(&vVar0 + 16, 1);
	}
	else
	{
		Function_21(&vVar0 + 16, 1);
	}
	if (bParam3)
	{
		Function_23(&vVar0 + 16, 2);
	}
	else
	{
		Function_21(&vVar0 + 16, 2);
	}
	if (bParam4)
	{
		Function_23(&vVar0 + 16, 4);
	}
	else
	{
		Function_21(&vVar0 + 16, 4);
	}
	if (bParam5)
	{
		Function_23(&vVar0 + 16, 8);
	}
	else
	{
		Function_21(&vVar0 + 16, 8);
	}
	if (bParam6)
	{
		Function_23(&vVar0 + 16, 16);
	}
	else
	{
		Function_21(&vVar0 + 16, 16);
	}
	if (bParam7)
	{
		Function_23(&vVar0 + 16, 32);
	}
	else
	{
		Function_21(&vVar0 + 16, 32);
	}
	Function_21(&vVar0 + 16, 64);
	Function_21(&vVar0 + 16, 128);
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_92(var uParam0, int iParam1) //Position: 0x4421 / 17441
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_93() //Position: 0x4432 / 17458
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	
	Function_101(3, 3);
	iVar0 = &iVar0;
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_on_ground", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_drunkdancing_e_any", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_up", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	Function_99(&iLocal_14 + 8, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	if (!Function_94(&iLocal_14 + 8))
	{
		return 0;
	}
	iLocal_14 = FIND_NAMED_LAYOUT("Plainview_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_14))
	{
		iLocal_14 = CREATE_LAYOUT("Plainview_layout");
	}
	*(&iLocal_14 + 464) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", &iLocal_14, 8, 0);
	*(&iLocal_14 + 472[03]) = Vector(-3692,285f, 9,508358f, 3467,929f);
	*(&iLocal_14 + 472[03] + 12) = Vector(0.0f, -20,9291f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag19", Vector(-3692,285f, 9,508358f, 3467,929f), Vector(0.0f, -20,9291f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_14 + 464);
	*(&iLocal_14 + 472[13]) = Vector(-3690,688f, 9,503268f, 3468,922f);
	*(&iLocal_14 + 472[13] + 12) = Vector(0.0f, 19,07239f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag1", Vector(-3690,688f, 9,503268f, 3468,922f), Vector(0.0f, 19,07239f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_14 + 464);
	*(&iLocal_14 + 472[23]) = Vector(-3688,649f, 9,508358f, 3470,04f);
	*(&iLocal_14 + 472[23] + 12) = Vector(0.0f, 28,70414f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag2", Vector(-3688,649f, 9,508358f, 3470,04f), Vector(0.0f, 28,70414f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_14 + 464);
	*(&iLocal_14 + 472[33]) = Vector(-3687,317f, 9,508358f, 3467,837f);
	*(&iLocal_14 + 472[33] + 12) = Vector(0.0f, 69,92191f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag3", Vector(-3687,317f, 9,508358f, 3467,837f), Vector(0.0f, 69,92191f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_14 + 464);
	*(&iLocal_14 + 472[43]) = Vector(-3688,163f, 9,508358f, 3472,154f);
	*(&iLocal_14 + 472[43] + 12) = Vector(0.0f, -54,99022f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag4", Vector(-3688,163f, 9,508358f, 3472,154f), Vector(0.0f, -54,99022f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_14 + 464);
	*(&iLocal_14 + 472[53]) = Vector(-3688,295f, 9,508358f, 3474,146f);
	*(&iLocal_14 + 472[53] + 12) = Vector(0.0f, -76,74036f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag5", Vector(-3688,295f, 9,508358f, 3474,146f), Vector(0.0f, -76,74036f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_14 + 464);
	*(&iLocal_14 + 472[63]) = Vector(-3686,994f, 9,508358f, 3476,04f);
	*(&iLocal_14 + 472[63] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag6", Vector(-3686,994f, 9,508358f, 3476,04f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_14 + 464);
	*(&iLocal_14 + 472[73]) = Vector(-3690,179f, 9,508359f, 3475,676f);
	*(&iLocal_14 + 472[73] + 12) = Vector(0.0f, 157,7802f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag7", Vector(-3690,179f, 9,508359f, 3475,676f), Vector(0.0f, 157,7802f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_14 + 464);
	*(&iLocal_14 + 472[83]) = Vector(-3691,944f, 9,508359f, 3475,655f);
	*(&iLocal_14 + 472[83] + 12) = Vector(0.0f, 120,4128f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag8", Vector(-3691,944f, 9,508359f, 3475,655f), Vector(0.0f, 120,4128f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_14 + 464);
	*(&iLocal_14 + 472[93]) = Vector(-3690,779f, 9,503268f, 3473,339f);
	*(&iLocal_14 + 472[93] + 12) = Vector(0.0f, -182,323f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag9", Vector(-3690,779f, 9,503268f, 3473,339f), Vector(0.0f, -182,323f, 0.0f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_14 + 464);
	*(&iLocal_14 + 472[103]) = Vector(-3692,857f, 9,508359f, 3472,456f);
	*(&iLocal_14 + 472[103] + 12) = Vector(0.0f, 187,8577f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag10", Vector(-3692,857f, 9,508359f, 3472,456f), Vector(0.0f, 187,8577f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_14 + 464);
	*(&iLocal_14 + 472[113]) = Vector(-3668,923f, 8,476237f, 3488,702f);
	*(&iLocal_14 + 472[113] + 12) = Vector(0.0f, -73,62263f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag11", Vector(-3668,923f, 8,476237f, 3488,702f), Vector(0.0f, -73,62263f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_14 + 464);
	*(&iLocal_14 + 472[123]) = Vector(-3668,802f, 8,490922f, 3489,834f);
	*(&iLocal_14 + 472[123] + 12) = Vector(0.0f, -85,37915f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag12", Vector(-3668,802f, 8,490922f, 3489,834f), Vector(0.0f, -85,37915f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_14 + 464);
	*(&iLocal_14 + 472[133]) = Vector(-3668,824f, 8,490922f, 3491,349f);
	*(&iLocal_14 + 472[133] + 12) = Vector(0.0f, -99,24498f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag13", Vector(-3668,824f, 8,490922f, 3491,349f), Vector(0.0f, -99,24498f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_14 + 464);
	*(&iLocal_14 + 472[143]) = Vector(-3666,418f, 8,490922f, 3493,496f);
	*(&iLocal_14 + 472[143] + 12) = Vector(0.0f, -5,801308f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag14", Vector(-3666,418f, 8,490922f, 3493,496f), Vector(0.0f, -5,801308f, 0.0f));
	DECOR_SET_STRING(&uVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_14 + 464);
	*(&iLocal_14 + 472[153]) = Vector(-3668,708f, 8,490922f, 3493,989f);
	*(&iLocal_14 + 472[153] + 12) = Vector(0.0f, 64,31615f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag15", Vector(-3668,708f, 8,490922f, 3493,989f), Vector(0.0f, 64,31615f, 0.0f));
	DECOR_SET_STRING(&uVar16, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_14 + 464);
	*(&iLocal_14 + 472[163]) = Vector(-3669,365f, 8,490922f, 3491,915f);
	*(&iLocal_14 + 472[163] + 12) = Vector(0.0f, -228,7777f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag16", Vector(-3669,365f, 8,490922f, 3491,915f), Vector(0.0f, -228,7777f, 0.0f));
	DECOR_SET_STRING(&uVar17, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_14 + 464);
	*(&iLocal_14 + 472[173]) = Vector(-3670,46f, 8,490922f, 3491,109f);
	*(&iLocal_14 + 472[173] + 12) = Vector(0.0f, 192,2305f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag17", Vector(-3670,46f, 8,490922f, 3491,109f), Vector(0.0f, 192,2305f, 0.0f));
	DECOR_SET_STRING(&uVar18, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_14 + 464);
	*(&iLocal_14 + 472[183]) = Vector(-3667,027f, 8,490922f, 3491,729f);
	*(&iLocal_14 + 472[183] + 12) = Vector(0.0f, -74,1232f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Flag18", Vector(-3667,027f, 8,490922f, 3491,729f), Vector(0.0f, -74,1232f, 0.0f));
	DECOR_SET_STRING(&uVar19, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_14 + 464);
	*(&iLocal_14 + 936) = Vector(-3196,344f, 41,34254f, 3752,696f);
	*(&iLocal_14 + 936 + 12) = Vector(0.0f, -90,68973f, 0.0f);
	*(&iLocal_14 + 960) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_save_flag_PLN", Vector(-3196,344f, 41,34254f, 3752,696f), Vector(0.0f, -90,68973f, 0.0f));
	*(&iLocal_14 + 968) = Vector(-3194,287f, 41,34254f, 3752,761f);
	*(&iLocal_14 + 968 + 12) = Vector(0.0f, 88,186f, 0.0f);
	*(&iLocal_14 + 992) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_purchase_flag_PLN", Vector(-3194,287f, 41,34254f, 3752,761f), Vector(0.0f, 88,186f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3196,378f, 41,31387f, 3748,351f), Vector(0.0f, 31,97253f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-3196,765f, 41,29804f, 3745,842f), Vector(0.0f, 130,5441f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand", "rand_idle_stand", Vector(-3200,71f, 41,13925f, 3747,294f), Vector(0.0f, -83,20329f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_14 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand1", "rand_idle_stand", Vector(-3190,964f, 40,93213f, 3716f), Vector(0.0f, -21,21271f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1000), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Sit_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", Vector(-3189,534f, 40,83021f, 3712f), Vector(0.0f, -196,8265f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-3188,018f, 40,9713f, 3714,524f), Vector(0.0f, -312,0777f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-3200.0f, 41,16076f, 3745,141f), Vector(0.0f, -117,1134f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-3196.0f, 41,31734f, 3744,037f), Vector(0.0f, 139,3715f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted", "sleeping_scripted", Vector(-3195,162f, 41,3777f, 3739,869f), Vector(0.0f, -122,0802f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_14 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "player_sleep_PLN", "player_sleep_on_ground", Vector(-3198,153f, 41,34254f, 3753,664f), Vector(0.0f, -98,04723f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1008), 1);
	*(&iLocal_14 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted2", "sleeping_scripted", Vector(-3197,915f, 41,2991f, 3751,58f), Vector(0.0f, -95,08144f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1016), 1);
	*(&iLocal_14 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted3", "sleeping_scripted", Vector(-3188,27f, 41,33947f, 3726,46f), Vector(0.0f, -119,017f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1024), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-3096,159f, 46,54511f, 3751,604f), Vector(0.0f, 95,00442f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs", "look_distance_binocs", Vector(-3151,939f, 57,857f, 3733,939f), Vector(0.0f, -118,8176f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall", "stand_hammer_wall", Vector(-3154,817f, 57,857f, 3733,655f), Vector(0.0f, 0,2332778f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-3093,77f, 46,64681f, 3751,767f), Vector(0.0f, 93,09217f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs1", "look_distance_binocs", Vector(-3088,704f, 61,055f, 3751,228f), Vector(0.0f, -37,94577f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel", "repair_kneel", Vector(-3096,262f, 45,24707f, 3755,899f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand2", "rand_idle_stand", Vector(-3185,566f, 40,42764f, 3701,997f), Vector(0.0f, -95,70394f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted4", "sleeping_scripted", Vector(-3185,469f, 40,65977f, 3697,69f), Vector(0.0f, -126,0715f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammerground_w_any1", "stand_hammerground_w_any", Vector(-3220,623f, 54,8824f, 3719,147f), Vector(0.0f, 145,4979f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall1", "stand_hammer_wall", Vector(-3224,588f, 40,16819f, 3715,003f), Vector(0.0f, 232,5199f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-3236,496f, 39,70822f, 3765,876f), Vector(0.0f, -92,16642f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", Vector(-3236,043f, 39,718f, 3761,739f), Vector(0.0f, -51,85283f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_docks1", "nsit_docks", Vector(-3093,31f, 61,1012f, 3751,537f), Vector(0.0f, 91,33404f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall2", "stand_hammer_wall", Vector(-3093,679f, 45,17645f, 3761,546f), Vector(0.0f, -89,92046f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_14 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted5", "sleeping_scripted", Vector(-3176,028f, 41,26925f, 3692,074f), Vector(0.0f, -132,9076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1032), 1);
	*(&iLocal_14 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted6", "sleeping_scripted", Vector(-3177,497f, 41,15993f, 3693,403f), Vector(0.0f, -134,4139f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1040), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted7", "Sit_Ground_Only", Vector(-3175,834f, 41,17834f, 3694,069f), Vector(0.0f, -162,9685f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted8", "sleeping_scripted", Vector(-3180,257f, 41,32386f, 3712,923f), Vector(0.0f, -134,4139f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sleeping_scripted9", "sleeping_scripted", Vector(-3179,337f, 41,31962f, 3710,999f), Vector(0.0f, -317,8607f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground", "Rand_Idle_Sit_Ground", Vector(-3219,032f, 40,1797f, 3749,632f), Vector(0.0f, -56,4775f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground1", "Rand_Idle_Sit_Ground", Vector(-3217,51f, 40,19337f, 3749,765f), Vector(0.0f, 42,46527f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground2", "Rand_Idle_Sit_Ground", Vector(-3217,934f, 40,16549f, 3748,417f), Vector(0.0f, 171,9256f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground3", "Rand_Idle_Sit_Ground", Vector(-3219,143f, 40,16176f, 3748,237f), Vector(0.0f, 230,3081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground4", "Rand_Idle_NearWall_Shoulder_R", Vector(-3218,325f, 40,21752f, 3752,716f), Vector(0.0f, -209,0484f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_docks2", "sit_ground_play_harmonica", Vector(-3192,532f, 40,46606f, 3773,318f), Vector(0.0f, 172,487f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Sit_Ground_Campfire_Tend2", "Sit_Ground_Campfire_Tend", Vector(-3191,546f, 40,40094f, 3775,018f), Vector(0.0f, 88,21342f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Sit_Ground_Campfire_Tend4", "stand_drunk_rowdydrink", Vector(-3191,365f, 40,5546f, 3772,5f), Vector(0.0f, 146,1423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Sit_Ground_Campfire_Tend5", "stand_drunkdancing_e_any", Vector(-3193,597f, 40,46956f, 3772,747f), Vector(0.0f, 257,8328f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee", "Pee", Vector(-3169,151f, 42,85962f, 3757,575f), Vector(0.0f, -115,1666f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Pee1", "Pee", Vector(-3166,626f, 41,78128f, 3692,619f), Vector(0.0f, -47,80942f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer", "repair_kneel", Vector(-3174,371f, 41,1236f, 3701,473f), Vector(0.0f, -60,27861f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand3", "rand_idle_stand", Vector(-3160.0f, 43,06282f, 3736f), Vector(0.0f, 96,54269f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer1", "repair_kneel", Vector(-3156,257f, 43,16861f, 3725,052f), Vector(0.0f, 96,1933f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer2", "repair_kneel", Vector(-3147,338f, 43,17244f, 3731,099f), Vector(0.0f, 170,531f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", Vector(-3093,634f, 45,17645f, 3763,565f), Vector(0.0f, 90,0888f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs2", "look_distance_binocs", Vector(-3092,851f, 61,055f, 3755,599f), Vector(0.0f, 150,1304f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand6", "rand_idle_stand", Vector(-3095,924f, 46,54511f, 3754,773f), Vector(0.0f, 74,96928f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand7", "rand_idle_stand", Vector(-3094,141f, 46,54511f, 3754,303f), Vector(0.0f, 90,29669f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand8", "rand_idle_stand", Vector(-3096,233f, 46,54511f, 3753,065f), Vector(0.0f, 90,29669f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammerground_w_any2", "stand_hammerground_w_any", Vector(-3132,029f, 43,47377f, 3648,082f), Vector(0.0f, -34,58117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammerground_w_any3", "stand_hammerground_w_any", Vector(-3127,848f, 43,47377f, 3646,96f), Vector(0.0f, 142,2744f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall4", "stand_hammer_wall", Vector(-3129,743f, 43,16861f, 3641,017f), Vector(0.0f, -123,4308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall5", "stand_hammer_wall", Vector(-3127,144f, 43,16861f, 3648,959f), Vector(0.0f, -303,3438f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer3", "repair_kneel", Vector(-3126,349f, 43,16775f, 3631,373f), Vector(0.0f, 269,8436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", Vector(-3236,592f, 39,718f, 3763,487f), Vector(0.0f, -120,2334f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall6", "stand_hammer_wall", Vector(-3223,475f, 40,21484f, 3726,323f), Vector(0.0f, 412,8928f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer4", "repair_kneel", Vector(-3219,808f, 40,15686f, 3715,179f), Vector(0.0f, 146,1641f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer5", "repair_kneel", Vector(-3226,491f, 40,21484f, 3724,956f), Vector(0.0f, -41,03802f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_docks3", "sit_ground_play_harmonica", Vector(-3194,736f, 40,46606f, 3775,654f), Vector(0.0f, 292,2858f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Sit_Ground_Campfire_Tend6", "stand_drunk_rowdydrink", Vector(-3192,687f, 40,5546f, 3777,143f), Vector(0.0f, 0,485035f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall7", "stand_hammer_wall", Vector(-3229,418f, 40,21484f, 3721,868f), Vector(0.0f, 233,249f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer6", "repair_kneel", Vector(-3226,879f, 40,21484f, 3718,517f), Vector(0.0f, -128,0695f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table", "lean_table", Vector(-3215,912f, 40,15686f, 3719,383f), Vector(0.0f, 46,8618f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand9", "rand_idle_stand", Vector(-3216,976f, 40,15686f, 3723,274f), Vector(0.0f, -133,7646f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand10", "rand_idle_stand", Vector(-3217,809f, 40,15686f, 3724,624f), Vector(0.0f, -109,3732f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand", "smoking_stand", Vector(-3216,259f, 40,15686f, 3724,718f), Vector(0.0f, -128,5214f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand1", "smoking_stand", Vector(-3217,962f, 40,15686f, 3725,718f), Vector(0.0f, -99,01826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand11", "rand_idle_stand", Vector(-3151,9f, 43,16517f, 3740,302f), Vector(0.0f, -133,7646f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand12", "rand_idle_stand", Vector(-3152,741f, 43,14549f, 3741,486f), Vector(0.0f, -109,3732f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand2", "smoking_stand", Vector(-3151,308f, 43,18997f, 3741,735f), Vector(0.0f, -128,5214f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand3", "smoking_stand", Vector(-3152,741f, 43,14549f, 3742,576f), Vector(0.0f, -99,01826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer7", "repair_kneel", Vector(-3153,438f, 43,16638f, 3739,388f), Vector(0.0f, 0,1243384f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall8", "stand_hammer_wall", Vector(-3156,837f, 43,14849f, 3739,492f), Vector(0.0f, 0,2332778f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall9", "stand_hammer_wall", Vector(-3149,84f, 43,1699f, 3734,599f), Vector(0.0f, 90,79768f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall10", "stand_hammer_wall", Vector(-3157,615f, 43,16861f, 3728,13f), Vector(0.0f, 269,2865f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall11", "stand_hammer_wall", Vector(-3157,325f, 43,13836f, 3734,125f), Vector(0.0f, -109,3198f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "lean_table1", "lean_table", Vector(-3126,199f, 43,16775f, 3636,155f), Vector(0.0f, -30,02362f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-3124,879f, 43,16775f, 3638,185f), Vector(0.0f, 131,7526f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "Sit_Ground_Drink1", "Sit_Ground_Drink", Vector(-3125,307f, 43,16775f, 3640,019f), Vector(0.0f, 294,8321f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "sit_ground_smoke", "Rand_Idle_Sit_Ground", Vector(-3123,533f, 43,168f, 3641,144f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall12", "stand_hammer_wall", Vector(-3124,353f, 43,16861f, 3645,069f), Vector(0.0f, -302,8947f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammerground_w_any4", "stand_hammerground_w_any", Vector(-3129,512f, 43,47377f, 3643,775f), Vector(0.0f, 142,2744f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall13", "stand_hammer_wall", Vector(-3132,556f, 43,16861f, 3644,935f), Vector(0.0f, -123,4308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand13", "rand_idle_stand", Vector(-3095,431f, 46,54511f, 3752,342f), Vector(0.0f, 104,1178f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer8", "repair_kneel", Vector(-3101,635f, 45,1989f, 3749,449f), Vector(0.0f, -67,17821f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall14", "stand_hammer_wall", Vector(-3093,221f, 45,17645f, 3766,427f), Vector(0.0f, -0,3271135f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand14", "rand_idle_stand", Vector(-3095,32f, 46,54511f, 3753,786f), Vector(0.0f, 86,51437f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "smoking_stand4", "smoking_stand", Vector(-3094,759f, 46,54511f, 3752,72f), Vector(0.0f, -265,4451f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_14 + 1048) = CREATE_OBJECTSET_IN_LAYOUT(Function_34(), &iLocal_14, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_yelling_mid2", "stand_yelling_mid", Vector(-3214,415f, 40,15686f, 3726,164f), Vector(0.0f, 46,9555f, 0.0f)), &iLocal_14 + 1048);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_check_clipboard", "stand_check_clipboard", Vector(-3214,79f, 40,15686f, 3726,52f), Vector(0.0f, 34,33274f, 0.0f)), &iLocal_14 + 1048);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_yelling_mid3", "stand_yelling_mid", Vector(-3149,377f, 43,24709f, 3743,044f), Vector(0.0f, 46,9555f, 0.0f)), &iLocal_14 + 1048);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_check_clipboard1", "stand_check_clipboard", Vector(-3149,844f, 43,23552f, 3743,386f), Vector(0.0f, 34,33274f, 0.0f)), &iLocal_14 + 1048);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_yelling_mid1", "stand_yelling_up", Vector(-3103,037f, 45,1989f, 3753,386f), Vector(0.0f, -88,08039f, 0.0f)), &iLocal_14 + 1048);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_check_clipboard2", "stand_check_clipboard", Vector(-3103,172f, 45,1989f, 3752,748f), Vector(0.0f, -98,22707f, 0.0f)), &iLocal_14 + 1048);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand15", "rand_idle_stand", Vector(-3240,529f, 39,718f, 3762,878f), Vector(0.0f, -242,4455f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand16", "rand_idle_stand", Vector(-3240,348f, 39,718f, 3763,946f), Vector(0.0f, -273,0014f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "rand_idle_stand17", "rand_idle_stand", Vector(-3239,1f, 39,718f, 3764,506f), Vector(0.0f, -278,9031f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	*(&iLocal_14 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", Vector(-3145,761f, 43,17878f, 3718,675f), Vector(0.0f, -120,924f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1056), 1);
	*(&iLocal_14 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", Vector(-3145,761f, 43,17878f, 3722,624f), Vector(0.0f, -63,00186f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_14 + 1064), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer9", "repair_kneel", Vector(-3217,464f, 40,15686f, 3716,75f), Vector(0.0f, 146,1641f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall15", "stand_hammer_wall", Vector(-3150,122f, 43,16861f, 3730,391f), Vector(0.0f, 92,7388f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall16", "stand_hammer_wall", Vector(-3150,762f, 43,16861f, 3727,42f), Vector(0.0f, 183,9612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammer_wall17", "stand_hammer_wall", Vector(-3157,424f, 43,13836f, 3736,394f), Vector(0.0f, -90,08061f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer10", "repair_kneel", Vector(-3157,228f, 43,16638f, 3738,695f), Vector(0.0f, -89,70013f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer11", "repair_kneel", Vector(-3150,082f, 43,16638f, 3738,209f), Vector(0.0f, 89,50009f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer12", "repair_kneel", Vector(-3150,16f, 43,16638f, 3732,556f), Vector(0.0f, 89,50009f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "kneel_hammer13", "repair_kneel", Vector(-3147,997f, 43,16638f, 3735,208f), Vector(0.0f, -0,1657397f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand", "leaning_stand", Vector(-3151,939f, 57,96017f, 3729,937f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-3155,923f, 57,96017f, 3730,066f), Vector(0.0f, 31,68689f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-3155,96f, 57,96017f, 3734,1f), Vector(0.0f, 135,2493f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand1", "leaning_stand", Vector(-3153,571f, 57,96017f, 3733,878f), Vector(0.0f, -180,6594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand2", "leaning_stand", Vector(-3090,849f, 61,055f, 3755,433f), Vector(0.0f, -180,6594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs3", "look_distance_binocs", Vector(-3088,732f, 61,055f, 3755,451f), Vector(0.0f, -133,3241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "stand_hammerground_w_any5", "stand_hammerground_w_any", Vector(-3129,519f, 43,47377f, 3647,589f), Vector(0.0f, 58,03942f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel1", "repair_kneel", Vector(-3097,212f, 45,24707f, 3750,882f), Vector(0.0f, -88,65308f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "repair_kneel2", "repair_kneel", Vector(-3099,826f, 45,24707f, 3750,565f), Vector(0.0f, -54,68982f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs4", "look_distance_binocs", Vector(-3221,854f, 54,8824f, 3721,226f), Vector(0.0f, -168,3246f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand3", "leaning_stand", Vector(-3221,327f, 54,8824f, 3717,027f), Vector(0.0f, -35,73617f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "leaning_stand4", "leaning_stand", Vector(-3223,598f, 54,8824f, 3720,184f), Vector(0.0f, 147,8914f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_14, "look_distance_binocs5", "look_distance_binocs", Vector(-3219,723f, 54,8824f, 3717,981f), Vector(0.0f, -80,73355f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 1);
	return 1;
}

bool Function_94(struct<2>[] Param0) //Position: 0x7F14 / 32532
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_98();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_97(&(Param0[iVar02]), 8);
		}
		else if (Function_96())
		{
			iVar1 = 1;
			Function_97(&(Param0[iVar02]), 8);
		}
		Function_97(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_9(&(Param0[02]), 8) || iVar1));
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
				Function_97(&(Param0[iVar02]), 1);
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
							Function_97(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_97(&(Param0[iVar02]), 2);
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
							Function_97(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_97(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_97(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_97(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_97(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_97(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_97(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_97(&(Param0[iVar02]), 2);
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
	Function_95();
	return 1;
}

void Function_95() //Position: 0x82D7 / 33495
{
	if (!Function_71(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_96() //Position: 0x8317 / 33559
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

void Function_97(struct<13> Param0) //Position: 0x8345 / 33605
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_98() //Position: 0x8358 / 33624
{
	if (!Function_71(128))
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

var Function_99(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x839A / 33690
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_100(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_97(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_100(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x83D8 / 33752
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_97(&(Param0[iVar02]), 4);
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

void Function_101(int iParam0, int iParam1) //Position: 0x84A7 / 33959
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

bool Function_102() //Position: 0x84F1 / 34033
{
	var uVar0;
	
	Function_101(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("Plainview_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("Plainview_layout");
	}
	*(&iLocal_4 + 8) = Vector(-3194,146f, 41,28f, 3756,203f);
	*(&iLocal_4 + 8 + 12) = Vector(0.0f, 267,076f, 0.0f);
	*(&iLocal_4 + 32) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_playerHorse", Vector(-3194,146f, 41,28f, 3756,203f), Vector(0.0f, 267,076f, 0.0f));
	return 1;
}

void Function_103(char* cParam0) //Position: 0x8596 / 34198
{
	if (!Function_71(128))
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

