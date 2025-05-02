//Decompiled with MagicRDR v1.0
//Function Count : 85
//Statics Count : 419
//Natives Count : 115
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 29;
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
	var uLocal_126 = 5;
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
	var uLocal_160 = 6;
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
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 6;
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
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	vector3 vLocal_366[8] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
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
	int iLocal_416 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_228 = 0;
	Function_84("Initializing BenedictPoint", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_229 = 1000;
		switch (iLocal_228)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_228 = 1;
				}
				iLocal_229 = 0;
				break;
			
			case 0x00000001:
				Function_83();
				if (Function_83())
				{
					iLocal_228 = 2;
				}
				iLocal_229 = 0;
				break;
			
			case 0x00000002:
				if (Function_74())
				{
					Function_73(&(Global_43791[iScriptParam_0]), 32);
					Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "smoking_stand4"), 1, 0, 0, 0, 0, 1);
					vLocal_366[03] = { StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "smoking_stand4"), 1, 0, 0, 0, 0, 1) };
					Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "rand_idle_stand3"), 1, 0, 0, 0, 0, 1);
					vLocal_366[13] = { StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "rand_idle_stand3"), 1, 0, 0, 0, 0, 1) };
					Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "smoking_stand5"), 1, 0, 0, 0, 0, 1);
					vLocal_366[23] = { StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "smoking_stand5"), 1, 0, 0, 0, 0, 1) };
					Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "rand_idle_stand4"), 1, 0, 0, 0, 0, 1);
					vLocal_366[33] = { StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "rand_idle_stand4"), 1, 0, 0, 0, 0, 1) };
					Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "rand_idle_stand"), 1, 0, 0, 0, 0, 1);
					vLocal_366[43] = { StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "rand_idle_stand"), 1, 0, 0, 0, 0, 1) };
					Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "rand_idle_stand1"), 1, 0, 0, 0, 0, 1);
					vLocal_366[53] = { StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "rand_idle_stand1"), 1, 0, 0, 0, 0, 1) };
					Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "rand_idle_stand2"), 1, 0, 0, 0, 0, 1);
					vLocal_366[63] = { StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "rand_idle_stand2"), 1, 0, 0, 0, 0, 1) };
					Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "smoking_stand3"), 1, 0, 0, 0, 0, 1);
					vLocal_366[73] = { StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(&iLocal_4, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(&iLocal_4, "smoking_stand3"), 1, 0, 0, 0, 0, 1) };
					iLocal_228 = 3;
				}
				iLocal_229 = 0;
				break;
			
			case 0x00000003:
				uLocal_230 = LAUNCH_NEW_SCRIPT_WITH_ARGS("BenedictPointVol", &iScriptParam_0, 2, 0);
				Function_71(&Global_11492, &Global_13504, iScriptParam_0);
				iLocal_228 = 5;
				iLocal_229 = 0;
				break;
			
			case 0x00000005:
				if (Function_70(&Global_11492, &Global_13504, iScriptParam_0))
				{
					iLocal_228 = 4;
					iLocal_229 = 0;
				}
				else
				{
					iLocal_229 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_69(&(Global_43791[iScriptParam_0]), 16) && Function_68(Global_44085[iScriptParam_09]))
				{
					iLocal_228 = 6;
				}
				iLocal_229 = 0;
				break;
			
			case 0x00000006:
				Function_67(StackVal, 0, &uLocal_232, Vector(-3670,093f, 8,523827f, 3488,652f));
				Function_66(StackVal, 0, &uLocal_232, Vector(-3668,473f, 8,477f, 3487,929f));
				Function_65(StackVal, 0, &uLocal_232, Vector(-3675,749f, 8,641f, 3472,471f));
				Function_64(StackVal, 0, &uLocal_232, Vector(-3673,7f, 8,2f, 3492,07f));
				Function_63(StackVal, 0, &uLocal_232, Vector(-3675,749f, 8,641f, 3472,471f));
				Function_61(StackVal, 0, &uLocal_232, Vector(-3670,093f, 8,523827f, 3488,652f));
				Function_60(0, &uLocal_232, &iLocal_0);
				Function_67(StackVal, 1, &uLocal_232, Vector(-3691,454f, 9,528f, 3468,583f));
				Function_66(StackVal, 1, &uLocal_232, Vector(-3691,454f, 9,528f, 3468,583f));
				Function_65(StackVal, 1, &uLocal_232, Vector(-3691,454f, 9,528f, 3468,583f));
				Function_64(StackVal, 1, &uLocal_232, Vector(-3691,454f, 9,528f, 3468,583f));
				Function_63(StackVal, 1, &uLocal_232, Vector(-3691,454f, 9,528f, 3468,583f));
				Function_61(StackVal, 1, &uLocal_232, Vector(-3689,972f, 9,528f, 3475,234f));
				Function_60(1, &uLocal_232, &iLocal_0);
				Function_67(StackVal, 2, &uLocal_232, Vector(-3674,631f, 8,589f, 3474,862f));
				Function_66(StackVal, 2, &uLocal_232, Vector(-3676.0f, 8,031f, 3504.0f));
				Function_65(StackVal, 2, &uLocal_232, Vector(-3674,631f, 8,589f, 3474,862f));
				Function_64(StackVal, 2, &uLocal_232, Vector(-3676.0f, 8,031f, 3504.0f));
				Function_63(StackVal, 2, &uLocal_232, Vector(-3674,631f, 8,589f, 3474,862f));
				Function_61(StackVal, 2, &uLocal_232, Vector(-3693,607f, 9,564f, 3478,512f));
				Function_60(2, &uLocal_232, &iLocal_0);
				Function_67(StackVal, 3, &uLocal_232, Vector(-3689,972f, 9,528f, 3475,234f));
				Function_66(StackVal, 3, &uLocal_232, Vector(-3688,035f, 9,545f, 3486,639f));
				Function_65(StackVal, 3, &uLocal_232, Vector(-3674,998f, 8,59f, 3478,161f));
				Function_64(StackVal, 3, &uLocal_232, Vector(-3683,665f, 8,03f, 3501,79f));
				Function_63(StackVal, 3, &uLocal_232, Vector(-3674,998f, 8,59f, 3478,161f));
				Function_61(StackVal, 3, &uLocal_232, Vector(-3674,998f, 8,59f, 3478,161f));
				Function_60(3, &uLocal_232, &iLocal_0);
				Function_67(StackVal, 4, &uLocal_232, Vector(-3696,777f, 9,535f, 3468,551f));
				Function_66(StackVal, 4, &uLocal_232, Vector(-3666,007f, 8,15f, 3467,476f));
				Function_65(StackVal, 4, &uLocal_232, Vector(-3676,992f, 8,352f, 3481,176f));
				Function_64(StackVal, 4, &uLocal_232, Vector(-3696,777f, 9,535f, 3468,551f));
				Function_63(StackVal, 4, &uLocal_232, Vector(-3676,992f, 8,352f, 3481,176f));
				Function_61(StackVal, 4, &uLocal_232, Vector(-3666,333f, 8,373f, 3486,487f));
				Function_60(4, &uLocal_232, &iLocal_0);
				Function_67(StackVal, 5, &uLocal_232, Vector(-3678,17f, 8,6f, 3475,53f));
				Function_66(StackVal, 5, &uLocal_232, Vector(-3696,974f, 9,532f, 3480,718f));
				Function_65(StackVal, 5, &uLocal_232, Vector(-3696,974f, 9,532f, 3480,718f));
				Function_64(StackVal, 5, &uLocal_232, Vector(-3696,974f, 9,532f, 3480,718f));
				Function_63(StackVal, 5, &uLocal_232, Vector(-3678,17f, 8,6f, 3475,53f));
				Function_61(StackVal, 5, &uLocal_232, Vector(-3666,333f, 8,373f, 3486,487f));
				Function_60(5, &uLocal_232, &iLocal_0);
				Function_55(&Global_11492, &Global_13504, &uLocal_232, &Global_10996, iScriptParam_0);
				if (Function_69(&(Global_43791[iScriptParam_0]), 256) || !Function_54(2))
				{
					iLocal_416 = 1;
				}
				Function_53(&iLocal_4 + 776, GET_OBJECT_FROM_PERS_CHAR(&Global_13504[03] + 16));
				Function_53(&iLocal_4 + 888, GET_OBJECT_FROM_PERS_CHAR(&Global_13504[13] + 16));
				Function_73(&(Global_43791[iScriptParam_0]), 8);
				if (Function_69(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_52(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_228 = 10;
				}
				else
				{
					iLocal_228 = 7;
				}
				iLocal_229 = 0;
				break;
			
			case 0x00000007:
				Function_51(iScriptParam_0);
				Function_45(iScriptParam_0);
				iLocal_228 = 8;
				iLocal_229 = 0;
				break;
			
			case 0x00000008:
				if (Function_40(iScriptParam_0, &Global_11492, iLocal_416))
				{
					Function_36(0, 0,1f, 4, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
					Function_32(2, 4294967295, 4294967295, 0, 3);
					Function_29(&iLocal_0);
				}
				else
				{
					Function_36(1, 0,5f, 4, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
					Function_28(64);
					Function_32(0, 8, 4, 6, 3);
					Function_29(&iLocal_0);
				}
				Function_73(&(Global_43791[iScriptParam_0]), 512);
				iLocal_228 = 9;
				iLocal_229 = 0;
				break;
			
			case 0x00000009:
				Function_26(&iLocal_0, iScriptParam_0);
				Function_73(&(Global_43791[iScriptParam_0]), 4);
				Function_25("Finished Initializing BenedictPoint", 5.0f);
				iLocal_228 = 10;
				iLocal_229 = 0;
				break;
			
			case 0x0000000A:
				Function_21(&vLocal_366);
				if (Function_69(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_228 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_229);
	}
	Function_11(&Global_11492, &Global_13504, iScriptParam_0, (iLocal_416 || Global_6623));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_28(64);
	Function_52(&(Global_43791[iScriptParam_0]), 32);
	Function_52(&(Global_43791[iScriptParam_0]), 64);
	Function_52(&(Global_43791[iScriptParam_0]), 8);
	Function_52(&(Global_43791[iScriptParam_0]), 512);
	Function_52(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_230))
	{
		TERMINATE_SCRIPT(&uLocal_230);
	}
	Function_25("Unloaded BenedictPoint", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x8BC / 2236
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

void Function_2(int iParam0) //Position: 0x8F2 / 2290
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x914 / 2324
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x92A / 2346
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x940 / 2368
{
	Function_6(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_6(int iParam0) //Position: 0x953 / 2387
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x97B / 2427
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

void Function_8(struct<13> Param0) //Position: 0xAC6 / 2758
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0xAE3 / 2787
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0xB01 / 2817
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xB0D / 2829
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
	strcpy(&cVar0, Function_20(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_69(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_52(&(Global_43791[bParam2]), 0x40000000);
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
	if (!Function_69(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_54(2) || Function_69(&(Global_43791[bParam2]), 256))
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
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_73(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0xD2B / 3371
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
		if (!Function_17(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_17(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xE91 / 3729
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

int Function_14(int iParam0) //Position: 0xEBC / 3772
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

void Function_15(var uParam0, int iParam1) //Position: 0xEF0 / 3824
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0xF01 / 3841
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0xF1B / 3867
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0xF38 / 3896
{
	if (Function_19(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_19(var uParam0, int iParam1) //Position: 0xF53 / 3923
{
	return (uParam0 && iParam1) == 0;
}

var Function_20(int iParam0) //Position: 0xF60 / 3936
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

void Function_21(vector3[] vParam0) //Position: 0x140E / 5134
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
				Function_24(&vParam0[bVar03] + 16, 64);
				if (Function_19(vParam0[bVar03].f_16, 2))
				{
					Function_23(StackVal, StackVal, vParam0[bVar03], "1.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				else
				{
					Function_23(StackVal, StackVal, vParam0[bVar03], "2.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				if (Function_19(vParam0[bVar03].f_16, 4) && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
				{
					Function_23(StackVal, StackVal, vParam0[bVar03], "3.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_23(StackVal, StackVal, vParam0[bVar03], "4.parent.SWITCHING ON: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
			{
				if (Function_19(vParam0[bVar03].f_16, 16))
				{
					Function_22(&vParam0[bVar03] + 16, 64);
				}
				else if (Function_19(vParam0[bVar03].f_16, 32))
				{
					Function_23(StackVal, StackVal, vParam0[bVar03], "5.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					Function_22(&vParam0[bVar03] + 16, 64);
				}
				else
				{
					Function_22(&vParam0[bVar03] + 16, 64);
				}
				if (Function_19(vParam0[bVar03].f_16, 2))
				{
					Function_23(StackVal, StackVal, vParam0[bVar03], "6.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				if (Function_19(vParam0[bVar03].f_16, 4))
				{
					Function_23(StackVal, StackVal, vParam0[bVar03], "7.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
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
						if (Function_19(vParam0[iVar13].f_16, 64))
						{
							Function_23(StackVal, StackVal, vParam0[bVar03], "8.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_23(StackVal, StackVal, vParam0[bVar03], "8b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
					else if (Function_19(vParam0[bVar03].f_16, 64) && Function_19(vParam0[bVar03].f_16, 16))
					{
						Function_23(StackVal, StackVal, vParam0[bVar03], "11b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
					else
					{
						Function_22(&vParam0[bVar03] + 16, 64);
						if (Function_19(vParam0[bVar03].f_16, 1))
						{
							Function_23(StackVal, StackVal, vParam0[bVar03], "12b.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_23(StackVal, StackVal, vParam0[bVar03], "13b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
				}
				else if (Function_19(vParam0[bVar03].f_16, 64) && Function_19(vParam0[bVar03].f_16, 16))
				{
					Function_23(StackVal, StackVal, vParam0[bVar03], "11.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_22(&vParam0[bVar03] + 16, 64);
					if (Function_19(vParam0[bVar03].f_16, 1))
					{
						Function_23(StackVal, StackVal, vParam0[bVar03], "12.parent.SWITCHING ON: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
					}
					else
					{
						Function_23(StackVal, StackVal, vParam0[bVar03], "13.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
				}
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] + 8 == &vParam0[iVar13])
					{
					}
					else if (Function_19(vParam0[bVar03].f_16, 64))
					{
						if (Function_19(vParam0[bVar03].f_16, 32))
						{
							Function_23(StackVal, StackVal, vParam0[bVar03], "14b.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
						}
						else
						{
							Function_23(StackVal, StackVal, vParam0[bVar03], "14.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
						}
					}
					else if (Function_19(vParam0[bVar03].f_16, 8))
					{
						Function_23(StackVal, StackVal, vParam0[bVar03], "15.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
					}
					else
					{
						Function_23(StackVal, StackVal, vParam0[bVar03], "16.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
						Function_22(&vParam0[bVar03] + 16, 64);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					}
				}
				else if (Function_19(vParam0[bVar03].f_16, 64))
				{
					Function_23(StackVal, StackVal, vParam0[bVar03], "17.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else if (Function_19(vParam0[bVar03].f_16, 8))
				{
					Function_23(StackVal, StackVal, vParam0[bVar03], "18.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else
				{
					Function_22(&vParam0[bVar03] + 16, 64);
					Function_23(StackVal, StackVal, vParam0[bVar03], "19.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
			}
		}
		if (Function_19(vParam0[bVar03].f_16, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x1C3E / 7230
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_23(struct<17> Param0) //Position: 0x1C54 / 7252
{
	if (Function_19(Param0.f_16, 128))
	{
		PRINTSTRING(&uParam3);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(&uParam4)));
		PRINTNL();
	}
}

void Function_24(var uParam0, int iParam1) //Position: 0x1C7D / 7293
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_25(char* cParam0) //Position: 0x1C8E / 7310
{
	if (!Function_54(128))
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

void Function_26(int iParam0, bool bParam1) //Position: 0x1CCE / 7374
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
		Function_27(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x1DBE / 7614
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_28(int iParam0) //Position: 0x1DCB / 7627
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_29(int iParam0) //Position: 0x1DDE / 7646
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_31(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_30(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_30(var uParam0) //Position: 0x1EDA / 7898
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_31() //Position: 0x1EF7 / 7927
{
	int iVar0;
	
	return &iVar0;
}

void Function_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1F00 / 7936
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
		Function_33();
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

void Function_33() //Position: 0x1FEE / 8174
{
	int iVar0;
	
	Global_41176 = Function_34(StackVal);
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

int Function_34(int iParam0) //Position: 0x203C / 8252
{
	if (!Function_35(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_35(bool bParam0) //Position: 0x2054 / 8276
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_36(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x2069 / 8297
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
		Function_39();
	}
	if (&bParam5)
	{
		Function_37(1048576);
	}
}

void Function_37(int iParam0) //Position: 0x2177 / 8567
{
	Function_38(&Global_43580, iParam0);
	return;
}

void Function_38(var uParam0, var uParam1) //Position: 0x2185 / 8581
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_39() //Position: 0x21A4 / 8612
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_37(16384);
	}
	return;
}

bool Function_40(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x21C0 / 8640
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_69(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_41(49, 0))
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

int Function_41(var uParam0, bool bParam1) //Position: 0x227E / 8830
{
	int iVar0;
	
	iVar0 = Function_43(uParam0);
	if (!Function_42(iVar0))
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

bool Function_42(int iParam0) //Position: 0x22BC / 8892
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_43(int iParam0) //Position: 0x22D3 / 8915
{
	if (!Function_44(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_44(int iParam0) //Position: 0x22ED / 8941
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_45(int iParam0) //Position: 0x2303 / 8963
{
	Function_47(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_46(&Global_27462[3352] + 188, 2, 0);
	return;
}

void Function_46(struct<149> Param0) //Position: 0x2366 / 9062
{
	Param0.f_148 = iParam1;
	(&Param0 + 148)->f_4 = &fParam2;
	return;
}

void Function_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x237D / 9085
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_48(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &uParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_48(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x23C4 / 9156
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
	if (!Function_18())
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
					bVar2 = Function_50(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_49(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_50(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_49(int iParam0, int iParam1) //Position: 0x2782 / 10114
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_50(int iParam0) //Position: 0x27A5 / 10149
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_51(int iParam0) //Position: 0x27BC / 10172
{
	Function_47(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_46(&Global_27462[3652] + 188, 1, 0);
	return;
}

void Function_52(var uParam0, int iParam1) //Position: 0x2823 / 10275
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_53(var uParam0, int iParam1) //Position: 0x283D / 10301
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uParam0)), &iParam1);
		}
		iVar0++;
	}
	return;
}

bool Function_54(int iParam0) //Position: 0x288A / 10378
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x28A6 / 10406
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_54(2))
	{
		return;
	}
	if (Function_69(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_17(&(Param0[iVar02]), 2))
		{
			if (Function_56(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_52(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_73(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_56(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x295E / 10590
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_69(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(&iParam0, 2))
	{
		return 1;
	}
	if (Function_17(&iParam0, 4))
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
		(&iParam1 + 16) = Function_59(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_58(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(&iParam0, 4);
	}
	Function_57(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_57(int iParam0, struct<2> Param1) //Position: 0x2ADF / 10975
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_58(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_58(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_58(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_58(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_58(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_58(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

bool Function_58(vector3 vParam0) //Position: 0x2C25 / 11301
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_59(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x2C3D / 11325
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_31(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_60(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x2D64 / 11620
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

void Function_61(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2DC3 / 11715
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_62(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_62(struct<2> Param0, struct<2> Param2) //Position: 0x2E2A / 11818
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_63(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2E56 / 11862
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_62(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_64(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2EBF / 11967
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_62(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_65(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2F2A / 12074
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_62(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_66(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2F90 / 12176
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_62(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_67(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2FF9 / 12281
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_62(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

int Function_68(int iParam0) //Position: 0x305D / 12381
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_69(&(Global_43791[iParam0]), 4);
}

bool Function_69(var uParam0, int iParam1) //Position: 0x3079 / 12409
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_70(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x3096 / 12438
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
	strcpy(&cVar1, Function_20(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_69(&(Global_43791[iParam2]), 0x40000000))
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

void Function_71(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x317F / 12671
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
	strcpy(&cVar1, Function_20(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_69(&(Global_43791[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_73(&(Global_43791[bParam2]), 0x40000000);
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

vector3 Function_72(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x326F / 12911
{
	vector3 vVar0;
	
	vVar0 = GET_GRINGO_FROM_OBJECT(&uParam0);
	*(&vVar0 + 8) = GET_GRINGO_FROM_OBJECT(&bParam1);
	if (bParam2)
	{
		Function_24(&vVar0 + 16, 1);
	}
	else
	{
		Function_22(&vVar0 + 16, 1);
	}
	if (bParam3)
	{
		Function_24(&vVar0 + 16, 2);
	}
	else
	{
		Function_22(&vVar0 + 16, 2);
	}
	if (bParam4)
	{
		Function_24(&vVar0 + 16, 4);
	}
	else
	{
		Function_22(&vVar0 + 16, 4);
	}
	if (bParam5)
	{
		Function_24(&vVar0 + 16, 8);
	}
	else
	{
		Function_22(&vVar0 + 16, 8);
	}
	if (bParam6)
	{
		Function_24(&vVar0 + 16, 16);
	}
	else
	{
		Function_22(&vVar0 + 16, 16);
	}
	if (bParam7)
	{
		Function_24(&vVar0 + 16, 32);
	}
	else
	{
		Function_22(&vVar0 + 16, 32);
	}
	Function_22(&vVar0 + 16, 64);
	Function_22(&vVar0 + 16, 128);
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_73(var uParam0, int iParam1) //Position: 0x333C / 13116
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_74() //Position: 0x334D / 13133
{
	var uVar0;
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
	
	Function_82(3, 3);
	uVar0 = &uVar0;
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_camp_coffee_drink", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_80(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	if (!Function_75(&iLocal_4 + 8))
	{
		return 0;
	}
	iLocal_4 = FIND_NAMED_LAYOUT("BenedictPoint_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("BenedictPoint_layout");
	}
	*(&iLocal_4 + 480) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp1Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 488[03]) = Vector(-3666,808f, 8,477426f, 3492,548f);
	*(&iLocal_4 + 488[03] + 12) = Vector(0.0f, -73,62263f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sweep1_1", Vector(-3666,808f, 8,477426f, 3492,548f), Vector(0.0f, -73,62263f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 480);
	*(&iLocal_4 + 488[13]) = Vector(-3670,099f, 8,477426f, 3491,183f);
	*(&iLocal_4 + 488[13] + 12) = Vector(0.0f, -85,37915f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sweep2_1", Vector(-3670,099f, 8,477426f, 3491,183f), Vector(0.0f, -85,37915f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 480);
	*(&iLocal_4 + 488[23]) = Vector(-3668,194f, 8,477426f, 3488,091f);
	*(&iLocal_4 + 488[23] + 12) = Vector(0.0f, -50,30165f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sweep3_1", Vector(-3668,194f, 8,477426f, 3488,091f), Vector(0.0f, -50,30165f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 480);
	*(&iLocal_4 + 488[33]) = Vector(-3667,732f, 8,477426f, 3490,5f);
	*(&iLocal_4 + 488[33] + 12) = Vector(0.0f, -5,801308f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sweep4_1", Vector(-3667,732f, 8,477426f, 3490,5f), Vector(0.0f, -5,801308f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 480);
	*(&iLocal_4 + 488[43]) = Vector(-3667,147f, 8,477426f, 3491,735f);
	*(&iLocal_4 + 488[43] + 12) = Vector(0.0f, -74,1232f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "done_1", Vector(-3667,147f, 8,477426f, 3491,735f), Vector(0.0f, -74,1232f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 480);
	*(&iLocal_4 + 616) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp2Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 624[03]) = Vector(-3691,083f, 9,521634f, 3468,277f);
	*(&iLocal_4 + 624[03] + 12) = Vector(0.0f, 19,07239f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "flag1_2", Vector(-3691,083f, 9,521634f, 3468,277f), Vector(0.0f, 19,07239f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 616);
	*(&iLocal_4 + 624[13]) = Vector(-3687,382f, 9,521634f, 3470,04f);
	*(&iLocal_4 + 624[13] + 12) = Vector(0.0f, -74,1232f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "done_2", Vector(-3687,382f, 9,521634f, 3470,04f), Vector(0.0f, -74,1232f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 616);
	*(&iLocal_4 + 624[23]) = Vector(-3687,797f, 9,521634f, 3468,277f);
	*(&iLocal_4 + 624[23] + 12) = Vector(0.0f, 19,07239f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "flag2_2", Vector(-3687,797f, 9,521634f, 3468,277f), Vector(0.0f, 19,07239f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4 + 616);
	*(&iLocal_4 + 624[33]) = Vector(-3687,797f, 9,521634f, 3475,951f);
	*(&iLocal_4 + 624[33] + 12) = Vector(0.0f, 19,07239f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "flag3_2", Vector(-3687,797f, 9,521634f, 3475,951f), Vector(0.0f, 19,07239f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_4 + 616);
	*(&iLocal_4 + 624[43]) = Vector(-3692,145f, 9,521634f, 3475,951f);
	*(&iLocal_4 + 624[43] + 12) = Vector(0.0f, 19,07239f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "flag4_2", Vector(-3692,145f, 9,521634f, 3475,951f), Vector(0.0f, 19,07239f, 0.0f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_4 + 616);
	*(&iLocal_4 + 624[53]) = Vector(-3692,145f, 9,521634f, 3471,949f);
	*(&iLocal_4 + 624[53] + 12) = Vector(0.0f, 19,07239f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "flag5_2", Vector(-3692,145f, 9,521634f, 3471,949f), Vector(0.0f, 19,07239f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_4 + 616);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", Vector(-3670,226f, 8,516318f, 3488,198f), Vector(0.0f, 106,6142f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-3696,777f, 9,535331f, 3468,551f), Vector(0.0f, 22,68234f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_docks2", "nsit_docks", Vector(-3683,708f, 9,577239f, 3475,908f), Vector(0.0f, -93,65693f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-3693,607f, 9,563571f, 3478,512f), Vector(0.0f, 538,7775f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sleeping_wall_scripted2", "sleeping_wall_scripted", Vector(-3689,215f, 9,552402f, 3465,813f), Vector(0.0f, 360,8754f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sleeping_wall_scripted3", "sleeping_wall_scripted", Vector(-3666,333f, 8,3728f, 3486,487f), Vector(0.0f, 281,834f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nlean_rail", "nlean_rail", Vector(-3685,471f, 9,521064f, 3487,216f), Vector(0.0f, -178,2055f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lean_fence_L_talking", "lean_fence_L_talking", Vector(-3684,198f, 9,520039f, 3487,077f), Vector(0.0f, -87,96023f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "repair_kneel1", "repair_kneel", Vector(-3680,525f, 8,067427f, 3502,064f), Vector(0.0f, -175,5368f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", Vector(-3692,695f, 9,550956f, 3474,934f), Vector(0.0f, 130,1105f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-3686,893f, 9,588552f, 3474,869f), Vector(0.0f, 90,52192f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "repair_kneel2", "repair_kneel", Vector(-3666,768f, 8,283511f, 3464,059f), Vector(0.0f, 297,7963f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand", "smoking_stand", Vector(-3674,544f, 8,587575f, 3477,003f), Vector(0.0f, 110,3968f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand1", "smoking_stand", Vector(-3676,594f, 8,019583f, 3507,406f), Vector(0.0f, 36,98373f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-3668,834f, 8,024294f, 3496,432f), Vector(0.0f, -162,1018f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-3666,223f, 8,458661f, 3488,424f), Vector(0.0f, -75,87344f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", Vector(-3696,775f, 9,571815f, 3485,405f), Vector(0.0f, -236,6689f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lean_fence_L_talking1", "lean_fence_L", Vector(-3694,467f, 9,562268f, 3487,061f), Vector(0.0f, -178,8053f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Rand_Idle_NearWall_Shoulder_R1", "rand_idle_stand", Vector(-3685,579f, 9,564098f, 3478,074f), Vector(0.0f, 219,5181f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_fence_low", "sit_fence_low", Vector(-3696,599f, 9,526659f, 3464,855f), Vector(0.0f, 1,202826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", Vector(-3671,947f, 8,287857f, 3486,226f), Vector(0.0f, 11,72507f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "repair_kneel3", "repair_kneel", Vector(-3666,007f, 8,149973f, 3467,476f), Vector(0.0f, -92,92464f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", Vector(-3685,39f, 9,534906f, 3473,052f), Vector(0.0f, -89,97591f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lean_fence_L_talking4", "lean_fence_L_talking", Vector(-3684,172f, 9,54609f, 3464,63f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-3684,504f, 9,567563f, 3469,88f), Vector(0.0f, -150,6214f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nsit_docks", "nsit_docks", Vector(-3683,65f, 9,577239f, 3473,79f), Vector(0.0f, -87,96419f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_ground_smoke2", "sit_ground_smoke", Vector(-3685,477f, 9,550886f, 3471,205f), Vector(0.0f, -93,87474f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Rand_Idle_NearWall_Shoulder_L1", "Rand_Idle_NearWall_Shoulder_L", Vector(-3685,875f, 9,528695f, 3467,496f), Vector(0.0f, -89,4074f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_pocketwatch_e_any2", "stand_pocketwatch_e_any", Vector(-3696,548f, 9,536649f, 3465,979f), Vector(0.0f, 100,4752f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_pocketwatch_e_any3", "stand_pocketwatch_e_any", Vector(-3696,932f, 9,543398f, 3482,327f), Vector(0.0f, 56,8656f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_yawning_n_any", "stand_yawning_n_any", Vector(-3672,394f, 8,405907f, 3489,415f), Vector(0.0f, 83,38914f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_yawning_n_any1", "stand_yawning_n_any", Vector(-3676,992f, 8,351975f, 3481,176f), Vector(0.0f, -32,10366f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_yawning_n_any2", "stand_yawning_n_any", Vector(-3691,052f, 9,531813f, 3480,779f), Vector(0.0f, 129,0117f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand2", "smoking_stand", Vector(-3696,169f, 9,533411f, 3477,558f), Vector(0.0f, 32,7062f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_4 + 776) = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), &iLocal_4, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_holy_water", "stand_holy_water", Vector(-3661,636f, 8,206227f, 3469,083f), Vector(0.0f, -93,79108f, 0.0f)), &iLocal_4 + 776);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, &iLocal_4 + 776)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-3660,316f, 8,247632f, 3469,477f), Vector(0.0f, -79,04883f, 0.0f)), &iLocal_4 + 776);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(1, &iLocal_4 + 776)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_camp_coffee_drink", "sit_camp_coffee_drink", Vector(-3670,397f, 8,523827f, 3488,725f), Vector(0.0f, 106,6502f, 0.0f)), &iLocal_4 + 776);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_4 + 776)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-3674,274f, 8,588605f, 3475,256f), Vector(0.0f, 15,23718f, 0.0f)), &iLocal_4 + 776);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_4 + 776)), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Multistage_sweeping1", "Multistage_sweeping", Vector(-3667,077f, 8,490922f, 3491,6f), Vector(0.0f, 108,2344f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-3678,084f, 8,394304f, 3479,33f), Vector(0.0f, 119,0111f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_4 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Pee", "Pee", Vector(-3675,694f, 8,770426f, 3462,447f), Vector(0.0f, -42,20353f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_hammer_wall", "stand_hammer_wall", Vector(-3686,408f, 8,031368f, 3508,856f), Vector(0.0f, 6,493814f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_4 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_sellPaper", "stand_sellPaper", Vector(-3696,019f, 9,532f, 3480,707f), Vector(0.0f, -449,3156f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Multistage_sweeping2", "Multistage_sweeping", Vector(-3687,443f, 9,521634f, 3470,043f), Vector(0.0f, -267,6288f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_4 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "look_out_window_R", "look_out_window_R", Vector(-3679,545f, 8,586421f, 3477,852f), Vector(0.0f, 155,4781f, 0.0f));
	*(&iLocal_4 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_no_table", "sit_no_table", Vector(-3676,151f, 8,585974f, 3470,809f), Vector(0.0f, 184,1326f, 0.0f));
	*(&iLocal_4 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_no_table1", "sit_no_table", Vector(-3677,365f, 8,585974f, 3470,683f), Vector(0.0f, 186,3853f, 0.0f));
	*(&iLocal_4 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rand_idle_stand", "rand_idle_stand", Vector(-3692,395f, 9,438922f, 3486,189f), Vector(0.0f, 82,55618f, 0.0f));
	*(&iLocal_4 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rand_idle_stand1", "rand_idle_stand", Vector(-3691,972f, 9,438922f, 3485,229f), Vector(0.0f, 97,85551f, 0.0f));
	*(&iLocal_4 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rand_idle_stand2", "rand_idle_stand", Vector(-3692,593f, 9,438922f, 3484,015f), Vector(0.0f, 133,547f, 0.0f));
	*(&iLocal_4 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand3", "smoking_stand", Vector(-3690,956f, 9,438922f, 3485,836f), Vector(0.0f, 86,63036f, 0.0f));
	*(&iLocal_4 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand4", "smoking_stand", Vector(-3695,977f, 9,438922f, 3472,845f), Vector(0.0f, 18,18242f, 0.0f));
	*(&iLocal_4 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand5", "smoking_stand", Vector(-3696,807f, 9,438922f, 3474,625f), Vector(0.0f, 0,08502066f, 0.0f));
	*(&iLocal_4 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rand_idle_stand3", "rand_idle_stand", Vector(-3695,585f, 9,438922f, 3474,251f), Vector(0.0f, 26,15227f, 0.0f));
	*(&iLocal_4 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rand_idle_stand4", "rand_idle_stand", Vector(-3695,915f, 9,438922f, 3475,782f), Vector(0.0f, 6,088531f, 0.0f));
	*(&iLocal_4 + 888) = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), &iLocal_4, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_announce1", "stand_announce", Vector(-3695,191f, 9,519777f, 3485,825f), Vector(0.0f, 272,6232f, 0.0f)), &iLocal_4 + 888);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, &iLocal_4 + 888)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_announce", "stand_announce", Vector(-3696,828f, 9,519777f, 3470,569f), Vector(0.0f, 194,7009f, 0.0f)), &iLocal_4 + 888);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(1, &iLocal_4 + 888)), 0);
	return 1;
}

bool Function_75(struct<2>[] Param0) //Position: 0x5428 / 21544
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_79();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_78(&(Param0[iVar02]), 8);
		}
		else if (Function_77())
		{
			iVar1 = 1;
			Function_78(&(Param0[iVar02]), 8);
		}
		Function_78(&(Param0[iVar02]), 16);
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
				Function_78(&(Param0[iVar02]), 1);
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
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_78(&(Param0[iVar02]), 2);
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
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_78(&(Param0[iVar02]), 2);
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
	Function_76();
	return 1;
}

void Function_76() //Position: 0x57EA / 22506
{
	if (!Function_54(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_77() //Position: 0x582A / 22570
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

void Function_78(struct<13> Param0) //Position: 0x5858 / 22616
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_79() //Position: 0x586B / 22635
{
	if (!Function_54(128))
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

var Function_80(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x58AD / 22701
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_81(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_78(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_81(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x58EB / 22763
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_78(&(Param0[iVar02]), 4);
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

void Function_82(int iParam0, int iParam1) //Position: 0x59BA / 22970
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

struct<8> Function_83() //Position: 0x5A04 / 23044
{
	var uVar0;
	
	Function_82(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("BenedictPoint_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("BenedictPoint_layout");
	}
	PushArrayP();
	*(&iLocal_0 + 8) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_0, "benp_patrolpath");
	return 1;
}

void Function_84(char* cParam0) //Position: 0x5B62 / 23394
{
	if (!Function_54(128))
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

