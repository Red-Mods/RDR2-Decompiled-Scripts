//Decompiled with MagicRDR v1.0
//Function Count : 125
//Statics Count : 685
//Natives Count : 165
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	struct<289> Local_6 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<1069> Local_408 = { 0, 0, 3, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_124(&Var0, 3);
	Function_123();
	iLocal_0 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iLocal_1 = 1000;
		switch (iLocal_0)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_0 = 1;
				}
				iLocal_1 = 0;
				break;
			
			case 0x00000001:
				if (Function_120())
				{
					iLocal_0 = 2;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_111())
				{
					Function_110();
					Function_109(&(Global_29008[iScriptParam_0]), 32);
					iLocal_0 = 3;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_1 = 500;
				if (Function_106())
				{
					Function_109(&(Global_29008[iScriptParam_0]), 16);
					iLocal_0 = 4;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000004:
				Function_105(&uLocal_3);
				Function_102(iScriptParam_0);
				iLocal_0 = 5;
				iLocal_1 = 0;
				break;
			
			case 0x00000005:
				if (Function_101())
				{
					Function_94();
					iLocal_0 = 6;
					iLocal_1 = 0;
				}
				else
				{
					iLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_93(iScriptParam_0);
				Function_92();
				Function_109(&(Global_29008[iScriptParam_0]), 8);
				if (Function_91(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_90(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				iLocal_1 = 0;
				break;
			
			case 0x00000007:
				Function_89(iScriptParam_0);
				iLocal_0 = 8;
				iLocal_1 = 0;
				break;
			
			case 0x00000008:
				if (!Function_88(iScriptParam_0))
				{
					Function_82(iScriptParam_0);
					Function_81(64);
				}
				Function_109(&(Global_29008[iScriptParam_0]), 512);
				iLocal_0 = 9;
				iLocal_1 = 0;
				break;
			
			case 0x00000009:
				if (!Function_88(iScriptParam_0))
				{
					Function_79(Function_80(), iScriptParam_0);
				}
				Function_78(iScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
				Function_77(&Var0, 5.0f);
				Function_109(&(Global_29008[iScriptParam_0]), 4);
				iLocal_0 = 10;
				iLocal_1 = 0;
				break;
			
			case 0x0000000A:
				Function_65(iScriptParam_0);
				if (!Function_88(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						iLocal_1 = 0;
					}
					Function_26(&uLocal_3, &uLocal_676, Function_64(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_91(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_0 = 6;
					iLocal_1 = 0;
				}
				break;
			
			case 0x0000000B:
				break;
		}
		WAIT(iLocal_1);
	}
	Function_24();
	Function_18();
	Function_10(&uLocal_3, &uLocal_676);
	Function_8();
	Function_4(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_81(64);
	Function_90(&(Global_29008[iScriptParam_0]), 32);
	Function_90(&(Global_29008[iScriptParam_0]), 64);
	Function_90(&(Global_29008[iScriptParam_0]), 512);
	Function_90(&(Global_29008[iScriptParam_0]), 16);
	Function_90(&(Global_29008[iScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_77(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	SET_DUST_LEVEL(1);
	REMOVE_STRING_TABLE("graveyards");
	Function_2(&(Global_26282[34]));
	return;
}

void Function_2(int iParam0) //Position: 0x30A / 778
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

void Function_3(bool bParam0) //Position: 0x336 / 822
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

void Function_4(int iParam0) //Position: 0x37B / 891
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

void Function_5(int iParam0) //Position: 0x3B1 / 945
{
	if (!Function_6(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_6(int iParam0) //Position: 0x3D3 / 979
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_7(int iParam0) //Position: 0x3E9 / 1001
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_8() //Position: 0x3FF / 1023
{
	HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(Local_408.f_208);
	Function_9();
	return;
}

void Function_9() //Position: 0x411 / 1041
{
	RELEASE_LAYOUT_REF(Local_408);
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x41D / 1053
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_17(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_16(iParam1[iVar03], 4);
		}
		if (Function_17(iParam1[iVar03], 8))
		{
			Function_11(0, 0, 30);
			Function_16(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_11(int iParam0, int iParam1, int iParam2) //Position: 0x475 / 1141
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
		Function_12(Global_16524, bVar0, 1);
	}
	return;
}

void Function_12(int iParam0, bool bParam1, bool bParam2) //Position: 0x55B / 1371
{
	int iVar0;
	
	Function_15(iParam0);
	Function_14(bParam1);
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
	Function_13();
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

void Function_13() //Position: 0x6D4 / 1748
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_14(bool bParam0) //Position: 0x6E0 / 1760
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

void Function_15(int iParam0) //Position: 0x726 / 1830
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

void Function_16(int iParam0, int iParam1) //Position: 0x76C / 1900
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x786 / 1926
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_18() //Position: 0x7A3 / 1955
{
	Function_19();
	return;
}

void Function_19() //Position: 0x7AC / 1964
{
	Function_20(&Local_79 + 4);
	RELEASE_LAYOUT_REF(Local_79);
	return;
}

void Function_20(int iParam0) //Position: 0x7BE / 1982
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_21(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x7E4 / 2020
{
	if (Function_23(uParam0[iParam13], 4))
	{
		if (Function_23(uParam0[iParam13], 1))
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
			Function_22(uParam0[iParam13], 1);
			Function_22(uParam0[iParam13], 2);
			Function_22(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x912 / 2322
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_23(int iParam0, int iParam1) //Position: 0x92C / 2348
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_24() //Position: 0x949 / 2377
{
	Function_25();
	return;
}

void Function_25() //Position: 0x952 / 2386
{
	Function_20(&Local_6 + 4);
	RELEASE_LAYOUT_REF(Local_6);
	return;
}

void Function_26(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x964 / 2404
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_63(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_27(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_27(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x9E5 / 2533
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_62(iParam0))
	{
		return 0;
	}
	Function_90(&(Global_29008[iParam2]), 4194304);
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
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_60(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_59(iParam0, 8);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_11(0, 0, 0);
						}
						else
						{
							Function_11(0, 0, 30);
						}
						Function_16(iParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_59(iParam0, 4);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_16(iParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_7(iParam2)) && !Function_58(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_57(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 16))
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
							if (Function_56())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_59(iParam0, 16);
								Function_48(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 16))
					{
						Function_16(iParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_17(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_59(iParam0, 2);
			}
			else
			{
				Function_16(iParam0, 2);
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
				if (!Function_91(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_17(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_47(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_59(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_7(iParam2))
					{
						Function_46(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_28(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_28(int iParam0) //Position: 0xDFE / 3582
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_91(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_109(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_33(473, 1, 0, 0);
		iVar0 = Function_32(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_33(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_33(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_33(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_31(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_31(7, 30);
	}
	if (Function_30(473) <= Function_29(473))
	{
		if (!Function_56())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_29(int iParam0) //Position: 0xEFD / 3837
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_30(int iParam0) //Position: 0xF3A / 3898
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xF73 / 3955
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

var Function_32(int iParam0) //Position: 0xFDA / 4058
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

int Function_33(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1032 / 4146
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
	Function_45(iParam0, TO_FLOAT(bParam1), 1);
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_34(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_34(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1252 / 4690
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_29(390))), 32);
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
					bVar19 = (Function_30(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_30(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_42(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_39(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_36(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_35(), &Var9);
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

var Function_35() //Position: 0x187F / 6271
{
	int iVar0;
	
	return iVar0;
}

var Function_36(int iParam0) //Position: 0x1887 / 6279
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_37(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1898 / 6296
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_38(char* cParam0, bool bParam1) //Position: 0x198D / 6541
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_39(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x19A6 / 6566
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_41(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_40(Function_41(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_40(int iParam0, int iParam1) //Position: 0x1A0B / 6667
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_41(int iParam0, bool bParam1) //Position: 0x1A1D / 6685
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_42(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1A2F / 6703
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
	if (((Function_43(iParam0) != 19 || Function_43(iParam0) != 17) || Function_43(iParam0) != 10) || Function_43(iParam0) != 9)
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

int Function_43(int iParam0) //Position: 0x1B5F / 7007
{
	return Global_35278[iParam020].f_48;
}

void Function_44(int iParam0) //Position: 0x1B6E / 7022
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

int Function_45(int iParam0, float fParam1, bool bParam2) //Position: 0x1D08 / 7432
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
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
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

void Function_46(var uParam0, int iParam1) //Position: 0x1F4C / 8012
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_47(struct<5> Param0) //Position: 0x1F59 / 8025
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_48(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1F7F / 8063
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	
	if (!Function_55(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_54(iParam1))
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
	if (!Function_51(1))
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
			Function_49();
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

void Function_49() //Position: 0x220F / 8719
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_50(bVar0, iVar1);
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

void Function_50(bool bParam0, bool bParam1) //Position: 0x2272 / 8818
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

bool Function_51(bool bParam0) //Position: 0x22A1 / 8865
{
	if (Function_57(256))
	{
		return 0;
	}
	if (Function_57(262144))
	{
		return 0;
	}
	if (Function_53())
	{
		return 0;
	}
	if (!Function_57(1))
	{
		return 0;
	}
	if (!Function_57(4096))
	{
		return 0;
	}
	if (bParam0 && Function_52(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_57(2048))
	{
		return 0;
	}
	if (Function_56() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_52(int iParam0) //Position: 0x2317 / 8983
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_53() //Position: 0x2328 / 9000
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

bool Function_54(int iParam0) //Position: 0x2341 / 9025
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x2357 / 9047
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_56() //Position: 0x236C / 9068
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_57(int iParam0) //Position: 0x2375 / 9077
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_58(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2393 / 9107
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

void Function_59(int iParam0, int iParam1) //Position: 0x2437 / 9271
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_60(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2448 / 9288
{
	int iVar0;
	bool bVar1;
	
	Function_15(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_61(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_12(StackVal, bVar1, bParam4);
		}
	}
}

void Function_61(int iParam0, int iParam1) //Position: 0x24BA / 9402
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_15(iParam0);
	Function_14(iVar0);
	PRINTNL();
	Function_12(iParam0, iVar0, iParam1);
	return;
}

bool Function_62(int iParam0) //Position: 0x24DF / 9439
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

bool Function_63(int iParam0) //Position: 0x24FC / 9468
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_64() //Position: 0x2518 / 9496
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(int iParam0) //Position: 0x252D / 9517
{
	iParam0 = iParam0;
	Function_66(&(Global_26282[34]), "OFG", 20, Local_6, 3);
	return;
}

void Function_66(int iParam0, char* cParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x254B / 9547
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
			if (!Function_75(iParam0, 63))
			{
				if (Function_74(76) || Function_73(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_72(cParam1, iParam0, 3, bParam3);
						Function_69(iParam0, 63);
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
			Function_68();
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
			Function_67();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_75(iParam0, 63))
		{
			if (Function_74(76) || Function_73(76))
			{
				Function_72(cParam1, iParam0, 3, bParam3);
				Function_69(iParam0, 63);
			}
		}
	}
	iParam0->f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_72(cParam1, iParam0, bVar0, bParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_67() //Position: 0x2746 / 10054
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_26282[34] = 0;
	Global_26282[34].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_69(&(Global_26282[34]), bVar0);
		bVar0++;
	}
	return;
}

void Function_68() //Position: 0x278D / 10125
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_26282[14] = 0;
	Global_26282[14].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_69(&(Global_26282[14]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_69(int iParam0, bool bParam1) //Position: 0x27DF / 10207
{
	if (bParam1 <= 32)
	{
		Function_70(iParam0, Function_71(bParam1));
	}
	else
	{
		Function_70(iParam0 + 4, Function_71((bParam1 - 32)));
	}
	return;
}

void Function_70(var uParam0, int iParam1) //Position: 0x2808 / 10248
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_71(bool bParam0) //Position: 0x2817 / 10263
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_72(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2823 / 10275
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
		if (bVar5 != 0 || Function_75(iParam1, bParam2))
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

int Function_73(int iParam0) //Position: 0x28C3 / 10435
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_74(int iParam0) //Position: 0x28D8 / 10456
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_75(int iParam0, bool bParam1) //Position: 0x28ED / 10477
{
	if (bParam1 <= 32)
	{
		return Function_76(*iParam0, Function_71(bParam1));
	}
	return Function_76(StackVal, Function_71((bParam1 - 32)));
}

bool Function_76(bool bParam0, int iParam1) //Position: 0x2918 / 10520
{
	return (bParam0 && iParam1) == 0;
}

void Function_77(bool bParam0, float fParam1) //Position: 0x2925 / 10533
{
	if (!Function_63(128))
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

void Function_78(int iParam0) //Position: 0x2963 / 10595
{
	if (!Function_7(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (((iParam0 != Global_30628[0] || iParam0 != Global_30628[1]) || iParam0 != Global_30628[2]) || iParam0 != Global_30628[3])
	{
		Global_29004 = 0;
	}
	else if ((iParam0 != Global_30633[0] || iParam0 != Global_30633[2]) || iParam0 != Global_30633[1])
	{
		Global_29004 = 1;
	}
	else if (iParam0 != Global_30637[1] || iParam0 != Global_30637[0])
	{
		Global_29004 = 2;
	}
	return;
}

void Function_79(bool bParam0, bool bParam1) //Position: 0x29F5 / 10741
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
		Function_46(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_56())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

var Function_80() //Position: 0x2AEF / 10991
{
	return Local_6;
}

void Function_81(int iParam0) //Position: 0x2AF7 / 10999
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_82(bool bParam0) //Position: 0x2B0A / 11018
{
	Function_83(StackVal, 0, 0.25f, 0, Local_6, !Function_87(&Global_30640));
	return;
}

void Function_83(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2B2C / 11052
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
		Function_86();
	}
	if (bParam5)
	{
		Function_84(1048576);
	}
}

void Function_84(int iParam0) //Position: 0x2C3F / 11327
{
	Function_85(&Global_28842, iParam0);
	return;
}

void Function_85(var uParam0, var uParam1) //Position: 0x2C4D / 11341
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_86() //Position: 0x2C68 / 11368
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_84(16384);
	}
	return;
}

bool Function_87(int iParam0) //Position: 0x2C84 / 11396
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_7((*iParam0)[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_29008[(*iParam0)[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_88(int iParam0) //Position: 0x2CD1 / 11473
{
	if (!Function_7(iParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (iParam0 == Global_30628[0])
	{
		return Function_87(&Global_30640);
	}
	if (iParam0 == Global_30628[1])
	{
		return Function_87(&Global_30658);
	}
	if (iParam0 == Global_30628[2])
	{
		return Function_87(&Global_30668);
	}
	if (iParam0 == Global_30628[3])
	{
		return Function_87(&Global_30679);
	}
	if (iParam0 == Global_30633[0])
	{
		return Function_87(&Global_30685);
	}
	if (iParam0 == Global_30633[2])
	{
		return Function_87(&Global_30693);
	}
	if (iParam0 == Global_30633[1])
	{
		return Function_87(&Global_30707);
	}
	if (iParam0 == Global_30637[1])
	{
		return Function_87(&Global_30723);
	}
	if (iParam0 == Global_30637[0])
	{
		return Function_87(&Global_30717);
	}
	return 0;
}

void Function_89(int iParam0) //Position: 0x2DAE / 11694
{
	iParam0 = iParam0;
	return;
}

void Function_90(var uParam0, int iParam1) //Position: 0x2DB8 / 11704
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_91(int iParam0, int iParam1) //Position: 0x2DCF / 11727
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_92() //Position: 0x2DEB / 11755
{
	return;
}

void Function_93(var uParam0) //Position: 0x2DF1 / 11761
{
	uParam0 = uParam0;
	return;
}

void Function_94() //Position: 0x2DFB / 11771
{
	Function_95(Global_30628[0]);
	Global_29004 = 0;
	return;
}

void Function_95(int iParam0) //Position: 0x2E0E / 11790
{
	int iVar0;
	
	iVar0 = Function_96(111, 111, 5);
	if (iParam0 != Global_30628[0] && !Function_76(Global_13172[iVar011].f_20, 8388608))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[0]);
	}
	else if (iParam0 != Global_30628[2] && !Function_76(Global_13172[iVar011].f_20, 4194304))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[2]);
	}
	else if (iParam0 != Global_30628[1] && !Function_76(Global_13172[iVar011].f_20, 0x1000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[1]);
	}
	else if (iParam0 != Global_30628[3] && !Function_76(Global_13172[iVar011].f_20, 0x2000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[3]);
	}
	else if (iParam0 != Global_30633[2] && !Function_76(Global_13172[iVar011].f_20, 0x40000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[2]);
	}
	else if (iParam0 != Global_30633[0] && !Function_76(Global_13172[iVar011].f_20, 0x10000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[0]);
	}
	else if (iParam0 != Global_30633[1] && !Function_76(Global_13172[iVar011].f_20, 0x20000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[1]);
	}
	else if (iParam0 != Global_30637[1] && !Function_76(Global_13172[iVar011].f_20, 0x4000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[1]);
	}
	else if (iParam0 != Global_30637[0] && !Function_76(Global_13172[iVar011].f_20, 0x8000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[0]);
	}
	return;
}

int Function_96(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3046 / 12358
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_100(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_97(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_97(bParam0, bParam1, bParam2, 4294967295);
}

int Function_97(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x30A4 / 12452
{
	var uVar0;
	
	if (!Function_99(bParam2))
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
	uVar0 = Function_100(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_98(uVar0);
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

int Function_98(int iParam0) //Position: 0x31F9 / 12793
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

bool Function_99(int iParam0) //Position: 0x3237 / 12855
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_100(int iParam0, int iParam1, bool bParam2) //Position: 0x324C / 12876
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_101() //Position: 0x326C / 12908
{
	return HAS_STRING_TABLE_LOADED("graveyards");
}

void Function_102(int iParam0) //Position: 0x3282 / 12930
{
	Function_104(StackVal, &uLocal_3, &uLocal_676, 2, 4294967295, 0);
	Function_104(&uLocal_3, &uLocal_676, 5, Local_408.f_256, 4294967295, 0);
	Function_103(Local_408.f_256, 20);
	return;
}

void Function_103(bool bParam0, bool bParam1) //Position: 0x32B8 / 12984
{
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", (32 || DECOR_GET_INT(bParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", 32);
	}
	DECOR_SET_INT(bParam0, "customweather", bParam1);
	return;
}

void Function_104(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x331F / 13087
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

void Function_105(var uParam0) //Position: 0x33FA / 13306
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_106() //Position: 0x3409 / 13321
{
	if (Function_107())
	{
		HORSE_ADD_REPULSION_EXCLUSION_VOLUME(Local_408.f_208);
		return 1;
	}
	return 0;
}

bool Function_107() //Position: 0x3421 / 13345
{
	var uVar0;
	
	Function_108(3, 3);
	uVar0 = uVar0;
	Local_408 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
	if (!IS_LAYOUTREF_VALID(Local_408))
	{
		Local_408 = CREATE_LAYOUT("ChollaSprings_layout");
	}
	Local_408.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_408, "cho_v_robbery_bank", 2, -2129.407f, 16.70768f, 2629.63f, 0.0f, 0.0f, 0.0f, 8.191952f, 4.770277f, 12.96974f);
	Local_408.f_24 = CREATE_VOLUME_SET_IN_LAYOUT(Local_408, "chov_flk_SE_set");
	(*&Local_408 + 8)[0] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote13", 3, -2007.02f, 44.86926f, 3521.066f, 0.0f, 99.33791f, 0.0f, 152.3102f, 72.87077f, 393.4008f);
	ADD_TO_VOLUME_SET(Local_408.f_24, (*&Local_408 + 8)[0]);
	(*&Local_408 + 8)[1] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote11", 3, -2286.051f, 71.85783f, 3168.56f, 0.0f, 114.533f, 0.0f, 231.7098f, 72.87077f, 241.9312f);
	ADD_TO_VOLUME_SET(Local_408.f_24, (*&Local_408 + 8)[1]);
	(*&Local_408 + 8)[2] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote6", 3, -1403.146f, 79.01429f, 3179.861f, 0.0f, 20.0f, 0.0f, 315.3113f, 72.87077f, 89.50647f);
	ADD_TO_VOLUME_SET(Local_408.f_24, (*&Local_408 + 8)[2]);
	Local_408.f_72 = CREATE_VOLUME_SET_IN_LAYOUT(Local_408, "chov_flk_BIRD_set");
	(*&Local_408 + 28)[0] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_bird9", 2, -1958.434f, 101.0974f, 2226.605f, 0.0f, 0.0f, 0.0f, 533.0086f, 265.0622f, 533.0086f);
	ADD_TO_VOLUME_SET(Local_408.f_72, (*&Local_408 + 28)[0]);
	(*&Local_408 + 28)[1] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_bird8", 2, -1918.184f, 104.9177f, 2746.359f, 0.0f, 0.0f, 0.0f, 533.0086f, 265.0622f, 533.0086f);
	ADD_TO_VOLUME_SET(Local_408.f_72, (*&Local_408 + 28)[1]);
	(*&Local_408 + 28)[2] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_bird7", 2, -1721.521f, 124.7826f, 3177.619f, 0.0f, 0.0f, 0.0f, 533.0086f, 265.0622f, 533.0086f);
	ADD_TO_VOLUME_SET(Local_408.f_72, (*&Local_408 + 28)[2]);
	(*&Local_408 + 28)[3] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_bird6", 2, -2421.43f, 99.94559f, 2296.987f, 0.0f, 0.0f, 0.0f, 533.0086f, 265.0622f, 533.0086f);
	ADD_TO_VOLUME_SET(Local_408.f_72, (*&Local_408 + 28)[3]);
	(*&Local_408 + 28)[4] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_bird5", 2, -3326.428f, 99.94559f, 2311.53f, 0.0f, 0.0f, 0.0f, 533.0086f, 265.0622f, 533.0086f);
	ADD_TO_VOLUME_SET(Local_408.f_72, (*&Local_408 + 28)[4]);
	(*&Local_408 + 28)[5] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_bird4", 2, -2253.922f, 99.94559f, 3297.425f, 0.0f, 0.0f, 0.0f, 533.0086f, 265.0622f, 533.0086f);
	ADD_TO_VOLUME_SET(Local_408.f_72, (*&Local_408 + 28)[5]);
	(*&Local_408 + 28)[6] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_bird3", 2, -2995.438f, 99.94559f, 2847.024f, 0.0f, 0.0f, 0.0f, 533.0086f, 265.0622f, 533.0086f);
	ADD_TO_VOLUME_SET(Local_408.f_72, (*&Local_408 + 28)[6]);
	(*&Local_408 + 28)[7] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_bird2", 2, -2442.531f, 124.5297f, 2840.813f, 0.0f, 0.0f, 0.0f, 533.0086f, 265.0622f, 533.0086f);
	ADD_TO_VOLUME_SET(Local_408.f_72, (*&Local_408 + 28)[7]);
	(*&Local_408 + 28)[8] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_bird1", 2, -2797.079f, 146.3613f, 2340.662f, 0.0f, 0.0f, 0.0f, 533.0086f, 265.0622f, 533.0086f);
	ADD_TO_VOLUME_SET(Local_408.f_72, (*&Local_408 + 28)[8]);
	(*&Local_408 + 28)[9] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_bird10", 2, -1744.0f, 64.80349f, 3761.037f, 0.0f, 0.0f, 0.0f, 483.619f, 284.8854f, 636.4444f);
	ADD_TO_VOLUME_SET(Local_408.f_72, (*&Local_408 + 28)[9]);
	Local_408.f_88 = CREATE_VOLUME_SET_IN_LAYOUT(Local_408, "chov_flk_NW_set");
	(*&Local_408 + 76)[0] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote16", 3, -3405.162f, 132.1931f, 2282.319f, 0.0f, 20.0f, 0.0f, 483.8218f, 124.0656f, 251.9133f);
	ADD_TO_VOLUME_SET(Local_408.f_88, (*&Local_408 + 76)[0]);
	(*&Local_408 + 76)[1] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote15", 3, -2627.713f, 85.36726f, 2137.038f, 0.0f, 12.66908f, 0.0f, 337.0677f, 72.87077f, 171.2465f);
	ADD_TO_VOLUME_SET(Local_408.f_88, (*&Local_408 + 76)[1]);
	Local_408.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_corr_g", 2, -2162.67f, 17.85944f, 2529.48f, 0.0f, 0.0f, 0.0f, 21.95249f, 6.09781f, 18.1392f);
	Local_408.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_corr_g1", 3, -3256.318f, 17.42523f, 2684.909f, 0.0f, -4.000802f, 0.0f, 19.15676f, 3.784842f, 14.37248f);
	Local_408.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_408, "chov_flk_CENTER_set");
	(*&Local_408 + 100)[0] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote14", 3, -3470.75f, 57.58878f, 2907.83f, 0.0f, 60.3094f, 0.0f, 273.8005f, 72.87077f, 432.1263f);
	ADD_TO_VOLUME_SET(Local_408.f_132, (*&Local_408 + 100)[0]);
	(*&Local_408 + 100)[1] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote12", 3, -2857.875f, 45.37122f, 2931.935f, 0.0f, 0.5088242f, 0.0f, 370.2651f, 72.87077f, 163.3423f);
	ADD_TO_VOLUME_SET(Local_408.f_132, (*&Local_408 + 100)[1]);
	(*&Local_408 + 100)[2] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote10", 3, -2030.104f, 64.89014f, 2199.561f, 0.0f, 20.0f, 0.0f, 289.1952f, 72.87077f, 305.7238f);
	ADD_TO_VOLUME_SET(Local_408.f_132, (*&Local_408 + 100)[2]);
	(*&Local_408 + 100)[3] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote9", 3, -1862.307f, 69.70703f, 2537.985f, 0.0f, 20.0f, 0.0f, 187.955f, 72.87077f, 71.0254f);
	ADD_TO_VOLUME_SET(Local_408.f_132, (*&Local_408 + 100)[3]);
	(*&Local_408 + 100)[4] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote8", 3, -2735.441f, 52.57456f, 2534.006f, 0.0f, 20.0f, 0.0f, 500.0366f, 72.87077f, 186.022f);
	ADD_TO_VOLUME_SET(Local_408.f_132, (*&Local_408 + 100)[4]);
	(*&Local_408 + 100)[5] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote5", 3, -2339.341f, 84.82725f, 2758.449f, 0.0f, 38.60125f, 0.0f, 177.2788f, 72.87077f, 163.7006f);
	ADD_TO_VOLUME_SET(Local_408.f_132, (*&Local_408 + 100)[5]);
	(*&Local_408 + 100)[6] = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_coyote7", 3, -1710.038f, 92.56963f, 2877.446f, 0.0f, 36.57126f, 0.0f, 243.0385f, 72.87077f, 316.2653f);
	ADD_TO_VOLUME_SET(Local_408.f_132, (*&Local_408 + 100)[6]);
	Local_408.f_184 = CREATE_VOLUME_SET_IN_LAYOUT(Local_408, "chov_aquaticWildlife_set");
	(*&Local_408 + 136)[0] = CREATE_VOLUME_IN_LAYOUT(Local_408, "Cylinder", 3, -1952.099f, 2.777636f, 3682.922f, 0.0f, 20.0f, 0.0f, 127.5827f, 26.76715f, 68.97265f);
	ADD_TO_VOLUME_SET(Local_408.f_184, (*&Local_408 + 136)[0]);
	(*&Local_408 + 136)[1] = CREATE_VOLUME_IN_LAYOUT(Local_408, "nCylinder1", 3, -1806.972f, 1.447045f, 3676.27f, 0.0f, -25.7432f, 0.0f, 127.5827f, 34.46169f, 55.42039f);
	ADD_TO_VOLUME_SET(Local_408.f_184, (*&Local_408 + 136)[1]);
	(*&Local_408 + 136)[2] = CREATE_VOLUME_IN_LAYOUT(Local_408, "nCylinder2", 3, -1609.237f, -7.771293f, 3675.061f, 0.0f, 20.18436f, 0.0f, 127.5827f, 42.95206f, 41.30914f);
	ADD_TO_VOLUME_SET(Local_408.f_184, (*&Local_408 + 136)[2]);
	(*&Local_408 + 136)[3] = CREATE_VOLUME_IN_LAYOUT(Local_408, "nCylinder3", 3, -1500.997f, 6.72601f, 3584.961f, 0.0f, 90.64689f, 0.0f, 69.98493f, 32.80807f, 49.03263f);
	ADD_TO_VOLUME_SET(Local_408.f_184, (*&Local_408 + 136)[3]);
	(*&Local_408 + 136)[4] = CREATE_VOLUME_IN_LAYOUT(Local_408, "nCylinder4", 3, -1553.605f, -10.55402f, 3395.087f, 0.0f, 69.65346f, 0.0f, 95.48157f, 53.43207f, 66.89602f);
	ADD_TO_VOLUME_SET(Local_408.f_184, (*&Local_408 + 136)[4]);
	(*&Local_408 + 136)[5] = CREATE_VOLUME_IN_LAYOUT(Local_408, "nCylinder5", 3, -1536.674f, -7.79462f, 3499.095f, 0.0f, 115.5425f, 0.0f, 95.48157f, 46.10002f, 41.30582f);
	ADD_TO_VOLUME_SET(Local_408.f_184, (*&Local_408 + 136)[5]);
	(*&Local_408 + 136)[6] = CREATE_VOLUME_IN_LAYOUT(Local_408, "nCylinder6", 3, -1324.39f, -9.726888f, 3297.891f, 0.0f, 198.4867f, 0.0f, 177.3927f, 67.16534f, 46.03975f);
	ADD_TO_VOLUME_SET(Local_408.f_184, (*&Local_408 + 136)[6]);
	(*&Local_408 + 136)[7] = CREATE_VOLUME_IN_LAYOUT(Local_408, "nCylinder7", 3, -1485.543f, -6.896104f, 3351.123f, 0.0f, 198.4867f, 0.0f, 60.65277f, 59.69416f, 56.75384f);
	ADD_TO_VOLUME_SET(Local_408.f_184, (*&Local_408 + 136)[7]);
	(*&Local_408 + 136)[8] = CREATE_VOLUME_IN_LAYOUT(Local_408, "nCylinder8", 3, -1084.366f, -1.173465f, 3259.22f, 0.0f, 165.3063f, 0.0f, 113.8503f, 53.6678f, 39.58623f);
	ADD_TO_VOLUME_SET(Local_408.f_184, (*&Local_408 + 136)[8]);
	(*&Local_408 + 136)[9] = CREATE_VOLUME_IN_LAYOUT(Local_408, "nCylinder9", 3, -1837.354f, 83.44997f, 3238.259f, 0.0f, 57.87493f, 0.0f, 95.28522f, 58.2637f, 150.1283f);
	ADD_TO_VOLUME_SET(Local_408.f_184, (*&Local_408 + 136)[9]);
	(*&Local_408 + 136)[10] = CREATE_VOLUME_IN_LAYOUT(Local_408, "Cylinder10", 3, -1704.853f, 89.20071f, 3141.556f, 0.0f, 48.99913f, 0.0f, 75.2394f, 55.67625f, 85.32506f);
	ADD_TO_VOLUME_SET(Local_408.f_184, (*&Local_408 + 136)[10]);
	Local_408.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_Venters", 3, -2015.121f, 52.26184f, 3032.706f, 0.0f, 20.0f, 0.0f, 65.26729f, 31.83129f, 80.59859f);
	Local_408.f_208 = CREATE_VOLUME_SET_IN_LAYOUT(Local_408, "chov_RepulsionExclusion_set");
	(*&Local_408 + 192)[0] = CREATE_VOLUME_IN_LAYOUT(Local_408, "rVol", 3, -2670.407f, 24.92847f, 2772.341f, 0.0f, 47.7562f, 0.0f, 14.5538f, 10.17344f, 107.0591f);
	ADD_TO_VOLUME_SET(Local_408.f_208, (*&Local_408 + 192)[0]);
	(*&Local_408 + 192)[1] = CREATE_VOLUME_IN_LAYOUT(Local_408, "rVol1", 3, -2592.24f, 24.92847f, 2860.632f, 0.0f, 30.61959f, 0.0f, 11.48758f, 10.17344f, 56.22777f);
	ADD_TO_VOLUME_SET(Local_408.f_208, (*&Local_408 + 192)[1]);
	(*&Local_408 + 192)[2] = CREATE_VOLUME_IN_LAYOUT(Local_408, "rVol2", 3, -2567.794f, 24.92847f, 2941.24f, 0.0f, 12.21232f, 0.0f, 13.82645f, 10.17344f, 60.36354f);
	ADD_TO_VOLUME_SET(Local_408.f_208, (*&Local_408 + 192)[2]);
	Local_408.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_408, "nchov_null", 2, -1675.096f, 100.2788f, 1882.939f, -2.186509f, 68.0397f, 0.0f, 19.16553f, 19.16553f, 307.3276f);
	Local_408.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_bhstop", 2, -2093.543f, 16.72504f, 2606.436f, 0.0f, -67.146f, 0.0f, 13.1825f, 4.702487f, 11.50658f);
	Local_408.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_venter_chickens", 3, -2019.877f, 46.91924f, 3021.859f, 0.0f, -85.7293f, 0.0f, 5.489199f, 5.910119f, 11.7782f);
	Local_408.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_venter_livestock", 3, -2016.426f, 45.01529f, 3030.329f, 0.0f, -41.84417f, 0.0f, 13.36018f, 9.924715f, 16.4985f);
	Local_408.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_critchly", 3, -2919.004f, 13.05096f, 2960.33f, 0.0f, -1.008442f, 0.0f, 86.22987f, 36.01125f, 91.18248f);
	Local_408.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_critchly_goats", 3, -2916.517f, 13.05096f, 2948.477f, 0.0f, 47.11259f, 0.0f, 25.86532f, 11.23466f, 32.4671f);
	Local_408.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_critchly_chickens", 3, -2913.593f, 13.05096f, 2987.315f, 0.0f, 76.97934f, 0.0f, 10.5309f, 4.57412f, 13.21877f);
	Local_408.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_venter_dog", 3, -2015.121f, 52.26184f, 3032.706f, 0.0f, 20.0f, 0.0f, 24.22468f, 11.81454f, 29.91507f);
	Local_408.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_critchly_dog", 3, -2919.004f, 13.05096f, 2960.33f, 0.0f, -1.008442f, 0.0f, 44.99642f, 18.79137f, 47.58079f);
	Local_408.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_critchly_barn", 2, -2905.128f, 11.63437f, 2947.027f, 0.0f, 43.06549f, 0.0f, 9.434371f, 8.059836f, 11.34686f);
	Local_408.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_venter_barn", 2, -2006.876f, 42.18377f, 3047.409f, 0.0f, 59.41034f, 0.0f, 9.526102f, 4.852225f, 9.324677f);
	Local_408.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_weather01", 2, -1522.265f, 95.79754f, 1932.439f, 1.338954f, -20.89042f, 0.03367328f, 489.9247f, 41.12966f, 52.49646f);
	Local_408.f_280 = CREATE_VOLUME_SET_IN_LAYOUT(Local_408, "chov_narrowZombie_set");
	(*&Local_408 + 260)[0] = CREATE_VOLUME_IN_LAYOUT(Local_408, "narrowZombies1", 2, -2687.849f, 27.45237f, 2755.758f, 0.0f, 45.66531f, 0.0f, 18.41777f, 6.559019f, 98.68074f);
	ADD_TO_VOLUME_SET(Local_408.f_280, (*&Local_408 + 260)[0]);
	(*&Local_408 + 260)[1] = CREATE_VOLUME_IN_LAYOUT(Local_408, "narrowZombies2", 2, -2625.161f, 23.21779f, 2814.939f, 4.174958f, 37.02468f, 0.0f, 18.41777f, 6.559019f, 81.18509f);
	ADD_TO_VOLUME_SET(Local_408.f_280, (*&Local_408 + 260)[1]);
	(*&Local_408 + 260)[2] = CREATE_VOLUME_IN_LAYOUT(Local_408, "narrowZombies3", 2, -2592.158f, 18.77147f, 2859.696f, 0.0f, 27.73825f, 0.0f, 18.41777f, 6.559019f, 43.69035f);
	ADD_TO_VOLUME_SET(Local_408.f_280, (*&Local_408 + 260)[2]);
	(*&Local_408 + 260)[3] = CREATE_VOLUME_IN_LAYOUT(Local_408, "narrowZombies4", 2, -2575.69f, 17.37063f, 2906.921f, 0.0f, 17.45829f, 0.0f, 18.41777f, 6.559019f, 81.18509f);
	ADD_TO_VOLUME_SET(Local_408.f_280, (*&Local_408 + 260)[3]);
	Local_408.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_408, "chov_rileysCharge", 2, -2317.325f, 17.06667f, 3164.0f, 0.0f, 8.500405f, 0.0f, 47.43627f, 39.19399f, 119.2424f);
	*(&Local_408 + 288) = { -2660.076f, 37.91997f, 2840.266f };
	*(&Local_408 + 288 + 12) = { 0.0f, 203.0f, 0.0f };
	Local_408.f_312 = CREATE_POINT_IN_LAYOUT(Local_408, "chof_ambush_0", -2660.076f, 37.91997f, 2840.266f, 0.0f, 203.0f, 0.0f);
	*(&Local_408 + 316) = { -3404f, 32.12553f, 2900f };
	*(&Local_408 + 316 + 12) = { 0.0f, 119.9582f, 0.0f };
	Local_408.f_340 = CREATE_POINT_IN_LAYOUT(Local_408, "chof_ambush_1", -3404f, 32.12553f, 2900f, 0.0f, 119.9582f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_408, "cho_f_robbery_loot", -2131.377f, 16.83483f, 2637.952f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_408, "cho_f_robbery_bad", -2122.505f, 17.0211f, 2589.887f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_408, "cho_f_robbery_bad1", -2148.4f, 16.57384f, 2550.547f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_408, "cho_f_robbery_bad2", -2164.0f, 16.5f, 2576.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_408, "cho_f_robbery_bad3", -2204.95f, 16.82352f, 2623.455f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_408, "cho_f_robbery_bad4", -2154.732f, 16.4f, 2637.812f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_408, "cho_f_robbery_good", -2122.505f, 17.0211f, 2589.887f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_408, "cho_f_robbery_good1", -2148.4f, 16.57384f, 2550.547f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_408, "cho_f_robbery_good2", -2164.0f, 16.5f, 2576.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_408, "cho_f_robbery_good3", -2204.95f, 16.82352f, 2623.455f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_408, "cho_f_robbery_good4", -2154.796f, 16.4f, 2637.98f, 0.0f, 0.0f, 0.0f);
	*(&Local_408 + 344) = { -3208.513f, 26.72148f, 2664.471f };
	*(&Local_408 + 344 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_408.f_368 = CREATE_POINT_IN_LAYOUT(Local_408, "chof_ng", -3208.513f, 26.72148f, 2664.471f, 0.0f, 0.0f, 0.0f);
	*(&Local_408 + 372) = { -3196f, 26.64374f, 2652f };
	*(&Local_408 + 372 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_408.f_396 = CREATE_POINT_IN_LAYOUT(Local_408, "chof_ng1", -3196f, 26.64374f, 2652f, 0.0f, 0.0f, 0.0f);
	*(&Local_408 + 400) = { -2511.161f, 25.09802f, 2783.072f };
	*(&Local_408 + 400 + 12) = { 0.0f, 172.0058f, 0.0f };
	Local_408.f_424 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuy_cho1", -2511.161f, 25.09802f, 2783.072f, 0.0f, 172.0058f, 0.0f);
	*(&Local_408 + 428) = { -2512.0f, 25.09802f, 2792f };
	*(&Local_408 + 428 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_408.f_452 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingHorses_cho1", -2512.0f, 25.09802f, 2792f, 0.0f, 0.0f, 0.0f);
	*(&Local_408 + 456) = { -2511.734f, 25.09802f, 2786.463f };
	*(&Local_408 + 456 + 12) = { 0.0f, -9.601336f, 0.0f };
	Local_408.f_480 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard1_cho1", -2511.734f, 25.09802f, 2786.463f, 0.0f, -9.601336f, 0.0f);
	*(&Local_408 + 484) = { -2514.621f, 25.09802f, 2786.586f };
	*(&Local_408 + 484 + 12) = { 0.0f, -26.33815f, 0.0f };
	Local_408.f_508 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard2_cho1", -2514.621f, 25.09802f, 2786.586f, 0.0f, -26.33815f, 0.0f);
	*(&Local_408 + 512) = { -2509.448f, 25.09802f, 2787.19f };
	*(&Local_408 + 512 + 12) = { 0.0f, 28.32407f, 0.0f };
	Local_408.f_536 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard3_cho1", -2509.448f, 25.09802f, 2787.19f, 0.0f, 28.32407f, 0.0f);
	*(&Local_408 + 540) = { -2511.156f, 25.09802f, 2779.65f };
	*(&Local_408 + 540 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_408.f_564 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingTree_cho1", -2511.156f, 25.09802f, 2779.65f, 0.0f, 0.0f, 0.0f);
	*(&Local_408 + 568) = { -1916.0f, 28.52396f, 2252.0f };
	*(&Local_408 + 568 + 12) = { 0.0f, -129.2145f, 0.0f };
	Local_408.f_592 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingHorses_cho2", -1916.0f, 28.52396f, 2252.0f, 0.0f, -129.2145f, 0.0f);
	*(&Local_408 + 596) = { -1919.594f, 31.00599f, 2265.41f };
	*(&Local_408 + 596 + 12) = { 0.0f, 76.81097f, 0.0f };
	Local_408.f_620 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuy_cho2", -1919.594f, 31.00599f, 2265.41f, 0.0f, 76.81097f, 0.0f);
	*(&Local_408 + 624) = { -1924.5f, 30.33228f, 2264.192f };
	*(&Local_408 + 624 + 12) = { 0.0f, -103.4184f, 0.0f };
	Local_408.f_648 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard1_cho2", -1924.5f, 30.33228f, 2264.192f, 0.0f, -103.4184f, 0.0f);
	*(&Local_408 + 652) = { -1924.192f, 30.40042f, 2261.759f };
	*(&Local_408 + 652 + 12) = { 0.0f, -145.1376f, 0.0f };
	Local_408.f_676 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard2_cho2", -1924.192f, 30.40042f, 2261.759f, 0.0f, -145.1376f, 0.0f);
	*(&Local_408 + 680) = { -1924.954f, 30.00881f, 2266.127f };
	*(&Local_408 + 680 + 12) = { 0.0f, -80.97864f, 0.0f };
	Local_408.f_704 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard3_cho2", -1924.954f, 30.00881f, 2266.127f, 0.0f, -80.97864f, 0.0f);
	*(&Local_408 + 708) = { -1920.0f, 31.28032f, 2261.344f };
	*(&Local_408 + 708 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_408.f_732 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingTree_cho2", -1920.0f, 31.28032f, 2261.344f, 0.0f, 0.0f, 0.0f);
	*(&Local_408 + 736) = { -2920f, 18.74643f, 2668f };
	*(&Local_408 + 736 + 12) = { 0.0f, 123.5328f, 0.0f };
	Local_408.f_760 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingHorses_cho3", -2920f, 18.74643f, 2668f, 0.0f, 123.5328f, 0.0f);
	*(&Local_408 + 764) = { -2925.0f, 18.64439f, 2671.426f };
	*(&Local_408 + 764 + 12) = { 0.04063571f, -128.7616f, 0.1263601f };
	Local_408.f_788 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuy_cho3", -2925.0f, 18.64439f, 2671.426f, 0.04063571f, -128.7616f, 0.1263601f);
	*(&Local_408 + 792) = { -2922.902f, 18.64439f, 2673.112f };
	*(&Local_408 + 792 + 12) = { 0.0f, 50.75231f, 0.0f };
	Local_408.f_816 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard1_cho3", -2922.902f, 18.64439f, 2673.112f, 0.0f, 50.75231f, 0.0f);
	*(&Local_408 + 820) = { -2928f, 18.6426f, 2672f };
	*(&Local_408 + 820 + 12) = { 0.0f, -85.02582f, 0.0f };
	Local_408.f_844 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard2_cho3", -2928f, 18.6426f, 2672f, 0.0f, -85.02582f, 0.0f);
	*(&Local_408 + 848) = { -2928f, 18.6261f, 2674.092f };
	*(&Local_408 + 848 + 12) = { 0.0f, -56.82056f, 0.0f };
	Local_408.f_872 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard3_cho3", -2928f, 18.6261f, 2674.092f, 0.0f, -56.82056f, 0.0f);
	*(&Local_408 + 876) = { -2925.0f, 18.63521f, 2669.0f };
	*(&Local_408 + 876 + 12) = { 0.0f, -173.2698f, 0.0f };
	Local_408.f_900 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingTree_cho3", -2925.0f, 18.63521f, 2669.0f, 0.0f, -173.2698f, 0.0f);
	*(&Local_408 + 904) = { -2109.58f, 18.14495f, 2021.791f };
	*(&Local_408 + 904 + 12) = { 0.0f, 111.6542f, 0.0f };
	Local_408.f_928 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingHorses_cho4", -2109.58f, 18.14495f, 2021.791f, 0.0f, 111.6542f, 0.0f);
	*(&Local_408 + 932) = { -2107.098f, 18.12279f, 2018.854f };
	*(&Local_408 + 932 + 12) = { 0.0f, -104.0094f, 0.0f };
	Local_408.f_956 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuy_cho4", -2107.098f, 18.12279f, 2018.854f, 0.0f, -104.0094f, 0.0f);
	*(&Local_408 + 960) = { -2104.83f, 18.12279f, 2018.854f };
	*(&Local_408 + 960 + 12) = { 0.0f, 70.75015f, 0.0f };
	Local_408.f_984 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard1_cho4", -2104.83f, 18.12279f, 2018.854f, 0.0f, 70.75015f, 0.0f);
	*(&Local_408 + 988) = { -2103.116f, 18.17717f, 2016.0f };
	*(&Local_408 + 988 + 12) = { 0.0f, 120.8677f, 0.0f };
	Local_408.f_1012 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard2_cho4", -2103.116f, 18.17717f, 2016.0f, 0.0f, 120.8677f, 0.0f);
	*(&Local_408 + 1016) = { -2103.723f, 18.09279f, 2022.66f };
	*(&Local_408 + 1016 + 12) = { 0.0f, 35.49055f, 0.0f };
	Local_408.f_1040 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingGuard3_cho4", -2103.723f, 18.09279f, 2022.66f, 0.0f, 35.49055f, 0.0f);
	*(&Local_408 + 1044) = { -2107.098f, 18.16976f, 2014.983f };
	*(&Local_408 + 1044 + 12) = { 0.0f, 180.7631f, 0.0f };
	Local_408.f_1068 = CREATE_POINT_IN_LAYOUT(Local_408, "hangingTree_cho4", -2107.098f, 18.16976f, 2014.983f, 0.0f, 180.7631f, 0.0f);
	return 1;
}

void Function_108(int iParam0, int iParam1) //Position: 0x52AF / 21167
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

void Function_109(var uParam0, int iParam1) //Position: 0x52F8 / 21240
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_110() //Position: 0x5307 / 21255
{
	return;
}

bool Function_111() //Position: 0x530D / 21261
{
	return Function_112();
}

int Function_112() //Position: 0x5316 / 21270
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Function_108(3, 3);
	bVar0 = bVar0;
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/sleeping", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/any_washcloths", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/riverwash", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_campfire", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/player_herb_redsage", 1, 0);
	Function_118(&Local_79 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	if (!Function_113(&Local_79 + 4))
	{
		return 0;
	}
	Local_79 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
	if (!IS_LAYOUTREF_VALID(Local_79))
	{
		Local_79 = CREATE_LAYOUT("ChollaSprings_layout");
	}
	Local_79.f_536 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint", -1864.0f, 25.66513f, 3304.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_540 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint1", -2307.94f, 24.22564f, 3004.581f, 0.0f, 0.0f, 0.0f);
	Local_79.f_544 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint2", -2328.088f, 17.06667f, 3172.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_548 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint3", -2872f, 74.29016f, 2177.927f, 0.0f, 0.0f, 0.0f);
	Local_79.f_552 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint4", -2832f, 49.97124f, 2422.863f, 0.0f, 0.0f, 0.0f);
	Local_79.f_556 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint5", -2832.009f, 20.221f, 3076.099f, 0.0f, 268.302f, 0.0f);
	Local_79.f_560 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint6", -1916.0f, 28.12522f, 2248.98f, 0.0f, 0.0f, 0.0f);
	Local_79.f_564 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint7", -2904.914f, 19.0745f, 2701.286f, 0.0f, 0.0f, 0.0f);
	Local_79.f_568 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint8", -3440.624f, 23.55206f, 2500.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_572 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint9", -1948.986f, 30.338f, 3468.504f, 0.0f, 4.794f, 0.0f);
	Local_79.f_576 = CREATE_OBJECTSET_IN_LAYOUT("bucketgrpSet", Local_79, 8, 0);
	*(&Local_79 + 580[06]) = { -2934.529f, 14.297f, 2973.767f };
	*(&Local_79 + 580[06] + 12) = { 0.0f, 176.6796f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_79, "Flag2", -2934.529f, 14.297f, 2973.767f, 0.0f, 176.6796f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_79.f_576);
	*(&Local_79 + 580[16]) = { -2932.407f, 13.051f, 2969.621f };
	*(&Local_79 + 580[16] + 12) = { 0.0f, 88.681f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_79, "Flag1", -2932.407f, 13.051f, 2969.621f, 0.0f, 88.681f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_79.f_576);
	Local_79.f_632 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint10", -2002.36f, 43.13799f, 3572.674f, 0.0f, 0.0f, 0.0f);
	Local_79.f_636 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint11", -3504.35f, 16.25382f, 3138.471f, 0.0f, 0.0f, 0.0f);
	Local_79.f_640 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint12", -1233.881f, 22.28738f, 3209.578f, 0.0f, 0.0f, 0.0f);
	Local_79.f_644 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint13", -2827.172f, 20.218f, 3076.897f, 0.0f, 26.674f, 0.0f);
	Local_79.f_648 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhtreas", -2830.891f, 20.21f, 3077.916f, 0.0f, 36.637f, 0.0f);
	Local_79.f_652 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhtreas1", -2819.144f, 20.898f, 3097.647f, 0.0f, 167.963f, 0.0f);
	Local_79.f_656 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhtreas2", -2849.445f, 19.723f, 3104.265f, 0.0f, 238.743f, 0.0f);
	Local_79.f_660 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint14", -1911.676f, 29.161f, 2259.116f, 0.0f, 212.788f, 0.0f);
	Local_79.f_664 = CREATE_POINT_IN_LAYOUT(Local_79, "chof_bhint15", -2864.669f, 82.175f, 2160.382f, 0.0f, 198.307f, 0.0f);
	*(&Local_79 + 668) = { -2833.166f, 50.332f, 2417.407f };
	*(&Local_79 + 668 + 12) = { 0.0f, -76.14326f, 0.0f };
	Local_79.f_692 = CREATE_POINT_IN_LAYOUT(Local_79, "player_save_flag_PLE", -2833.166f, 50.332f, 2417.407f, 0.0f, -76.14326f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "cs_campsite_pee", "Pee", -2306.277f, 28.39551f, 2246.277f, 0.0f, 121.9837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_look_distance_b1", "look_distance_binocs", -2307.302f, 24.09412f, 3013.673f, 0.0f, 180.1332f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_horse_tend3", "horse_tend", -2315.239f, 23.18176f, 3001.263f, 0.0f, -134.7993f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_horse_stay", "horse_stay", -2317.562f, 24.09412f, 3013.69f, 0.0f, -236.7155f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_horse_tend1", "horse_tend", -2313.096f, 24.09412f, 3015.129f, 0.0f, -50.75182f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_horse_tend", "horse_tend", -2310.636f, 24.09412f, 3016.065f, 0.0f, -50.75182f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_horse_tend5", "horse_tend", -2314.721f, 23.09976f, 2998.606f, 0.0f, -113.6393f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_horse_stay5", "horse_stay", -2314.11f, 23.31754f, 3000.44f, 0.0f, -312.8547f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_horse_stay4", "horse_stay", -2315.098f, 23.09695f, 2997.101f, 0.0f, -299.9993f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_lookdistance", "stand_lookdistance_w_any", -2321.633f, 23.09019f, 2995.128f, 0.0f, 57.05201f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_rowdydrink", "stand_drunk_rowdydrink", -2306.282f, 24.09412f, 3004.487f, 0.0f, 88.02834f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_Pee4", "Pee", -2307.927f, 24.08537f, 3018.643f, 0.0f, -137.4129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_look_distance_b", "look_distance_binocs", -2312.529f, 24.0251f, 3007.667f, 0.0f, 101.1517f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_sleeping_wall", "sleeping_wall_scripted", -2308.404f, 24.09412f, 3007.325f, 0.0f, -43.6532f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_sstand6", "smoking_stand", -2309.569f, 24.09412f, 3005.758f, 0.0f, -39.61635f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_Ground3", "Rand_Idle_Sit_Ground", -2307.361f, 24.09412f, 3005.891f, 0.0f, 11.60332f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_lobinocs5", "look_distance_binocs", -2306.032f, 24.05074f, 2993.701f, 0.0f, -7.349932f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_NearWall2", "Rand_Idle_NearWall", -2309.781f, 24.09412f, 3004.131f, 0.0f, -134.4684f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_runk_throw", "stand_drunk_throwbottle", -2308.548f, 24.09412f, 3006.197f, 0.0f, -22.12869f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "twoCrw_Campfire_Tend", "Sit_Ground_Campfire_Tend", -2308.48f, 24.09412f, 3003.163f, 0.0f, -158.2691f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "cs_campsite_stand_idle", "rand_idle_stand_nospawn", -2303.121f, 27.91747f, 2244.138f, 0.0f, -130.4733f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_lookdistance6", "stand_lookdistance_w_any", -1958.388f, 25.837f, 2253.862f, 0.0f, 532.3543f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_rand_idle_stand_nospawn", "rand_idle_stand_nospawn", -1928.494f, 28.198f, 2256.35f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_696), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_guntricks3", "stand_guntricks_e_any", -1913.875f, 28.405f, 2250.965f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_guntricks2", "stand_guntricks_e_any", -1918.708f, 28.993f, 2256.007f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", -1926.926f, 28.128f, 2248.919f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_700), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_horse_stay5", "horse_stay", -1931.363f, 31.714f, 3457.895f, 0.0f, -90.69595f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_horse_stay4", "horse_stay", -1922.429f, 33.198f, 3457.79f, 0.0f, -119.5589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_stand_guntricks1", "stand_guntricks_e_any", -1935.254f, 31.071f, 3465.635f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_Sit_Ground3", "Rand_Idle_Sit_Ground", -3554.44f, 15.6855f, 3158.265f, 0.0f, 209.569f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_704), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_rand_idle_stand3", "stand_lookdistance_w_any", -3552.909f, 15.63719f, 3157.377f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_rand_idle_stand2", "rand_idle_stand", -3555.438f, 15.60915f, 3159.332f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_stand_guntricks_e_any1", "stand_guntricks_e_any", -3543.762f, 15.3694f, 3162.819f, 0.0f, -210.2364f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_Sit_Ground2", "Rand_Idle_Sit_Ground", -3545.373f, 15.49567f, 3162.648f, 0.0f, 34.25905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_708), 0);
	Local_79.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_Sit_Ground1", "Rand_Idle_Sit_Ground", -3544.541f, 15.49885f, 3161.289f, 0.0f, 71.79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_712), 0);
	Local_79.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_look_distance_binocs2", "look_distance_binocs", -3545.451f, 15.64982f, 3159.776f, 0.0f, 138.5309f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_716), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_horse_tend1", "horse_tend", -3495.967f, 19.65504f, 3136.116f, 0.0f, -91.20521f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_horse_tend", "horse_tend", -3499.674f, 16.25382f, 3147.382f, 0.0f, 21.67242f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_horse_stay2", "horse_stay", -3497.875f, 16.7437f, 3146.125f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_horse_stay1", "horse_stay", -3496f, 17.07369f, 3146.051f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_horse_stay", "horse_stay", -3494.914f, 17.262f, 3150.906f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_look_distance_binocs1", "look_distance_binocs", -3516.268f, 15.515f, 3124.192f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_Pee", "Pee", -3492.114f, 19.66672f, 3136.246f, 0.0f, -26.90434f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_rand_idle_stand1", "rand_idle_stand", -3520.276f, 11.12099f, 3146.674f, 0.0f, 78.99949f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_rand_idle_stand", "rand_idle_stand", -3509.928f, 13.78963f, 3146.481f, 0.0f, -82.29346f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_stand_guntricks_e_any", "stand_guntricks_e_any", -3511.514f, 13.83953f, 3143.129f, 0.0f, -161.3654f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_lookdistance_w_any11", "stand_lookdistance_w_any", -3497.143f, 17.32072f, 3150.853f, 0.0f, -105.2133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_lean_rail", "look_distance_binocs", -3520.693f, 15.672f, 3127.985f, 0.0f, 37.36112f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_lean_fence_L_talking", "Rand_Idle_NearWall_Shoulder_L", -3516.66f, 15.74677f, 3134.089f, 0.0f, 41.5251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_look_distance_binocs", "look_distance_binocs", -3503.269f, 15.4507f, 3126.436f, 0.0f, -47.4214f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_720), 0);
	Local_79.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ben_Sit_Ground", "Rand_Idle_Sit_Ground", -3507.42f, 14.41f, 3147.197f, 0.0f, 71.79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_724), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_smoking_stand2", "smoking_stand", -1946.722f, 30.068f, 3464.956f, 0.0f, -120.1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_Sit_Ground4", "Rand_Idle_Sit_Ground", -1954.085f, 30.043f, 3461.345f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_Sit_Ground3", "Rand_Idle_Sit_Ground", -1913.139f, 35.528f, 3465.48f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_Sit_Ground2", "Rand_Idle_Sit_Ground", -1931.168f, 31.081f, 3472.563f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_smoking_stand1", "smoking_stand", -1947.871f, 30.049f, 3454.507f, 0.0f, -120.1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_79, "lean_rail2", "nlean_rail", -2932.204f, 14.297f, 2980.332f, 0.0f, 179.9064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_728), 0);
	Local_79.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_79, "horse_tend1", "horse_tend", -2908.074f, 13.05095f, 2943.909f, 0.0f, 116.8855f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_732), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_horse_tend1", "horse_tend", -101.656f, 55.227f, 2801.408f, 0.0f, -141.5272f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_horse_tend", "horse_tend", -111.4741f, 55.2157f, 2810.284f, 0.0f, 66.63183f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_horse_stay3", "horse_stay", -113.5305f, 55.2157f, 2812.0f, 0.0f, -134.0859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_horse_stay2", "horse_stay", -100.2657f, 55.2157f, 2800.768f, 0.0f, 38.61838f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_horse_stay1", "horse_stay", -116.4423f, 55.2157f, 2812.442f, 0.0f, 146.8178f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Sit_Ground_Drink_Ven", "Sit_Ground_Drink", -2019.311f, 42.37034f, 3013.165f, 0.0f, -163.9837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "NearWall_Ven", "Rand_Idle_NearWall", -2003.049f, 41.99572f, 3043.089f, 0.0f, -36.88197f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "sleeping_wall_Ven", "sleeping", -2006.959f, 42.16058f, 3043.295f, 0.0f, -91.77731f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "stand_worried_Ven", "stand_worried_n_any", -2008.618f, 42.041f, 3046.047f, 0.0f, -131.9067f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Pee_Ven", "Pee", -2005.099f, 42.04128f, 3055.422f, 0.0f, 1.465339f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "stand_lookdistanc_Ven", "stand_lookdistance_w_any", -1982.15f, 45.017f, 3070.941f, 0.0f, -164.3452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "lean_rail_Ven", "nlean_rail", -2017.916f, 42.338f, 3014.271f, 0.0f, -165.6215f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "look_distance_binocs_Ven", "look_distance_binocs", -2011.333f, 42.35631f, 3012.558f, 0.0f, -77.03822f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "ook_out_window_R_Ven", "look_out_window_R", -2023.634f, 42.041f, 3010.935f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_horse_stay", "horse_stay", -102.823f, 55.2157f, 2802.823f, 0.0f, 49.26177f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_sit_ground_smoke", "sit_ground_smoke", -105.7061f, 55.2157f, 2803.866f, 0.0f, -116.7412f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_play_harmonica", "sit_ground_play_harmonica", -113.111f, 55.2157f, 2806.26f, 0.0f, -108.6369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_stand_guntricks", "stand_guntricks_e_any", -111.1549f, 55.2157f, 2808f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_stand_yawning", "stand_yawning_n_any", -106.334f, 55.2157f, 2806.334f, 0.0f, 100.3735f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_stand_lookdistanc", "stand_lookdistance_w_any", -117.9617f, 55.2157f, 2809.962f, 0.0f, 96.93845f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_smoking_stand", "smoking_stand", -109.5375f, 55.21568f, 2805.538f, 0.0f, 142.1955f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_look_distance_binocs", "look_distance_binocs", -114.3744f, 54.75f, 2814.374f, 0.0f, 191.7611f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Man_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -111.443f, 55.198f, 2804.726f, 0.0f, 182.6724f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_79, "lean_rail1", "nlean_rail", -2935.203f, 14.297f, 2977.5f, 0.0f, 91.34452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_736), 0);
	Local_79.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_79, "stand_hammer_tabletop", "nuse_shelf", -2901.083f, 13.05095f, 2953.657f, 0.0f, 46.55552f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_740), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -2900.832f, 16.386f, 2946.484f, 0.0f, 114.7093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_79, "nsit_docks", "nsit_docks", -2903.891f, 16.4614f, 2948.211f, 0.0f, 43.21585f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_744), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "look_distance_binocs", "look_distance_binocs", -2912f, 14.05486f, 2976f, 0.0f, 213.9748f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -2888.407f, 13.051f, 2930.088f, 0.0f, -89.05313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Multistage_bucket", "Multistage_bucket", -2905.335f, 13.051f, 2957.407f, 0.0f, 255.3506f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "any_washCloths", "any_washCloths", -2934.739f, 14.3303f, 2975.081f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_79, "horse_tend", "horse_tend", -2903.199f, 13.05095f, 2950.597f, 0.0f, 219.8719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_748), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Rand_Idle_NearWall_Shoulder_L", "Rand_Idle_NearWall_Shoulder_L", -2919.18f, 13.085f, 2991.829f, 0.0f, 265.6623f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "stand_horseshoe", "stand_horseshoe", -2908.933f, 13.051f, 2956.028f, 0.0f, -12.4248f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "nlean_rail", "nlean_rail", -2925.291f, 14.297f, 2980.532f, 0.0f, -87.29653f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "stand_hammer_wall", "stand_hammer_wall", -2899.185f, 13.051f, 2945.381f, 0.0f, 190.7813f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "lean_fence_L_talking", "lean_fence_L_talking", -2935.112f, 14.297f, 2978.921f, 0.0f, 87.12711f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "p2Grn_horse_tend", "horse_tend", -1230.139f, 22.08622f, 3216.563f, 0.0f, 96.76688f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_79, "p2Grn_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1237.924f, 22.299f, 3209.018f, 0.0f, 88.8347f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_752), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "p2Grn_horse_tend2", "horse_tend", -1249.513f, 23.42436f, 3210.53f, 0.0f, -91.21593f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "p2Grn_horse_tend1", "horse_tend", -1248.0f, 22.43698f, 3216.0f, 0.0f, -95.92507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "p2Grn_horse_stay2", "horse_stay", -1248f, 22.82869f, 3213.701f, 0.0f, 81.59499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "p2Grn_horse_stay1", "horse_stay", -1226.133f, 22.08622f, 3212.074f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "p2Grn_horse_stay", "horse_stay", -1224f, 22.08622f, 3209.978f, 0.0f, 35.12274f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "p2Grn_loobinocs", "look_distance_binocs", -1226.583f, 22.11765f, 3215.137f, 0.0f, -98.96873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "p2Grn_NearWall", "Rand_Idle_NearWall", -1240.39f, 22.069f, 3206.121f, 0.0f, 89.76422f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "p2Grn_rtand", "rand_idle_stand", -1220.766f, 23.494f, 3204.79f, 0.0f, -54.23795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "np2Grn_Pee", "Pee", -1228.186f, 22.25996f, 3204.888f, 0.0f, -31.56896f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "p2Grn__e_any", "stand_guntricks_e_any", -1235.087f, 22.23831f, 3209.045f, 0.0f, 68.27065f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "P2Grn_rowdydrink", "stand_drunk_rowdydrink", -1233.846f, 22.23988f, 3207.39f, 0.0f, 128.9384f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "P2Grn__Ground", "Rand_Idle_Sit_Ground", -1238.468f, 22.3443f, 3207.1f, 0.0f, -144.53f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Grn_smoking_stand", "smoking_stand", -1233.558f, 22.2506f, 3212.879f, 0.0f, 1.289225f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DIR_WildFeverFew", "Player_Herb_WildFeverFew", -2011.576f, 45.81986f, 3593.491f, 0.0f, -125.9303f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_stand_lookdistance1", "stand_lookdistance_w_any", -1975.478f, 48.8424f, 3604.32f, 0.0f, -132.8838f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_horse_tend", "horse_tend", -1996.0f, 42.13971f, 3568.0f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_horse_stay2", "horse_stay", -2006.351f, 41.217f, 3562.468f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_horse_stay1", "horse_stay", -2006.351f, 41.66239f, 3564.456f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_horse_stay", "horse_stay", -1994.442f, 41.63882f, 3565.585f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_rand_idle_stand", "rand_idle_stand", -1997.602f, 43.169f, 3578.858f, 0.0f, 34.43791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_lookbinocs1", "look_distance_binocs", -2006.103f, 44.906f, 3599.149f, 0.0f, 181.4747f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_stand_announce", "stand_announce", -1989.706f, 48.9093f, 3595.814f, 0.0f, 40.51711f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_stand_lookdistance", "stand_lookdistance_w_any", -1973.284f, 49.67323f, 3596.814f, 0.0f, -98.72509f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_Pee", "Pee", -1988f, 42.33515f, 3580.0f, 0.0f, -92.33208f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_lookbinocs", "look_distance_binocs", -1994.93f, 42.25149f, 3569.405f, 0.0f, -33.84345f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_sleeping_scripted", "sleeping_scripted", -1997.189f, 43.14079f, 3575.614f, 0.0f, 34.06158f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_throwbottle", "stand_drunk_throwbottle", -2002.435f, 43.169f, 3577.113f, 0.0f, -68.14408f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_smoking_stand", "smoking_stand", -1995.996f, 44.17252f, 3584.72f, 0.0f, 0.2951546f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_sit_harmonica", "sit_ground_play_harmonica", -1998.269f, 43.07529f, 3575.167f, 0.0f, -245.3799f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "DlR_Sit_Tend", "Sit_Ground_Campfire_Tend", -1999.387f, 43.169f, 3577.917f, 0.0f, 0.6212928f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_play_harmonica4", "sit_ground_play_harmonica", -1949.729f, 30.338f, 3468.748f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_play_harmonica3", "sit_ground_play_harmonica", -1944.537f, 30.174f, 3462.752f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_stand_guntricks", "stand_guntricks_e_any", -1940.999f, 30.465f, 3466.823f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_stand_lookdistance4", "stand_lookdistance_w_any", -1938.157f, 40.077f, 3411.248f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_stand_peeing4", "stand_peeing_b_any", -1938.611f, 31.35f, 3445.034f, 0.0f, 88.69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_760), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_stand_lookdistance3", "stand_lookdistance_w_any", -1928.01f, 31.471f, 3470.586f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_stand_lookdistance2", "stand_lookdistance_w_any", -1905.697f, 37.586f, 3460.313f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_stand_lookdistance1", "stand_lookdistance_w_any", -1973.683f, 23.404f, 3452.104f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_stand_lookdistance", "stand_lookdistance_w_any", -1966.768f, 24.473f, 3444.756f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_horse_stay3", "horse_stay", -1928.781f, 32.027f, 3459.594f, 0.0f, -90.69595f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_horse_stay2", "horse_stay", -1919.589f, 33.631f, 3452.771f, 0.0f, -119.5589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_sit_play_harmonica", "sit_ground_play_harmonica", -1945.132f, 30.25158f, 3468.703f, 0.0f, -76.99028f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_smoking_stand", "smoking_stand", -1944.187f, 30.25158f, 3467.699f, 0.0f, -120.1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_sleeping_scripted", "sleeping_scripted", -1948.295f, 30.42581f, 3469.483f, 0.0f, -56.70472f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_lookdistance_b2", "look_distance_binocs", -1937.952f, 30.59689f, 3471.31f, 0.0f, -168.9819f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_lookdistance_b1", "look_distance_binocs", -1955.76f, 29.60071f, 3464.03f, 0.0f, 93.37398f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_look_out", "look_out_window_L", -1946.82f, 30.33619f, 3470.723f, 0.0f, -173.4546f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_sit_docks", "Rand_Idle_NearWall_Shoulder_L", -1944.898f, 30.25158f, 3469.718f, 0.0f, -89.65778f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "del_Pee", "Pee", -1949.664f, 30.068f, 3463.846f, 0.0f, -239.1129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_yawning", "stand_yawning_n_any", -1910.459f, 29.215f, 2259.989f, 0.0f, 47.39015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_smoking_stand2", "smoking_stand", -1915.036f, 30.291f, 2265.368f, 0.0f, 91.15357f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_lookdistance5", "stand_lookdistance_w_any", -1927.442f, 27.087f, 2297.244f, 0.0f, 532.3543f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_Pee1", "Pee", -1923.613f, 27.28f, 2233.131f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_lookdistance4", "stand_lookdistance_w_any", -1912.419f, 26.04f, 2214.9f, 0.0f, 369.6023f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_lookdistance3", "stand_lookdistance_w_any", -1887.422f, 25.50956f, 2230.188f, 0.0f, 369.6023f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_lookdistance2", "stand_lookdistance_w_any", -1889.173f, 26.06054f, 2294.459f, 0.0f, 532.3543f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_Sit_Ground1", "Rand_Idle_Sit_Ground", -1922.28f, 28.10736f, 2243.813f, 0.0f, -151.0814f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_sit_ground_smoke1", "sit_ground_smoke", -1919.767f, 28.07989f, 2245.429f, 0.0f, -228.1689f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_lookdistance_b1", "look_distance_binocs", -1953.821f, 26.43f, 2269.117f, 0.0f, 41.80516f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_llook_distance_bin2", "look_distance_binocs", -2915.209f, 18.79024f, 2710.875f, 0.0f, -240.6861f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_horse_tend", "horse_tend", -3432.923f, 23.90886f, 2489.69f, 0.0f, -220.4545f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_horse_stay2", "horse_stay", -3430.707f, 23.75444f, 2500.938f, 0.0f, 69.35268f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_horse_stay1", "horse_stay", -3429.728f, 24.09414f, 2491.26f, 0.0f, -232.7364f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_horse_stay", "horse_stay", -3428.362f, 24.09412f, 2495.286f, 0.0f, 94.78333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_Pee", "Pee", -3433.225f, 23.594f, 2505.034f, 0.0f, 35.20251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_look_distance_b1", "look_distance_binocs", -3432f, 23.59217f, 2508.0f, 0.0f, -152.0119f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_look_distance_b", "look_distance_binocs", -3452f, 23.09019f, 2500f, 0.0f, -262.6823f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_sit_play_harmonica", "sit_ground_play_harmonica", -3435.124f, 23.592f, 2497.544f, 0.0f, 102.2661f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_stand_guntricks2", "stand_guntricks_e_any", -3436.929f, 23.592f, 2494.608f, 0.0f, 49.04795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_stand_guntricks1", "stand_guntricks_e_any", -3437.837f, 23.592f, 2492.929f, 0.0f, -182.7671f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_sleeping_wall", "sit_ground_smoke", -3446.411f, 23.09018f, 2499.819f, 0.0f, -223.3851f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_smoking_stand", "smoking_stand", -3436.582f, 23.592f, 2501.046f, 0.0f, 128.5334f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Ham_Sit_Ground", "Rand_Idle_Sit_Ground", -3437.098f, 23.592f, 2502.806f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_Sit_Ground1", "Rand_Idle_Sit_Ground", -2903.393f, 19.075f, 2701.3f, 0.0f, 139.7804f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_llook_distance_bin1", "look_distance_binocs", -2901.03f, 19.0745f, 2710.082f, 0.0f, -187.8924f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_horse_stay3", "horse_stay", -2889.462f, 19.19097f, 2695.489f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_horse_stay2", "horse_stay", -2885.788f, 18.6661f, 2697.682f, 0.0f, -132.036f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_horse_stay1", "horse_stay", -2912.183f, 18.66879f, 2715.71f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_horse_stay", "horse_stay", -2904.096f, 18.66879f, 2714.48f, 0.0f, 23.0453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_horse_tend1", "horse_tend", -2888f, 18.6661f, 2700f, 0.0f, 62.70821f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_horse_tend", "horse_tend", -2908.379f, 18.66879f, 2714.691f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_stand_guntricks", "stand_guntricks_e_any", -2905.96f, 19.075f, 2702.57f, 0.0f, -112.69f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_smoking_stand", "smoking_stand", -2902.563f, 19.075f, 2703.72f, 0.0f, 50.53659f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_Sit_Ground", "Rand_Idle_Sit_Ground", -2904.813f, 19.075f, 2704.292f, 0.0f, -1.60452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_llook_distance_bin", "look_distance_binocs", -2899.741f, 19.0745f, 2709.509f, 0.0f, -110.9011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_lPee", "Pee", -2914.146f, 19.28531f, 2652.242f, 0.0f, 20.78754f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_lstand_lookdistance", "stand_lookdistance_w_any", -2910.037f, 19.07449f, 2668.611f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Odd_lean_fence", "lean_fence_L_talking", -2921.907f, 19.0543f, 2710.088f, 0.0f, -405.9772f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_horse_stay", "horse_stay", -1913.693f, 28.11f, 2244.617f, 0.0f, 178.051f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_lookdistance1", "stand_lookdistance_w_any", -1878.651f, 25.90808f, 2261.477f, 0.0f, 261.5796f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_lookdistance", "stand_lookdistance_w_any", -1938.915f, 27.18923f, 2248.859f, 0.0f, 415.6428f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_horse_stay3", "horse_stay", -1883.159f, 25.808f, 2255.907f, 0.0f, 214.5367f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_horse_stay2", "horse_stay", -1887.953f, 25.778f, 2252.354f, 0.0f, 206.2613f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_horse_stay1", "horse_stay", -1890.348f, 26.039f, 2243.639f, 0.0f, 181.4791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_Pee", "Pee", -1910.703f, 29.06427f, 2265.037f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_sleepingscripted", "sleeping_wall_scripted", -1907.404f, 28.53935f, 2252.136f, 0.0f, -32.20943f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_smoking_stand1", "smoking_stand", -1918.182f, 28.912f, 2255.277f, 0.0f, 91.15357f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_Sit_Ground", "Rand_Idle_Sit_Ground", -1920.754f, 28.0557f, 2248.032f, 0.0f, -5.000641f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_sit_ground_smoke", "sit_ground_smoke", -1922.146f, 28.07582f, 2246.551f, 0.0f, -70.17099f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_guntricks1", "stand_guntricks_e_any", -1889.321f, 25.69709f, 2271.382f, 0.0f, -95.93178f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_stand_guntricks", "stand_guntricks_e_any", -1887.121f, 25.72222f, 2270.516f, 0.0f, -235.0462f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_smoking_stand", "smoking_stand", -1894.167f, 26.3774f, 2264.46f, 0.0f, -138.4957f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "han_lookdistance_b", "look_distance_binocs", -1925.775f, 30.04066f, 2265.69f, 0.0f, 146.1794f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_horse_stay", "horse_stay", -1871.25f, 24.947f, 3304.927f, 0.0f, -66.14877f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_horse_tend", "horse_tend", -1871.038f, 24.947f, 3306.689f, 0.0f, 100.4271f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_look_distanceBin", "look_distance_binocs", -1900.0f, 24.2108f, 3300.0f, 0.0f, 58.03205f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_Sit_Ground", "Rand_Idle_Sit_Ground", -1858.272f, 25.08248f, 3308.799f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_stand_lookdistance", "stand_lookdistance_w_any", -1860.0f, 24.02274f, 3292.0f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_play_harmonica2", "sit_ground_play_harmonica", -2826.924f, 20.222f, 3075.662f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_peeing3", "stand_peeing_b_any", -2839.318f, 19.804f, 3087.875f, 0.0f, 88.69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_764), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_Sit_Ground1", "Rand_Idle_Sit_Ground", -2828.607f, 20.079f, 3076.498f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_play_harmonica1", "sit_ground_play_harmonica", -2830.344f, 20.079f, 3077.056f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_Sit_Ground", "Rand_Idle_Sit_Ground", -2825.495f, 20.078f, 3065.822f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_guntricks2", "stand_guntricks_e_any", -2831.572f, 20.078f, 3071.561f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_smoking_stand1", "smoking_stand", -2819.144f, 20.898f, 3097.647f, 0.0f, 8.869471f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_lookdistance1", "stand_lookdistance_w_any", -2860.124f, 18.071f, 3052.454f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_lookdistance2", "stand_lookdistance_w_any", -2839.148f, 19.074f, 3047.189f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_lookdistance3", "stand_lookdistance_w_any", -2816.013f, 19.074f, 3054.258f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_lookdistance4", "stand_lookdistance_w_any", -2794.852f, 19.075f, 3074.642f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_lookdistance5", "stand_lookdistance_w_any", -2807.877f, 20.397f, 3089.516f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_lookdistance6", "stand_lookdistance_w_any", -2877.226f, 18.9f, 3088.852f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_horse_stay3", "horse_stay", -2839.699f, 19.8962f, 3083.606f, 0.0f, -92.17142f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_horse_stay2", "horse_stay", -2842.107f, 20.07843f, 3077.05f, 0.0f, -62.75959f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_768), 0);
	Local_79.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_horse_stay1", "horse_stay", -2825.325f, 20.078f, 3061.285f, 0.0f, 291.1736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_772), 0);
	Local_79.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_horse_stay", "horse_stay", -2809.631f, 20.06283f, 3078.922f, 0.0f, 262.5791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_776), 0);
	Local_79.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_peeing2", "stand_peeing_b_any", -2856.467f, 18.07058f, 3083.134f, 0.0f, 88.69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_780), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_guntricks1", "stand_guntricks_e_any", -2820.465f, 20.07843f, 3077.348f, 0.0f, -216.9882f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_guntricks", "stand_guntricks_e_any", -2822.097f, 20.07843f, 3079.603f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_sleeping_wall_scripted", "sleeping_wall_scripted", -2832.129f, 20.19984f, 3075.018f, 0.0f, -91.55288f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_lookdistance_binocs", "look_distance_binocs", -2810.723f, 20.06739f, 3080.786f, 0.0f, -93.60166f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", -2827.709f, 20.21305f, 3073.477f, 0.0f, -93.82076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_lean_fence_L_talking", "lean_fence_L_talking", -2815.689f, 20.069f, 3080.324f, 0.0f, -86.0629f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_look_out_window_R", "look_out_window_R", -2827.741f, 20.22371f, 3077.974f, 0.0f, -183.1475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_Rand_Idle_NearWall", "Rand_Idle_NearWall", -2834.184f, 20.0484f, 3078.272f, 0.0f, -269.9485f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_stand_lookdistance", "stand_lookdistance_w_any", -2808.104f, 19.074f, 3061.17f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_lookdistance_bi", "look_distance_binocs", -1848.0f, 24.20136f, 3296.0f, 0.0f, -48.03191f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_riverwash", "nriverwash", -1896.0f, 20.03532f, 3278.427f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_play_harmonica", "sit_ground_play_harmonica", -1864.677f, 25.66241f, 3306.876f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_Pee", "Pee", -1866.15f, 24.92944f, 3310.094f, 0.0f, -39.43715f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_swall_scripted", "sleeping_wall_scripted", -1860.336f, 24.94665f, 3308.0f, 0.0f, -90.61703f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_rand_idle_stand1", "rand_idle_stand", -2889.7f, 74.951f, 2179.784f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_horse_stay1", "horse_stay", -2876.946f, 63.95793f, 2208.62f, 0.0f, -411.4891f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_horse_stay", "horse_stay", -2881.993f, 63.32512f, 2207.375f, 0.0f, -324.5696f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "PlHse_Rand_Idlewall1", "Rand_Idle_NearWall", -2832.241f, 50.06886f, 2419.76f, 0.0f, -165.8873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "pleg_horse_tend", "horse_tend", -2837.17f, 50.06274f, 2419.742f, 0.0f, -174.6107f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "pleg_horse_stay3", "horse_stay", -2836.022f, 50.00851f, 2422.997f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "pleg_horse_stay2", "horse_stay", -2828.464f, 49.72395f, 2428.7f, 0.0f, 5.013465f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "pleg_horse_stay1", "horse_stay", -2829.578f, 50.06861f, 2422.836f, 0.0f, -98.19669f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "pleg_horse_stay", "horse_stay", -2828.639f, 50.00851f, 2425.449f, 0.0f, -93.15823f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_79, "pleg_stand_smoke", "smoking_stand_campfire", -2828.633f, 50.367f, 2415.569f, 0.0f, 6.046f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_784), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "PlHse_lean_rail1", "stand_lookdistance_w_any", -2823.15f, 50.13624f, 2418.37f, 0.0f, -133.9271f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "PlHse_lean_rail", "stand_lookdistance_w_any", -2829.861f, 50.02065f, 2404.48f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "nPlHse_Pee", "Pee", -2837.53f, 49.99474f, 2417.286f, 0.0f, 92.59926f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "PlHse_Rand_Idlewall", "Rand_Idle_NearWall", -2835.383f, 49.87704f, 2413.798f, 0.0f, 13.29576f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "PlHse_Rand_Idle_Sit", "Rand_Idle_Sit_Ground", -2833.558f, 49.85797f, 2413.086f, 0.0f, 20.55275f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "PlHse_look_distance_b", "look_distance_binocs", -2818.289f, 50.16013f, 2441.946f, 0.0f, 145.3511f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "PlHse_stand_lookdistance", "stand_lookdistance_w_any", -2803.651f, 47.61401f, 2435.472f, 0.0f, 604.6125f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_smoking_stand3", "smoking_stand", -2864.773f, 73.869f, 2177.522f, 0.0f, -140.3333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_Pee2", "Pee", -2884.337f, 68.098f, 2196.993f, 0.0f, -8.973413f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_smoking_stand2", "smoking_stand", -2889.596f, 68.07998f, 2189.904f, 0.0f, -115.3605f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_sleeping_wall", "sleeping_wall_scripted", -2868.646f, 69.94992f, 2190.018f, 0.0f, 30.61945f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_Pee1", "Pee", -2888.585f, 74.67922f, 2179.7f, 0.0f, 17.31714f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_stand_guntricks", "stand_guntricks_e_any", -2851.004f, 74.49863f, 2160.491f, 0.0f, -178.8246f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "stand_yawning_n_any1", "stand_yawning_n_any", -2869.534f, 77.34993f, 2171.384f, 0.0f, -446.2964f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_smoking_stand1", "smoking_stand", -2850.925f, 80.91016f, 2152.941f, 0.0f, -186.2538f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_stand_yawning", "stand_yawning_n_any", -2863.793f, 82.21507f, 2162.268f, 0.0f, 47.39015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_smoking_stand", "smoking_stand", -2865.889f, 82.13461f, 2160.711f, 0.0f, 156.7821f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_Rand_Idle_Sit1", "Rand_Idle_Sit_Ground", -2866.512f, 82.24068f, 2162.827f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_lookdistance_bin1", "look_distance_binocs", -2905.05f, 63.644f, 2225.066f, 0.0f, -67.55823f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_lookdistance_b", "look_distance_binocs", -2856.574f, 62.45f, 2205.337f, 0.0f, -164.3135f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk__lookdistance2", "stand_lookdistance_w_any", -2848.564f, 66.814f, 2179.506f, 0.0f, 203.8714f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_lookdistance1", "stand_lookdistance_w_any", -2884.276f, 68.109f, 2196.944f, 0.0f, 182.2417f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RatSnk_lookdistance_bin", "look_distance_binocs", -2877.223f, 63.679f, 2212.098f, 0.0f, -181.4657f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_lie_sleep_on_bed_r", "lie_sleep_on_bed_r", -1865.814f, 25.66671f, 3307.519f, 0.0f, 87.70355f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_stand_yawning_n_any", "stand_yawning_n_any", -1865.306f, 25.66399f, 3305.107f, 0.0f, 39.85841f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_use_shelf", "nuse_shelf", -1862.918f, 25.66398f, 3306.517f, 0.0f, -88.87695f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_smoking_stand", "smoking_stand", -1856.748f, 24.94665f, 3306.175f, 0.0f, 8.869471f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_lean_fence_L_talking", "nlean_rail", -1866.671f, 25.6088f, 3300.205f, 0.0f, 88.52171f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_lean_fence_L", "lean_fence_L", -1876.88f, 24.78501f, 3302.044f, 0.0f, 2.954553f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_lean_rail", "nlean_rail", -1862.731f, 25.68472f, 3300.49f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_Rand_Idle_Sit_G1", "Rand_Idle_Sit_Ground", -2297.463f, 17.06667f, 3189.693f, 0.0f, -60.72914f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_horse_stay1", "horse_stay", -2325.298f, 17.06667f, 3163.429f, 0.0f, -54.787f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_horse_stay", "horse_stay", -2339.857f, 17.06667f, 3159.897f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_horse_tend4", "horse_tend", -2328.579f, 17.06667f, 3159.601f, 0.0f, -12.03976f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_horse_stay3", "horse_stay", -2332.498f, 17.06667f, 3159.259f, 0.0f, -183.6086f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_horse_stay2", "horse_stay", -2336.508f, 17.06667f, 3159.829f, 0.0f, -164.9671f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_stand_guntricks_1", "stand_guntricks_e_any", -2331.044f, 17.06667f, 3167.898f, 0.0f, -91.07268f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_smoking_stand5", "smoking_stand", -2331.86f, 17.067f, 3173.427f, 0.0f, -145.6339f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_earWall1", "Rand_Idle_NearWall", -2335.833f, 17.06667f, 3165.465f, 0.0f, 2.348993f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_rand_idle_stand", "rand_idle_stand", -2306.294f, 17.067f, 3165.18f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_Pee3", "Pee", -2284.865f, 17.47239f, 3186.339f, 0.0f, -36.12689f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_look_distance_bin", "look_distance_binocs", -2307.035f, 19.98892f, 3193.416f, 0.0f, 213.3344f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_smoking_stand4", "smoking_stand", -2296.114f, 17.06667f, 3187.239f, 0.0f, 139.1357f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_Rand_Idle_Sit_G", "Rand_Idle_Sit_Ground", -2295.173f, 17.06667f, 3189.489f, 0.0f, 61.58029f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_stand_lookdistance_", "stand_lookdistance_w_any", -2313.974f, 18.98317f, 3139.142f, 0.0f, -81.86817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "RilCrg_sleeping_wall", "sleeping_wall_scripted", -2335.925f, 17.112f, 3171.869f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_horse_tend2", "horse_tend", -1862.967f, 24.924f, 3296.038f, 0.0f, 177.8756f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_horse_stay1", "horse_stay", -1860.0f, 24.924f, 3296.0f, 0.0f, -34.19213f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_horse_stay2", "horse_stay", -1861.859f, 24.929f, 3312.894f, 0.0f, -96.24462f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "LDJ_horse_tend3", "horse_tend", -1861.174f, 24.929f, 3314.454f, 0.0f, 84.86111f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", -1809.164f, 34.13332f, 2614.975f, 0.0f, 0.0f, 0.0f);
	Local_79.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", -1872.868f, 25.09804f, 2534.356f, 0.0f, 0.0f, 0.0f);
	Local_79.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", -1819.221f, 33.12939f, 2498.033f, 0.0f, 0.0f, 0.0f);
	Local_79.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", -1881.43f, 27.10588f, 2354.711f, 0.0f, 0.0f, 0.0f);
	Local_79.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", -1776.0f, 42.16269f, 2420.654f, 0.0f, 0.0f, 0.0f);
	Local_79.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", -1862.088f, 25.43321f, 2253.097f, 0.0f, 0.0f, 0.0f);
	Local_79.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", -1863.983f, 24.80974f, 2124.637f, 0.0f, 111.3935f, 0.0f);
	Local_79.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", -1953.868f, 25.73973f, 2156.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", -2076.509f, 18.07056f, 2114.895f, 0.0f, 0.0f, 0.0f);
	Local_79.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew9", "Player_Herb_WildFeverFew", -2117.773f, 17.05431f, 2306.228f, 0.0f, 0.0f, 0.0f);
	Local_79.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", -2062.649f, 16.06273f, 2395.693f, 0.0f, 0.0f, 0.0f);
	Local_79.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", -2025.139f, 16.06274f, 2494.748f, 0.0f, 0.0f, 0.0f);
	Local_79.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", -2186.835f, 16.56468f, 2494.746f, 0.0f, 0.0f, 0.0f);
	Local_79.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", -2004.895f, 19.07037f, 2663.057f, 0.0f, 0.0f, 0.0f);
	Local_79.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", -1888f, 26.09381f, 2740.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew15", "Player_Herb_WildFeverFew", -2097.638f, 16.07927f, 2757.475f, 0.0f, 0.0f, 0.0f);
	Local_79.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew16", "Player_Herb_WildFeverFew", -1936f, 26.09594f, 2816.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew17", "Player_Herb_WildFeverFew", -1750.301f, 29.11371f, 2951.231f, 0.0f, 0.0f, 0.0f);
	Local_79.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew18", "Player_Herb_WildFeverFew", -1713.958f, 29.11143f, 2785.685f, 0.0f, 0.0f, 0.0f);
	Local_79.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew19", "Player_Herb_WildFeverFew", -1793.629f, 32.12547f, 3028.976f, 0.0f, 0.0f, 0.0f);
	Local_79.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew20", "Player_Herb_WildFeverFew", -1599.583f, 31.12155f, 3058.855f, 0.0f, 0.0f, 0.0f);
	Local_79.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew21", "Player_Herb_WildFeverFew", -1681.41f, 30.58092f, 3150.357f, 0.0f, 0.0f, 0.0f);
	Local_79.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew22", "Player_Herb_WildFeverFew", -1986.594f, 41.1608f, 3140.292f, 0.0f, 0.0f, 0.0f);
	Local_79.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew23", "Player_Herb_WildFeverFew", -1953.15f, 43.16864f, 3336.652f, 0.0f, 0.0f, 0.0f);
	Local_79.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew24", "Player_Herb_WildFeverFew", -1998.062f, 38.17972f, 3299.311f, 0.0f, 0.0f, 0.0f);
	Local_79.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew25", "Player_Herb_WildFeverFew", -1649.182f, 39.15294f, 3581.322f, 0.0f, 0.0f, 0.0f);
	Local_79.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew26", "Player_Herb_WildFeverFew", -1926.915f, 32.84261f, 3450.15f, 0.0f, 0.0f, 0.0f);
	Local_79.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew27", "Player_Herb_WildFeverFew", -2208.176f, 27.10588f, 3275.162f, 0.0f, 0.0f, 0.0f);
	Local_79.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew28", "Player_Herb_WildFeverFew", -2272.921f, 21.08237f, 3141.617f, 0.0f, 0.0f, 0.0f);
	Local_79.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew30", "Player_Herb_WildFeverFew", -2304.0f, 16.06275f, 3103.27f, 0.0f, 0.0f, 0.0f);
	Local_79.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew31", "Player_Herb_WildFeverFew", -2506.098f, 20.07843f, 3029.75f, 0.0f, 0.0f, 0.0f);
	Local_79.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew32", "Player_Herb_WildFeverFew", -2267.31f, 25.62406f, 3004.974f, 0.0f, 0.0f, 0.0f);
	Local_79.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew33", "Player_Herb_WildFeverFew", -2380.0f, 15.05882f, 2916.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew34", "Player_Herb_WildFeverFew", -2400f, 15.05884f, 2816f, 0.0f, 0.0f, 0.0f);
	Local_79.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew35", "Player_Herb_WildFeverFew", -2386.359f, 26.56646f, 2669.375f, 0.0f, 0.0f, 0.0f);
	Local_79.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew36", "Player_Herb_WildFeverFew", -2430.064f, 28.93966f, 2539.944f, 0.0f, 0.0f, 0.0f);
	Local_79.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew37", "Player_Herb_WildFeverFew", -2446.346f, 21.06786f, 2434.44f, 0.0f, 0.0f, 0.0f);
	Local_79.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew38", "Player_Herb_WildFeverFew", -2465.73f, 22.34854f, 2327.623f, 0.0f, 0.0f, 0.0f);
	Local_79.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew39", "Player_Herb_WildFeverFew", -2564.0f, 33.12941f, 2264.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew40", "Player_Herb_WildFeverFew", -2484f, 24.59608f, 2124f, 0.0f, 0.0f, 0.0f);
	Local_79.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew41", "Player_Herb_WildFeverFew", -2594.33f, 31.12157f, 2228.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew42", "Player_Herb_WildFeverFew", -2721.778f, 48.18823f, 2246.322f, 0.0f, 0.0f, 0.0f);
	Local_79.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew43", "Player_Herb_WildFeverFew", -2821.329f, 50.19109f, 2278.865f, 0.0f, 0.0f, 0.0f);
	Local_79.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew44", "Player_Herb_WildFeverFew", -2787.912f, 45.17645f, 2364.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew45", "Player_Herb_WildFeverFew", -2931.98f, 42.1647f, 2445.57f, 0.0f, 0.0f, 0.0f);
	Local_79.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew46", "Player_Herb_WildFeverFew", -2725.072f, 43.66911f, 2588.745f, 0.0f, 0.0f, 0.0f);
	Local_79.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew47", "Player_Herb_WildFeverFew", -2886.282f, 24.30968f, 2586.586f, 0.0f, 0.0f, 0.0f);
	Local_79.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew48", "Player_Herb_WildFeverFew", -3057.38f, 23.59215f, 2636.545f, 0.0f, 0.0f, 0.0f);
	Local_79.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew49", "Player_Herb_WildFeverFew", -3162f, 27.03656f, 2619.981f, 0.0f, 0.0f, 0.0f);
	Local_79.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew50", "Player_Herb_WildFeverFew", -2972.393f, 18.99831f, 2724.636f, 0.0f, 0.0f, 0.0f);
	Local_79.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew51", "Player_Herb_WildFeverFew", -2931.138f, 16.5647f, 2769.227f, 0.0f, 0.0f, 0.0f);
	Local_79.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew52", "Player_Herb_WildFeverFew", -2820f, 15.04506f, 2880.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew53", "Player_Herb_WildFeverFew", -2677.099f, 37.0814f, 2862.823f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew54", "Player_Herb_WildFeverFew", -2583.262f, 24.07536f, 2836f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew55", "Player_Herb_WildFeverFew", -2944f, 13.05095f, 2988.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew56", "Player_Herb_WildFeverFew", -3025.173f, 12.04702f, 2939.328f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew57", "Player_Herb_WildFeverFew", -2996.0f, 16.06271f, 3052.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew58", "Player_Herb_WildFeverFew", -2870.417f, 18.05603f, 3068.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew59", "Player_Herb_WildFeverFew", -2961.148f, 39.14639f, 3152.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew60", "Player_Herb_WildFeverFew", -3364f, 34.76507f, 2897.138f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew61", "Player_Herb_WildFeverFew", -3451.863f, 38.68925f, 2782.621f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew62", "Player_Herb_WildFeverFew", -3516.026f, 18.00411f, 2658.301f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew63", "Player_Herb_WildFeverFew", -3466.109f, 20.10135f, 2579.818f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew64", "Player_Herb_WildFeverFew", -3487.573f, 21.96187f, 2449.466f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew65", "Player_Herb_WildFeverFew", -3451.715f, 32.39011f, 2378.037f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew66", "Player_Herb_WildFeverFew", -3329.114f, 33.22234f, 2416.813f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew67", "Player_Herb_WildFeverFew", -3153.094f, 32.99203f, 2528.005f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew68", "Player_Herb_WildFeverFew", -2877.417f, 27.083f, 2542.436f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew69", "Player_Herb_WildFeverFew", -2801.798f, 29.59754f, 2698.214f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew70", "Player_Herb_WildFeverFew", -2565.893f, 29.11371f, 2579.068f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew71", "Player_Herb_WildFeverFew", -2532.0f, 24.08308f, 2825.685f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew72", "Player_Herb_WildFeverFew", -2548.0f, 22.0697f, 3064.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew73", "Player_Herb_WildFeverFew", -2732.613f, 36.07454f, 3114.997f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew74", "Player_Herb_WildFeverFew", -2252.015f, 14.23525f, 2837.254f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew75", "Player_Herb_WildFeverFew", -2392.0f, 16.04904f, 3033.567f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew76", "Player_Herb_WildFeverFew", -2121.752f, 31.11604f, 3150.439f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew77", "Player_Herb_WildFeverFew", -2188.784f, 26.07653f, 3335.883f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew78", "Player_Herb_WildFeverFew", -1913.648f, 14.05918f, 3527.989f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew79", "Player_Herb_WildFeverFew", -1592.0f, 42.16473f, 3580.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew80", "Player_Herb_WildFeverFew", -1917.401f, 46.16298f, 3350.608f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew81", "Player_Herb_WildFeverFew", -2058.322f, 33.12001f, 3268.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew83", "Player_Herb_WildFeverFew", -2101.707f, 38.21952f, 3009.054f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew84", "Player_Herb_WildFeverFew", -2016.0f, 16.05705f, 2452.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew85", "Player_Herb_WildFeverFew", -1808.353f, 34.11918f, 3010.601f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew86", "Player_Herb_WildFeverFew", -2020.183f, 33.11653f, 2904.958f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew87", "Player_Herb_WildFeverFew", -1901.352f, 27.10078f, 2829.72f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew88", "Player_Herb_WildFeverFew", -1648.51f, 30.11284f, 3033.932f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew89", "Player_Herb_WildFeverFew", -1635.213f, 36.12833f, 2925.545f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew90", "Player_Herb_WildFeverFew", -1931.117f, 18.0657f, 2546.134f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew91", "Player_Herb_WildFeverFew", -2450.85f, 24.07297f, 2305.088f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew92", "Player_Herb_WildFeverFew", -2288f, 25.59441f, 2265.334f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew93", "Player_Herb_WildFeverFew", -2159.397f, 18.07059f, 2131.043f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew94", "Player_Herb_WildFeverFew", -2582.329f, 28.10516f, 2194.395f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew95", "Player_Herb_WildFeverFew", -1856f, 24.09851f, 2176.955f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew96", "Player_Herb_WildFeverFew", -1964.618f, 27.10588f, 2090.045f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew97", "Player_Herb_WildFeverFew", -1934.848f, 19.07001f, 2482.137f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew98", "Player_Herb_WildFeverFew", -2032.373f, 16.06274f, 2420.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew99", "Player_Herb_WildFeverFew", -2930.862f, 30.97843f, 2541.092f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_WildFeverFew100", "Player_Herb_WildFeverFew", -2977.802f, 23.03248f, 2678.177f, 0.0f, -131.8582f, 0.0f);
	Local_79.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage", "Player_Herb_DesertSage", -3531.307f, 22.08626f, 2392f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage1", "Player_Herb_DesertSage", -3404f, 25.59999f, 2464f, 0.0f, 83.73667f, 0.0f);
	Local_79.f_1192 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", -3409.871f, 35.75687f, 2366.129f, 0.0f, 108.7428f, 0.0f);
	Local_79.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage3", "Player_Herb_DesertSage", -3501.291f, 17.07282f, 2676.421f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1200 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", -3390.313f, 22.58824f, 2533.687f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1204 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", -3357.473f, 28.10983f, 2833.473f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1208 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", -3185.485f, 28.44057f, 2866.027f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1212 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", -3111.059f, 22.47323f, 2672f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1216 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", -3313.609f, 48.9672f, 2286.391f, 0.0f, -150.0233f, 0.0f);
	Local_79.f_1220 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", -3439.223f, 45.05908f, 2292.257f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1224 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage10", "Player_Herb_DesertSage", -3520.0f, 18.57258f, 2592.073f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1228 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage11", "Player_Herb_DesertSage", -3377.422f, 11.94043f, 2970.384f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1232 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage12", "Player_Herb_DesertSage", -3087.329f, 12.04706f, 2967.311f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1236 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage13", "Player_Herb_DesertSage", -3040f, 12.04702f, 2928f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1240 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_DesertSage14", "Player_Herb_DesertSage", -3046.282f, 19.91639f, 2709.539f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1244 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage", "Player_Herb_RedSage", -2952f, 14.05487f, 3009.02f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1248 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage1", "Player_Herb_RedSage", -2703.62f, 28.74411f, 2983.983f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1252 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage2", "Player_Herb_RedSage", -2602.854f, 20.07299f, 3008f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1256 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage3", "Player_Herb_RedSage", -2461.875f, 19.07451f, 3039.008f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1260 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage4", "Player_Herb_RedSage", -2370.378f, 15.05882f, 2993.947f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1264 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage5", "Player_Herb_RedSage", -2182.813f, 33.12939f, 3067.767f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1268 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage6", "Player_Herb_RedSage", -2204.127f, 29.11371f, 2952.043f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1272 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage7", "Player_Herb_RedSage", -2496.0f, 26.09545f, 2802.195f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1276 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage8", "Player_Herb_RedSage", -2327.571f, 15.20463f, 2857.772f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage9", "Player_Herb_RedSage", -2734.011f, 30.11765f, 2873.989f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1284 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage10", "Player_Herb_RedSage", -2969.938f, 17.10321f, 2784f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1288 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage11", "Player_Herb_RedSage", -3141.563f, 11.81059f, 2959.274f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1292 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage12", "Player_Herb_RedSage", -2420.0f, 16.06274f, 3068.0f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1296 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage13", "Player_Herb_RedSage", -2238.543f, 25.09804f, 3101.457f, 0.0f, 0.0f, 0.0f);
	Local_79.f_1300 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Player_Herb_RedSage14", "Player_Herb_RedSage", -2068.0f, 36.14114f, 2984f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "look_distance_binocsx", "look_distance_binocs", -2299.929f, 27.38924f, 2245.614f, 0.0f, -146.725f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_1304 = CREATE_GRINGO_IN_LAYOUT(Local_79, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -2833.042f, 50.35676f, 2415.177f, 0.0f, -157.8512f, 0.0f);
	Local_79.f_1308 = CREATE_GRINGO_IN_LAYOUT(Local_79, "player_sleep_PLE", "player_sleep_bed_R", -2833.441f, 50.332f, 2417.903f, 0.0f, 103.9856f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_horse_stay4", "horse_stay", -2833.166f, 20.082f, 3098.089f, 0.0f, -92.17142f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_79.f_1312 = CREATE_GRINGO_IN_LAYOUT(Local_79, "mrc_horse_stay5", "horse_stay", -2832.59f, 20.078f, 3061.418f, 0.0f, 291.1736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_79.f_1312), 0);
	return 1;
}

bool Function_113(int iParam0) //Position: 0xEB17 / 60183
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_117();
	iVar1 = 0;
	if (!Function_23(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_116(iParam0[iVar03], 8);
		}
		else if (Function_115())
		{
			iVar1 = 1;
			Function_116(iParam0[iVar03], 8);
		}
		Function_116(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_23(iParam0[iVar03], 4))
		{
			if (!Function_23(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_23(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_23(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_116(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_23(iParam0[iVar03], 4))
		{
			if (!Function_23(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_116(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_116(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_116(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_116(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_116(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_116(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_116(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_116(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_116(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_116(iParam0[iVar03], 2);
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
	Function_114();
	return 1;
}

void Function_114() //Position: 0xEE92 / 61074
{
	if (!Function_63(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_115() //Position: 0xEED2 / 61138
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

void Function_116(var uParam0, int iParam1) //Position: 0xEEFD / 61181
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_117() //Position: 0xEF0E / 61198
{
	if (!Function_63(128))
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

var Function_118(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xEF50 / 61264
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_119(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_116(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_119(var uParam0, int iParam1, int iParam2) //Position: 0xEF88 / 61320
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_23(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_116(uParam0[iVar03], 4);
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

bool Function_120() //Position: 0xF04C / 61516
{
	return Function_121();
}

int Function_121() //Position: 0xF055 / 61525
{
	var uVar0;
	
	Function_108(3, 3);
	uVar0 = uVar0;
	Function_118(&Local_6 + 4, "p_uti_cover2x1x", 0, 0);
	Function_118(&Local_6 + 4, "p_uti_cover1x1x", 0, 0);
	Function_118(&Local_6 + 4, "p_uti_cover1x2x", 0, 0);
	if (!Function_113(&Local_6 + 4))
	{
		return 0;
	}
	Local_6 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
	if (!IS_LAYOUTREF_VALID(Local_6))
	{
		Local_6 = CREATE_LAYOUT("ChollaSprings_layout");
	}
	Local_6.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_6, "chov_Graveyard", 3, -2908.625f, 17.94441f, 2688.64f, 0.0f, 20.0f, 0.0f, 26.60202f, 7.525174f, 26.60202f);
	*(&Local_6 + 48) = { -2434.318f, 25.34245f, 2138.649f };
	*(&Local_6 + 48 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_6.f_72 = CREATE_POINT_IN_LAYOUT(Local_6, "CHO_twrCampfire", -2434.318f, 25.34245f, 2138.649f, 0.0f, 0.0f, 0.0f);
	Local_6.f_76 = Function_122(Local_6, "cover2x1x0", "p_uti_cover2x1x", -1874.574f, 25.15615f, 3310.97f, 0.0f, -55.16314f, 0.0f, 1);
	Local_6.f_80 = Function_122(Local_6, "cover2x1x1", "p_uti_cover2x1x", -1875.562f, 24.42323f, 3298.636f, 41.3482f, -94.0601f, -42.74914f, 1);
	Local_6.f_84 = Function_122(Local_6, "cover2x1x2", "p_uti_cover2x1x", -1894.672f, 24.81348f, 3305.489f, 79.69798f, -96.1249f, -80.11449f, 1);
	Local_6.f_88 = Function_122(Local_6, "cover1x1x0", "p_uti_cover1x1x", -1893.099f, 23.6921f, 3299.567f, 1.031222f, 0.0f, 0.0f, 1);
	Local_6.f_92 = Function_122(Local_6, "cover1x2x0", "p_uti_cover1x2x", -1872.981f, 24.77232f, 3301.277f, 0.0f, 0.0f, 0.0f, 1);
	Local_6.f_96 = Function_122(Local_6, "cover1x1x1", "p_uti_cover1x1x", -1889.483f, 25.20171f, 3305.896f, 0.3153433f, 0.0f, 0.0f, 1);
	Local_6.f_100 = Function_122(Local_6, "cover1x1x2", "p_uti_cover1x1x", -1870.083f, 24.25316f, 3294.455f, 0.02395189f, 16.52971f, -1.150986f, 1);
	Local_6.f_104 = Function_122(Local_6, "cover2x1x3", "p_uti_cover2x1x", -1871.17f, 24.65515f, 3297.785f, 0.0f, -108.0473f, 0.0f, 1);
	Local_6.f_108 = Function_122(Local_6, "cover2x1x4", "p_uti_cover2x1x", -1898.048f, 24.17256f, 3300.073f, -86.26497f, -92.01823f, 86.6328f, 1);
	Local_6.f_112 = Function_122(Local_6, "cover1x2x1", "p_uti_cover1x2x", -1898.89f, 23.66671f, 3297.622f, 0.0f, 0.0f, 0.0f, 1);
	Local_6.f_116 = Function_122(Local_6, "cover2x1x5", "p_uti_cover2x1x", -1868.45f, 24.91129f, 3314.147f, 0.0f, -122.8839f, 0.0f, 1);
	Local_6.f_120 = Function_122(Local_6, "cover1x1x3", "p_uti_cover1x1x", -1852.681f, 24.91608f, 3301.679f, 0.0f, -30.25064f, 0.0f, 1);
	Local_6.f_124 = Function_122(Local_6, "cover2x1x6", "p_uti_cover2x1x", -1855.119f, 24.97884f, 3301.298f, 0.0f, 59.71492f, 0.0f, 1);
	Local_6.f_128 = Function_122(Local_6, "cover2x1x7", "p_uti_cover2x1x", -1852.854f, 24.77687f, 3297.26f, -5.619742f, 57.96167f, -4.432617f, 1);
	Local_6.f_132 = Function_122(Local_6, "cover1x1x4", "p_uti_cover1x1x", -1877.822f, 25.19737f, 3307.809f, -2.465835f, -2.881502f, -3.360986f, 1);
	Local_6.f_136 = Function_122(Local_6, "cover2x1x8", "p_uti_cover2x1x", -1879.318f, 36.23691f, 3321.556f, 173.9886f, -168.316f, -179.2431f, 1);
	Local_6.f_140 = Function_122(Local_6, "cover1x1x5", "p_uti_cover1x1x", -1883.052f, 36.229f, 3320.932f, -11.42422f, -12.52498f, 3.229102f, 1);
	Local_6.f_144 = Function_122(Local_6, "cover1x2x2", "p_uti_cover1x2x", -1875.51f, 36.1945f, 3322.666f, -9.240377f, -19.99353f, -0.5183975f, 1);
	Local_6.f_148 = Function_122(Local_6, "cover2x1x9", "p_uti_cover2x1x", -1871.931f, 36.01286f, 3324.151f, 167.0025f, -157.7994f, -184.747f, 1);
	Local_6.f_152 = Function_122(Local_6, "cover2x1x10", "p_uti_cover2x1x", -1886.588f, 35.91621f, 3320.727f, 162.9637f, -175.6157f, -170.9016f, 1);
	Local_6.f_156 = Function_122(Local_6, "cover2x1x11", "p_uti_cover2x1x", -1937.624f, 27.33243f, 2260.236f, 0.0f, 95.86443f, 0.0f, 1);
	Local_6.f_160 = Function_122(Local_6, "cover2x1x12", "p_uti_cover2x1x", -1926.193f, 27.129f, 2285.985f, 0.0f, 156.8953f, 0.0f, 1);
	Local_6.f_164 = Function_122(Local_6, "cover2x1x13", "p_uti_cover2x1x", -1927.651f, 27.44351f, 2275.759f, 0.0f, -28.0458f, 0.0f, 1);
	Local_6.f_168 = Function_122(Local_6, "cover2x1x14", "p_uti_cover2x1x", -1938.835f, 27.18849f, 2252.075f, 0.0f, 89.23954f, 0.0f, 1);
	Local_6.f_172 = Function_122(Local_6, "cover1x2x3", "p_uti_cover1x2x", -1938.844f, 27.19193f, 2253.084f, -0.673139f, -0.07919134f, -0.06951825f, 1);
	Local_6.f_176 = Function_122(Local_6, "cover1x1x6", "p_uti_cover1x1x", -1932.0f, 27.79487f, 2250.824f, 0.0f, 7.039717f, 0.0f, 1);
	Local_6.f_180 = Function_122(Local_6, "cover1x1x7", "p_uti_cover1x1x", -1930.538f, 28.08783f, 2244.0f, 0.0f, 15.29191f, 0.0f, 1);
	Local_6.f_184 = Function_122(Local_6, "cover1x1x8", "p_uti_cover1x1x", -1916.584f, 27.95595f, 2242.491f, 0.0f, 0.0f, 0.0f, 1);
	Local_6.f_188 = Function_122(Local_6, "cover1x1x9", "p_uti_cover1x1x", -1928.13f, 28.11059f, 2247.87f, 0.0f, 0.0f, 0.0f, 1);
	Local_6.f_192 = Function_122(Local_6, "cover2x1x15", "p_uti_cover2x1x", -1935.932f, 27.03125f, 2234.192f, 0.0f, -137.268f, 0.0f, 1);
	Local_6.f_196 = Function_122(Local_6, "cover1x2x4", "p_uti_cover1x2x", -1942.899f, 26.81865f, 2238.644f, 0.0f, 47.61343f, 0.0f, 1);
	Local_6.f_200 = Function_122(Local_6, "cover2x1x16", "p_uti_cover2x1x", -1942.899f, 26.81865f, 2238.644f, 0.0f, 47.61343f, 0.0f, 1);
	Local_6.f_204 = Function_122(Local_6, "cover2x1x17", "p_uti_cover2x1x", -1949.317f, 26.52253f, 2253.317f, 0.0f, -77.24281f, 0.0f, 1);
	Local_6.f_208 = Function_122(Local_6, "cover2x1x18", "p_uti_cover2x1x", -1952.928f, 26.29795f, 2257.751f, 0.0f, -80.79298f, 0.0f, 1);
	Local_6.f_212 = Function_122(Local_6, "cover2x1x19", "p_uti_cover2x1x", -1943.015f, 27.06477f, 2275.347f, 0.0f, -62.59982f, 0.0f, 1);
	Local_6.f_216 = Function_122(Local_6, "cover2x1x20", "p_uti_cover2x1x", -1938.285f, 27.19747f, 2280.0f, 0.0f, -45.37524f, 0.0f, 1);
	Local_6.f_220 = Function_122(Local_6, "cover2x1x21", "p_uti_cover2x1x", -1943.22f, 27.10296f, 2280.717f, -2.120075f, -50.84748f, 2.269612f, 1);
	Local_6.f_224 = Function_122(Local_6, "cover1x1x10", "p_uti_cover1x1x", -1926.155f, 27.10197f, 2294.155f, 0.0f, 0.0f, 0.0f, 1);
	Local_6.f_228 = Function_122(Local_6, "cover2x1x22", "p_uti_cover2x1x", -2831.469f, 50.00412f, 2405.231f, 0.0f, 0.7156401f, 0.0f, 1);
	Local_6.f_232 = Function_122(Local_6, "cover2x1x23", "p_uti_cover2x1x", -2793.605f, 43.169f, 2404.136f, 0.0f, -50.4087f, 0.0f, 1);
	Local_6.f_236 = Function_122(Local_6, "cover1x1x11", "p_uti_cover1x1x", -2794.258f, 43.559f, 2413.021f, 0.0f, 0.0f, 0.0f, 1);
	Local_6.f_240 = Function_122(Local_6, "cover2x1x24", "p_uti_cover2x1x", -1898.208f, 25.01152f, 3304.696f, 70.42919f, -97.66837f, -70.31107f, 1);
	Local_6.f_244 = Function_122(Local_6, "cover2x1x25", "p_uti_cover2x1x", -1890.802f, 23.54468f, 3298.707f, 126.1768f, -93.78294f, -126.5071f, 1);
	Local_6.f_248 = Function_122(Local_6, "cover1x2x5", "p_uti_cover1x2x", -1897.234f, 25.1286f, 3305.447f, -0.673139f, -0.07919134f, -0.06951825f, 1);
	Local_6.f_252 = Function_122(Local_6, "cover2x1x26", "p_uti_cover2x1x", -1881.15f, 25.86003f, 3310.732f, 0.0f, -88.32053f, 0.0f, 1);
	Local_6.f_256 = Function_122(Local_6, "cover2x1x27", "p_uti_cover2x1x", -1881.845f, 25.85751f, 3312.087f, 0.0f, -114.1054f, 0.0f, 1);
	Local_6.f_260 = Function_122(Local_6, "cover1x1x12", "p_uti_cover1x1x", -1887.29f, 25.4781f, 3307.655f, -3.769616f, 0.0f, 0.0f, 1);
	Local_6.f_264 = Function_122(Local_6, "cover2x1x28", "p_uti_cover2x1x", -1874.386f, 25.15075f, 3312.564f, 0.3631007f, -80.21103f, 0.1407903f, 1);
	Local_6.f_268 = Function_122(Local_6, "cover1x2x6", "p_uti_cover1x2x", -1881.178f, 26.24035f, 3313.337f, -0.7079128f, -18.03272f, 0.1487029f, 1);
	Local_6.f_272 = Function_122(Local_6, "cover2x1x29", "p_uti_cover2x1x", -1870.552f, 24.71342f, 3296.645f, -39.57664f, -71.99532f, 39.89071f, 1);
	Local_6.f_276 = Function_122(Local_6, "cover2x1x30", "p_uti_cover2x1x", -1877.726f, 24.73512f, 3301.444f, 41.3482f, -94.0601f, -42.74914f, 1);
	Local_6.f_280 = Function_122(Local_6, "cover2x1x31", "p_uti_cover2x1x", -1876.875f, 24.98071f, 3306.579f, -2.250155f, -91.79108f, 0.9232733f, 1);
	Local_6.f_284 = Function_122(Local_6, "cover1x2x7", "p_uti_cover1x2x", -1883.164f, 24.05248f, 3299.422f, 0.0f, 0.0f, 0.0f, 1);
	Local_6.f_288 = Function_122(Local_6, "cover1x1x13", "p_uti_cover1x1x", -1883.099f, 23.85318f, 3298.402f, 0.0f, 0.0f, 0.0f, 1);
	return 1;
}

var Function_122(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0xFF89 / 65417
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	iParam9 = iParam9;
	return "";
}

void Function_123() //Position: 0xFFB3 / 65459
{
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	REQUEST_STRING_TABLE("graveyards");
	return;
}

void Function_124(bool bParam0, int iParam1) //Position: 0xFFD2 / 65490
{
	if (!Function_63(128))
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

