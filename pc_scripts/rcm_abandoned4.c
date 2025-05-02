//Decompiled with MagicRDR v1.0
//Function Count : 261
//Statics Count : 461
//Natives Count : 483
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
	var uLocal_103 = 20;
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
	var uLocal_208 = 6;
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
	int iLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	float fLocal_344 = 0.0f;
	bool bLocal_345 = false;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	bool bLocal_354 = false;
	struct<2> Local_355 = { 0, 0 } ;
	var uLocal_357 = 0;
	struct<2> Local_358 = { 0, 0 } ;
	var uLocal_360 = 0;
	var uLocal_361 = 8;
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
	int iLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	bool bLocal_414 = false;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	struct<2> Local_420 = { 0, 0 } ;
	var uLocal_422 = 0;
	struct<2> Local_423 = { 0, 0 } ;
	var uLocal_425 = 0;
	struct<2> Local_426 = { 0, 0 } ;
	var uLocal_428 = 0;
	int iLocal_429 = 0;
	var uLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	bool bLocal_433 = false;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	int iLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	int iLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	bool bLocal_450 = false;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
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
	fLocal_344 = 2.0f;
	bLocal_345 = false;
	iLocal_346 = 1;
	iLocal_347 = 0;
	iLocal_348 = 0;
	iLocal_349 = 0;
	iLocal_350 = 0;
	iLocal_351 = 0;
	iLocal_352 = 0;
	iLocal_353 = 0;
	bLocal_354 = false;
	Local_355 = Vector(-2167,51f, 16,879f, 2591,991f);
	Local_358 = Vector(-2169,244f, 16,909f, 2624,381f);
	iLocal_411 = 0;
	Local_420 = Vector(-2180,028f, 16,296f, 2599,932f);
	Local_423 = Vector(-2168,357f, 17,75118f, 2592,72f);
	Local_426 = Vector(-2169,969f, 16,908f, 2622,207f);
	iLocal_451 = 0;
	iLocal_452 = 0;
	iLocal_453 = 0;
	iLocal_454 = 0;
	iLocal_455 = 0;
	iLocal_456 = 0;
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
			iLocal_445 = 0;
			iLocal_326 = 1000;
			bLocal_345 = true;
			Function_259(&uLocal_361, "$/fragments/p_gen_fiddle01x", 0, 0);
			Function_258(&uLocal_361, 334, 3, 0);
			Function_259(&uLocal_361, "$/content/scripting/gringo/simpleGringo/sit_headinhands_n_any", 1, 0);
			Function_258(&uLocal_361, 333, 3, 0);
			Function_259(&uLocal_361, "$/content/scripting/gringo/simpleGringo/musician_wife_idle", 1, 0);
			Function_259(&uLocal_361, "$/fragments/p_gen_bag01x", 0, 0);
			Function_259(&uLocal_361, "$/fragments/p_gen_suitcase03x", 0, 0);
			Function_259(&uLocal_361, "$/fragments/p_gen_suitcase01x", 0, 0);
			*(&Global_99725[243] + 136) = GET_ASSET_ID("$/cutscene/RCM_04_CS03_b/RCM_04_CS03_b", 9);
			*(&Global_99725[243] + 184) = Local_355;
			while (!IS_EXITFLAG_SET())
			{
				iLocal_338 = &Global_99725[ScriptParam_043] + 312;
				if (IS_ACTOR_VALID(&iLocal_338))
				{
					Function_257();
				}
				switch (iLocal_445)
				{
					case 0x00000000:
						if (Function_252(&uLocal_361))
						{
							if (IS_LAYOUTREF_VALID(&uLocal_342))
							{
								if (StackVal || VDIST(VDIST(StackVal, Global_54078, Vector(-2167,51f, 16,879f, 2591,991f)) > 30.0f, Global_54078, Vector(-2167,51f, 16,879f, 2591,991f)) > 30.0f)
								{
									if (Global_116927[26].f_28 <= 2)
									{
										Function_250();
									}
								}
								if (IS_ACTOR_VALID(&iLocal_338))
								{
									if (!IS_OBJECT_VALID(&uLocal_395))
									{
										uLocal_395 = FIND_OBJECT_IN_LAYOUT(&uLocal_342, "RCM_Abandoned_Fiddle");
									}
									if (!IS_OBJECT_VALID(&uLocal_395))
									{
										uLocal_395 = CREATE_PROP_IN_LAYOUT(StackVal, &uLocal_342, "RCM_Abandoned_Fiddle", "$/fragments/p_gen_fiddle01x", Local_423, Vector(90.0f, -47,48567f, -180.0f), 1);
									}
									if (!IS_VOLUME_VALID(&uLocal_418))
									{
										uLocal_418 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_342, Function_249(), 2,802597E-45f, Vector(-2167,622f, 16,99f, 2592,918f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 5.0f, 1.0f));
										ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_418);
										ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_418);
									}
									if (!IS_ACTORSET_VALID(&iLocal_429))
									{
										iLocal_429 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_342, "musicianDummySet", 0);
									}
									if (!IS_ACTOR_VALID(&uLocal_397) && IS_ACTORSET_VALID(&iLocal_429))
									{
										uLocal_397 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_342, Function_249(), 333, Vector(-2168,942f, 17,541f, 2586,576f), Vector(0.0f, 9,23f, 0.0f));
										SUSPEND_MOVER(&uLocal_397);
										TASK_STAND_STILL(&uLocal_397, -1.0f, 0, 0);
										SET_DRAW_ACTOR(&uLocal_397, 0);
										ADD_ACTORSET_MEMBER(&iLocal_429, &uLocal_397);
									}
									uLocal_401 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("musician_wife_idle", &Local_358, 3.0f, 1));
									if (!IS_OBJECT_VALID(&uLocal_401))
									{
										CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uLocal_342, "wifeIdle", "$/content/scripting/gringo/SimpleGringo/musician_wife_idle", Vector(-2169,529f, 16,91f, 2624,512f), Vector(0.0f, 180.0f, 0.0f));
									}
									uLocal_416 = FIND_VOLUME_IN_LAYOUT(&uLocal_342, "wifeVolume");
									if (!IS_VOLUME_VALID(&uLocal_416))
									{
										uLocal_416 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_342, "wifeVolume", 2,802597E-45f, Vector(-2169,409f, 16,909f, 2623,797f), Vector(0.0f, 45.0f, 0.0f), Vector(7,5f, 5.0f, 6.0f));
										ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_416);
										ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_416);
									}
									if (!iLocal_350)
									{
										uLocal_403 = FIND_OBJECT_IN_LAYOUT(&uLocal_342, "nsuitcase1");
										if (!IS_OBJECT_VALID(&uLocal_403))
										{
											uLocal_403 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_342, "nsuitcase1", "$/fragments/p_gen_suitcase03x", Vector(-2171,24f, 17,217f, 2625,02f), Vector(90.0f, 278,5f, 0.0f), 0);
										}
										uLocal_405 = FIND_OBJECT_IN_LAYOUT(&uLocal_342, "nsuitcase2");
										if (!IS_OBJECT_VALID(&uLocal_405))
										{
											uLocal_405 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_342, "nsuitcase2", "$/fragments/p_gen_bag01x", Vector(-2171,143f, 16,909f, 2624,348f), Vector(0.0f, 298,9f, 0.0f), 0);
										}
										uLocal_407 = FIND_OBJECT_IN_LAYOUT(&uLocal_342, "nsuitcase3");
										if (!IS_OBJECT_VALID(&uLocal_407))
										{
											uLocal_407 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_342, "nsuitcase3", "$/fragments/p_gen_suitcase01x", Vector(-2171,24f, 16,909f, 2625,02f), Vector(90.0f, 268,5f, 0.0f), 0);
										}
										if ((IS_OBJECT_VALID(&uLocal_403) && IS_OBJECT_VALID(&uLocal_405)) && IS_OBJECT_VALID(&uLocal_407))
										{
											iLocal_350 = 1;
										}
									}
									Function_248();
									if (!iLocal_349)
									{
										Function_247();
										Function_246();
									}
									if ((((IS_ACTOR_VALID(&uLocal_397) && IS_ACTOR_VALID(&iLocal_340)) && IS_VOLUME_VALID(&uLocal_418)) && iLocal_349) && IS_ACTORSET_VALID(&iLocal_429))
									{
										SET_ACTOR_CAN_PLAY_GESTURES(&iLocal_338, false);
										SET_ACTOR_OBSERVED_TARGETED_REACTIONS(&iLocal_338, 0);
										Function_239(&(Global_99725[243]), 2, 10.0f, 20.0f, &iLocal_429);
										iLocal_445 = 1;
									}
								}
							}
							else if (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Abandoned_layout")))
							{
								Function_237();
								uLocal_342 = &iLocal_446;
							}
							else
							{
								uLocal_342 = FIND_NAMED_LAYOUT("Abandoned_layout");
							}
						}
						break;
					
					case 0x00000001:
						if (StackVal || VDIST(VDIST(StackVal, Global_54078, Vector(-2167,51f, 16,879f, 2591,991f)) > 30.0f, Global_54078, Vector(-2167,51f, 16,879f, 2591,991f)) > 30.0f)
						{
							if (Global_116927[26].f_28 <= 2)
							{
								Function_250();
							}
						}
						if (iLocal_346)
						{
							if (Global_116927[26].f_28 != 0 || Global_116927[26].f_28 != 1)
							{
								if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
								{
									Function_236();
								}
							}
							else if (Global_116927[26].f_28 == 2)
							{
								iLocal_445 = 2;
								break;
							}
							Function_239(&(Global_99725[243]), 2, 10.0f, 20.0f, &iLocal_429);
						}
						else
						{
							Function_235(&iLocal_340);
							if ((iLocal_347 && Global_116927[26].f_28 != 0) && VDIST(Function_235(&iLocal_340), Local_358) > 4.0f)
							{
								iLocal_445 = 2;
							}
							else if (iLocal_347 && Global_116927[26].f_28 < 0)
							{
								iLocal_445 = 2;
							}
						}
						Function_234();
						break;
					
					case 0x00000002:
						if (StackVal || VDIST(VDIST(StackVal, Global_54078, Vector(-2167,51f, 16,879f, 2591,991f)) > 30.0f, Global_54078, Vector(-2167,51f, 16,879f, 2591,991f)) > 30.0f)
						{
							if (Global_116927[26].f_28 <= 2)
							{
								Function_250();
							}
						}
						if (iLocal_346)
						{
							if (Global_116927[26].f_28 != 0 || Global_116927[26].f_28 != 1)
							{
								if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
								{
									if (GATEWAY_UPDATE(&Global_99725[ScriptParam_043] + 288))
									{
										if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304))
										{
											if ((StackVal && FABS((StackVal - !Function_232(&Global_54076, 0, 1))) > 2.0f) && IS_SCRIPT_USE_CONTEXT_PRESSED(&Global_99725[ScriptParam_043] + 304))
											{
												if (Function_231() > 5)
												{
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_230();
													}
													RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[ScriptParam_043] + 304);
													GATEWAY_DISABLE(&Global_99725[ScriptParam_043] + 288, 1);
													Function_227(&Global_54076, &iLocal_338);
													if (!Function_226(&iLocal_437))
													{
														Function_225(&iLocal_437);
													}
													Function_224(&(Global_99725[243]));
													bLocal_354 = true;
													iLocal_445 = 5;
												}
												else if (iLocal_411 == 0)
												{
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_223();
														iLocal_411 = 1;
													}
												}
												else
												{
													Function_222("Abandoned3_HELP", 0x41200000, 1, 0, 2, 1, 0);
												}
											}
										}
										else
										{
											iLocal_445 = 1;
										}
									}
								}
							}
							else if (Global_116927[26].f_28 == 2)
							{
								if (!Function_219(&(Global_99725[243]), 2, 0, 1) || Function_218(2))
								{
									Function_217(&Global_99725[243] + 228, 64);
									Function_215(&(Global_99725[243]), 2, 0, 1, 1);
									iLocal_445 = 13;
								}
								else if (IS_OBJECT_VALID(&Global_99725[243] + 288))
								{
									if (!IS_SCRIPTED_SPEECH_PLAYING(&iLocal_338))
									{
										if (Function_211(&Global_99725[243] + 288, 0, 1, 0, 0, 0))
										{
											Function_224(&(Global_99725[243]));
											iLocal_445 = 5;
											break;
										}
									}
								}
								Function_208();
								if ((iLocal_453 && !IS_ACTOR_HOGTIED(&iLocal_340)) && !iLocal_353)
								{
									Function_207(&iLocal_340);
									iLocal_353 = 1;
								}
							}
							if (Global_116927[26].f_28 != 0 || Global_116927[26].f_28 != 1)
							{
								if (IS_OBJECT_VALID(&Global_99725[ScriptParam_043] + 288))
								{
									if (Function_232(&Global_54076, 0, 1) || !GATEWAY_UPDATE(&Global_99725[ScriptParam_043] + 288))
									{
										if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304))
										{
											RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[ScriptParam_043] + 304);
											iLocal_445 = 1;
										}
									}
								}
							}
							Function_239(&(Global_99725[243]), 2, 10.0f, 20.0f, &iLocal_429);
						}
						else if (iLocal_347 && Global_116927[26].f_28 != 0)
						{
							if (IS_OBJECT_VALID(&iLocal_399))
							{
								if (Function_211(&iLocal_399, 0, 1, 0, 0, 0))
								{
									SET_PLAYER_CONTROL(0, 0, 0, 0);
									ENABLE_USE_CONTEXTS(0);
									iVar0 = Global_39922.f_88 & 16384;
									Global_39922.f_88 = (Global_39922.f_88 - iVar0);
									if (IS_ACTOR_VALID(&iLocal_340))
									{
										SET_ACTOR_INVULNERABILITY(&iLocal_340, true);
									}
									SET_ACTOR_INVULNERABILITY(&Global_54076, true);
									iLocal_445 = 5;
								}
							}
							Function_235(&iLocal_340);
							if (VDIST(Function_235(&iLocal_340), Local_358) < 1.0f)
							{
								if (IS_BLIP_VALID(&uLocal_412))
								{
									REMOVE_BLIP(&uLocal_412);
								}
							}
							else if (!IS_BLIP_VALID(&uLocal_412))
							{
								uLocal_412 = ADD_BLIP_FOR_ACTOR(&iLocal_340, 325, 0, 2, 0);
								SET_BLIP_NAME(&uLocal_412, GET_ACTOR_ENUM_STRING_FROM_ENUM(334));
								SET_BLIP_MAX_DISTANCE(&uLocal_412, fLocal_344);
							}
							Function_239(&(Global_99725[243]), 2, 10.0f, 20.0f, 0);
						}
						else if (!iLocal_346 && Global_116927[26].f_28 != 1)
						{
							iLocal_445 = 13;
						}
						Function_234();
						break;
					
					case 0x00000005:
						if (iLocal_346)
						{
							if (Function_226(&iLocal_437))
							{
								if (Function_205(&iLocal_437) < 2,5f)
								{
									if (Function_184("$/cutscene/RCM_04_CS03_B/RCM_04_CS03_B", &iLocal_326, 44564, 44476, 44430, 44355, 44285, 44269, 1, 1, 2, 2, 0))
									{
										DESTROY_VOLUME(&uLocal_448);
										Function_183(&(Global_99725[243]));
										iLocal_445 = 9;
									}
								}
							}
							else if (Function_184("$/cutscene/RCM_04_CS03_B/RCM_04_CS03_B", &iLocal_326, 44564, 44476, 44430, 44355, 40422, 44269, 1, 1, 2, 2, 0))
							{
								Function_183(&(Global_99725[243]));
								iLocal_445 = 9;
							}
						}
						else if (iLocal_347)
						{
							if (Function_184("$/cutscene/RCM_04_CS04/RCM_04_CS04", &iLocal_326, 38609, 38602, 37315, 37251, 44285, 44269, 1, 1, 2, 2, 0))
							{
								Global_116927[26].f_28 = 1;
								Function_163(&iLocal_340);
								SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iLocal_340, 0);
								SET_RCM_ACTOR_CALL_OVER_ENABLE(&iLocal_340, 1, 1, true, 1, 0, 2, 1101004800, 1088421888, 1);
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								ENABLE_USE_CONTEXTS(1);
								Global_39922.f_88 |= 16384;
								if (IS_ACTOR_VALID(&iLocal_340))
								{
									SET_ACTOR_INVULNERABILITY(&iLocal_340, false);
								}
								SET_ACTOR_INVULNERABILITY(&Global_54076, false);
								Function_162(&iLocal_399);
								iLocal_445 = 7;
							}
						}
						break;
					
					case 0x00000007:
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							Function_160("abandoned4_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_234();
							iLocal_445 = 13;
						}
						break;
					
					case 0x0000000D:
						if (!Function_226(&iLocal_441))
						{
							Function_225(&iLocal_441);
						}
						if (Global_116927[26].f_28 <= 2)
						{
							Function_250();
							if (!iLocal_351)
							{
								Function_138();
							}
							if (iLocal_346)
							{
								iLocal_445 = 1;
							}
						}
						else if (GET_ACTOR_HOGTIE_STATE(&iLocal_340) != 3)
						{
							Function_124(4294967196, 1, 0);
							Function_123(&iLocal_340);
							SET_RCM_ACTOR_CALL_OVER_ENABLE(&iLocal_340, 1, 0, true, 1, 0, 2, 1101004800, 1088421888, 1);
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
							Function_122("RCM_Journal_Edit", &Global_99725[ScriptParam_043] + 4, 0x40f00000);
							iLocal_431 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_99725[ScriptParam_043].f_224);
							iLocal_432 = 0;
							while (iLocal_432 <= iLocal_431)
							{
								SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_99725[ScriptParam_043].f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_99725[ScriptParam_043].f_224, iLocal_432), 4, 0);
								iLocal_432++;
							}
							APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[ScriptParam_043].f_224, "abandoned4a_OBJ", 0, 3, false);
							Function_121(Global_99725[ScriptParam_043].f_224, 0);
							Function_120(&iLocal_340);
							CLEAR_LAST_HIT(&iLocal_340);
							MEMORY_CLEAR_EVENTS(&iLocal_340, 0);
							if (!IS_ACTOR_IN_VOLUME(&iLocal_340, FIND_VOLUME_IN_LAYOUT(&Global_46715, "armv_saloon_set")))
							{
								HUD_CLEAR_OBJECTIVE();
								Function_160("abandoned4b_HELP", 7,5f, 1, 0, 0, 0, 0, 0);
							}
							SET_RCM_ACTOR_CALL_OVER_ENABLE(&iLocal_338, 1, 0, false, 0, 1, 2, 1101004800, 1088421888, 1);
							if (!IS_VOLUME_VALID(&uLocal_418))
							{
								uLocal_418 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_342, Function_249(), 2,802597E-45f, Vector(-2167,622f, 16,99f, 2592,918f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 5.0f, 1.0f));
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_418);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_418);
							}
							iLocal_445 = 8;
						}
						else if (!iLocal_352)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_160("abandoned4b_HELP3", 0x40f00000, 1, 2, 0, 0, 0, 0);
							iLocal_352 = 1;
						}
						break;
					
					case 0x00000008:
						if (IS_LAYOUTREF_VALID(&Global_46715))
						{
							if (IS_ACTOR_IN_VOLUME(&iLocal_340, FIND_VOLUME_IN_LAYOUT(&Global_46715, "armv_saloon_set")))
							{
								if (GET_ACTOR_HOGTIE_STATE(&iLocal_340) != 3)
								{
									MEMORY_CLEAR_EVENTS(&iLocal_340, 0);
									CLEAR_LAST_HIT(&iLocal_340);
									if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[ScriptParam_043] + 304))
									{
										RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[ScriptParam_043] + 304);
									}
									ABORT_SCRIPTED_CONVERSATION(1);
									iLocal_346 = 1;
									iLocal_347 = 0;
									*(&Global_99725[243] + 136) = GET_ASSET_ID("$/cutscene/RCM_04_CS03_b/RCM_04_CS03_b", 9);
									*(&Global_99725[243] + 184) = Local_355;
									Function_208();
									iLocal_445 = 1;
								}
								Function_239(&(Global_99725[243]), 2, 10.0f, 20.0f, &iLocal_429);
							}
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_235(&iLocal_340);
								if (VDIST(Global_54078, Function_235(&iLocal_340)) > 15.0f)
								{
									if (!IS_ACTOR_HOGTIED(&iLocal_340))
									{
										Function_116();
									}
								}
							}
						}
						Function_234();
						break;
					
					case 0x00000009:
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							Function_110(Global_46760[12]);
							ABORT_SCRIPTED_CONVERSATION(1);
							RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
							GIVE_OBJECT_TO_LAYOUT(&uLocal_409, &Global_46715);
							if (IS_ACTOR_VALID(&iLocal_340) && !IS_ACTOR_IN_VOLUME(&iLocal_340, FIND_VOLUME_IN_LAYOUT(&Global_46715, "armv_saloon_set")))
							{
								Function_123(&iLocal_340);
								Function_120(&iLocal_340);
								SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iLocal_340, 1);
								RELEASE_ACTOR(&iLocal_340);
							}
							if (IS_OBJECT_VALID(&iLocal_399))
							{
								Function_162(&iLocal_399);
							}
							Function_160("abandoned_SHORT3", 0x40f00000, 1, 2, 0, 0, 0, 0);
							iLocal_431 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_99725[ScriptParam_043].f_224);
							iLocal_432 = 0;
							while (iLocal_432 <= iLocal_431)
							{
								SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_99725[ScriptParam_043].f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_99725[ScriptParam_043].f_224, iLocal_432), 4, 0);
								iLocal_432++;
							}
							Function_109(&Global_99725[243] + 228, 256);
							APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[ScriptParam_043].f_224, "abandoned7_OBJ", 0, 3, false);
							Function_121(Global_99725[ScriptParam_043].f_224, 0);
							Function_25(2, 1, 1, 0);
							SET_RCM_ACTOR_CALL_OVER_ENABLE(&iLocal_338, 1, 1, true, 1, 0, 2, 1101004800, 1088421888, 1);
							ACTOR_DATA_GRAVITY_LIMIT(0);
							if (bLocal_354)
							{
								Function_10(5, 1);
							}
							iLocal_445 = 10;
						}
						break;
					
					case 0x0000000A:
						if (VDIST(Global_54078, *(&Global_99725[243] + 184)) > 100.0f)
						{
							Function_8();
						}
						else
						{
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
						}
						break;
				}
				WAIT(false);
			}
			break;
	}
	Function_4(&uLocal_361);
	if (IS_ACTOR_VALID(&iLocal_340))
	{
		RELEASE_ACTOR(&iLocal_340);
	}
	if (IS_BLIP_VALID(&uLocal_412))
	{
		REMOVE_BLIP(&uLocal_412);
	}
	RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
	if (IS_OBJECT_VALID(&iLocal_399))
	{
		DESTROY_OBJECT(&iLocal_399);
	}
	if (IS_ACTOR_VALID(&uLocal_397))
	{
		DESTROY_ACTOR(&uLocal_397);
	}
	if (IS_OBJECT_VALID(&uLocal_401))
	{
		RELEASE_OBJECT_REF(&uLocal_401);
	}
	if (IS_OBJECT_VALID(&uLocal_403))
	{
		RELEASE_OBJECT_REF(&uLocal_403);
	}
	if (IS_OBJECT_VALID(&uLocal_405))
	{
		RELEASE_OBJECT_REF(&uLocal_405);
	}
	if (IS_OBJECT_VALID(&uLocal_407))
	{
		RELEASE_OBJECT_REF(&uLocal_407);
	}
	if (IS_ACTORSET_VALID(&iLocal_429))
	{
		DISBAND_ACTORSET(&iLocal_429);
		DESTROY_OBJECT(&iLocal_429);
	}
	if (IS_VOLUME_VALID(&uLocal_416))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_416);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_416);
		DESTROY_VOLUME(&uLocal_416);
	}
	if (IS_VOLUME_VALID(&uLocal_418))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_418);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_418);
		DESTROY_VOLUME(&uLocal_418);
	}
	if (IS_GRINGO_VALID(&Global_99725[243] + 320))
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_GRINGO(&Global_99725[243] + 320));
	}
	Function_217(&Global_99725[243] + 228, 16384);
	if (bLocal_345)
	{
		Function_3();
	}
	Function_1(0, 0, 0);
	return;
}

