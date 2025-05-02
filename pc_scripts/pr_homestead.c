//Decompiled with MagicRDR v1.0
//Function Count : 40
//Statics Count : 368
//Natives Count : 71
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	struct<11> Local_2[15];
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
	int iLocal_334 = 0;
	var uLocal_335 = 5;
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
	bool bLocal_357 = false;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	int iLocal_360 = 0;
	var uLocal_361 = 0;
	int iLocal_362 = 0;
	var uLocal_363 = 0;
	int iLocal_364 = 0;
	var uLocal_365 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_334 = 0;
	Global_43786 = 3;
	iLocal_0 = &iScriptParam_0;
	Function_38(&uLocal_335, "Companion_Wife", 1, 0);
	Function_38(&uLocal_335, "Companion_Son", 1, 0);
	Function_38(&uLocal_335, "Companion_Son_Bed", 1, 0);
	Function_38(&uLocal_335, "Companion_LeadWorker", 1, 0);
	Function_38(&uLocal_335, "Companion_Dog", 1, 0);
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_334)
		{
			case 0x00000000:
				if (Function_32(&uLocal_335))
				{
					bLocal_357 = false;
					iLocal_334 = 1;
				}
				break;
			
			case 0x00000001:
				if (!Function_31(57, 0))
				{
					uLocal_358 = Function_29(StackVal, 11, "Wife", 698, "Companion_Wife", Vector(0.0f, 0.0f, 0.0f), 1);
					Function_28(StackVal, 11, &Local_2, Vector(-105,646f, 119,461f, 1351,502f));
					Function_27(StackVal, 11, &Local_2, Vector(-103,925f, 119,512f, 1370,959f));
					Function_26(StackVal, 11, &Local_2, Vector(-105,646f, 119,461f, 1351,502f));
					Function_25(StackVal, 11, &Local_2, Vector(-108,452f, 119,461f, 1353,988f));
					Function_24(StackVal, 11, &Local_2, Vector(-105,646f, 119,461f, 1351,502f));
					Function_22(StackVal, 11, &Local_2, Vector(-99,39f, 119,488f, 1358,861f));
					Function_20(&uLocal_358, &(Local_2[1111]));
					if ((Function_31(53, 0) && (!Function_31(56, 0) || !Function_31(51, 0))) || Function_14(54))
					{
						Function_13();
					}
					else
					{
						Function_10();
					}
					iLocal_362 = Function_29(StackVal, 13, "Uncle", 646, "Companion_LeadWorker", Vector(0.0f, 0.0f, 0.0f), 1);
					Function_28(StackVal, 13, &Local_2, Vector(-111,411f, 119,461f, 1358,567f));
					Function_27(StackVal, 13, &Local_2, Vector(-56,226f, 116,85f, 1404.0f));
					Function_26(StackVal, 13, &Local_2, Vector(-111,411f, 119,461f, 1358,567f));
					Function_25(StackVal, 13, &Local_2, Vector(-56,226f, 116,85f, 1404.0f));
					Function_24(StackVal, 13, &Local_2, Vector(-111,411f, 119,461f, 1358,567f));
					Function_22(StackVal, 13, &Local_2, Vector(-113,517f, 119,489f, 1361,275f));
					Function_20(&iLocal_362, &(Local_2[1311]));
					iLocal_364 = Function_29(StackVal, 14, "Rufus", 1041, "Companion_Dog", Vector(0.0f, 0.0f, 0.0f), 1);
					Function_28(StackVal, 14, &Local_2, Vector(-117,301f, 118,869f, 1374,885f));
					Function_27(StackVal, 14, &Local_2, Vector(-121,87f, 118,869f, 1347,471f));
					Function_26(StackVal, 14, &Local_2, Vector(-99,432f, 118,727f, 1346,955f));
					Function_25(StackVal, 14, &Local_2, Vector(-74,269f, 116,861f, 1410,547f));
					Function_24(StackVal, 14, &Local_2, Vector(-117,301f, 118,869f, 1374,885f));
					Function_22(StackVal, 14, &Local_2, Vector(-106,766f, 119,489f, 1368,712f));
					Function_20(&iLocal_364, &(Local_2[1411]));
				}
				bLocal_357 = false;
				iLocal_334 = 2;
				break;
			
			case 0x00000002:
				Function_9(&(Global_43791[iScriptParam_0]), 4);
				bLocal_357 = false;
				iLocal_334 = 3;
				break;
			
			case 0x00000003:
				if (!IS_PERS_CHAR_VALID(&(Global_15402[1214])))
				{
				}
				else
				{
					Function_6();
				}
				if (Function_31(57, 0))
				{
					Function_9(&(Global_43791[Global_46722[3]]), 1024);
					iLocal_334 = 4;
					bLocal_357 = false;
				}
				else if (!Function_31(48, 0))
				{
					Function_5(&(Global_43791[Global_46722[2]]), 1024);
					Function_5(&(Global_43791[Global_46722[3]]), 1);
					Function_5(&(Global_43791[Global_46722[3]]), 2);
					iLocal_334 = 4;
					bLocal_357 = false;
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
			
			case 0x00000004:
				break;
		}
		WAIT(bLocal_357);
	}
	Function_1(&uLocal_335);
	Function_5(&(Global_43791[iLocal_0]), 64);
	Function_5(&(Global_43791[iLocal_0]), 4);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x42D / 1069
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_2(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x455 / 1109
{
	if (Function_4(&(Param0[iParam12]), 4))
	{
		if (Function_4(&(Param0[iParam12]), 1))
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
			Function_3(&(Param0[iParam12]), 1);
			Function_3(&(Param0[iParam12]), 2);
			Function_3(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_3(struct<13> Param0) //Position: 0x5A0 / 1440
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x5BD / 1469
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, int iParam1) //Position: 0x5DB / 1499
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_6() //Position: 0x5F5 / 1525
{
	var uVar0;
	
	uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iLocal_360);
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (!Function_31(53, 0))
		{
			if (Function_7(StackVal, &uVar0, Vector(-68,16f, 127,217f, 1371,621f), 5.0f) || &Global_15402[1214] + 16 != 640)
			{
				Function_10();
			}
		}
		else if (!Function_31(54, 0))
		{
			if (!Function_14(54))
			{
				if (&Global_15402[1214] + 16 != 640)
				{
					Function_13();
				}
				if (!DECOR_CHECK_EXIST(&uVar0, "hidden"))
				{
					SET_DRAW_ACTOR(&uVar0, 0);
					DECOR_SET_BOOL(&uVar0, "hidden", true);
				}
			}
		}
		else if (!Function_31(56, 0) || !Function_31(51, 0))
		{
			if (&Global_15402[1214] + 16 != 640)
			{
				Function_13();
				SET_DRAW_ACTOR(&uVar0, 1);
			}
			if (DECOR_CHECK_EXIST(&uVar0, "hidden"))
			{
				SET_DRAW_ACTOR(&uVar0, 1);
				DECOR_REMOVE(&uVar0, "hidden");
			}
		}
		else if (&Global_15402[1214] + 16 == 640)
		{
			Function_10();
		}
	}
	return;
}

int Function_7(var uParam0, struct<2> Param1, float fParam3) //Position: 0x706 / 1798
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_8(&uParam0);
		if (VDIST(Function_8(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_8(int iParam0) //Position: 0x792 / 1938
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

void Function_9(var uParam0, int iParam1) //Position: 0x7FE / 2046
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_10() //Position: 0x80F / 2063
{
	int iVar0;
	
	Function_12(12);
	iLocal_360 = Function_29(StackVal, 12, "Son", 638, "Companion_Son", Vector(-105,85f, 119,64f, 1368,919f), 1);
	Function_28(StackVal, 12, &Local_2, Vector(-108,119f, 119,477f, 1357,974f));
	Function_27(StackVal, 12, &Local_2, Vector(-116,552f, 118,869f, 1346,602f));
	Function_26(StackVal, 12, &Local_2, Vector(-108,119f, 119,477f, 1357,974f));
	Function_25(StackVal, 12, &Local_2, Vector(-116,552f, 118,869f, 1346,602f));
	Function_24(StackVal, 12, &Local_2, Vector(-108,119f, 119,477f, 1357,974f));
	Function_22(StackVal, 12, &Local_2, Vector(-104,826f, 119,489f, 1368,328f));
	Function_20(&iLocal_360, &(Local_2[1211]));
	Function_11(GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[1214])));
	iVar0 = Function_11(GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[1214])));
	return;
}

