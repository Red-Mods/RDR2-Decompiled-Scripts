//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 376
//Natives Count : 114
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 10;
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
	var uLocal_28 = 4;
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
	var uLocal_40 = 5;
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
	var uLocal_54 = 10;
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
	var uLocal_78 = 7;
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
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 0;
	bool bLocal_359 = false;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 1;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_356 = 0;
	iLocal_357 = &uScriptParam_0;
	Function_65("Initializing GreatPlains Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_359 = 500;
		uLocal_360 = Function_64();
		switch (iLocal_356)
		{
			case 0x00000000:
				if (Function_62())
				{
					Function_58();
					REQUEST_STRING_TABLE("graveyards");
					iLocal_356 = 1;
				}
				bLocal_359 = false;
				break;
			
			case 0x00000001:
				if (HAS_STRING_TABLE_LOADED("graveyards"))
				{
					Function_57(&uLocal_362);
					Function_56(&uLocal_362, &uLocal_366, 2, &Global_44085[iLocal_3579] + 8, 4294967295, 0);
					iLocal_356 = 2;
				}
				bLocal_359 = false;
				break;
			
			case 0x00000002:
				Function_55(&(Global_43791[iLocal_357]), 16);
				Function_54("Finished Initializing GreatPlains Volumes", 5.0f);
				iLocal_356 = 3;
				bLocal_359 = false;
				break;
			
			case 0x00000003:
				if (!Function_53(&Global_46914))
				{
					Function_13(&uLocal_362, &uLocal_366, &uLocal_360, uScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_359 = false;
				break;
		}
		WAIT(bLocal_359);
	}
	REMOVE_STRING_TABLE("graveyards");
	Function_11(&(Global_39874[23]));
	Function_3(&uLocal_362, &uLocal_366);
	Function_2();
	Function_1(&(Global_43791[iLocal_357]), 16);
	Function_54("Unloaded GreatPlains Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x1A5 / 421
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x1BF / 447
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(var uParam0, vector3[] vParam1) //Position: 0x1CB / 459
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

void Function_4(int iParam0, int iParam1, int iParam2) //Position: 0x228 / 552
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

void Function_5(int iParam0, int iParam1, bool bParam2) //Position: 0x312 / 786
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

void Function_6() //Position: 0x491 / 1169
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_7(int iParam0) //Position: 0x49D / 1181
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

void Function_8(int iParam0) //Position: 0x4E7 / 1255
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

void Function_9(struct<17> Param0) //Position: 0x52D / 1325
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_10(struct<17> Param0) //Position: 0x54A / 1354
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(vector3 vParam0) //Position: 0x568 / 1384
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

void Function_12(int iParam0) //Position: 0x59D / 1437
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

void Function_13(vector3 vParam0) //Position: 0x5EC / 1516
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

bool Function_14(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x676 / 1654
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

void Function_15(int iParam0) //Position: 0xACE / 2766
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

float Function_16(int iParam0) //Position: 0xBBF / 3007
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_17(int iParam0) //Position: 0xBFC / 3068
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_18(int iParam0, int iParam1) //Position: 0xC35 / 3125
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

var Function_19(int iParam0) //Position: 0xC9F / 3231
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

int Function_20(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xCF7 / 3319
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

void Function_21(bool bParam0) //Position: 0xF1F / 3871
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

void Function_22(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xFBD / 4029
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

var Function_23() //Position: 0x15FB / 5627
{
	int iVar0;
	
	return &iVar0;
}

var Function_24(int iParam0) //Position: 0x1604 / 5636
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_25(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1615 / 5653
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

struct<32> Function_26(char* cParam0) //Position: 0x170C / 5900
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_27(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1727 / 5927
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_29(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_28(Function_29(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_28(int iParam0, int iParam1) //Position: 0x178E / 6030
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_29(int iParam0, bool bParam1) //Position: 0x17A0 / 6048
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_30(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x17B2 / 6066
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

int Function_31(int iParam0) //Position: 0x18E6 / 6374
{
	return Global_55480[iParam016].f_96;
}

void Function_32(int iParam0) //Position: 0x18F5 / 6389
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

int Function_33(int iParam0, float fParam1, bool bParam2) //Position: 0x1A8F / 6799
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

void Function_34(var uParam0, int iParam1) //Position: 0x1CD3 / 7379
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_35(int iParam0, var uParam1, var uParam2) //Position: 0x1CE0 / 7392
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_36(var uParam0, int iParam1) //Position: 0x1D0A / 7434
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_37(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1D27 / 7463
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

void Function_38() //Position: 0x1FDA / 8154
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

void Function_39(var uParam0, int iParam1) //Position: 0x204D / 8269
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

bool Function_40(bool bParam0) //Position: 0x2083 / 8323
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

int Function_41(int iParam0) //Position: 0x20F9 / 8441
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_42() //Position: 0x210A / 8458
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

bool Function_43(int iParam0) //Position: 0x2123 / 8483
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_44(int iParam0) //Position: 0x2139 / 8505
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_45(int iParam0) //Position: 0x214E / 8526
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_46(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x216C / 8556
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

bool Function_47(int iParam0) //Position: 0x221B / 8731
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_48(struct<17> Param0) //Position: 0x2231 / 8753
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_49(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2244 / 8772
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

void Function_50(int iParam0, int iParam1) //Position: 0x22BE / 8894
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_8(iParam0);
	Function_7(&uVar0);
	PRINTNL();
	Function_5(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_51(int iParam0) //Position: 0x22E7 / 8935
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

bool Function_52(int iParam0) //Position: 0x2307 / 8967
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_53(int[] iParam0) //Position: 0x2323 / 8995
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

void Function_54(char* cParam0) //Position: 0x2374 / 9076
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

void Function_55(var uParam0, bool bParam1) //Position: 0x23B4 / 9140
{
	uParam0 = (uParam0 || bParam1);
	return;
}

void Function_56(var uParam0, vector3[] vParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0x23C5 / 9157
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

void Function_57(struct<5> Param0) //Position: 0x24B2 / 9394
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

void Function_58() //Position: 0x24C3 / 9411
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("blk_cemetary01Props01x");
	Global_39874[23] = 0;
	Global_39874[23].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 34)
	{
		Function_59(&(Global_39874[23]), iVar0);
		iVar0++;
	}
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x2513 / 9491
{
	if (iParam1 <= 32)
	{
		Function_60(&iParam0, Function_61(iParam1));
	}
	else
	{
		Function_60(&iParam0 + 4, Function_61((iParam1 - 32)));
	}
	return;
}

void Function_60(var uParam0, int iParam1) //Position: 0x253E / 9534
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_61(bool bParam0) //Position: 0x254F / 9551
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_62() //Position: 0x255B / 9563
{
	var uVar0;
	
	Function_63(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("GreatPlains_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blk_v_robbery_bank", 2,802597E-45f, Vector(1346,366f, 81,34664f, 751,1907f), Vector(0.0f, 0.0f, 0.0f), Vector(17,39107f, 17,50947f, 14,99229f));
	*(&iLocal_0 + 104) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "grtv_flk_NW_set");
	*(&iLocal_0 + 16[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs12", 4,203895E-45f, Vector(-54,2902f, 114,6276f, 1292,46f), Vector(0.0f, -6,764513f, 0.0f), Vector(57,62737f, 29,91328f, 74,97815f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 16[0]);
	*(&iLocal_0 + 16[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs11", 4,203895E-45f, Vector(-116,1067f, 139,3254f, 1461,238f), Vector(0.0f, 36,96094f, 0.0f), Vector(40,70086f, 26,70453f, 81,41494f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 16[1]);
	*(&iLocal_0 + 16[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs10", 4,203895E-45f, Vector(-194,7322f, 121,6231f, 1308,54f), Vector(0.0f, 42,25089f, 0.0f), Vector(59,11852f, 32,7988f, 83,63084f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 16[2]);
	*(&iLocal_0 + 16[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs9", 4,203895E-45f, Vector(285,138f, 94,36859f, 993,8371f), Vector(0.0f, 20.0f, 0.0f), Vector(51,4483f, 32,08016f, 49,86724f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 16[3]);
	*(&iLocal_0 + 16[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs8", 4,203895E-45f, Vector(143,9431f, 94,36859f, 1051,083f), Vector(0.0f, 20.0f, 0.0f), Vector(99,15746f, 39,93661f, 33,04917f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 16[4]);
	*(&iLocal_0 + 16[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs7", 4,203895E-45f, Vector(-8,506625f, 111,1147f, 1141,139f), Vector(0.0f, 20.0f, 0.0f), Vector(82,18313f, 33,48681f, 18,8488f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 16[5]);
	*(&iLocal_0 + 16[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs6", 4,203895E-45f, Vector(-145,0075f, 117,3168f, 1194,091f), Vector(0.0f, 20.0f, 0.0f), Vector(63,47575f, 40,97692f, 72,47535f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 16[6]);
	*(&iLocal_0 + 16[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs5", 4,203895E-45f, Vector(-24,17779f, 127,498f, 1591,916f), Vector(0.0f, 1,280679f, 0.0f), Vector(40,62563f, 33,48681f, 139,8717f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 16[7]);
	*(&iLocal_0 + 16[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs4", 4,203895E-45f, Vector(-35,64503f, 136,5509f, 1762,332f), Vector(0.0f, 20.0f, 0.0f), Vector(33,48681f, 33,48681f, 33,48681f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 16[8]);
	*(&iLocal_0 + 16[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs3", 4,203895E-45f, Vector(-100,1049f, 140,3734f, 1625,072f), Vector(0.0f, 20.0f, 0.0f), Vector(30,39426f, 33,48681f, 122,0314f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 16[9]);
	*(&iLocal_0 + 152) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "grtv_flk_CENTER_set");
	*(&iLocal_0 + 112[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nbuffalos3", 4,203895E-45f, Vector(49,5673f, 118,6022f, 1792,977f), Vector(0.0f, 20.0f, 0.0f), Vector(60,3822f, 28,85181f, 82,89291f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 152, &iLocal_0 + 112[0]);
	*(&iLocal_0 + 112[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "buffalos", 4,203895E-45f, Vector(210,5763f, 145,9005f, 1488,596f), Vector(0.0f, 5,336369f, 0.0f), Vector(201,5079f, 50,13197f, 370,2873f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 152, &iLocal_0 + 112[1]);
	*(&iLocal_0 + 112[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nbuffalos1", 4,203895E-45f, Vector(428,3508f, 145,9005f, 1091,086f), Vector(0.0f, -40,39722f, 0.0f), Vector(148,988f, 50,13197f, 155,6049f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 152, &iLocal_0 + 112[2]);
	*(&iLocal_0 + 112[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nbuffalos2", 4,203895E-45f, Vector(465,1242f, 119,7648f, 1373,33f), Vector(0.0f, 96,65638f, 0.0f), Vector(127,3155f, 25,66472f, 70,63678f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 152, &iLocal_0 + 112[3]);
	*(&iLocal_0 + 208) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "grtv_flk_SOUTH_set");
	*(&iLocal_0 + 160[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncougars11", 4,203895E-45f, Vector(648,2339f, 134,1398f, 1845,425f), Vector(0.0f, 32,75464f, 0.0f), Vector(121,6643f, 68,45309f, 132,5476f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 160[0]);
	*(&iLocal_0 + 160[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncougars10", 4,203895E-45f, Vector(443,3477f, 94,73312f, 1771,535f), Vector(0.0f, 20.0f, 0.0f), Vector(89,86477f, 89,86477f, 89,86477f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 160[1]);
	*(&iLocal_0 + 160[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "cougars9", 4,203895E-45f, Vector(209,7166f, 91,35681f, 1934,343f), Vector(0.0f, 20.0f, 0.0f), Vector(189,1637f, 89,86477f, 75,75009f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 160[2]);
	*(&iLocal_0 + 160[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "cougars8", 4,203895E-45f, Vector(545,233f, 104,4078f, 1635,16f), Vector(0.0f, -11,80128f, 0.0f), Vector(139,2927f, 89,86477f, 73,26148f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 160[3]);
	*(&iLocal_0 + 160[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "cougars7", 4,203895E-45f, Vector(763,0635f, 95,29845f, 1653,671f), Vector(0.0f, -16,63512f, 0.0f), Vector(68,9f, 89,86477f, 108,8123f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 160[4]);
	*(&iLocal_0 + 304) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "grtv_gullcoast_set");
	*(&iLocal_0 + 216[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife27", 4,203895E-45f, Vector(542,2242f, 68,26665f, 2042,296f), Vector(0.0f, -29,3247f, 0.0f), Vector(130,4115f, 19,64153f, 74,55981f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 216[0]);
	*(&iLocal_0 + 216[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife11", 4,203895E-45f, Vector(719,006f, 68,2666f, 2043,745f), Vector(0.0f, 1,951811f, 0.0f), Vector(130,4115f, 23,56285f, 74,55981f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 216[1]);
	*(&iLocal_0 + 216[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife25", 4,203895E-45f, Vector(862,4601f, 68,26663f, 1790,165f), Vector(0.0f, 73,88887f, 0.0f), Vector(92,73218f, 25,94783f, 75,14059f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 216[2]);
	*(&iLocal_0 + 216[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife26", 4,203895E-45f, Vector(871,1542f, 68,26662f, 1956,079f), Vector(0.0f, 73,88887f, 0.0f), Vector(92,73218f, 18,71796f, 75,14059f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 216[3]);
	*(&iLocal_0 + 216[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife12", 4,203895E-45f, Vector(924,7684f, 68,26663f, 1706,121f), Vector(0.0f, 73,88887f, 0.0f), Vector(92,73218f, 27,40582f, 75,14059f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 216[4]);
	*(&iLocal_0 + 216[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife13", 4,203895E-45f, Vector(864,7108f, 68,26666f, 1212,507f), Vector(0.0f, 91,04541f, 0.0f), Vector(76,14072f, 26,22717f, 64,7296f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 216[5]);
	*(&iLocal_0 + 216[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife14", 4,203895E-45f, Vector(829,8139f, 68,26666f, 1087,609f), Vector(0.0f, -30,65034f, 0.0f), Vector(94,80785f, 20,92016f, 82,87566f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 216[6]);
	*(&iLocal_0 + 216[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife22", 4,203895E-45f, Vector(867,8832f, 68,26666f, 1300,542f), Vector(0.0f, 130,2414f, 0.0f), Vector(76,14072f, 28,67517f, 64,7296f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 216[7]);
	*(&iLocal_0 + 216[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife23", 4,203895E-45f, Vector(873,435f, 68,26666f, 1412,371f), Vector(0.0f, 130,2414f, 0.0f), Vector(76,14072f, 20,79433f, 64,7296f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 216[8]);
	*(&iLocal_0 + 216[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife24", 4,203895E-45f, Vector(958,8206f, 68,26663f, 1568,463f), Vector(0.0f, 86,45786f, 0.0f), Vector(133,3231f, 21,32483f, 64,7296f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 216[9]);
	*(&iLocal_0 + 376) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "grtv_aquaticWildlife_set");
	*(&iLocal_0 + 312[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife10", 4,203895E-45f, Vector(463,473f, 68,26824f, 1882,711f), Vector(0.0f, -14,30964f, 0.0f), Vector(173,5558f, 32,81913f, 61,38209f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 312[0]);
	*(&iLocal_0 + 312[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife15", 4,203895E-45f, Vector(668,8126f, 71,2487f, 1001,604f), Vector(0.0f, -36,56364f, 0.0f), Vector(204,8105f, 21,72543f, 59,11795f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 312[1]);
	*(&iLocal_0 + 312[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife16", 4,203895E-45f, Vector(410,3493f, 74,29018f, 943,0745f), Vector(0.0f, 7,388419f, 0.0f), Vector(138,6952f, 26,14467f, 51,82736f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 312[2]);
	*(&iLocal_0 + 312[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife17", 4,203895E-45f, Vector(175,2287f, 89,25648f, 983,217f), Vector(0.0f, 25,225f, 0.0f), Vector(139,4472f, 25,57897f, 51,54788f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 312[3]);
	*(&iLocal_0 + 312[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife18", 4,203895E-45f, Vector(-22,47146f, 88,03369f, 1109,185f), Vector(0.0f, 25,225f, 0.0f), Vector(139,4472f, 37,6038f, 51,54788f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 312[4]);
	*(&iLocal_0 + 312[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife19", 4,203895E-45f, Vector(-221,0464f, 116,4549f, 1186,166f), Vector(0.0f, 42,80977f, 0.0f), Vector(140,1022f, 17,40649f, 34,5661f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 312[5]);
	*(&iLocal_0 + 312[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_aquaticWildlife20", 4,203895E-45f, Vector(-404,7502f, 105,5874f, 1166,046f), Vector(0.0f, -49,27761f, 0.0f), Vector(138,3392f, 17,54135f, 35,00663f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 312[6]);
	*(&iLocal_0 + 384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_birds", 2,802597E-45f, Vector(184.0f, 118,4628f, 1524.0f), Vector(0.0f, 0.0f, 0.0f), Vector(1548,724f, 136,7648f, 1274,193f));
	*(&iLocal_0 + 392) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_dixons", 4,203895E-45f, Vector(172,723f, 81,27254f, 2063,629f), Vector(0.0f, -8,247506f, 0.0f), Vector(27,80257f, 13,1623f, 10,755f));
	*(&iLocal_0 + 400) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "grtv_bhstop", 2,802597E-45f, Vector(757,0193f, 78,525f, 1234,986f), Vector(0.0f, 0.0f, 0.0f), Vector(7,127447f, 8,294168f, 15,94082f));
	*(&iLocal_0 + 408) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nEllipsoid", 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_0 + 416) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Ellipsoid1", 0f, Vector(756,2045f, 0.0f, 1035,028f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_0 + 424) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder", 4,203895E-45f, Vector(2203,662f, 0.0f, 1595,216f), Vector(0.0f, 20.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_0 + 432) = Vector(1378,725f, 78,7847f, 826,4789f);
	*(&iLocal_0 + 432 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_bad", Vector(1378,725f, 78,7847f, 826,4789f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 464) = Vector(1321,037f, 78,63029f, 801,6255f);
	*(&iLocal_0 + 464 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_bad1", Vector(1321,037f, 78,63029f, 801,6255f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 496) = Vector(1276,778f, 79,33315f, 813,4847f);
	*(&iLocal_0 + 496 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_bad2", Vector(1276,778f, 79,33315f, 813,4847f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 528) = Vector(1338,44f, 78,9436f, 763,5467f);
	*(&iLocal_0 + 528 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_good", Vector(1338,44f, 78,9436f, 763,5467f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 560) = Vector(1356,502f, 78,56875f, 762,9736f);
	*(&iLocal_0 + 560 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_good1", Vector(1356,502f, 78,56875f, 762,9736f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 592) = Vector(1346,351f, 79,93112f, 754,5385f);
	*(&iLocal_0 + 592 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_good2", Vector(1346,351f, 79,93112f, 754,5385f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 624) = Vector(1350,543f, 79,83478f, 745,4222f);
	*(&iLocal_0 + 624 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_loot", Vector(1350,543f, 79,83478f, 745,4222f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 656) = Vector(1352,766f, 79,83478f, 758,0829f);
	*(&iLocal_0 + 656 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_bank", Vector(1352,766f, 79,83478f, 758,0829f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 688) = Vector(1340,136f, 79,62601f, 758,6826f);
	*(&iLocal_0 + 688 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_bank1", Vector(1340,136f, 79,62601f, 758,6826f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 720) = Vector(1341,458f, 79,52139f, 755,6003f);
	*(&iLocal_0 + 720 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_bank2", Vector(1341,458f, 79,52139f, 755,6003f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 752) = Vector(1345,523f, 79,42148f, 751,3326f);
	*(&iLocal_0 + 752 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_bank3", Vector(1345,523f, 79,42148f, 751,3326f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 784) = Vector(1352,454f, 79,69425f, 752,5648f);
	*(&iLocal_0 + 784 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_bank4", Vector(1352,454f, 79,69425f, 752,5648f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 816) = Vector(1338,687f, 80,87756f, 747,8107f);
	*(&iLocal_0 + 816 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_f_robbery_bank5", Vector(1338,687f, 80,87756f, 747,8107f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 848) = Vector(278,2518f, 91,27737f, 923,1232f);
	*(&iLocal_0 + 848 + 12) = Vector(0.0f, -180,298f, 0.0f);
	*(&iLocal_0 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_grt1", Vector(278,2518f, 91,27737f, 923,1232f), Vector(0.0f, -180,298f, 0.0f));
	*(&iLocal_0 + 880) = Vector(292,7893f, 90,91013f, 925,5304f);
	*(&iLocal_0 + 880 + 12) = Vector(0.0f, 84,85152f, 0.0f);
	*(&iLocal_0 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_grt1", Vector(292,7893f, 90,91013f, 925,5304f), Vector(0.0f, 84,85152f, 0.0f));
	*(&iLocal_0 + 912) = Vector(274,748f, 91,40363f, 926,775f);
	*(&iLocal_0 + 912 + 12) = Vector(0.0f, -90,22207f, 0.0f);
	*(&iLocal_0 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_grt1", Vector(274,748f, 91,40363f, 926,775f), Vector(0.0f, -90,22207f, 0.0f));
	*(&iLocal_0 + 944) = Vector(287,4493f, 90,91797f, 925,2139f);
	*(&iLocal_0 + 944 + 12) = Vector(0.0f, 88,48517f, 0.0f);
	*(&iLocal_0 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_grt1", Vector(287,4493f, 90,91797f, 925,2139f), Vector(0.0f, 88,48517f, 0.0f));
	*(&iLocal_0 + 976) = Vector(285,3504f, 90,55353f, 921,7806f);
	*(&iLocal_0 + 976 + 12) = Vector(0.0f, 101,5619f, 0.0f);
	*(&iLocal_0 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_grt1", Vector(285,3504f, 90,55353f, 921,7806f), Vector(0.0f, 101,5619f, 0.0f));
	*(&iLocal_0 + 1008) = Vector(278,021f, 91,31001f, 926,775f);
	*(&iLocal_0 + 1008 + 12) = Vector(0.0f, 88,67081f, 0.0f);
	*(&iLocal_0 + 1032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingguy_grt1", Vector(278,021f, 91,31001f, 926,775f), Vector(0.0f, 88,67081f, 0.0f));
	*(&iLocal_0 + 1040) = Vector(480,021f, 98,41798f, 1787,462f);
	*(&iLocal_0 + 1040 + 12) = Vector(0.0f, 187,0551f, 0.0f);
	*(&iLocal_0 + 1064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_grt2", Vector(480,021f, 98,41798f, 1787,462f), Vector(0.0f, 187,0551f, 0.0f));
	*(&iLocal_0 + 1072) = Vector(480,0001f, 98,51614f, 1800.0f);
	*(&iLocal_0 + 1072 + 12) = Vector(0.0f, 62,35506f, 0.0f);
	*(&iLocal_0 + 1096) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_grt2", Vector(480,0001f, 98,51614f, 1800.0f), Vector(0.0f, 62,35506f, 0.0f));
	*(&iLocal_0 + 1104) = Vector(478,0531f, 98,54673f, 1793,31f);
	*(&iLocal_0 + 1104 + 12) = Vector(0.0f, -52,34931f, 0.0f);
	*(&iLocal_0 + 1128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_grt2", Vector(478,0531f, 98,54673f, 1793,31f), Vector(0.0f, -52,34931f, 0.0f));
	*(&iLocal_0 + 1136) = Vector(481,8415f, 98,38428f, 1796.0f);
	*(&iLocal_0 + 1136 + 12) = Vector(0.0f, 45,57205f, 0.0f);
	*(&iLocal_0 + 1160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_grt2", Vector(481,8415f, 98,38428f, 1796.0f), Vector(0.0f, 45,57205f, 0.0f));
	*(&iLocal_0 + 1168) = Vector(475,5848f, 98,48624f, 1790,141f);
	*(&iLocal_0 + 1168 + 12) = Vector(0.0f, -122,6327f, 0.0f);
	*(&iLocal_0 + 1192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_grt2", Vector(475,5848f, 98,48624f, 1790,141f), Vector(0.0f, -122,6327f, 0.0f));
	*(&iLocal_0 + 1200) = Vector(480,021f, 98,54673f, 1791,775f);
	*(&iLocal_0 + 1200 + 12) = Vector(0.0f, 130,0659f, 0.0f);
	*(&iLocal_0 + 1224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingguy_grt2", Vector(480,021f, 98,54673f, 1791,775f), Vector(0.0f, 130,0659f, 0.0f));
	*(&iLocal_0 + 1232) = Vector(798,021f, 77,34565f, 1709,07f);
	*(&iLocal_0 + 1232 + 12) = Vector(0.0f, 167,0936f, 0.0f);
	*(&iLocal_0 + 1256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_grt3", Vector(798,021f, 77,34565f, 1709,07f), Vector(0.0f, 167,0936f, 0.0f));
	*(&iLocal_0 + 1264) = Vector(800,8351f, 77,49451f, 1708,022f);
	*(&iLocal_0 + 1264 + 12) = Vector(0.0f, -83,21953f, 0.0f);
	*(&iLocal_0 + 1288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_grt3", Vector(800,8351f, 77,49451f, 1708,022f), Vector(0.0f, -83,21953f, 0.0f));
	*(&iLocal_0 + 1296) = Vector(798,5142f, 77,3733f, 1715,225f);
	*(&iLocal_0 + 1296 + 12) = Vector(0.0f, 10,99088f, 0.0f);
	*(&iLocal_0 + 1320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_grt3", Vector(798,5142f, 77,3733f, 1715,225f), Vector(0.0f, 10,99088f, 0.0f));
	*(&iLocal_0 + 1328) = Vector(796,9107f, 77,41772f, 1717,648f);
	*(&iLocal_0 + 1328 + 12) = Vector(0.0f, -13,54039f, 0.0f);
	*(&iLocal_0 + 1352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_grt3", Vector(796,9107f, 77,41772f, 1717,648f), Vector(0.0f, -13,54039f, 0.0f));
	*(&iLocal_0 + 1360) = Vector(794,2851f, 77,34481f, 1717,344f);
	*(&iLocal_0 + 1360 + 12) = Vector(0.0f, -40,22768f, 0.0f);
	*(&iLocal_0 + 1384) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_grt3", Vector(794,2851f, 77,34481f, 1717,344f), Vector(0.0f, -40,22768f, 0.0f));
	*(&iLocal_0 + 1392) = Vector(798,021f, 77,31161f, 1712,775f);
	*(&iLocal_0 + 1392 + 12) = Vector(0.0f, 191,6665f, 0.0f);
	*(&iLocal_0 + 1416) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingguy_grt3", Vector(798,021f, 77,31161f, 1712,775f), Vector(0.0f, 191,6665f, 0.0f));
	return 1;
}

void Function_63(int iParam0, int iParam1) //Position: 0x3F7C / 16252
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

var Function_64() //Position: 0x3FC6 / 16326
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(char* cParam0) //Position: 0x3FDB / 16347
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