int Function_1(bool bParam0, bool bParam1, bool bParam2) //Position: 0x147C / 5244
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

void Function_2(bool bParam0) //Position: 0x14AE / 5294
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

void Function_3() //Position: 0x14CB / 5323
{
	RELEASE_LAYOUT_REF(&iLocal_446);
	return;
}

void Function_4(int iParam0) //Position: 0x14D8 / 5336
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_5(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_5(struct<2>[] Param0, int iParam1) //Position: 0x1500 / 5376
{
	if (Function_7(&(Param0[iParam12]), 4))
	{
		if (Function_7(&(Param0[iParam12]), 1))
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
			Function_6(&(Param0[iParam12]), 1);
			Function_6(&(Param0[iParam12]), 2);
			Function_6(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_6(struct<13> Param0) //Position: 0x164B / 5707
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_7(struct<13> Param0) //Position: 0x1668 / 5736
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8() //Position: 0x1686 / 5766
{
	if (IS_ACTOR_VALID(&iLocal_340))
	{
		if (Function_9(&Global_54076, &iLocal_340, 1, 1, 0, 3212836864))
		{
			TASK_FLEE_ACTOR(&iLocal_340, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_338))
			{
				TASK_FLEE_ACTOR(&iLocal_338, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			}
		}
		if (Function_9(&Global_54076, &iLocal_338, 1, 1, 0, 3212836864))
		{
			TASK_FLEE_ACTOR(&iLocal_338, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_340))
			{
				TASK_FLEE_ACTOR(&iLocal_340, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			}
		}
	}
	return;
}

bool Function_9(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x1716 / 5910
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

int Function_10(bool bParam0, bool bParam1) //Position: 0x181C / 6172
{
	bool bVar0;
	
	bVar0 = Function_24(0);
	if ((Function_24(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_11(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_24(0));
	return 1;
}

int Function_11(int iParam0, bool bParam1, bool bParam2) //Position: 0x18AD / 6317
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
	Function_23(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_12(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_12(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1AAA / 6826
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_22(390))), 32);
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
					bVar19 = (Function_21(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_21(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_19(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_16(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_13(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_249(), &Var9);
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

var Function_13(int iParam0) //Position: 0x20E8 / 8424
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x20F9 / 8441
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_15(char* cParam0) //Position: 0x21F0 / 8688
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x220B / 8715
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_18(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0x2272 / 8818
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_18(int iParam0, bool bParam1) //Position: 0x2284 / 8836
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2296 / 8854
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
	if (((Function_20(iParam0) != 19 || Function_20(iParam0) != 17) || Function_20(iParam0) != 10) || Function_20(iParam0) != 9)
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

int Function_20(int iParam0) //Position: 0x23CA / 9162
{
	return Global_55480[iParam016].f_96;
}

float Function_21(int iParam0) //Position: 0x23D9 / 9177
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_22(int iParam0) //Position: 0x2412 / 9234
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_23(int iParam0) //Position: 0x244F / 9295
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

int Function_24(int iParam0) //Position: 0x25E9 / 9705
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x262A / 9770
{
	int iVar0;
	var uVar1;
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
			uVar1 = MAKE_TIME_OF_DAY_EX(bVar2, bVar3, iVar4, iVar5);
		}
		else
		{
			uVar1 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
		}
		PRINTSTRING("Time next quest leg will be available: ");
		Function_101(&uVar1);
		PRINTNL();
		*(&Global_99725[iVar0 + 143] + 240) = &uVar1;
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
	Function_217(&Global_99725[iParam043] + 228, 64);
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
		Function_58(Global_99725[iParam043].f_224);
	}
	if (&Global_99717 + 16 == iParam0)
	{
		Global_99717.f_28 = 0;
		Global_99717.f_24 = 999.0f;
		*(&Global_99717 + 16) = 4294967295;
	}
	if (&bParam2)
	{
		if (!Function_57(0, 0, 1, 1))
		{
			Function_29(1);
			Function_28(&bParam1, 7);
		}
		else
		{
			Function_27();
		}
	}
	bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 1);
	if (IS_ACTOR_VALID(&Global_99725[iParam043] + 312))
	{
		Function_26(iParam0, &iVar18, &iVar19, &iVar20, &iVar21, &iVar22, &iVar23);
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

void Function_26(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2BC2 / 11202
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

void Function_27() //Position: 0x2D63 / 11619
{
	return;
}

void Function_28(var uParam0, int iParam1) //Position: 0x2D69 / 11625
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = uParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_29(bool bParam0) //Position: 0x2DA8 / 11688
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_46();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_30();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_217(&Global_99144, 1);
		Function_217(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_30() //Position: 0x2DFD / 11773
{
	Function_44();
	Function_43();
	Function_43();
	Function_42();
	Function_42();
	Function_41();
	Function_41();
	Function_38(0);
	Function_38(0);
	Function_35();
	Function_34();
	Function_33();
	Function_32();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_31();
	return;
}

void Function_31() //Position: 0x2E48 / 11848
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

void Function_32() //Position: 0x2F4E / 12110
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

void Function_33() //Position: 0x2F81 / 12161
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

void Function_34() //Position: 0x3114 / 12564
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

void Function_35() //Position: 0x32CD / 13005
{
	Function_36(&Global_42918, 1, 0);
	return;
}

void Function_36(struct<2317> Param0) //Position: 0x32DB / 13019
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
	
	uVar0 = Function_37();
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

bool Function_37() //Position: 0x34F8 / 13560
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_38(int iParam0) //Position: 0x350D / 13581
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
					iVar2 = ((Function_24((50 + iVar4)) + Function_24((183 + iVar4))) + Function_24((90 + iVar4)));
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
	Function_39(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_39(int iParam0, bool bParam1, bool bParam2) //Position: 0x35B4 / 13748
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
	Function_23(iParam0);
	if (&bParam2)
	{
		Function_12(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_40(int iParam0, bool bParam1, bool bParam2) //Position: 0x3850 / 14416
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

struct<8> Function_41() //Position: 0x3A94 / 14996
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
		iVar2 = ((Function_24((50 + iVar3) + 15) + Function_24((183 + iVar3) + 15)) + Function_24((90 + iVar3) + 15));
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
	Function_39(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_42() //Position: 0x3B1D / 15133
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
			iVar2 = ((Function_24((50 + iVar3) + 8) + Function_24((183 + iVar3) + 8)) + Function_24((90 + iVar3) + 8));
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
	Function_39(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_43() //Position: 0x3BB4 / 15284
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
		iVar2 = ((Function_24((50 + iVar3)) + Function_24((183 + iVar3))) + Function_24((90 + iVar3)));
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
	Function_39(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_44() //Position: 0x3C33 / 15411
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_45(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_39(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_45(int iParam0, bool bParam1, int iParam2) //Position: 0x3C70 / 15472
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
	Function_23(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_12(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_46() //Position: 0x3E7C / 15996
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_108())
	{
		Function_53(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_53(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_48(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_48(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_47(StackVal, Var0))
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

bool Function_47(char* cParam0) //Position: 0x3F33 / 16179
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_48(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3F4B / 16203
{
	int iVar0;
	
	iVar0 = Function_51(&uParam2, &fParam3);
	if (Function_50(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_109(&Global_99144, 1);
			Function_217(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_109(&Global_99144, 2);
			Function_217(&Global_99144, 1);
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
		Function_109(&Global_99144, 2);
		Function_217(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_49();
	return StackVal, Function_49();
}

struct<8> Function_49() //Position: 0x4044 / 16452
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_50(int iParam0) //Position: 0x404E / 16462
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_51(bool bParam0, bool bParam1) //Position: 0x4064 / 16484
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
				fVar2 = Function_52(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_52(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_50(iVar0) && !&bParam1)
	{
		iVar0 = Function_51(&bParam0, 1);
	}
	return iVar0;
}

float Function_52(struct<2> Param0, struct<2> Param2) //Position: 0x4130 / 16688
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_53(float fParam0, int iParam1) //Position: 0x414D / 16717
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_56(&Global_54076, &Var3);
	if (!Function_54(Global_46760[0]))
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
	if (!Function_54(Global_46760[2]))
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
	if (!Function_54(Global_46760[1]))
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
	if (!Function_54(Global_46796[1]))
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
	if (!Function_54(Global_46796[3]))
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
	if (!Function_54(Global_46796[2]))
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
	if (!Function_54(Global_46796[4]))
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
	if (!Function_54(Global_46816[0]))
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
	if (!Function_54(Global_46816[1]))
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
	if (!Function_54(Global_46816[2]))
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
	if (!Function_54(Global_46838[0]))
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
	if (!Function_54(Global_46850[0]))
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
	if (!Function_54(Global_46850[1]))
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
	if (!Function_54(Global_46850[2]))
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
	if (!Function_54(Global_46866[0]))
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
	if (!Function_54(Global_46866[1]))
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
	if (!Function_54(Global_46866[2]))
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
	if (!Function_54(Global_46894[2]))
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
	if (!Function_54(Global_46894[3]))
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
	if (!Function_54(Global_46894[0]))
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
	if (!Function_54(Global_46914[0]))
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
	if (!Function_54(Global_46926[2]))
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
	if (!Function_54(Global_46926[1]))
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
	if (!Function_54(Global_46926[0]))
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
	if (!Function_54(Global_46838[1]))
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
	if (!Function_54(Global_46894[1]))
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
	Function_109(&Global_99144, 2);
	Function_217(&Global_99144, 1);
	iParam1 = 0;
	if (Function_47(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_54(int iParam0) //Position: 0x4979 / 18809
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_55(uVar0, 0x1000000) || Function_55(uVar0, 0x2000000)) || Function_55(uVar0, 0x4000000)) || !Function_55(uVar0, 0x10000000));
}

bool Function_55(var uParam0, int iParam1) //Position: 0x49B4 / 18868
{
	return (uParam0 && iParam1) == 0;
}

void Function_56(var uParam0, int iParam1) //Position: 0x49C1 / 18881
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_57(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x49D0 / 18896
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

void Function_58(int iParam0) //Position: 0x4A7F / 19071
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	if (iVar0 == 4)
	{
		if (iParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_99(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(iParam0);
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
					if (iParam0 == Global_42265[iVar69].f_64)
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
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
				{
					Function_94(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
			{
				Function_89();
				TARGET_JOURNAL_ENTRY(iParam0);
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
				if (!Function_55(Global_99725[iVar143].f_228, 2048))
				{
					iVar3 = iVar1;
					if (Function_74(&(Global_99725[iVar143]), iVar3))
					{
						Function_109(&Global_99725[iVar143] + 228, 64);
						Function_70(&(Global_99725[iVar143]), iVar3);
						if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
						{
							DESTROY_OBJECT(&Global_99725[iVar143] + 288);
							Function_59(&(Global_99725[iVar143]), 7);
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

void Function_59(struct<229> Param0) //Position: 0x4C39 / 19513
{
	float fVar0;
	int iVar1;
	
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_55(Param0.f_228, 2048) || Global_6623) || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return;
	}
	fVar0 = Param0.f_180;
	*(&Param0 + 288) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_249(), *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, iParam1, Param0.f_176, 0, 1, 1);
	Function_60(&Param0);
	iVar1 = GATEWAY_GET_MARKER(&Param0 + 288);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

void Function_60(struct<217> Param0) //Position: 0x4D09 / 19721
{
	float fVar0;
	var uVar1;
	
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		return;
	}
	*(&Param0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_249(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
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
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 336, Function_249(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0));
	DECOR_SET_INT(&uVar1, "category", 512);
	Function_61(&uVar1, 0);
	return;
}

int Function_61(var uParam0, int iParam1) //Position: 0x4DC7 / 19911
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
	Function_65(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_62(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_62(int iParam0, var uParam1, struct<2> Param2) //Position: 0x4F31 / 20273
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 3, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_63(char* cParam0) //Position: 0x4FD9 / 20441
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("0", &cVar8, ""), 4);
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

struct<32> Function_64(char* cParam0) //Position: 0x5045 / 20549
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_65(int iParam0) //Position: 0x5067 / 20583
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
						if (Function_66(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_68(iVar0);
						}
					}
					else if (Function_66(StackVal, &Global_54076, Var1) < 55.0f)
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

float Function_66(int iParam0, struct<2> Param1) //Position: 0x51D5 / 20949
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_67(&iParam0);
		Var0 = Function_67(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_67(int iParam0) //Position: 0x524C / 21068
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

void Function_68(int iParam0) //Position: 0x52B8 / 21176
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

bool Function_69(int iParam0) //Position: 0x5320 / 21280
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_70(struct<153> Param0) //Position: 0x5336 / 21302
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	struct<9> Var4;
	
	Var0 = *(&Param0 + 196);
	Var0.f_4 = (StackVal + 0,5f);
	fVar2 = 1.0f;
	fVar3 = 50.0f;
	if (((StackVal && Function_72(Function_73(iParam1), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_71(iParam1)) || Global_116927[iParam16].f_20 != 1)
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

int Function_71(int iParam0) //Position: 0x54A5 / 21669
{
	if ((Global_116927[iParam06] != 3 || Global_116927[iParam06] != 4) || Global_116927[iParam06] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_72(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x54D1 / 21713
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_73(int iParam0) //Position: 0x54F2 / 21746
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_74(struct<249> Param0) //Position: 0x5507 / 21767
{
	if (Function_55(Global_99725[iParam143].f_228, 64))
	{
		return 1;
	}
	if (Function_73(iParam1))
	{
		Function_109(&Global_99725[iParam143] + 228, 64);
		return 1;
	}
	if ((Function_88(iParam1) || Function_87(iParam1)) || Function_218(iParam1))
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
		if (Function_86(&(Global_43791[Param0.f_216]), 256))
		{
			return 0;
		}
	}
	if (Function_84(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		if (!((((Global_99146 || Global_6627) || Global_6610) || Param0.f_236) || GET_ACTOR_INVULNERABILITY(&Param0 + 312)))
		{
			if (!Function_83(&Param0))
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
	if (!Function_75(&Param0, iParam1))
	{
		return 0;
	}
	Function_109(&Global_99725[iParam143] + 228, 64);
	return 1;
}

bool Function_75(struct<265> Param0) //Position: 0x5637 / 22071
{
	int iVar0;
	
	if (!Param0.f_260 != 0)
	{
		if (Function_82(&Param0 + 260, 4))
		{
			if (!Function_81(iParam1))
			{
				return 0;
			}
		}
		if (Function_82(&Param0 + 260, 1))
		{
			if (!Function_87(Param0.f_256))
			{
				return 0;
			}
		}
		if (Function_82(&Param0 + 260, 2) && Global_6606)
		{
			iVar0 = Function_79(Param0.f_264);
			if (Function_76(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_82(&Param0 + 260, 8) && Global_6606)
		{
			if (Function_76(Param0.f_252))
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
				if (!Function_82(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_82(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_82(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_82(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_82(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_82(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_76(int iParam0) //Position: 0x5798 / 22424
{
	if (!Function_78(iParam0))
	{
		return 0;
	}
	if (!Function_77(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_77(int iParam0) //Position: 0x57BC / 22460
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_78(int iParam0) //Position: 0x57D1 / 22481
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_79(int iParam0) //Position: 0x57E8 / 22504
{
	if (!Function_80(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_80(int iParam0) //Position: 0x5802 / 22530
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x5818 / 22552
{
	return Global_116927[iParam06].f_16;
}

bool Function_82(var uParam0, int iParam1) //Position: 0x5828 / 22568
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_83(struct<237> Param0) //Position: 0x5845 / 22597
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

bool Function_84(int iParam0) //Position: 0x5914 / 22804
{
	if (!Function_85(1048576) || Global_6624)
	{
		return 1;
	}
	if (!Function_55(Global_99725[iParam043].f_228, 32768))
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

bool Function_85(int iParam0) //Position: 0x596F / 22895
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_86(var uParam0, int iParam1) //Position: 0x598B / 22923
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_87(int iParam0) //Position: 0x59A8 / 22952
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_88(int iParam0) //Position: 0x59BD / 22973
{
	if (Global_116927[iParam06] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_89() //Position: 0x59D2 / 22994
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

int Function_90(int iParam0, int iParam1) //Position: 0x5A52 / 23122
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
	if (Function_47(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_47(StackVal, vVar2))
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
	if (!Function_47(StackVal, vVar2))
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

bool Function_91(int iParam0, bool bParam1) //Position: 0x66B5 / 26293
{
	int iVar0;
	
	iVar0 = Function_79(iParam0);
	if (!Function_78(iVar0))
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

int Function_92(int iParam0) //Position: 0x66F3 / 26355
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

bool Function_93(int iParam0) //Position: 0x6742 / 26434
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_94(int iParam0) //Position: 0x6758 / 26456
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

void Function_95() //Position: 0x67C1 / 26561
{
	Global_42827 = 4294967295;
	if (IS_BLIP_VALID(&Global_42827 + 8))
	{
		REMOVE_BLIP(&Global_42827 + 8);
	}
	Global_42827.f_16 = 1;
	return;
}

bool Function_96(int iParam0) //Position: 0x67E6 / 26598
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

bool Function_97(int iParam0, int iParam1) //Position: 0x6837 / 26679
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

bool Function_98(int iParam0) //Position: 0x6864 / 26724
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

void Function_99(int iParam0) //Position: 0x68B6 / 26806
{
	int iVar0;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
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

void Function_100() //Position: 0x68F0 / 26864
{
	bool bVar0;
	
	bVar0 = Function_24(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

void Function_101(int iParam0) //Position: 0x694E / 26958
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

void Function_102(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6998 / 27032
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

void Function_103(char* cParam0) //Position: 0x6A0D / 27149
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

bool Function_104(int iParam0, var uParam1, int iParam2) //Position: 0x6A47 / 27207
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

int Function_105(char* cParam0) //Position: 0x6AC3 / 27331
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

int Function_106(int iParam0) //Position: 0x6B64 / 27492
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_217(&iVar1, 2147483648);
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

bool Function_107(int iParam0, int iParam1) //Position: 0x6BA1 / 27553
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_108() //Position: 0x6BB4 / 27572
{
	if (Function_55(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_109(var uParam0, int iParam1) //Position: 0x6BCF / 27599
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_110(int iParam0) //Position: 0x6BE0 / 27616
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_86(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_115(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_113(473, 1, 0, 0);
		iVar0 = Function_112(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_113(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_113(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_113(476, 1, 0, 0);
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
		Function_111(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_111(7, 30);
	}
	if (Function_21(473) <= Function_22(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

void Function_111(int iParam0, int iParam1) //Position: 0x6CD1 / 27857
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

var Function_112(int iParam0) //Position: 0x6D3B / 27963
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

int Function_113(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x6D93 / 28051
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
	Function_23(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_12(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_114(iParam0);
	return 1;
}

void Function_114(int iParam0) //Position: 0x6FBB / 28603
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

void Function_115(var uParam0, var uParam1) //Position: 0x7059 / 28761
{
	uParam0 = (uParam0 || uParam1);
	return;
}

void Function_116() //Position: 0x706A / 28778
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "aband_Way2Saloon_v1_AA", "aband_Way2Saloon_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "aband_Way2Saloon_v1_AB", "aband_Way2Saloon_v1_AB", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "aband_Way2Saloon_v1_AC1", "aband_Way2Saloon_v1_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "aband_Way2Saloon_v1_AC2", "aband_Way2Saloon_v1_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "aband_Way2Saloon_v1_AD", "aband_Way2Saloon_v1_AD", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "aband_Way2Saloon_v1_AE", "aband_Way2Saloon_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "aband_Way2Saloon_v1_AF", "aband_Way2Saloon_v1_AF", 2, 1, 0, 0, 1);
		SET_MAX_SCRIPTED_CONVERSATION_DISTANCE(10.0f);
		Function_117(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_117(int iParam0) //Position: 0x722D / 29229
{
	Function_118(0, &Global_54076, iParam0, 0);
	Function_118(1, &iLocal_338, iParam0, 0);
	Function_118(2, &iLocal_340, iParam0, 0);
	return;
}

void Function_118(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x7254 / 29268
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_55(uParam2, Function_119(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

var Function_119(bool bParam0) //Position: 0x727C / 29308
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_120(int iParam0) //Position: 0x7288 / 29320
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_REMOVE(&iParam0, "nocrime");
	}
	return;
}

void Function_121(char* cParam0, bool bParam1) //Position: 0x72BD / 29373
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

void Function_122(var uParam0, var uParam1, int iParam2) //Position: 0x72E2 / 29410
{
	PRINT_OBJECTIVE_FORMAT(&iParam2, &uParam0, &uParam1, "", "", "", "", 1, 0, 1, 0);
	if (!Function_108())
	{
		if (!Function_107(Global_119934, 2097152))
		{
			Function_102(&Global_54076, 2097152, 1, 0);
		}
	}
	return;
}

void Function_123(int iParam0) //Position: 0x7327 / 29479
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		}
	}
	return;
}

void Function_124(int iParam0, bool bParam1, bool bParam2) //Position: 0x735A / 29530
{
	int iVar0;
	bool bVar1;
	
	if (Function_137(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_136())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_24(1);
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
			Function_135(1, bVar1);
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
			Function_133(1, (4294967295 * bVar1));
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
		Function_113(1, bVar1, 0, 0);
	}
	else
	{
		Function_11(1, (4294967295 * bVar1), 0);
	}
	if (Function_24(1) <= 4294962296)
	{
		Function_39(1, 4294962296, 0);
	}
	else if (Function_24(1) >= 5000)
	{
		Function_39(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_21(1));
	iVar0 = Function_24(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_126(2, Function_132(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_126(2, Function_132(Global_21369.f_244), 0);
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
				Function_126(2, Function_132(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_126(2, Function_132(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_126(2, Function_132(Global_21369.f_244), 1);
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
				Function_126(2, Function_132(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_126(2, Function_132(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_126(2, Function_132(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_126(2, Function_132(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_126(2, Function_132(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_126(2, Function_132(Global_21369.f_244), 1);
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
				Function_126(2, Function_132(Global_21369.f_244), 0);
			}
			break;
	}
	Function_125(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_125(int iParam0, int iParam1) //Position: 0x7681 / 30337
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

int Function_126(int iParam0, char* cParam1) //Position: 0x78EB / 30955
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
	Function_130(iParam0, &cParam1, 0, 1);
	iVar1 = Function_127();
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

int Function_127() //Position: 0x7A7B / 31355
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
	Function_128();
	return 0;
}

void Function_128() //Position: 0x7B1C / 31516
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
		Function_129(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_129(int iParam0) //Position: 0x7BDA / 31706
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

int Function_130(int iParam0, char* cParam1) //Position: 0x7C40 / 31808
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
		Function_131(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_131(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x7F97 / 32663
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

var Function_132(int iParam0) //Position: 0x8022 / 32802
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

int Function_133(int iParam0, bool bParam1) //Position: 0x80C5 / 32965
{
	bool bVar0;
	int iVar1;
	
	Function_11(iParam0, bParam1, 0);
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
	iVar1 = Function_134(iParam0, 4294967295);
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
	iVar1 = Function_127();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_134(int iParam0, int iParam1) //Position: 0x8270 / 33392
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

int Function_135(int iParam0, bool bParam1) //Position: 0x82B5 / 33461
{
	bool bVar0;
	int iVar1;
	
	Function_113(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_134(iParam0, 4294967295);
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
	iVar1 = Function_127();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

bool Function_136() //Position: 0x8461 / 33889
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_137(int iParam0) //Position: 0x848C / 33932
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_138() //Position: 0x849B / 33947
{
	if (Function_159(&iLocal_441, 1.0f))
	{
		Function_235(&iLocal_340);
		if (!Function_158(&iLocal_340, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Global_54078, Function_235(&iLocal_340)) < 30.0f)
		{
			Function_123(&iLocal_340);
			RELEASE_ACTOR(&iLocal_340);
			iLocal_351 = 1;
			Function_157(&iLocal_441);
			return;
		}
		if (Global_116927[26].f_28 <= 2)
		{
			if (GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) == &iLocal_340)
			{
				if (!Function_226(&bLocal_433))
				{
					Function_225(&bLocal_433);
				}
				if (Function_205(&bLocal_433) < 0,6f)
				{
					if (Function_156(&iLocal_340))
					{
					}
					if (GET_WEAPON_IN_HAND(&Global_54076) == 21)
					{
					}
					else
					{
						TASK_PRIORITY_SET(&iLocal_340, true);
						TASK_CROUCH(&iLocal_340, 30.0f);
						Global_116927[26].f_28 = 2;
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_154();
						}
						Function_157(&bLocal_433);
						Function_207(&iLocal_340);
						return;
					}
				}
			}
			if (Function_226(&bLocal_433))
			{
				Function_157(&bLocal_433);
			}
			if (IS_ACTOR_BEING_DRAGGED(&iLocal_340, 1.0f))
			{
				if (IS_ACTOR_IN_VOLUME(&iLocal_340, FIND_VOLUME_IN_LAYOUT(&Global_46715, "armv_saloon_set")))
				{
					Global_116927[26].f_28 = 2;
					Function_207(&iLocal_340);
					return;
				}
			}
			if (IS_ACTOR_HOGTIED(&iLocal_340))
			{
				DECOR_SET_BOOL(&iLocal_340, "wifeHogtied", true);
				if (!iLocal_454 && GET_ACTOR_HOGTIE_STATE(&iLocal_340) != 0)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_160("abandoned4b_HELP2", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_454 = 1;
				}
				if (IS_ACTOR_IN_VOLUME(&iLocal_340, FIND_VOLUME_IN_LAYOUT(&Global_46715, "armv_saloon_set")))
				{
					Function_207(&iLocal_340);
					iLocal_453 = 1;
					Global_116927[26].f_28 = 2;
					return;
				}
			}
			if (DECOR_GET_BOOL(&iLocal_340, "wifeHogtied"))
			{
				DECOR_SET_BOOL(&iLocal_340, "wifeHogtied", false);
				ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
				MEMORY_CLEAR_ALL(&iLocal_340);
				MEMORY_CLEAR_EVENTS(&iLocal_340, 1);
				CLEAR_LAST_HIT(&iLocal_340);
				TASK_FLEE_ACTOR(&iLocal_340, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				Function_152(&iLocal_441);
				return;
			}
			if (GET_LAST_ATTACKER(&iLocal_340) == &Global_54076)
			{
				if (GET_LAST_HIT_FLAGS(&iLocal_340) == 2)
				{
					Global_116927[26].f_28 = 2;
					Function_154();
					CLEAR_LAST_HIT(&iLocal_340);
					Function_207(&iLocal_340);
					return;
				}
				if (GET_WEAPON_IN_HAND(&Global_54076) == 21)
				{
					CLEAR_LAST_HIT(&iLocal_340);
				}
				else if (((!Function_151(&iLocal_340) && !Function_156(&iLocal_340)) && GET_WEAPON_IN_HAND(&Global_54076) == 4294967295) && !Function_150("hogtie_pickup"))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_141(1, 6, &Global_54076, &iLocal_340, 0);
					Function_139();
				}
				if (IS_ACTOR_DEAD(&iLocal_340) || !IS_ACTOR_ALIVE(&iLocal_340))
				{
					Function_141(1, 11, &Global_54076, &iLocal_340, 0);
					Function_139();
				}
			}
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iLocal_340, 1.0f))
			{
				Global_116927[26].f_28 = 2;
				Function_154();
				Function_207(&iLocal_340);
				return;
			}
		}
		Function_152(&iLocal_441);
	}
	return;
}

void Function_139() //Position: 0x87A7 / 34727
{
	ABORT_SCRIPTED_CONVERSATION(0);
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	if (!Function_87(2))
	{
		Function_140(2);
	}
	if (Global_116927[26].f_28 == 2)
	{
		Global_116927[26].f_28 = 1;
	}
	if (IS_ACTOR_VALID(&iLocal_340))
	{
		if (!IS_ACTOR_DEAD(&iLocal_340) || IS_ACTOR_ALIVE(&iLocal_340))
		{
			TASK_FLEE_ACTOR(&iLocal_340, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		}
		Function_123(&iLocal_340);
		Function_120(&iLocal_340);
		SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iLocal_340, 1);
	}
	if (IS_OBJECT_VALID(&iLocal_399))
	{
		Function_162(&iLocal_399);
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Function_109(&Global_99725[243] + 228, 128);
	TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
	return;
}

void Function_140(int iParam0) //Position: 0x8847 / 34887
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

var Function_141(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x89B0 / 35248
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_149(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_148(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_144(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_249(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_142();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&uParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_142() //Position: 0x8C63 / 35939
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_143(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_143(var uParam0, int iParam1) //Position: 0x8CD6 / 36054
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_144(bool bParam0) //Position: 0x8D0C / 36108
{
	if (Function_147(256))
	{
		return 0;
	}
	if (Function_147(262144))
	{
		return 0;
	}
	if (Function_146())
	{
		return 0;
	}
	if (!Function_147(1))
	{
		return 0;
	}
	if (!Function_147(4096))
	{
		return 0;
	}
	if (bParam0 && Function_145(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_147(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_145(int iParam0) //Position: 0x8D82 / 36226
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_146() //Position: 0x8D93 / 36243
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_147(int iParam0) //Position: 0x8DAC / 36268
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_148(int iParam0) //Position: 0x8DCA / 36298
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_149(int iParam0) //Position: 0x8DE0 / 36320
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_150(char* cParam0) //Position: 0x8DF5 / 36341
{
	var uVar0;
	char* cVar1[64];
	char* cVar18[64];
	
	uVar0 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
	if (IS_GRINGO_VALID(&uVar0))
	{
		cVar1 = GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar0));
		strcpy(&cVar18, &cParam0, 64);
		strcpy(&cVar2, &cVar1, 64);
		STRING_LOWER(&cVar2);
		STRING_LOWER(&cVar18);
		if (STRINGS_ARE_EQUAL(&cVar2, &cVar18) || STRING_CONTAINS_STRING(&cVar2, &cVar18))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_151(int iParam0) //Position: 0x8E49 / 36425
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

void Function_152(int iParam0) //Position: 0x8E55 / 36437
{
	Function_153(&iParam0, 0.0f);
	return;
}

void Function_153(vector3 vParam0) //Position: 0x8E62 / 36450
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_109(&vParam0, 1);
	Function_217(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_154() //Position: 0x8E87 / 36487
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (!IS_ACTOR_HOGTIED(&iLocal_340))
		{
			if (ACTORS_IN_RANGE(&Global_54076, &iLocal_340, 10.0f))
			{
				Function_155();
			}
		}
	}
	return;
}

void Function_155() //Position: 0x8EB5 / 36533
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Aband_MessHerUp_v1_AA1", "Aband_MessHerUp_v1_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Aband_MessHerUp_v1_AA2", "Aband_MessHerUp_v1_AA2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Aband_MessHerUp_v1_AB", "Aband_MessHerUp_v1_AB", 2, 1, 0, 0, 1);
		Function_117(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_156(int iParam0) //Position: 0x8F7E / 36734
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_157(vector3 vParam0) //Position: 0x8F8D / 36749
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_158(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x8FA4 / 36772
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

bool Function_159(int iParam0, bool bParam1) //Position: 0x8FC4 / 36804
{
	if (Function_226(&iParam0))
	{
		if (Function_205(&iParam0) < bParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_160(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x8FE2 / 36834
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
			Var0 = { StackVal, StackVal, StackVal, Function_161(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

struct<16> Function_161(int iParam0) //Position: 0x9077 / 36983
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

void Function_162(int iParam0) //Position: 0x90B6 / 37046
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

void Function_163(var uParam0) //Position: 0x914C / 37196
{
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&uParam0, "nocrime", true);
	}
	return;
}

int Function_164() //Position: 0x9183 / 37251
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2170,479f, 16,449f, 2620,644f), 187,679f, 1, 1, true);
	SNAP_ACTOR_TO_GRINGO(&iLocal_340, &uLocal_401, "UseCase1", false, 0, 0);
	return 1;
}

int Function_165() //Position: 0x91C3 / 37315
{
	if (!iLocal_456)
	{
		Function_166(StackVal, Local_420, &bLocal_414);
		iLocal_456 = 1;
	}
	return 1;
}

void Function_166(vector3 vParam0) //Position: 0x91E1 / 37345
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	
	vVar3 = vParam0;
	Function_168(0, 0x40400000);
	if (!Function_47(StackVal, vParam0))
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
			else if (Function_167(&iVar1, &Global_54076) > 4.0f)
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
				else if (Function_167(&iVar0, &Global_54076) > 4.0f)
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
			else if (Function_167(&iVar2, &Global_54076) > 8.0f)
			{
				TELEPORT_ACTOR(&iVar2, &vVar3, 1, 1, 1);
			}
		}
	}
	return;
}

float Function_167(int iParam0, int iParam1) //Position: 0x938A / 37770
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

void Function_168(float fParam0, float fParam1) //Position: 0x947F / 38015
{
	(&Global_21369 + 72 + 44) = 0;
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
	Function_170();
	Function_169();
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

void Function_169() //Position: 0x9590 / 38288
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_170() //Position: 0x95C4 / 38340
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

int Function_171() //Position: 0x96CA / 38602
{
	return 1;
}

int Function_172() //Position: 0x96D1 / 38609
{
	if (!IS_VOLUME_VALID(&bLocal_414))
	{
		bLocal_414 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_342, "tempcutscenevol", 2, Local_423, Vector(0.0f, 0.0f, 0.0f), Vector(7.0f, 7.0f, 7.0f));
	}
	Function_175(0, 0, 1, 1, 1, 1, 1, &bLocal_414, 1, 1, 1, 1, 0x3f800000, 0);
	Function_173(StackVal, &uLocal_342, Local_426, &bLocal_414, 0, 0.0f, 0.0f, 0.0f, 1, 1);
	return 1;
}

void Function_173(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, float fParam5, float fParam6, float fParam7, bool bParam8, bool bParam9) //Position: 0x973B / 38715
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &fParam5;
	Var2.f_4 = &fParam6;
	Var2.f_8 = &fParam7;
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
				Function_174(&uVar1, &uParam0);
			}
		}
		if (!Function_47(StackVal, Var2))
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

void Function_174(var uParam0, float fParam1) //Position: 0x99DB / 39387
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

void Function_175(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x9A5D / 39517
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_178();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_37();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, false);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, true);
			AI_IGNORE_ACTOR(&iVar1);
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
				Function_235(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_249(), 2, Function_235(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_113(19, 1, 0, 0);
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
	if (iParam10 && !Function_108())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_177()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_177()));
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
	if (Function_85(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_176(0x4000000);
	}
	if (Function_85(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_176(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_176(int iParam0) //Position: 0x9D0F / 40207
{
	int iVar0;
	
	if (Function_55(iParam0, 1) && Function_55(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

var Function_177() //Position: 0x9D43 / 40259
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&uVar2))
		{
			while (IS_OBJECT_VALID(&uVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&uVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&uVar2), "bino_camera"))
				{
					return &uVar2;
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

void Function_178() //Position: 0x9DD1 / 40401
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_179() //Position: 0x9DE6 / 40422
{
	Function_180(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	DESTROY_VOLUME(&bLocal_414);
	return 1;
}

void Function_180(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x9E02 / 40450
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
		uVar0 = Function_37();
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
		Function_113(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_178();
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
	Function_181(&iParam9, &bParam10);
}

void Function_181(var uParam0, bool bParam1) //Position: 0x9ED1 / 40657
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
		Function_182();
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

void Function_182() //Position: 0x9FA0 / 40864
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

void Function_183(struct<221> Param0) //Position: 0xA018 / 40984
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

bool Function_184(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0xA061 / 41057
{
	var uVar0;
	var uVar6;
	bool bVar7;
	
	if (!DECOR_CHECK_EXIST(&Global_54076, "RCM_Cutscene_HideActors"))
	{
		Function_197();
		Function_196();
		DECOR_SET_BOOL(&Global_54076, "RCM_Cutscene_HideActors", true);
	}
	SET_RCM_ACTOR_CALL_OVER_SUPPRESS(2.0f);
	bVar7 = Function_185(&uParam0, &iParam1, &uVar0, &uVar6, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7, 0, &iParam8, &iParam9, &iParam10, &iParam11, &iParam12, 1);
	if (bVar7)
	{
		DECOR_REMOVE(&Global_54076, "RCM_Cutscene_HideActors");
		return 1;
	}
	return 0;
}

int Function_185(var uParam0, int iParam1, struct<41> Param2) //Position: 0xA11A / 41242
{
	if (!&bParam15)
	{
		Function_193(&iParam1, &uParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (uParam3 != 99 && (Function_192(&Param2) || Param2.f_40 < 1))
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
				Function_152(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_191())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_190(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_152(&iParam1 + 4);
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
					Function_190(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_205(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_205(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_188(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_190(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_152(&iParam1 + 4);
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
						Function_186();
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
					Function_181(1, 1);
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
			if ((HUD_IS_FADED() && uParam3 == 99) && !Function_192(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_186() //Position: 0xA77C / 42876
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_187();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_187() //Position: 0xA7C1 / 42945
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_188(var uParam0, int iParam1) //Position: 0xA7D3 / 42963
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
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_249(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_189(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_189(int iParam0) //Position: 0xA865 / 43109
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

int Function_190(bool bParam0) //Position: 0xA896 / 43158
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

bool Function_191() //Position: 0xA959 / 43353
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

bool Function_192(struct<37> Param0) //Position: 0xA996 / 43414
{
	return Param0.f_36;
}

void Function_193(var uParam0, int iParam1) //Position: 0xA9A1 / 43425
{
	Function_194(&uParam0, &iParam1, 0);
	return;
}

void Function_194(var uParam0, bool bParam1, bool bParam2) //Position: 0xA9B1 / 43441
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
			Function_195(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_113(20, 1, 0, 0);
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
							Function_195(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_113(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_195(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xAB29 / 43817
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

int Function_196() //Position: 0xAB53 / 43859
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

void Function_197() //Position: 0xABAE / 43950
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	var uVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	
	uVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_249(), &Global_99717, 15, 0);
	Var3 = Global_54078;
	uVar5 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_249(), 2, Var3, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
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

int Function_198() //Position: 0xACED / 44269
{
	HUD_FADE_IN(1.0f, 1065353216);
	return 1;
}

int Function_199() //Position: 0xACFD / 44285
{
	Function_180(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	REMOVE_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_340, &bLocal_414);
	DESTROY_VOLUME(&bLocal_414);
	if (IS_VOLUME_VALID(&uLocal_418))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_418);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_418);
		DESTROY_VOLUME(&uLocal_418);
	}
	return 1;
}

int Function_200() //Position: 0xAD43 / 44355
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2166,596f, 16,875f, 2594,603f), 150,125f, 1, 1, true);
	SET_DRAW_ACTOR(&iLocal_338, 1);
	SET_DRAW_ACTOR(&uLocal_397, 0);
	ENABLE_MOVER(&uLocal_397);
	DESTROY_ACTOR(&uLocal_397);
	SHOW_PHYSINST(&uLocal_457);
	return 1;
}

int Function_201() //Position: 0xAD8E / 44430
{
	if (!iLocal_455)
	{
		SET_DRAW_ACTOR(&iLocal_338, 0);
		SET_DRAW_ACTOR(&uLocal_397, 1);
		Function_166(StackVal, Local_420, &bLocal_414);
		iLocal_455 = 1;
	}
	return 1;
}

int Function_202() //Position: 0xADBC / 44476
{
	Function_203(&iLocal_429);
	return 1;
}

int Function_203(int iParam0) //Position: 0xADCB / 44491
{
	bool bVar0;
	var uVar1;
	
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(&iParam0))
		{
			uVar1 = GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(&uVar1), &uVar1);
			}
			bVar0++;
		}
		return 1;
	}
	return 0;
}

int Function_204() //Position: 0xAE14 / 44564
{
	struct<2> Var0;
	
	bLocal_414 = FIND_VOLUME_IN_LAYOUT(&uLocal_342, "tempcutscenevol");
	if (!IS_VOLUME_VALID(&bLocal_414))
	{
		bLocal_414 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_342, "tempcutscenevol", 2,802597E-45f, Vector(-2167,277f, 17,019f, 2593,75f), Vector(0.0f, 0.0f, 0.0f), Vector(4,5f, 5.0f, 4.0f));
	}
	Function_175(0, 0, 1, 1, 1, 1, 1, &bLocal_414, 1, 1, 1, 1, 0x3f800000, 0);
	Function_173(StackVal, &uLocal_342, Local_355, &bLocal_414, 0, 0.0f, 0.0f, 0.0f, 1, 1);
	if (!IS_ACTOR_HOGTIED(&iLocal_340))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_340, &bLocal_414))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_340, Vector(-2170,396f, 16,88f, 2592,72f), 301,374f, 0, 1, true);
		}
		ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_340, &bLocal_414);
	}
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&Global_99725[243] + 320), &Var0);
	uLocal_457 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var0, 4.0f, "p_gen_chair05x", 1);
	if (IS_PHYSINST_VALID(&uLocal_457))
	{
		HIDE_PHYSINST(&uLocal_457);
	}
	else
	{
		LOG_ERROR("Failed to hide chair2!");
	}
	return 1;
}

float Function_205(vector3 vParam0) //Position: 0xAF4F / 44879
{
	if (Function_226(&vParam0))
	{
		if (Function_206(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_206(int iParam0) //Position: 0xB01C / 45084
{
	return Function_55(iParam0, 2);
}

void Function_207(float fParam0) //Position: 0xB02A / 45098
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (IS_ACTOR_VALID(&fParam0) && !IS_ACTOR_HOGTIED(&fParam0))
	{
		Var0 = Vector(-2168,783f, 16,874f, 2588,506f);
		Var2 = Vector(0.0f, 167,97f, 0.0f);
		if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_409)))
		{
			uLocal_409 = CREATE_GRINGO_IN_LAYOUT(&uLocal_342, "gWeeping", "$/content/scripting/gringo/SimpleGringo/sit_headinhands_n_any", Var0, Var2);
		}
		MEMORY_CLEAR_ALL(&fParam0);
		CLEAR_LAST_HIT(&fParam0);
		uVar4 = Vector(-2170,625f, 16,88f, 2592,106f);
		if (!IS_ACTOR_HOGTIED(&fParam0))
		{
			bLocal_450 = TASK_SEQUENCE_OPEN();
			TASK_CLEAR(false);
			TASK_GO_NEAR_COORD(false, &uVar4, 3.0f, 1);
			TASK_FACE_ACTOR(0, &iLocal_338, 0, 3212836864);
			TASK_ACTION_PERFORM(false, "default_character_Main/AI_Taunt/TauntIdle/TauntC/TauntC");
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&uLocal_409), "UseCase1", 4294967295, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&fParam0, bLocal_450);
			TASK_SEQUENCE_RELEASE(bLocal_450, 1);
			TASK_PRIORITY_SET(&fParam0, true);
		}
	}
	return;
}

void Function_208() //Position: 0xB18B / 45451
{
	if (GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(&iLocal_340, bLocal_450) == 2)
	{
		if (iLocal_451 == 0)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_210();
				iLocal_451 = 1;
			}
		}
	}
	if (GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(&iLocal_340, bLocal_450) == 3)
	{
		if (iLocal_452 == 0)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_209();
				iLocal_452 = 1;
			}
		}
	}
	return;
}

void Function_209() //Position: 0xB1D7 / 45527
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Aband_BringsBakWife_v1_AA", "Aband_BringsBakWife_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Aband_BringsBakWife_v1_AB", "Aband_BringsBakWife_v1_AB", true, 1, 1, 0, 1);
		Function_117(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_210() //Position: 0xB273 / 45683
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Aband_SpotsHusband", "Aband_SpotsHusband", true, 1, 1, 0, 1);
		Function_117(6);
		START_SCRIPT_CONVERSATION(true, 0);
	}
	return;
}

bool Function_211(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xB2C0 / 45760
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
				SET_PLAYER_CONTROL(0, 0, &iParam1, &iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && iParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_214(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_213(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
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
				if (Function_213(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_212(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_212(&uVar5, &iVar3);
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

int Function_212(vector3 vParam0) //Position: 0xB4F5 / 46325
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_47(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_47(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_213(var uParam0, bool bParam1) //Position: 0xB56B / 46443
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_214(var uParam0, bool bParam1) //Position: 0xB58C / 46476
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
	else if (!&bParam1 || Function_213(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

void Function_215(struct<229> Param0) //Position: 0xB5F6 / 46582
{
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if (((!&bParam2 || Function_87(iParam1)) || Function_218(iParam1)) || iParam1 != &Param0 + 36)
		{
			REMOVE_BLIP(&Param0 + 272);
			REMOVE_BLIP(&Param0 + 280);
		}
	}
	else if (&bParam2)
	{
		if (Function_55(Global_99725[iParam143].f_228, 64) && iParam1 == &Param0 + 36)
		{
			Function_70(&Param0, iParam1);
		}
		if (!(Function_87(iParam1) || Function_218(iParam1)))
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
		if (!Function_55(Param0.f_228, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 320));
		}
		else
		{
			(&Param0 + 320) = "";
		}
		Function_217(&Param0 + 228, 32);
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
		Function_216(&Param0);
	}
	Function_217(&Param0 + 228, 256);
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
	if (IS_SCRIPT_VALID(&Param0 + 296) && uParam3)
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

void Function_216(struct<229> Param0) //Position: 0xB7F9 / 47097
{
	if (Function_55(Param0.f_228, 1))
	{
		STREAMING_EVICT_ACTOR(Param0.f_220, 4294967295);
		Function_217(&Param0 + 228, 1);
	}
	if (Function_55(Param0.f_228, 8))
	{
		REMOVE_STRING_TABLE("RandomCharMissions");
		Function_217(&Param0 + 228, 8);
	}
	if (Function_55(Param0.f_228, 2))
	{
		STREAMING_EVICT_GRINGO(&Param0 + 120);
		Function_217(&Param0 + 228, 2);
	}
	if (Function_55(Param0.f_228, 4))
	{
		STREAMING_EVICT_PROP(&Param0 + 128);
		Function_217(&Param0 + 228, 4);
	}
	return;
}

void Function_217(int iParam0, int iParam1) //Position: 0xB888 / 47240
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

int Function_218(int iParam0) //Position: 0xB89E / 47262
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_219(struct<265> Param0) //Position: 0xB8B3 / 47283
{
	if (!Param0.f_260 != 0)
	{
		if (Function_82(&Param0 + 260, 4))
		{
			if (!Function_81(iParam1))
			{
				return 0;
			}
		}
		if (Function_82(&Param0 + 260, 1))
		{
			if (&Global_99725[Param0.f_25643] + 36 != &Global_99725[iParam143] + 36 || iParam3)
			{
				if (!Function_87(Param0.f_256))
				{
					return 0;
				}
			}
		}
		if (Function_82(&Param0 + 260, 2) && Global_6606)
		{
			if (!Function_91(Param0.f_264, 0))
			{
				return 0;
			}
		}
		if (Function_82(&Param0 + 260, 8) && Global_6606)
		{
			if (!Function_221(Param0.f_252, 0))
			{
				return 0;
			}
		}
		if (!&bParam2)
		{
			return 1;
		}
		return Function_220(&Param0);
	}
	return 1;
}

int Function_220(struct<261> Param0) //Position: 0xB97F / 47487
{
	if (!Param0.f_260 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_82(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_82(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_82(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_82(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_82(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_82(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_221(int iParam0, bool bParam1) //Position: 0xBA3A / 47674
{
	if (!Function_76(iParam0))
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

void Function_222(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xBA71 / 47729
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_161(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

void Function_223() //Position: 0xBAFC / 47868
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Aband_RuffsHimUp_v1_AA1", "Aband_RuffsHimUp_v1_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Aband_RuffsHimUp_v1_AA2", "Aband_RuffsHimUp_v1_AA2", false, 1, 0, 0, 1);
		Function_117(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_224(int iParam0) //Position: 0xBB90 / 48016
{
	int iVar0;
	
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	ENABLE_USE_CONTEXTS(0);
	iVar0 = Global_39922.f_88 & 16384;
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	if (IS_ACTOR_VALID(&iParam0 + 312))
	{
		SET_ACTOR_INVULNERABILITY(&iParam0 + 312, true);
		MEMORY_CLEAR_EVENTS(&iParam0 + 312, 1);
	}
	SET_ACTOR_INVULNERABILITY(&Global_54076, true);
	return;
}

void Function_225(int iParam0) //Position: 0xBBE4 / 48100
{
	if (!Function_226(&iParam0))
	{
		Function_153(&iParam0, 0.0f);
	}
	return;
}

bool Function_226(bool bParam0) //Position: 0xBBFB / 48123
{
	return Function_55(bParam0, 1);
}

void Function_227(var uParam0, int iParam1) //Position: 0xBC09 / 48137
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_228(StackVal, &uParam0, Var0);
	return;
}

void Function_228(var uParam0, struct<2> Param1) //Position: 0xBC25 / 48165
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_229(&uParam0, &uParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_229(GET_MOUNT(&uParam0), &uParam0, Param1), 1);
	}
	return;
}

var Function_229(var uParam0, struct<2> Param1) //Position: 0xBC60 / 48224
{
	struct<2> Var0;
	
	Function_235(&uParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_235(&uParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

void Function_230() //Position: 0xBCE1 / 48353
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Aband_Pay4Info", "Aband_Pay4Info", true, 1, 1, 0, 1);
		Function_117(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_231() //Position: 0xBD26 / 48422
{
	return Function_24(0);
}

bool Function_232(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBD30 / 48432
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
	if (IS_ACTOR_BEING_DRAGGED(&bParam0, 0,3f))
	{
		return 1;
	}
	if (Function_156(&bParam0))
	{
		return 1;
	}
	if (Function_151(&bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&bParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bParam0)))
	{
		return 1;
	}
	if (Function_233())
	{
		return 1;
	}
	return 0;
}

bool Function_233() //Position: 0xBDF4 / 48628
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

void Function_234() //Position: 0xBE0B / 48651
{
	if (IS_ACTOR_VALID(&iLocal_340))
	{
		if (!IS_ACTOR_ALIVE(&iLocal_340) || IS_ACTOR_DEAD(&iLocal_340))
		{
			Function_139();
		}
		if (Global_116927[26].f_28 == 0)
		{
			if (Function_9(&Global_54076, &iLocal_340, 1, 0, 0, 3212836864))
			{
				Function_139();
			}
		}
	}
	return;
}

struct<8> Function_235(int iParam0) //Position: 0xBE57 / 48727
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_236() //Position: 0xBE69 / 48745
{
	if (GATEWAY_UPDATE(&Global_99725[243] + 288))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[243] + 304) && !Function_232(&Global_54076, 0, 1))
		{
			iLocal_445 = 2;
		}
		else if (((!IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[243] + 304) && HAS_STRING_TABLE_LOADED("RandomCharMissions")) && IS_LAYOUTREF_VALID(&uLocal_342)) && !Function_232(&Global_54076, 0, 1))
		{
			if (Global_116927[26].f_28 != 0 || Global_116927[26].f_28 != 1)
			{
				(&Global_99725[243] + 304) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("abandoned3a_QU", GATEWAY_GET_VOLUME(&Global_99725[243] + 288), 30, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
			}
			else if (Global_116927[26].f_28 == 2)
			{
				*(&Global_99725[243] + 304) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("abandoned3_QU", GATEWAY_GET_VOLUME(&Global_99725[243] + 288), 30, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
			}
		}
	}
	else if (Function_232(&Global_54076, 0, 1) && IS_SCRIPT_USE_CONTEXT_VALID(&Global_99725[243] + 304))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Global_99725[243] + 304);
	}
	return;
}

void Function_237() //Position: 0xBFC2 / 49090
{
	var uVar0;
	
	Function_238(4, 1);
	uVar0 = &uVar0;
	iLocal_446 = CREATE_LAYOUT("Abandoned_layout");
	return;
}

void Function_238(int iParam0, int iParam1) //Position: 0xBFED / 49133
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

int Function_239(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4) //Position: 0xC042 / 49218
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
					uVar2 = Function_241(StackVal, GET_ASSET_NAME(&iParam0 + 136, 9), &uVar1, *(&iParam0 + 184), 0, &fParam2, &fParam3, 2, 1, 2, 2, 0, 1);
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
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_240(&iParam0));
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
						uVar6 = Function_241(StackVal, GET_ASSET_NAME(&iParam0 + 136, 9), &iVar3, *(&iParam0 + 184), 0, &fParam2, &fParam3, 2, 1, 2, 2, 0, 1);
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

int Function_240(struct<257> Param0) //Position: 0xC1CD / 49613
{
	if (Param0.f_256 != 4294967295)
	{
		if (Global_116927[Param0.f_2566].f_36 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_240(&(Global_99725[Param0.f_25643]));
	}
	return 0;
}

int Function_241(var uParam0, int iParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0xC209 / 49673
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_244(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_245()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
				if (!Function_47(StackVal, Var16))
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
					Function_242();
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
	else if ((!Function_244(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_245()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		iParam1 = 0;
	}
	else if (!Function_244(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_242() //Position: 0xC471 / 50289
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
			Function_243(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_243(char* cParam0) //Position: 0xC4C5 / 50373
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

bool Function_244(var uParam0, struct<2> Param1, float fParam3) //Position: 0xC5EE / 50670
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_67(&uParam0);
		if (VDIST(Function_67(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_245() //Position: 0xC67A / 50810
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_246() //Position: 0xC689 / 50825
{
	float fVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&iLocal_340))
	{
		if (!IS_OBJECT_VALID(&iLocal_399))
		{
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_340, true);
			fVar0 = Global_99725[243].f_180;
			iLocal_399 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &uLocal_342, "Abandoned_WifeGateway", Local_426, Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, 6, Global_99725[243].f_176, 0, 1, 1);
			uVar1 = GATEWAY_GET_MARKER(&iLocal_399);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DESTROY_OBJECT(&uVar1);
			}
		}
	}
	return;
}

void Function_247() //Position: 0xC718 / 50968
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iLocal_340))
	{
		if (Global_116927[26].f_28 != 0 || Global_116927[26].f_28 != 1)
		{
			TASK_STAND_STILL(&iLocal_340, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&iLocal_340, 2);
			SET_RCM_ACTOR_CALL_OVER_ENABLE(&iLocal_340, 1, 0, true, 0, 1, 2, 1101004800, 1088421888, 1);
			if (IS_OBJECT_VALID(&uLocal_401))
			{
				if (!IS_BLIP_VALID(&uLocal_412))
				{
					uLocal_412 = ADD_BLIP_FOR_ACTOR(&iLocal_340, 325, 0, 2, 0);
					SET_BLIP_NAME(&uLocal_412, GET_ACTOR_ENUM_STRING_FROM_ENUM(334));
					SET_BLIP_MAX_DISTANCE(&uLocal_412, fLocal_344);
				}
				TASK_USE_GRINGO(&iLocal_340, GET_GRINGO_FROM_OBJECT(&uLocal_401), "UseCase1", 4294967295, 1);
				iLocal_349 = 1;
			}
		}
		else if (Global_116927[26].f_28 == 2)
		{
			Var0 = Vector(-2168,783f, 16,874f, 2588,506f);
			Var2 = Vector(0.0f, 167,97f, 0.0f);
			uLocal_409 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_NAME("gWeeping", &Var0, 2.0f, 0));
			if (!iLocal_348)
			{
				if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_409)))
				{
					uLocal_409 = CREATE_GRINGO_IN_LAYOUT(&uLocal_342, "gWeeping", "$/content/scripting/gringo/SimpleGringo/sit_headinhands_n_any", Var0, Var2);
				}
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_409)))
				{
					TASK_USE_GRINGO(&iLocal_340, GET_GRINGO_FROM_OBJECT(&uLocal_409), "UseCase1", 4294967295, 1);
					iLocal_348 = 1;
				}
			}
			iLocal_349 = 1;
		}
	}
	return;
}

void Function_248() //Position: 0xC8B2 / 51378
{
	if (!IS_ACTOR_VALID(&iLocal_340))
	{
		if (Global_116927[26].f_28 != 0 || Global_116927[26].f_28 != 1)
		{
			iLocal_340 = FIND_ACTOR_IN_LAYOUT(&uLocal_342, "MusicianWife");
			if (!IS_ACTOR_VALID(&iLocal_340))
			{
				iLocal_340 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_342, "MusicianWife", 334, Vector(-2169,244f, 16,909f, 2624,381f), Vector(0.0f, 18,78f, 0.0f));
				AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_340, "GUN_POINTED_AT", "DONT_HIT_ME");
				DECOR_SET_BOOL(&iLocal_340, "Hogtie_NoCripple", true);
			}
		}
		else if (Global_116927[26].f_28 == 2)
		{
			iLocal_340 = FIND_ACTOR_IN_LAYOUT(&uLocal_342, "MusicianWife");
			if (!IS_ACTOR_VALID(&iLocal_340))
			{
				iLocal_340 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_342, "MusicianWife", 334, Vector(-2168,419f, 16,878f, 2589,199f), Vector(0.0f, 18,78f, 0.0f));
				AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_340, "GUN_POINTED_AT", "DONT_HIT_ME");
			}
		}
	}
	return;
}

var Function_249() //Position: 0xCA09 / 51721
{
	var uVar0;
	
	return &uVar0;
}

void Function_250() //Position: 0xCA12 / 51730
{
	if (IS_ACTOR_VALID(&iLocal_338))
	{
		if (ACTORS_IN_RANGE(&Global_54076, &iLocal_338, 20.0f))
		{
			iLocal_347 = 0;
			iLocal_346 = 1;
			if (&Global_99725[243] + 136 != GET_ASSET_ID("$/cutscene/RCM_04_CS03_b/RCM_04_CS03_b", 9))
			{
				*(&Global_99725[243] + 136) = GET_ASSET_ID("$/cutscene/RCM_04_CS03_b/RCM_04_CS03_b", 9);
			}
			if (!Function_251(StackVal, StackVal, *(&Global_99725[243] + 184), Local_355))
			{
				*(&Global_99725[243] + 184) = Local_355;
			}
		}
	}
	if (IS_ACTOR_VALID(&iLocal_340))
	{
		if (ACTORS_IN_RANGE(&Global_54076, &iLocal_340, 20.0f))
		{
			iLocal_347 = 1;
			iLocal_346 = 0;
			if (&Global_99725[243] + 136 != GET_ASSET_ID("$/cutscene/RCM_04_CS04/RCM_04_CS04", 9))
			{
				*(&Global_99725[243] + 136) = GET_ASSET_ID("$/cutscene/RCM_04_CS04/RCM_04_CS04", 9);
			}
			if (!Function_251(StackVal, StackVal, *(&Global_99725[243] + 184), Local_358))
			{
				*(&Global_99725[243] + 184) = Local_358;
			}
		}
	}
	return;
}

bool Function_251(struct<2> Param0, struct<2> Param2) //Position: 0xCB8C / 52108
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_252(struct<2>[] Param0) //Position: 0xCBB8 / 52152
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_256();
	iVar1 = 0;
	if (!Function_7(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_255(&(Param0[iVar02]), 8);
		}
		else if (Function_254())
		{
			iVar1 = 1;
			Function_255(&(Param0[iVar02]), 8);
		}
		Function_255(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_7(&(Param0[iVar02]), 4))
		{
			if (!Function_7(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_7(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_7(&(Param0[02]), 8) || iVar1));
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
				Function_255(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_7(&(Param0[iVar02]), 4))
		{
			if (!Function_7(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_255(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_255(&(Param0[iVar02]), 2);
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
							Function_255(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_255(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_255(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_255(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_255(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_255(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_255(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_255(&(Param0[iVar02]), 2);
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
	Function_253();
	return 1;
}

void Function_253() //Position: 0xCF7A / 53114
{
	if (!Function_85(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_254() //Position: 0xCFBA / 53178
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

void Function_255(struct<13> Param0) //Position: 0xCFE8 / 53224
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_256() //Position: 0xCFFB / 53243
{
	if (!Function_85(128))
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

void Function_257() //Position: 0xD03D / 53309
{
	int iVar0;
	
	iVar0 = GET_OBJECT_OWNER(&iLocal_338);
	if (GET_OBJECT_TYPE(&iVar0) == 1)
	{
		if (GET_LAYOUT_FROM_OBJECT(&iVar0) == GET_GC_LAYOUT())
		{
			GIVE_OBJECT_TO_LAYOUT(&iLocal_338, &uLocal_342);
		}
	}
	return;
}

var Function_258(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD06F / 53359
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_7(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_255(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_255(&(Param0[iVar02]), 8);
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

var Function_259(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xD14B / 53579
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_260(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_255(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_260(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xD189 / 53641
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_7(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_255(&(Param0[iVar02]), 4);
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