struct<8> Function_11(int iParam0) //Position: 0x8F6 / 2294
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_12(int iParam0) //Position: 0x908 / 2312
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: CompanionsList is full.");
		return;
	}
	if (Global_15402[iParam014].f_32)
	{
		STREAMING_EVICT_ACTOR(&Global_15402[iParam014] + 16, 4294967295);
	}
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		DESTROY_ACTOR(&Global_15402[iParam014] + 8);
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		DESTROY_PERS_CHAR(&(Global_15402[iParam014]));
	}
	return;
}

void Function_13() //Position: 0x9A6 / 2470
{
	Function_12(12);
	iLocal_360 = Function_29(StackVal, 12, "Son", 640, "Companion_Son_Bed", Vector(-105,85f, 119,64f, 1368,919f), 1);
	Function_28(StackVal, 12, &Local_2, Vector(-104,413f, 119,521f, 1367,917f));
	Function_27(StackVal, 12, &Local_2, Vector(-104,413f, 119,521f, 1367,917f));
	Function_26(StackVal, 12, &Local_2, Vector(-104,413f, 119,521f, 1367,917f));
	Function_25(StackVal, 12, &Local_2, Vector(-104,413f, 119,521f, 1367,917f));
	Function_24(StackVal, 12, &Local_2, Vector(-104,413f, 119,521f, 1367,917f));
	Function_22(StackVal, 12, &Local_2, Vector(-104,826f, 119,489f, 1368,328f));
	Function_20(&iLocal_360, &(Local_2[1211]));
	return;
}

