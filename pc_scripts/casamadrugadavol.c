//Decompiled with MagicRDR v1.0
//Function Count : 67
//Statics Count : 561
//Natives Count : 125
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 2;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 3;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 16;
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
	var uLocal_70 = 7;
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
	var uLocal_88 = 4;
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
	var uLocal_100 = 1;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 8;
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
	var uLocal_126 = 10;
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
	var uLocal_150 = 5;
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
	var uLocal_164 = 10;
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
	var uLocal_188 = 12;
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
	var uLocal_220 = 1;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 4;
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
	var uLocal_242 = 1;
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
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	var uLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 10;
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
	char[] cLocal_435[4] = 0;
	var uLocal_436 = 0;
	struct<4> Local_437[15];
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_360 = 0;
	iLocal_361 = &iScriptParam_0;
	Function_66("Initializing CasaMadrugada Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_363 = 500;
		uLocal_367 = Function_65();
		switch (iLocal_360)
		{
			case 0x00000000:
				if (Function_63())
				{
					cLocal_435 = Function_62(&iLocal_0, "casaMadrugada", iScriptParam_0);
					iLocal_360 = 1;
				}
				iLocal_363 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_435))
				{
					iLocal_360 = 2;
				}
				iLocal_363 = 0;
				break;
			
			case 0x00000002:
				Function_61(&uLocal_369);
				Function_60(&uLocal_369, &uLocal_373, 4, &iLocal_0 + 112, 4294967295, 4);
				Function_60(&uLocal_369, &uLocal_373, 5, &iLocal_0 + 8, 4294967295, 16642);
				Function_60(&uLocal_369, &uLocal_373, 5, &iLocal_0 + 896, 4294967295, 16642);
				Function_60(&uLocal_369, &uLocal_373, 5, &iLocal_0 + 952, 4294967295, 1282);
				Function_60(&uLocal_369, &uLocal_373, 5, &iLocal_0 + 40, 4294967295, 770);
				Function_60(&uLocal_369, &uLocal_373, 5, &iLocal_0 + 80, 4294967295, 258);
				Function_60(&uLocal_369, &uLocal_373, 5, &iLocal_0 + 944, 4294967295, 258);
				Function_60(&uLocal_369, &uLocal_373, 5, &iLocal_0 + 120, 4294967295, 65792);
				Function_60(&uLocal_369, &uLocal_373, 5, &iLocal_0 + 272, 4294967295, 65792);
				Function_60(&uLocal_369, &uLocal_373, 5, &iLocal_0 + 344, 4294967295, 1282);
				Function_58(&Local_437, &cLocal_435, "whorehouse01", 7, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 272, 0, 1);
				Function_58(&Local_437, &cLocal_435, "whorehouse01", 8, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 272, 0, 1);
				iLocal_366 = Function_58(&Local_437, &cLocal_435, "trainstation01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				if (iLocal_366 <= 0 && iLocal_366 > Local_437)
				{
					Function_57(&(Local_437[iLocal_3664]), 63);
				}
				Function_58(&Local_437, &cLocal_435, "ncantina01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_364 = Function_58(&Local_437, &cLocal_435, "ncantina01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				if (iLocal_364 <= 0 && iLocal_364 > Local_437)
				{
					Function_57(&(Local_437[iLocal_3644]), 48);
				}
				iLocal_365 = Function_58(&Local_437, &cLocal_435, "ncantina01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				if (iLocal_365 <= 0 && iLocal_365 > Local_437)
				{
					Function_57(&(Local_437[iLocal_3654]), 48);
				}
				Function_58(&Local_437, &cLocal_435, "whorehouse01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_437, &cLocal_435, "whorehouse01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_437, &cLocal_435, "whorehouse01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_437, &cLocal_435, "whorehouse01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_437, &cLocal_435, "whorehouse01", 5, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_437, &cLocal_435, "whorehouse01", 6, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_437, &cLocal_435, "whorehouse01", 9, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_437, &cLocal_435, "whorehouse01", 10, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_437, &cLocal_435, "whorehouse01", 11, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_0 + 272);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_0 + 272);
				iLocal_360 = 3;
				iLocal_363 = 0;
				break;
			
			case 0x00000003:
				Function_56(&(Global_43791[iLocal_361]), 16);
				Function_55("Finished Initializing CasaMadrugada Volumes", 5.0f);
				iLocal_360 = 4;
				iLocal_363 = 0;
				break;
			
			case 0x00000004:
				Function_16(&uLocal_369, &uLocal_373, &uLocal_367, iScriptParam_0);
				Function_12(&Local_437, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_363 = 0;
				break;
		}
		WAIT(iLocal_363);
	}
	Function_4(&uLocal_369, &uLocal_373);
	Function_3(&Local_437);
	Function_2();
	Function_1(&(Global_43791[iLocal_361]), 16);
	Function_55("Unloaded CasaMadrugada Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x530 / 1328
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x54A / 1354
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(struct<4>[] Param0) //Position: 0x556 / 1366
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
		}
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, vector3[] vParam1) //Position: 0x5BB / 1467
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_11(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_10(&(vParam1[iVar03]), 4);
		}
		if (Function_11(&(vParam1[iVar03]), 8))
		{
			Function_5(0, 0, 30);
			Function_10(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x618 / 1560
{
	int iVar0;
	
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, &iParam1, &iParam2);
		Function_6(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_6(int iParam0, int iParam1, bool bParam2) //Position: 0x702 / 1794
{
	int iVar0;
	
	Function_9(iParam0);
	Function_8(&iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, &iParam1);
	Function_7();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = iParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_7() //Position: 0x881 / 2177
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0x88D / 2189
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

void Function_9(int iParam0) //Position: 0x8D7 / 2263
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

void Function_10(struct<17> Param0) //Position: 0x91D / 2333
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_11(struct<17> Param0) //Position: 0x93A / 2362
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(struct<4>[] Param0, bool bParam1) //Position: 0x958 / 2392
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	var uVar10;
	
	bVar6 = false;
	if (Global_46721 > Param0)
	{
		Global_46721 = 0;
	}
	iVar0 = Global_46721;
	while (iVar0 < Function_15((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_14(&(Param0[iVar04]), 16384);
				uVar8 = Param0[iVar04].f_12;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(&uVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(&uVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (&bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_13(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_14(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_65(), &Param0[iVar04] + 16))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(&Param0[iVar04] + 24))
							{
								if (IS_PERS_CHAR_ALIVE(&Param0[iVar04] + 24))
								{
									uVar10 = GET_ACTOR_FROM_PERS_CHAR(&Param0[iVar04] + 24);
									if (IS_ACTOR_VALID(&uVar10))
									{
										if (IS_ACTOR_IN_VOLUME(&uVar10, &Param0[iVar04] + 16))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_13(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
						else
						{
							Function_13(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_14(&(Param0[iVar04]), 1);
						uVar8 = Param0[iVar04].f_12;
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(&uVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_13(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_13(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(&uVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_14(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_14(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			bVar3 = IS_DOOR_LOCKED(&uVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_6630)
				{
					if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_65(), &Param0[iVar04] + 16))
							{
								SET_DOOR_LOCK(&uVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(&uVar7, 1);
				}
			}
			else if (Global_6630)
			{
				if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_65(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_14(&(Param0[iVar04]), 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(&uVar7, 0);
			}
		}
		iVar0++;
	}
	Global_46721 = iVar0;
	return;
}

void Function_13(struct<13> Param0) //Position: 0xD79 / 3449
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_14(struct<13> Param0) //Position: 0xD8C / 3468
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xDA9 / 3497
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(vector3 vParam0) //Position: 0xDBB / 3515
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_54(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_17(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_6630)
	{
		vParam0.f_8 = 1;
	}
	else if (Global_6629)
	{
		vParam0.f_8 = 1;
	}
	else if (vParam0.z)
	{
		vParam0.f_8 = 0;
	}
}

bool Function_17(vector3 vParam0, var uParam3, bool bParam4) //Position: 0xE45 / 3653
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_53(&vParam0))
	{
		return 0;
	}
	Function_1(&(Global_43791[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(&vParam0 + 8, "locflag");
	if (bVar0 != 0 && vParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (vParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if ((bVar0 && 32) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_51(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_50(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_5(0, 0, 0);
						}
						else
						{
							Function_5(0, 0, 30);
						}
						Function_10(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_50(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_10(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_49(iParam2)) && !Function_48(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_47(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
							{
								if (GET_CURRENT_GAME_TIME() > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime");
								}
							}
							if (bVar2)
							{
								Function_50(&vParam0, 16);
								Function_39(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 16))
					{
						Function_10(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_50(&vParam0, 2);
			}
			else
			{
				Function_10(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_49(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_38(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_11(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_37(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_50(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_49(iParam2))
					{
						Function_36(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_18(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_18(int iParam0) //Position: 0x129D / 4765
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_38(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_56(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_23(473, 1, 0, 0);
		iVar0 = Function_22(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_23(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_23(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_23(476, 1, 0, 0);
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
		Function_21(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_21(7, 30);
	}
	if (Function_20(473) <= Function_19(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_19(int iParam0) //Position: 0x138E / 5006
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_20(int iParam0) //Position: 0x13CB / 5067
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, int iParam1) //Position: 0x1404 / 5124
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

var Function_22(int iParam0) //Position: 0x146E / 5230
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_49(iParam0))
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

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x14C6 / 5318
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
	Function_35(iParam0, TO_FLOAT(bParam1), 1);
	Function_34(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_25(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_24(iParam0);
	return 1;
}

void Function_24(bool bParam0) //Position: 0x16EE / 5870
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

void Function_25(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x178C / 6028
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_19(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_20(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_20(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_32(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_30(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_26(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_26() //Position: 0x1DCA / 7626
{
	int iVar0;
	
	return &iVar0;
}

var Function_27(int iParam0) //Position: 0x1DD3 / 7635
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1DE4 / 7652
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0) //Position: 0x1EDB / 7899
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1EF6 / 7926
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_15(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1F5D / 8029
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1F6F / 8047
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
	if (((Function_33(iParam0) != 19 || Function_33(iParam0) != 17) || Function_33(iParam0) != 10) || Function_33(iParam0) != 9)
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

int Function_33(int iParam0) //Position: 0x20A3 / 8355
{
	return Global_55480[iParam016].f_96;
}

void Function_34(int iParam0) //Position: 0x20B2 / 8370
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x224C / 8780
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
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
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

void Function_36(var uParam0, int iParam1) //Position: 0x2490 / 9360
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(int iParam0, var uParam1, var uParam2) //Position: 0x249D / 9373
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x24C7 / 9415
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x24E4 / 9444
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_46(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_45(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&uParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_42(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &uParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&uParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_40();
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

void Function_40() //Position: 0x2797 / 10135
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_41(&uVar0, &uVar1);
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

void Function_41(var uParam0, int iParam1) //Position: 0x280A / 10250
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

bool Function_42(bool bParam0) //Position: 0x2840 / 10304
{
	if (Function_47(256))
	{
		return 0;
	}
	if (Function_47(262144))
	{
		return 0;
	}
	if (Function_44())
	{
		return 0;
	}
	if (!Function_47(1))
	{
		return 0;
	}
	if (!Function_47(4096))
	{
		return 0;
	}
	if (bParam0 && Function_43(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_47(2048))
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

int Function_43(int iParam0) //Position: 0x28B6 / 10422
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x28C7 / 10439
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

bool Function_45(int iParam0) //Position: 0x28E0 / 10464
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x28F6 / 10486
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x290B / 10507
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2929 / 10537
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

bool Function_49(int iParam0) //Position: 0x29D8 / 10712
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(struct<17> Param0) //Position: 0x29EE / 10734
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_51(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2A01 / 10753
{
	int iVar0;
	int iVar1;
	
	Function_9(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_52(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_6(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x2A7B / 10875
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_6(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x2AA4 / 10916
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam0 + 8))
	{
		return 0;
	}
	return 1;
}

bool Function_54(int iParam0) //Position: 0x2AC4 / 10948
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(char* cParam0) //Position: 0x2AE0 / 10976
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

void Function_56(var uParam0, int iParam1) //Position: 0x2B20 / 11040
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_57(vector3 vParam0) //Position: 0x2B31 / 11057
{
	Function_13(&vParam0, 2);
	vParam0.z = bParam1;
	return;
}

var Function_58(struct<4>[] Param0, int iParam1, char* cParam2) //Position: 0x2B45 / 11077
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_59(&Param0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, &cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, &cParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&iParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar11)))
	{
		return 4294967295;
	}
	Param0[iVar04] = GET_DOOR_FROM_OBJECT(&uVar11);
	if (bParam5)
	{
		Function_13(&(Param0[iVar04]), 1);
	}
	Function_13(&(Param0[iVar04]), 4096);
	(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_13(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_13(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_59(struct<4>[] Param0) //Position: 0x2C39 / 11321
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (!IS_DOOR_VALID(&(Param0[iVar04])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_60(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x2C6A / 11370
{
	if (uParam0 >= (vParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(&uParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	iParam4 = iParam4;
	*(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &iParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_61(struct<5> Param0) //Position: 0x2D57 / 11607
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

var Function_62(int iParam0, var uParam1, int iParam2) //Position: 0x2D68 / 11624
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_63() //Position: 0x2D8B / 11659
{
	var uVar0;
	
	Function_64(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("CasaMadrugada_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("CasaMadrugada_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_trainStn", 2,802597E-45f, Vector(-806,3028f, 16,27773f, 3777,344f), Vector(-0,5743347f, -44,77498f, 0,541441f), Vector(7,291147f, 5,922976f, 15,61f));
	*(&iLocal_0 + 40) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_bar_set");
	*(&iLocal_0 + 16[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_bar_01", 2,802597E-45f, Vector(-794,7755f, 15,01289f, 3696,803f), Vector(0.0f, -44,38549f, 0.0f), Vector(16,07115f, 3,758225f, 10,05159f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 40, &iLocal_0 + 16[0]);
	*(&iLocal_0 + 16[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_bar_02", 2,802597E-45f, Vector(-789,6567f, 13,15435f, 3703,599f), Vector(0.0f, -43,09472f, 0.0f), Vector(3,249471f, 7,623641f, 7,487772f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 40, &iLocal_0 + 16[1]);
	*(&iLocal_0 + 80) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_alley_set");
	*(&iLocal_0 + 48[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_alley_01", 2,802597E-45f, Vector(-796,4014f, 13,70259f, 3681,536f), Vector(0,6455604f, -44,57007f, -1,497947f), Vector(8,451973f, 6,889233f, 4,493765f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 80, &iLocal_0 + 48[0]);
	*(&iLocal_0 + 48[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_alley_02", 2,802597E-45f, Vector(-801,9087f, 13,05098f, 3686,507f), Vector(0.0f, -45,2793f, 0.0f), Vector(7,737553f, 9,463933f, 14,94528f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 80, &iLocal_0 + 48[1]);
	*(&iLocal_0 + 48[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_alley_03", 2,802597E-45f, Vector(-820,2098f, 12,16464f, 3695,942f), Vector(0.0f, -44,78384f, 0.0f), Vector(5,064258f, 10,26207f, 33,69819f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 80, &iLocal_0 + 48[2]);
	*(&iLocal_0 + 104) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_balcony_set");
	*(&iLocal_0 + 88[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_balcony_03", 2,802597E-45f, Vector(-808,3246f, 18,67298f, 3708,198f), Vector(0.0f, 46,09587f, 0.0f), Vector(25,51252f, 5,493402f, 3,00904f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 88[0]);
	*(&iLocal_0 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_region", 2,802597E-45f, Vector(-804,7143f, 16,50582f, 3732,976f), Vector(0.0f, 44,79254f, 0.0f), Vector(117,0739f, 25,23466f, 108,1188f));
	*(&iLocal_0 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_BunkHouse", 2,802597E-45f, Vector(-788,619f, 13,18159f, 3690,619f), Vector(0.0f, 45,84349f, 0.0f), Vector(6,227079f, 6,568761f, 15,13013f));
	*(&iLocal_0 + 264) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_crows_set");
	*(&iLocal_0 + 128[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder13", 4,203895E-45f, Vector(-764,0739f, 13,05098f, 3744.0f), Vector(0.0f, 20.0f, 0.0f), Vector(6,10493f, 7,5894f, 3,934427f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[0]);
	*(&iLocal_0 + 128[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder1", 4,203895E-45f, Vector(-796.0f, 13,05098f, 3674,372f), Vector(0.0f, 20.0f, 0.0f), Vector(6,10493f, 7,5894f, 3,934427f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[1]);
	*(&iLocal_0 + 128[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder2", 4,203895E-45f, Vector(-805,8668f, 13,05098f, 3777,47f), Vector(0.0f, 45,26674f, 0.0f), Vector(23,49845f, 7,5894f, 13,56014f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[2]);
	*(&iLocal_0 + 128[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder3", 4,203895E-45f, Vector(-777,3153f, 13,05098f, 3708,433f), Vector(0.0f, 20.0f, 0.0f), Vector(6,10493f, 7,5894f, 3,934427f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[3]);
	*(&iLocal_0 + 128[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder4", 4,203895E-45f, Vector(-833,4831f, 13,05098f, 3742,111f), Vector(0.0f, -45,5061f, 0.0f), Vector(16,77011f, 7,5894f, 3,934427f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[4]);
	*(&iLocal_0 + 128[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder5", 4,203895E-45f, Vector(-826,9752f, 13,05098f, 3727,765f), Vector(0.0f, 20.0f, 0.0f), Vector(6,10493f, 7,5894f, 3,934427f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[5]);
	*(&iLocal_0 + 128[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder6", 4,203895E-45f, Vector(-805,5087f, 13,05098f, 3702,613f), Vector(0.0f, 33,29927f, 0.0f), Vector(28,18205f, 7,5894f, 19,86875f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[6]);
	*(&iLocal_0 + 128[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder7", 4,203895E-45f, Vector(-819,5359f, 13,05098f, 3767,139f), Vector(0.0f, 20.0f, 0.0f), Vector(6,10493f, 7,5894f, 3,934427f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[7]);
	*(&iLocal_0 + 128[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder8", 4,203895E-45f, Vector(-796.0f, 13,05098f, 3744.0f), Vector(0.0f, 20.0f, 0.0f), Vector(6,10493f, 7,5894f, 3,934427f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[8]);
	*(&iLocal_0 + 128[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder9", 4,203895E-45f, Vector(-760,6938f, 13,05098f, 3731,306f), Vector(0.0f, 20.0f, 0.0f), Vector(6,10493f, 7,5894f, 3,934427f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[9]);
	*(&iLocal_0 + 128[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder10", 4,203895E-45f, Vector(-819,3535f, 18,43041f, 3710,828f), Vector(0.0f, 38,58831f, 0.0f), Vector(2,086118f, 1,787392f, 4,852084f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[10]);
	*(&iLocal_0 + 128[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder11", 4,203895E-45f, Vector(-830,0306f, 13,03314f, 3704,874f), Vector(0.0f, 39,89325f, 0.0f), Vector(3,894529f, 1.0f, 2,128424f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[11]);
	*(&iLocal_0 + 128[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder12", 4,203895E-45f, Vector(-819,5968f, 13,03314f, 3694,634f), Vector(0.0f, 43,64146f, 0.0f), Vector(8,288342f, 1.0f, 1,357594f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[12]);
	*(&iLocal_0 + 128[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder16", 4,203895E-45f, Vector(-790,4797f, 19,48275f, 3692,78f), Vector(0.0f, 20.0f, 0.0f), Vector(4,029238f, 1,592475f, 5,292638f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[13]);
	*(&iLocal_0 + 128[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder14", 4,203895E-45f, Vector(-841,3357f, 18,50264f, 3727,26f), Vector(0.0f, 20.0f, 0.0f), Vector(3,048616f, 1.0f, 3,845933f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[14]);
	*(&iLocal_0 + 128[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder15", 4,203895E-45f, Vector(-834,6487f, 19,41341f, 3716,635f), Vector(2,006079f, 16,84535f, -2,695644f), Vector(2,563606f, 1,560858f, 2,006725f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 128[15]);
	*(&iLocal_0 + 272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_players_room", 2,802597E-45f, Vector(-811,742f, 18,18306f, 3705,84f), Vector(0.0f, 44,24602f, 0.0f), Vector(8,813954f, 3,418221f, 5,097694f));
	*(&iLocal_0 + 344) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_brothel_set");
	*(&iLocal_0 + 280[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_brothel_01", 2,802597E-45f, Vector(-811,5852f, 14,51999f, 3700,57f), Vector(0.0f, -45,3715f, 0.0f), Vector(9,289575f, 3,330397f, 6,019562f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[0]);
	*(&iLocal_0 + 280[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_brothel_03", 2,802597E-45f, Vector(-807,2336f, 13,85711f, 3696,247f), Vector(0.0f, -46,03899f, 0.0f), Vector(9,207765f, 4,680773f, 6,26373f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[1]);
	*(&iLocal_0 + 280[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_brothel_04", 2,802597E-45f, Vector(-816,0667f, 14,67081f, 3704,945f), Vector(0.0f, -44,96406f, 0.0f), Vector(9,022927f, 3,044132f, 6,009335f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[2]);
	*(&iLocal_0 + 280[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_brothel_05", 2,802597E-45f, Vector(-817,4669f, 18,13931f, 3699,951f), Vector(0.0f, 43,24169f, 0.0f), Vector(8,738506f, 3,412303f, 4,675186f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[3]);
	*(&iLocal_0 + 280[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_brothel_06", 2,802597E-45f, Vector(-811,2756f, 18,17668f, 3693,858f), Vector(0.0f, 46,06035f, 0.0f), Vector(8,470537f, 3,390614f, 4,714306f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[4]);
	*(&iLocal_0 + 280[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_brothel_07", 2,802597E-45f, Vector(-805,4082f, 18,16347f, 3699,799f), Vector(0.0f, -44,45793f, 0.0f), Vector(4,815435f, 3,36401f, 8,271959f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[5]);
	*(&iLocal_0 + 280[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_brothel_02", 2,802597E-45f, Vector(-811,5617f, 18,16293f, 3699,9f), Vector(0.0f, 45,38604f, 0.0f), Vector(17,37091f, 3,021058f, 2,812284f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 280[6]);
	*(&iLocal_0 + 392) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_walkway_set");
	*(&iLocal_0 + 352[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_walkway2", 2,802597E-45f, Vector(-796,7672f, 14,37165f, 3706,787f), Vector(0.0f, 44,05541f, 0.0f), Vector(5,227089f, 3,784717f, 17,67647f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 392, &iLocal_0 + 352[0]);
	*(&iLocal_0 + 352[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_walkway3", 2,802597E-45f, Vector(-811,2538f, 12,91709f, 3709,225f), Vector(0.0f, 44,96168f, 0.0f), Vector(27,33997f, 6,435522f, 3,48009f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 392, &iLocal_0 + 352[1]);
	*(&iLocal_0 + 352[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_walkway4", 2,802597E-45f, Vector(-824,2254f, 15,8424f, 3714,592f), Vector(0.0f, 44,96168f, 0.0f), Vector(7,533593f, 11,4075f, 16,18906f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 392, &iLocal_0 + 352[2]);
	*(&iLocal_0 + 352[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_walkway5", 2,802597E-45f, Vector(-787,3676f, 14,37165f, 3706,853f), Vector(0.0f, 44,05541f, 0.0f), Vector(13,06286f, 3,784717f, 4,337309f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 392, &iLocal_0 + 352[3]);
	*(&iLocal_0 + 416) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_regs_set");
	*(&iLocal_0 + 400[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_regs_01", 2,802597E-45f, Vector(-794,6103f, 14,12606f, 3697,246f), Vector(0.0f, -44,75211f, 0.0f), Vector(15,08281f, 7,08342f, 4,550721f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 416, &iLocal_0 + 400[0]);
	*(&iLocal_0 + 496) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_WhrRegs_set");
	*(&iLocal_0 + 424[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder34", 4,203895E-45f, Vector(-811,6566f, 17,86487f, 3693,92f), Vector(0.0f, 42,77212f, 0.0f), Vector(5,090549f, 1,468264f, 2,420432f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 424[0]);
	*(&iLocal_0 + 424[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder27", 4,203895E-45f, Vector(-807,5456f, 14,16206f, 3695,944f), Vector(0.0f, 43,41973f, 0.0f), Vector(3,069165f, 1,745446f, 4,115707f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 424[1]);
	*(&iLocal_0 + 424[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder28", 4,203895E-45f, Vector(-811,5952f, 14,15583f, 3700,567f), Vector(0.0f, 20.0f, 0.0f), Vector(3,001235f, 1,442589f, 3,561808f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 424[2]);
	*(&iLocal_0 + 424[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder29", 4,203895E-45f, Vector(-816,0573f, 14,14706f, 3705,06f), Vector(0.0f, 20.0f, 0.0f), Vector(2,716609f, 1,580899f, 3,864628f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 424[3]);
	*(&iLocal_0 + 424[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder30", 4,203895E-45f, Vector(-820,3043f, 14,14306f, 3709,699f), Vector(0.0f, 20.0f, 0.0f), Vector(2,866683f, 1,45179f, 3,824502f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 424[4]);
	*(&iLocal_0 + 424[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder31", 4,203895E-45f, Vector(-811,2254f, 18,14856f, 3705,455f), Vector(0.0f, 50,20604f, 0.0f), Vector(6,881428f, 1,5476f, 2,959556f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 424[5]);
	*(&iLocal_0 + 424[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder32", 4,203895E-45f, Vector(-805,3223f, 18,20893f, 3699,656f), Vector(0.0f, 44,01006f, 0.0f), Vector(3,846889f, 1,687158f, 2,437262f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 424[6]);
	*(&iLocal_0 + 424[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder33", 4,203895E-45f, Vector(-817,7166f, 18,29096f, 3699,879f), Vector(0.0f, 40,30882f, 0.0f), Vector(4,098403f, 1,562841f, 2,57164f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 424[7]);
	*(&iLocal_0 + 592) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_rabbits_set");
	*(&iLocal_0 + 504[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder51", 4,203895E-45f, Vector(-766,1308f, 13,05098f, 3739,121f), Vector(0.0f, 20.0f, 0.0f), Vector(3,661924f, 2,925787f, 2,883651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 592, &iLocal_0 + 504[0]);
	*(&iLocal_0 + 504[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder42", 4,203895E-45f, Vector(-829,3022f, 13,05098f, 3765,605f), Vector(0.0f, 20.0f, 0.0f), Vector(3,661924f, 2,925787f, 2,883651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 592, &iLocal_0 + 504[1]);
	*(&iLocal_0 + 504[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder43", 4,203895E-45f, Vector(-774,9594f, 13,05098f, 3696,278f), Vector(0.0f, 20.0f, 0.0f), Vector(3,661924f, 2,925787f, 2,883651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 592, &iLocal_0 + 504[2]);
	*(&iLocal_0 + 504[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder44", 4,203895E-45f, Vector(-797,9305f, 13,05098f, 3735,462f), Vector(0.0f, 20.0f, 0.0f), Vector(3,661924f, 2,925787f, 2,883651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 592, &iLocal_0 + 504[3]);
	*(&iLocal_0 + 504[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder45", 4,203895E-45f, Vector(-844,5376f, 13,05098f, 3712,051f), Vector(0.0f, 20.0f, 0.0f), Vector(3,661924f, 2,925787f, 2,883651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 592, &iLocal_0 + 504[4]);
	*(&iLocal_0 + 504[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder46", 4,203895E-45f, Vector(-773,1508f, 13,05098f, 3718,52f), Vector(0.0f, 20.0f, 0.0f), Vector(3,661924f, 2,925787f, 2,883651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 592, &iLocal_0 + 504[5]);
	*(&iLocal_0 + 504[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder47", 4,203895E-45f, Vector(-834,3109f, 13,05098f, 3786,002f), Vector(0.0f, 20.0f, 0.0f), Vector(3,661924f, 2,925787f, 2,883651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 592, &iLocal_0 + 504[6]);
	*(&iLocal_0 + 504[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder48", 4,203895E-45f, Vector(-783,9529f, 13,05098f, 3757,397f), Vector(0.0f, 20.0f, 0.0f), Vector(3,661924f, 2,925787f, 2,883651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 592, &iLocal_0 + 504[7]);
	*(&iLocal_0 + 504[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder49", 4,203895E-45f, Vector(-831,933f, 13,05098f, 3735,462f), Vector(0.0f, 20.0f, 0.0f), Vector(3,661924f, 2,925787f, 2,883651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 592, &iLocal_0 + 504[8]);
	*(&iLocal_0 + 504[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder50", 4,203895E-45f, Vector(-844,5376f, 13,05098f, 3735,462f), Vector(0.0f, 20.0f, 0.0f), Vector(3,661924f, 2,925787f, 2,883651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 592, &iLocal_0 + 504[9]);
	*(&iLocal_0 + 648) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_dogs_set");
	*(&iLocal_0 + 600[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder68", 4,203895E-45f, Vector(-792,836f, 13,16464f, 3711,019f), Vector(0.0f, 20.0f, 0.0f), Vector(4,163461f, 10,99225f, 3,658534f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 600[0]);
	*(&iLocal_0 + 600[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder64", 4,203895E-45f, Vector(-836,1879f, 13,16464f, 3731,692f), Vector(0.0f, 20.0f, 0.0f), Vector(4,163461f, 10,99225f, 3,658534f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 600[1]);
	*(&iLocal_0 + 600[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder65", 4,203895E-45f, Vector(-795,469f, 13,16464f, 3762,82f), Vector(0.0f, 20.0f, 0.0f), Vector(4,163461f, 10,99225f, 3,658534f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 600[2]);
	*(&iLocal_0 + 600[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder66", 4,203895E-45f, Vector(-825,9218f, 13,16464f, 3721,139f), Vector(0.0f, 20.0f, 0.0f), Vector(4,163461f, 10,99225f, 3,658534f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 600[3]);
	*(&iLocal_0 + 600[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder67", 4,203895E-45f, Vector(-807,9018f, 13,16464f, 3731,106f), Vector(0.0f, 20.0f, 0.0f), Vector(4,163461f, 2,748588f, 3,658534f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 600[4]);
	*(&iLocal_0 + 744) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_snakes_set");
	*(&iLocal_0 + 656[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder78", 4,203895E-45f, Vector(-768,6904f, 13,05098f, 3760.0f), Vector(0.0f, 20.0f, 0.0f), Vector(3,310231f, 3,202805f, 3,457055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 744, &iLocal_0 + 656[0]);
	*(&iLocal_0 + 656[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder69", 4,203895E-45f, Vector(-774,1686f, 13,05098f, 3725,26f), Vector(0.0f, 20.0f, 0.0f), Vector(3,310231f, 3,202805f, 3,457055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 744, &iLocal_0 + 656[1]);
	*(&iLocal_0 + 656[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder70", 4,203895E-45f, Vector(-836,5049f, 13,05098f, 3751,001f), Vector(0.0f, 20.0f, 0.0f), Vector(3,310231f, 3,202805f, 3,457055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 744, &iLocal_0 + 656[2]);
	*(&iLocal_0 + 656[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder71", 4,203895E-45f, Vector(-835,0659f, 13,05098f, 3699,702f), Vector(0.0f, 20.0f, 0.0f), Vector(3,310231f, 3,202805f, 3,457055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 744, &iLocal_0 + 656[3]);
	*(&iLocal_0 + 656[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder72", 4,203895E-45f, Vector(-824,9296f, 13,05098f, 3731,961f), Vector(0.0f, 20.0f, 0.0f), Vector(3,310231f, 3,202805f, 3,457055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 744, &iLocal_0 + 656[4]);
	*(&iLocal_0 + 656[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder73", 4,203895E-45f, Vector(-821,1913f, 13,05098f, 3798,301f), Vector(0.0f, 20.0f, 0.0f), Vector(3,310231f, 3,202805f, 3,457055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 744, &iLocal_0 + 656[5]);
	*(&iLocal_0 + 656[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder74", 4,203895E-45f, Vector(-783,5839f, 13,05098f, 3760.0f), Vector(0.0f, 20.0f, 0.0f), Vector(3,310231f, 3,202805f, 3,457055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 744, &iLocal_0 + 656[6]);
	*(&iLocal_0 + 656[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder75", 4,203895E-45f, Vector(-827,6003f, 13,05098f, 3786,766f), Vector(0.0f, 20.0f, 0.0f), Vector(3,310231f, 3,202805f, 3,457055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 744, &iLocal_0 + 656[7]);
	*(&iLocal_0 + 656[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder76", 4,203895E-45f, Vector(-745,0389f, 13,05098f, 3724,009f), Vector(0.0f, 20.0f, 0.0f), Vector(3,310231f, 3,202805f, 3,457055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 744, &iLocal_0 + 656[8]);
	*(&iLocal_0 + 656[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder77", 4,203895E-45f, Vector(-820.0f, 13,05098f, 3760.0f), Vector(0.0f, 20.0f, 0.0f), Vector(3,310231f, 4,443566f, 3,457055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 744, &iLocal_0 + 656[9]);
	*(&iLocal_0 + 856) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_vultures_set");
	*(&iLocal_0 + 752[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder63", 4,203895E-45f, Vector(-759,6187f, 14,22204f, 3748,58f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[0]);
	*(&iLocal_0 + 752[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder52", 4,203895E-45f, Vector(-824.0f, 14,22204f, 3789,929f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[1]);
	*(&iLocal_0 + 752[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder53", 4,203895E-45f, Vector(-824.0f, 14,22204f, 3692,034f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[2]);
	*(&iLocal_0 + 752[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder54", 4,203895E-45f, Vector(-840,0287f, 14,22204f, 3751,655f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[3]);
	*(&iLocal_0 + 752[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder55", 4,203895E-45f, Vector(-791,483f, 14,22204f, 3761,306f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[4]);
	*(&iLocal_0 + 752[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder56", 4,203895E-45f, Vector(-767,9371f, 14,22204f, 3706,355f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[5]);
	*(&iLocal_0 + 752[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder57", 4,203895E-45f, Vector(-776,0715f, 14,22204f, 3728,357f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[6]);
	*(&iLocal_0 + 752[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder58", 4,203895E-45f, Vector(-855,1661f, 14,22204f, 3725,353f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[7]);
	*(&iLocal_0 + 752[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder59", 4,203895E-45f, Vector(-741,2905f, 14,22204f, 3728,619f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[8]);
	*(&iLocal_0 + 752[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder60", 4,203895E-45f, Vector(-798,5344f, 14,22204f, 3750,051f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[9]);
	*(&iLocal_0 + 752[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder61", 4,203895E-45f, Vector(-824.0f, 14,22204f, 3764.0f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[10]);
	*(&iLocal_0 + 752[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder62", 4,203895E-45f, Vector(-845,1601f, 14,22204f, 3696,963f), Vector(0.0f, 20.0f, 0.0f), Vector(5,376306f, 15,18995f, 5,853055f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 752[11]);
	*(&iLocal_0 + 864) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_liarsdice", 2,802597E-45f, Vector(-789,4973f, 13,4669f, 3698,786f), Vector(0.0f, -43,11062f, 0.0f), Vector(5,090456f, 5,090456f, 5,090456f));
	*(&iLocal_0 + 872) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_poker", 2,802597E-45f, Vector(-795,1835f, 13,4669f, 3699,552f), Vector(0.0f, -43,11062f, 0.0f), Vector(6,340227f, 5,090456f, 5,090456f));
	*(&iLocal_0 + 896) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_train_platform_set");
	*(&iLocal_0 + 880[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_train_platform_01", 2,802597E-45f, Vector(-807,3448f, 13,81927f, 3779,459f), Vector(0.0f, -45,37596f, 0.0f), Vector(20,26508f, 14,77738f, 31,95724f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 896, &iLocal_0 + 880[0]);
	*(&iLocal_0 + 944) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_CourtYrd_set");
	*(&iLocal_0 + 904[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_CourtYrd_02", 2,802597E-45f, Vector(-780,2878f, 13,05098f, 3709,311f), Vector(0.0f, 46,09587f, 0.0f), Vector(23,69177f, 12,77384f, 8,261987f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 944, &iLocal_0 + 904[0]);
	*(&iLocal_0 + 904[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_CourtYrd_03", 2,802597E-45f, Vector(-781,5798f, 13,01439f, 3699,925f), Vector(0.0f, -44,35699f, 0.0f), Vector(8,206616f, 8,351545f, 9,999015f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 944, &iLocal_0 + 904[1]);
	*(&iLocal_0 + 904[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_CourtYrd_04", 2,802597E-45f, Vector(-828,0232f, 13,2275f, 3728,073f), Vector(0.0f, -45,66846f, 0.0f), Vector(17,11484f, 15,15773f, 16,34783f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 944, &iLocal_0 + 904[2]);
	*(&iLocal_0 + 904[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_CourtYrd_05", 2,802597E-45f, Vector(-809,9717f, 13,2275f, 3727,646f), Vector(0.0f, -45,66846f, 0.0f), Vector(20,97757f, 18,57875f, 42,01398f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 944, &iLocal_0 + 904[3]);
	*(&iLocal_0 + 952) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_patioupper", 2,802597E-45f, Vector(-820,549f, 18,43921f, 3710,325f), Vector(-0,2801316f, 44,35781f, -0,879748f), Vector(8,267499f, 3,73759f, 16,12029f));
	*(&iLocal_0 + 960) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_patiolower", 2,802597E-45f, Vector(-832,2273f, 14,75896f, 3714,829f), Vector(-0,2801316f, 44,35781f, -0,879748f), Vector(11,67304f, 5,277174f, 7,373465f));
	*(&iLocal_0 + 984) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "casv_trainyard_set");
	*(&iLocal_0 + 968[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "casv_trainyard_01", 2,802597E-45f, Vector(-783,8069f, 13,05098f, 3747,955f), Vector(0.0f, 46,09587f, 0.0f), Vector(41,4718f, 22,36026f, 39,71608f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 984, &iLocal_0 + 968[0]);
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_report_crime_road", Vector(-843,8538f, 12,80097f, 3799,341f), Vector(0.0f, 153,566f, 0.0f));
	*(&iLocal_0 + 992) = Vector(-798,875f, 13,052f, 3718,32f);
	*(&iLocal_0 + 992 + 12) = Vector(0.0f, 129,5424f, 0.0f);
	*(&iLocal_0 + 1016) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_enDuel1", Vector(-798,875f, 13,052f, 3718,32f), Vector(0.0f, 129,5424f, 0.0f));
	*(&iLocal_0 + 1024) = Vector(-805,637f, 13,052f, 3724,192f);
	*(&iLocal_0 + 1024 + 12) = Vector(0.0f, 310,034f, 0.0f);
	*(&iLocal_0 + 1048) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_playerDuel1", Vector(-805,637f, 13,052f, 3724,192f), Vector(0.0f, 310,034f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_clear_bounty", Vector(-806,509f, 13,604f, 3778,119f), Vector(0.0f, 53,728f, 0.0f));
	*(&iLocal_0 + 1056) = Vector(-810,2482f, 13,46156f, 3781,604f);
	*(&iLocal_0 + 1056 + 12) = Vector(0.0f, 45,03443f, 0.0f);
	*(&iLocal_0 + 1080) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_train", Vector(-810,2482f, 13,46156f, 3781,604f), Vector(0.0f, 45,03443f, 0.0f));
	*(&iLocal_0 + 1088) = Vector(-791,525f, 13,09719f, 3700,97f);
	*(&iLocal_0 + 1088 + 12) = Vector(0.0f, 228,2381f, 0.0f);
	*(&iLocal_0 + 1112) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_saloon", Vector(-791,525f, 13,09719f, 3700,97f), Vector(0.0f, 228,2381f, 0.0f));
	*(&iLocal_0 + 1120) = Vector(-786,8501f, 13,16464f, 3691,692f);
	*(&iLocal_0 + 1120 + 12) = Vector(0.0f, 228,2381f, 0.0f);
	*(&iLocal_0 + 1144) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_house", Vector(-786,8501f, 13,16464f, 3691,692f), Vector(0.0f, 228,2381f, 0.0f));
	*(&iLocal_0 + 1152) = Vector(-820,6178f, 13,11084f, 3710,959f);
	*(&iLocal_0 + 1152 + 12) = Vector(0.0f, 228,2381f, 0.0f);
	*(&iLocal_0 + 1176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_room", Vector(-820,6178f, 13,11084f, 3710,959f), Vector(0.0f, 228,2381f, 0.0f));
	*(&iLocal_0 + 1184) = Vector(-815,7907f, 13,11084f, 3705,553f);
	*(&iLocal_0 + 1184 + 12) = Vector(0.0f, 228,2381f, 0.0f);
	*(&iLocal_0 + 1208) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_room1", Vector(-815,7907f, 13,11084f, 3705,553f), Vector(0.0f, 228,2381f, 0.0f));
	*(&iLocal_0 + 1216) = Vector(-811,6736f, 13,11084f, 3700,942f);
	*(&iLocal_0 + 1216 + 12) = Vector(0.0f, 228,2381f, 0.0f);
	*(&iLocal_0 + 1240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_room2", Vector(-811,6736f, 13,11084f, 3700,942f), Vector(0.0f, 228,2381f, 0.0f));
	*(&iLocal_0 + 1248) = Vector(-806,9931f, 13,11084f, 3695,701f);
	*(&iLocal_0 + 1248 + 12) = Vector(0.0f, 228,2381f, 0.0f);
	*(&iLocal_0 + 1272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_room3", Vector(-806,9931f, 13,11084f, 3695,701f), Vector(0.0f, 228,2381f, 0.0f));
	*(&iLocal_0 + 1280) = Vector(-811,8158f, 16,67075f, 3693,402f);
	*(&iLocal_0 + 1280 + 12) = Vector(0.0f, 228,2381f, 0.0f);
	*(&iLocal_0 + 1304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_room4", Vector(-811,8158f, 16,67075f, 3693,402f), Vector(0.0f, 228,2381f, 0.0f));
	*(&iLocal_0 + 1312) = Vector(-818,0532f, 16,67075f, 3700,387f);
	*(&iLocal_0 + 1312 + 12) = Vector(0.0f, 228,2381f, 0.0f);
	*(&iLocal_0 + 1336) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_room5", Vector(-818,0532f, 16,67075f, 3700,387f), Vector(0.0f, 228,2381f, 0.0f));
	*(&iLocal_0 + 1344) = Vector(-813,9606f, 17,10117f, 3706,818f);
	*(&iLocal_0 + 1344 + 12) = Vector(0.0f, 228,2381f, 0.0f);
	*(&iLocal_0 + 1368) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_room6", Vector(-813,9606f, 17,10117f, 3706,818f), Vector(0.0f, 228,2381f, 0.0f));
	*(&iLocal_0 + 1376) = Vector(-810,0627f, 17,10117f, 3702,453f);
	*(&iLocal_0 + 1376 + 12) = Vector(0.0f, 228,2381f, 0.0f);
	*(&iLocal_0 + 1400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_room7", Vector(-810,0627f, 17,10117f, 3702,453f), Vector(0.0f, 228,2381f, 0.0f));
	*(&iLocal_0 + 1408) = Vector(-804,9431f, 17,10117f, 3697,665f);
	*(&iLocal_0 + 1408 + 12) = Vector(0.0f, 403,9355f, 0.0f);
	*(&iLocal_0 + 1432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "casf_interiorPoint_room8", Vector(-804,9431f, 17,10117f, 3697,665f), Vector(0.0f, 403,9355f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cas_vista_cam_pos1", Vector(-732,781f, 15,471f, 3738,639f), Vector(-1,4f, 93,691f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cas_vista_cam_pos2", Vector(-798,373f, 22,81f, 3944,837f), Vector(-2,745f, -20,61f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cas_vista_cam_pos3", Vector(-641,201f, 38,305f, 3803,866f), Vector(-13,205f, 68,847f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cas_vista_cam_pos4", Vector(-820,656f, 23,022f, 3816,73f), Vector(-6,96f, -22,109f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cas_vista_cam_pos5", Vector(-852,164f, 25,875f, 3696,872f), Vector(-7,658f, -128,018f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cas_vista_cam_pos6", Vector(-837,26f, 19,185f, 3783,303f), Vector(-8,226f, -70,808f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cas_vista_cam_pos7", Vector(-821,606f, 14,435f, 3755,39f), Vector(2,893f, -18,159f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cas_vista_cam_pos8", Vector(-843,792f, 20,28f, 3729,123f), Vector(-9,04f, -74,629f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cas_vista_cam_pos9", Vector(-813,713f, 16,584f, 3736,573f), Vector(-7,097f, -17,422f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cas_vista_cam_pos10", Vector(-762,416f, 19,465f, 3710,691f), Vector(-3,76f, 122,27f, 0.0f));
	return 1;
}

void Function_64(int iParam0, int iParam1) //Position: 0x5734 / 22324
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

var Function_65() //Position: 0x577E / 22398
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_66(char* cParam0) //Position: 0x5793 / 22419
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

