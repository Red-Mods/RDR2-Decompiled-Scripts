//Decompiled with MagicRDR v1.0
//Function Count : 63
//Statics Count : 380
//Natives Count : 115
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 3;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 10;
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
	var uLocal_38 = 2;
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
	var uLocal_50 = 7;
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
	var uLocal_68 = 11;
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
	var uLocal_96 = 3;
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
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	var uLocal_356 = 0;
	int iLocal_357 = 0;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_354 = 0;
	iLocal_355 = &uScriptParam_0;
	Function_62("Initializing Cholla Springs Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_357 = 500;
		uLocal_358 = Function_61();
		switch (iLocal_354)
		{
			case 0x00000000:
				if (Function_59())
				{
					REQUEST_STRING_TABLE("graveyards");
					iLocal_354 = 1;
				}
				iLocal_357 = 0;
				break;
			
			case 0x00000001:
				Function_58(&uLocal_360);
				Function_57(&uLocal_360, &uLocal_364, 2, &Global_44085[iLocal_3559] + 8, 4294967295, 0);
				Function_57(&uLocal_360, &uLocal_364, 5, &iLocal_0 + 512, 4294967295, 0);
				Function_56(&iLocal_0 + 512, 20);
				HORSE_ADD_REPULSION_EXCLUSION_VOLUME(&iLocal_0 + 416);
				iLocal_354 = 2;
				iLocal_357 = 0;
				break;
			
			case 0x00000002:
				if (HAS_STRING_TABLE_LOADED("graveyards"))
				{
					Function_55(&(Global_43791[iLocal_355]), 16);
					Function_54("Finished Initializing Cholla Springs Volumes", 5.0f);
					iLocal_354 = 3;
				}
				iLocal_357 = 0;
				break;
			
			case 0x00000003:
				if (!Function_53(&Global_46760))
				{
					Function_13(&uLocal_360, &uLocal_364, &uLocal_358, uScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_357);
	}
	if (IS_VOLUME_VALID(&iLocal_0 + 416))
	{
		HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(&iLocal_0 + 416);
	}
	REMOVE_STRING_TABLE("graveyards");
	Function_11(&(Global_39874[33]));
	Function_3(&uLocal_360, &uLocal_364);
	Function_2();
	Function_1(&(Global_43791[iLocal_355]), 16);
	Function_54("Unloaded Cholla Springs Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x1E4 / 484
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x1FE / 510
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(var uParam0, vector3[] vParam1) //Position: 0x20A / 522
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

void Function_4(int iParam0, int iParam1, int iParam2) //Position: 0x267 / 615
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

void Function_5(int iParam0, int iParam1, bool bParam2) //Position: 0x351 / 849
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
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
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

void Function_6() //Position: 0x4D0 / 1232
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_7(int iParam0) //Position: 0x4DC / 1244
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

void Function_8(int iParam0) //Position: 0x526 / 1318
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

void Function_9(struct<17> Param0) //Position: 0x56C / 1388
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_10(struct<17> Param0) //Position: 0x589 / 1417
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(vector3 vParam0) //Position: 0x5A7 / 1447
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

void Function_12(int iParam0) //Position: 0x5DC / 1500
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&iParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, &iParam0);
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

void Function_13(vector3 vParam0) //Position: 0x62B / 1579
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

bool Function_14(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x6B5 / 1717
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

void Function_15(int iParam0) //Position: 0xB0D / 2829
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

float Function_16(int iParam0) //Position: 0xBFE / 3070
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_17(int iParam0) //Position: 0xC3B / 3131
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_18(int iParam0, int iParam1) //Position: 0xC74 / 3188
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

var Function_19(int iParam0) //Position: 0xCDE / 3294
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

int Function_20(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xD36 / 3382
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

void Function_21(bool bParam0) //Position: 0xF5E / 3934
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

void Function_22(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xFFC / 4092
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_17(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_17(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_30(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_27(fVar19, fParam2, &iVar17, &iVar18);
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

var Function_23() //Position: 0x163A / 5690
{
	int iVar0;
	
	return &iVar0;
}

var Function_24(int iParam0) //Position: 0x1643 / 5699
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_25(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1654 / 5716
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

struct<32> Function_26(char* cParam0) //Position: 0x174B / 5963
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_27(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1766 / 5990
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_29(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_28(Function_29(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_28(int iParam0, int iParam1) //Position: 0x17CD / 6093
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_29(int iParam0, bool bParam1) //Position: 0x17DF / 6111
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_30(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x17F1 / 6129
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

int Function_31(int iParam0) //Position: 0x1925 / 6437
{
	return Global_55480[iParam016].f_96;
}

void Function_32(int iParam0) //Position: 0x1934 / 6452
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

int Function_33(int iParam0, float fParam1, bool bParam2) //Position: 0x1ACE / 6862
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

void Function_34(var uParam0, int iParam1) //Position: 0x1D12 / 7442
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_35(int iParam0, var uParam1, var uParam2) //Position: 0x1D1F / 7455
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_36(var uParam0, int iParam1) //Position: 0x1D49 / 7497
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_37(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x1D66 / 7526
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
	if (!IS_OBJECT_VALID(&uParam3) && !iParam0 != 4)
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
		SET_CRIME_VICTIM(&uVar2, &uParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&uParam3, &Var0);
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

void Function_38() //Position: 0x2019 / 8217
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

void Function_39(var uParam0, int iParam1) //Position: 0x208C / 8332
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

bool Function_40(bool bParam0) //Position: 0x20C2 / 8386
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

int Function_41(int iParam0) //Position: 0x2138 / 8504
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_42() //Position: 0x2149 / 8521
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

bool Function_43(int iParam0) //Position: 0x2162 / 8546
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_44(int iParam0) //Position: 0x2178 / 8568
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_45(int iParam0) //Position: 0x218D / 8589
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_46(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x21AB / 8619
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

bool Function_47(int iParam0) //Position: 0x225A / 8794
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_48(struct<17> Param0) //Position: 0x2270 / 8816
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_49(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2283 / 8835
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

void Function_50(int iParam0, int iParam1) //Position: 0x22FD / 8957
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_8(iParam0);
	Function_7(&uVar0);
	PRINTNL();
	Function_5(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_51(int iParam0) //Position: 0x2326 / 8998
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

bool Function_52(int iParam0) //Position: 0x2346 / 9030
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_53(int[] iParam0) //Position: 0x2362 / 9058
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

void Function_54(char* cParam0) //Position: 0x23B3 / 9139
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

void Function_55(var uParam0, int iParam1) //Position: 0x23F3 / 9203
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_56(var uParam0, bool bParam1) //Position: 0x2404 / 9220
{
	if (DECOR_CHECK_EXIST(&uParam0, "locflag"))
	{
		DECOR_SET_INT(&uParam0, "locflag", (32 || DECOR_GET_INT(&uParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", 32);
	}
	DECOR_SET_INT(&uParam0, "customweather", bParam1);
	return;
}

void Function_57(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x2470 / 9328
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
	(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &iParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_58(struct<5> Param0) //Position: 0x255D / 9565
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

bool Function_59() //Position: 0x256E / 9582
{
	var uVar0;
	
	Function_60(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("ChollaSprings_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "cho_v_robbery_bank", 2,802597E-45f, Vector(-2129,407f, 16,70768f, 2629,63f), Vector(0.0f, 0.0f, 0.0f), Vector(8,191952f, 4,770277f, 12,96974f));
	*(&iLocal_0 + 48) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chov_flk_SE_set");
	*(&iLocal_0 + 16[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote13", 4,203895E-45f, Vector(-2007,02f, 44,86926f, 3521,066f), Vector(0.0f, 99,33791f, 0.0f), Vector(152,3102f, 72,87077f, 393,4008f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 48, &iLocal_0 + 16[0]);
	*(&iLocal_0 + 16[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote11", 4,203895E-45f, Vector(-2286,051f, 71,85783f, 3168,56f), Vector(0.0f, 114,533f, 0.0f), Vector(231,7098f, 72,87077f, 241,9312f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 48, &iLocal_0 + 16[1]);
	*(&iLocal_0 + 16[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote6", 4,203895E-45f, Vector(-1403,146f, 79,01429f, 3179,861f), Vector(0.0f, 20.0f, 0.0f), Vector(315,3113f, 72,87077f, 89,50647f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 48, &iLocal_0 + 16[2]);
	*(&iLocal_0 + 144) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chov_flk_BIRD_set");
	*(&iLocal_0 + 56[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_bird9", 2,802597E-45f, Vector(-1958,434f, 101,0974f, 2226,605f), Vector(0.0f, 0.0f, 0.0f), Vector(533,0086f, 265,0622f, 533,0086f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 56[0]);
	*(&iLocal_0 + 56[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_bird8", 2,802597E-45f, Vector(-1918,184f, 104,9177f, 2746,359f), Vector(0.0f, 0.0f, 0.0f), Vector(533,0086f, 265,0622f, 533,0086f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 56[1]);
	*(&iLocal_0 + 56[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_bird7", 2,802597E-45f, Vector(-1721,521f, 124,7826f, 3177,619f), Vector(0.0f, 0.0f, 0.0f), Vector(533,0086f, 265,0622f, 533,0086f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 56[2]);
	*(&iLocal_0 + 56[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_bird6", 2,802597E-45f, Vector(-2421,43f, 99,94559f, 2296,987f), Vector(0.0f, 0.0f, 0.0f), Vector(533,0086f, 265,0622f, 533,0086f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 56[3]);
	*(&iLocal_0 + 56[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_bird5", 2,802597E-45f, Vector(-3326,428f, 99,94559f, 2311,53f), Vector(0.0f, 0.0f, 0.0f), Vector(533,0086f, 265,0622f, 533,0086f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 56[4]);
	*(&iLocal_0 + 56[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_bird4", 2,802597E-45f, Vector(-2253,922f, 99,94559f, 3297,425f), Vector(0.0f, 0.0f, 0.0f), Vector(533,0086f, 265,0622f, 533,0086f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 56[5]);
	*(&iLocal_0 + 56[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_bird3", 2,802597E-45f, Vector(-2995,438f, 99,94559f, 2847,024f), Vector(0.0f, 0.0f, 0.0f), Vector(533,0086f, 265,0622f, 533,0086f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 56[6]);
	*(&iLocal_0 + 56[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_bird2", 2,802597E-45f, Vector(-2442,531f, 124,5297f, 2840,813f), Vector(0.0f, 0.0f, 0.0f), Vector(533,0086f, 265,0622f, 533,0086f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 56[7]);
	*(&iLocal_0 + 56[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_bird1", 2,802597E-45f, Vector(-2797,079f, 146,3613f, 2340,662f), Vector(0.0f, 0.0f, 0.0f), Vector(533,0086f, 265,0622f, 533,0086f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 56[8]);
	*(&iLocal_0 + 56[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_bird10", 2,802597E-45f, Vector(-1744.0f, 64,80349f, 3761,037f), Vector(0.0f, 0.0f, 0.0f), Vector(483,619f, 284,8854f, 636,4444f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 144, &iLocal_0 + 56[9]);
	*(&iLocal_0 + 176) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chov_flk_NW_set");
	*(&iLocal_0 + 152[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote16", 4,203895E-45f, Vector(-3405,162f, 132,1931f, 2282,319f), Vector(0.0f, 20.0f, 0.0f), Vector(483,8218f, 124,0656f, 251,9133f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 176, &iLocal_0 + 152[0]);
	*(&iLocal_0 + 152[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote15", 4,203895E-45f, Vector(-2627,713f, 85,36726f, 2137,038f), Vector(0.0f, 12,66908f, 0.0f), Vector(337,0677f, 72,87077f, 171,2465f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 176, &iLocal_0 + 152[1]);
	*(&iLocal_0 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_corr_g", 2,802597E-45f, Vector(-2162,67f, 17,85944f, 2529,48f), Vector(0.0f, 0.0f, 0.0f), Vector(21,95249f, 6,09781f, 18,1392f));
	*(&iLocal_0 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_corr_g1", 4,203895E-45f, Vector(-3256,318f, 17,42523f, 2684,909f), Vector(0.0f, -4,000802f, 0.0f), Vector(19,15676f, 3,784842f, 14,37248f));
	*(&iLocal_0 + 264) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chov_flk_CENTER_set");
	*(&iLocal_0 + 200[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote14", 4,203895E-45f, Vector(-3470,75f, 57,58878f, 2907,83f), Vector(0.0f, 60,3094f, 0.0f), Vector(273,8005f, 72,87077f, 432,1263f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[0]);
	*(&iLocal_0 + 200[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote12", 4,203895E-45f, Vector(-2857,875f, 45,37122f, 2931,935f), Vector(0.0f, 0,5088242f, 0.0f), Vector(370,2651f, 72,87077f, 163,3423f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[1]);
	*(&iLocal_0 + 200[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote10", 4,203895E-45f, Vector(-2030,104f, 64,89014f, 2199,561f), Vector(0.0f, 20.0f, 0.0f), Vector(289,1952f, 72,87077f, 305,7238f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[2]);
	*(&iLocal_0 + 200[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote9", 4,203895E-45f, Vector(-1862,307f, 69,70703f, 2537,985f), Vector(0.0f, 20.0f, 0.0f), Vector(187,955f, 72,87077f, 71,0254f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[3]);
	*(&iLocal_0 + 200[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote8", 4,203895E-45f, Vector(-2735,441f, 52,57456f, 2534,006f), Vector(0.0f, 20.0f, 0.0f), Vector(500,0366f, 72,87077f, 186,022f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[4]);
	*(&iLocal_0 + 200[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote5", 4,203895E-45f, Vector(-2339,341f, 84,82725f, 2758,449f), Vector(0.0f, 38,60125f, 0.0f), Vector(177,2788f, 72,87077f, 163,7006f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[5]);
	*(&iLocal_0 + 200[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_coyote7", 4,203895E-45f, Vector(-1710,038f, 92,56963f, 2877,446f), Vector(0.0f, 36,57126f, 0.0f), Vector(243,0385f, 72,87077f, 316,2653f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[6]);
	*(&iLocal_0 + 368) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chov_aquaticWildlife_set");
	*(&iLocal_0 + 272[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder", 4,203895E-45f, Vector(-1952,099f, 2,777636f, 3682,922f), Vector(0.0f, 20.0f, 0.0f), Vector(127,5827f, 26,76715f, 68,97265f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 368, &iLocal_0 + 272[0]);
	*(&iLocal_0 + 272[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder1", 4,203895E-45f, Vector(-1806,972f, 1,447045f, 3676,27f), Vector(0.0f, -25,7432f, 0.0f), Vector(127,5827f, 34,46169f, 55,42039f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 368, &iLocal_0 + 272[1]);
	*(&iLocal_0 + 272[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder2", 4,203895E-45f, Vector(-1609,237f, -7,771293f, 3675,061f), Vector(0.0f, 20,18436f, 0.0f), Vector(127,5827f, 42,95206f, 41,30914f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 368, &iLocal_0 + 272[2]);
	*(&iLocal_0 + 272[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder3", 4,203895E-45f, Vector(-1500,997f, 6,72601f, 3584,961f), Vector(0.0f, 90,64689f, 0.0f), Vector(69,98493f, 32,80807f, 49,03263f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 368, &iLocal_0 + 272[3]);
	*(&iLocal_0 + 272[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder4", 4,203895E-45f, Vector(-1553,605f, -10,55402f, 3395,087f), Vector(0.0f, 69,65346f, 0.0f), Vector(95,48157f, 53,43207f, 66,89602f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 368, &iLocal_0 + 272[4]);
	*(&iLocal_0 + 272[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder5", 4,203895E-45f, Vector(-1536,674f, -7,79462f, 3499,095f), Vector(0.0f, 115,5425f, 0.0f), Vector(95,48157f, 46,10002f, 41,30582f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 368, &iLocal_0 + 272[5]);
	*(&iLocal_0 + 272[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder6", 4,203895E-45f, Vector(-1324,39f, -9,726888f, 3297,891f), Vector(0.0f, 198,4867f, 0.0f), Vector(177,3927f, 67,16534f, 46,03975f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 368, &iLocal_0 + 272[6]);
	*(&iLocal_0 + 272[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder7", 4,203895E-45f, Vector(-1485,543f, -6,896104f, 3351,123f), Vector(0.0f, 198,4867f, 0.0f), Vector(60,65277f, 59,69416f, 56,75384f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 368, &iLocal_0 + 272[7]);
	*(&iLocal_0 + 272[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder8", 4,203895E-45f, Vector(-1084,366f, -1,173465f, 3259,22f), Vector(0.0f, 165,3063f, 0.0f), Vector(113,8503f, 53,6678f, 39,58623f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 368, &iLocal_0 + 272[8]);
	*(&iLocal_0 + 272[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder9", 4,203895E-45f, Vector(-1837,354f, 83,44997f, 3238,259f), Vector(0.0f, 57,87493f, 0.0f), Vector(95,28522f, 58,2637f, 150,1283f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 368, &iLocal_0 + 272[9]);
	*(&iLocal_0 + 272[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder10", 4,203895E-45f, Vector(-1704,853f, 89,20071f, 3141,556f), Vector(0.0f, 48,99913f, 0.0f), Vector(75,2394f, 55,67625f, 85,32506f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 368, &iLocal_0 + 272[10]);
	*(&iLocal_0 + 376) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_Venters", 4,203895E-45f, Vector(-2015,121f, 52,26184f, 3032,706f), Vector(0.0f, 20.0f, 0.0f), Vector(65,26729f, 31,83129f, 80,59859f));
	*(&iLocal_0 + 416) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chov_RepulsionExclusion_set");
	*(&iLocal_0 + 384[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "rVol", 4,203895E-45f, Vector(-2667,281f, 24,92847f, 2768,899f), Vector(0.0f, 47,7562f, 0.0f), Vector(16,44051f, 10,17344f, 105,9122f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 416, &iLocal_0 + 384[0]);
	*(&iLocal_0 + 384[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "rVol1", 4,203895E-45f, Vector(-2593,523f, 24,92847f, 2861,392f), Vector(0.0f, 30,61959f, 0.0f), Vector(16,44051f, 10,17344f, 46,57639f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 416, &iLocal_0 + 384[1]);
	*(&iLocal_0 + 384[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "rVol2", 4,203895E-45f, Vector(-2563,586f, 24,92847f, 2939,262f), Vector(0.0f, 25,17644f, 0.0f), Vector(13,3478f, 10,17344f, 55,50443f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 416, &iLocal_0 + 384[2]);
	*(&iLocal_0 + 424) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nchov_null", 2,802597E-45f, Vector(-1675,096f, 100,2788f, 1882,939f), Vector(-2,186509f, 68,0397f, 0.0f), Vector(19,16553f, 19,16553f, 307,3276f));
	*(&iLocal_0 + 432) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_bhstop", 2,802597E-45f, Vector(-2093,543f, 16,72504f, 2606,436f), Vector(0.0f, -67,146f, 0.0f), Vector(13,1825f, 4,702487f, 11,50658f));
	*(&iLocal_0 + 440) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_venter_chickens", 4,203895E-45f, Vector(-2019,877f, 46,91924f, 3021,859f), Vector(0.0f, -85,7293f, 0.0f), Vector(5,489199f, 5,910119f, 11,7782f));
	*(&iLocal_0 + 448) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_venter_livestock", 4,203895E-45f, Vector(-2016,426f, 45,01529f, 3030,329f), Vector(0.0f, -41,84417f, 0.0f), Vector(13,36018f, 9,924715f, 16,4985f));
	*(&iLocal_0 + 456) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_critchly", 4,203895E-45f, Vector(-2919,004f, 13,05096f, 2960,33f), Vector(0.0f, -1,008442f, 0.0f), Vector(86,22987f, 36,01125f, 91,18248f));
	*(&iLocal_0 + 464) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_critchly_goats", 4,203895E-45f, Vector(-2916,517f, 13,05096f, 2948,477f), Vector(0.0f, 47,11259f, 0.0f), Vector(25,86532f, 11,23466f, 32,4671f));
	*(&iLocal_0 + 472) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_critchly_chickens", 4,203895E-45f, Vector(-2913,593f, 13,05096f, 2987,315f), Vector(0.0f, 76,97934f, 0.0f), Vector(10,5309f, 4,57412f, 13,21877f));
	*(&iLocal_0 + 480) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_venter_dog", 4,203895E-45f, Vector(-2015,121f, 52,26184f, 3032,706f), Vector(0.0f, 20.0f, 0.0f), Vector(24,22468f, 11,81454f, 29,91507f));
	*(&iLocal_0 + 488) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_critchly_dog", 4,203895E-45f, Vector(-2919,004f, 13,05096f, 2960,33f), Vector(0.0f, -1,008442f, 0.0f), Vector(44,99642f, 18,79137f, 47,58079f));
	*(&iLocal_0 + 496) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_critchly_barn", 2,802597E-45f, Vector(-2905,128f, 11,63437f, 2947,027f), Vector(0.0f, 43,06549f, 0.0f), Vector(9,434371f, 8,059836f, 11,34686f));
	*(&iLocal_0 + 504) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_venter_barn", 2,802597E-45f, Vector(-2006,876f, 42,18377f, 3047,409f), Vector(0.0f, 59,41034f, 0.0f), Vector(9,526102f, 4,852225f, 9,324677f));
	*(&iLocal_0 + 512) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chov_weather01", 2,802597E-45f, Vector(-1522,265f, 95,79754f, 1932,439f), Vector(1,338954f, -20,89042f, 0,03367328f), Vector(489,9247f, 41,12966f, 52,49646f));
	*(&iLocal_0 + 520) = Vector(-2660,076f, 37,91997f, 2840,266f);
	*(&iLocal_0 + 520 + 12) = Vector(0.0f, 203.0f, 0.0f);
	*(&iLocal_0 + 544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chof_ambush_0", Vector(-2660,076f, 37,91997f, 2840,266f), Vector(0.0f, 203.0f, 0.0f));
	*(&iLocal_0 + 552) = Vector(-3404f, 32,12553f, 2900f);
	*(&iLocal_0 + 552 + 12) = Vector(0.0f, 119,9582f, 0.0f);
	*(&iLocal_0 + 576) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chof_ambush_1", Vector(-3404f, 32,12553f, 2900f), Vector(0.0f, 119,9582f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_robbery_loot", Vector(-2131,377f, 16,83483f, 2637,952f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_robbery_bad", Vector(-2122,505f, 17,0211f, 2589,887f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_robbery_bad1", Vector(-2148,4f, 16,57384f, 2550,547f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_robbery_bad2", Vector(-2164.0f, 16,5f, 2576.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_robbery_bad3", Vector(-2204,95f, 16,82352f, 2623,455f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_robbery_bad4", Vector(-2154,732f, 16,4f, 2637,812f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_robbery_good", Vector(-2122,505f, 17,0211f, 2589,887f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_robbery_good1", Vector(-2148,4f, 16,57384f, 2550,547f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_robbery_good2", Vector(-2164.0f, 16,5f, 2576.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_robbery_good3", Vector(-2204,95f, 16,82352f, 2623,455f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_robbery_good4", Vector(-2154,796f, 16,4f, 2637,98f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 584) = Vector(-3208,513f, 26,72148f, 2664,471f);
	*(&iLocal_0 + 584 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chof_ng", Vector(-3208,513f, 26,72148f, 2664,471f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 616) = Vector(-3196f, 26,64374f, 2652f);
	*(&iLocal_0 + 616 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chof_ng1", Vector(-3196f, 26,64374f, 2652f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 648) = Vector(-2511,161f, 25,09802f, 2783,072f);
	*(&iLocal_0 + 648 + 12) = Vector(0.0f, 172,0058f, 0.0f);
	*(&iLocal_0 + 672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuy_cho1", Vector(-2511,161f, 25,09802f, 2783,072f), Vector(0.0f, 172,0058f, 0.0f));
	*(&iLocal_0 + 680) = Vector(-2512.0f, 25,09802f, 2792f);
	*(&iLocal_0 + 680 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_cho1", Vector(-2512.0f, 25,09802f, 2792f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 712) = Vector(-2511,734f, 25,09802f, 2786,463f);
	*(&iLocal_0 + 712 + 12) = Vector(0.0f, -9,601336f, 0.0f);
	*(&iLocal_0 + 736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_cho1", Vector(-2511,734f, 25,09802f, 2786,463f), Vector(0.0f, -9,601336f, 0.0f));
	*(&iLocal_0 + 744) = Vector(-2514,621f, 25,09802f, 2786,586f);
	*(&iLocal_0 + 744 + 12) = Vector(0.0f, -26,33815f, 0.0f);
	*(&iLocal_0 + 768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_cho1", Vector(-2514,621f, 25,09802f, 2786,586f), Vector(0.0f, -26,33815f, 0.0f));
	*(&iLocal_0 + 776) = Vector(-2509,448f, 25,09802f, 2787,19f);
	*(&iLocal_0 + 776 + 12) = Vector(0.0f, 28,32407f, 0.0f);
	*(&iLocal_0 + 800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_cho1", Vector(-2509,448f, 25,09802f, 2787,19f), Vector(0.0f, 28,32407f, 0.0f));
	*(&iLocal_0 + 808) = Vector(-2511,156f, 25,09802f, 2779,65f);
	*(&iLocal_0 + 808 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_cho1", Vector(-2511,156f, 25,09802f, 2779,65f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 840) = Vector(-1916.0f, 28,52396f, 2252.0f);
	*(&iLocal_0 + 840 + 12) = Vector(0.0f, -129,2145f, 0.0f);
	*(&iLocal_0 + 864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_cho2", Vector(-1916.0f, 28,52396f, 2252.0f), Vector(0.0f, -129,2145f, 0.0f));
	*(&iLocal_0 + 872) = Vector(-1919,594f, 31,00599f, 2265,41f);
	*(&iLocal_0 + 872 + 12) = Vector(0.0f, 76,81097f, 0.0f);
	*(&iLocal_0 + 896) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuy_cho2", Vector(-1919,594f, 31,00599f, 2265,41f), Vector(0.0f, 76,81097f, 0.0f));
	*(&iLocal_0 + 904) = Vector(-1924,5f, 30,33228f, 2264,192f);
	*(&iLocal_0 + 904 + 12) = Vector(0.0f, -103,4184f, 0.0f);
	*(&iLocal_0 + 928) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_cho2", Vector(-1924,5f, 30,33228f, 2264,192f), Vector(0.0f, -103,4184f, 0.0f));
	*(&iLocal_0 + 936) = Vector(-1924,192f, 30,40042f, 2261,759f);
	*(&iLocal_0 + 936 + 12) = Vector(0.0f, -145,1376f, 0.0f);
	*(&iLocal_0 + 960) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_cho2", Vector(-1924,192f, 30,40042f, 2261,759f), Vector(0.0f, -145,1376f, 0.0f));
	*(&iLocal_0 + 968) = Vector(-1924,954f, 30,00881f, 2266,127f);
	*(&iLocal_0 + 968 + 12) = Vector(0.0f, -80,97864f, 0.0f);
	*(&iLocal_0 + 992) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_cho2", Vector(-1924,954f, 30,00881f, 2266,127f), Vector(0.0f, -80,97864f, 0.0f));
	*(&iLocal_0 + 1000) = Vector(-1920.0f, 31,28032f, 2261,344f);
	*(&iLocal_0 + 1000 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1024) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_cho2", Vector(-1920.0f, 31,28032f, 2261,344f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1032) = Vector(-2920f, 18,74643f, 2668f);
	*(&iLocal_0 + 1032 + 12) = Vector(0.0f, 123,5328f, 0.0f);
	*(&iLocal_0 + 1056) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_cho3", Vector(-2920f, 18,74643f, 2668f), Vector(0.0f, 123,5328f, 0.0f));
	*(&iLocal_0 + 1064) = Vector(-2925.0f, 18,64439f, 2671,426f);
	*(&iLocal_0 + 1064 + 12) = Vector(0,04063571f, -128,7616f, 0,1263601f);
	*(&iLocal_0 + 1088) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuy_cho3", Vector(-2925.0f, 18,64439f, 2671,426f), Vector(0,04063571f, -128,7616f, 0,1263601f));
	*(&iLocal_0 + 1096) = Vector(-2922,902f, 18,64439f, 2673,112f);
	*(&iLocal_0 + 1096 + 12) = Vector(0.0f, 50,75231f, 0.0f);
	*(&iLocal_0 + 1120) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_cho3", Vector(-2922,902f, 18,64439f, 2673,112f), Vector(0.0f, 50,75231f, 0.0f));
	*(&iLocal_0 + 1128) = Vector(-2928f, 18,6426f, 2672f);
	*(&iLocal_0 + 1128 + 12) = Vector(0.0f, -85,02582f, 0.0f);
	*(&iLocal_0 + 1152) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_cho3", Vector(-2928f, 18,6426f, 2672f), Vector(0.0f, -85,02582f, 0.0f));
	*(&iLocal_0 + 1160) = Vector(-2928f, 18,6261f, 2674,092f);
	*(&iLocal_0 + 1160 + 12) = Vector(0.0f, -56,82056f, 0.0f);
	*(&iLocal_0 + 1184) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_cho3", Vector(-2928f, 18,6261f, 2674,092f), Vector(0.0f, -56,82056f, 0.0f));
	*(&iLocal_0 + 1192) = Vector(-2925.0f, 18,63521f, 2669.0f);
	*(&iLocal_0 + 1192 + 12) = Vector(0.0f, -173,2698f, 0.0f);
	*(&iLocal_0 + 1216) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_cho3", Vector(-2925.0f, 18,63521f, 2669.0f), Vector(0.0f, -173,2698f, 0.0f));
	*(&iLocal_0 + 1224) = Vector(-2109,58f, 18,14495f, 2021,791f);
	*(&iLocal_0 + 1224 + 12) = Vector(0.0f, 111,6542f, 0.0f);
	*(&iLocal_0 + 1248) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_cho4", Vector(-2109,58f, 18,14495f, 2021,791f), Vector(0.0f, 111,6542f, 0.0f));
	*(&iLocal_0 + 1256) = Vector(-2107,098f, 18,12279f, 2018,854f);
	*(&iLocal_0 + 1256 + 12) = Vector(0.0f, -104,0094f, 0.0f);
	*(&iLocal_0 + 1280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuy_cho4", Vector(-2107,098f, 18,12279f, 2018,854f), Vector(0.0f, -104,0094f, 0.0f));
	*(&iLocal_0 + 1288) = Vector(-2104,83f, 18,12279f, 2018,854f);
	*(&iLocal_0 + 1288 + 12) = Vector(0.0f, 70,75015f, 0.0f);
	*(&iLocal_0 + 1312) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_cho4", Vector(-2104,83f, 18,12279f, 2018,854f), Vector(0.0f, 70,75015f, 0.0f));
	*(&iLocal_0 + 1320) = Vector(-2103,116f, 18,17717f, 2016.0f);
	*(&iLocal_0 + 1320 + 12) = Vector(0.0f, 120,8677f, 0.0f);
	*(&iLocal_0 + 1344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_cho4", Vector(-2103,116f, 18,17717f, 2016.0f), Vector(0.0f, 120,8677f, 0.0f));
	*(&iLocal_0 + 1352) = Vector(-2103,723f, 18,09279f, 2022,66f);
	*(&iLocal_0 + 1352 + 12) = Vector(0.0f, 35,49055f, 0.0f);
	*(&iLocal_0 + 1376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_cho4", Vector(-2103,723f, 18,09279f, 2022,66f), Vector(0.0f, 35,49055f, 0.0f));
	*(&iLocal_0 + 1384) = Vector(-2107,098f, 18,16976f, 2014,983f);
	*(&iLocal_0 + 1384 + 12) = Vector(0.0f, 180,7631f, 0.0f);
	*(&iLocal_0 + 1408) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_cho4", Vector(-2107,098f, 18,16976f, 2014,983f), Vector(0.0f, 180,7631f, 0.0f));
	return 1;
}

void Function_60(int iParam0, int iParam1) //Position: 0x4329 / 17193
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

var Function_61() //Position: 0x4373 / 17267
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_62(char* cParam0) //Position: 0x4388 / 17288
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