bool Function_14(int iParam0) //Position: 0xA80 / 2688
{
	int iVar0;
	
	if (!Function_19(iParam0))
	{
		return 0;
	}
	iVar0 = Function_18(iParam0);
	if (!Function_15(Function_18(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_15(int iParam0) //Position: 0xAB6 / 2742
{
	if (!Function_17(iParam0))
	{
		return 0;
	}
	if (!Function_16(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_16(int iParam0) //Position: 0xADA / 2778
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_17(int iParam0) //Position: 0xAEF / 2799
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_18(int iParam0) //Position: 0xB06 / 2822
{
	if (!Function_19(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_19(int iParam0) //Position: 0xB20 / 2848
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_20(int iParam0, struct<2> Param1) //Position: 0xB36 / 2870
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_21(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_21(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_21(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_21(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_21(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_21(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

bool Function_21(vector3 vParam0) //Position: 0xC7C / 3196
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_22(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xC94 / 3220
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_23(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_23(struct<2> Param0, struct<2> Param2) //Position: 0xCFB / 3323
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_24(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xD27 / 3367
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_23(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_25(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xD90 / 3472
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_23(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_26(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xDFB / 3579
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_23(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_27(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xE61 / 3681
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_23(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_28(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xECA / 3786
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_23(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

var Function_29(int iParam0, char* cParam1) //Position: 0xF2E / 3886
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	var uVar4;
	int iVar5;
	int iVar6;
	
	if (!IS_STRING_VALID(&cParam1))
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: requires a NAME for each companion.");
		return "";
	}
	iVar1 = iParam0;
	if (iVar1 >= 16)
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: CompanionsList is full.");
		return "";
	}
	Global_15402[iParam014] = "";
	(&Global_15402[iParam014] + 16) = iParam2;
	strcpy(&Global_15402[iParam014] + 36, &cParam1, 32);
	*(&Global_15402[iParam014] + 24) = &Global_10992;
	if (&bParam6)
	{
		uVar0 = CREATE_PERS_CHAR_IN_LAYOUT(&Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Param4, 1114636288);
		Global_15402[iParam014] = &uVar0;
		if (!IS_PERS_CHAR_VALID(&uVar0))
		{
			LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Failed to validate the pers char reference");
			return "";
		}
		if (!(STRING_CONTAINS_STRING(&fParam3, "\\") || STRING_CONTAINS_STRING(&fParam3, "/")))
		{
			FILE_START_PATH("$/content/scripting/gringo/gringobrains/cb");
			FILE_ADD_TO_PATH(&fParam3);
			FILE_END_PATH();
			fParam3 = FILE_GET_CURRENT_PATH();
		}
		uVar4 = CREATE_GRINGO_ON_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&uVar0), "Persistent_Char_Brain", &fParam3, Var2, Var2);
		if (IS_OBJECT_VALID(&uVar4))
		{
			GRINGO_QUERY_BOOL(GET_GRINGO_FROM_OBJECT(&uVar4), "CompanionSettings", "EnableCompanionBehavior", &iVar5);
			if (iVar5 >= 0)
			{
				ATTACH_OBJECTS(StackVal, StackVal, &uVar4, GET_OBJECT_FROM_PERS_CHAR(&uVar0), Function_30(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			}
			else
			{
				PRINTSTRING("GB_CREATE_COMPANION_PERS_CHAR: Attempting to assign an invalid Companion Brain to this Companion: ");
				PRINTSTRING(&cParam1);
				PRINTNL();
				LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Attempting to assign an invalid Companion Brain to a Companion");
				DESTROY_PERS_CHAR(&uVar0);
				return "";
			}
		}
		PRINTSTRING("GB_CREATE_COMPANION_PERS_CHAR: Failed to create a GRINGO BRAIN for this Companion: ");
		PRINTSTRING(&cParam1);
		PRINTNL();
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Failed to create a GRINGO BRAIN for a Companion. This is surprisingly bad!");
		DESTROY_PERS_CHAR(&uVar0);
		return "";
		(&iVar6 + 36) = Param4;
		iVar6 = *(&iVar6 + 36);
		*(&iVar6 + 12) = *(&iVar6 + 36);
		*(&iVar6 + 24) = *(&iVar6 + 36);
		*(&iVar6 + 48) = *(&iVar6 + 36);
		*(&iVar6 + 60) = *(&iVar6 + 36);
		*(&iVar6 + 72) = &Global_15402[iParam014] + 24;
		GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar6, 22);
	}
	return &uVar0;
}

var Function_30() //Position: 0x13E3 / 5091
{
	int iVar0;
	
	return &iVar0;
}

bool Function_31(int iParam0, bool bParam1) //Position: 0x13EC / 5100
{
	int iVar0;
	
	iVar0 = Function_18(iParam0);
	if (!Function_17(iVar0))
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

bool Function_32(struct<2>[] Param0) //Position: 0x142A / 5162
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_37();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_36(&(Param0[iVar02]), 8);
		}
		else if (Function_35())
		{
			iVar1 = 1;
			Function_36(&(Param0[iVar02]), 8);
		}
		Function_36(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_4(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_4(&(Param0[02]), 8) || iVar1));
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
				Function_36(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_36(&(Param0[iVar02]), 2);
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
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_36(&(Param0[iVar02]), 2);
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
	Function_33();
	return 1;
}

void Function_33() //Position: 0x17EC / 6124
{
	if (!Function_34(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_34(int iParam0) //Position: 0x182C / 6188
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_35() //Position: 0x1848 / 6216
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

void Function_36(struct<13> Param0) //Position: 0x1876 / 6262
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_37() //Position: 0x1889 / 6281
{
	if (!Function_34(128))
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

var Function_38(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x18CB / 6347
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_39(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_36(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_39(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1909 / 6409
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_36(&(Param0[iVar02]), 4);
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

