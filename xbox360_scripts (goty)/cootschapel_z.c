//Decompiled with MagicRDR v1.0
//Function Count : 468
//Statics Count : 402
//Natives Count : 653
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	bool bLocal_7 = false;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 8;
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
	var uLocal_58 = 1;
	var uLocal_59 = 13;
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
	var uLocal_101 = -1;
	var uLocal_102 = -1;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	bool bLocal_107 = false;
	struct<121> Local_108 = { 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<13> Local_229 = { 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	bool bLocal_242 = false;
	bool bLocal_243 = false;
	bool bLocal_244 = false;
	bool bLocal_245 = false;
	int iLocal_246 = 0;
	bool bLocal_247 = false;
	bool bLocal_248 = true;
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
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	bool bLocal_268 = false;
	int iLocal_269 = 0;
	bool bLocal_270 = false;
	int iLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	int iLocal_280 = 0;
	bool bLocal_281 = false;
	int iLocal_282 = 0;
	float fLocal_283 = 0.0f;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	bool bLocal_290 = false;
	int iLocal_291 = 0;
	bool bLocal_292 = false;
	bool bLocal_293 = false;
	struct<5> Local_294 = { 0, 0, 0, 0, 4 } ;
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
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	var uLocal_317 = 6;
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
	int iLocal_336 = 4;
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
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	struct<153> Local_361 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
	Function_467(&Var0, 3);
	Function_466();
	if (StackVal && (((((!Global_3421 && bScriptParam_0 == Global_30679[1]) && bScriptParam_0 == Global_30707[1]) && bScriptParam_0 == Global_30707[2]) && bScriptParam_0 == Global_30717[1]) && bScriptParam_0 == Global_30658[0]) == 5)
	{
		bLocal_107 = true;
	}
	iLocal_5 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iLocal_6 = 1000;
		switch (iLocal_5)
		{
			case 0x00000000:
				if (Global_3389)
				{
					if (bLocal_107)
					{
						Function_461(&iLocal_11, bScriptParam_0, 0);
					}
					else
					{
						Function_460(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000001:
				if (Function_457())
				{
					Function_456();
					iLocal_5 = 2;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_455())
				{
					Function_454();
					Function_453(&(Global_29008[bScriptParam_0]), 32);
					iLocal_5 = 3;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_6 = 500;
				if (Function_450())
				{
					Function_448(bScriptParam_0);
					if (bLocal_107)
					{
						Function_446(&iLocal_11, Function_447(), bScriptParam_0);
						Function_445(&iLocal_11, Function_447());
					}
					Function_453(&(Global_29008[bScriptParam_0]), 16);
					iLocal_5 = 4;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(bLocal_7))
				{
					iLocal_5 = 5;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000005:
				Function_444(&uLocal_8);
				Function_442();
				Function_439(bScriptParam_0);
				iLocal_5 = 6;
				iLocal_6 = 0;
				break;
			
			case 0x00000006:
				if ((Function_438() && Function_437(Global_29155[bScriptParam_010])) && Function_436(&iLocal_11))
				{
					Function_435();
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				else
				{
					iLocal_6 = 100;
				}
				break;
			
			case 0x00000007:
				if (bLocal_107)
				{
					Function_423(&iLocal_11, bScriptParam_0, Function_447());
				}
				Function_422(bScriptParam_0);
				Function_421();
				Function_420();
				Function_453(&(Global_29008[bScriptParam_0]), 8);
				if (Function_419(&(Global_29008[bScriptParam_0]), 131072))
				{
					Function_418(&(Global_29008[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000008:
				Function_417(bScriptParam_0);
				Function_416();
				Function_415(bScriptParam_0);
				iLocal_5 = 9;
				iLocal_6 = 0;
				break;
			
			case 0x00000009:
				Function_410(bScriptParam_0);
				Function_409(64);
				Function_453(&(Global_29008[bScriptParam_0]), 512);
				iLocal_5 = 10;
				iLocal_6 = 0;
				break;
			
			case 0x0000000A:
				Function_408(Function_447(), bScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
				Function_407(&Var0, 5.0f);
				Function_453(&(Global_29008[bScriptParam_0]), 4);
				iLocal_5 = 11;
				iLocal_6 = 0;
				break;
			
			case 0x0000000B:
				Function_226(bScriptParam_0);
				if (Function_419(&(Global_29008[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				if (bLocal_107)
				{
					Function_112(&iLocal_11, bScriptParam_0);
				}
				Function_77(&uLocal_8, &uLocal_317, Function_111(), bScriptParam_0);
				Function_72(&iLocal_336, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(iLocal_6);
	}
	if (bLocal_107)
	{
		Function_57(&iLocal_11, bScriptParam_0);
	}
	Function_55(bScriptParam_0);
	Function_21();
	Function_20();
	Function_19();
	Function_11(&uLocal_8, &uLocal_317);
	Function_10(&iLocal_336);
	Function_8();
	Function_4(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_409(64);
	Function_418(&(Global_29008[bScriptParam_0]), 32);
	Function_418(&(Global_29008[bScriptParam_0]), 64);
	Function_418(&(Global_29008[bScriptParam_0]), 8);
	Function_418(&(Global_29008[bScriptParam_0]), 512);
	Function_418(&(Global_29008[bScriptParam_0]), 16);
	Function_418(&(Global_29008[bScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
	Function_407(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3C8 / 968
{
	SET_DUST_LEVEL(2);
	REMOVE_STRING_TABLE("graveyards");
	Function_2(&(Global_26282[14]));
	return;
}

void Function_2(int iParam0) //Position: 0x3EC / 1004
{
	if (IS_OBJECTSET_VALID(iParam0->f_12))
	{
		Function_3(iParam0->f_12);
		DESTROY_OBJECTSET(iParam0->f_12);
	}
	iParam0->f_8 = 0;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_3(bool bParam0) //Position: 0x418 / 1048
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

void Function_4(int iParam0) //Position: 0x45D / 1117
{
	int iVar0;
	
	if (!Function_7(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_5(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0) //Position: 0x493 / 1171
{
	if (!Function_6(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_6(int iParam0) //Position: 0x4B5 / 1205
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_7(int iParam0) //Position: 0x4CB / 1227
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_8() //Position: 0x4E1 / 1249
{
	Function_9();
	return;
}

void Function_9() //Position: 0x4EA / 1258
{
	RELEASE_LAYOUT_REF(Local_147);
	return;
}

void Function_10(int iParam0) //Position: 0x4F5 / 1269
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (IS_VOLUME_VALID(iParam0[iVar05]->f_12))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
		}
		iVar0++;
	}
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x54F / 1359
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_18(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_17(iParam1[iVar03], 4);
		}
		if (Function_18(iParam1[iVar03], 8))
		{
			Function_12(0, 0, 30);
			Function_17(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_12(int iParam0, int iParam1, int iParam2) //Position: 0x5A7 / 1447
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_13(Global_16524, bVar0, 1);
	}
	return;
}

void Function_13(int iParam0, bool bParam1, bool bParam2) //Position: 0x68D / 1677
{
	int iVar0;
	
	Function_16(iParam0);
	Function_15(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, bParam1);
	Function_14();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
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
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_14() //Position: 0x806 / 2054
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_15(bool bParam0) //Position: 0x812 / 2066
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_16(int iParam0) //Position: 0x858 / 2136
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

void Function_17(int iParam0, int iParam1) //Position: 0x89E / 2206
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0x8B8 / 2232
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_19() //Position: 0x8D5 / 2261
{
	return;
}

void Function_20() //Position: 0x8DB / 2267
{
	return;
}

void Function_21() //Position: 0x8E1 / 2273
{
	Function_54(1);
	Function_23(&Local_361);
	iLocal_6 = 1000;
	Function_22();
	return;
}

void Function_22() //Position: 0x8F9 / 2297
{
	RELEASE_LAYOUT_REF(Local_108);
	return;
}

void Function_23(int iParam0) //Position: 0x904 / 2308
{
	int iVar0;
	
	if (!bLocal_268)
	{
		if (!Function_52(iParam0))
		{
			return;
		}
		if (Function_46(iParam0->f_152))
		{
			return;
		}
	}
	RESET_TREE_TYPE_CLEARING();
	STREAMING_UNLOAD_BOUNDS();
	Function_44();
	Function_40(&bLocal_248);
	if (!Function_52(iParam0) || Global_3421)
	{
		iParam0->f_4 = 1;
	}
	else
	{
		iParam0->f_4 = 14;
	}
	Function_31(iParam0);
	if (Global_3421)
	{
		Function_30(0);
	}
	else
	{
		Function_30(bLocal_268);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (iLocal_236[iVar0] == 4294967295 && iLocal_236[iVar0] == 0)
		{
			STREAMING_EVICT_ACTOR(iLocal_236[iVar0], 4294967295);
			iLocal_236[iVar0] = 4294967295;
		}
		iVar0++;
	}
	if (iLocal_242 == 4294967295 && iLocal_242 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_242, 4294967295);
		bLocal_242 = 4294967295;
	}
	if (iLocal_245 == 4294967295 && iLocal_245 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_245, 4294967295);
		bLocal_245 = 4294967295;
	}
	if (iLocal_244 == 4294967295 && iLocal_244 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_244, 4294967295);
		bLocal_244 = 4294967295;
	}
	if (iLocal_243 == 4294967295 && iLocal_243 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_243, 4294967295);
		bLocal_243 = 4294967295;
	}
	if (iLocal_269)
	{
		Function_29(0.0f);
		iLocal_269 = 0;
	}
	Global_3385 = 0;
	if (DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
	{
		DECOR_REMOVE(Global_34573, "bStartedGY");
	}
	CLEAR_ACTOR_PROOF(Global_34573, 16);
	if (Function_26(Global_30717[0]) && iParam0->f_152 != 0)
	{
		AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	}
	else
	{
		AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	}
	ENABLE_WEATHER_SPHERE(Function_25(iParam0->f_152), 0);
	if (Global_3421)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 7, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 6, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 8, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 10, 20.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 15, 5.0f, 0);
		ADD_ITEM(Function_24(3), Global_34573, 0);
		ADD_ITEM(Function_24(3), Global_34573, 0);
		ADD_ITEM(Function_24(3), Global_34573, 0);
		ADD_ITEM(Function_24(3), Global_34573, 0);
		ADD_ITEM(Function_24(3), Global_34573, 0);
		ADD_ITEM(Function_24(1), Global_34573, 0);
		ADD_ITEM(Function_24(1), Global_34573, 0);
		ADD_ITEM(Function_24(1), Global_34573, 0);
		ADD_ITEM(Function_24(1), Global_34573, 0);
		ADD_ITEM(Function_24(1), Global_34573, 0);
		ADD_ITEM(Function_24(20), Global_34573, 0);
	}
	if (Global_3421)
	{
		DESTROY_LAYOUT(bLocal_292);
		CLEAR_ALL_CORPSES();
	}
	else
	{
		RELEASE_LAYOUT_REF(bLocal_292);
	}
	return;
}

var Function_24(bool bParam0) //Position: 0xB50 / 2896
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

int Function_25(int iParam0) //Position: 0xC41 / 3137
{
	switch (iParam0)
	{
		case 0x00000000:
			return 31;
			break;
		
		case 0x00000001:
			return 30;
			break;
		
		case 0x00000002:
			return 32;
			break;
		
		case 0x00000003:
			return 33;
			break;
		
		case 0x00000004:
			return 29;
			break;
	}
	LOG_ERROR("should not be here");
	return 31;
}

bool Function_26(bool bParam0) //Position: 0xCA4 / 3236
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((bParam0 != Global_30707[2] || bParam0 != Global_30707[1]) || bParam0 != Global_30679[1])
	{
		return 0;
	}
	uVar0 = Global_29008[bParam0];
	return (((Function_28(uVar0, 0x1000000) || Function_28(uVar0, 0x2000000)) || Function_28(uVar0, 0x4000000)) || Function_27(bParam0));
}

bool Function_27(int iParam0) //Position: 0xD17 / 3351
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_28(bool bParam0, bool bParam1) //Position: 0xD34 / 3380
{
	return (bParam0 && bParam1) == 0;
}

void Function_29(int iParam0) //Position: 0xD41 / 3393
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_30(bool bParam0) //Position: 0xD56 / 3414
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (IS_OBJECT_VALID(Local_298[iVar04]))
		{
			if (bParam0)
			{
				RELEASE_OBJECT_REF(Local_298[iVar04]);
			}
			else
			{
				DESTROY_OBJECT(Local_298[iVar04]);
			}
		}
		Local_298[iVar04].f_4 = 0;
		iVar0++;
	}
	if (IS_OBJECT_VALID(Local_294))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(Local_294);
		}
		else
		{
			DESTROY_OBJECT(Local_294);
		}
	}
	Local_294.f_4 = 0;
	return;
}

void Function_31(int iParam0) //Position: 0xDC4 / 3524
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (StackVal <= SQUAD_GET_SIZE(bVar0))
	{
		Function_32(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0));
		bVar0++;
	}
	if (IS_ACTOR_VALID(bLocal_270))
	{
		SET_ACTOR_INVULNERABILITY(bLocal_270, 0);
		Function_32(bLocal_270);
	}
	return;
}

void Function_32(bool bParam0) //Position: 0xE07 / 3591
{
	Function_33(bParam0, 1);
	SET_ACTOR_HEALTH(bParam0, 0.0f);
	return;
}

void Function_33(bool bParam0, bool bParam1) //Position: 0xE19 / 3609
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 23, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 24, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 25, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 26, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 27, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 28, !bParam1);
		if (!bParam1)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 29, false);
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 30, false);
		}
		else
		{
			if (((Function_39() || Function_38(bParam0)) || Function_37(bParam0)) || Function_36(bParam0, 1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(bParam0, 29, true);
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(bParam0, 30, true);
			}
			if (GET_OBJECT_NAMED_BONE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), "head", &vVar0))
			{
				bVar3 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_35(), 2, vVar0, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
				RESET_RMPTFX_IN_VOLUME(bVar3);
				DESTROY_VOLUME(bVar3);
			}
			if (DECOR_CHECK_EXIST(bParam0, "oLeftEyeGlow"))
			{
				bVar4 = DECOR_GET_OBJECT(bParam0, "oLeftEyeGlow");
				if (IS_OBJECT_VALID(bVar4))
				{
					UNK_0x1A59E608(bVar4);
				}
				DECOR_REMOVE(bParam0, "oLeftEyeGlow");
			}
			if (DECOR_CHECK_EXIST(bParam0, "oRightEyeGlow"))
			{
				bVar4 = DECOR_GET_OBJECT(bParam0, "oRightEyeGlow");
				if (IS_OBJECT_VALID(bVar4))
				{
					UNK_0x1A59E608(bVar4);
				}
				DECOR_REMOVE(bParam0, "oRightEyeGlow");
			}
			DECOR_SET_BOOL(bParam0, "Zombie_NoHead", true);
			Function_34();
			bVar5 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_35(), "blood_zombie_shotgun_exit", "head", bParam0, Function_34(), bParam0);
			if (IS_OBJECT_VALID(bVar5))
			{
				Function_34();
				UNK_0x6745191B(bVar5, Function_34());
			}
		}
	}
	return;
}

vector3 Function_34() //Position: 0xFE4 / 4068
{
	return 0.0f, 0.0f, 0.0f;
}

var Function_35() //Position: 0xFED / 4077
{
	int iVar0;
	
	return iVar0;
}

bool Function_36(bool bParam0, int iParam1) //Position: 0xFF5 / 4085
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_37(bool bParam0) //Position: 0x1037 / 4151
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1228 && iVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_38(bool bParam0) //Position: 0x1057 / 4183
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

var Function_39() //Position: 0x1077 / 4215
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_40(int iParam0) //Position: 0x108A / 4234
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_41(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_41(var uParam0, int iParam1) //Position: 0x10B0 / 4272
{
	if (Function_43(uParam0[iParam13], 4))
	{
		if (Function_43(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_42(uParam0[iParam13], 1);
			Function_42(uParam0[iParam13], 2);
			Function_42(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_42(var uParam0, int iParam1) //Position: 0x11DE / 4574
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_43(int iParam0, int iParam1) //Position: 0x11F8 / 4600
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_44() //Position: 0x1215 / 4629
{
	Local_229.f_12 = 0;
	Local_229.f_8 = 0;
	Local_229 = 0.0f;
	Function_45(&Local_229 + 4, 3);
	UI_HIDE("XPMultiplierSP");
	return;
}

void Function_45(int iParam0, int iParam1) //Position: 0x1244 / 4676
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_46(int iParam0) //Position: 0x1257 / 4695
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_3421)
	{
		return 0;
	}
	iVar0 = Function_47(Function_51(iParam0));
	iVar1 = CONVERT_TIME_OF_DAY_TO_INT(iVar0);
	iVar2 = MAKE_TIME_OF_DAY(24, 0, 0);
	iVar3 = CONVERT_TIME_OF_DAY_TO_INT(iVar2);
	iVar4 = CONVERT_TIME_OF_DAY_TO_INT(GET_TIME_OF_DAY());
	if ((iVar4 - iVar1) <= iVar3)
	{
		return 1;
	}
	return 0;
}

var Function_47(int iParam0) //Position: 0x129B / 4763
{
	if (!Function_48(iParam0))
	{
		return MAKE_TIME_OF_DAY(0, 0, 0);
	}
	return Global_13172[iParam011].f_36;
}

bool Function_48(int iParam0) //Position: 0x12BA / 4794
{
	if (!Function_50(iParam0))
	{
		return 0;
	}
	if (!Function_49(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_49(int iParam0) //Position: 0x12DE / 4830
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_50(int iParam0) //Position: 0x12F3 / 4851
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_51(int iParam0) //Position: 0x130A / 4874
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_30734;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30734;
			break;
		
		case 0x00000001:
			return Global_30735;
			break;
		
		case 0x00000004:
			return Global_30736;
			break;
		
		case 0x00000003:
			return Global_30737;
			break;
		
		case 0x00000002:
			return Global_30738;
			break;
	}
	return Global_30734;
}

bool Function_52(int iParam0) //Position: 0x13CC / 5068
{
	if (Global_3421)
	{
		return 1;
	}
	switch (iParam0->f_152)
	{
		case 0x00000000:
			if (Function_53(4) && !Global_3382)
			{
				return 1;
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if ((Function_53(4) && Function_53(6)) && !Global_3382)
			{
				return 1;
			}
			break;
		
		case 0x00000004:
			if (Function_53(26) && !Global_3382)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_53(int iParam0) //Position: 0x1444 / 5188
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_54(bool bParam0) //Position: 0x1459 / 5209
{
	if (Function_28(bParam0, 1) && !Function_28(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_55(bool bParam0) //Position: 0x1486 / 5254
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_419(&(Global_29008[bParam0]), 0x20000000))
	{
		Function_418(&(Global_29008[bParam0]), 0x20000000);
		if (IS_LAYOUTREF_VALID(Global_28841))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(Global_28841);
			ITERATE_IN_LAYOUT(bVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bVar0, 15);
			START_OBJECT_ITERATOR(bVar0);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			while (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
				{
					DEREFERENCE_ACTOR(bVar2);
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar2));
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar2);
					TASK_CLEAR(bVar2);
				}
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
			DESTROY_ITERATOR(bVar0);
		}
		SET_POP_DENSITY_MULTIPLIER(1.0f);
		if (Function_26(bParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_56(1));
		}
	}
	return;
}

bool Function_56(int iParam0) //Position: 0x152D / 5421
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_57(int iParam0, int iParam1) //Position: 0x1549 / 5449
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_7(iParam1) || Function_28(iParam0->f_356, 16))
	{
		return;
	}
	if (iParam1 == Global_30640[0])
	{
		Function_60(iParam0, &Global_6298, iParam1);
	}
	else if (iParam1 == Global_30640[1])
	{
		Function_60(iParam0, &Global_6364, iParam1);
	}
	else if (iParam1 == Global_30640[2])
	{
		Function_60(iParam0, &Global_6351, iParam1);
	}
	else if (iParam1 == Global_30658[1])
	{
		Function_60(iParam0, &Global_6402, iParam1);
	}
	else if (iParam1 == Global_30658[3])
	{
		Function_60(iParam0, &Global_6433, iParam1);
	}
	else if (iParam1 == Global_30658[4])
	{
		Function_60(iParam0, &Global_6537, iParam1);
	}
	else if (iParam1 == Global_30668[0])
	{
		Function_60(iParam0, &Global_6563, iParam1);
	}
	else if (iParam1 == Global_30668[1])
	{
		Function_60(iParam0, &Global_6614, iParam1);
	}
	else if (iParam1 == Global_30668[2])
	{
		Function_60(iParam0, &Global_6643, iParam1);
	}
	else if (iParam1 == Global_30679[1])
	{
		Function_60(iParam0, &Global_6667, iParam1);
	}
	else if (iParam1 == Global_30679[0])
	{
		Function_60(iParam0, &Global_6654, iParam1);
	}
	else if (iParam1 == Global_30685[0])
	{
		Function_60(iParam0, &Global_6709, iParam1);
	}
	else if (iParam1 == Global_30685[1])
	{
		Function_60(iParam0, &Global_6764, iParam1);
	}
	else if (iParam1 == Global_30685[2])
	{
		Function_60(iParam0, &Global_6785, iParam1);
	}
	else if (iParam1 == Global_30693[0])
	{
		Function_60(iParam0, &Global_6815, iParam1);
	}
	else if (iParam1 == Global_30693[1])
	{
		Function_60(iParam0, &Global_6866, iParam1);
	}
	else if (iParam1 == Global_30693[2])
	{
		Function_60(iParam0, &Global_6490, iParam1);
	}
	else if (iParam1 == Global_30707[2])
	{
		Function_60(iParam0, &Global_6933, iParam1);
	}
	else if (iParam1 == Global_30707[1])
	{
		Function_60(iParam0, &Global_6962, iParam1);
	}
	else if (iParam1 == Global_30707[0])
	{
		Function_60(iParam0, &Global_7002, iParam1);
	}
	else if (iParam1 == Global_30707[3])
	{
		Function_60(iParam0, &Global_6987, iParam1);
	}
	else if (iParam1 == Global_30723[0])
	{
		Function_60(iParam0, &Global_7171, iParam1);
	}
	else if (iParam1 == Global_30723[1])
	{
		Function_60(iParam0, &Global_7148, iParam1);
	}
	else if (iParam1 == Global_30723[2])
	{
		Function_60(iParam0, &Global_7113, iParam1);
	}
	else if (iParam1 == Global_30717[0])
	{
		Function_60(iParam0, &Global_7035, iParam1);
	}
	else if (iParam1 == Global_30717[1])
	{
		Function_60(iParam0, &Global_7032, iParam1);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
	{
		DECOR_REMOVE(Global_34573, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
	}
	UI_SET_ICON("ZMeter", 0);
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", false);
	UI_SET_PROGRESS_BAR_VAL("ZMeter", 1.0f);
	UI_EXIT("ZMeter");
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	Function_55(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_3380)
	{
		Function_58(iParam1);
	}
	return;
}

void Function_58(int iParam0) //Position: 0x188F / 6287
{
	char* cVar0;
	
	if (Global_3380 || Function_56(0x8000000))
	{
		return;
	}
	cVar0 = Function_59(iParam0);
	if (Function_26(iParam0))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "nIDLE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(20000, 0);
	return;
}

var Function_59(int iParam0) //Position: 0x18F3 / 6387
{
	int iVar0;
	
	iVar0 = "";
	if (iParam0 == Global_30679[1])
	{
		iVar0 = "FTR_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30707[1])
	{
		iVar0 = "MEX_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[1])
	{
		iVar0 = "NRT_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[1])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30723[2])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30685[0])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30685[1])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30685[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30693[1])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[2])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30707[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[3])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30640[0])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30640[2])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30640[1])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else if (iParam0 == Global_30658[3])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30658[1])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[0])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[1])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30679[0])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else
	{
		iVar0 = "";
	}
	return iVar0;
}

void Function_60(int iParam0, var uParam1, int iParam2) //Position: 0x1C20 / 7200
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (!IS_ACTOR_VALID(bVar1))
		{
		}
		else if (!IS_ACTOR_ALIVE(bVar1))
		{
		}
		else
		{
			Function_71(uParam1[iVar02], 4);
		}
		if (IS_VOLUME_VALID((iParam0 + 4[iVar05])->f_12))
		{
			DESTROY_VOLUME((iParam0 + 4[iVar05])->f_12);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
		}
		iVar0++;
	}
	if (!Function_26(iParam2))
	{
		Global_13172[iParam0->f_36411].f_32 = 0.0f;
		if (!Function_70(Global_76846, 0x4000000))
		{
			Function_65(Global_34573, 0x4000000, 1, 0);
		}
	}
	else if (Function_28(iParam0->f_356, 32))
	{
		if (!Function_70(Global_76846, 8388608))
		{
			Function_65(Global_34573, 8388608, 1, 0);
		}
	}
	else if (!Function_70(Global_76846, 4194304))
	{
		Function_65(Global_34573, 4194304, 1, 0);
	}
	Function_63(iParam0, 0, 0);
	DESTROY_OBJECT(*iParam0);
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRevolvers"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRevolvers");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRifles"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRifles");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRepeaters"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRepeaters");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumPistols"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumPistols");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumShotguns"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumShotguns");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
	{
		DECOR_REMOVE(Global_34573, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
	}
	Function_40(iParam0 + 192);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_61(iParam2, Function_26(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_56(1));
	return;
}

void Function_61(int iParam0, bool bParam1) //Position: 0x1EDA / 7898
{
	if (!Function_7(iParam0))
	{
		return;
	}
	if (bParam1 && Function_62("noZombieFireArt"))
	{
		return;
	}
	if (iParam0 == Global_30640[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30640[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30640[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[4])
	{
	}
	else if (iParam0 == Global_30668[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			if (!Function_53(5))
			{
				ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
			else
			{
				DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30668[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30679[1])
	{
	}
	else if (iParam0 == Global_30679[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[1])
	{
	}
	else if (iParam0 == Global_30707[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30723[0])
	{
	}
	else if (iParam0 == Global_30723[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30723[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30717[1])
	{
	}
	return;
}

int Function_62(char* cParam0) //Position: 0x2630 / 9776
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_63(var uParam0, bool bParam1, bool bParam2) //Position: 0x264F / 9807
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_64(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
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

bool Function_64(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x26CB / 9931
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_65(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x26E5 / 9957
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_67(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_66(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_66(char* cParam0, int iParam1) //Position: 0x2751 / 10065
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_67(bool bParam0, var uParam1, int iParam2) //Position: 0x2788 / 10120
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_69(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_68(uVar0))
		{
			case 0x00000002:
				if (!Function_70(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_68(char* cParam0) //Position: 0x2800 / 10240
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

int Function_69(int iParam0) //Position: 0x28A1 / 10401
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_45(&iVar1, 2147483648);
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

bool Function_70(var uParam0, int iParam1) //Position: 0x28DE / 10462
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_71(var uParam0, int iParam1) //Position: 0x28F1 / 10481
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_72(var uParam0, bool bParam1) //Position: 0x2908 / 10504
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	
	bVar6 = Function_76();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_75((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_74(uParam0[iVar05], 16384);
				uVar8 = StackVal;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(bVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(bVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_73(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_74(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_111(), uParam0[iVar05]->f_12))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(uParam0[iVar05]->f_16))
							{
								if (IS_PERS_CHAR_ALIVE(uParam0[iVar05]->f_16))
								{
									bVar10 = GET_ACTOR_FROM_PERS_CHAR(uParam0[iVar05]->f_16);
									if (IS_ACTOR_VALID(bVar10))
									{
										if (IS_ACTOR_IN_VOLUME(bVar10, uParam0[iVar05]->f_12))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_73(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
						else
						{
							Function_73(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_74(uParam0[iVar05], 1);
						uVar8 = StackVal;
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(bVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_73(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_73(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(bVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_74(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_74(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			bVar3 = IS_DOOR_LOCKED(bVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_3387)
				{
					if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_111(), uParam0[iVar05]->f_12))
							{
								SET_DOOR_LOCK(bVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(bVar7, 1);
				}
			}
			else if (Global_3387)
			{
				if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_111(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_74(uParam0[iVar05], 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(bVar7, 0);
			}
		}
		iVar0++;
	}
	Global_30620 = iVar0;
	return;
}

void Function_73(var uParam0, int iParam1) //Position: 0x2CD4 / 11476
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_74(var uParam0, int iParam1) //Position: 0x2CE5 / 11493
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_75(int iParam0, bool bParam1) //Position: 0x2CFF / 11519
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_76() //Position: 0x2D11 / 11537
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_77(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x2D1A / 11546
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_56(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_78(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_3387)
	{
		uParam0->f_8 = 1;
	}
	else if (Global_3386)
	{
		uParam0->f_8 = 1;
	}
	else if (StackVal)
	{
		uParam0->f_8 = 0;
	}
}

bool Function_78(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x2D9B / 11675
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_110(iParam0))
	{
		return 0;
	}
	Function_418(&(Global_29008[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (bVar0 != 0 && *iParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*iParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
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
					if (!Function_18(iParam0, 2))
					{
						if (!Function_18(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_108(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_107(iParam0, 8);
							}
						}
					}
				}
				else if (Function_18(iParam0, 2))
				{
					if (Function_18(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_12(0, 0, 0);
						}
						else
						{
							Function_12(0, 0, 30);
						}
						Function_17(iParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_18(iParam0, 2))
					{
						if (!Function_18(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_107(iParam0, 4);
							}
						}
					}
				}
				else if (Function_18(iParam0, 2))
				{
					if (Function_18(iParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_17(iParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_7(iParam2)) && !Function_106(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_105(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_18(iParam0, 2))
					{
						if (!Function_18(iParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime"))
							{
								if (StackVal > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(GET_CURRENT_GAME_TIME()), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime");
								}
							}
							if (Function_76())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_107(iParam0, 16);
								Function_97(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_18(iParam0, 2))
				{
					if (Function_18(iParam0, 16))
					{
						Function_17(iParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_18(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_18(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_107(iParam0, 2);
			}
			else
			{
				Function_17(iParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_7(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_419(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_18(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_96(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_107(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_7(iParam2))
					{
						Function_95(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_79(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_79(int iParam0) //Position: 0x31B4 / 12724
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_419(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_453(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_84(473, 1, 0, 0);
		iVar0 = Function_83(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_84(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_84(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_84(476, 1, 0, 0);
		}
	}
	bVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (bVar1 >= 30)
	{
		bVar1 = (bVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_82(iVar2, bVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_82(7, 30);
	}
	if (Function_81(473) <= Function_80(473))
	{
		if (!Function_76())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_80(int iParam0) //Position: 0x32B3 / 12979
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_81(int iParam0) //Position: 0x32F0 / 13040
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_82(int iParam0, bool bParam1) //Position: 0x3329 / 13097
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

var Function_83(int iParam0) //Position: 0x3390 / 13200
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_7(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

int Function_84(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x33E8 / 13288
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_94(iParam0, TO_FLOAT(bParam1), 1);
	Function_93(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_85(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3608 / 13832
{
	char* cVar0;
	char* cVar1[32];
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
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_80(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_81(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_81(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_91(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_89(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_86(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_35(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_86(int iParam0) //Position: 0x3C35 / 15413
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_87(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3C46 / 15430
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_88(char* cParam0, bool bParam1) //Position: 0x3D3B / 15675
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_89(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3D54 / 15700
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_75(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_90(Function_75(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_90(int iParam0, int iParam1) //Position: 0x3DB9 / 15801
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_91(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3DCB / 15819
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
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_92(iParam0) != 19 || Function_92(iParam0) != 17) || Function_92(iParam0) != 10) || Function_92(iParam0) != 9)
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
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_92(int iParam0) //Position: 0x3EFB / 16123
{
	return Global_35278[iParam020].f_48;
}

void Function_93(int iParam0) //Position: 0x3F0A / 16138
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_94(int iParam0, bool bParam1, bool bParam2) //Position: 0x40A9 / 16553
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
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
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = bParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

void Function_95(var uParam0, int iParam1) //Position: 0x42ED / 17133
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_96(struct<5> Param0) //Position: 0x42FA / 17146
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_97(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4320 / 17184
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	
	if (!Function_104(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_103(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_100(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(uVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(uVar3, iParam1);
		SET_CRIME_VICTIM(uVar3, bParam3);
		SET_CRIME_CRIMINAL(uVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(uVar3, vVar0);
		iVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, iVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_98();
		}
		SET_CRIME_FACTION(StackVal, uVar3);
		SET_CRIME_TALLIED(uVar3, 0);
		SET_CRIME_COUNTER(uVar3, 1);
		SET_CRIME_WORLD_REGION(uVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(uVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(uVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(uVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return uVar3;
}

void Function_98() //Position: 0x45B0 / 17840
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_99(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_99(bool bParam0, bool bParam1) //Position: 0x4613 / 17939
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_100(bool bParam0) //Position: 0x4642 / 17986
{
	if (Function_105(256))
	{
		return 0;
	}
	if (Function_105(262144))
	{
		return 0;
	}
	if (Function_102())
	{
		return 0;
	}
	if (!Function_105(1))
	{
		return 0;
	}
	if (!Function_105(4096))
	{
		return 0;
	}
	if (bParam0 && Function_101(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_105(2048))
	{
		return 0;
	}
	if (Function_76() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_101(int iParam0) //Position: 0x46B8 / 18104
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_102() //Position: 0x46C9 / 18121
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_103(int iParam0) //Position: 0x46E2 / 18146
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_104(int iParam0) //Position: 0x46F8 / 18168
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_105(int iParam0) //Position: 0x470D / 18189
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_106(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x472B / 18219
{
	uParam0 = uParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && uParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_107(int iParam0, int iParam1) //Position: 0x47CF / 18383
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_108(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x47E0 / 18400
{
	int iVar0;
	bool bVar1;
	
	Function_16(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_109(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_13(StackVal, bVar1, bParam4);
		}
	}
}

void Function_109(int iParam0, int iParam1) //Position: 0x4852 / 18514
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_16(iParam0);
	Function_15(iVar0);
	PRINTNL();
	Function_13(iParam0, iVar0, iParam1);
	return;
}

bool Function_110(int iParam0) //Position: 0x4877 / 18551
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(StackVal))
	{
		return 0;
	}
	return 1;
}

var Function_111() //Position: 0x4894 / 18580
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_112(int iParam0, bool bParam1) //Position: 0x48A9 / 18601
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	vector3 vVar14;
	struct<5> Var17;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	
	if (DECOR_CHECK_EXIST(Global_34573, "QM_TriggerAttack"))
	{
		DECOR_REMOVE(Global_34573, "QM_TriggerAttack");
		Function_45(iParam0 + 356, 16);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		if (iParam0->f_364 == 4294967295)
		{
			iParam0->f_364 = Function_221(0, bParam1, 3);
		}
		if (!Function_28(iParam0->f_356, 64))
		{
			iParam0->f_188 = 8;
		}
	}
	else if (bParam1 != Global_30717[1] || HUD_IS_FADED())
	{
		if (!Function_28(iParam0->f_356, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_220(1, 0));
			Function_219(iParam0 + 356, 0x20000000);
		}
		return;
	}
	if (Function_28(iParam0->f_356, 16))
	{
		Function_218(bParam1, 0.0f);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_28(iParam0->f_356, 4))
	{
		return;
	}
	if (Global_3380 && !Function_28(iParam0->f_356, 4))
	{
		Function_219(iParam0 + 356, 4);
		Function_57(iParam0, bParam1);
		DECOR_SET_FLOAT(StackVal, "ZombieScore", 0.0f);
		Function_217(0, 4294967295);
		Function_216();
		Function_55(bParam1);
		return;
	}
	fVar0 = Function_214(Function_215(bParam1));
	fVar1 = Function_213(bParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (iParam0->f_360 == 4294967295)
	{
		iParam0->f_360 = Function_221(111, 111, 5);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
	{
		DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		iVar3 = 0;
		while (StackVal < (iVar3 - 1))
		{
			bVar4 = (*iParam0 + 4)[iVar35];
			if (IS_ACTOR_ALIVE(bVar4))
			{
				Function_212(iParam0 + 4[iVar35]);
			}
			iVar3++;
		}
		Function_211(iParam0);
		iParam0->f_188 = 7;
		return;
	}
	if (Function_210(Function_215(bParam1)))
	{
		if (((iParam0->f_188 > 7 && !Function_28(iParam0->f_356, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
		{
			if (Function_28(iParam0->f_356, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_207(iParam0, 0);
				Function_212(iParam0 + 168);
				iVar5 = 0;
				while (StackVal < (iVar5 - 1))
				{
					Function_212(iParam0 + 4[iVar55]);
					iVar5++;
				}
				Function_219(iParam0 + 356, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_218(bParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0.5f);
				Function_54(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(Global_34573, "nDecayRate", 3);
				iParam0->f_188 = 5;
			}
			else
			{
				Function_205();
			}
		}
		if (DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI"))
		{
			if (DECOR_GET_FLOAT(Global_34573, "TimeToDestroyUI") + 2.0f) > GET_CURRENT_GAME_TIME()
			{
				DECOR_REMOVE(Global_34573, "TimeToDestroyUI");
				UI_EXIT("ZMeter");
			}
		}
		if (iParam0->f_188 <= 1 && iParam0->f_188 >= 6)
		{
			if (iParam0->f_188 >= 1)
			{
				Function_201(iParam0, bParam1, fVar2);
			}
			if (!Function_28(iParam0->f_356, 131072))
			{
				if (iParam0->f_188 == 6 && iParam0->f_188 < 1)
				{
					if ((Global_3386 && !Function_28(iParam0->f_356, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_219(iParam0 + 356, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar6 = Function_213(bParam1);
						fVar7 = (fVar6 % 10.0f);
						bVar8 = (fVar6 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar7 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar8));
						UI_REFRESH("ZMeter");
					}
					if (((Function_28(iParam0->f_356, 32768) && !DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && iParam0->f_188 > 5)
					{
						Function_211(iParam0);
					}
				}
			}
		}
	}
	Function_199(iParam0, bParam1);
	if (Function_28(iParam0->f_356, 1024))
	{
		Function_198(iParam0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_63096)
	{
		if (!Function_28(iParam0->f_356, 16384))
		{
			Function_219(iParam0 + 356, 16384);
			iVar9 = 0;
			while (StackVal < (iVar9 - 1))
			{
				MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 0);
				iVar9++;
			}
		}
	}
	else if (Function_28(iParam0->f_356, 16384))
	{
		Function_45(iParam0 + 356, 16384);
		iVar9 = 0;
		while (StackVal < (iVar9 - 1))
		{
			MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 1);
			iVar9++;
		}
	}
	if (Function_28(iParam0->f_356, 262144))
	{
		if (Function_436(iParam0))
		{
			Function_45(iParam0 + 356, 262144);
			Function_196(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_30616, bParam1, *iParam0);
			if (!Function_26(bParam1))
			{
				if (!Function_28(iParam0->f_356, 8))
				{
					Function_219(iParam0 + 356, 8);
					Function_195();
				}
			}
		}
	}
	if (Function_28(iParam0->f_356, 524288))
	{
		if (Function_195())
		{
			Function_219(iParam0 + 356, 8);
			Function_45(iParam0 + 356, 524288);
		}
	}
	switch (iParam0->f_188)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_70(Global_76846, 65536) || !Global_3365)) && Global_3386) && !Global_3385)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
				{
					DECOR_REMOVE(Global_34573, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
				}
				Function_187(iParam0);
				Function_219(iParam0 + 356, 262144);
				if (Function_26(bParam1))
				{
					if ((RAND_INT_RANGE(0, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_460(bParam1, 1);
					Function_181(bParam1);
					Function_217(0, 4294967295);
					Function_218(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_28(iParam0->f_356, 1))
					{
						Function_180(iParam0, bParam1);
						Function_179("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iParam0->f_188 = 2;
					}
					else
					{
						iParam0->f_188 = 4;
					}
					Function_176("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_460(bParam1, 0);
					Function_181(bParam1);
					Function_219(iParam0 + 356, 2);
					Function_217(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					iParam0->f_368 = 1000.0f;
					iParam0->f_188 = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_170(iParam0 + 168, 1, iParam0 + 356))
			{
				SET_ANIM_SET_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo", 0);
				iVar10 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(iParam0->f_168));
				if (((iVar10 != 41 || iVar10 != 42) || iVar10 != 43) || iVar10 != 44)
				{
					SET_ACTION_NODE_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo/Survivor/Leader/Rfl");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo/Survivor/Leader/Ptl");
				}
				Function_138(iParam0, bParam1);
				SAY_SINGLE_LINE_STRING_WITH_REPLY(iParam0->f_168, "GET_US_AMMO_P", Global_34573, "PLAYER_AGREE_TO_GET_AMMO", 1, 1, 0, 0);
				iParam0->f_188 = 3;
			}
			break;
		
		case 0x00000003:
			bVar11 = false;
			iVar9 = 0;
			while (StackVal < (iVar9 - 1))
			{
				bVar12 = (*iParam0 + 4)[iVar95];
				if (IS_ACTOR_ALIVE(bVar12))
				{
					if (Function_28((iParam0 + 4[iVar95])->f_16, 2))
					{
						if (DECOR_CHECK_EXIST(bVar12, "nUC_NoAmmo"))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(DECOR_GET_INT(bVar12, "nUC_NoAmmo")))
							{
								RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(bVar12, "nUC_NoAmmo"));
								DECOR_REMOVE(bVar12, "nUC_NoAmmo");
								SAY_SINGLE_LINE_STRING(bVar12, "PLAYER_NO_AMMO_P", true, true, 2, 0, true, false);
								return;
							}
						}
						if (Function_170(iParam0 + 4[iVar95], 0, iParam0 + 4[iVar95] + 16))
						{
							RELEASE_SCRIPT_USE_CONTEXT(StackVal);
							iVar13 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar12));
							Global_13172[iParam0->f_36411].f_32 = (Global_13172[iParam0->f_36411].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(Global_34573);
							AI_DONT_HARM_ACTOR((*iParam0 + 4)[iVar95]);
							Function_127(iParam0 + 4[iVar95], iVar13);
							Function_45(iParam0 + 4[iVar95] + 16, 2);
							Function_219(iParam0 + 4[iVar95] + 16, 16);
						}
						bVar11++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(bVar12, "DLC_give_ammo") && Function_28((iParam0 + 4[iVar95])->f_16, 16)) && (GET_TASK_STATUS(bVar12, 6) != 0 || GET_TASK_STATUS(bVar12, 6) != 2))
					{
						Function_45(iParam0 + 4[iVar95] + 16, 16);
						AI_CLEAR_DONT_HARM_ACTOR(bVar12);
						AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
						SET_MOVER_FROZEN(bVar12, 0);
						RESET_ANIM_SET_FOR_ACTOR(bVar12, 1);
						vVar14 = { 0.0f, 0.0f, 0.0f };
						Var17 = { 0.0f, 0.0f, 0.0f };
						GET_OBJECT_POSITION(StackVal, &vVar14);
						GET_OBJECT_ORIENTATION(StackVal, &Var17);
						TASK_PRIORITY_SET(bVar12, 1);
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar12, &vVar14, -1f);
						strcpy(&cVar20, "PLAYER_RESPOND_TO_THANKS_Z_", 64);
						if (IS_ACTOR_MALE(bVar12))
						{
							stradd(&cVar20, "M", 64);
						}
						else
						{
							stradd(&cVar20, "F", 64);
						}
						if (Function_126(bVar12))
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(bVar12, "THANKS_FOR_AMMO_P", Global_34573, &cVar20, 1, 1, 2, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(bVar12, "nTHANK_YOU", Global_34573, &cVar20, 1, 1, 2, 0);
						}
						iParam0->f_372 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (!IS_ACTOR_ALIVE(bVar12))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (IS_VOLUME_VALID((iParam0 + 4[iVar95])->f_12))
					{
						DESTROY_VOLUME((iParam0 + 4[iVar95])->f_12);
					}
				}
				iVar9++;
			}
			if (Global_30842[31])
			{
				PRINTSTRING("Survivors left to save: ");
				PRINTINT(bVar11);
				PRINTNL();
			}
			if (bVar11 == 0)
			{
				iParam0->f_188 = 4;
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_SET_BOOL(Global_34573, "bNoSurvivorHelp", true);
			}
			if (DECOR_CHECK_EXIST(Global_34573, "nDecayRate"))
			{
				bVar36 = DECOR_GET_INT(Global_34573, "nDecayRate");
				if (bVar36 == 3)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", 2);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.5f);
				}
				else if (bVar36 == 2)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.75f);
				}
				else if (bVar36 == 1)
				{
					DECOR_REMOVE(Global_34573, "nDecayRate");
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(1.0f);
				}
			}
			else
			{
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
				SET_POP_DENSITY_MULTIPLIER(1.0f);
			}
			ENABLE_AMBIENT_SPAWNING(true);
			Function_54(1);
			if (Function_121(iParam0))
			{
				DECOR_SET_FLOAT(Global_34573, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_120(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				iParam0->f_188 = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_352) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_218(bParam1, 300.0f);
			}
			else
			{
				Function_218(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_28(iParam0->f_356, 8))
			{
				Function_219(iParam0 + 356, 8);
				Function_195();
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
			{
				DECOR_REMOVE(Global_34573, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
			}
			Function_119(bParam1);
			Function_118(iParam0);
			Function_207(iParam0, 1);
			Function_55(Global_29006);
			iParam0->f_364 = Function_221(0, bParam1, 3);
			Function_219(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
			Function_219(iParam0 + 356, 512);
			if (!Function_28(Global_13172[iParam0->f_36411].f_24, 1))
			{
				bVar37 = Function_115(Function_215(bParam1));
				Function_84(660, bVar37, 0, 0);
				Function_219(&Global_13172[iParam0->f_36411] + 24, 1);
			}
			iParam0->f_188 = 11;
			break;
		
		case 0x00000008:
			Function_461(iParam0, bParam1, 1);
			Function_446(iParam0, Global_30616, bParam1);
			Function_445(iParam0, Global_30616);
			iParam0->f_188 = 9;
			break;
		
		case 0x00000009:
			if (Function_436(iParam0))
			{
				if (!bParam1 != Global_30717[0])
				{
					Function_423(iParam0, bParam1, Global_30616);
					iParam0->f_188 = 1;
				}
				else if (!DECOR_CHECK_EXIST(Global_34573, "BLACKWATER_WAIT"))
				{
					Function_423(iParam0, bParam1, Global_30616);
					DECOR_SET_FLOAT(Global_34573, "BLACKWATER_WAIT", GET_CURRENT_GAME_TIME());
				}
				else if (DECOR_GET_FLOAT(Global_34573, "BLACKWATER_WAIT") + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					SET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[15], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 4)[15], "tense_with_guns");
					SET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[25], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 4)[25], "tense_with_guns");
					iParam0->f_188 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (DECOR_CHECK_EXIST(Global_34573, "Special_BLK_Ready"))
			{
				DECOR_REMOVE(Global_34573, "Special_BLK_Ready");
				Function_138(iParam0, bParam1);
				Function_187(iParam0);
				Function_219(iParam0 + 356, 262144);
				Function_460(bParam1, 1);
				Function_219(&Global_13172[Function_221(111, 111, 5)11] + 20, 4);
				Function_181(bParam1);
				Function_217(0, 4294967295);
				Function_218(bParam1, 0.0f);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				RESET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[15], 0);
				RESET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[25], 0);
				iParam0->f_188 = 3;
			}
			break;
	}
	iVar9 = 0;
	while (StackVal < (iVar9 - 1))
	{
		bVar38 = (*iParam0 + 4)[iVar95];
		if (IS_ACTOR_VALID(bVar38))
		{
			if (!IS_ACTOR_ALIVE(bVar38))
			{
				if (!DECOR_CHECK_EXIST(bVar38, "DeathTallied"))
				{
					DECOR_SET_BOOL(bVar38, "DeathTallied", true);
					Global_13172[iParam0->f_36411].f_28 = (Global_13172[iParam0->f_36411].f_28 + 1.0f);
					if (Function_28(Global_13172[iParam0->f_36411].f_24, 1))
					{
						Function_114(660, 1, 0);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				if (DECOR_CHECK_EXIST((*iParam0 + 4)[iVar95], "nUC_NoAmmo"))
				{
					RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT((*iParam0 + 4)[iVar95], "nUC_NoAmmo"));
				}
				if (bVar38 == iParam0->f_168)
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (iParam0->f_188 <= 7)
					{
						if ((!GET_LAST_ATTACKER(bVar38) != Global_34573 && iParam0->f_188 != 2) && !Function_28(iParam0->f_356, 8192))
						{
							Function_219(iParam0 + 356, 8192);
							Function_176("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar39 = 0;
							while (StackVal < (iVar39 - 1))
							{
								Function_212(iParam0 + 4[iVar395]);
								SET_ACTOR_CAN_BE_TARGETED((*iParam0 + 4)[iVar395], true);
								iVar39++;
							}
							if (iParam0->f_188 <= 4)
							{
								iParam0->f_188 = 4;
							}
						}
					}
				}
				if (IS_VOLUME_VALID((iParam0 + 4[iVar95])->f_12))
				{
					DESTROY_VOLUME((iParam0 + 4[iVar95])->f_12);
				}
			}
			if (GET_LAST_ATTACKER(bVar38) != Global_34573 && !Function_28(iParam0->f_356, 0x4000000))
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				iVar40 = 0;
				while (StackVal < (iVar40 - 1))
				{
					Function_212(iParam0 + 4[iVar405]);
					SET_ACTOR_CAN_BE_TARGETED((*iParam0 + 4)[iVar405], true);
					MEMORY_CONSIDER_AS_ENEMY((*iParam0 + 4)[iVar405], Global_34573);
					iVar40++;
				}
				if (iParam0->f_188 <= 7)
				{
					if (iParam0->f_188 <= 5)
					{
						iParam0->f_188 = 4;
					}
					Function_176("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_219(iParam0 + 356, 0x4000000);
				iParam0->f_364 = Function_221(0, bParam1, 3);
				Function_219(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
			}
		}
		iVar9++;
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo") && ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	bVar41 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(bVar41))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar41)), "footlock"))
		{
			Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bVar41, *iParam0);
		}
	}
	return;
}

void Function_113(bool bParam0, struct<365> Param1) //Position: 0x5BC3 / 23491
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = GET_OBJECT_FROM_GRINGO(bParam0);
	bVar1 = GET_OBJECT_NAME(bVar0);
	STRING_CLEAR_TOKENIZER();
	iVar2 = SET_OWNERSHIP_STRAGGLER(bVar1, "_");
	bVar3 = STRING_GET_TOKEN((iVar2 - 2));
	bVar4 = TO_FLOAT(STRING_TO_INT(bVar3));
	Function_219(&Global_13172[Param1.f_36411] + 20, FLOOR(POW(2.0f, bVar4)));
}

int Function_114(int iParam0, bool bParam1, int iParam2) //Position: 0x5C12 / 23570
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_93(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_85(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

var Function_115(int iParam0) //Position: 0x5E0D / 24077
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	
	iVar0 = Function_117(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_116(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					bVar13 = Global_6298[iVar102];
					break;
				
				case 0x00000002:
					bVar13 = Global_6351[iVar102];
					break;
				
				case 0x00000003:
					bVar13 = Global_6364[iVar102];
					break;
				
				case 0x00000004:
					bVar13 = Global_6402[iVar102];
					break;
				
				case 0x00000005:
					bVar13 = Global_6433[iVar102];
					break;
				
				case 0x00000008:
					bVar13 = Global_6563[iVar102];
					break;
				
				case 0x00000009:
					bVar13 = Global_6614[iVar102];
					break;
				
				case 0x0000000B:
					bVar13 = Global_6654[iVar102];
					break;
				
				case 0x0000000C:
					bVar13 = Global_6709[iVar102];
					break;
				
				case 0x0000000D:
					bVar13 = Global_6764[iVar102];
					break;
				
				case 0x0000000E:
					bVar13 = Global_6785[iVar102];
					break;
				
				case 0x0000000F:
					bVar13 = Global_6815[iVar102];
					break;
				
				case 0x00000010:
					bVar13 = Global_6866[iVar102];
					break;
				
				case 0x00000011:
					bVar13 = Global_6490[iVar102];
					break;
				
				case 0x00000019:
					bVar13 = Global_6933[iVar102];
					break;
				
				case 0x00000012:
					bVar13 = Global_6987[iVar102];
					break;
				
				case 0x00000013:
					bVar13 = Global_7002[iVar102];
					break;
				
				case 0x00000015:
					bVar13 = Global_7035[iVar102];
					break;
				
				case 0x00000016:
					bVar13 = Global_7113[iVar102];
					break;
				
				case 0x00000017:
					bVar13 = Global_7148[iVar102];
					break;
				
				case 0x00000018:
					bVar13 = Global_7171[iVar102];
					break;
			}
			if (!Function_28(bVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_116(int iParam0, int iParam1) //Position: 0x5FF7 / 24567
{
	iParam1 = iParam1;
	if (iParam1 == Global_30640[0])
	{
		(*iParam0)[0] = 65;
		(*iParam0)[1] = 68;
		(*iParam0)[2] = 435;
		(*iParam0)[3] = 428;
		(*iParam0)[4] = 107;
		(*iParam0)[5] = 140;
		return 6;
	}
	if (iParam1 == Global_30717[0])
	{
		(*iParam0)[0] = 89;
		(*iParam0)[1] = 95;
		(*iParam0)[2] = 146;
		return 3;
	}
	if (iParam1 == Global_30668[1])
	{
		(*iParam0)[0] = 56;
		(*iParam0)[1] = 24;
		(*iParam0)[2] = 138;
		(*iParam0)[3] = 139;
		return 4;
	}
	if (iParam1 == Global_30668[0])
	{
		(*iParam0)[0] = 54;
		(*iParam0)[1] = 420;
		(*iParam0)[2] = 38;
		(*iParam0)[3] = 213;
		(*iParam0)[4] = 55;
		return 5;
	}
	if (iParam1 == Global_30693[0])
	{
		(*iParam0)[0] = 276;
		(*iParam0)[1] = 237;
		(*iParam0)[2] = 290;
		(*iParam0)[3] = 460;
		(*iParam0)[4] = 269;
		(*iParam0)[5] = 283;
		return 6;
	}
	if (iParam1 == Global_30685[0])
	{
		(*iParam0)[0] = 289;
		(*iParam0)[1] = 392;
		(*iParam0)[2] = 268;
		(*iParam0)[3] = 266;
		(*iParam0)[4] = 382;
		(*iParam0)[5] = 245;
		(*iParam0)[6] = 304;
		return 7;
	}
	if (iParam1 == Global_30640[2])
	{
		(*iParam0)[0] = 487;
		(*iParam0)[1] = 491;
		(*iParam0)[2] = 493;
		return 3;
	}
	if (iParam1 == Global_30707[3])
	{
		(*iParam0)[0] = 379;
		(*iParam0)[1] = 380;
		(*iParam0)[2] = 391;
		(*iParam0)[3] = 455;
		return 4;
	}
	if (iParam1 == Global_30685[2])
	{
		(*iParam0)[0] = 410;
		(*iParam0)[1] = 411;
		(*iParam0)[2] = 465;
		return 3;
	}
	if (iParam1 == Global_30640[1])
	{
		(*iParam0)[0] = 152;
		(*iParam0)[1] = 176;
		return 2;
	}
	if (iParam1 == Global_30658[1])
	{
		(*iParam0)[0] = 133;
		(*iParam0)[1] = 144;
		return 2;
	}
	if (iParam1 == Global_30723[2])
	{
		(*iParam0)[0] = 29;
		(*iParam0)[1] = 30;
		(*iParam0)[2] = 28;
		return 3;
	}
	if (iParam1 == Global_30685[1])
	{
		(*iParam0)[0] = 516;
		(*iParam0)[1] = 529;
		return 2;
	}
	if (iParam1 == Global_30723[1])
	{
		(*iParam0)[0] = 169;
		(*iParam0)[1] = 39;
		(*iParam0)[2] = 149;
		return 3;
	}
	if (iParam1 == Global_30693[1])
	{
		(*iParam0)[0] = 62;
		(*iParam0)[1] = 242;
		(*iParam0)[2] = 244;
		(*iParam0)[3] = 296;
		(*iParam0)[4] = 297;
		(*iParam0)[5] = 260;
		(*iParam0)[6] = 295;
		(*iParam0)[7] = 141;
		return 8;
	}
	if (iParam1 == Global_30658[3])
	{
		(*iParam0)[0] = 505;
		(*iParam0)[1] = 506;
		(*iParam0)[2] = 507;
		(*iParam0)[3] = 508;
		(*iParam0)[4] = 510;
		(*iParam0)[5] = 509;
		return 6;
	}
	if (iParam1 == Global_30658[4])
	{
		(*iParam0)[0] = 400;
		return 1;
	}
	if (iParam1 == Global_30707[2])
	{
		(*iParam0)[0] = 281;
		(*iParam0)[1] = 282;
		(*iParam0)[2] = 456;
		return 3;
	}
	if (iParam1 == Global_30707[0])
	{
		(*iParam0)[0] = 396;
		(*iParam0)[1] = 462;
		(*iParam0)[2] = 15;
		(*iParam0)[3] = 11;
		(*iParam0)[4] = 461;
		return 5;
	}
	if (iParam1 == Global_30693[2])
	{
		(*iParam0)[0] = 238;
		(*iParam0)[1] = 530;
		(*iParam0)[2] = 294;
		return 3;
	}
	if (iParam1 == Global_30723[0])
	{
		(*iParam0)[0] = 404;
		return 1;
	}
	if (iParam1 == Global_30679[0])
	{
		(*iParam0)[0] = 168;
		(*iParam0)[1] = 176;
		(*iParam0)[2] = 177;
		return 3;
	}
	return 0;
}

var Function_117(int iParam0) //Position: 0x63D3 / 25555
{
	if (iParam0 == 1)
	{
		return Global_30640[0];
	}
	if (iParam0 == 2)
	{
		return Global_30640[2];
	}
	if (iParam0 == 3)
	{
		return Global_30640[1];
	}
	if (iParam0 == 4)
	{
		return Global_30658[1];
	}
	if (iParam0 == 5)
	{
		return Global_30658[3];
	}
	if (iParam0 == 8)
	{
		return Global_30668[0];
	}
	if (iParam0 == 9)
	{
		return Global_30668[1];
	}
	if (iParam0 == 11)
	{
		return Global_30679[0];
	}
	if (iParam0 == 12)
	{
		return Global_30685[0];
	}
	if (iParam0 == 13)
	{
		return Global_30685[1];
	}
	if (iParam0 == 14)
	{
		return Global_30685[2];
	}
	if (iParam0 == 15)
	{
		return Global_30693[0];
	}
	if (iParam0 == 16)
	{
		return Global_30693[1];
	}
	if (iParam0 == 17)
	{
		return Global_30693[2];
	}
	if (iParam0 == 25)
	{
		return Global_30707[2];
	}
	if (iParam0 == 18)
	{
		return Global_30707[3];
	}
	if (iParam0 == 19)
	{
		return Global_30707[0];
	}
	if (iParam0 == 21)
	{
		return Global_30717[0];
	}
	if (iParam0 == 22)
	{
		return Global_30723[2];
	}
	if (iParam0 == 23)
	{
		return Global_30723[1];
	}
	if (iParam0 == 24)
	{
		return Global_30723[0];
	}
	if (iParam0 == 26)
	{
		return Global_30679[1];
	}
	if (iParam0 == 27)
	{
		return Global_30707[1];
	}
	return 4294967295;
}

void Function_118(int iParam0) //Position: 0x6559 / 25945
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
		}
		iVar0++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	return;
}

void Function_119(int iParam0) //Position: 0x65A8 / 26024
{
	char* cVar0;
	
	if (Global_3380 || Function_56(0x8000000))
	{
		return;
	}
	cVar0 = Function_59(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_120(int iParam0) //Position: 0x65E0 / 26080
{
	int iVar0;
	
	if (Function_28(iParam0, 1) && Function_28(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_121(int iParam0) //Position: 0x6614 / 26132
{
	return Function_122(iParam0 + 352);
}

int Function_122(int iParam0) //Position: 0x6622 / 26146
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	bool bVar11;
	bool bVar12;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_35()));
	}
	bVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_35()));
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_LAYOUT(bVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	ITERATE_IN_VOLUME(StackVal, bVar1);
	START_OBJECT_ITERATOR(bVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if ((!IS_ACTOR_HORSE(bVar3) && !IS_ACTOR_HOGTIED(bVar3)) && IS_ACTOR_ALIVE(bVar3))
		{
			iVar4 = GET_ACTOR_ENUM(bVar3);
			if ((iVar4 > 1128 || iVar4 < 1130) && iVar4 == 1247)
			{
				Var5 = { 0.0f, 0.0f, 0.0f };
				GET_POSITION(bVar3, &Var5);
				bVar8 = GET_MATERIAL_AT_VECTOR(&Var5);
				bVar9 = (Function_28(bVar8, 1024) && bVar8 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar9 = true;
				}
				if (!bVar9)
				{
					iVar10 = SQUAD_GET_SIZE(*iParam0);
					if (iVar10 >= 6)
					{
						if (Function_124(StackVal, StackVal, bVar3, Global_34574) < 20.0f && !Function_64(bVar3, 0x3f800000, 0x42960000, 1, 1, 0))
						{
							bVar9 = true;
						}
					}
					if (!bVar9)
					{
						if (FABS((StackVal - StackVal)) < 25.0f)
						{
							bVar9 = true;
						}
					}
				}
				if (bVar9)
				{
					SQUAD_JOIN(bVar3, bVar0);
				}
				else
				{
					SQUAD_JOIN(bVar3, *iParam0);
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	if (SQUAD_GET_SIZE(*iParam0) > 4)
	{
		Function_123(&bVar0);
		DESTROY_OBJECT(bVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*iParam0, 2560);
		Function_453(&(Global_29008[Global_29006]), 0x20000000);
		Function_179("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		bVar11 = false;
		while (bVar11 <= SQUAD_GET_SIZE(*iParam0))
		{
			bVar12 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar11);
			REFERENCE_ACTOR(bVar12);
			SET_ACTOR_STAY_WITHIN_VOLUME(StackVal, bVar12, 1, 1);
			TASK_PRIORITY_SET(bVar12, 0);
			TASK_GO_NEAR_OBJECT(bVar12, Global_34573, 10.0f, 4, 0, 1);
			if (IS_ACTOR_ANIMAL(bVar12))
			{
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bVar12, 11, 0);
			}
			ADD_BLIP_FOR_ACTOR(bVar12, 322, 0, 2, 0);
			bVar11++;
		}
		return 1;
	}
	DESTROY_OBJECT(bVar0);
	DESTROY_OBJECT(*iParam0);
	return 0;
}

void Function_123(int iParam0) //Position: 0x6848 / 26696
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_ALIVE(bVar1))
			{
				KILL_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

float Function_124(bool bParam0, vector3 vParam1) //Position: 0x6897 / 26775
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_125(bParam0);
		vVar0 = { StackVal, StackVal, Function_125(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_125(bool bParam0) //Position: 0x6911 / 26897
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_126(bool bParam0) //Position: 0x697B / 27003
{
	int iVar0;
	
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 0;
	}
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 != 9 || iVar0 != 15) || iVar0 != 24) || iVar0 != 420) || iVar0 != 28) || iVar0 != 29) || iVar0 != 30) || iVar0 != 36) || iVar0 != 38) || iVar0 != 39) || iVar0 != 54) || iVar0 != 55) || iVar0 != 56) || iVar0 != 65) || iVar0 != 68) || iVar0 != 404) || iVar0 != 400) || iVar0 != 89) || iVar0 != 95) || iVar0 != 96) || iVar0 != 107) || iVar0 != 139) || iVar0 != 140) || iVar0 != 141) || iVar0 != 144) || iVar0 != 146) || iVar0 != 149) || iVar0 != 152) || iVar0 != 168) || iVar0 != 169) || iVar0 != 176) || iVar0 != 177) || iVar0 != 213) || iVar0 != 509) || iVar0 != 493) || iVar0 != 529) || iVar0 != 237) || iVar0 != 238) || iVar0 != 245) || iVar0 != 266) || iVar0 != 268) || iVar0 != 269) || iVar0 != 276) || iVar0 != 283) || iVar0 != 289) || iVar0 != 294) || iVar0 != 304) || iVar0 != 428) || iVar0 != 435) || iVar0 != 461) || iVar0 != 465) || iVar0 != 455) || iVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_127(int iParam0, bool bParam1) //Position: 0x6AEA / 27370
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	float fVar10;
	int iVar11;
	int iVar12;
	
	Function_137();
	Function_136();
	GET_POSITION(*iParam0, &vVar0);
	bVar3 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar3, 8);
	ITERATE_ON_PARTIAL_NAME(bVar3, "Ammo");
	ITERATE_IN_SPHERE(bVar3, vVar0, 2.0f);
	bVar6 = START_OBJECT_ITERATOR(bVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar4 = bVar6;
	}
	bVar6 = OBJECT_ITERATOR_NEXT(bVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar5 = bVar6;
	}
	DESTROY_ITERATOR(bVar3);
	Function_84(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(bVar4) || !IS_OBJECT_VALID(bVar5))
	{
		SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_135(bParam1, 5.0f, 1);
		Function_212(iParam0);
		Function_134(Global_29006, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(bVar4, &vVar7);
	fVar10 = GET_OBJECT_HEADING(bVar4);
	SET_OBJECT_POSITION(Global_34573, vVar7);
	SET_ACTOR_HEADING(Global_34573, fVar10, 1);
	SET_MOVER_FROZEN(*iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(*iParam0, "DLC_give_ammo", 1);
	if (!Function_133(StackVal, StackVal, *iParam0, vVar7))
	{
		iVar11 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(*iParam0));
		if (((iVar11 != 41 || iVar11 != 42) || iVar11 != 43) || iVar11 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/LT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/LT/Ptl");
		}
	}
	else
	{
		iVar12 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(*iParam0));
		if (((iVar12 != 41 || iVar12 != 42) || iVar12 != 43) || iVar12 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/RT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/RT/Ptl");
		}
	}
	SET_ANIM_SET_FOR_ACTOR(Global_34573, "DLC_give_ammo", 1);
	if (GET_WEAPON_IN_HAND(Global_34573) == 4294967295)
	{
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "DLC_give_ammo/Player/Hnd");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "DLC_give_ammo/Player/Weapon");
	}
	TASK_PRIORITY_SET(*iParam0, 1);
	TASK_STAND_STILL(*iParam0, 3.0f, 0, 0);
	Function_128(*iParam0, 0, Global_34573, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_135(bParam1, 5.0f, 1);
	Function_212(iParam0);
	Function_134(Global_29006, 10.0f);
	return;
}

var Function_128(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6DB8 / 28088
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_129(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6E37 / 28215
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_132(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_131(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_130(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 1.6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 1.5f, 1, 0);
	return;
}

void Function_130(var uParam0, bool bParam1) //Position: 0x6E94 / 28308
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.402189f, 1.415817f, -0.851866f, 6.384388f, -147.5115f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_131(var uParam0, bool bParam1) //Position: 0x6F14 / 28436
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.421349f, 1.41818f, -0.861325f, -6.658212f, -134.564f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_132(var uParam0, bool bParam1) //Position: 0x6F94 / 28564
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.442921f, 1.420794f, -0.871029f, 4.479696f, -143.4034f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_133(bool bParam0, vector3 vParam1) //Position: 0x7018 / 28696
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(bParam0, &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 0);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 < 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_134(int iParam0, float fParam1) //Position: 0x7056 / 28758
{
	float fVar0;
	
	fVar0 = (DECOR_GET_FLOAT(StackVal, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(StackVal, "ZombieScore", fVar0);
	return;
}

void Function_135(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7098 / 28824
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GET_WEAPONENUM_FOR_AMMOENUM(Global_34573, bParam0);
	fVar1 = _GET_AMMO_AMOUNT(Global_34573, bParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(Global_34573, bVar0);
	if (fVar1 <= bParam1)
	{
		fVar3 = bParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (bParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(Global_34573, bVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, bParam0, (fVar1 - fVar3), 0);
	}
	if (bParam2)
	{
		bVar5 = FLOOR(bParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(bVar6), INT_TO_STRING(bVar5), 5.0f, Function_35(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_136() //Position: 0x71CF / 29135
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_137() //Position: 0x71E1 / 29153
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_138(int iParam0, bool bParam1) //Position: 0x71F6 / 29174
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(Global_34573, "bTalkedToLeader", true);
	Function_141(StackVal, StackVal, Global_34574, 1, iParam0->f_168, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRevolvers") != 0)
	{
		uVar0[iVar4] = "ammo_revolver";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRifles") != 0)
	{
		uVar0[iVar4] = "ammo_rifle";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRepeaters") != 0)
	{
		uVar0[iVar4] = "ammo_repeater";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumShotguns") != 0)
	{
		uVar0[iVar4] = "ammo_shell";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumSnipers") != 0)
	{
		uVar0[iVar4] = "ammo_sniperrifle";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumPistols") != 0)
	{
		uVar0[iVar4] = "ammo_pistol";
		iVar4++;
	}
	if (iVar4 == 1)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_1AmmoType", uVar0[0], 0, 0, 0, 2, 0, 0);
	}
	else if (iVar4 == 2)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_2AmmoType", uVar0[0], uVar0[1], 0, 0, 2, 0, 0);
	}
	else if (iVar4 != 0)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_3AmmoType", uVar0[0], uVar0[1], uVar0[2], 0, 2, 0, 0);
	}
	Function_179("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_28(iParam0->f_356, 8))
	{
		if (Function_195())
		{
			Function_219(iParam0 + 356, 8);
		}
		else
		{
			Function_219(iParam0 + 356, 524288);
		}
	}
	Function_219(iParam0 + 356, 32);
	iParam0->f_364 = Function_221(0, bParam1, 3);
	Function_219(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
	Function_139(iParam0);
	return;
}

void Function_139(int iParam0) //Position: 0x74D8 / 29912
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (IS_ACTOR_ALIVE(bVar1))
		{
			if (!DECOR_CHECK_EXIST(bVar1, "PreSaved") || (DECOR_CHECK_EXIST(bVar1, "PreSaved") && DECOR_CHECK_EXIST(bVar1, "Core")))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 325, 0, 2, 0);
				SET_BLIP_NAME(bVar2, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar2, 1);
				if (Global_29006 == Global_30717[0])
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 2.5f);
				}
				else if (Global_29006 == Global_30668[1])
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 4.0f);
				}
				else
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 1.75f);
				}
				UNK_0x1E98AFEC(bVar2, 1);
				if (IS_VOLUME_VALID((iParam0 + 4[iVar05])->f_12))
				{
					DESTROY_VOLUME((iParam0 + 4[iVar05])->f_12);
				}
				(iParam0 + 4[iVar05])->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_35(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
				ATTACH_OBJECTS((iParam0 + 4[iVar05])->f_12, bVar1, Function_35(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar1));
				iVar4 = Function_140(bVar1);
				if (_GET_AMMO_AMOUNT(Global_34573, bVar3, 1) <= 5.0f)
				{
					(iParam0 + 4[iVar05])->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(bVar1, "nUC_NoAmmo"))
				{
					bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
					DECOR_SET_INT(bVar1, "nUC_NoAmmo", bVar5);
				}
				Function_219(iParam0 + 4[iVar05] + 16, 2);
				bVar6 = CREATE_POINT_IN_LAYOUT(bVar1, Function_35(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bVar6, bVar1, Function_35(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar7 = ADD_BLIP_FOR_OBJECT(bVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(bVar7, 1);
				DECOR_SET_INT(bVar1, "PauseMapBlip", bVar7);
				SET_BLIP_NAME(bVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar7, 1);
			}
			else
			{
				Function_134(Global_29006, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_140(bool bParam0) //Position: 0x7749 / 30537
{
	bool bVar0;
	
	bVar0 = DECOR_GET_INT(bParam0, "nammo_type");
	if (bVar0 == 8)
	{
		return "ammo_repeater";
	}
	if (bVar0 == 6)
	{
		return "ammo_pistol";
	}
	if (bVar0 == 10)
	{
		return "ammo_shotgun";
	}
	if (bVar0 == 9)
	{
		return "ammo_rifle";
	}
	if (bVar0 == 11)
	{
		return "ammo_sniperrifle";
	}
	if (bVar0 == 7)
	{
		return "ammo_revolver";
	}
	return "ammo_repeater";
}

var Function_141(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x780C / 30732
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	vector3 vVar28;
	
	if (Function_169(StackVal, StackVal, vParam0))
	{
		LOG_ERROR("SAVE_SOFT_DEATH_RESTART: Strange things are afoot...");
	}
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_112 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
	PRINTNL();
	bVar0 = false;
	Global_34165.f_16 = 0;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	if (bParam3)
	{
		Global_34165.f_24 = Global_29006;
		if (IS_ACTOR_VALID(bParam4))
		{
			Function_168(bParam4);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_168(bParam4), StackVal) };
			VNORMALIZE(&vVar1);
			Global_34165.f_12 = UNK_0x9C40E671(&vVar1);
		}
		else
		{
			Global_34165.f_12 = Function_167(Global_34573);
		}
		Global_34165 = { StackVal, StackVal, vParam0 };
		if (IS_PS3())
		{
			Global_34165.f_4 = (StackVal + 0.1f);
		}
		bVar0 = true;
	}
	else if (bParam5)
	{
		Global_34165.f_24 = Global_29006;
		if (!Function_166(&Global_34165, &Global_34165 + 12, &bVar4))
		{
			GET_VOLUME_CENTER(bVar4, &vVar5);
			if (Function_162(StackVal, StackVal, vVar5, bVar4, &vVar8, &vVar11, 1))
			{
				vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar8, vVar11, StackVal) };
				VNORMALIZE(&vVar14);
				Global_34165.f_12 = UNK_0x9C40E671(&vVar14);
				Global_34165 = { StackVal, StackVal, vVar8 };
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			(*&Global_34165 + 68)[9] = 1;
			bVar0 = true;
		}
	}
	else if (!Function_166(&Global_34165, &Global_34165 + 12, &bVar17))
	{
		Global_34165.f_24 = Function_160(StackVal, StackVal, vParam0, 0.0f, 1);
		if (Function_7(Global_34165.f_24))
		{
			bVar17 = StackVal;
			GET_VOLUME_CENTER(bVar17, &vVar18);
			if (Function_162(StackVal, StackVal, vVar18, bVar17, &vVar21, &vVar24, 0))
			{
				iVar27 = Function_159(StackVal, StackVal, vVar21, 1);
				if ((StackVal && ((iVar27 == Global_30633[0] && iVar27 == Global_30633[2]) && iVar27 == Global_30633[1]) != 3) && Global_29004 != 1)
				{
					Global_34165 = { -3515.646f, 19.234f, 4205.955f };
					Global_34165.f_12 = 225.789f;
				}
				else if (Global_34165.f_24 == Global_30717[1])
				{
					Global_34165 = { -66.023f, 116.861f, 1411.445f };
					Global_34165.f_12 = 64.688f;
				}
				else if (Global_34165.f_24 == Global_30658[3])
				{
					Global_34165 = { -4504.957f, 20.121f, 3406.793f };
					Global_34165.f_12 = 324.417f;
				}
				else if (Global_34165.f_24 == Global_30707[1])
				{
					Global_34165 = { -746.495f, 67.416f, 3414.803f };
					Global_34165.f_12 = 316.104f;
				}
				else if (Global_34165.f_24 == Global_30707[3])
				{
					Global_34165 = { 451.281f, 78.306f, 3474.125f };
					Global_34165.f_12 = 79.05f;
				}
				else
				{
					vVar28 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar21, vVar24, StackVal) };
					VNORMALIZE(&vVar28);
					Global_34165.f_12 = UNK_0x9C40E671(&vVar28);
					Global_34165 = { StackVal, StackVal, vVar21 };
				}
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else if (Global_29006 == Global_30723[0])
			{
				Global_34165 = { -737.414f, 178.366f, 782.796f };
				Global_34165.f_12 = 117.832f;
				Global_34165.f_24 = Global_30723[0];
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			LOG_ERROR("DID NOT FIND A VALID REGION NEAR");
		}
	}
	else
	{
		Global_34165.f_24 = Global_29006;
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_142();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_142() //Position: 0x7C13 / 31763
{
	Function_155();
	Function_154();
	Function_154();
	Function_153();
	Function_153();
	Function_152();
	Function_152();
	Function_149(0);
	Function_149(0);
	if (!Function_76())
	{
		Function_147();
		Function_146();
		Function_145();
		Function_144();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_143();
	return;
}

void Function_143() //Position: 0x7C65 / 31845
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_144() //Position: 0x7D6B / 32107
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
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
	Global_83815 = fVar0;
	return;
}

void Function_145() //Position: 0x7D9E / 32158
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
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_146() //Position: 0x7F2C / 32556
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
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_147() //Position: 0x8176 / 33142
{
	Function_148(&Global_28260, 1, 0);
	return;
}

void Function_148(int iParam0, bool bParam1, int iParam2) //Position: 0x8184 / 33156
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_111();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_149(int iParam0) //Position: 0x8375 / 33653
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
					iVar2 = ((Function_151((50 + iVar4)) + Function_151((183 + iVar4))) + Function_151((90 + iVar4)));
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
	Function_150(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_150(int iParam0, bool bParam1, bool bParam2) //Position: 0x841B / 33819
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_94(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_93(iParam0);
	if (bParam2)
	{
		Function_85(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_151(bool bParam0) //Position: 0x86B6 / 34486
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_152() //Position: 0x86F7 / 34551
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
		iVar2 = ((Function_151((50 + iVar3) + 15) + Function_151((183 + iVar3) + 15)) + Function_151((90 + iVar3) + 15));
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
	Function_150(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_153() //Position: 0x8780 / 34688
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
			iVar2 = ((Function_151((50 + iVar3) + 8) + Function_151((183 + iVar3) + 8)) + Function_151((90 + iVar3) + 8));
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
	Function_150(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_154() //Position: 0x8817 / 34839
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
		iVar2 = ((Function_151((50 + iVar3)) + Function_151((183 + iVar3))) + Function_151((90 + iVar3)));
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
	Function_150(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_155() //Position: 0x8896 / 34966
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_156(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_150(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_156(int iParam0, bool bParam1, int iParam2) //Position: 0x88CF / 35023
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_94(iParam0, bParam1, 1);
	Function_93(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_85(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

int Function_157(int iParam0) //Position: 0x8AD9 / 35545
{
	if (!Function_158(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_158(int iParam0) //Position: 0x8AF3 / 35571
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_159(vector3 vParam0, bool bParam3) //Position: 0x8B09 / 35593
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(StackVal))
			{
				if (IS_POINT_IN_VOLUME(StackVal, vParam0))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (bParam3)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

var Function_160(vector3 vParam0, float fParam3, int iParam4) //Position: 0x8B74 / 35700
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_169(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		if (StackVal && (StackVal || IS_VOLUME_VALID(StackVal) != 3 != 4))
		{
			iVar5 = 0;
			if (iParam4 == 0)
			{
				iVar5 = 1;
			}
			else if (Function_161(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (StackVal && !IS_ACTOR_IN_VOLUME(!Function_419(&(Global_29008[iVar6]), 4096), Global_34573))
			{
				iVar5 = 0;
			}
			if (iVar5 == 1)
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				if (VDIST(vParam0, vVar1) > bVar4 && VDIST(vParam0, vVar1) < fParam3)
				{
					iVar0 = iVar6;
					bVar4 = VDIST(vParam0, vVar1);
				}
			}
		}
		iVar6++;
	}
	if (Function_7(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_161(int iParam0) //Position: 0x8C6E / 35950
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_7(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

bool Function_162(vector3 vParam0, bool bParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x8CC6 / 36038
{
	var uVar0;
	int iVar1;
	struct<9> Var2;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	struct<6> Var14;
	var uVar20;
	int iVar26;
	vector3 vVar32;
	vector3 vVar35;
	vector3 vVar38;
	vector3 vVar41;
	
	if (Function_169(StackVal, StackVal, vParam0) || !IS_VOLUME_VALID(bParam3))
	{
		return 0;
	}
	uVar0 = START_CURVE_QUERY(Global_28841, vParam0, 2096, 0.1f, 300.0f, Function_165(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(uVar0) < 0)
	{
		UNK_0xDF93BD7C(uVar0);
		return 0;
	}
	bVar11 = -1.0f;
	bVar13 = false;
	iVar1 = 0;
	while (iVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(uVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(uVar0, iVar1, &vVar2);
		vVar8.x = vVar2.x;
		vVar8.f_4 = vVar2.y;
		vVar8.f_8 = vVar2.z;
		if ((bVar11 > 0.0f || bVar11 < VDIST(vParam0, vVar8)) && !IS_POINT_IN_VOLUME(vVar8, bParam3))
		{
			bVar11 = VDIST(vParam0, vVar8);
			*uParam4 = { StackVal, StackVal, vVar8 };
			bVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar0, iVar1);
			bVar13 = true;
		}
		iVar1++;
	}
	UNK_0xDF93BD7C(uVar0);
	if (bVar13)
	{
		Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_164(StackVal, StackVal, *uParam4) };
		if (!bParam6)
		{
			UNK_0x19D652F9(bVar12, 100.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -100.0f, &Var14, &iVar26);
		}
		else
		{
			UNK_0x19D652F9(bVar12, 10.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -10.0f, &Var14, &iVar26);
		}
		Function_163(&uVar20);
		vVar32 = { StackVal, StackVal, Function_163(&uVar20) };
		Function_163(&iVar26);
		vVar35 = { StackVal, StackVal, Function_163(&iVar26) };
		GET_VOLUME_CENTER(bParam3, &vVar38);
		if (!bParam6)
		{
			if (VDIST(vVar32, vVar38) >= VDIST(vVar35, vVar38))
			{
				*uParam5 = { StackVal, StackVal, vVar32 };
			}
			else
			{
				*uParam5 = { StackVal, StackVal, vVar35 };
			}
		}
		else
		{
			vVar41 = { StackVal, StackVal, *uParam4 };
			*uParam4 = { StackVal, StackVal, vVar35 };
			if (!IS_POINT_IN_VOLUME(vVar32, bParam3))
			{
				*uParam4 = { StackVal, StackVal, vVar32 };
			}
			*uParam5 = { StackVal, StackVal, vVar38 };
		}
	}
	return bVar13;
}

vector3 Function_163(int iParam0) //Position: 0x8E70 / 36464
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_164(vector3 vParam0) //Position: 0x8E8F / 36495
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_165(int iParam0, int iParam1) //Position: 0x8EAF / 36527
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_166(var uParam0, var uParam1, int iParam2) //Position: 0x8EC2 / 36546
{
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (Function_419(&(Global_29008[Global_30717[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 298.377f;
			*uParam0 = { 422.321f, 101.465f, 1199.226f };
			return 1;
		}
	}
	if (Function_419(&(Global_29008[Global_30640[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 214.92f;
			*uParam0 = { -1812.829f, 22.935f, 2813.963f };
			return 1;
		}
	}
	if (Function_419(&(Global_29008[Global_30640[12]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 24.686f;
			*uParam0 = { -2897.155f, 17.974f, 2715.677f };
			return 1;
		}
	}
	if (Function_419(&(Global_29008[Global_30658[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 332.057f;
			*uParam0 = { -3911.452f, 31.16f, 2975.941f };
			return 1;
		}
	}
	if (Function_419(&(Global_29008[Global_30693[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Sepulcro_layout"), "sepv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 285.436f;
			*uParam0 = { -1402.147f, 10.939f, 4317.528f };
			return 1;
		}
	}
	return 0;
}

var Function_167(bool bParam0) //Position: 0x90F6 / 37110
{
	return GET_HEADING(bParam0);
}

vector3 Function_168(bool bParam0) //Position: 0x9101 / 37121
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_169(vector3 vParam0) //Position: 0x9112 / 37138
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_170(var uParam0, bool bParam1, int iParam2) //Position: 0x912A / 37162
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (bParam1 && DECOR_CHECK_EXIST(*uParam0, "FirstTimeBLKTrigger"))
	{
		if (((((IS_ACTOR_IN_VOLUME(Global_34573, uParam0->f_12) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573))) && !FIRE_IS_ACTOR_ON_FIRE(*uParam0)) && IS_ACTOR_ALIVE(*uParam0)) && !Function_172(Global_34573, 0, 0))
		{
			DECOR_REMOVE(*uParam0, "FirstTimeBLKTrigger");
			return 1;
		}
	}
	bVar0 = false;
	if (bParam1)
	{
		bVar0 = true;
	}
	else
	{
		bVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(*uParam0));
		bVar0 = _GET_AMMO_AMOUNT(Global_34573, bVar1, 1) <= 5.0f;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		if (Function_172(Global_34573, 0, 0) || !IS_ACTOR_ALIVE(*uParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(*uParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (!bVar0 && !bParam1)
		{
			if (!Function_28(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_171(Global_34573, *uParam0) > 3.0f)
				{
					Function_219(iParam2, 65536);
					Function_176("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				iVar2 = Function_140(*uParam0);
				bVar3 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar2, "", "", "", 4, 0);
				DECOR_SET_INT(*uParam0, "nUC_NoAmmo", bVar3);
			}
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
	}
	if (!IS_ACTOR_ALIVE(*uParam0))
	{
		return 0;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(*uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
	{
		return 0;
	}
	if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
	{
		return 0;
	}
	if (!bVar0 && !bParam1)
	{
		if (!Function_28(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_171(Global_34573, *uParam0) > 3.0f)
			{
				Function_219(iParam2, 65536);
				Function_176("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
		{
			iVar4 = Function_140(*uParam0);
			bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar4, "", "", "", 4, 0);
			DECOR_SET_INT(*uParam0, "nUC_NoAmmo", bVar5);
		}
		return 0;
	}
	if (!Function_172(Global_34573, 0, 0))
	{
		if (bParam1)
		{
			uParam0->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", uParam0->f_12, 10, 4, "", "", "", "", 4, 0);
		}
		else
		{
			if (DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(*uParam0, "nUC_NoAmmo"));
				DECOR_REMOVE(*uParam0, "nUC_NoAmmo");
			}
			iVar6 = Function_140(*uParam0);
			uParam0->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", uParam0->f_12, 10, 4, iVar6, "", "", "", 4, 0);
		}
	}
	else
	{
		return 0;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		return WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal);
	}
	return 0;
}

float Function_171(bool bParam0, bool bParam1) //Position: 0x94BA / 38074
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

bool Function_172(bool bParam0, bool bParam1, bool bParam2) //Position: 0x95AB / 38315
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
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
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_175(bParam0))
	{
		return 1;
	}
	if (Function_174(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_173())
	{
		return 1;
	}
	return 0;
}

bool Function_173() //Position: 0x9661 / 38497
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_174(bool bParam0) //Position: 0x9678 / 38520
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_175(bool bParam0) //Position: 0x9683 / 38531
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_176(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9691 / 38545
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_177(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_177(int iParam0) //Position: 0x970C / 38668
{
	char* cVar0[16];
	
	if (!Function_178())
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

bool Function_178() //Position: 0x974B / 38731
{
	if (Function_28(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_179(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x9766 / 38758
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_177(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, iVar4, iParam5, iParam6);
	}
}

void Function_180(int iParam0, bool bParam1) //Position: 0x97EB / 38891
{
	bool bVar0;
	
	bVar0 = ADD_BLIP_FOR_ACTOR(iParam0->f_168, 325, 0, 2, 0);
	SET_BLIP_NAME(bVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(bVar0, 1);
	(iParam0 + 168)->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_35(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
	ATTACH_OBJECTS((iParam0 + 168)->f_12, iParam0->f_168, Function_35(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	if (iParam0->f_364 == 4294967295)
	{
		iParam0->f_364 = Function_221(0, bParam1, 3);
	}
	(iParam0 + 168)->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", (iParam0 + 168)->f_12, 10, 4, 0, false, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(iParam0->f_168, "Core", true);
	return;
}

void Function_181(bool bParam0) //Position: 0x98A3 / 39075
{
	bool bVar0;
	var uVar1;
	var uVar7;
	bool bVar8;
	var uVar12;
	var uVar15;
	var uVar16;
	var uVar17;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_29155[bParam010] + 20);
	PRINTNL();
	if (Function_27(bParam0))
	{
		if ((bParam0 != Global_30679[1] || bParam0 != Global_30707[1]) || bParam0 != Global_30707[2])
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_OBJECT_POSITION(StackVal, &uVar1);
			bVar0 = ADD_BLIP_FOR_COORD(&uVar1, 564, 0f, 2, 0);
			SET_BLIP_NAME(bVar0, "Status_SafeZone");
			UNK_0xFF3DB575(bVar0, 1);
			SET_BLIP_PRIORITY(bVar0, 3);
			uVar7 = Global_29008[bParam0];
			Function_219(&uVar7, 0x8000000);
			Function_219(&uVar7, 0x10000000);
			Global_29008[bParam0] = uVar7;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_VOLUME_SCALE(StackVal, &uVar12);
			bVar8 = Function_186(StackVal, 563, 0.0f);
			SET_BLIP_NAME(bVar8, "Status_UnderAttack");
			UNK_0xFF3DB575(bVar8, 1);
			uVar15 = Function_215(bParam0);
			uVar16 = Function_221(111, 111, 5);
			Function_185(uVar15, GET_DAY(false), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
			Function_184(uVar15, 1, (RAND_INT_RANGE(0, 100000) % 12), (RAND_INT_RANGE(0, 100000) % 60), 0);
			Function_182(uVar16);
			uVar17 = Global_29008[bParam0];
			Function_219(&uVar17, 0x1000000);
			Function_219(&uVar17, 0x10000000);
			Global_29008[bParam0] = uVar17;
		}
	}
	return;
}

void Function_182(int iParam0) //Position: 0x9A56 / 39510
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = Function_221(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(1))
	{
		iVar0 = 1;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(2))
	{
		iVar0 = 2;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(3))
	{
		iVar0 = 3;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(4))
	{
		iVar0 = 4;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(5))
	{
		iVar0 = 5;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(8))
	{
		iVar0 = 8;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(9))
	{
		iVar0 = 9;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(11))
	{
		iVar0 = 11;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(12))
	{
		iVar0 = 12;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(13))
	{
		iVar0 = 13;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(14))
	{
		iVar0 = 14;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(15))
	{
		iVar0 = 15;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(16))
	{
		iVar0 = 16;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(17))
	{
		iVar0 = 17;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(18))
	{
		iVar0 = 18;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(19))
	{
		iVar0 = 19;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(21))
	{
		iVar0 = 21;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(22))
	{
		iVar0 = 22;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(23))
	{
		iVar0 = 23;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_183(24))
	{
		iVar0 = 24;
		iVar1 = StackVal;
	}
	Global_13172[iParam011].f_16 = iVar0;
	Global_13172[iParam011].f_24 = iVar1;
	return;
}

bool Function_183(int iParam0) //Position: 0x9D6A / 40298
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_117(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9D8E / 40334
{
	while (iParam4 > 60)
	{
		iParam4 = (iParam4 - 60);
		iParam3++;
	}
	while (iParam3 > 60)
	{
		iParam3 = (iParam3 - 60);
		iParam2++;
	}
	while (iParam2 > 24)
	{
		iParam2 = (iParam2 - 24);
		iParam1++;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6298[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6351[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6364[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6402[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6433[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6563[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6614[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6654[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6709[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6764[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6785[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6815[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6866[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6490[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6987[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7002[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7035[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7113[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7148[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7171[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
	}
}

void Function_185(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xA04E / 41038
{
	switch (iParam0)
	{
		case 0x00000001:
			Global_6298[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000002:
			Global_6351[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000003:
			Global_6364[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000004:
			Global_6402[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000005:
			Global_6433[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000008:
			Global_6563[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000009:
			Global_6614[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000B:
			Global_6654[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000C:
			Global_6709[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000D:
			Global_6764[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000E:
			Global_6785[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000F:
			Global_6815[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000010:
			Global_6866[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000011:
			Global_6490[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000012:
			Global_6987[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000013:
			Global_7002[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000015:
			Global_7035[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000016:
			Global_7113[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000017:
			Global_7148[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000018:
			Global_7171[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
	}
}

var Function_186(bool bParam0, int iParam1, float fParam2) //Position: 0xA28D / 41613
{
	bool bVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return "";
	}
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (IS_BLIP_VALID(bVar0))
	{
		if (GET_BLIP_ICON(bVar0) == iParam1)
		{
			return bVar0;
		}
		REMOVE_BLIP(bVar0);
	}
	bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, iParam1, fParam2, 2, 0);
	if (IS_BLIP_VALID(bVar0))
	{
		return bVar0;
	}
	return "";
}

void Function_187(int iParam0) //Position: 0xA2DA / 41690
{
	Function_193(iParam0 + 192, "DLC_give_ammo", 5, 1);
	Function_193(iParam0 + 192, "custom/DLC_give_ammo", 8, 1);
	Function_193(iParam0 + 192, "ZombiePack_Footlocker", 1, 1);
	Function_188(iParam0 + 192);
	return;
}

bool Function_188(bool bParam0) //Position: 0xA346 / 41798
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_192();
	iVar1 = 0;
	if (!Function_43(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_191(bParam0[iVar03], 8);
		}
		else if (Function_190())
		{
			iVar1 = 1;
			Function_191(bParam0[iVar03], 8);
		}
		Function_191(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_43(bParam0[iVar03], 4))
		{
			if (!Function_43(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_43(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], 1, (Function_43(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_191(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_43(bParam0[iVar03], 4))
		{
			if (!Function_43(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_191(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_191(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_191(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_191(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_191(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_191(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_191(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_191(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_191(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_191(bParam0[iVar03], 2);
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
	Function_189();
	return 1;
}

void Function_189() //Position: 0xA6C1 / 42689
{
	if (!Function_56(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_190() //Position: 0xA701 / 42753
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_191(var uParam0, int iParam1) //Position: 0xA72C / 42796
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_192() //Position: 0xA73D / 42813
{
	if (!Function_56(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

var Function_193(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA77F / 42879
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_194(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_191(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_194(var uParam0, int iParam1, int iParam2) //Position: 0xA7B7 / 42935
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_43(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_191(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_195() //Position: 0xA87B / 43131
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar1, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar1, "ZombiePack_foot");
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!DECOR_CHECK_EXIST(bVar2, "GringoIsDone"))
		{
			bVar3 = ADD_BLIP_FOR_OBJECT(bVar2, 335, 0f, 2, 0);
			SET_BLIP_NAME(bVar3, "Chest_BlipName");
			DECOR_SET_INT(bVar2, "ChestBlip_AsInt", bVar3);
			SET_BLIP_PRIORITY(bVar3, 1);
			if (Global_29006 == Global_30717[0])
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 2.3f);
			}
			else if (Global_29006 == Global_30723[0])
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 4.0f);
			}
			else
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 1.5f);
			}
		}
		bVar0 = true;
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

void Function_196(bool bParam0, var uParam1, struct<365> Param2) //Position: 0xA960 / 43360
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char* cVar5[32];
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	vector3 vVar19;
	vector3 vVar22;
	bool bVar25;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	iVar2 = Function_197(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	bVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), bParam0, 4294967295, 0);
	bVar4 = false;
	while (IS_OBJECT_VALID(bVar1) && !bVar4)
	{
		strcpy(&cVar5, GET_OBJECT_NAME(bVar1), 32);
		if (STRING_CONTAINS_STRING(&cVar5, "chests"))
		{
			bVar14 = GET_OBJECTSET_FROM_OBJECT(bVar1);
			bVar13 = false;
			while (bVar13 < (GET_OBJECTSET_SIZE(bVar14) - 1))
			{
				bVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, bVar14);
				strcpy(&cVar5, GET_OBJECT_NAME(bVar15), 32);
				STRING_CLEAR_TOKENIZER();
				iVar16 = SET_OWNERSHIP_STRAGGLER(&cVar5, "_");
				bVar17 = STRING_GET_TOKEN((iVar16 - 1));
				bVar18 = TO_FLOAT(STRING_TO_INT(bVar17));
				if (!Function_28(Global_13172[Param2.f_36411].f_20, FLOOR(POW(2.0f, bVar18))))
				{
					vVar19 = { 0.0f, 0.0f, 0.0f };
					vVar22 = { 0.0f, 0.0f, 0.0f };
					stradd(&cVar5, "_gringo", 32);
					GET_OBJECT_POSITION(bVar15, &vVar19);
					GET_OBJECT_ORIENTATION(bVar15, &vVar22);
					bVar25 = CREATE_GRINGO_IN_LAYOUT(bParam0, &cVar5, "$/content/DLC/ZombiePack/Gringos/ZombiePack_footlocker", vVar19, vVar22);
					ADD_OBJECT_TO_OBJECTSET(bVar25, bVar3);
				}
				bVar13++;
			}
			bVar4 = true;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	STRING_CLEAR_TOKENIZER();
	DESTROY_OBJECTSET(bVar3);
}

var Function_197(struct<365> Param0) //Position: 0xAACE / 43726
{
	return Global_13172[Param0.f_36411].f_20;
}

void Function_198(int iParam0) //Position: 0xAAE2 / 43746
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	
	bVar0 = true;
	iVar1 = 0;
	while (StackVal < (iVar1 - 1))
	{
		if (Function_28((iParam0 + 4[iVar15])->f_16, 1))
		{
			if (IS_ACTOR_ALIVE((*iParam0 + 4)[iVar15]))
			{
				vVar2 = { 0.0f, 0.0f, 0.0f };
				GET_OBJECT_POSITION(StackVal, &vVar2);
				if (STREAMING_ARE_BOUNDS_LOADED(vVar2, 3.0f))
				{
					if (!Function_64((*iParam0 + 4)[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_45(iParam0 + 4[iVar15] + 16, 1);
						SET_OBJECT_POSITION((*iParam0 + 4)[iVar15], vVar2);
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		Function_45(iParam0 + 356, 1024);
	}
	return;
}

void Function_199(int iParam0, int iParam1) //Position: 0xAB99 / 43929
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	if (Function_200(&bVar0, 20.0f, 0))
	{
		if (ACTOR_HAS_ANIM_SET(bVar0, "DLC_give_ammo"))
		{
			return;
		}
		iVar1 = 0;
		while (StackVal < (iVar1 - 1))
		{
			if (bVar0 == (*iParam0 + 4)[iVar15])
			{
				bVar3 = bVar0;
				iVar2 = iVar1;
				iVar1 = 9999;
			}
			iVar1++;
		}
		if (StackVal || (!IS_ACTOR_ALIVE(bVar3) || iVar2 > 0) < (iVar2 - 1))
		{
			return;
		}
		fVar4 = GET_CURRENT_GAME_TIME();
		if (iParam1 == Global_30668[0])
		{
			if (!Function_28(iParam0->f_356, 0x40000000))
			{
				iVar5 = GET_ACTOR_ENUM(bVar3);
				if (iVar5 != 550 && !IS_ANY_SPEECH_PLAYING(bVar3))
				{
					if (Function_171(bVar3, Global_34573) > 3.5f)
					{
						Function_219(iParam0 + 356, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(bVar3, 118, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						iParam0->f_380 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_28(iParam0->f_356, 2))
		{
			fVar6 = Function_171(bVar3, Global_34573);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_28((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_219(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_PLAYER_RETURN_P", "GREET", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
			else if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
		}
		else if (Function_28(iParam0->f_356, 512))
		{
			if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
		}
		else
		{
			fVar7 = Function_171(bVar3, Global_34573);
			if (fVar7 < 16.0f && !Function_28((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_219(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_28((iParam0 + 4[iVar25])->f_16, 8))
			{
				Function_219(iParam0 + 4[iVar25] + 16, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_380 = fVar4;
			}
			else if (!Function_28((iParam0 + 4[iVar25])->f_16, 2))
			{
				if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
					AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
					iParam0->f_372 = fVar4;
					iParam0->f_380 = fVar4;
				}
			}
			else if (fVar4 - iParam0->f_380) < RAND_FLOAT_RANGE(30.0f, 45.0f)
			{
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRIES_OUT_IN_TEROR", "MINOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
		}
	}
	return;
}

bool Function_200(var uParam0, float fParam1, bool bParam2) //Position: 0xAFD8 / 45016
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	ITERATE_IN_SPHERE(bVar0, Global_34574, fParam1);
	bVar1 = false;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2) && !bVar1)
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_RIDING(bVar3))
		{
			if (bParam2)
			{
				*uParam0 = bVar3;
			}
		}
		else
		{
			*uParam0 = bVar3;
		}
		if (IS_ACTOR_ALIVE(*uParam0))
		{
			bVar1 = true;
		}
		else
		{
			*uParam0 = "";
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return bVar1;
}

void Function_201(int iParam0, int iParam1, float fParam2) //Position: 0xB055 / 45141
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	
	if (Global_3380 || Function_56(0x8000000))
	{
		return;
	}
	cVar0 = Function_59(iParam1);
	if (iParam1 == Global_30640[0])
	{
		bVar1 = FIND_VOLUME_IN_LAYOUT(Global_30616, "spawnresrict_2");
		if (IS_VOLUME_VALID(bVar1))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, bVar1))
			{
				if (!Function_28(iParam0->f_356, 0x2000000))
				{
					Function_45(iParam0 + 356, 4194304);
					Function_45(iParam0 + 356, 8388608);
					Function_45(iParam0 + 356, 0x1000000);
					Function_45(iParam0 + 356, 1048576);
					Function_45(iParam0 + 356, 2097152);
					Function_219(iParam0 + 356, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_45(iParam0 + 356, 0x2000000);
		}
	}
	if (!Function_28(iParam0->f_356, 2097152))
	{
		if (fParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_219(iParam0 + 356, 1048576);
			Function_219(iParam0 + 356, 2097152);
			Function_219(iParam0 + 356, 4194304);
			Function_219(iParam0 + 356, 8388608);
			Function_219(iParam0 + 356, 0x1000000);
			return;
		}
	}
	if (!Function_28(iParam0->f_356, 1048576))
	{
		if (fParam2 <= 40.0f && fParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_219(iParam0 + 356, 1048576);
			Function_219(iParam0 + 356, 4194304);
			Function_219(iParam0 + 356, 8388608);
			Function_219(iParam0 + 356, 0x1000000);
			return;
		}
	}
	iVar2 = Function_202(StackVal, StackVal, Global_34574, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_28(iParam0->f_356, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_219(iParam0 + 356, 4194304);
		Function_219(iParam0 + 356, 8388608);
		Function_219(iParam0 + 356, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_28(iParam0->f_356, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_219(iParam0 + 356, 8388608);
		Function_219(iParam0 + 356, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_28(iParam0->f_356, 0x1000000))
	{
		Function_219(iParam0 + 356, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_202(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6) //Position: 0xB331 / 45873
{
	bool bVar0;
	var uVar1;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_35(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam4, fParam3);
	uVar1 = Function_203(bVar0, uParam5, uParam6);
	DESTROY_VOLUME(bVar0);
	return uVar1;
}

int Function_203(bool bParam0, var uParam1, bool bParam2) //Position: 0xB364 / 45924
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Global_30616, 15, 1);
	iVar1 = 0;
	if (IS_OBJECTSET_VALID(bVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(bVar0);
		if (iVar2 < 0)
		{
			return iVar1;
		}
		bVar3 = false;
		while (bVar3 <= iVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0);
			if (IS_OBJECT_VALID(bVar4))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
				if (IS_ACTOR_VALID(bVar5))
				{
					if (Function_204(bVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(bVar5))
						{
							if (bParam2)
							{
								if (Function_64(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									iVar1++;
								}
							}
							else
							{
								iVar1++;
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(bVar0);
	return iVar1;
}

bool Function_204(bool bParam0) //Position: 0xB42E / 46126
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_36(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

void Function_205() //Position: 0xB479 / 46201
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = Function_215(Global_29006);
	fVar1 = Function_213(Global_29006);
	fVar2 = Function_214(iVar0);
	iVar3 = (((fVar2 - fVar1) / fVar2) * 1.5f);
	iVar3 = Function_206(0.33f, Function_165(iVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(iVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_54(1);
	return;
}

int Function_206(int iParam0, int iParam1) //Position: 0xB4C7 / 46279
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_207(int iParam0, bool bParam1) //Position: 0xB4DA / 46298
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (IS_ACTOR_ALIVE(bVar1))
		{
			SET_MOVER_FROZEN(bVar1, 0);
			SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(bVar1, 4);
			if (!Function_28(iParam0->f_356, 0x4000000))
			{
				MEMORY_CLEAR_ALL(bVar1);
				MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
			}
			AI_CLEAR_DONT_HARM_ACTOR(bVar1);
			vVar2 = { 0.0f, 0.0f, 0.0f };
			Var5 = { 0.0f, 0.0f, 0.0f };
			GET_OBJECT_POSITION(StackVal, &vVar2);
			GET_OBJECT_ORIENTATION(StackVal, &Var5);
			if (!bParam1)
			{
				TASK_PRIORITY_SET(bVar1, 1);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar1, &vVar2, -1.0f);
			}
			else
			{
				SET_ACTOR_CAN_BE_TARGETED(bVar1, true);
				if (!Function_28(iParam0->f_356, 0x4000000))
				{
					TASK_PRIORITY_SET(bVar1, 0);
					TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_208(*iParam0, *iParam0, 0);
	return;
}

void Function_208(bool bParam0, bool bParam1, int iParam2) //Position: 0xB5BE / 46526
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_209(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_209(bool bParam0, bool bParam1, int iParam2) //Position: 0xB60D / 46605
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_CONSIDER_AS(bParam0, bVar1, iParam2);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_210(int iParam0) //Position: 0xB657 / 46679
{
	int iVar0;
	
	iVar0 = Function_117(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_26(iVar0) || Function_183(iParam0));
}

void Function_211(int iParam0) //Position: 0xB696 / 46742
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	if (!Function_28(iParam0->f_356, 512))
	{
		fVar0 = Function_213(Global_29006);
		iVar1 = Function_215(Global_29006);
		if (iVar1 == 0 && iParam0->f_368 >= 120.0f)
		{
			fVar2 = Function_214(iVar1);
			fVar3 = ((fVar0 / fVar2) * 100.0f);
			if (fVar3 <= 120.0f)
			{
				iParam0->f_368 = 1000.0f;
				return;
			}
			if (fVar3 == iParam0->f_368)
			{
				fVar4 = (fVar0 % 10.0f);
				bVar5 = (fVar0 / 10.0f);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar4 * 10.0f)) + 1.0f));
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar5));
				UI_REFRESH("ZMeter");
				iParam0->f_368 = fVar3;
			}
		}
	}
	return;
}

void Function_212(int iParam0) //Position: 0xB757 / 46935
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_BLIP_ON_ACTOR(*iParam0);
	if (GET_BLIP_ICON(bVar0) == 325)
	{
		REMOVE_BLIP(bVar0);
	}
	bVar1 = DECOR_GET_INT(*iParam0, "PauseMapBlip");
	if (IS_BLIP_VALID(bVar1))
	{
		REMOVE_BLIP(bVar1);
	}
	DECOR_REMOVE(*iParam0, "PauseMapBlip");
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (DECOR_CHECK_EXIST(*iParam0, "nUC_NoAmmo"))
	{
		bVar2 = DECOR_GET_INT(*iParam0, "nUC_NoAmmo");
		if (IS_SCRIPT_USE_CONTEXT_VALID(bVar2))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bVar2);
		}
		DECOR_REMOVE(*iParam0, "nUC_NoAmmo");
	}
	if (IS_VOLUME_VALID(iParam0->f_12))
	{
		DESTROY_VOLUME(iParam0->f_12);
	}
	return;
}

var Function_213(bool bParam0) //Position: 0xB81A / 47130
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	bVar2 = StackVal;
	if (IS_VOLUME_VALID(bVar2))
	{
		bVar0 = DECOR_GET_FLOAT_VERBOSE(bVar2, "ZombieScore", &iVar1);
		if (!bVar0)
		{
			DECOR_SET_FLOAT(bVar2, "ZombieScore", 0.0f);
			return 0.0f;
		}
		return iVar1;
	}
	return 0.0f;
}

var Function_214(int iParam0) //Position: 0xB874 / 47220
{
	if (iParam0 == 1)
	{
		return 70.0f;
	}
	if (iParam0 == 2)
	{
		return 40.0f;
	}
	if (iParam0 == 3)
	{
		return 30.0f;
	}
	if (iParam0 == 4)
	{
		return 50.0f;
	}
	if (iParam0 == 5)
	{
		return 70.0f;
	}
	if (iParam0 == 8)
	{
		return 60.0f;
	}
	if (iParam0 == 9)
	{
		return 50.0f;
	}
	if (iParam0 == 11)
	{
		return 40.0f;
	}
	if (iParam0 == 12)
	{
		return 90.0f;
	}
	if (iParam0 == 13)
	{
		return 30.0f;
	}
	if (iParam0 == 14)
	{
		return 40.0f;
	}
	if (iParam0 == 15)
	{
		return 80.0f;
	}
	if (iParam0 == 16)
	{
		return 100.0f;
	}
	if (iParam0 == 17)
	{
		return 40.0f;
	}
	if (iParam0 == 18)
	{
		return 50.0f;
	}
	if (iParam0 == 19)
	{
		return 50.0f;
	}
	if (iParam0 == 21)
	{
		return 30.0f;
	}
	if (iParam0 == 22)
	{
		return 30.0f;
	}
	if (iParam0 == 23)
	{
		return 30.0f;
	}
	if (iParam0 == 24)
	{
		return 20.0f;
	}
	return 100.0f;
}

int Function_215(bool bParam0) //Position: 0xB9B7 / 47543
{
	if (bParam0 == Global_30640[0])
	{
		return 1;
	}
	if (bParam0 == Global_30640[2])
	{
		return 2;
	}
	if (bParam0 == Global_30640[1])
	{
		return 3;
	}
	if (bParam0 == Global_30658[1])
	{
		return 4;
	}
	if (bParam0 == Global_30658[3])
	{
		return 5;
	}
	if (bParam0 == Global_30668[0])
	{
		return 8;
	}
	if (bParam0 == Global_30668[1])
	{
		return 9;
	}
	if (bParam0 == Global_30679[0])
	{
		return 11;
	}
	if (bParam0 == Global_30685[0])
	{
		return 12;
	}
	if (bParam0 == Global_30685[1])
	{
		return 13;
	}
	if (bParam0 == Global_30685[2])
	{
		return 14;
	}
	if (bParam0 == Global_30693[0])
	{
		return 15;
	}
	if (bParam0 == Global_30693[1])
	{
		return 16;
	}
	if (bParam0 == Global_30693[2])
	{
		return 17;
	}
	if (bParam0 == Global_30707[2])
	{
		return 25;
	}
	if (bParam0 == Global_30707[3])
	{
		return 18;
	}
	if (bParam0 == Global_30707[0])
	{
		return 19;
	}
	if (bParam0 == Global_30717[0])
	{
		return 21;
	}
	if (bParam0 == Global_30723[2])
	{
		return 22;
	}
	if (bParam0 == Global_30723[1])
	{
		return 23;
	}
	if (bParam0 == Global_30723[0])
	{
		return 24;
	}
	if (bParam0 == Global_30679[1])
	{
		return 26;
	}
	if (bParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

void Function_216() //Position: 0xBB3D / 47933
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar0, "ZombiePack_foot");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_BLIP_ON_OBJECT(bVar1);
		if (IS_BLIP_VALID(bVar2))
		{
			REMOVE_BLIP(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

var Function_217(bool bParam0, int iParam1) //Position: 0xBB9B / 48027
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
		ITERATE_ON_OBJECT_TYPE(bVar1, 12);
		ITERATE_ON_PARTIAL_NAME(bVar1, "player_sleep");
		if (iParam1 == Global_30628[2])
		{
			ITERATE_IN_SPHERE(bVar1, 123.033f, 72.791f, 2669.954f, 10.0f);
		}
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(bVar2);
			if (IS_GRINGO_VALID(bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(bVar3, bParam0);
				bVar4 = GET_OBJECT_FROM_GRINGO(bVar3);
				bVar5 = GET_BLIP_ON_OBJECT(bVar4);
				if (IS_BLIP_VALID(bVar5))
				{
					REMOVE_BLIP(bVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(bVar4, "SavingAtBedAllowed", true);
					bVar5 = ADD_BLIP_FOR_OBJECT(bVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(bVar5, 1);
					if (iParam1 != 4294967295)
					{
						SET_BLIP_MAX_DISTANCE(bVar5, 3.0f);
					}
					iVar0 = 1;
				}
				else
				{
					if (DECOR_CHECK_EXIST(bVar4, "SavingAtBedAllowed"))
					{
						DECOR_REMOVE(bVar4, "SavingAtBedAllowed");
					}
					iVar0 = 1;
				}
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return iVar0;
}

void Function_218(bool bParam0, float fParam1) //Position: 0xBCBC / 48316
{
	DECOR_SET_FLOAT(StackVal, "ZombieScore", fParam1);
	return;
}

void Function_219(var uParam0, bool bParam1) //Position: 0xBCDF / 48351
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_220(int iParam0, bool bParam1) //Position: 0xBCEE / 48366
{
	int iVar0;
	
	iVar0 = Function_157(iParam0);
	if (!Function_50(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_221(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBD2B / 48427
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_225(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_222(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_222(bParam0, bParam1, bParam2, 4294967295);
}

int Function_222(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xBD89 / 48521
{
	var uVar0;
	
	if (!Function_224(bParam2))
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
	uVar0 = Function_225(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_223(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_223(int iParam0) //Position: 0xBEDE / 48862
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_224(int iParam0) //Position: 0xBF1C / 48924
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_225(int iParam0, int iParam1, int iParam2) //Position: 0xBF31 / 48945
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_226(int iParam0) //Position: 0xBF51 / 48977
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	iParam0 = iParam0;
	Function_400(&(Global_26282[14]), "CCG", 27, Local_108, 1);
	if (!iLocal_359 && !iLocal_360)
	{
		GET_VOLUME_CENTER((*&Local_147 + 240)[3], &vVar0);
		bVar3 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar0, 5.0f, "campfirecombined", 1);
		bVar4 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-1786.22f, 23.971f, 2862.953f, 5.0f, "wheelbarrow", 1);
		if (IS_PHYSINST_VALID(bVar3))
		{
			if (IS_PHYSINST_IN_LEVEL(bVar3))
			{
				DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar3));
				iLocal_359 = 1;
			}
		}
		if (IS_PHYSINST_VALID(bVar4))
		{
			if (IS_PHYSINST_IN_LEVEL(bVar4))
			{
				DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar4));
				iLocal_360 = 1;
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(Function_111(), Local_147.f_264))
	{
		iLocal_357 = 1;
		iLocal_358 = 0;
	}
	else if ((StackVal && (StackVal || (StackVal || iLocal_357 != 6 != 10) != 9)) && !iLocal_358)
	{
		Function_179("nGY_Return", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iLocal_358 = 1;
	}
	if ((StackVal || (StackVal || IS_ACTOR_IN_VOLUME(Function_111(), Local_147.f_268) != 11) != 12) && iLocal_357)
	{
		iLocal_6 = 0;
		if (Function_227(&Local_361))
		{
			Function_23(&Local_361);
		}
	}
	else if (iLocal_357)
	{
		iLocal_357 = 0;
		iLocal_358 = 0;
		iLocal_6 = 1000;
		Function_23(&Local_361);
		Local_361.f_4 = 1;
	}
	return;
}

bool Function_227(int iParam0) //Position: 0xC0B8 / 49336
{
	int iVar0;
	int iVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_398(iParam0);
			iParam0->f_4 = 1;
			break;
		
		case 0x00000001:
			if (Function_397())
			{
				if (!Function_52(iParam0))
				{
					return 1;
				}
				if (Function_46(iParam0->f_152) && Function_396(Function_51(iParam0->f_152)) < 0)
				{
					if (!iParam0->f_144)
					{
						iParam0->f_144 = 1;
						Function_176("GY_STILL_CLENSED", 0x41200000, 1, 0, 2, 1, 0);
					}
					return 1;
				}
				Function_392(iParam0);
			}
			break;
		
		case 0x00000002:
			Function_391();
			if (Function_390())
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
				Local_294.f_4 = 1;
				if (!DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
				{
					Function_141(StackVal, StackVal, Global_34574, 0, 0, 1);
					DECOR_SET_BOOL(Global_34573, "bStartedGY", true);
				}
				CANCEL_DEADEYE();
				Function_389(iParam0);
				Function_387(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1);
				bLocal_247 = Function_383(bLocal_292, 0, 1, 0, 0);
				iLocal_282 = 1;
				fLocal_283 = GET_CURRENT_GAME_TIME();
				SET_ACTOR_PROOF(Global_34573, 16);
				iLocal_269 = 1;
				Function_29(1.0f);
				Function_382(&iLocal_277, -10.0f);
				Function_381(&iLocal_287);
				ENABLE_WEATHER_SPHERE(Function_25(iParam0->f_152), 1);
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(Global_34573)))
				{
					TASK_FLEE_ACTOR(Function_375(1, 0, 0, 0, 0, 0, 1, 0), Global_34573, 100.0f, 15.0f, 0, 0, 0);
				}
				Function_369(iParam0);
				iParam0->f_4 = 4;
			}
			break;
		
		case 0x00000003:
			Function_391();
			if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(Local_294, "LootCoffin")))
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
				Local_294.f_4 = 1;
				if (!DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
				{
					Function_141(StackVal, StackVal, Global_34574, 0, 0, 1);
					DECOR_SET_BOOL(Global_34573, "bStartedGY", true);
				}
				Function_179("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_269 = 1;
				Function_29(1.0f);
				Function_382(&iLocal_277, -10.0f);
				Function_381(&iLocal_287);
				ENABLE_WEATHER_SPHERE(Function_25(iParam0->f_152), 1);
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(Global_34573)))
				{
					TASK_FLEE_ACTOR(Function_375(1, 0, 0, 0, 0, 0, 1, 0), Global_34573, 100.0f, 15.0f, 0, 0, 0);
				}
				Function_369(iParam0);
				iParam0->f_4 = 6;
			}
			break;
		
		case 0x00000004:
			if (!IS_OBJECT_VALID(bLocal_247) || Function_367())
			{
				if (bLocal_281)
				{
					AI_IGNORE_ACTOR(Global_34573);
					iParam0->f_4 = 5;
				}
				else
				{
					Function_364(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
					ACTOR_DRAW_LAST_WEAPON(Global_34573, 0);
					if (IS_OBJECT_VALID(bLocal_247))
					{
						DESTROY_OBJECT(bLocal_247);
					}
					Function_179("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_282 = 1;
					fLocal_283 = GET_CURRENT_GAME_TIME();
					SET_ACTOR_PROOF(Global_34573, 16);
					iParam0->f_4 = 6;
				}
			}
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				Function_364(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				ACTOR_DRAW_LAST_WEAPON(Global_34573, 0);
				if (IS_OBJECT_VALID(bLocal_247))
				{
					DESTROY_OBJECT(bLocal_247);
				}
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, 549.994f, 94.248f, 1189.528f, 107.628f, 1, 1, 1);
				AI_STOP_IGNORING_ACTOR(Global_34573);
				Function_363(2.5f);
				Function_179("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iParam0->f_4 = 6;
			}
			break;
		
		case 0x00000006:
			Function_391();
			Function_361(iParam0);
			if (Function_360(&iLocal_277, 0.0f))
			{
				Function_359();
				if (iParam0->f_152 == 4)
				{
					Function_358(&iLocal_277, TO_FLOAT(RAND_INT_RANGE(4294967276, 4294967286)));
				}
				else
				{
					Function_358(&iLocal_277, TO_FLOAT(RAND_INT_RANGE(4294967251, 4294967271)));
				}
			}
			return Function_331(iParam0);
			break;
		
		case 0x00000007:
			if (Function_329(&iLocal_233, 0.0f))
			{
				AUDIO_MUSIC_SET_MOOD("HIGH_FIGHT_DARK", 0, 4294967295, 4294967295);
				AI_IGNORE_ACTOR(Global_34573);
				Function_382(&uLocal_274, -10.0f);
				CANCEL_DEADEYE();
				Function_326(iParam0);
				Function_387(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1);
				Function_303(iParam0);
				Function_358(&iLocal_233, 0.0f);
				iParam0->f_4 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_329(&iLocal_233, 5.0f))
			{
				Function_294(iParam0);
			}
			if (!IS_OBJECT_VALID(bLocal_247))
			{
				AI_STOP_IGNORING_ACTOR(Global_34573);
				Function_364(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
				ACTOR_DRAW_LAST_WEAPON(Global_34573, 0);
				iParam0->f_4 = 9;
				Function_293(iParam0->f_152);
				Function_292(StackVal, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x00000009:
			Function_361(iParam0);
			Function_391();
			if (StackVal && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(!IS_ACTOR_ALIVE(bLocal_270)) != 0)
			{
				Function_44();
				if (!Function_291())
				{
					iParam0->f_4 = 10;
				}
				else
				{
					Function_358(&iLocal_233, 0.0f);
					Function_290(iParam0);
					iParam0->f_4 = 11;
				}
			}
			break;
		
		case 0x0000000A:
			Function_286(iParam0);
			Function_361(iParam0);
			Function_391();
			Function_285(iParam0);
			if (Function_291())
			{
				Function_290(iParam0);
				Function_358(&iLocal_233, 2.6f);
				iParam0->f_4 = 11;
			}
			else if (iLocal_266)
			{
				Function_179("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_266 = 0;
			}
			break;
		
		case 0x0000000B:
			if (Function_360(&iLocal_233, 2.5f))
			{
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				ACTOR_HOLSTER_WEAPON(Global_34573, 1);
				bLocal_268 = true;
				CANCEL_DEADEYE();
				Function_387(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1);
				UI_PUSH("CutsceneWithMessages");
				Function_264(iParam0);
				if (IS_OBJECT_VALID(bLocal_247))
				{
					Function_263(&iLocal_233);
					iParam0->f_4 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_329(&iLocal_233, 2.5f))
			{
				Function_262(iParam0);
			}
			if (!IS_OBJECT_VALID(bLocal_247))
			{
				Function_364(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
				UI_POP("CutsceneWithMessages");
				if (iParam0->f_152 == 0)
				{
					if (Function_396(Global_30734) == 0)
					{
						Function_179("GY_RETURN_BLK", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iVar0 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[355].f_140);
						iVar1 = 0;
						while (iVar1 <= iVar0)
						{
							SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[355].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[355].f_140, iVar1), 4, 0);
							iVar1++;
						}
						APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "GY_RETURN_BLK", 0, 3, 0);
						Function_261(Global_63541[355].f_140, 0);
					}
				}
				Function_228(iParam0);
				if (Global_3421)
				{
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2899.875f, 19.075f, 2710.246f, 24.269f, 1, 1, 1);
				}
				iParam0->f_4 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_23(iParam0);
			return 1;
			break;
	}
	return 0;
}

void Function_228(int iParam0) //Position: 0xC78A / 51082
{
	int iVar0;
	
	if (Function_260(&iLocal_287))
	{
		bLocal_290 = Function_258(&iLocal_287);
		iVar0 = Function_257(iParam0->f_152);
		if (Function_81(iVar0) < 0.0f)
		{
			if (bLocal_290 > Function_81(iVar0))
			{
				Function_256(iVar0, bLocal_290, 0);
			}
		}
		else
		{
			Function_256(iVar0, bLocal_290, 0);
		}
	}
	if (Function_396(Function_51(iParam0->f_152)) == 0)
	{
		Function_84(656, 1, 0, 0);
	}
	Function_229(Function_51(iParam0->f_152), 1, 1, 0);
	return;
}

void Function_229(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC7FD / 51197
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_48(iParam0))
	{
		Function_254();
		return;
	}
	bVar0 = Function_253(iParam0);
	if (!bVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_252())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_251(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_250(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_177(Global_6269) };
		}
		if (Function_252())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_246();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_252())
	{
		Function_245();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_243("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_241(iParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_251(iParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_232(1);
			Function_231(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_230(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_230(int iParam0, int iParam1) //Position: 0xCA51 / 51793
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_231(var uParam0, int iParam1) //Position: 0xCA8B / 51851
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_76())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_232(bool bParam0) //Position: 0xCACD / 51917
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_233();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_142();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_45(&Global_63095, 1);
		Function_45(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_233() //Position: 0xCB1E / 51998
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_178())
	{
		Function_238(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_238(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_234(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_234(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_169(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

vector3 Function_234(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xCBD9 / 52185
{
	int iVar0;
	
	iVar0 = Function_236(uParam2, uParam3);
	if (Function_235(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_219(&Global_63095, 1);
			Function_45(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_219(&Global_63095, 2);
			Function_45(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_219(&Global_63095, 2);
		Function_45(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_34();
	return StackVal, StackVal, Function_34();
}

bool Function_235(int iParam0) //Position: 0xCCC0 / 52416
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_236(bool bParam0, bool bParam1) //Position: 0xCCD6 / 52438
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_237(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_237(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_235(bVar0) && !bParam1)
	{
		bVar0 = Function_236(bParam0, 1);
	}
	return bVar0;
}

float Function_237(vector3 vParam0, vector3 vParam3) //Position: 0xCD9D / 52637
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_238(var uParam0, int iParam1) //Position: 0xCDBA / 52666
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_240(Global_34573, &vVar4);
	if (!Function_239(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_239(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_219(&Global_63095, 2);
	Function_45(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_169(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_239(int iParam0) //Position: 0xD5DF / 54751
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_28(bVar0, 0x1000000) || Function_28(bVar0, 0x2000000)) || Function_28(bVar0, 0x4000000)) || !Function_28(bVar0, 0x10000000));
}

void Function_240(bool bParam0, int iParam1) //Position: 0xD61A / 54810
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_241(int iParam0) //Position: 0xD627 / 54823
{
	int iVar0;
	int iVar1;
	
	if (!Function_50(iParam0))
	{
		return;
	}
	switch (Function_253(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_251(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_84(12, 1, 0, 0);
				Function_82(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_84(13, 1, 0, 0);
				Function_82(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_84(14, 1, 0, 0);
				Function_82(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_84(15, 1, 0, 0);
				Function_82(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_84(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_251(iParam0))
			{
				case 0x00000000:
					if (Function_396(iParam0) == 1)
					{
						iVar0 = Function_242(iParam0);
						if (Function_7(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_82(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_82(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_82(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_82(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_82(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_82(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_82(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_82(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_82(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_82(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_82(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_82(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_82(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_82(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_82(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_82(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_82(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_82(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_82(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_82(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_84(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_84(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_84(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_242(iParam0) == 0)
			{
				if (Function_396(iParam0) == 1)
				{
					Function_84(458, 1, 0, 0);
					iVar0 = Function_251(iParam0);
					if (Function_7(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_82(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_82(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_82(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_82(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_82(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_82(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_82(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_82(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_396(iParam0) == 1)
			{
				Function_84(400, 1, 0, 0);
			}
			switch (Function_251(iParam0))
			{
				case 0x00000001:
					Function_84(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_82(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_82(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_82(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_84(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_82(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_82(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

int Function_242(int iParam0) //Position: 0xDB03 / 56067
{
	if (!Function_50(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 4) & 255;
}

void Function_243(char* cParam0, int iParam1) //Position: 0xDB22 / 56098
{
	struct<4> Var0;
	
	if (!Function_48(iParam1))
	{
		return;
	}
	switch (Function_253(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_244(Function_251(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_253(iParam1), Function_251(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_253(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_253(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_253(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_253(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_253(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_244(int iParam0) //Position: 0xDC46 / 56390
{
	char* cVar0[16];
	
	if (!Function_178())
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

void Function_245() //Position: 0xDC80 / 56448
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_151(0));
	PLAYSTAT_INT("HC_FAME", Function_151(3));
	PLAYSTAT_INT("HC_HONOR", Function_151(1));
	return;
}

void Function_246() //Position: 0xDDD8 / 56792
{
	int iVar0;
	int iVar1;
	
	if (!Function_158(Global_6269))
	{
		return;
	}
	iVar0 = Function_151(24);
	iVar1 = Function_157(Global_6269);
	if (!Function_158(iVar0) && Function_249(iVar1) < 0)
	{
		Function_150(24, Global_6269, 0);
		Function_247(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_249(Function_157(iVar0)))
	{
		Function_150(24, Global_6269, 0);
		Function_247(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_247(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xDE58 / 56920
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_248(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_248(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0xE1AA / 57770
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_249(int iParam0) //Position: 0xE22D / 57901
{
	if (!Function_48(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_250(char* cParam0) //Position: 0xE247 / 57927
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

int Function_251(int iParam0) //Position: 0xE49D / 58525
{
	if (!Function_50(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

bool Function_252() //Position: 0xE4BD / 58557
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_253(int iParam0) //Position: 0xE4E8 / 58600
{
	if (!Function_50(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_254() //Position: 0xE503 / 58627
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
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
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_255(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_255(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xE74A / 59210
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

int Function_256(int iParam0, bool bParam1, bool bParam2) //Position: 0xE773 / 59251
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_94(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_93(iParam0);
	if (bParam2)
	{
		Function_85(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_257(int iParam0) //Position: 0xE9DF / 59871
{
	switch (iParam0)
	{
		case 0x00000000:
			return 662;
			break;
		
		case 0x00000001:
			return 663;
			break;
		
		case 0x00000002:
			return 665;
			break;
		
		case 0x00000003:
			return 664;
			break;
		
		case 0x00000004:
			return 666;
			break;
	}
	LOG_ERROR("should not be here");
	return 662;
}

float Function_258(int iParam0) //Position: 0xEA48 / 59976
{
	if (Function_260(iParam0))
	{
		if (Function_259(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_259(int iParam0) //Position: 0xEB10 / 60176
{
	return Function_28(*iParam0, 2);
}

bool Function_260(int iParam0) //Position: 0xEB1D / 60189
{
	return Function_28(*iParam0, 1);
}

void Function_261(var uParam0, int iParam1) //Position: 0xEB2A / 60202
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

void Function_262(int iParam0) //Position: 0xEB4F / 60239
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			PRINT_BIG("BLK_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000001:
			PRINT_BIG("COOTS_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000004:
			PRINT_BIG("SEP_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG("TUM_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000002:
			PRINT_BIG("ODD_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
	}
	return;
}

void Function_263(int iParam0) //Position: 0xEC41 / 60481
{
	Function_358(iParam0, 0.0f);
	return;
}

void Function_264(int iParam0) //Position: 0xEC4D / 60493
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			bLocal_247 = Function_281(bLocal_292, 0, 1, 0, 0);
			break;
		
		case 0x00000001:
			bLocal_247 = Function_277(bLocal_292, 0, 1, 0, 0);
			break;
		
		case 0x00000004:
			bLocal_247 = Function_273(bLocal_292, 0, 1, 0, 0);
			break;
		
		case 0x00000003:
			bLocal_247 = Function_269(bLocal_292, 0, 1, 0, 0);
			break;
		
		case 0x00000002:
			bLocal_247 = Function_265(bLocal_292, 0, 1, 0, 0);
			break;
	}
	return;
}

bool Function_265(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xECC5 / 60613
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "oddgraveyardComplete", 2, 1);
	}
	Function_266(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_266(int iParam0) //Position: 0xED45 / 60741
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_268(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_267(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_267(int iParam0) //Position: 0xED9A / 60826
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 50.40506f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2897.067f, 20.62931f, 2714.683f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.039979f, 0.583588f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_268(int iParam0) //Position: 0xEE04 / 60932
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 50.40506f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2898.525f, 21.02192f, 2712.473f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.282773f, 0.575102f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_269(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xEE6E / 61038
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TumgraveyardComplete", 2, 1);
	}
	Function_270(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_270(int iParam0) //Position: 0xEEEE / 61166
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_272(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_271(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_271(int iParam0) //Position: 0xEF43 / 61251
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.20898f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3918.087f, 31.29665f, 2938.344f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.228078f, -0.797786f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_272(int iParam0) //Position: 0xEFAD / 61357
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.20898f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3919.805f, 30.81222f, 2939.652f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.222407f, -0.792953f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_273(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xF017 / 61463
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "sepgraveyardComplete", 2, 1);
	}
	Function_274(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_274(int iParam0) //Position: 0xF097 / 61591
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_276(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_275(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_275(int iParam0) //Position: 0xF0EC / 61676
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.90624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1389.109f, 16.60661f, 4315.52f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.088543f, -0.979924f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_276(int iParam0) //Position: 0xF156 / 61782
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.90624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1389.484f, 14.59394f, 4315.136f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.120229f, -0.992252f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_277(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xF1C0 / 61888
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "cootsgraveyardComplete", 2, 1);
	}
	Function_278(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_278(int iParam0) //Position: 0xF242 / 62018
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_280(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_279(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_279(int iParam0) //Position: 0xF297 / 62103
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40.52501f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1804.425f, 23.51718f, 2823.539f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.312112f, -2.467991f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_280(int iParam0) //Position: 0xF301 / 62209
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40.52501f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1807.816f, 23.14842f, 2825.066f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.329485f, -2.366173f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_281(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xF36B / 62315
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blkgraveyardComplete", 2, 1);
	}
	Function_282(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_282(int iParam0) //Position: 0xF3EB / 62443
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_284(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_283(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_283(int iParam0) //Position: 0xF440 / 62528
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.15377f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 592.2622f, 91.29121f, 1199.506f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.334294f, 1.381979f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_284(int iParam0) //Position: 0xF4AA / 62634
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.15377f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 590.5406f, 91.34983f, 1205.931f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.310153f, 1.227103f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_285(int iParam0) //Position: 0xF514 / 62740
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		bVar2 = GET_CURRENT_GRINGO(Global_34573);
		if (IS_GRINGO_VALID(bVar2))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar2)), "dlc_player_burn_coffin"))
			{
				if (!iLocal_315)
				{
					Function_382(&iLocal_233, 0.0f);
					iLocal_315 = 1;
				}
				else if (Function_360(&iLocal_233, 1.2f))
				{
					iLocal_315 = 0;
					Function_290(iParam0);
					Function_382(&iLocal_233, 2.6f);
					iParam0->f_4 = 11;
				}
			}
		}
	}
	return;
}

void Function_286(int iParam0) //Position: 0xF5B6 / 62902
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(Local_298[iVar04], "LootCoffin")))
			{
				Local_298[iVar04].f_4 = 1;
				Function_287();
				iLocal_285++;
				if (iLocal_285 <= 2 && !iLocal_284)
				{
					iLocal_284 = 1;
					iParam0->f_12++;
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_287() //Position: 0xF629 / 63017
{
	var uVar0[6];
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	Function_288(Function_111(), &uVar0, &iVar7);
	iVar8 = 0;
	while (iVar8 <= iVar7)
	{
		if (uVar0[iVar8] != 4294967295)
		{
			if (_GET_AMMO_AMOUNT(Function_111(), GET_AMMO_ENUM(uVar0[iVar8]), 1) > _GET_MAX_AMMO_AMOUNT(Function_111(), GET_AMMO_ENUM(uVar0[iVar8])))
			{
				_ADD_AMMO_OF_TYPE(Function_111(), GET_AMMO_ENUM(uVar0[iVar8]), 6.0f, 1, 1);
			}
		}
		iVar8++;
	}
	return;
}

void Function_288(bool bParam0, var uParam1, int iParam2) //Position: 0xF693 / 63123
{
	*iParam2 = 0;
	if (Function_289(bParam0, 39) != 4294967295)
	{
		(*uParam1)[*iParam2] = 0;
		*iParam2++;
	}
	if (Function_289(bParam0, 41) != 4294967295)
	{
		(*uParam1)[*iParam2] = 8;
		*iParam2++;
	}
	if (Function_289(bParam0, 40) != 4294967295)
	{
		(*uParam1)[*iParam2] = 4;
		*iParam2++;
	}
	if (Function_289(bParam0, 42) != 4294967295)
	{
		(*uParam1)[*iParam2] = 12;
		*iParam2++;
	}
	if (Function_289(bParam0, 43) != 4294967295)
	{
		(*uParam1)[*iParam2] = 17;
		*iParam2++;
	}
	if (Function_289(bParam0, 44) != 4294967295)
	{
		(*uParam1)[*iParam2] = 19;
		*iParam2++;
	}
	return;
}

int Function_289(bool bParam0, int iParam1) //Position: 0xF743 / 63299
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_290(int iParam0) //Position: 0xF754 / 63316
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			GIVE_WEAPON_TO_ACTOR(Global_34573, 8, 0.0f, 1, 0);
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(8), 18.0f, 0, 1);
			break;
	}
	return;
}

bool Function_291() //Position: 0xF789 / 63369
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_292(bool bParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0xF7B1 / 63409
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(bVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, iParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

void Function_293(int iParam0) //Position: 0xF89B / 63643
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_179("GY_Blackwater_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			Function_179("GY_coots_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			Function_179("GY_Oddfellows_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			Function_179("GY_Tumbleweed_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000004:
			Function_179("GY_Sepulcro_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_294(int iParam0) //Position: 0xF97D / 63869
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			Function_302();
			break;
		
		case 0x00000001:
			Function_301();
			break;
		
		case 0x00000004:
			Function_300();
			break;
		
		case 0x00000003:
			Function_299();
			break;
		
		case 0x00000002:
			Function_295();
			break;
	}
	return;
}

void Function_295() //Position: 0xF9C8 / 63944
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_Pturner1", "RCMBoss_Pturner1", 0, 3, 1, 0, 1);
		Function_296(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_296(bool bParam0) //Position: 0xFA11 / 64017
{
	Function_297(0, Global_34573, bParam0, 0);
	Function_297(1, bLocal_270, bParam0, 0);
	return;
}

void Function_297(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xFA2B / 64043
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_28(bParam2, Function_298(bParam0)))
	{
		bVar0 = bParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

int Function_298(bool bParam0) //Position: 0xFA50 / 64080
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_299() //Position: 0xFA5C / 64092
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_JimySaint1", "RCMBoss_JimySaint1", 0, 3, 1, 0, 1);
		Function_296(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_300() //Position: 0xFAA9 / 64169
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_DeSanta1", "RCMBoss_DeSanta1", 0, 3, 1, 0, 1);
		Function_296(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_301() //Position: 0xFAF2 / 64242
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_MissHorlk1", "RCMBoss_MissHorlk1", 0, 3, 1, 0, 1);
		Function_296(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_302() //Position: 0xFB3F / 64319
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_Mordecai1", "RCMBoss_Mordecai1", 0, 3, 1, 0, 1);
		Function_296(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_303(int iParam0) //Position: 0xFB8A / 64394
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			bLocal_247 = Function_322(bLocal_292, 0, 1, 0, 0);
			break;
		
		case 0x00000001:
			bLocal_247 = Function_318(bLocal_292, 0, 1, 0, 0);
			break;
		
		case 0x00000004:
			bLocal_247 = Function_312(bLocal_292, 0, 1, 0, 0);
			break;
		
		case 0x00000003:
			bLocal_247 = Function_308(bLocal_292, 0, 1, 0, 0);
			break;
		
		case 0x00000002:
			bLocal_247 = Function_304(bLocal_292, 0, 1, 0, 0);
			break;
	}
	return;
}

bool Function_304(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFC02 / 64514
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "oddBossFightGraveyard", 2, 1);
	}
	Function_305(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_305(int iParam0) //Position: 0xFC83 / 64643
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_307(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_306(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_306(int iParam0) //Position: 0xFCD8 / 64728
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.66159f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2903.974f, 19.79888f, 2710.857f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.150541f, 0.507457f, 0.004521f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_307(int iParam0) //Position: 0xFD46 / 64838
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.66233f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2904.165f, 19.51034f, 2708.177f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.102399f, 1.165359f, 0.004493f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_308(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFDB4 / 64948
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TumBossFightGraveyard", 2, 1);
	}
	Function_309(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_309(int iParam0) //Position: 0xFE35 / 65077
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_311(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_310(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_310(int iParam0) //Position: 0xFE8A / 65162
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 31.86192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3911.766f, 31.83612f, 2921.979f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.078771f, 2.88158f, 0.004278f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_311(int iParam0) //Position: 0xFEF8 / 65272
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 25.76166f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3913.444f, 31.26865f, 2924.223f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.117483f, -2.70611f, 0.004294f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_312(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFF66 / 65382
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "SepBossFightGraveyard", 4, 1);
	}
	Function_313(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_313(int iParam0) //Position: 0xFFE7 / 65511
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_317(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_316(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_315(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_314(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*iParam0, 0, 1, 4.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 0.001f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 2, 3, 2.5f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 3, 1.0f, 4);
	return;
}

void Function_314(int iParam0) //Position: 0x10074 / 65652
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34.77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.537f, 13.61537f, 4300.938f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.525523f, 1.490034f, 0.001164f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_315(int iParam0) //Position: 0x100E2 / 65762
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34.77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.537f, 13.61537f, 4300.938f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.373518f, 1.402987f, 0.001081f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_316(int iParam0) //Position: 0x10150 / 65872
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34.77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.477f, 13.66733f, 4299.932f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.072472f, 1.915836f, 0.001009f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_317(int iParam0) //Position: 0x101BE / 65982
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 25.45625f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.713f, 13.89411f, 4300.767f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.043377f, 1.765097f, -0.000861f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_318(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1022C / 66092
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "cootsBossFightGraveyard", 2, 1);
	}
	Function_319(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_319(int iParam0) //Position: 0x102AF / 66223
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_321(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_320(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_320(int iParam0) //Position: 0x10304 / 66308
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.26746f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1763.659f, 25.13008f, 2844.199f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.133221f, -2.84744f, 0.000148f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_321(int iParam0) //Position: 0x10372 / 66418
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 23.50987f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1763.345f, 24.48004f, 2845.35f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.039157f, -2.624838f, 0.000147f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_322(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x103E0 / 66528
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blkBossFightGraveyard", 2, 1);
	}
	Function_323(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_323(int iParam0) //Position: 0x10461 / 66657
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_325(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_324(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 8.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_324(int iParam0) //Position: 0x104B6 / 66742
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 32.89204f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 530.6407f, 95.02366f, 1201.827f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.183638f, -1.091771f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_325(int iParam0) //Position: 0x10520 / 66848
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 32.89204f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 531.275f, 94.5818f, 1201.307f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.145415f, -1.242507f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_326(int iParam0) //Position: 0x1058A / 66954
{
	Function_328(bLocal_270, 2, 0);
	TASK_MELEE_ATTACK(bLocal_270, Global_34573, -1.0f);
	SET_ACTOR_INVULNERABILITY(bLocal_270, 0);
	Function_327(bLocal_270, 1, 1, 1, 1, 0, 1);
	ENABLE_MOVER(bLocal_270);
	switch (iParam0->f_152)
	{
		case 0x00000000:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_270, 392, 0, 2, 0), "BLK_BOSS_NAME");
			break;
		
		case 0x00000001:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_270, 392, 0, 2, 0), "COOTS_BOSS_NAME");
			break;
		
		case 0x00000002:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_270, 392, 0, 2, 0), "ODD_BOSS_NAME");
			break;
		
		case 0x00000003:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_270, 392, 0, 2, 0), "TUM_BOSS_NAME");
			break;
		
		case 0x00000004:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_270, 392, 0, 2, 0), "SEP_BOSS_NAME");
			break;
	}
	return;
}

void Function_327(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1068E / 67214
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

void Function_328(bool bParam0, int iParam1, bool bParam2) //Position: 0x106CB / 67275
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	SET_ALLOW_EXECUTE(bParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	switch (iParam1)
	{
		case 0x00000001:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar0, 10.0f, &vVar3, &vVar6);
			vVar3.f_4 = (vVar3.y + 0.05f);
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_35(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_34();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_35(), vVar3, Function_34());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_35(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_34();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_35(), vVar0, Function_34());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
	}
	if (!bParam2)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(bParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(bParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(bParam0, "WakeUpFast", true);
	}
	return;
}

bool Function_329(int iParam0, float fParam1) //Position: 0x1087B / 67707
{
	if (Function_360(iParam0, fParam1))
	{
		Function_330(iParam0);
		return 1;
	}
	return 0;
}

void Function_330(int iParam0) //Position: 0x10893 / 67731
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_331(int iParam0) //Position: 0x108A7 / 67751
{
	if (!iLocal_267)
	{
		Function_357(iParam0);
		iLocal_267 = 1;
	}
	if (*iParam0 <= iParam0->f_148 && !IS_PLAYER_DEADEYE(0))
	{
		Function_358(&iLocal_271, -1.0f);
		Function_358(&iLocal_233, -2.0f);
		iParam0->f_4 = 7;
	}
	Function_340(iParam0);
	if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_24))
	{
		iParam0->f_20++;
		Function_336(iParam0->f_24);
		Function_334(iParam0, EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_28));
		EVENT_TRAP_CLEAR_EVENTS(iParam0->f_24);
		EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_24);
		EVENT_TRAP_CLEAR_EVENTS(iParam0->f_28);
		EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_28);
	}
	if (iParam0->f_44 >= iParam0->f_48)
	{
		Function_332(iParam0);
	}
	Function_286(iParam0);
	if (iLocal_266 && Function_291())
	{
		Function_179("GY_objective_1", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iLocal_266 = 0;
	}
	return 0;
}

void Function_332(int iParam0) //Position: 0x1096F / 67951
{
	Function_358(&iLocal_271, -5.0f);
	Function_333(iParam0);
	*iParam0++;
	if (iParam0->f_12 <= iParam0->f_16)
	{
		iParam0->f_12++;
	}
	return;
}

void Function_333(int iParam0) //Position: 0x109A2 / 68002
{
	iParam0->f_48 = (iParam0->f_48 + (50 * *iParam0));
	return;
}

void Function_334(var uParam0, bool bParam1) //Position: 0x109B7 / 68023
{
	int iVar0;
	
	iVar0 = 0;
	switch (StackVal)
	{
		case 0x00000000:
			iVar0 = 0;
			break;
		
		case 0x00000001:
			iVar0 = 5;
			break;
		
		case 0x00000002:
			iVar0 = 5;
			break;
		
		case 0x00000003:
			iVar0 = 10;
			break;
		
		case 0x00000004:
			iVar0 = 10;
			break;
		
		case 0x00000005:
			iVar0 = 15;
			break;
		
		case 0x00000006:
			iVar0 = 20;
			break;
		
		case 0x00000007:
			iVar0 = 25;
			break;
		
		case 0x00000008:
			iVar0 = 30;
			break;
		
		case 0x00000009:
			iVar0 = 40;
			break;
		
		default:
			if (StackVal <= 15)
			{
				iVar0 = 50;
			}
			else
			{
				iVar0 = 100;
			}
			break;
	}
	if (bParam1)
	{
		Function_335(uParam0, ((10 + iVar0) * CEIL(1.25f)));
	}
	else
	{
		Function_335(uParam0, (10 + iVar0));
	}
	return;
}

void Function_335(var uParam0, int iParam1) //Position: 0x10A84 / 68228
{
	uParam0->f_44 = (uParam0->f_44 + iParam1);
	return;
}

void Function_336(bool bParam0) //Position: 0x10A95 / 68245
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bLocal_292);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
		return;
	}
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 3);
	bVar4 = START_OBJECT_ITERATOR(bVar0);
	if (!IS_OBJECT_VALID(bVar4))
	{
	}
	while (IS_OBJECT_VALID(bVar4))
	{
		bVar2 = GET_EVENT_FROM_OBJECT(bVar4);
		bVar3 = GET_EVENT_TARGET_AS_OBJECT(bVar2);
		bVar1 = GET_ACTOR_FROM_OBJECT(bVar3);
		if (IS_OBJECT_VALID(bVar3))
		{
			if (IS_ACTOR_VALID(bVar1))
			{
				if ((Function_339(bVar1) || Function_338(bVar1)) || Function_337(bVar1))
				{
					iLocal_264 = (iLocal_264 - 1);
				}
			}
			else
			{
				LOG_ERROR("our actor is not valid?!");
			}
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

bool Function_337(bool bParam0) //Position: 0x10B55 / 68437
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1222 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

int Function_338(bool bParam0) //Position: 0x10B75 / 68469
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1214 && iVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

int Function_339(bool bParam0) //Position: 0x10B95 / 68501
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

void Function_340(int iParam0) //Position: 0x10BB5 / 68533
{
	int iVar1;
	
	if (Function_258(&iLocal_271) < 0.0f)
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(StackVal) <= iParam0->f_12)
		{
			Function_351(iParam0);
			if (iLocal_264 <= iParam0->f_152)
			{
				if (*iParam0 <= 4 && iLocal_264 > iParam0->f_152)
				{
					iVar1 = 2;
				}
				else if (*iParam0 <= 3 && iLocal_264 > iParam0->f_152)
				{
					iVar1 = 1;
				}
				else if (*iParam0 <= 2 && iLocal_264 > iParam0->f_152)
				{
					iVar1 = 0;
				}
				else
				{
					iVar1 = 4294967295;
				}
				if (iLocal_265 >= iVar1)
				{
					iLocal_265 = 0;
				}
				if (iVar1 != 4294967295)
				{
					switch (iLocal_265)
					{
						case 0x00000000:
							Function_347(iParam0, bLocal_243);
							Function_345(&bLocal_243, 1214, 1221);
							break;
						
						case 0x00000001:
							Function_347(iParam0, bLocal_244);
							Function_345(&bLocal_244, 1204, 1213);
							break;
						
						case 0x00000002:
							Function_347(iParam0, bLocal_245);
							Function_345(&bLocal_245, 1222, 1227);
							break;
					}
					iLocal_291++;
					iLocal_264++;
					iLocal_265++;
				}
			}
			Function_344(iParam0);
			Function_358(&iLocal_271, -0.5f);
			iLocal_291++;
			if (iLocal_291 >= 20)
			{
				Function_341(StackVal, StackVal, *(iParam0 + 32), 20.0f);
				iLocal_291 = 0;
			}
		}
	}
	return;
}

void Function_341(vector3 vParam0, float fParam3) //Position: 0x10CE1 / 68833
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_343(bVar1);
		if ((GET_OBJECT_TYPE(bVar1) != 29 && VDIST(vParam0, Function_343(bVar1)) >= fParam3) && !Function_342(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			DESTROY_OBJECT(bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
}

bool Function_342(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x10D4B / 68939
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

vector3 Function_343(bool bParam0) //Position: 0x10D65 / 68965
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_344(int iParam0) //Position: 0x10D8C / 69004
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (StackVal <= SQUAD_GET_SIZE(bVar0))
	{
		if (IS_ACTOR_HOGTIED(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0)))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0);
			SQUAD_LEAVE(bVar1);
			RELEASE_ACTOR(bVar1);
			Function_335(iParam0, 40);
		}
		bVar0++;
	}
	return "";
}

void Function_345(bool bParam0, int iParam1, bool bParam2) //Position: 0x10DD7 / 69079
{
	STREAMING_EVICT_ACTOR(*bParam0, 4294967295);
	*bParam0 = Function_346(iParam1, bParam2);
	STREAMING_REQUEST_ACTOR(*bParam0, 1, false);
	return;
}

var Function_346(int iParam0, bool bParam1) //Position: 0x10DF6 / 69110
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (bParam1 > 1311)
	{
		return 4294967295;
	}
	iVar1 = RAND_INT_RANGE(iParam0, bParam1);
	iVar0 = iVar1;
	return iVar0;
}

void Function_347(int iParam0, bool bParam1) //Position: 0x10E1D / 69149
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Function_350();
	Function_343((*iParam0 + 76)[iVar1]);
	Function_349((*iParam0 + 76)[iVar1]);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_292, Function_35(), bParam1, Function_343((*iParam0 + 76)[iVar1]), Function_349((*iParam0 + 76)[iVar1]));
	Function_348(bVar0, 1, 1);
	SQUAD_JOIN(StackVal, bVar0);
	if (Function_337(bVar0))
	{
		TASK_GO_NEAR_ACTOR(bVar0, Global_34573, 20.0f, 2);
	}
	else
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
		iVar2 = TASK_SEQUENCE_OPEN();
		if (RAND_INT_RANGE(0, 100000) >= 50000)
		{
			TASK_GO_NEAR_ACTOR(false, Global_34573, 8.0f, 1);
		}
		TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar0, iVar2);
		TASK_SEQUENCE_RELEASE(iVar2, 1);
	}
	return;
}

void Function_348(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10EB2 / 69298
{
	switch (bParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (bParam1 != 4294967295)
	{
		if (bParam2)
		{
			Function_328(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

vector3 Function_349(bool bParam0) //Position: 0x10F64 / 69476
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_350() //Position: 0x10F8B / 69515
{
	int iVar0;
	
	iVar0 = RAND_INT_RANGE(0, 14);
	if (iLocal_286 != iVar0)
	{
		iLocal_286 = iVar0;
	}
	else
	{
		iVar0++;
		if (iVar0 >= 14)
		{
			iVar0 = 0;
		}
		iLocal_286 = iVar0;
	}
	return iVar0;
}

void Function_351(int iParam0) //Position: 0x10FC0 / 69568
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (STREAMING_IS_ACTOR_LOADED(iLocal_236[iLocal_246], 4294967295))
	{
		iVar1 = Function_350();
		Function_343((*iParam0 + 76)[iVar1]);
		Function_349((*iParam0 + 76)[iVar1]);
		bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_292, Function_35(), iLocal_236[iLocal_246], Function_343((*iParam0 + 76)[iVar1]), Function_349((*iParam0 + 76)[iVar1]));
		Function_353(bVar0, 1254, 4294967295, 4294967295, 2, 1, 1, 1);
		SQUAD_JOIN(StackVal, bVar0);
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
		iVar2 = TASK_SEQUENCE_OPEN();
		if (RAND_INT_RANGE(0, 100000) >= 50000)
		{
			TASK_GO_NEAR_ACTOR(false, Global_34573, 8.0f, 1);
		}
		TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar0, iVar2);
		TASK_SEQUENCE_RELEASE(iVar2, 1);
		Function_352();
		iLocal_246++;
		if (iLocal_246 > 5)
		{
			iLocal_246 = 0;
		}
	}
	else
	{
		iLocal_246++;
		if (iLocal_246 > 5)
		{
			iLocal_246 = 0;
		}
	}
	return;
}

void Function_352() //Position: 0x11078 / 69752
{
	iLocal_280++;
	if (iLocal_280 >= (GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]) - 1))
	{
		iLocal_280 = 0;
	}
	STREAMING_EVICT_ACTOR(iLocal_236[iLocal_246], 4294967295);
	iLocal_236[iLocal_246] = GET_ACTORENUM_IN_POPULATION(Global_30750[0], iLocal_280);
	STREAMING_REQUEST_ACTOR(iLocal_236[iLocal_246], 1, false);
	return;
}

void Function_353(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x110C2 / 69826
{
	var uVar0;
	
	if (Function_38(bParam0) && !Function_36(bParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(bParam0, iParam1);
	if (iParam2 == 4294967294 && iParam3 == 4294967294)
	{
		if (iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(0, 4);
		}
		if (iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(0, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(bParam0, iParam2, iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (bParam6)
	{
		DEEQUIP_ACCESSORY(bParam0, 0);
	}
	if (bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	}
	Function_355(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", true);
	Function_354(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, 0);
	SET_ALLOW_COLD_WEATHER_BREATH(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.0f, 1.115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, uVar0, 1);
	}
	if (iParam1 <= 1204 && iParam1 >= 1213)
	{
		DECOR_SET_BOOL(bParam0, "FastZombie", true);
	}
	else if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		DECOR_SET_BOOL(bParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 12.5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 0.5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(bParam0, "head");
	if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2020.0f, 1);
	}
	Function_348(bParam0, iParam4, iParam5);
}

void Function_354(bool bParam0) //Position: 0x11325 / 70437
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

void Function_355(bool bParam0) //Position: 0x11359 / 70489
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_356(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_356(var uParam0, bool bParam1) //Position: 0x116BD / 71357
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_357(int iParam0) //Position: 0x116DF / 71391
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Function_343((*iParam0 + 52)[iVar0 + 1]);
		Function_349((*iParam0 + 52)[iVar0 + 1]);
		Local_298[iVar04] = CREATE_PROP_IN_LAYOUT(bLocal_292, Function_35(), "$/fragments/p_gen_coffin04x", Function_343((*iParam0 + 52)[iVar0 + 1]), Function_349((*iParam0 + 52)[iVar0 + 1]), 1);
		SNAP_OBJECT_TO_GROUND(Local_298[iVar04], 5.0f, true, 1092616192);
		Function_343(Local_298[iVar04]);
		CLEAR_AREA_OF_GRASS(Function_343(Local_298[iVar04]), 2.0f);
		Function_343(Local_298[iVar04]);
		CLEAR_AREA_OF_TREE_TYPE(Function_343(Local_298[iVar04]), 2.0f, "");
		Local_298[iVar04].f_4 = 0;
		SET_PROP_AI_OBSTACLE_ENABLED(Local_298[iVar04], 1);
		bVar1 = ADD_BLIP_FOR_OBJECT(Local_298[iVar04], 330, 0f, 2, 0);
		SET_BLIP_SCALE(bVar1, 0.75f);
		SET_BLIP_NAME(bVar1, "blip_coffin");
		Function_343((*iParam0 + 52)[iVar0 + 1]);
		Function_349((*iParam0 + 52)[iVar0 + 1]);
		Local_298[iVar04].f_8 = CREATE_VOLUME_IN_LAYOUT(bLocal_292, Function_35(), 2, Function_343((*iParam0 + 52)[iVar0 + 1]), Function_349((*iParam0 + 52)[iVar0 + 1]), 3.0f, 1.5f, 3.0f);
		Local_298[iVar04].f_12 = CREATE_EVENT_TRAP(Function_35(), 17, bLocal_292);
		EVENT_TRAP_STORE_EVENTS(Local_298[iVar04].f_12, 1);
		EVENT_TRAP_ON_VOLUME(StackVal, Local_298[iVar04].f_12);
		iVar0++;
	}
	return;
}

void Function_358(int iParam0, bool bParam1) //Position: 0x11822 / 71714
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_219(iParam0, 1);
	Function_45(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_359() //Position: 0x11843 / 71747
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	
	Function_168(Global_34573);
	vVar0 = { StackVal, StackVal, Function_168(Global_34573) };
	iVar3 = RAND_INT_RANGE(50, 100);
	bVar4 = Function_39();
	if (bVar4)
	{
		iVar3 *= 1;
	}
	else
	{
		iVar3 = (iVar3 * 4294967295);
	}
	vVar0.x = (vVar0.x + IntToFloat(iVar3));
	vVar0.f_8 = (vVar0.z + IntToFloat(iVar3));
	if (IS_OBJECT_VALID(bLocal_293))
	{
		UNK_0x7246F438(bLocal_293);
	}
	bLocal_293 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_292, Function_35(), "env_lightningForked_stormy", vVar0);
	UNK_0x6745191B(bLocal_293, 0.0f, 0.0f, 0.0f);
	return;
}

bool Function_360(int iParam0, float fParam1) //Position: 0x118CF / 71887
{
	if (Function_260(iParam0))
	{
		if (Function_258(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_361(int iParam0) //Position: 0x118EB / 71915
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (StackVal && !IS_OBJECT_VALID(Local_298[iVar04].f_12))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(Local_298[iVar04].f_12))
			{
				if (Function_362(Local_298[iVar04].f_12))
				{
					Local_298[iVar04].f_4 = 1;
					Function_287();
					DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(Local_298[iVar04], "LootCoffin"));
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_298[iVar04]));
					EVENT_TRAP_CLEAR_TRAP_FLAG(Local_298[iVar04].f_12);
					EVENT_TRAP_CLEAR_EVENTS(Local_298[iVar04].f_12);
					bVar1 = Local_298[iVar04];
					iVar2 = 0;
					if (GET_OBJECT_TYPE(bVar1) == 17)
					{
						Function_343(bVar1);
						UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_292, Function_35(), "fire_zombie_02_dataSphere", Function_343(bVar1)), 0.0f, 0.0f, 0.0f);
					}
					iLocal_285++;
					if (iLocal_285 <= 2 && !iLocal_284)
					{
						iLocal_284 = 1;
						iParam0->f_12++;
					}
				}
			}
		}
		iVar0++;
	}
	return;
}

bool Function_362(bool bParam0) //Position: 0x119F1 / 72177
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bLocal_292);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
		return 0;
	}
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	if (!IS_OBJECT_VALID(bVar2))
	{
	}
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar1 = GET_EVENT_FROM_OBJECT(bVar2);
		if (DECOR_GET_STRING_HASH(bVar1, "ExplosionType") == STRING_TO_HASH("FireBottleExplosion"))
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

void Function_363(bool bParam0) //Position: 0x11A87 / 72327
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

void Function_364(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x11AA4 / 72356
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_111();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_76())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_84(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_137();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_365(iParam9);
}

void Function_365(int iParam0) //Position: 0x11B94 / 72596
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_366();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_366() //Position: 0x11C43 / 72771
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

int Function_367() //Position: 0x11CB5 / 72885
{
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1.5f)
		{
			return 0;
		}
	}
	if (HUD_IS_FADING())
	{
		return 0;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused") && !UI_ISACTIVE("PauseScene"))
		{
			Function_84(20, 1, 0, 0);
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_368(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_281 = true;
			STREAMING_RELEASE_MAIN_POI();
			return 1;
		}
	}
	return 0;
}

void Function_368(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x11D31 / 73009
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, iParam5);
		}
	}
}

void Function_369(int iParam0) //Position: 0x11D5A / 73050
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			Function_374(iParam0->f_140);
			break;
		
		case 0x00000001:
			Function_373(iParam0->f_140);
			break;
		
		case 0x00000002:
			Function_372(iParam0->f_140);
			break;
		
		case 0x00000003:
			Function_371(iParam0->f_140);
			break;
		
		case 0x00000004:
			Function_370(iParam0->f_140);
			break;
	}
	SET_ACTOR_MAX_HEALTH(bLocal_270, 35.0f);
	SET_ACTOR_HEALTH(bLocal_270, 35.0f);
	DECOR_SET_BOOL(bLocal_270, "CanBeLasso", false);
	SET_ACTOR_INVULNERABILITY(bLocal_270, 1);
	Function_327(bLocal_270, 0, 1, 1, 1, 0, 1);
	SUSPEND_MOVER(bLocal_270);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(GET_OBJECT_FROM_ACTOR(bLocal_270));
	SET_ACTOR_UPDATE_PRIORITY(bLocal_270, false);
	Function_343(iParam0->f_140);
	STREAMING_LOAD_BOUNDS(Function_343(iParam0->f_140), 3.0f, 0);
	return;
}

void Function_370(bool bParam0) //Position: 0x11E19 / 73241
{
	Function_343(bParam0);
	Function_349(bParam0);
	bLocal_270 = CREATE_ACTOR_IN_LAYOUT(bLocal_292, Function_35(), 556, Function_343(bParam0), Function_349(bParam0));
	Function_353(bLocal_270, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_371(bool bParam0) //Position: 0x11E47 / 73287
{
	Function_343(bParam0);
	Function_349(bParam0);
	bLocal_270 = CREATE_ACTOR_IN_LAYOUT(bLocal_292, Function_35(), 357, Function_343(bParam0), Function_349(bParam0));
	Function_353(bLocal_270, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_372(bool bParam0) //Position: 0x11E75 / 73333
{
	Function_343(bParam0);
	Function_349(bParam0);
	bLocal_270 = CREATE_ACTOR_IN_LAYOUT(bLocal_292, Function_35(), 182, Function_343(bParam0), Function_349(bParam0));
	Function_353(bLocal_270, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_373(bool bParam0) //Position: 0x11EA2 / 73378
{
	Function_343(bParam0);
	Function_349(bParam0);
	bLocal_270 = CREATE_ACTOR_IN_LAYOUT(bLocal_292, Function_35(), 332, Function_343(bParam0), Function_349(bParam0));
	Function_353(bLocal_270, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_374(bool bParam0) //Position: 0x11ED0 / 73424
{
	Function_343(bParam0);
	Function_349(bParam0);
	bLocal_270 = CREATE_ACTOR_IN_LAYOUT(bLocal_292, Function_35(), 1220, Function_343(bParam0), Function_349(bParam0));
	Function_348(bLocal_270, 2, 0);
	SET_ACTOR_PROOF(bLocal_270, 4194304);
	return;
}

var Function_375(int iParam0, bool bParam1, float fParam2, float fParam3, float fParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x11F01 / 73473
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381)
	{
		Function_380(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_379())
		{
			return "";
		}
	}
	if (!Function_377())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_366();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_343(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_343(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_343(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_343(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_376(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_376(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_76() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_35(), bVar0, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_35(), 993, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { fParam2, fParam3, fParam4 };
				if (!Function_169(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_35(), bVar0, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_35(), 993, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_327(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_76() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

var Function_376(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x12257 / 74327
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_377() //Position: 0x122F2 / 74482
{
	if (Function_378() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_378() //Position: 0x12308 / 74504
{
	return Global_12976.f_152;
}

bool Function_379() //Position: 0x12313 / 74515
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_380(var uParam0, bool bParam1, bool bParam2) //Position: 0x12333 / 74547
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_219(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_219(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_381(int iParam0) //Position: 0x12360 / 74592
{
	if (!Function_260(iParam0))
	{
		Function_358(iParam0, 0.0f);
	}
	return;
}

void Function_382(int iParam0, int iParam1) //Position: 0x12375 / 74613
{
	if (!Function_260(iParam0))
	{
		Function_358(iParam0, iParam1);
	}
	return;
}

var Function_383(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1238B / 74635
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_35(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blkFirstTimeGraveyard", 2, 1);
	}
	Function_384(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_384(int iParam0) //Position: 0x1240C / 74764
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_386(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_385(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 8.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.09f, 2);
	return;
}

void Function_385(int iParam0) //Position: 0x12461 / 74849
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.71252f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 542.7578f, 93.98339f, 1198.781f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.325511f, 2.072496f, -2E-06f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_386(bool bParam0) //Position: 0x124CF / 74959
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 29.73172f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 542.1422f, 93.89145f, 1200.29f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.249336f, 1.708657f, -2E-06f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_387(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x1253D / 75069
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_137();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_111();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_76())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_168(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_35(), 2, Function_168(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_84(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_178())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_388()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_388()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_56(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_120(0x4000000);
	}
	if (Function_56(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_120(0x8000000);
	}
}

var Function_388() //Position: 0x127EB / 75755
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

void Function_389(bool bParam0) //Position: 0x1286A / 75882
{
	bool bVar0;
	
	Function_343((*bParam0 + 76)[0]);
	Function_349((*bParam0 + 76)[0]);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_292, Function_35(), iLocal_236[iLocal_246], Function_343((*bParam0 + 76)[0]), Function_349((*bParam0 + 76)[0]));
	Function_353(bVar0, 1254, 4294967295, 4294967295, 1, 1, 1, 1);
	SQUAD_JOIN(StackVal, bVar0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_GO_NEAR_ACTOR(bVar0, Global_34573, 3.0f, 1);
	Function_352();
	iLocal_246++;
	return;
}

bool Function_390() //Position: 0x128C4 / 75972
{
	bool bVar0;
	
	bVar0 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar0)), "dlc_player_burn_coffin"))
		{
			if (!iLocal_316)
			{
				Function_382(&iLocal_233, 0.0f);
				iLocal_316 = 1;
			}
			else if (Function_360(&iLocal_233, 1.5f))
			{
				iLocal_316 = 0;
				return 1;
			}
		}
	}
	return 0;
}

void Function_391() //Position: 0x12929 / 76073
{
	bool bVar0;
	
	bVar0 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar0)), "dlc_player_burn_coffin"))
		{
			iLocal_282 = 1;
			SET_ACTOR_PROOF(Global_34573, 16);
			fLocal_283 = GET_CURRENT_GAME_TIME();
		}
	}
	if (iLocal_282)
	{
		if ((GET_CURRENT_GAME_TIME() - fLocal_283) < 7.5f)
		{
			CLEAR_ACTOR_PROOF(Global_34573, 16);
			iLocal_282 = 0;
		}
	}
	return;
}

void Function_392(int iParam0) //Position: 0x1299A / 76186
{
	int iVar0;
	int iVar1;
	
	bLocal_292 = CREATE_LAYOUT("ngraveyard");
	if (IS_LAYOUTREF_VALID(bLocal_292))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			iLocal_236[iVar0] = GET_ACTORENUM_IN_POPULATION(Global_30750[0], iLocal_280);
			STREAMING_REQUEST_ACTOR(iLocal_236[iVar0], 1, false);
			iLocal_280++;
			iVar0++;
		}
		bLocal_242 = Function_346(9, 15);
		STREAMING_REQUEST_ACTOR(bLocal_242, 1, false);
		bLocal_243 = Function_346(1214, 1221);
		STREAMING_REQUEST_ACTOR(bLocal_243, 1, false);
		bLocal_244 = Function_346(1204, 1213);
		STREAMING_REQUEST_ACTOR(bLocal_244, 1, false);
		bLocal_245 = Function_346(1222, 1227);
		STREAMING_REQUEST_ACTOR(bLocal_245, 1, false);
		iLocal_246 = 0;
		iLocal_264 = 0;
		iLocal_265 = 0;
		iLocal_266 = 1;
		bLocal_268 = false;
		iLocal_269 = 0;
		bLocal_281 = false;
		iLocal_285 = 0;
		iLocal_284 = 0;
		if (!SQUAD_IS_VALID(StackVal))
		{
			iParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_292, "Squad_Zombie"));
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(StackVal);
			iVar1 |= 2048;
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(StackVal, iVar1);
		}
		*iParam0 = 1;
		iParam0->f_44 = 0;
		iParam0->f_20 = 0;
		iParam0->f_48 = 75;
		if (iParam0->f_152 != 0 && Function_396(Global_30734) >= 0)
		{
			iParam0->f_4 = 2;
		}
		else
		{
			iParam0->f_4 = 3;
		}
		if (Global_3421)
		{
			iParam0->f_12 = 2;
			iParam0->f_16 = 6;
		}
		iLocal_267 = 0;
		Function_382(&iLocal_271, -5.0f);
		if (!IS_OBJECT_VALID(iParam0->f_24))
		{
			iParam0->f_24 = CREATE_EVENT_TRAP("killET", 2, bLocal_292);
			EVENT_TRAP_ON_PERPETRATOR(iParam0->f_24, Global_34573);
			EVENT_TRAP_STORE_EVENTS(iParam0->f_24, 1);
		}
		if (!IS_OBJECT_VALID(iParam0->f_28))
		{
			iParam0->f_28 = CREATE_EVENT_TRAP("headshotET", 10, bLocal_292);
			EVENT_TRAP_ON_PERPETRATOR(iParam0->f_28, Global_34573);
			EVENT_TRAP_STORE_EVENTS(iParam0->f_28, 1);
		}
		Function_343((*iParam0 + 52)[0]);
		Function_349((*iParam0 + 52)[0]);
		Local_294 = CREATE_PROP_IN_LAYOUT(bLocal_292, Function_35(), "$/fragments/p_gen_coffin04x", Function_343((*iParam0 + 52)[0]), Function_349((*iParam0 + 52)[0]), 1);
		SNAP_OBJECT_TO_GROUND(Local_294, 5.0f, true, 1092616192);
		SET_PROP_AI_OBSTACLE_ENABLED(Local_294, 1);
		Function_343(Local_294);
		CLEAR_AREA_OF_GRASS(Function_343(Local_294), 2.0f);
		Function_343(Local_294);
		CLEAR_AREA_OF_TREE_TYPE(Function_343(Local_294), 2.0f, "");
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_294, 330, 0f, 2, 0), "blip_coffin");
		Function_179("GY_Burn_coffin", 0x40f00000, 1, 2, 0, 0, 0, 0);
		Function_394(iParam0);
		Global_3385 = 1;
		if (DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
		{
			DECOR_REMOVE(Global_34573, "bStartedGY");
		}
		AUDIO_MUSIC_FORCE_TRACK(Function_393(iParam0->f_152), "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_393(int iParam0) //Position: 0x12C54 / 76884
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, RETURN TC_NRT_SONG_01!");
		return "TC_NRT_SONG_01";
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "TC_NRT_SONG_01";
			break;
		
		case 0x00000001:
			return "TC_FTR_SONG_02";
			break;
		
		case 0x00000004:
			return "TC_MEX_SONG_01";
			break;
		
		case 0x00000003:
			return "TC_FTR_SONG_04";
			break;
		
		case 0x00000002:
			return "TC_FTR_SONG_03";
			break;
	}
	return "TC_NRT_SONG_01";
}

void Function_394(int iParam0) //Position: 0x12D72 / 77170
{
	bool bVar0;
	
	switch (iParam0->f_152)
	{
		case 0x00000000:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_395(bVar0);
			}
			break;
		
		case 0x00000001:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "coots_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_395(bVar0);
			}
			break;
		
		case 0x00000003:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "tumbleweed_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_395(bVar0);
			}
			break;
		
		case 0x00000002:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "oddfellows_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_395(bVar0);
			}
			break;
		
		case 0x00000004:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "sepulcro_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_395(bVar0);
			}
			break;
	}
	return;
}

void Function_395(bool bParam0) //Position: 0x12EF1 / 77553
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		}
	}
	return;
}

int Function_396(int iParam0) //Position: 0x12F1D / 77597
{
	if (!Function_50(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_397() //Position: 0x12F37 / 77623
{
	if (!Function_188(&bLocal_248))
	{
		return 0;
	}
	return 1;
}

void Function_398(int iParam0) //Position: 0x12F49 / 77641
{
	Function_193(&bLocal_248, "repeater_carbine01x", 0, 0);
	switch (iParam0->f_152)
	{
		case 0x00000000:
			Function_399(&bLocal_248, 1220, 3, 0);
			break;
		
		case 0x00000001:
			Function_399(&bLocal_248, 332, 3, 0);
			break;
		
		case 0x00000003:
			Function_399(&bLocal_248, 357, 3, 0);
			break;
		
		case 0x00000002:
			Function_399(&bLocal_248, 182, 3, 0);
			break;
		
		case 0x00000004:
			Function_399(&bLocal_248, 556, 3, 0);
			break;
	}
	return;
}

var Function_399(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x12FD9 / 77785
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_43(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_191(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_191(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_400(int iParam0, char* cParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x130A9 / 77993
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("invalid layout ref in UPDATE_GRAVEYARD()");
		return;
	}
	if (StackVal)
	{
		if (iParam4 == 1)
		{
			if (VDIST(Global_34574, -1804.95f, 23.088f, 2810.314f) < 250.0f)
			{
				Function_2(iParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(Global_34574, -2912.0f, 19.075f, 2693.999f) < 250.0f)
			{
				Function_2(iParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_406(iParam0, 63))
			{
				if (Function_405(76) || Function_53(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_404(cParam1, iParam0, 3, bParam3);
						Function_403(iParam0, 63);
					}
					else
					{
						return;
					}
				}
			}
		}
		return;
	}
	if (iParam4 == 1)
	{
		if (VDIST(Global_34574, -1804.95f, 23.088f, 2810.314f) < 200.0f)
		{
			return;
		}
		if (Global_26282[14] == 0)
		{
			Function_402();
		}
	}
	else if (iParam4 == 3)
	{
		if (VDIST(Global_34574, -2912.0f, 19.075f, 2693.999f) < 200.0f)
		{
			return;
		}
		if (Global_26282[34] == 0)
		{
			Function_401();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_406(iParam0, 63))
		{
			if (Function_405(76) || Function_53(76))
			{
				Function_404(cParam1, iParam0, 3, bParam3);
				Function_403(iParam0, 63);
			}
		}
	}
	iParam0->f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_404(cParam1, iParam0, bVar0, bParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_401() //Position: 0x132A4 / 78500
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_26282[34] = 0;
	Global_26282[34].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_403(&(Global_26282[34]), bVar0);
		bVar0++;
	}
	return;
}

void Function_402() //Position: 0x132EB / 78571
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_26282[14] = 0;
	Global_26282[14].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_403(&(Global_26282[14]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_403(int iParam0, bool bParam1) //Position: 0x1333D / 78653
{
	if (bParam1 <= 32)
	{
		Function_219(iParam0, Function_298(bParam1));
	}
	else
	{
		Function_219(iParam0 + 4, Function_298((bParam1 - 32)));
	}
	return;
}

bool Function_404(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x13366 / 78694
{
	bool bVar0;
	char* cVar1[16];
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(iParam1->f_12))
	{
		iParam1->f_12 = CREATE_OBJECTSET_IN_LAYOUT("graveTextSet", bParam3, 4294967295, 0);
	}
	bVar5 = false;
	bVar5 = false;
	while (bVar5 <= 3)
	{
		strcpy(&cVar1, cParam0, 16);
		stradd(&cVar1, I2STR(bParam2), 16);
		stradd(&cVar1, "_", 16);
		stradd(&cVar1, I2STR(bVar5), 16);
		if (bVar5 != 0 || Function_406(iParam1, bParam2))
		{
			bVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(bParam3, Function_35(), &cVar1, bParam2, bVar5, 4278716679);
			if (IS_OBJECT_VALID(bVar0))
			{
				ADD_OBJECT_TO_OBJECTSET(bVar0, iParam1->f_12);
			}
			else
			{
				return 0;
			}
		}
		bVar5++;
	}
	return 1;
}

int Function_405(int iParam0) //Position: 0x13406 / 78854
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_406(int iParam0, bool bParam1) //Position: 0x1341B / 78875
{
	if (bParam1 <= 32)
	{
		return Function_28(*iParam0, Function_298(bParam1));
	}
	return Function_28(StackVal, Function_298((bParam1 - 32)));
}

void Function_407(bool bParam0, float fParam1) //Position: 0x13446 / 78918
{
	if (!Function_56(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_408(bool bParam0, bool bParam1) //Position: 0x13484 / 78980
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_95(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_76())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_409(int iParam0) //Position: 0x1357E / 79230
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_410(bool bParam0) //Position: 0x13591 / 79249
{
	Function_411(StackVal, 0, 0.0f, 3, Local_108, 1);
	return;
}

void Function_411(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x135A9 / 79273
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = uParam1;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_414();
	}
	if (bParam5)
	{
		Function_412(1048576);
	}
}

void Function_412(int iParam0) //Position: 0x136BC / 79548
{
	Function_413(&Global_28842, iParam0);
	return;
}

void Function_413(var uParam0, var uParam1) //Position: 0x136CA / 79562
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_414() //Position: 0x136E5 / 79589
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_412(16384);
	}
	return;
}

void Function_415(var uParam0) //Position: 0x13701 / 79617
{
	uParam0 = uParam0;
	return;
}

void Function_416() //Position: 0x1370B / 79627
{
	return;
}

void Function_417(int iParam0) //Position: 0x13711 / 79633
{
	iParam0 = iParam0;
	return;
}

void Function_418(var uParam0, int iParam1) //Position: 0x1371B / 79643
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_419(int iParam0, int iParam1) //Position: 0x13732 / 79666
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_420() //Position: 0x1374E / 79694
{
	return;
}

void Function_421() //Position: 0x13754 / 79700
{
	return;
}

void Function_422(int iParam0) //Position: 0x1375A / 79706
{
	iParam0 = iParam0;
	return;
}

void Function_423(int iParam0, bool bParam1, bool bParam2) //Position: 0x13764 / 79716
{
	if ((!Function_7(bParam1) || Global_3380) || Function_28(iParam0->f_356, 16))
	{
		return;
	}
	if (bParam1 == Global_30640[0])
	{
		Function_424(iParam0, bParam1, &Global_6298, bParam2);
	}
	else if (bParam1 == Global_30640[1])
	{
		Function_424(iParam0, bParam1, &Global_6364, bParam2);
	}
	else if (bParam1 == Global_30640[2])
	{
		Function_424(iParam0, bParam1, &Global_6351, bParam2);
	}
	else if (bParam1 == Global_30658[1])
	{
		Function_424(iParam0, bParam1, &Global_6402, bParam2);
	}
	else if (bParam1 == Global_30658[3])
	{
		Function_424(iParam0, bParam1, &Global_6433, bParam2);
	}
	else if (bParam1 == Global_30658[4])
	{
		Function_424(iParam0, bParam1, &Global_6537, bParam2);
	}
	else if (bParam1 == Global_30668[0])
	{
		Function_424(iParam0, bParam1, &Global_6563, bParam2);
	}
	else if (bParam1 == Global_30668[1])
	{
		Function_424(iParam0, bParam1, &Global_6614, bParam2);
	}
	else if (bParam1 == Global_30668[2])
	{
		Function_424(iParam0, bParam1, &Global_6643, bParam2);
	}
	else if (bParam1 == Global_30679[1])
	{
		Function_424(iParam0, bParam1, &Global_6667, bParam2);
	}
	else if (bParam1 == Global_30679[0])
	{
		Function_424(iParam0, bParam1, &Global_6654, bParam2);
	}
	else if (bParam1 == Global_30685[0])
	{
		Function_424(iParam0, bParam1, &Global_6709, bParam2);
	}
	else if (bParam1 == Global_30685[1])
	{
		Function_424(iParam0, bParam1, &Global_6764, bParam2);
	}
	else if (bParam1 == Global_30685[2])
	{
		Function_424(iParam0, bParam1, &Global_6785, bParam2);
	}
	else if (bParam1 == Global_30693[0])
	{
		Function_424(iParam0, bParam1, &Global_6815, bParam2);
	}
	else if (bParam1 == Global_30693[1])
	{
		Function_424(iParam0, bParam1, &Global_6866, bParam2);
	}
	else if (bParam1 == Global_30693[2])
	{
		Function_424(iParam0, bParam1, &Global_6490, bParam2);
	}
	else if (bParam1 == Global_30707[2])
	{
		Function_424(iParam0, bParam1, &Global_6933, bParam2);
	}
	else if (bParam1 == Global_30707[1])
	{
		Function_424(iParam0, bParam1, &Global_6962, bParam2);
	}
	else if (bParam1 == Global_30707[0])
	{
		Function_424(iParam0, bParam1, &Global_7002, bParam2);
	}
	else if (bParam1 == Global_30707[3])
	{
		Function_424(iParam0, bParam1, &Global_6987, bParam2);
	}
	else if (bParam1 == Global_30723[0])
	{
		Function_424(iParam0, bParam1, &Global_7171, bParam2);
	}
	else if (bParam1 == Global_30723[1])
	{
		Function_424(iParam0, bParam1, &Global_7148, bParam2);
	}
	else if (bParam1 == Global_30723[2])
	{
		Function_424(iParam0, bParam1, &Global_7113, bParam2);
	}
	else if (bParam1 == Global_30717[0])
	{
		Function_424(iParam0, bParam1, &Global_7035, bParam2);
	}
	else if (bParam1 == Global_30717[1])
	{
		Function_424(iParam0, bParam1, &Global_7032, bParam2);
	}
	Function_219(iParam0 + 356, 64);
	return;
}

void Function_424(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x13A31 / 80433
{
	struct<8> Var0;
	bool bVar8;
	int iVar9[8];
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	vector3 vVar24;
	vector3 vVar27;
	struct<8> Var30;
	
	Function_45(iParam0 + 356, 1);
	if (!SQUAD_IS_VALID(*iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_433("localSurvSquad") };
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bParam3, &Var0));
	}
	bVar8 = Function_432(bParam3, iParam1);
	iVar18 = Function_116(&iVar9, iParam1);
	iVar19 = 0;
	bVar20 = FLOOR(Global_13172[iParam0->f_36411].f_28);
	if (iVar18 < bVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_26(iParam1);
	bVar22 = false;
	while (bVar22 < (iVar18 - 1))
	{
		if (bVar22 <= *uParam2)
		{
			if (!Function_431(uParam2[bVar222], 4))
			{
				(iParam0 + 4[bVar225])->f_4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar22, bVar8);
				bVar23 = true;
				if (bVar20 >= 0)
				{
					if (DECOR_CHECK_EXIST(StackVal, "Core") && iVar19)
					{
						bVar23 = false;
					}
					else if (!DECOR_CHECK_EXIST(StackVal, "Core"))
					{
						bVar23 = false;
					}
				}
				if (bVar23)
				{
					vVar24 = { 0.0f, 0.0f, 0.0f };
					vVar27 = { 0.0f, 0.0f, 0.0f };
					GET_OBJECT_POSITION(StackVal, &vVar24);
					GET_OBJECT_ORIENTATION(StackVal, &vVar27);
					Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_433("nSurvivor_") };
					(*iParam0 + 4)[bVar225] = CREATE_ACTOR_IN_LAYOUT(bParam3, &Var30, iVar9[bVar22], vVar24, vVar27);
					Function_426(bVar22, iParam0, bParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(vVar24, 3.0f))
					{
						Function_219(iParam0 + 4[bVar225] + 16, 1);
						Function_219(iParam0 + 356, 1024);
					}
					Function_219(iParam0 + 356, 1);
				}
				else
				{
					bVar20 = (bVar20 - 1);
					Function_425(uParam2[bVar222], 4);
				}
			}
		}
		bVar22++;
	}
	SET_FACTIONS_STATUS_TWO_WAY(4, 4, 0);
	SET_FACTIONS_STATUS_TWO_WAY(6, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(4, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(13, 10, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 4, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 6, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, false);
	Function_208(*iParam0, *iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_425(var uParam0, int iParam1) //Position: 0x13C1D / 80925
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_426(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x13C2C / 80940
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	struct<5> Var7;
	int iVar12;
	bool bVar13;
	bool bVar14;
	char* cVar15[32];
	bool bVar23;
	bool bVar24;
	
	bVar0 = (*iParam1 + 4)[iParam05];
	bVar1 = StackVal;
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SQUAD_JOIN(bVar0, *iParam1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bVar0, 170.0f);
	fVar2 = (GET_ACTOR_VISION_MAX_RANGE(bVar0) + 10.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, fVar2, 1);
	fVar3 = GET_ACTOR_MAX_HEALTH(bVar0);
	SET_ACTOR_MAX_HEALTH(bVar0, (fVar3 + 30.0f));
	SET_ALLOW_EXECUTE(bVar0, 0);
	vVar4 = { 0.0f, 0.0f, 0.0f };
	Var7 = { 0.0f, 0.0f, 0.0f };
	GET_OBJECT_POSITION(StackVal, &vVar4);
	GET_OBJECT_ORIENTATION(StackVal, &Var7);
	bVar10 = true;
	if (DECOR_CHECK_EXIST(bVar1, "GiveWeapon"))
	{
		bVar11 = DECOR_GET_INT(bVar1, "GiveWeapon");
		GIVE_WEAPON_TO_ACTOR(bVar0, bVar11, 0, 1, 1);
		iVar12 = UNK_0xDB679ED9(bVar11);
		if (iVar12 == 40)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRevolvers"));
			DECOR_SET_INT(StackVal, "ZP_NumRevolvers", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 7);
		}
		else if (iVar12 == 39)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumPistols"));
			DECOR_SET_INT(StackVal, "ZP_NumPistols", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 6);
		}
		else if (iVar12 == 41)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRepeaters"));
			DECOR_SET_INT(StackVal, "ZP_NumRepeaters", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 8);
		}
		else if (iVar12 == 42)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRifles"));
			DECOR_SET_INT(StackVal, "ZP_NumRifles", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 9);
		}
		else if (iVar12 == 43)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumShotguns"));
			DECOR_SET_INT(StackVal, "ZP_NumShotguns", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 10);
		}
		else if (iVar12 == 44)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumSnipers"));
			DECOR_SET_INT(StackVal, "ZP_NumSnipers", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 11);
		}
	}
	else
	{
		GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0, 1, 1);
		bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRepeaters"));
		DECOR_SET_INT(StackVal, "ZP_NumRepeaters", bVar10);
		DECOR_SET_INT(bVar0, "nammo_type", 8);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(bVar0, 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bVar0, 0);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(bVar0, 0);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar0, 1);
	Function_430(bVar0, 0);
	Function_429(bVar0, 0);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_ALLOW_DISARM(bVar0, 0);
	if (DECOR_CHECK_EXIST(bVar1, "Accuracy"))
	{
		bVar13 = DECOR_GET_INT(bVar1, "Accuracy");
		Function_428(bVar0, TO_FLOAT(bVar13), 1.0f, 1.0f);
	}
	else
	{
		Function_428(bVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 61, RAND_FLOAT_RANGE(0.1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(bVar0, (RAND_INT_RANGE(0, 10000) % 5) + 1);
	AI_SET_FIRE_DELAY(bVar0, RAND_FLOAT_RANGE(1.0f, 3.0f));
	AI_SET_FIRE_DELAY_RANDOMNESS(bVar0, RAND_FLOAT_RANGE(0.0f, 2.0f));
	if (DECOR_CHECK_EXIST(bVar1, "nShoot_Vol"))
	{
		bVar14 = DECOR_GET_INT(bVar1, "nShoot_Vol");
		strcpy(&cVar15, "survVol_", 32);
		stradd(&cVar15, INT_TO_STRING(bVar14), 32);
		bVar23 = FIND_VOLUME_IN_LAYOUT(bParam2, &cVar15);
		if (IS_VOLUME_VALID(bVar23))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, bVar23, 4, 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar0, -1.0f);
		}
		else
		{
			TASK_PRIORITY_SET(bVar0, 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
		}
	}
	else if (DECOR_CHECK_EXIST(bVar1, "CrouchShoot"))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		TASK_PRIORITY_SET(bVar0, 1);
		TASK_OVERRIDE_SET_POSTURE(bVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
	}
	else if (DECOR_CHECK_EXIST(bVar1, "Gringo") || !bParam3)
	{
		bVar24 = LOCATE_GRINGO_OF_TYPE("", &vVar4, 1.0f, 1);
		if (IS_GRINGO_VALID(bVar24))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_GRINGO(bVar24), "CantUse"))
			{
				if (!IS_OBJECT_VALID(Function_427(bVar24, "UseCase1")))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "ForceAllowSun", true);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "ForceAllowRain", true);
					SNAP_ACTOR_TO_GRINGO(bVar0, GET_OBJECT_FROM_GRINGO(bVar24), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(bVar0, 2);
					TASK_USE_GRINGO(bVar0, bVar24, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "CantUse", true);
				}
			}
		}
		else
		{
			TASK_PRIORITY_SET(bVar0, 2);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
		}
	}
	else if (bParam3)
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		TASK_PRIORITY_SET(bVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
	}
	Function_428(bVar0, 20.0f, 1.0f, 1.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0.75f);
	MEMORY_CONSIDER_AS(bVar0, Global_34573, 5);
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, bVar0, 4);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bVar0, 2);
	if (bParam3)
	{
		if (DECOR_CHECK_EXIST(bVar1, "Core"))
		{
			iParam1->f_168 = bVar0;
		}
		else if (Global_13172[iParam1->f_36411].f_32 < 0.0f)
		{
			Global_13172[iParam1->f_36411].f_32 = (Global_13172[iParam1->f_36411].f_32 - 1.0f);
			DECOR_SET_BOOL(bVar0, "PreSaved", true);
		}
	}
	else
	{
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	}
}

var Function_427(bool bParam0, bool bParam1) //Position: 0x142A4 / 82596
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_428(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x142B1 / 82609
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

void Function_429(bool bParam0, bool bParam1) //Position: 0x142F8 / 82680
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[7]);
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[5]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[7], 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[5], 0);
	}
	return;
}

void Function_430(bool bParam0, bool bParam1) //Position: 0x1433E / 82750
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[0]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[0], 0);
	}
	return;
}

bool Function_431(var uParam0, int iParam1) //Position: 0x1436D / 82797
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_432(bool bParam0, int iParam1) //Position: 0x14389 / 82825
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3[4];
	bool bVar8;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	iVar2 = 0;
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar8 = GET_OBJECT_NAME(bVar1);
		if (Function_26(iParam1))
		{
			if (STRING_CONTAINS_STRING(bVar8, "_def"))
			{
				iVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
				iVar2++;
			}
		}
		else if (STRING_CONTAINS_STRING(bVar8, "_safe"))
		{
			iVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
			iVar2++;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return iVar3[(RAND_INT_RANGE(0, 100000) % iVar2)];
}

struct<32> Function_433(bool bParam0) //Position: 0x1442D / 82989
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_434(char* cParam0, char* cParam1, char* cParam2) //Position: 0x14497 / 83095
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_435() //Position: 0x144B6 / 83126
{
	return;
}

bool Function_436(int iParam0) //Position: 0x144BC / 83132
{
	if (Function_28(iParam0->f_356, 16))
	{
		return 1;
	}
	return Function_188(iParam0 + 192);
}

int Function_437(int iParam0) //Position: 0x144DB / 83163
{
	if (!Function_7(iParam0))
	{
		return 1;
	}
	return Function_419(&(Global_29008[iParam0]), 4);
}

var Function_438() //Position: 0x144F7 / 83191
{
	return HAS_STRING_TABLE_LOADED("graveyards");
}

void Function_439(bool bParam0) //Position: 0x1450D / 83213
{
	Function_440(&iLocal_336, bLocal_7, "chapel01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_440(&iLocal_336, bLocal_7, "chapel01", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_440(&iLocal_336, bLocal_7, "chapel01", 3, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_440(&iLocal_336, bLocal_7, "chapel01", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	return;
}

var Function_440(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x1459B / 83355
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_441(uParam0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, bParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(iParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar11)))
	{
		return 4294967295;
	}
	(*uParam0)[iVar05] = GET_DOOR_FROM_OBJECT(bVar11);
	if (bParam5)
	{
		Function_73(uParam0[iVar05], 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST((*uParam0)[iVar05], 1);
	}
	Function_73(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_73(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_73(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_441(int iParam0) //Position: 0x14687 / 83591
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (!IS_DOOR_VALID((*iParam0)[iVar05]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_442() //Position: 0x146B5 / 83637
{
	Function_443(StackVal, &uLocal_8, &uLocal_317, 4, 4294967295, 4);
	Function_443(&uLocal_8, &uLocal_317, 5, Local_147.f_28, 4294967295, 266);
	Function_443(&uLocal_8, &uLocal_317, 5, Local_147.f_68, 4294967295, 258);
	Function_443(&uLocal_8, &uLocal_317, 5, Local_147.f_72, 4294967295, 258);
	Function_443(&uLocal_8, &uLocal_317, 5, Local_147.f_76, 4294967295, 258);
	Function_443(&uLocal_8, &uLocal_317, 5, Local_147.f_80, 4294967295, 258);
	return;
}

void Function_443(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x1471F / 83743
{
	if (*uParam0 >= (*uParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(bParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	iParam4 = iParam4;
	uParam1[*uParam03]->f_4 = bParam3;
	(*uParam1)[*uParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*uParam0++;
}

void Function_444(int iParam0) //Position: 0x147FA / 83962
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_445(int iParam0, bool bParam1) //Position: 0x14809 / 83977
{
	bool bVar0;
	bool bVar1;
	
	if (Function_28(iParam0->f_356, 16))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	ITERATE_ON_PARTIAL_NAME(bVar0, "MoveRestrict");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_446(int iParam0, bool bParam1, bool bParam2) //Position: 0x14871 / 84081
{
	bool bVar0;
	bool bVar1;
	
	if (Function_28(iParam0->f_356, 16))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	ITERATE_ON_PARTIAL_NAME(bVar0, "SpawnRestrict");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	if (!Function_26(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(StackVal))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
		}
	}
	return;
}

var Function_447() //Position: 0x148FF / 84223
{
	return Local_108;
}

void Function_448(int iParam0) //Position: 0x14907 / 84231
{
	bLocal_7 = Function_449(Local_108, "coots", iParam0);
	return;
}

var Function_449(bool bParam0, char* cParam1, int iParam2) //Position: 0x1491E / 84254
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, cParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_450() //Position: 0x1493D / 84285
{
	return Function_451();
}

int Function_451() //Position: 0x14946 / 84294
{
	var uVar0;
	
	Function_452(3, 3);
	uVar0 = uVar0;
	Local_147 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (!IS_LAYOUTREF_VALID(Local_147))
	{
		Local_147 = CREATE_LAYOUT("CootsChapel_layout");
	}
	Local_147.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_region", 3, -1785.518f, 24.0941f, 2855.945f, 0.0f, 20.0f, 0.0f, 50.0f, 25.0f, 50.0001f);
	Local_147.f_28 = CREATE_VOLUME_SET_IN_LAYOUT(Local_147, "coov_church_set");
	(*&Local_147 + 8)[0] = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_church_main_chapel", 2, -1789.893f, 25.8545f, 2852.787f, 0.0f, 20.3847f, 0.0f, 6.533716f, 7.185509f, 17.1488f);
	ADD_TO_VOLUME_SET(Local_147.f_28, (*&Local_147 + 8)[0]);
	(*&Local_147 + 8)[1] = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_church_rooms2", 2, -1793.754f, 25.79757f, 2857.363f, 0.0f, 19.37619f, 0.0f, 4.932437f, 5.594979f, 6.661956f);
	ADD_TO_VOLUME_SET(Local_147.f_28, (*&Local_147 + 8)[1]);
	(*&Local_147 + 8)[2] = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_church_bck_room", 2, -1788.075f, 26.8661f, 2857.867f, 0.0f, 20.23496f, 0.0f, 7.067983f, 4.820869f, 3.81275f);
	ADD_TO_VOLUME_SET(Local_147.f_28, (*&Local_147 + 8)[2]);
	(*&Local_147 + 8)[3] = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_church_front_porch", 2, -1793.703f, 25.72257f, 2843.684f, 1.770297f, 22.35086f, 0.9407392f, 5.656374f, 5.426769f, 2.722607f);
	ADD_TO_VOLUME_SET(Local_147.f_28, (*&Local_147 + 8)[3]);
	Local_147.f_64 = CREATE_VOLUME_SET_IN_LAYOUT(Local_147, "coov_vultures_set");
	(*&Local_147 + 32)[0] = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_pop_vultures2", 3, -1780.068f, 34.45401f, 2864.857f, 0.0f, 20.0f, 0.0f, 4.164067f, 28.79622f, 4.291873f);
	ADD_TO_VOLUME_SET(Local_147.f_64, (*&Local_147 + 32)[0]);
	(*&Local_147 + 32)[1] = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_pop_vultures", 3, -1768.1f, 32.80341f, 2839.247f, 0.0f, 20.0f, 0.0f, 6.014821f, 24.53327f, 6.199431f);
	ADD_TO_VOLUME_SET(Local_147.f_64, (*&Local_147 + 32)[1]);
	(*&Local_147 + 32)[2] = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_pop_vultuers3", 3, -1802.182f, 26.63374f, 2842.637f, 0.0f, 20.0f, 0.0f, 4.036973f, 7.376061f, 3.307151f);
	ADD_TO_VOLUME_SET(Local_147.f_64, (*&Local_147 + 32)[2]);
	(*&Local_147 + 32)[3] = CREATE_VOLUME_IN_LAYOUT(Local_147, "nCylinder4", 3, -1805.36f, 24.09713f, 2872.041f, 0.0f, 20.0f, 0.0f, 6.860088f, 32.06005f, 4.968766f);
	ADD_TO_VOLUME_SET(Local_147.f_64, (*&Local_147 + 32)[3]);
	(*&Local_147 + 32)[4] = CREATE_VOLUME_IN_LAYOUT(Local_147, "nCylinder1", 3, -1813.237f, 24.09713f, 2858.151f, 0.0f, 20.0f, 0.0f, 6.860088f, 32.06005f, 4.968766f);
	ADD_TO_VOLUME_SET(Local_147.f_64, (*&Local_147 + 32)[4]);
	(*&Local_147 + 32)[5] = CREATE_VOLUME_IN_LAYOUT(Local_147, "nCylinder2", 3, -1761.424f, 24.09713f, 2848.518f, 0.0f, 20.0f, 0.0f, 6.860088f, 32.06005f, 4.968766f);
	ADD_TO_VOLUME_SET(Local_147.f_64, (*&Local_147 + 32)[5]);
	(*&Local_147 + 32)[6] = CREATE_VOLUME_IN_LAYOUT(Local_147, "nCylinder3", 3, -1767.435f, 24.09713f, 2874.551f, 0.0f, 20.0f, 0.0f, 6.860088f, 32.06005f, 4.968766f);
	ADD_TO_VOLUME_SET(Local_147.f_64, (*&Local_147 + 32)[6]);
	Local_147.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_abd_house1", 2, -1804.489f, 27.10587f, 2750.655f, 0.0f, 0.0f, 0.0f, 10.92896f, 7.066658f, 10.80309f);
	Local_147.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_abd_house2", 2, -1757.247f, 27.28255f, 2801.044f, 0.0f, 0.0f, 0.0f, 7.434853f, 7.991008f, 5.037548f);
	Local_147.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_abd_house3", 2, -1876f, 26.93258f, 2728.318f, 0.0f, 0.0f, 0.0f, 7.562485f, 5.027176f, 8.347751f);
	Local_147.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_abd_house4", 2, -1890.149f, 25.36248f, 2704.97f, 0.0f, -35.02938f, 0.0f, 6.897596f, 4.889504f, 5.126114f);
	Local_147.f_144 = CREATE_VOLUME_SET_IN_LAYOUT(Local_147, "coov_crows_set");
	(*&Local_147 + 84)[0] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder12", 3, -1764f, 29.14208f, 2868.377f, 0.0f, 20.0f, 0.0f, 3.980274f, 12.27519f, 5.739097f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[0]);
	(*&Local_147 + 84)[1] = CREATE_VOLUME_IN_LAYOUT(Local_147, "nCylinder5", 3, -1809.529f, 29.14208f, 2871.397f, 0.0f, 20.0f, 0.0f, 3.980274f, 12.27519f, 5.739097f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[1]);
	(*&Local_147 + 84)[2] = CREATE_VOLUME_IN_LAYOUT(Local_147, "nCylinder6", 3, -1796.498f, 29.14208f, 2875.382f, 0.0f, 20.0f, 0.0f, 3.980274f, 12.27519f, 5.739097f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[2]);
	(*&Local_147 + 84)[3] = CREATE_VOLUME_IN_LAYOUT(Local_147, "nCylinder7", 3, -1759.427f, 29.14208f, 2848.11f, 0.0f, 20.0f, 0.0f, 3.980274f, 12.27519f, 5.739097f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[3]);
	(*&Local_147 + 84)[4] = CREATE_VOLUME_IN_LAYOUT(Local_147, "nCylinder8", 3, -1814.701f, 29.14208f, 2847.058f, 0.0f, 20.0f, 0.0f, 3.980274f, 12.27519f, 5.739097f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[4]);
	(*&Local_147 + 84)[5] = CREATE_VOLUME_IN_LAYOUT(Local_147, "nCylinder9", 3, -1778.111f, 29.14208f, 2868.861f, 0.0f, 20.0f, 0.0f, 3.980274f, 12.27519f, 5.739097f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[5]);
	(*&Local_147 + 84)[6] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder10", 3, -1802.34f, 29.14208f, 2862.686f, 0.0f, 20.0f, 0.0f, 3.980274f, 12.27519f, 5.739097f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[6]);
	(*&Local_147 + 84)[7] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder11", 3, -1772.332f, 29.14208f, 2840.827f, 0.0f, 20.0f, 0.0f, 3.980274f, 12.27519f, 5.739097f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[7]);
	(*&Local_147 + 84)[8] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder39", 3, -1790.557f, 24.8034f, 2853.52f, 0.0f, 20.0f, 0.0f, 10.53282f, 14.56414f, 14.63171f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[8]);
	(*&Local_147 + 84)[9] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder34", 3, -1842.569f, 25.18892f, 2789.768f, 0.0f, 20.0f, 0.0f, 8.642062f, 7.830865f, 8.470125f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[9]);
	(*&Local_147 + 84)[10] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder35", 3, -1877.087f, 26.2377f, 2729.079f, 0.0f, 20.0f, 0.0f, 8.642062f, 7.830865f, 8.470125f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[10]);
	(*&Local_147 + 84)[11] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder36", 3, -1900.127f, 26.19918f, 2711.338f, 0.0f, 20.0f, 0.0f, 8.642062f, 7.830865f, 8.470125f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[11]);
	(*&Local_147 + 84)[12] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder37", 3, -1805.213f, 26.18672f, 2749.628f, 0.0f, 20.0f, 0.0f, 10.48037f, 7.830865f, 10.78617f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[12]);
	(*&Local_147 + 84)[13] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder38", 3, -1756.097f, 27.12459f, 2799.404f, 0.0f, 20.0f, 0.0f, 14.56298f, 7.830865f, 10.09194f);
	ADD_TO_VOLUME_SET(Local_147.f_144, (*&Local_147 + 84)[13]);
	Local_147.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_147, "coov_snakes_set");
	(*&Local_147 + 148)[0] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder17", 3, -1818.7f, 24.0941f, 2862.11f, 0.0f, 20.0f, 0.0f, 2.373678f, 2.345387f, 4.521883f);
	ADD_TO_VOLUME_SET(Local_147.f_172, (*&Local_147 + 148)[0]);
	(*&Local_147 + 148)[1] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder13", 3, -1808.88f, 24.0941f, 2841.824f, 0.0f, 20.0f, 0.0f, 2.373678f, 2.345387f, 4.521883f);
	ADD_TO_VOLUME_SET(Local_147.f_172, (*&Local_147 + 148)[1]);
	(*&Local_147 + 148)[2] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder14", 3, -1818.7f, 24.0941f, 2862.11f, 0.0f, 20.0f, 0.0f, 2.373678f, 2.345387f, 4.521883f);
	ADD_TO_VOLUME_SET(Local_147.f_172, (*&Local_147 + 148)[2]);
	(*&Local_147 + 148)[3] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder15", 3, -1753.891f, 24.0941f, 2862.11f, 0.0f, 20.0f, 0.0f, 2.373678f, 2.345387f, 4.521883f);
	ADD_TO_VOLUME_SET(Local_147.f_172, (*&Local_147 + 148)[3]);
	(*&Local_147 + 148)[4] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder16", 3, -1797.701f, 24.0941f, 2878.21f, 0.0f, 20.0f, 0.0f, 2.373678f, 2.345387f, 4.521883f);
	ADD_TO_VOLUME_SET(Local_147.f_172, (*&Local_147 + 148)[4]);
	Local_147.f_212 = CREATE_VOLUME_SET_IN_LAYOUT(Local_147, "coov_rabbits_set");
	(*&Local_147 + 176)[0] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder24", 3, -1757.547f, 24.11529f, 2874.453f, 0.0f, 20.0f, 0.0f, 5.776541f, 1.88908f, 3.142002f);
	ADD_TO_VOLUME_SET(Local_147.f_212, (*&Local_147 + 176)[0]);
	(*&Local_147 + 176)[1] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder23", 3, -1763.895f, 24.11529f, 2864.358f, 0.0f, 20.0f, 0.0f, 5.776541f, 1.88908f, 3.142002f);
	ADD_TO_VOLUME_SET(Local_147.f_212, (*&Local_147 + 176)[1]);
	(*&Local_147 + 176)[2] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder22", 3, -1811.275f, 24.11529f, 2856.734f, 0.0f, 20.0f, 0.0f, 5.776541f, 1.88908f, 3.142002f);
	ADD_TO_VOLUME_SET(Local_147.f_212, (*&Local_147 + 176)[2]);
	(*&Local_147 + 176)[3] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder21", 3, -1770.172f, 24.11529f, 2836f, 0.0f, 20.0f, 0.0f, 5.776541f, 1.88908f, 3.142002f);
	ADD_TO_VOLUME_SET(Local_147.f_212, (*&Local_147 + 176)[3]);
	(*&Local_147 + 176)[4] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder20", 3, -1805.128f, 24.11529f, 2874.453f, 0.0f, 20.0f, 0.0f, 5.776541f, 1.88908f, 3.142002f);
	ADD_TO_VOLUME_SET(Local_147.f_212, (*&Local_147 + 176)[4]);
	(*&Local_147 + 176)[5] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder19", 3, -1757.547f, 24.11529f, 2843.368f, 0.0f, 20.0f, 0.0f, 5.776541f, 1.88908f, 3.142002f);
	ADD_TO_VOLUME_SET(Local_147.f_212, (*&Local_147 + 176)[5]);
	(*&Local_147 + 176)[6] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder18", 3, -1783.435f, 24.11529f, 2874.453f, 0.0f, 20.0f, 0.0f, 5.776541f, 1.88908f, 3.142002f);
	ADD_TO_VOLUME_SET(Local_147.f_212, (*&Local_147 + 176)[6]);
	(*&Local_147 + 176)[7] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder25", 3, -1757.547f, 24.11529f, 2874.453f, 0.0f, 20.0f, 0.0f, 5.776541f, 1.88908f, 3.142002f);
	ADD_TO_VOLUME_SET(Local_147.f_212, (*&Local_147 + 176)[7]);
	Local_147.f_236 = CREATE_VOLUME_SET_IN_LAYOUT(Local_147, "coov_owls_set");
	(*&Local_147 + 216)[0] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder29", 3, -1802.821f, 23.90474f, 2842.227f, 0.0f, 20.0f, 0.0f, 2.876812f, 5.645661f, 2.80788f);
	ADD_TO_VOLUME_SET(Local_147.f_236, (*&Local_147 + 216)[0]);
	(*&Local_147 + 216)[1] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder26", 3, -1801.651f, 23.90474f, 2866.974f, 0.0f, 20.0f, 0.0f, 2.876812f, 5.645661f, 2.80788f);
	ADD_TO_VOLUME_SET(Local_147.f_236, (*&Local_147 + 216)[1]);
	(*&Local_147 + 216)[2] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder27", 3, -1766.998f, 23.90474f, 2837.912f, 0.0f, 20.0f, 0.0f, 2.876812f, 5.645661f, 2.80788f);
	ADD_TO_VOLUME_SET(Local_147.f_236, (*&Local_147 + 216)[2]);
	(*&Local_147 + 216)[3] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder28", 3, -1780.78f, 23.90474f, 2864.049f, 0.0f, 20.0f, 0.0f, 2.876812f, 5.645661f, 2.80788f);
	ADD_TO_VOLUME_SET(Local_147.f_236, (*&Local_147 + 216)[3]);
	Local_147.f_260 = CREATE_VOLUME_SET_IN_LAYOUT(Local_147, "coov_racoons_set");
	(*&Local_147 + 240)[0] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder33", 3, -1793.024f, 24.0941f, 2867.051f, 0.0f, 20.0f, 0.0f, 3.464828f, 7.636977f, 3.326022f);
	ADD_TO_VOLUME_SET(Local_147.f_260, (*&Local_147 + 240)[0]);
	(*&Local_147 + 240)[1] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder30", 3, -1772.763f, 24.0941f, 2849.425f, 0.0f, 20.0f, 0.0f, 3.464828f, 7.636977f, 3.326022f);
	ADD_TO_VOLUME_SET(Local_147.f_260, (*&Local_147 + 240)[1]);
	(*&Local_147 + 240)[2] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder31", 3, -1762.158f, 24.0941f, 2866.07f, 0.0f, 20.0f, 0.0f, 3.464828f, 7.636977f, 3.326022f);
	ADD_TO_VOLUME_SET(Local_147.f_260, (*&Local_147 + 240)[2]);
	(*&Local_147 + 240)[3] = CREATE_VOLUME_IN_LAYOUT(Local_147, "Cylinder32", 3, -1807.124f, 24.0941f, 2848.914f, 0.0f, 20.0f, 0.0f, 3.464828f, 7.636977f, 3.326022f);
	ADD_TO_VOLUME_SET(Local_147.f_260, (*&Local_147 + 240)[3]);
	Local_147.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_graveyard_vol", 2, -1785.547f, 23.09018f, 2859.256f, 0.8028672f, -157.644f, -2.567306f, 80.0778f, 24.2342f, 58.8811f);
	Local_147.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_147, "coov_graveyardExit", 2, -1785.547f, 23.09018f, 2859.256f, 0.8028672f, -157.644f, -2.567306f, 140.6954f, 24.2342f, 114.3077f);
	CREATE_POINT_IN_LAYOUT(Local_147, "coof_report_crime_road", -1832.186f, 21.52767f, 2761.121f, 0.0f, 0.0f, 0.0f);
	*(&Local_147 + 272) = { -1790.84f, 24.63191f, 2850.71f };
	*(&Local_147 + 272 + 12) = { 0.0f, 19.8483f, 0.0f };
	Local_147.f_296 = CREATE_POINT_IN_LAYOUT(Local_147, "coof_interiorPoint_church", -1790.84f, 24.63191f, 2850.71f, 0.0f, 19.8483f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_147, "coo_vista_cam_pos1", -1835.793f, 35.72f, 2832.312f, -4.914f, -106.184f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_147, "coo_vista_cam_pos2", -1837.374f, 27.155f, 2887.6f, -1.381f, -41.101f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_147, "coo_vista_cam_pos3", -1813.378f, 40.519f, 2899.532f, -7.912f, -38.781f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_147, "coo_vista_cam_pos4", -1728.119f, 28.017f, 2895.264f, -3.2f, 78.61f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_147, "coo_vista_cam_pos5", -1753.918f, 31.581f, 2784.02f, -6.478f, 147.332f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_147, "coo_vista_cam_pos6", -1807.283f, 25.045f, 2834.438f, 20.106f, -114.66f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_147, "coo_vista_cam_pos7", -1789.035f, 25.84f, 2839.085f, 47.024f, 124.252f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_147, "coo_vista_cam_pos8", -1805.974f, 36.017f, 2873.514f, -8.181f, -16.462f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_147, "coo_vista_cam_pos9", -1683.052f, 36.15f, 2906.98f, -6.383f, 56.004f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_147, "coo_vista_cam_pos10", -1761.432f, 26.45f, 2876.792f, 6.053f, 52.013f, 0.0f);
	*(&Local_147 + 300) = { -1793.186f, 24.63191f, 2848.563f };
	*(&Local_147 + 300 + 12) = { 0.0f, -0.3551953f, 0.0f };
	Local_147.f_324 = CREATE_POINT_IN_LAYOUT(Local_147, "coof_interiorSettlement01", -1793.186f, 24.63191f, 2848.563f, 0.0f, -0.3551953f, 0.0f);
	return 1;
}

void Function_452(int iParam0, int iParam1) //Position: 0x15D51 / 89425
{
	switch (iParam1)
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

void Function_453(var uParam0, int iParam1) //Position: 0x15D9A / 89498
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_454() //Position: 0x15DA9 / 89513
{
	return;
}

bool Function_455() //Position: 0x15DAF / 89519
{
	return 1;
}

void Function_456() //Position: 0x15DB6 / 89526
{
	return;
}

bool Function_457() //Position: 0x15DBC / 89532
{
	if (Function_459())
	{
		Function_120(1);
		Function_458();
		return 1;
	}
	return 0;
}

void Function_458() //Position: 0x15DD2 / 89554
{
	int iVar0;
	
	Local_361.f_12 = 2;
	Local_361.f_16 = 4;
	*(&Local_361 + 32) = { -1792.576f, 24.675f, 2850.352f };
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		(*&Local_361 + 52)[iVar0] = (*&Local_108 + 124)[iVar0];
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		(*&Local_361 + 76)[iVar0] = (*&Local_108 + 12)[iVar0];
		iVar0++;
	}
	Local_361.f_140 = StackVal;
	Local_361.f_152 = 1;
	if (Function_396(Global_30735) >= 0)
	{
		Local_361.f_144 = 0;
	}
	else
	{
		Local_361.f_144 = 1;
	}
	Local_361.f_148 = 4;
	return;
}

bool Function_459() //Position: 0x15E6F / 89711
{
	var uVar0;
	
	Function_452(3, 3);
	uVar0 = uVar0;
	Local_108 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (!IS_LAYOUTREF_VALID(Local_108))
	{
		Local_108 = CREATE_LAYOUT("CootsChapel_layout");
	}
	Local_108.f_4 = CREATE_POINT_IN_LAYOUT(Local_108, "gy_Boss_Spawn", -1762.437f, 24.17636f, 2847.037f, 0.0f, 32.4143f, 0.0f);
	Local_108.f_8 = CREATE_OBJECTSET_IN_LAYOUT("zombieSpawnsSet", Local_108, 8, 0);
	(*&Local_108 + 12)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_0", -1764.691f, 24.15298f, 2841.853f, 0.0f, 28.84385f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[0]);
	(*&Local_108 + 12)[1] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_2", -1764.984f, 24.03647f, 2847.887f, 0.0f, 21.41122f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[1]);
	(*&Local_108 + 12)[2] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_3", -1767.292f, 24.19904f, 2848.934f, 0.0f, 17.73694f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[2]);
	(*&Local_108 + 12)[3] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_4", -1770.447f, 24.20039f, 2849.896f, 0.0f, 23.70994f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[3]);
	(*&Local_108 + 12)[4] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_5", -1768.674f, 24.16245f, 2843.152f, -0.7955891f, 19.86011f, -1.67975f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[4]);
	(*&Local_108 + 12)[5] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_6", -1771.174f, 24.03451f, 2844.251f, 0.0f, 16.18531f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[5]);
	(*&Local_108 + 12)[6] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_7", -1773.385f, 24.16241f, 2844.997f, 0.0f, 14.59764f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[6]);
	(*&Local_108 + 12)[7] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_8", -1769.245f, 24.08986f, 2871.441f, 0.0f, 27.69567f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[7]);
	(*&Local_108 + 12)[8] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_9", -1770.976f, 24.21327f, 2866.501f, 0.0f, 26.03356f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[8]);
	(*&Local_108 + 12)[9] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_10", -1773.651f, 24.23312f, 2871.46f, 0.0f, 25.88277f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[9]);
	(*&Local_108 + 12)[10] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_11", -1776.227f, 24.09807f, 2866.808f, 0.0f, 20.40146f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[10]);
	(*&Local_108 + 12)[11] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_12", -1776.979f, 24.23426f, 2872.509f, 0.0f, 13.98659f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[11]);
	(*&Local_108 + 12)[12] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_13", -1778.91f, 24.24636f, 2867.78f, 0.0f, 19.443f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[12]);
	(*&Local_108 + 12)[13] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_14", -1780.13f, 24.09412f, 2873.933f, 0.0f, 31.42674f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[13]);
	(*&Local_108 + 12)[14] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_15", -1782.18f, 24.24489f, 2869.132f, 0.0f, 14.08117f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[14]);
	(*&Local_108 + 12)[15] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_16", -1787.9f, 24.2051f, 2872.357f, 0.0f, 12.41054f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[15]);
	(*&Local_108 + 12)[16] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_17", -1791.145f, 24.20211f, 2873.433f, 0.0f, 14.36137f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[16]);
	(*&Local_108 + 12)[17] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_18", -1793.283f, 24.2269f, 2868.604f, 0.0f, 13.86759f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[17]);
	(*&Local_108 + 12)[18] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_19", -1806.186f, 24.08918f, 2870.69f, 0.0f, -72.12144f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[18]);
	(*&Local_108 + 12)[19] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_20", -1808.058f, 24.23553f, 2868.085f, 0.0f, -70.54736f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[19]);
	(*&Local_108 + 12)[20] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_21", -1809.593f, 24.23326f, 2864.969f, 0.0f, -70.55991f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[20]);
	(*&Local_108 + 12)[21] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_22", -1805.49f, 24.23457f, 2863.169f, 0.0f, -70.88947f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[21]);
	(*&Local_108 + 12)[22] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_23", -1810.657f, 24.1228f, 2862.678f, 0.0f, -71.75198f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[22]);
	(*&Local_108 + 12)[23] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_24", -1811.402f, 24.24503f, 2860.427f, 0.0f, -72.02574f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[23]);
	(*&Local_108 + 12)[24] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_25", -1806.86f, 24.22989f, 2860.032f, 0.0f, -72.15488f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[24]);
	(*&Local_108 + 12)[25] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_26", -1804.038f, 24.19606f, 2865.985f, 0.0f, -77.63298f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, (*&Local_108 + 12)[25]);
	Local_108.f_120 = CREATE_OBJECTSET_IN_LAYOUT("coffinSpawnsSet", Local_108, 8, 0);
	(*&Local_108 + 124)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_0", -1788.89f, 24.09503f, 2865.25f, 0.0f, -94.68063f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 124)[0], Local_108.f_120);
	(*&Local_108 + 124)[1] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_1", -1797.018f, 24.07969f, 2871.146f, 0.0f, 13.5915f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 124)[1], Local_108.f_120);
	(*&Local_108 + 124)[2] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_2", -1769.876f, 24.09361f, 2861.483f, 0.0f, 34.14956f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 124)[2], Local_108.f_120);
	(*&Local_108 + 124)[3] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_3", -1772.294f, 24.0665f, 2840.76f, 0.0f, 83.19403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 124)[3], Local_108.f_120);
	(*&Local_108 + 124)[4] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_4", -1801.449f, 24.09376f, 2860.05f, 0.0f, -94.68063f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 124)[4], Local_108.f_120);
}

void Function_460(bool bParam0, bool bParam1) //Position: 0x168C1 / 92353
{
	char* cVar0;
	
	if (Global_3380 || Function_56(0x8000000))
	{
		return;
	}
	cVar0 = Function_59(bParam0);
	if ((bParam0 != Global_30679[1] || bParam0 != Global_30707[1]) || bParam0 != Global_30717[1])
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else if (bParam1)
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

void Function_461(int iParam0, bool bParam1, bool bParam2) //Position: 0x16957 / 92503
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_45(iParam0 + 356, 16);
	if (!bParam2)
	{
		if (!Function_462(bParam1))
		{
			Function_219(iParam0 + 356, 16);
			return;
		}
	}
	iParam0->f_364 = Function_221(0, bParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_116(&iVar1, bParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_399(iParam0 + 192, iVar1[iVar0], 3, 1);
		}
		iVar0++;
	}
	if (bParam2)
	{
		Function_193(iParam0 + 192, "tense_with_guns", 5, 1);
		Function_193(iParam0 + 192, "custom/tense_with_guns", 8, 1);
	}
	else
	{
		iParam0->f_188 = 1;
	}
	Function_188(iParam0 + 192);
	if (HUD_IS_FADED())
	{
		Function_61(bParam1, Function_26(bParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

bool Function_462(int iParam0) //Position: 0x16A52 / 92754
{
	if ((iParam0 != Global_30668[2] || iParam0 != Global_30658[4]) || iParam0 != Global_30658[2])
	{
		return 0;
	}
	if ((iParam0 != Global_30685[0] && (!Function_465(&Global_3422[340] + 128, 2) || Global_3380)) && !Function_220(3, 0))
	{
		return 0;
	}
	if (Global_3365)
	{
		if (!Function_464(0))
		{
			return 0;
		}
		if ((!Function_53(24) || Function_463(24)) && iParam0 != Global_30693[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_463(int iParam0) //Position: 0x16ACD / 92877
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_464(int iParam0) //Position: 0x16AE2 / 92898
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_51(iParam0)11].f_12 < 0;
}

bool Function_465(int iParam0, int iParam1) //Position: 0x16B48 / 93000
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_466() //Position: 0x16B64 / 93028
{
	SET_DUST_LEVEL(3);
	REQUEST_STRING_TABLE("graveyards");
	return;
}

void Function_467(bool bParam0, var uParam1) //Position: 0x16B7F / 93055
{
	if (!Function_56(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

