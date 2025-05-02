//Decompiled with MagicRDR v1.0
//Function Count : 67
//Statics Count : 523
//Natives Count : 125
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 1;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 3;
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
	var uLocal_20 = 1;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 5;
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
	var uLocal_42 = 14;
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
	var uLocal_76 = 5;
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
	var uLocal_90 = 8;
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
	var uLocal_110 = 1;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 1;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 3;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 4;
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
	var uLocal_150 = 2;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 8;
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
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	var uLocal_228 = 0;
	bool bLocal_229 = false;
	int iLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 9;
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
	char[] cLocal_293[4] = 0;
	var uLocal_294 = 0;
	struct<4> Local_295[28];
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
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_226 = 0;
	iLocal_227 = &iScriptParam_0;
	Function_66("Initializing LasHermanas Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_229 = 500;
		uLocal_231 = Function_65();
		switch (iLocal_226)
		{
			case 0x00000000:
				if (Function_63())
				{
					cLocal_293 = Function_62(&iLocal_0, "lasHermanas", iScriptParam_0);
					iLocal_226 = 1;
				}
				bLocal_229 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_293))
				{
					iLocal_226 = 2;
				}
				bLocal_229 = false;
				break;
			
			case 0x00000002:
				Function_61(&uLocal_233);
				Function_60(&uLocal_233, &uLocal_237, 4, &iLocal_0 + 160, 4294967295, 4);
				Function_60(&uLocal_233, &uLocal_237, 5, &iLocal_0 + 24, 4294967295, 65802);
				Function_60(&uLocal_233, &uLocal_237, 5, &iLocal_0 + 520, 4294967295, 4194570);
				Function_60(&uLocal_233, &uLocal_237, 5, &iLocal_0 + 72, 4294967295, 2097418);
				Function_60(&uLocal_233, &uLocal_237, 5, &iLocal_0 + 96, 4294967295, 65802);
				Function_60(&uLocal_233, &uLocal_237, 5, &iLocal_0 + 624, 4294967295, 65794);
				Function_60(&uLocal_233, &uLocal_237, 5, &iLocal_0 + 704, 4294967295, 266);
				Function_60(&uLocal_233, &uLocal_237, 5, &iLocal_0 + 296, 4294967295, 16648);
				Function_60(&uLocal_233, &uLocal_237, 5, &iLocal_0 + 584, 4294967295, 0x1000000);
				Function_58(&Local_295, &cLocal_293, "church01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "church01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "church01", 5, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "residence01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "residence01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "residence01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "residence01", 9, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "prayerRoom01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "prayerRoom01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "prayerRoom01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "prayerRoom01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "prayerRoom01", 5, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "prayerRoom01", 9, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "prayerRoom01", 10, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "prayerRoom01", 11, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "prayerRoom01", 12, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "walls01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "walls01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "walls01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "walls01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "walls01", 5, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "walls01", 6, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "storageRoom01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "storageRoom01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "storageRoom01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_230 = Function_58(&Local_295, &cLocal_293, "storageRoom01", 7, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&(Local_295[iLocal_2304]), 63);
				Function_58(&Local_295, &cLocal_293, "storageRoom01", 8, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_295, &cLocal_293, "storageRoom01", 9, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_226 = 3;
				bLocal_229 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_43791[iLocal_227]), 16);
				Function_55("Finished Initializing LasHermanas Volumes", 5.0f);
				iLocal_226 = 4;
				bLocal_229 = false;
				break;
			
			case 0x00000004:
				Function_16(&uLocal_233, &uLocal_237, &uLocal_231, iScriptParam_0);
				Function_12(&Local_295, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_229 = false;
				break;
		}
		WAIT(bLocal_229);
	}
	Function_4(&uLocal_233, &uLocal_237);
	Function_3(&Local_295);
	Function_2();
	Function_1(&(Global_43791[iLocal_227]), 16);
	Function_55("Unloaded LasHermanas Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x67C / 1660
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x696 / 1686
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(struct<4>[] Param0) //Position: 0x6A2 / 1698
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

void Function_4(var uParam0, vector3[] vParam1) //Position: 0x707 / 1799
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

void Function_5(bool bParam0, int iParam1, int iParam2) //Position: 0x764 / 1892
{
	bool bVar0;
	
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, &iParam1, &iParam2);
		Function_6(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_6(bool bParam0, bool bParam1, bool bParam2) //Position: 0x84E / 2126
{
	int iVar0;
	
	Function_9(bParam0);
	Function_8(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, &bParam1);
	Function_7();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_7() //Position: 0x9CD / 2509
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0x9D9 / 2521
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

void Function_9(int iParam0) //Position: 0xA23 / 2595
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

void Function_10(struct<17> Param0) //Position: 0xA69 / 2665
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_11(struct<17> Param0) //Position: 0xA86 / 2694
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(struct<4>[] Param0, bool bParam1) //Position: 0xAA4 / 2724
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

void Function_13(struct<13> Param0) //Position: 0xEC5 / 3781
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_14(struct<13> Param0) //Position: 0xED8 / 3800
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xEF5 / 3829
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(vector3 vParam0) //Position: 0xF07 / 3847
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

bool Function_17(vector3 vParam0, var uParam3, bool bParam4) //Position: 0xF91 / 3985
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

void Function_18(int iParam0) //Position: 0x13E9 / 5097
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

float Function_19(int iParam0) //Position: 0x14DA / 5338
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_20(int iParam0) //Position: 0x1517 / 5399
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, int iParam1) //Position: 0x1550 / 5456
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

var Function_22(int iParam0) //Position: 0x15BA / 5562
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

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1612 / 5650
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

void Function_24(bool bParam0) //Position: 0x183A / 6202
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x18D8 / 6360
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
						Function_32(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_30(bVar19, bParam2, &iVar17, &iVar18);
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
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_26() //Position: 0x1F16 / 7958
{
	int iVar0;
	
	return &iVar0;
}

var Function_27(int iParam0) //Position: 0x1F1F / 7967
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1F30 / 7984
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

struct<32> Function_29(char* cParam0) //Position: 0x2027 / 8231
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2042 / 8258
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_15(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x20A9 / 8361
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x20BB / 8379
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

int Function_33(int iParam0) //Position: 0x21EF / 8687
{
	return Global_55480[iParam016].f_96;
}

void Function_34(int iParam0) //Position: 0x21FE / 8702
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x2398 / 9112
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

void Function_36(var uParam0, int iParam1) //Position: 0x25DC / 9692
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(int iParam0, var uParam1, var uParam2) //Position: 0x25E9 / 9705
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2613 / 9747
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2630 / 9776
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
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
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
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
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

void Function_40() //Position: 0x28E3 / 10467
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

void Function_41(var uParam0, int iParam1) //Position: 0x2956 / 10582
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

bool Function_42(bool bParam0) //Position: 0x298C / 10636
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

int Function_43(int iParam0) //Position: 0x2A02 / 10754
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x2A13 / 10771
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

bool Function_45(int iParam0) //Position: 0x2A2C / 10796
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2A42 / 10818
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2A57 / 10839
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2A75 / 10869
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

bool Function_49(int iParam0) //Position: 0x2B24 / 11044
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(struct<17> Param0) //Position: 0x2B3A / 11066
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_51(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2B4D / 11085
{
	int iVar0;
	bool bVar1;
	
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
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_6(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x2BC7 / 11207
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_6(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x2BF0 / 11248
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

bool Function_54(int iParam0) //Position: 0x2C10 / 11280
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(char* cParam0) //Position: 0x2C2C / 11308
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

void Function_56(var uParam0, int iParam1) //Position: 0x2C6C / 11372
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_57(vector3 vParam0) //Position: 0x2C7D / 11389
{
	Function_13(&vParam0, 2);
	vParam0.z = bParam1;
	return;
}

var Function_58(struct<4>[] Param0, var uParam1, char* cParam2) //Position: 0x2C91 / 11409
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
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&uParam1, &cVar1, &cVar9);
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

var Function_59(struct<4>[] Param0) //Position: 0x2D85 / 11653
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

void Function_60(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x2DB6 / 11702
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

void Function_61(struct<5> Param0) //Position: 0x2EA3 / 11939
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

var Function_62(int iParam0, var uParam1, int iParam2) //Position: 0x2EB4 / 11956
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_63() //Position: 0x2ED7 / 11991
{
	var uVar0;
	
	Function_64(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("LasHermanas_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("LasHermanas_layout");
	}
	*(&iLocal_0 + 24) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_dorm_set");
	*(&iLocal_0 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_dorm_01", 2,802597E-45f, Vector(-1680,477f, 12,88474f, 4212,336f), Vector(0.0f, 0.0f, 0.0f), Vector(14,11601f, 10,94981f, 32,42182f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 24, &iLocal_0 + 8[0]);
	*(&iLocal_0 + 64) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_church_bottom_set");
	*(&iLocal_0 + 32[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_church_01", 2,802597E-45f, Vector(-1699,849f, 8,953889f, 4194,267f), Vector(0.0f, 0.0f, 0.0f), Vector(10,03829f, 6,800636f, 22,85925f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 64, &iLocal_0 + 32[0]);
	*(&iLocal_0 + 32[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_church_02", 2,802597E-45f, Vector(-1701,763f, 8,839959f, 4189,003f), Vector(0.0f, 0.0f, 0.0f), Vector(10,30391f, 6,980586f, 14,0285f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 64, &iLocal_0 + 32[1]);
	*(&iLocal_0 + 32[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_church_03", 2,802597E-45f, Vector(-1693,566f, 8,915912f, 4194,521f), Vector(0.0f, 0.0f, 0.0f), Vector(10,03829f, 6,800636f, 3,936624f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 64, &iLocal_0 + 32[2]);
	*(&iLocal_0 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_storage", 2,802597E-45f, Vector(-1727,559f, 11,40409f, 4186,101f), Vector(0.0f, 0.0f, 0.0f), Vector(16,94143f, 9,961804f, 7,295546f));
	*(&iLocal_0 + 96) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_office_set");
	*(&iLocal_0 + 80[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_office_01", 2,802597E-45f, Vector(-1724,063f, 12,22613f, 4215,942f), Vector(0.0f, 0.0f, 0.0f), Vector(25,09364f, 10,29202f, 15,37596f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 80[0]);
	*(&iLocal_0 + 152) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_wall_top_set");
	*(&iLocal_0 + 104[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box58", 2,802597E-45f, Vector(-1679,588f, 13,63631f, 4240,783f), Vector(0.0f, 0.0f, 0.0f), Vector(5,028011f, 5,058086f, 26,02822f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 152, &iLocal_0 + 104[0]);
	*(&iLocal_0 + 104[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box56", 2,802597E-45f, Vector(-1691,434f, 13,23021f, 4249,844f), Vector(0.0f, 0.0f, 0.0f), Vector(23,54208f, 4,018136f, 7,780226f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 152, &iLocal_0 + 104[1]);
	*(&iLocal_0 + 104[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box59", 2,802597E-45f, Vector(-1719,598f, 13,77301f, 4238,642f), Vector(0.0f, 0.0f, 0.0f), Vector(6,269324f, 5,987976f, 30,70751f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 152, &iLocal_0 + 104[2]);
	*(&iLocal_0 + 104[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box60", 2,802597E-45f, Vector(-1710,774f, 13,11671f, 4252,273f), Vector(0.0f, 0.0f, 0.0f), Vector(11,85519f, 4,15668f, 2,80413f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 152, &iLocal_0 + 104[3]);
	*(&iLocal_0 + 104[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box61", 2,802597E-45f, Vector(-1740,266f, 13,23021f, 4198,792f), Vector(0.0f, 0.0f, 0.0f), Vector(9,643528f, 4,018136f, 27,7147f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 152, &iLocal_0 + 104[4]);
	*(&iLocal_0 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_region", 2,802597E-45f, Vector(-1703,746f, 31,57897f, 4232,615f), Vector(0.0f, 0.0f, 0.0f), Vector(107,4996f, 53,61927f, 128,9135f));
	*(&iLocal_0 + 288) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_birds_set");
	*(&iLocal_0 + 168[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder16", 4,203895E-45f, Vector(-1716.0f, 22,86559f, 4176.0f), Vector(0.0f, 20.0f, 0.0f), Vector(7,251727f, 15,35544f, 6,742037f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[0]);
	*(&iLocal_0 + 168[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder5", 4,203895E-45f, Vector(-1696.0f, 17,51975f, 4239,035f), Vector(0.0f, 20.0f, 0.0f), Vector(4,258359f, 9,853659f, 4,707277f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[1]);
	*(&iLocal_0 + 168[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder6", 4,203895E-45f, Vector(-1699,984f, 18,80392f, 4260,431f), Vector(0.0f, 5,547814f, 0.0f), Vector(5,089667f, 6,305782f, 3,394659f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[2]);
	*(&iLocal_0 + 168[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder8", 4,203895E-45f, Vector(-1721,753f, 14,54672f, 4198,247f), Vector(0.0f, 20.0f, 0.0f), Vector(2,995238f, 6,622173f, 2,592857f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[3]);
	*(&iLocal_0 + 168[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder9", 4,203895E-45f, Vector(-1690,292f, 16,41214f, 4220.0f), Vector(0.0f, 20.0f, 0.0f), Vector(5,340826f, 8,687995f, 6,06607f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[4]);
	*(&iLocal_0 + 168[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder10", 4,203895E-45f, Vector(-1708,653f, 27,73623f, 4229,026f), Vector(0.0f, 20.0f, 0.0f), Vector(5,105824f, 21,43283f, 5,934885f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[5]);
	*(&iLocal_0 + 168[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder11", 4,203895E-45f, Vector(-1682,211f, 18,39396f, 4259,572f), Vector(0.0f, 20.0f, 0.0f), Vector(2,995238f, 10,64231f, 2,592857f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[6]);
	*(&iLocal_0 + 168[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder12", 4,203895E-45f, Vector(-1670,941f, 15,07071f, 4235,801f), Vector(0.0f, 20.0f, 0.0f), Vector(2,995238f, 6,791216f, 2,592857f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[7]);
	*(&iLocal_0 + 168[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder13", 4,203895E-45f, Vector(-1680,295f, 26,46428f, 4189,357f), Vector(0.0f, 20.0f, 0.0f), Vector(8,094522f, 17,79937f, 4,113313f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[8]);
	*(&iLocal_0 + 168[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder14", 4,203895E-45f, Vector(-1714,098f, 21,36292f, 4258,068f), Vector(0.0f, 20.0f, 0.0f), Vector(2,995238f, 12,9917f, 5,21893f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[9]);
	*(&iLocal_0 + 168[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder15", 4,203895E-45f, Vector(-1746,252f, 21,53139f, 4176.0f), Vector(0.0f, 20.0f, 0.0f), Vector(4,985382f, 14,86888f, 5,76815f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[10]);
	*(&iLocal_0 + 168[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder17", 4,203895E-45f, Vector(-1663,856f, 16,00959f, 4286,607f), Vector(0.0f, 45,4551f, 0.0f), Vector(12,03572f, 12,06892f, 8,572443f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[11]);
	*(&iLocal_0 + 168[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder18", 4,203895E-45f, Vector(-1705,944f, 19,61593f, 4220,521f), Vector(0.0f, 0,7690971f, 0.0f), Vector(44,97596f, 16,6264f, 47,32175f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[12]);
	*(&iLocal_0 + 168[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder24", 4,203895E-45f, Vector(-1743,951f, 15,40103f, 4199,313f), Vector(0.0f, 2,212199f, 0.0f), Vector(3,641118f, 8,21683f, 8,265753f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[13]);
	*(&iLocal_0 + 296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_trainStn", 2,802597E-45f, Vector(-1663,711f, 8,663337f, 4287,102f), Vector(0.0f, -44,9127f, 0.0f), Vector(12,97896f, 12,32496f, 17,10686f));
	*(&iLocal_0 + 352) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_vulture_set");
	*(&iLocal_0 + 304[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_vulture01", 4,203895E-45f, Vector(-1681,732f, 18,21694f, 4180,131f), Vector(0.0f, 20.0f, 0.0f), Vector(5,274219f, 9,508277f, 3,683119f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 352, &iLocal_0 + 304[0]);
	*(&iLocal_0 + 304[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_vulture02", 4,203895E-45f, Vector(-1672,406f, 19,49429f, 4233,301f), Vector(0.0f, 20.0f, 0.0f), Vector(5,274219f, 11,59507f, 3,683119f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 352, &iLocal_0 + 304[1]);
	*(&iLocal_0 + 304[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_vulture03", 4,203895E-45f, Vector(-1749,259f, 20,08563f, 4197,967f), Vector(0.0f, 20.0f, 0.0f), Vector(5,274219f, 15,62297f, 3,683119f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 352, &iLocal_0 + 304[2]);
	*(&iLocal_0 + 304[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_vulture04", 4,203895E-45f, Vector(-1731,571f, 20,53805f, 4178,198f), Vector(0.0f, 20.0f, 0.0f), Vector(5,274219f, 13,54044f, 3,683119f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 352, &iLocal_0 + 304[3]);
	*(&iLocal_0 + 304[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_vulture05", 4,203895E-45f, Vector(-1725,832f, 20,72448f, 4255,945f), Vector(0.0f, 20.0f, 0.0f), Vector(5,274219f, 12,59817f, 3,683119f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 352, &iLocal_0 + 304[4]);
	*(&iLocal_0 + 432) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_rabbits_set");
	*(&iLocal_0 + 360[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_rabbits_08", 4,203895E-45f, Vector(-1718,231f, 8,031359f, 4174,87f), Vector(0.0f, 20.0f, 0.0f), Vector(3,807782f, 1.0f, 3,202161f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 360[0]);
	*(&iLocal_0 + 360[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_rabbits_01", 4,203895E-45f, Vector(-1727,993f, 8,031359f, 4245,781f), Vector(0.0f, 20.0f, 0.0f), Vector(3,807782f, 1.0f, 3,202161f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 360[1]);
	*(&iLocal_0 + 360[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_rabbits_02", 4,203895E-45f, Vector(-1685,591f, 8,031359f, 4260.0f), Vector(0.0f, 20.0f, 0.0f), Vector(3,807782f, 1.0f, 3,202161f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 360[2]);
	*(&iLocal_0 + 360[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_rabbits_03", 4,203895E-45f, Vector(-1694,572f, 8,031359f, 4177,146f), Vector(0.0f, 20.0f, 0.0f), Vector(3,807782f, 1.0f, 3,202161f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 360[3]);
	*(&iLocal_0 + 360[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_rabbits_04", 4,203895E-45f, Vector(-1677,323f, 8,031359f, 4187,76f), Vector(0.0f, 20.0f, 0.0f), Vector(3,807782f, 1.0f, 3,202161f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 360[4]);
	*(&iLocal_0 + 360[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_rabbits_05", 4,203895E-45f, Vector(-1749,005f, 8,031359f, 4210,055f), Vector(0.0f, 20.0f, 0.0f), Vector(3,807782f, 1.0f, 3,202161f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 360[5]);
	*(&iLocal_0 + 360[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_rabbits_06", 4,203895E-45f, Vector(-1666,386f, 8,031359f, 4240,722f), Vector(0.0f, 20.0f, 0.0f), Vector(3,807782f, 1.0f, 3,202161f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 360[6]);
	*(&iLocal_0 + 360[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_rabbits_07", 4,203895E-45f, Vector(-1715,02f, 8,031359f, 4260.0f), Vector(0.0f, 20.0f, 0.0f), Vector(4,744264f, 1.0f, 4,338517f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 432, &iLocal_0 + 360[7]);
	*(&iLocal_0 + 456) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_courtyard_set");
	*(&iLocal_0 + 440[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_crtyard01", 2,802597E-45f, Vector(-1695,541f, 8,531469f, 4229,946f), Vector(0.0f, 0.0f, 0.0f), Vector(31,94847f, 26,11821f, 47,16391f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 440[0]);
	*(&iLocal_0 + 480) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_courtyard_west_set");
	*(&iLocal_0 + 464[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_crtyard02", 2,802597E-45f, Vector(-1726,614f, 8,531469f, 4198,509f), Vector(0.0f, 0.0f, 0.0f), Vector(29,19217f, 16,77434f, 19,56031f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 480, &iLocal_0 + 464[0]);
	*(&iLocal_0 + 520) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_church_set");
	*(&iLocal_0 + 488[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_church01", 2,802597E-45f, Vector(-1699,547f, 8,031361f, 4207,622f), Vector(0.0f, 0.0f, 0.0f), Vector(18,16732f, 30,22345f, 6,723855f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 520, &iLocal_0 + 488[0]);
	*(&iLocal_0 + 488[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_church02", 2,802597E-45f, Vector(-1701,647f, 8,031361f, 4200,307f), Vector(0.0f, 0.0f, 0.0f), Vector(22,40417f, 36,92038f, 9,264437f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 520, &iLocal_0 + 488[1]);
	*(&iLocal_0 + 488[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_church03", 2,802597E-45f, Vector(-1699,797f, 8,031361f, 4188,984f), Vector(0.0f, 0.0f, 0.0f), Vector(23,99464f, 34,35847f, 16,35218f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 520, &iLocal_0 + 488[2]);
	*(&iLocal_0 + 568) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_night_set");
	*(&iLocal_0 + 528[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_pplNight_04", 2,802597E-45f, Vector(-1709,409f, 12,07436f, 4189,641f), Vector(0.0f, 0.0f, 0.0f), Vector(5,949434f, 3,670935f, 13,21718f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 568, &iLocal_0 + 528[0]);
	*(&iLocal_0 + 528[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_pplNight_07", 2,802597E-45f, Vector(-1714,335f, 7,539286f, 4215,988f), Vector(0.0f, 0.0f, 0.0f), Vector(6,297369f, 4,048958f, 16,07903f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 568, &iLocal_0 + 528[1]);
	*(&iLocal_0 + 528[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_pplNight_08", 2,802597E-45f, Vector(-1699,736f, 8,753281f, 4208,526f), Vector(0.0f, 0.0f, 0.0f), Vector(34,29349f, 5,45341f, 4,479712f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 568, &iLocal_0 + 528[2]);
	*(&iLocal_0 + 528[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_pplNight_09", 2,802597E-45f, Vector(-1685,461f, 9,140862f, 4212,987f), Vector(0.0f, 0.0f, 0.0f), Vector(5,95134f, 3,670935f, 33,07381f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 568, &iLocal_0 + 528[3]);
	*(&iLocal_0 + 576) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_customers", 2,802597E-45f, Vector(-1716,91f, 12,54541f, 4220,833f), Vector(0.0f, 0.0f, 0.0f), Vector(7,943641f, 2,561483f, 3,338091f));
	*(&iLocal_0 + 584) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_corral", 4,203895E-45f, Vector(-1694,778f, 11,67337f, 4281,024f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 3.0f, 15.0f));
	*(&iLocal_0 + 592) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_HorseShoePit", 2,802597E-45f, Vector(-1715,773f, 8,6719f, 4259,296f), Vector(0.0f, 89,6482f, 0.0f), Vector(6,359126f, 7,856765f, 16,50986f));
	*(&iLocal_0 + 624) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_players_room_set");
	*(&iLocal_0 + 600[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_players_room_01", 2,802597E-45f, Vector(-1716,871f, 12,81204f, 4212,376f), Vector(0.0f, 0.0f, 0.0f), Vector(9,124324f, 3,007901f, 7,505444f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 624, &iLocal_0 + 600[0]);
	*(&iLocal_0 + 600[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_players_room_02", 2,802597E-45f, Vector(-1722,329f, 12,81204f, 4211,309f), Vector(0.0f, 0.0f, 0.0f), Vector(9,124324f, 3,007901f, 5,586895f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 624, &iLocal_0 + 600[1]);
	*(&iLocal_0 + 704) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "lshv_wall_set");
	*(&iLocal_0 + 632[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_wall_01", 2,802597E-45f, Vector(-1720,718f, 12,07436f, 4238,375f), Vector(0.0f, 0.0f, 0.0f), Vector(4,666071f, 18,70035f, 32,07529f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 632[0]);
	*(&iLocal_0 + 632[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_wall_02", 2,802597E-45f, Vector(-1678,464f, 12,07436f, 4238,83f), Vector(0.0f, 0.0f, 0.0f), Vector(4,666071f, 18,70035f, 32,07529f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 632[1]);
	*(&iLocal_0 + 632[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_wall_03", 2,802597E-45f, Vector(-1700,272f, 12,07436f, 4251,892f), Vector(0.0f, 0.0f, 0.0f), Vector(45,26178f, 18,70035f, 5,400733f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 632[2]);
	*(&iLocal_0 + 632[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_wall_04", 2,802597E-45f, Vector(-1700,159f, 12,07436f, 4255,413f), Vector(0.0f, 0.0f, 0.0f), Vector(10,87699f, 19,13146f, 12,483f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 632[3]);
	*(&iLocal_0 + 632[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_wall_05", 2,802597E-45f, Vector(-1742,98f, 12,07436f, 4198,962f), Vector(0.0f, 0.0f, 0.0f), Vector(4,666071f, 18,70035f, 27,49704f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 632[4]);
	*(&iLocal_0 + 632[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_wall_06", 2,802597E-45f, Vector(-1738,777f, 12,07436f, 4187,036f), Vector(0.0f, 0.0f, 0.0f), Vector(4,666071f, 18,70035f, 3,720941f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 632[5]);
	*(&iLocal_0 + 632[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_wall_07", 2,802597E-45f, Vector(-1738,777f, 12,07436f, 4210,985f), Vector(0.0f, 0.0f, 0.0f), Vector(4,666071f, 18,70035f, 3,720941f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 632[6]);
	*(&iLocal_0 + 632[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "lshv_wall_08", 2,802597E-45f, Vector(-1709,266f, 12,07436f, 4189,81f), Vector(0.0f, 0.0f, 0.0f), Vector(4,666071f, 18,70035f, 13,33412f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 632[7]);
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lshf_report_crime_road", Vector(-1677,152f, 8,03f, 4274,093f), Vector(0.0f, 128,301f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lshf_clear_bounty", Vector(-1665,316f, 8,663f, 4288,242f), Vector(0.0f, 158,115f, 0.0f));
	*(&iLocal_0 + 712) = Vector(-1719,589f, 8,205862f, 4223,875f);
	*(&iLocal_0 + 712 + 12) = Vector(0.0f, -79,87354f, 0.0f);
	*(&iLocal_0 + 736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lshf_interiorPoint_house1", Vector(-1719,589f, 8,205862f, 4223,875f), Vector(0.0f, -79,87354f, 0.0f));
	*(&iLocal_0 + 744) = Vector(-1678,9f, 8,333403f, 4225,87f);
	*(&iLocal_0 + 744 + 12) = Vector(0.0f, -277,14f, 0.0f);
	*(&iLocal_0 + 768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lshf_interiorPoint_house", Vector(-1678,9f, 8,333403f, 4225,87f), Vector(0.0f, -277,14f, 0.0f));
	*(&iLocal_0 + 776) = Vector(-1699,81f, 8,455795f, 4202,104f);
	*(&iLocal_0 + 776 + 12) = Vector(0.0f, -178,5118f, 0.0f);
	*(&iLocal_0 + 800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lshf_interiorPoint_church", Vector(-1699,81f, 8,455795f, 4202,104f), Vector(0.0f, -178,5118f, 0.0f));
	*(&iLocal_0 + 808) = Vector(-1728,916f, 7,958327f, 4186,138f);
	*(&iLocal_0 + 808 + 12) = Vector(0.0f, -178,5118f, 0.0f);
	*(&iLocal_0 + 832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lshf_interiorPoint_warehouse", Vector(-1728,916f, 7,958327f, 4186,138f), Vector(0.0f, -178,5118f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lsh_vista_cam_pos1", Vector(-1767,143f, 12,503f, 4156,063f), Vector(3,298f, -133,852f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lsh_vista_cam_pos2", Vector(-1712,397f, 10,961f, 4289,741f), Vector(3,764f, -21,345f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lsh_vista_cam_pos3", Vector(-1657,222f, 12,624f, 4311,153f), Vector(-5,875f, 21,961f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lsh_vista_cam_pos4", Vector(-1591,833f, 17,012f, 4126,583f), Vector(-3,069f, 129,428f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lsh_vista_cam_pos5", Vector(-1731,104f, 9,945f, 4135,587f), Vector(3,873f, -152,596f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lsh_vista_cam_pos6", Vector(-1706,594f, 12,703f, 4250,618f), Vector(-5,622f, -20,141f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lsh_vista_cam_pos7", Vector(-1755,687f, 15,962f, 4209,258f), Vector(-5,152f, -69,251f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lsh_vista_cam_pos8", Vector(-1717,49f, 16,316f, 4229,982f), Vector(-7,17f, -43,388f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lsh_vista_cam_pos9", Vector(-1677,802f, 19,561f, 4232,425f), Vector(-12,064f, 61,386f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lsh_vista_cam_pos10", Vector(-1709,614f, 15,468f, 4208,013f), Vector(-13,606f, 65,017f, 0.0f));
	*(&iLocal_0 + 840) = Vector(-1699,81f, 8,455795f, 4194,62f);
	*(&iLocal_0 + 840 + 12) = Vector(0.0f, 180,9226f, 0.0f);
	*(&iLocal_0 + 864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lshf_interiorSettlement01", Vector(-1699,81f, 8,455795f, 4194,62f), Vector(0.0f, 180,9226f, 0.0f));
	*(&iLocal_0 + 872) = Vector(-1700.0f, 8,031364f, 4255,358f);
	*(&iLocal_0 + 872 + 12) = Vector(0.0f, -179,7341f, 0.0f);
	*(&iLocal_0 + 896) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "lshf_interiorSettlement02", Vector(-1700.0f, 8,031364f, 4255,358f), Vector(0.0f, -179,7341f, 0.0f));
	return 1;
}

void Function_64(int iParam0, int iParam1) //Position: 0x4A1F / 18975
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

var Function_65() //Position: 0x4A69 / 19049
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_66(char* cParam0) //Position: 0x4A7E / 19070
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

