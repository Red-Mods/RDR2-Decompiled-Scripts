//Decompiled with MagicRDR v1.0
//Function Count : 65
//Statics Count : 392
//Natives Count : 116
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 7;
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
	var uLocal_20 = 16;
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
	var uLocal_56 = 12;
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
	var uLocal_84 = 6;
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
	var uLocal_102 = 16;
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
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	var uLocal_374 = 0;
	bool bLocal_375 = false;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 1;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_372 = 0;
	iLocal_373 = &uScriptParam_0;
	Function_64("Initializing Gaptooth Ridge Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_375 = 500;
		uLocal_376 = Function_63();
		switch (iLocal_372)
		{
			case 0x00000000:
				if (Function_61())
				{
					Function_57();
					REQUEST_STRING_TABLE("graveyards");
					iLocal_372 = 1;
				}
				bLocal_375 = false;
				break;
			
			case 0x00000001:
				Function_56(&uLocal_378, &uLocal_382, 2, &Global_44085[iLocal_3739] + 8, 4294967295, 0);
				HORSE_ADD_REPULSION_EXCLUSION_VOLUME(&iLocal_0 + 552);
				iLocal_372 = 2;
				bLocal_375 = false;
				break;
			
			case 0x00000002:
				if (HAS_STRING_TABLE_LOADED("graveyards"))
				{
					Function_55(&(Global_43791[iLocal_373]), 16);
					Function_54("Finished Initializing Gaptooth Ridge Volumes", 5.0f);
					iLocal_372 = 3;
				}
				bLocal_375 = false;
				break;
			
			case 0x00000003:
				if (!Function_53(&Global_46796))
				{
					Function_13(&uLocal_378, &uLocal_382, &uLocal_376, uScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_375);
	}
	if (IS_VOLUME_VALID(&iLocal_0 + 552))
	{
		HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(&iLocal_0 + 552);
	}
	REMOVE_STRING_TABLE("graveyards");
	Function_11(&(Global_39874[43]));
	Function_3(&uLocal_378, &uLocal_382);
	Function_2();
	Function_1(&(Global_43791[iLocal_373]), 16);
	Function_54("Unloaded Gaptooth Ridge Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x1C4 / 452
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x1DE / 478
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(var uParam0, vector3[] vParam1) //Position: 0x1EA / 490
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_10(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_9(&(vParam1[iVar03]), 4);
		}
		if (Function_10(&(vParam1[iVar03]), 8))
		{
			Function_4(0, 0, 30);
			Function_9(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_4(int iParam0, int iParam1, int iParam2) //Position: 0x247 / 583
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
		Function_5(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_5(int iParam0, int iParam1, bool bParam2) //Position: 0x331 / 817
{
	int iVar0;
	
	Function_8(iParam0);
	Function_7(&iParam1);
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
	Function_6();
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

void Function_6() //Position: 0x4B0 / 1200
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_7(int iParam0) //Position: 0x4BC / 1212
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

void Function_8(int iParam0) //Position: 0x506 / 1286
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

void Function_9(struct<17> Param0) //Position: 0x54C / 1356
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_10(struct<17> Param0) //Position: 0x569 / 1385
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(vector3 vParam0) //Position: 0x587 / 1415
{
	if (IS_OBJECTSET_VALID(&vParam0 + 16))
	{
		Function_12(&vParam0 + 16);
		DESTROY_OBJECTSET(&vParam0 + 16);
	}
	vParam0.f_8 = 0;
	vParam0 = 0;
	vParam0.f_4 = 0;
	return;
}

void Function_12(int iParam0) //Position: 0x5BC / 1468
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&iParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &iParam0);
		}
		CLEAN_OBJECTSET(&iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_OBJECT_REF(&iVar0);
		}
	}
	return;
}

void Function_13(vector3 vParam0) //Position: 0x60B / 1547
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_52(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_14(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_14(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x695 / 1685
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_51(&vParam0))
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
					if (!Function_10(&vParam0, 2))
					{
						if (!Function_10(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_49(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_48(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (Function_10(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_4(0, 0, 0);
						}
						else
						{
							Function_4(0, 0, 30);
						}
						Function_9(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_10(&vParam0, 2))
					{
						if (!Function_10(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_48(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (Function_10(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_9(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_47(iParam2)) && !Function_46(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_45(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_10(&vParam0, 2))
					{
						if (!Function_10(&vParam0, 16))
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
								Function_48(&vParam0, 16);
								Function_37(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (Function_10(&vParam0, 16))
					{
						Function_9(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_10(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_48(&vParam0, 2);
			}
			else
			{
				Function_9(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_47(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_36(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_10(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_35(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_48(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_47(iParam2))
					{
						Function_34(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_15(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_15(int iParam0) //Position: 0xAED / 2797
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_36(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_55(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_20(473, 1, 0, 0);
		iVar0 = Function_19(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_20(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_20(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_20(476, 1, 0, 0);
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
		Function_18(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_18(7, 30);
	}
	if (Function_17(473) <= Function_16(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_16(int iParam0) //Position: 0xBDE / 3038
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_17(int iParam0) //Position: 0xC1B / 3099
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_18(int iParam0, int iParam1) //Position: 0xC54 / 3156
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

var Function_19(int iParam0) //Position: 0xCBE / 3262
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_47(iParam0))
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

int Function_20(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xD16 / 3350
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
	Function_33(iParam0, TO_FLOAT(bParam1), 1);
	Function_32(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_22(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_21(iParam0);
	return 1;
}

void Function_21(bool bParam0) //Position: 0xF3E / 3902
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

void Function_22(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xFDC / 4060
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_16(390))), 32);
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
					bVar19 = (Function_17(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_17(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_30(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_27(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_24(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_23(), &Var9);
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

var Function_23() //Position: 0x161A / 5658
{
	int iVar0;
	
	return &iVar0;
}

var Function_24(int iParam0) //Position: 0x1623 / 5667
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_25(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1634 / 5684
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_26(char* cParam0) //Position: 0x172B / 5931
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_27(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1746 / 5958
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_29(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_28(Function_29(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_28(int iParam0, int iParam1) //Position: 0x17AD / 6061
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_29(int iParam0, bool bParam1) //Position: 0x17BF / 6079
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_30(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x17D1 / 6097
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
	if (((Function_31(iParam0) != 19 || Function_31(iParam0) != 17) || Function_31(iParam0) != 10) || Function_31(iParam0) != 9)
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

int Function_31(int iParam0) //Position: 0x1905 / 6405
{
	return Global_55480[iParam016].f_96;
}

void Function_32(int iParam0) //Position: 0x1914 / 6420
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

int Function_33(int iParam0, float fParam1, bool bParam2) //Position: 0x1AAE / 6830
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

void Function_34(var uParam0, int iParam1) //Position: 0x1CF2 / 7410
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_35(int iParam0, var uParam1, var uParam2) //Position: 0x1CFF / 7423
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_36(var uParam0, int iParam1) //Position: 0x1D29 / 7465
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_37(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1D46 / 7494
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_44(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_43(iParam1))
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
	if (!Function_40(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_23(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_38();
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

void Function_38() //Position: 0x1FF9 / 8185
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_39(&uVar0, &uVar1);
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

void Function_39(var uParam0, int iParam1) //Position: 0x206C / 8300
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

bool Function_40(bool bParam0) //Position: 0x20A2 / 8354
{
	if (Function_45(256))
	{
		return 0;
	}
	if (Function_45(262144))
	{
		return 0;
	}
	if (Function_42())
	{
		return 0;
	}
	if (!Function_45(1))
	{
		return 0;
	}
	if (!Function_45(4096))
	{
		return 0;
	}
	if (bParam0 && Function_41(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_45(2048))
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

int Function_41(int iParam0) //Position: 0x2118 / 8472
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_42() //Position: 0x2129 / 8489
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

bool Function_43(int iParam0) //Position: 0x2142 / 8514
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_44(int iParam0) //Position: 0x2158 / 8536
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_45(int iParam0) //Position: 0x216D / 8557
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_46(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x218B / 8587
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

bool Function_47(int iParam0) //Position: 0x223A / 8762
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_48(struct<17> Param0) //Position: 0x2250 / 8784
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_49(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2263 / 8803
{
	int iVar0;
	int iVar1;
	
	Function_8(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_50(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_5(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_50(int iParam0, int iParam1) //Position: 0x22DD / 8925
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_8(iParam0);
	Function_7(&uVar0);
	PRINTNL();
	Function_5(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_51(int iParam0) //Position: 0x2306 / 8966
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

bool Function_52(int iParam0) //Position: 0x2326 / 8998
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_53(int[] iParam0) //Position: 0x2342 / 9026
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_47(iParam0[iVar0]))
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

void Function_54(char* cParam0) //Position: 0x2393 / 9107
{
	if (!Function_52(128))
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

void Function_55(var uParam0, bool bParam1) //Position: 0x23D3 / 9171
{
	uParam0 = (uParam0 || bParam1);
	return;
}

void Function_56(var uParam0, vector3[] vParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0x23E4 / 9188
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
	uParam4 = uParam4;
	(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &uParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_57() //Position: 0x24D1 / 9425
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("tum_churchCemetary01x");
	Global_39874[43] = 0;
	Global_39874[43].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Function_58(&(Global_39874[43]), iVar0 + 3);
		iVar0++;
	}
	Function_58(&(Global_39874[43]), 15);
	Function_58(&(Global_39874[43]), 16);
	return;
}

void Function_58(int iParam0, int iParam1) //Position: 0x2538 / 9528
{
	if (iParam1 <= 32)
	{
		Function_59(&iParam0, Function_60(iParam1));
	}
	else
	{
		Function_59(&iParam0 + 4, Function_60((iParam1 - 32)));
	}
	return;
}

void Function_59(var uParam0, int iParam1) //Position: 0x2563 / 9571
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_60(bool bParam0) //Position: 0x2574 / 9588
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_61() //Position: 0x2580 / 9600
{
	var uVar0;
	
	Function_62(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	*(&iLocal_0 + 72) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "gapv_flk_SW_set");
	*(&iLocal_0 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_cougar1", 4,203895E-45f, Vector(-3730,356f, 36,8742f, 3889,749f), Vector(0.0f, -24,86723f, 0.0f), Vector(304,9792f, 62,04052f, 150,1546f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[0]);
	*(&iLocal_0 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_cougar2", 4,203895E-45f, Vector(-4134,223f, 12,24644f, 3666,115f), Vector(0.0f, -15,36179f, 0.0f), Vector(171,6768f, 71,60851f, 101,9429f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[1]);
	*(&iLocal_0 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_cougar3", 4,203895E-45f, Vector(-4491,881f, 57,92462f, 3660,276f), Vector(0.0f, 2,802504f, 0.0f), Vector(236,791f, 71,60851f, 82,65063f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[2]);
	*(&iLocal_0 + 8[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_cougar4", 4,203895E-45f, Vector(-4578,422f, 59,23138f, 3413,898f), Vector(0.0f, 20.0f, 0.0f), Vector(131,124f, 87,22605f, 181,0108f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[3]);
	*(&iLocal_0 + 8[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_cougar5", 4,203895E-45f, Vector(-4668,099f, 73,28625f, 3155,711f), Vector(0.0f, 20.0f, 0.0f), Vector(140,4411f, 110,4049f, 90,32107f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[4]);
	*(&iLocal_0 + 8[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_cougar6", 4,203895E-45f, Vector(-4723,405f, 45,17632f, 2960,281f), Vector(0.0f, 20.0f, 0.0f), Vector(150,1546f, 105,9404f, 112,3504f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[5]);
	*(&iLocal_0 + 8[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_cougar9", 4,203895E-45f, Vector(-4515,046f, 40,54584f, 2733,641f), Vector(0.0f, 20.0f, 0.0f), Vector(150,1546f, 105,9404f, 102,4075f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 8[6]);
	*(&iLocal_0 + 216) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "gapv_flk_CENTER_set");
	*(&iLocal_0 + 80[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote13", 4,203895E-45f, Vector(-3852,005f, 43,54098f, 3084,998f), Vector(0.0f, 20.0f, 0.0f), Vector(93,92755f, 46,625f, 128,5317f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[0]);
	*(&iLocal_0 + 80[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote12", 4,203895E-45f, Vector(-3863,799f, 40,15688f, 2789,859f), Vector(0.0f, -12,97189f, 0.0f), Vector(177,9536f, 46,625f, 96,68821f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[1]);
	*(&iLocal_0 + 80[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote11", 4,203895E-45f, Vector(-4013,259f, 43,35964f, 2709,135f), Vector(0.0f, 20.0f, 0.0f), Vector(118,6683f, 46,625f, 128,5317f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[2]);
	*(&iLocal_0 + 80[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote10", 4,203895E-45f, Vector(-4440,555f, 21,08234f, 2939,447f), Vector(0.0f, 20.0f, 0.0f), Vector(128,5317f, 46,625f, 105,729f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[3]);
	*(&iLocal_0 + 80[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote9", 4,203895E-45f, Vector(-3980,355f, 17,56864f, 3519,065f), Vector(0.0f, 20.0f, 0.0f), Vector(83,27316f, 46,625f, 111,4658f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[4]);
	*(&iLocal_0 + 80[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote8", 4,203895E-45f, Vector(-3664,592f, 22,15984f, 3224,203f), Vector(0.0f, 20.0f, 0.0f), Vector(116,8603f, 46,625f, 100,8802f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[5]);
	*(&iLocal_0 + 80[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote7", 4,203895E-45f, Vector(-3890,831f, 48,57193f, 3324,378f), Vector(0.0f, 20.0f, 0.0f), Vector(113,1811f, 46,625f, 128,5317f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[6]);
	*(&iLocal_0 + 80[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote6", 4,203895E-45f, Vector(-4175,384f, 20,45136f, 2847,836f), Vector(0.0f, 20.0f, 0.0f), Vector(148,9403f, 46,625f, 82,46219f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[7]);
	*(&iLocal_0 + 80[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote5", 4,203895E-45f, Vector(-4258,71f, 20,07837f, 3098,507f), Vector(0.0f, 20.0f, 0.0f), Vector(111,7724f, 46,625f, 128,5317f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[8]);
	*(&iLocal_0 + 80[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote4", 4,203895E-45f, Vector(-4145,278f, 8,031376f, 3324,61f), Vector(0.0f, 20.0f, 0.0f), Vector(94,02903f, 46,625f, 117,4999f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[9]);
	*(&iLocal_0 + 80[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote3", 4,203895E-45f, Vector(-3624f, 38,65096f, 3012f), Vector(0.0f, 20.0f, 0.0f), Vector(128,5317f, 46,625f, 105,9383f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[10]);
	*(&iLocal_0 + 80[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote2", 4,203895E-45f, Vector(-4047,658f, 31,78262f, 3123,171f), Vector(0.0f, 20.0f, 0.0f), Vector(74,5942f, 46,625f, 128,5317f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[11]);
	*(&iLocal_0 + 80[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote1", 4,203895E-45f, Vector(-3726,287f, 26,10191f, 3495,43f), Vector(0.0f, 45,93203f, 0.0f), Vector(215,7331f, 46,625f, 83,69476f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[12]);
	*(&iLocal_0 + 80[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_coyote23", 4,203895E-45f, Vector(-4372,67f, 7,027458f, 3300,181f), Vector(0.0f, 28,99118f, 0.0f), Vector(87,18033f, 65,00832f, 284,0809f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[13]);
	*(&iLocal_0 + 80[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wild_horses1", 4,203895E-45f, Vector(-3774,399f, 33,12946f, 2507,993f), Vector(0.0f, 20.0f, 0.0f), Vector(164,3489f, 80,34592f, 193,7874f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[14]);
	*(&iLocal_0 + 80[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wild_horses2", 4,203895E-45f, Vector(-3549,128f, 38,02006f, 2774,042f), Vector(0.0f, 20.0f, 0.0f), Vector(128,2424f, 51,37399f, 128,2424f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 216, &iLocal_0 + 80[15]);
	*(&iLocal_0 + 328) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "gapv_flk_BIRD_set");
	*(&iLocal_0 + 224[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird1", 4,203895E-45f, Vector(-4673,488f, 49,81181f, 3619,366f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[0]);
	*(&iLocal_0 + 224[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird2", 4,203895E-45f, Vector(-4158,848f, 49,81181f, 3610,948f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[1]);
	*(&iLocal_0 + 224[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird3", 4,203895E-45f, Vector(-3743,4f, 49,81181f, 3900,585f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[2]);
	*(&iLocal_0 + 224[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird4", 4,203895E-45f, Vector(-4224.0f, 49,81181f, 2514,306f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[3]);
	*(&iLocal_0 + 224[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird5", 4,203895E-45f, Vector(-4223,394f, 49,81181f, 3067,605f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[4]);
	*(&iLocal_0 + 224[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird6", 4,203895E-45f, Vector(-3850,352f, 49,81181f, 3213,313f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[5]);
	*(&iLocal_0 + 224[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird7", 4,203895E-45f, Vector(-3737,023f, 49,81181f, 2288,829f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[6]);
	*(&iLocal_0 + 224[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird8", 4,203895E-45f, Vector(-3727,507f, 49,81181f, 3392,048f), Vector(0.0f, 20.0f, 0.0f), Vector(323,9767f, 94,73581f, 323,9767f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[7]);
	*(&iLocal_0 + 224[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird9", 4,203895E-45f, Vector(-4544,312f, 72,68917f, 2828,797f), Vector(0.0f, 20.0f, 0.0f), Vector(316,7415f, 106,1634f, 316,7415f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[8]);
	*(&iLocal_0 + 224[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird10", 4,203895E-45f, Vector(-4387,063f, 72,68917f, 3291,948f), Vector(0.0f, 20.0f, 0.0f), Vector(316,7415f, 106,1634f, 316,7415f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[9]);
	*(&iLocal_0 + 224[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird11", 4,203895E-45f, Vector(-4749,257f, 72,68917f, 3153,838f), Vector(0.0f, 20.0f, 0.0f), Vector(316,7415f, 106,1634f, 316,7415f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[10]);
	*(&iLocal_0 + 224[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_bird12", 4,203895E-45f, Vector(-3801,342f, 72,68917f, 2786,786f), Vector(0.0f, 20.0f, 0.0f), Vector(316,7415f, 106,1634f, 316,7415f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 224[11]);
	*(&iLocal_0 + 392) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "gapv_flk_NORTH_set");
	*(&iLocal_0 + 336[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_wolf1", 4,203895E-45f, Vector(-4228,547f, 29,1136f, 2643,438f), Vector(0.0f, 20.0f, 0.0f), Vector(111,5883f, 136,3014f, 95,68554f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 392, &iLocal_0 + 336[0]);
	*(&iLocal_0 + 336[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_wolf2", 4,203895E-45f, Vector(-4090,676f, 3,011772f, 2466,493f), Vector(0.0f, 20.0f, 0.0f), Vector(110,3815f, 91,51485f, 107,7598f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 392, &iLocal_0 + 336[1]);
	*(&iLocal_0 + 336[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_wolf3", 4,203895E-45f, Vector(-3864,493f, 89,40626f, 2090,393f), Vector(0.0f, 20.0f, 0.0f), Vector(123,8143f, 129,7085f, 227,4212f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 392, &iLocal_0 + 336[2]);
	*(&iLocal_0 + 336[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_wolf4", 4,203895E-45f, Vector(-4083,459f, 94,8625f, 2190,223f), Vector(0.0f, 20.0f, 0.0f), Vector(117,2605f, 129,7085f, 176,7809f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 392, &iLocal_0 + 336[3]);
	*(&iLocal_0 + 336[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_wolf5", 4,203895E-45f, Vector(-4182,706f, 61,91979f, 2404,235f), Vector(0.0f, 40,66191f, 0.0f), Vector(86,04659f, 91,51485f, 320,4328f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 392, &iLocal_0 + 336[4]);
	*(&iLocal_0 + 336[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gtrv_wolf6", 4,203895E-45f, Vector(-4379,103f, 30,77201f, 2512,407f), Vector(0.0f, 58,91275f, 0.0f), Vector(132,8442f, 91,51485f, 97,09076f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 392, &iLocal_0 + 336[5]);
	*(&iLocal_0 + 400) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ngtrv_bats", 4,203895E-45f, Vector(-4346,91f, 30,45788f, 2756,438f), Vector(0.0f, 148,838f, 0.0f), Vector(14,41106f, 11,15615f, 16,66331f));
	*(&iLocal_0 + 544) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "gapv_aquaticWildlife_set");
	*(&iLocal_0 + 408[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_01", 4,203895E-45f, Vector(-5209,555f, 22,96273f, 3348,832f), Vector(0.0f, 20.0f, 0.0f), Vector(137,0641f, 137,0641f, 137,0641f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[0]);
	*(&iLocal_0 + 408[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_02", 4,203895E-45f, Vector(-4843,528f, 22,96273f, 3439,209f), Vector(0.0f, 20.0f, 0.0f), Vector(89,7691f, 89,7691f, 89,7691f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[1]);
	*(&iLocal_0 + 408[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_03", 4,203895E-45f, Vector(-4983,613f, 22,96273f, 3592,85f), Vector(0.0f, 29,19471f, 0.0f), Vector(112,0248f, 89,7691f, 250,294f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[2]);
	*(&iLocal_0 + 408[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_04", 4,203895E-45f, Vector(-4899,261f, 22,96273f, 3839,88f), Vector(0.0f, 29,19471f, 0.0f), Vector(145,6729f, 89,7691f, 111,7454f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[3]);
	*(&iLocal_0 + 408[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_05", 4,203895E-45f, Vector(-4518,043f, 22,96273f, 3733,987f), Vector(0.0f, 0,06501988f, 0.0f), Vector(162,1872f, 79,42868f, 98,87355f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[4]);
	*(&iLocal_0 + 408[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_06", 4,203895E-45f, Vector(-4731,243f, 22,96273f, 3767,873f), Vector(0.0f, 16,62488f, 0.0f), Vector(97,6675f, 47,83115f, 31,87144f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[5]);
	*(&iLocal_0 + 408[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_07", 4,203895E-45f, Vector(-4128,314f, 22,96273f, 3861,144f), Vector(0.0f, -18,41745f, 0.0f), Vector(162,1872f, 79,42868f, 98,87355f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[6]);
	*(&iLocal_0 + 408[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_08", 4,203895E-45f, Vector(-3890,513f, 22,96273f, 4014,724f), Vector(0.0f, -32,20895f, 0.0f), Vector(162,1872f, 79,42868f, 80,98814f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[7]);
	*(&iLocal_0 + 408[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_09", 4,203895E-45f, Vector(-3513,995f, 22,96273f, 4009,769f), Vector(0.0f, 19,85783f, 0.0f), Vector(116,8982f, 57,2491f, 58,3731f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[8]);
	*(&iLocal_0 + 408[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_010", 4,203895E-45f, Vector(-3730,328f, 22,96273f, 4046,1f), Vector(0.0f, -19,16317f, 0.0f), Vector(116,8982f, 57,2491f, 58,3731f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[9]);
	*(&iLocal_0 + 408[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_011", 4,203895E-45f, Vector(-3302,616f, 22,96273f, 3849,584f), Vector(0.0f, 19,62695f, 0.0f), Vector(178,1278f, 87,23534f, 88,94808f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[10]);
	*(&iLocal_0 + 408[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_012", 4,203895E-45f, Vector(-3021,879f, 22,96273f, 3826,465f), Vector(0.0f, 19,62695f, 0.0f), Vector(178,1278f, 87,23534f, 88,94808f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[11]);
	*(&iLocal_0 + 408[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_013", 4,203895E-45f, Vector(-2795,638f, 22,96273f, 3750,5f), Vector(0.0f, -9,077846f, 0.0f), Vector(123,1342f, 87,23534f, 104,1018f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[12]);
	*(&iLocal_0 + 408[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_014", 4,203895E-45f, Vector(-2610,682f, 22,96273f, 3814,905f), Vector(0.0f, -9,077846f, 0.0f), Vector(123,1342f, 87,23534f, 74,04646f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[13]);
	*(&iLocal_0 + 408[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_015", 4,203895E-45f, Vector(-4314,921f, 22,96273f, 3752,152f), Vector(0.0f, -31,03139f, 0.0f), Vector(116,8665f, 57,23357f, 71,24488f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[14]);
	*(&iLocal_0 + 408[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_aquaticWildlife_016", 4,203895E-45f, Vector(-4974,818f, 22,96273f, 3987,288f), Vector(0.0f, -86,81307f, 0.0f), Vector(116,8665f, 57,23357f, 71,24488f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 544, &iLocal_0 + 408[15]);
	*(&iLocal_0 + 552) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gapv_RepulsionExclusion", 4,203895E-45f, Vector(-3775,939f, 27,31711f, 2676,473f), Vector(0.0f, 13,22444f, 0.0f), Vector(12,58057f, 17,39492f, 56,1422f));
	*(&iLocal_0 + 560) = Vector(-3934,543f, 29,14526f, 2942,613f);
	*(&iLocal_0 + 560 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_0 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "tumf_robbery_bad", Vector(-3934,543f, 29,14526f, 2942,613f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_0 + 592) = Vector(-3975,657f, 27,81833f, 2920,438f);
	*(&iLocal_0 + 592 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_0 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "tumf_robbery_good", Vector(-3975,657f, 27,81833f, 2920,438f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_0 + 624) = Vector(-3977,408f, 28,62815f, 2909,98f);
	*(&iLocal_0 + 624 + 12) = Vector(0.0f, 168,126f, 0.0f);
	*(&iLocal_0 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "tumf_robbery_loot", Vector(-3977,408f, 28,62815f, 2909,98f), Vector(0.0f, 168,126f, 0.0f));
	*(&iLocal_0 + 656) = Vector(-3951,192f, 28,53456f, 2969,987f);
	*(&iLocal_0 + 656 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_0 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "tumf_robbery_bad1", Vector(-3951,192f, 28,53456f, 2969,987f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_0 + 688) = Vector(-3936,816f, 29,46948f, 2922,49f);
	*(&iLocal_0 + 688 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_0 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "tumf_robbery_bad2", Vector(-3936,816f, 29,46948f, 2922,49f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_0 + 720) = Vector(-3988,763f, 29,1018f, 2972,469f);
	*(&iLocal_0 + 720 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_0 + 744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "tumf_robbery_bad3", Vector(-3988,763f, 29,1018f, 2972,469f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_0 + 752) = Vector(-3990,54f, 27,53285f, 2911,297f);
	*(&iLocal_0 + 752 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_0 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "tumf_robbery_good1", Vector(-3990,54f, 27,53285f, 2911,297f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_0 + 784) = Vector(-3973,481f, 27,91159f, 2902,941f);
	*(&iLocal_0 + 784 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_0 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "tumf_robbery_good2", Vector(-3973,481f, 27,91159f, 2902,941f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_0 + 816) = Vector(-3998,449f, 27,70465f, 2914,286f);
	*(&iLocal_0 + 816 + 12) = Vector(0.0f, 168,1262f, 0.0f);
	*(&iLocal_0 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "tumf_robbery_good3", Vector(-3998,449f, 27,70465f, 2914,286f), Vector(0.0f, 168,1262f, 0.0f));
	*(&iLocal_0 + 848) = Vector(-3935,961f, 28,107f, 2635,271f);
	*(&iLocal_0 + 848 + 12) = Vector(0.0f, 213,155f, 0.0f);
	*(&iLocal_0 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_gtr1", Vector(-3935,961f, 28,107f, 2635,271f), Vector(0.0f, 213,155f, 0.0f));
	*(&iLocal_0 + 880) = Vector(-3941,559f, 27,512f, 2623,708f);
	*(&iLocal_0 + 880 + 12) = Vector(0.0f, 81,667f, 0.0f);
	*(&iLocal_0 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_gtr1", Vector(-3941,559f, 27,512f, 2623,708f), Vector(0.0f, 81,667f, 0.0f));
	*(&iLocal_0 + 912) = Vector(-3945,927f, 27,519f, 2636,138f);
	*(&iLocal_0 + 912 + 12) = Vector(0.0f, 265,59f, 0.0f);
	*(&iLocal_0 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_gtr1", Vector(-3945,927f, 27,519f, 2636,138f), Vector(0.0f, 265,59f, 0.0f));
	*(&iLocal_0 + 944) = Vector(-3942,989f, 27,608f, 2635,25f);
	*(&iLocal_0 + 944 + 12) = Vector(0.0f, 277,076f, 0.0f);
	*(&iLocal_0 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_gtr1", Vector(-3942,989f, 27,608f, 2635,25f), Vector(0.0f, 277,076f, 0.0f));
	*(&iLocal_0 + 976) = Vector(-3942,084f, 27,596f, 2631,013f);
	*(&iLocal_0 + 976 + 12) = Vector(0.0f, 243,758f, 0.0f);
	*(&iLocal_0 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_gtr1", Vector(-3942,084f, 27,596f, 2631,013f), Vector(0.0f, 243,758f, 0.0f));
	*(&iLocal_0 + 1008) = Vector(-3788,462f, 21,377f, 2650,921f);
	*(&iLocal_0 + 1008 + 12) = Vector(0.0f, 15,563f, 0.0f);
	*(&iLocal_0 + 1032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingOffScreen_gtr1", Vector(-3788,462f, 21,377f, 2650,921f), Vector(0.0f, 15,563f, 0.0f));
	*(&iLocal_0 + 1040) = Vector(-3936,042f, 31,487f, 2638,841f);
	*(&iLocal_0 + 1040 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingNoose___1", Vector(-3936,042f, 31,487f, 2638,841f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1072) = Vector(-3936,05f, 27,751f, 2638,806f);
	*(&iLocal_0 + 1072 + 12) = Vector(0.0f, 343,3f, 0.0f);
	*(&iLocal_0 + 1096) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingguy_gtr1", Vector(-3936,05f, 27,751f, 2638,806f), Vector(0.0f, 343,3f, 0.0f));
	*(&iLocal_0 + 1104) = Vector(-4424.0f, 25,73199f, 2967,308f);
	*(&iLocal_0 + 1104 + 12) = Vector(0.0f, -183,4835f, 0.0f);
	*(&iLocal_0 + 1128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_gtr2", Vector(-4424.0f, 25,73199f, 2967,308f), Vector(0.0f, -183,4835f, 0.0f));
	*(&iLocal_0 + 1136) = Vector(-4420.0f, 25,59995f, 2968f);
	*(&iLocal_0 + 1136 + 12) = Vector(0.0f, -20,80237f, 0.0f);
	*(&iLocal_0 + 1160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_gtr2", Vector(-4420.0f, 25,59995f, 2968f), Vector(0.0f, -20,80237f, 0.0f));
	*(&iLocal_0 + 1168) = Vector(-4427,648f, 25,59995f, 2973,27f);
	*(&iLocal_0 + 1168 + 12) = Vector(0.0f, -54,54519f, 0.0f);
	*(&iLocal_0 + 1192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_gtr2", Vector(-4427,648f, 25,59995f, 2973,27f), Vector(0.0f, -54,54519f, 0.0f));
	*(&iLocal_0 + 1200) = Vector(-4416,209f, 25,59994f, 2971,18f);
	*(&iLocal_0 + 1200 + 12) = Vector(0.0f, 92,50725f, 0.0f);
	*(&iLocal_0 + 1224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_gtr2", Vector(-4416,209f, 25,59994f, 2971,18f), Vector(0.0f, 92,50725f, 0.0f));
	*(&iLocal_0 + 1232) = Vector(-4416.0f, 25,59996f, 2968f);
	*(&iLocal_0 + 1232 + 12) = Vector(0.0f, 111,9049f, 0.0f);
	*(&iLocal_0 + 1256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_gtr2", Vector(-4416.0f, 25,59996f, 2968f), Vector(0.0f, 111,9049f, 0.0f));
	*(&iLocal_0 + 1264) = Vector(-4424.0f, 25,69681f, 2970,613f);
	*(&iLocal_0 + 1264 + 12) = Vector(0.0f, 132,7829f, 0.0f);
	*(&iLocal_0 + 1288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingguy_gtr2", Vector(-4424.0f, 25,69681f, 2970,613f), Vector(0.0f, 132,7829f, 0.0f));
	*(&iLocal_0 + 1296) = Vector(-4064f, 9,035286f, 3491,478f);
	*(&iLocal_0 + 1296 + 12) = Vector(0.0f, 178,4079f, 0.0f);
	*(&iLocal_0 + 1320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_gtr3", Vector(-4064f, 9,035286f, 3491,478f), Vector(0.0f, 178,4079f, 0.0f));
	*(&iLocal_0 + 1328) = Vector(-4067,176f, 9,03529f, 3501,938f);
	*(&iLocal_0 + 1328 + 12) = Vector(0.0f, -30,33124f, 0.0f);
	*(&iLocal_0 + 1352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_gtr3", Vector(-4067,176f, 9,03529f, 3501,938f), Vector(0.0f, -30,33124f, 0.0f));
	*(&iLocal_0 + 1360) = Vector(-4064.0f, 9,03529f, 3498,493f);
	*(&iLocal_0 + 1360 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1384) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_gtr3", Vector(-4064.0f, 9,03529f, 3498,493f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1392) = Vector(-4069,828f, 9,03529f, 3496f);
	*(&iLocal_0 + 1392 + 12) = Vector(0.0f, -80,80447f, 0.0f);
	*(&iLocal_0 + 1416) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_gtr3", Vector(-4069,828f, 9,03529f, 3496f), Vector(0.0f, -80,80447f, 0.0f));
	*(&iLocal_0 + 1424) = Vector(-4058,72f, 9,035286f, 3494,306f);
	*(&iLocal_0 + 1424 + 12) = Vector(0.0f, 110,2133f, 0.0f);
	*(&iLocal_0 + 1448) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_gtr3", Vector(-4058,72f, 9,035286f, 3494,306f), Vector(0.0f, 110,2133f, 0.0f));
	*(&iLocal_0 + 1456) = Vector(-4064,083f, 9,03529f, 3494,821f);
	*(&iLocal_0 + 1456 + 12) = Vector(0.0f, 179,5099f, 0.0f);
	*(&iLocal_0 + 1480) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingguy_gtr3", Vector(-4064,083f, 9,03529f, 3494,821f), Vector(0.0f, 179,5099f, 0.0f));
	return 1;
}

void Function_62(int iParam0, int iParam1) //Position: 0x45E6 / 17894
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

var Function_63() //Position: 0x4630 / 17968
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_64(char* cParam0) //Position: 0x4645 / 17989
{
	if (!Function_52(128))
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

