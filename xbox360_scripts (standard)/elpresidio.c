//Decompiled with MagicRDR v1.0
//Function Count : 81
//Statics Count : 432
//Natives Count : 117
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<197> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_429 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_164 = 0;
	Function_80("Initializing ElPresidio", 3);
	ALLOW_TUMBLEWEEDS(0);
	if (Function_76(40, 0) && !Function_76(41, 0))
	{
		iVar0 = 0;
		while (iVar0 <= Global_6962)
		{
			Function_75(&(Global_6962[iVar02]), &(Global_8172[iVar03]), 3);
			iVar0++;
		}
		Function_74(&(Global_29008[Global_30707[1]]), 2048);
	}
	while (!IS_EXITFLAG_SET())
	{
		bLocal_165 = 1000;
		switch (iLocal_164)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_164 = 1;
				}
				bLocal_165 = false;
				break;
			
			case 0x00000001:
				if (Function_73())
				{
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16, 2);
					if (Function_76(41, 0))
					{
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10, 2);
					}
					if (Function_76(41, 0))
					{
						Function_72(&Global_6962, &Global_8172, 0, 530, "elp/elp_Gen");
						Function_72(&Global_6962, &Global_8172, 3, 521, "elp/Guard_Brain_elp");
						Function_72(&Global_6962, &Global_8172, 1, 529, "elp/elp_Major");
						Function_72(&Global_6962, &Global_8172, 2, 516, "elp/elp_Cmder");
						Function_71(&(Global_6962[102]), 2);
						Function_72(&Global_6962, &Global_8172, 11, 260, "elp/elp_Blacksmt");
						Function_72(&Global_6962, &Global_8172, 4, 522, "elp/Guard_Brain_elp1");
						Function_72(&Global_6962, &Global_8172, 5, 523, "elp/Guard_Brain_elp2");
						Function_72(&Global_6962, &Global_8172, 6, 531, "elp/Guard_Brain_elp3");
						Function_72(&Global_6962, &Global_8172, 7, 517, "elp/Guard_Brain_elp4");
						Function_72(&Global_6962, &Global_8172, 8, 518, "elp/Guard_Brain_elp5");
						Function_72(&Global_6962, &Global_8172, 9, 521, "elp/Guard_Brain_elp6");
					}
					iLocal_164 = 2;
				}
				bLocal_165 = false;
				break;
			
			case 0x00000002:
				if (Function_62())
				{
					Function_74(&(Global_29008[iScriptParam_0]), 32);
					Local_166[04] = { StackVal, StackVal, StackVal, Function_61(FIND_OBJECT_IN_LAYOUT(Local_55, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(Local_55, "rand_idle_stand5"), 1, 0, 0, 0, 0, 1) };
					Local_166[14] = { StackVal, StackVal, StackVal, Function_61(FIND_OBJECT_IN_LAYOUT(Local_55, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(Local_55, "smoking_stand5"), 1, 0, 0, 0, 0, 1) };
					Local_166[24] = { StackVal, StackVal, StackVal, Function_61(FIND_OBJECT_IN_LAYOUT(Local_55, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(Local_55, "smoking_stand4"), 1, 0, 0, 0, 0, 1) };
					Local_166[34] = { StackVal, StackVal, StackVal, Function_61(FIND_OBJECT_IN_LAYOUT(Local_55, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(Local_55, "rand_idle_stand6"), 1, 0, 0, 0, 0, 1) };
					Local_166[44] = { StackVal, StackVal, StackVal, Function_61(FIND_OBJECT_IN_LAYOUT(Local_55, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(Local_55, "rand_idle_stand7"), 1, 0, 0, 0, 0, 1) };
					iLocal_164 = 3;
				}
				bLocal_165 = false;
				break;
			
			case 0x00000003:
				bLocal_187 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ElPresidioVol", &iScriptParam_0, 2, 0);
				Function_60(&Global_6962, &Global_8172, iScriptParam_0);
				iLocal_164 = 5;
				bLocal_165 = false;
				break;
			
			case 0x00000005:
				if (Function_59(&Global_6962, &Global_8172, iScriptParam_0))
				{
					iLocal_164 = 4;
					bLocal_165 = false;
				}
				else
				{
					bLocal_165 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_58(&(Global_29008[iScriptParam_0]), 16) && Function_57(Global_29155[iScriptParam_010]))
				{
					iLocal_164 = 6;
				}
				bLocal_165 = false;
				break;
			
			case 0x00000006:
				Function_56(0, &uLocal_188, -708,815f, 67,513f, 3279,682f);
				Function_55(0, &uLocal_188, -717,114f, 67,513f, 3292,289f);
				Function_54(0, &uLocal_188, -708,815f, 67,513f, 3279,682f);
				Function_53(0, &uLocal_188, -707,428f, 63,247f, 3291,421f);
				Function_52(0, &uLocal_188, -708,815f, 67,513f, 3279,682f);
				Function_50(0, &uLocal_188, -722,821f, 67,444f, 3296,769f);
				Function_49(0, &uLocal_188, Local_55);
				Function_56(1, &uLocal_188, -713,523f, 67,513f, 3285,215f);
				Function_55(1, &uLocal_188, -723,239f, 82,564f, 3311,303f);
				Function_54(1, &uLocal_188, -713,523f, 67,513f, 3285,215f);
				Function_53(1, &uLocal_188, -723,239f, 82,564f, 3311,303f);
				Function_52(1, &uLocal_188, -713,523f, 67,513f, 3285,215f);
				Function_50(1, &uLocal_188, -725,956f, 67,513f, 3295,09f);
				Function_49(1, &uLocal_188, Local_55);
				Function_56(2, &uLocal_188, -724,647f, 67,444f, 3295,881f);
				Function_55(2, &uLocal_188, -667,545f, 65,615f, 3309,488f);
				Function_54(2, &uLocal_188, -708,495f, 67,514f, 3282,732f);
				Function_53(2, &uLocal_188, -722,121f, 75,168f, 3313,103f);
				Function_52(2, &uLocal_188, -680,707f, 63,247f, 3314,156f);
				Function_50(2, &uLocal_188, -699,914f, 66,449f, 3312,629f);
				Function_49(2, &uLocal_188, Local_55);
				Function_56(3, &uLocal_188, -665,638f, 73,428f, 3308,527f);
				Function_55(3, &uLocal_188, -665,638f, 73,428f, 3308,527f);
				Function_54(3, &uLocal_188, -723,107f, 67,518f, 3294,821f);
				Function_53(3, &uLocal_188, -694,297f, 63,247f, 3302,513f);
				Function_52(3, &uLocal_188, -699,914f, 66,449f, 3312,629f);
				Function_50(3, &uLocal_188, -687,773f, 69,633f, 3320,589f);
				Function_49(3, &uLocal_188, Local_55);
				Function_56(4, &uLocal_188, -699,914f, 66,449f, 3312,629f);
				Function_55(4, &uLocal_188, -687,773f, 69,633f, 3320,589f);
				Function_54(4, &uLocal_188, -665,638f, 73,428f, 3308,527f);
				Function_53(4, &uLocal_188, -665,638f, 73,428f, 3308,527f);
				Function_52(4, &uLocal_188, -717,974f, 63,332f, 3297,667f);
				Function_50(4, &uLocal_188, -723,107f, 67,518f, 3294,821f);
				Function_49(4, &uLocal_188, Local_55);
				Function_56(5, &uLocal_188, -723,107f, 67,518f, 3294,821f);
				Function_55(5, &uLocal_188, -717,974f, 63,332f, 3297,667f);
				Function_54(5, &uLocal_188, -699,914f, 66,449f, 3312,629f);
				Function_53(5, &uLocal_188, -687,773f, 69,633f, 3320,589f);
				Function_52(5, &uLocal_188, -665,638f, 73,428f, 3308,527f);
				Function_50(5, &uLocal_188, -665,638f, 73,428f, 3308,527f);
				Function_49(5, &uLocal_188, Local_55);
				Function_56(6, &uLocal_188, -717,974f, 63,332f, 3297,667f);
				Function_55(6, &uLocal_188, -723,107f, 67,518f, 3294,821f);
				Function_54(6, &uLocal_188, -717,974f, 63,332f, 3297,667f);
				Function_53(6, &uLocal_188, -706,122f, 63,471f, 3292,733f);
				Function_52(6, &uLocal_188, -687,773f, 69,633f, 3320,589f);
				Function_50(6, &uLocal_188, -665,638f, 73,428f, 3308,527f);
				Function_49(6, &uLocal_188, Local_55);
				Function_56(7, &uLocal_188, -720,367f, 67,518f, 3296,77f);
				Function_55(7, &uLocal_188, -719,387f, 75,168f, 3311,7f);
				Function_54(7, &uLocal_188, -717,593f, 82,548f, 3311,168f);
				Function_53(7, &uLocal_188, -717,518f, 74,085f, 3324,969f);
				Function_52(7, &uLocal_188, -736,38f, 77,258f, 3300,231f);
				Function_50(7, &uLocal_188, -726,041f, 72,947f, 3294,014f);
				Function_49(7, &uLocal_188, Local_55);
				Function_56(8, &uLocal_188, -736,38f, 77,258f, 3300,231f);
				Function_55(8, &uLocal_188, -726,041f, 72,947f, 3294,014f);
				Function_54(8, &uLocal_188, -720,367f, 67,518f, 3296,77f);
				Function_53(8, &uLocal_188, -719,387f, 75,168f, 3311,7f);
				Function_52(8, &uLocal_188, -717,593f, 82,548f, 3311,168f);
				Function_50(8, &uLocal_188, -717,518f, 74,085f, 3324,969f);
				Function_49(8, &uLocal_188, Local_55);
				Function_56(9, &uLocal_188, -717,593f, 82,548f, 3311,168f);
				Function_55(9, &uLocal_188, -717,518f, 74,085f, 3324,969f);
				Function_54(9, &uLocal_188, -736,38f, 77,258f, 3300,231f);
				Function_53(9, &uLocal_188, -726,041f, 72,947f, 3294,014f);
				Function_52(9, &uLocal_188, -720,367f, 67,518f, 3296,77f);
				Function_50(9, &uLocal_188, -719,387f, 75,168f, 3311,7f);
				Function_49(9, &uLocal_188, Local_55);
				Function_56(10, &uLocal_188, -722,69f, 63,35f, 3294,993f);
				Function_55(10, &uLocal_188, -722,69f, 63,35f, 3294,993f);
				Function_54(10, &uLocal_188, -722,69f, 63,35f, 3294,993f);
				Function_53(10, &uLocal_188, -722,69f, 63,35f, 3294,993f);
				Function_52(10, &uLocal_188, -722,69f, 63,35f, 3294,993f);
				Function_50(10, &uLocal_188, -722,69f, 63,35f, 3294,993f);
				Function_49(10, &uLocal_188, Local_55);
				Function_56(11, &uLocal_188, -712,303f, 67,513f, 3280,132f);
				Function_55(11, &uLocal_188, -671,651f, 63,247f, 3317,933f);
				Function_54(11, &uLocal_188, -711,992f, 63,222f, 3285,779f);
				Function_53(11, &uLocal_188, -671,651f, 63,247f, 3317,933f);
				Function_52(11, &uLocal_188, -712,303f, 67,513f, 3280,132f);
				Function_50(11, &uLocal_188, -723,443f, 67,444f, 3294,47f);
				Function_49(11, &uLocal_188, Local_55);
				Function_44(&Global_6962, &Global_8172, &uLocal_188, Global_6289, iScriptParam_0);
				if (Function_58(&(Global_29008[iScriptParam_0]), 256) || !Function_43(2))
				{
					iLocal_429 = 1;
				}
				Function_42(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_55 + 432));
				Function_74(&(Global_29008[iScriptParam_0]), 8);
				if (Function_58(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_41(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_164 = 10;
				}
				else
				{
					iLocal_164 = 7;
				}
				bLocal_165 = false;
				break;
			
			case 0x00000007:
				iLocal_164 = 8;
				bLocal_165 = false;
				break;
			
			case 0x00000008:
				Function_37(StackVal, 0, 0,5f, 4, Local_4, 1);
				Function_36(64);
				if (Function_35(iScriptParam_0, &Global_6962, iLocal_429))
				{
					Function_31(2, 4294967295, 4294967295, 0, 3);
					Function_28(Local_4);
				}
				else
				{
					Function_31(1, 10, 6, 0, 3);
					Function_28(Local_4);
					Function_27(StackVal, 0);
					Function_27(StackVal, 0);
					Function_27(StackVal, 0);
					Function_27(StackVal, 0);
					Function_27(StackVal, 0);
					Function_27(StackVal, 0);
					Function_27(StackVal, 0);
					Function_27(StackVal, 0);
					Function_27(StackVal, 0);
					Function_27(StackVal, 0);
					Function_27(StackVal, 0);
				}
				Function_74(&(Global_29008[iScriptParam_0]), 512);
				iLocal_164 = 9;
				bLocal_165 = false;
				break;
			
			case 0x00000009:
				Function_25(Local_4, iScriptParam_0);
				Function_74(&(Global_29008[iScriptParam_0]), 4);
				Function_24("Finished Initializing ElPresidio", 5.0f);
				iLocal_164 = 10;
				bLocal_165 = false;
				break;
			
			case 0x0000000A:
				Function_19(&Local_166);
				if (Function_58(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_164 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_165);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16);
	if (Function_76(41, 0))
	{
		RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
		RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10);
	}
	Function_11(&Global_6962, &Global_8172, iScriptParam_0, (iLocal_429 || Global_3380));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_41(&(Global_29008[iScriptParam_0]), 32);
	Function_41(&(Global_29008[iScriptParam_0]), 64);
	Function_41(&(Global_29008[iScriptParam_0]), 8);
	Function_41(&(Global_29008[iScriptParam_0]), 512);
	Function_41(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_187))
	{
		TERMINATE_SCRIPT(bLocal_187);
	}
	ALLOW_TUMBLEWEEDS(1);
	Function_24("Unloaded ElPresidio", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xD62 / 3426
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0xD98 / 3480
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0xDBA / 3514
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0xDD0 / 3536
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0xDE6 / 3558
{
	Function_6(&Local_55 + 4);
	RELEASE_LAYOUT_REF(Local_55);
	return;
}

void Function_6(int iParam0) //Position: 0xDF8 / 3576
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_7(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0xE1E / 3614
{
	if (Function_9(uParam0[iParam13], 4))
	{
		if (Function_9(uParam0[iParam13], 1))
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
			Function_8(uParam0[iParam13], 1);
			Function_8(uParam0[iParam13], 2);
			Function_8(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0xF4C / 3916
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0xF66 / 3942
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0xF83 / 3971
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xF8E / 3982
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_18())
	{
		return;
	}
	if (Function_58(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_17(iParam2), 12));
		Function_41(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_16(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_16(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_71(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_16(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_71(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_58(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_43(2) || Function_58(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_16(uParam0[iVar02], 2) && !Function_16(uParam0[iVar02], 4))
		{
			Function_12(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_16(uParam0[iVar02], 2) && !Function_16(uParam0[iVar02], 4))
			{
				iVar2++;
			}
			else
			{
				iVar3++;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar5 = GET_OBJECTSET_FROM_OBJECT(bVar4);
		if (IS_OBJECTSET_VALID(bVar5))
		{
			iVar0 = 0;
			while (GET_OBJECTSET_SIZE(bVar5) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar5));
				CLEAN_OBJECTSET(bVar5);
			}
			DESTROY_OBJECTSET(bVar5);
		}
		if (StackVal && !(((iVar2 != 0 && iVar3 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_74(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1179 / 4473
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_15(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_16(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_16(uParam0[iParam22], 1) && !bParam3)
	{
		Function_15(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x12C8 / 4808
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

int Function_14(int iParam0) //Position: 0x12F3 / 4851
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

void Function_15(var uParam0, int iParam1) //Position: 0x1327 / 4903
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(var uParam0, int iParam1) //Position: 0x1336 / 4918
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_17(int iParam0) //Position: 0x1352 / 4946
{
	if (!Function_4(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_30640[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_30640[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_30640[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_30658[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_30640[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_30693[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_30658[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_30658[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_30658[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_30658[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_30668[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_30668[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_30668[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_30679[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_30679[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_30685[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_30685[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_30685[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_30693[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_30693[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_30693[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_30707[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_30707[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_30707[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_30707[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_30723[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_30723[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_30723[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_30717[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_30717[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_30717[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_30628[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_30628[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_30628[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_30628[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_30633[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_30633[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_30633[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_30637[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_30637[0])
	{
		return "GreatPlains";
	}
	return "";
}

bool Function_18() //Position: 0x1800 / 6144
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_19(int iParam0) //Position: 0x1809 / 6153
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < (*iParam0 - 1))
	{
		if (StackVal && IS_GRINGO_VALID(IS_GRINGO_VALID((*iParam0)[bVar04])))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER((*iParam0)[bVar04], "UseCase1")))
			{
				Function_23(iParam0[bVar04] + 8, 64);
				if (Function_22(StackVal, 2))
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "1.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				else
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "2.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				if (StackVal && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(Function_22(StackVal, 4), "UseCase1")))
				{
					Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "3.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "4.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(StackVal, "UseCase1")))
			{
				if (Function_22(StackVal, 16))
				{
					Function_20(iParam0[bVar04] + 8, 64);
				}
				else if (Function_22(StackVal, 32))
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "5.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
					Function_20(iParam0[bVar04] + 8, 64);
				}
				else
				{
					Function_20(iParam0[bVar04] + 8, 64);
				}
				if (Function_22(StackVal, 2))
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "6.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				if (Function_22(StackVal, 4))
				{
					Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "7.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
			}
			else
			{
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[bVar04])
					{
						if (Function_22(StackVal, 64))
						{
							Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "8.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "8b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
					else if (StackVal && Function_22(Function_22(StackVal, 64), 16))
					{
						Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "11b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
					else
					{
						Function_20(iParam0[bVar04] + 8, 64);
						if (Function_22(StackVal, 1))
						{
							Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "12b.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "13b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
				}
				else if (StackVal && Function_22(Function_22(StackVal, 64), 16))
				{
					Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "11.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_20(iParam0[bVar04] + 8, 64);
					if (Function_22(StackVal, 1))
					{
						Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "12.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
					}
					else
					{
						Function_21(StackVal, StackVal, StackVal, *iParam0[bVar04], "13.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
				}
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[iVar14])
					{
					}
					else if (Function_22(StackVal, 64))
					{
						if (Function_22(StackVal, 32))
						{
							Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14b.child.SWITCHING OFF: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, false);
						}
						else
						{
							Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14.child.SWITCHING ON: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, true);
						}
					}
					else if (Function_22(StackVal, 8))
					{
						Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "15.child.SWITCHING ON: ");
						GRINGO_ALLOW_ACTIVATION(StackVal, true);
					}
					else
					{
						Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "16.child.SWITCHING OFF: ");
						Function_20(iParam0[bVar04] + 8, 64);
						GRINGO_ALLOW_ACTIVATION(StackVal, false);
					}
				}
				else if (Function_22(StackVal, 64))
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "17.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else if (Function_22(StackVal, 8))
				{
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "18.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else
				{
					Function_20(iParam0[bVar04] + 8, 64);
					Function_21(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "19.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
			}
		}
		if (Function_22(StackVal, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_20(var uParam0, bool bParam1) //Position: 0x1F99 / 8089
{
	*uParam0 = (*uParam0 - (*uParam0 && bParam1));
	return;
}

void Function_21(vector3 vParam0) //Position: 0x1FAC / 8108
{
	if (Function_22(vParam0.z, 128))
	{
		PRINTSTRING(bParam4);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(bParam5)));
		PRINTNL();
	}
}

bool Function_22(bool bParam0, int iParam1) //Position: 0x1FD3 / 8147
{
	return (bParam0 && iParam1) == 0;
}

void Function_23(var uParam0, int iParam1) //Position: 0x1FE0 / 8160
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_24(bool bParam0, float fParam1) //Position: 0x1FEF / 8175
{
	if (!Function_43(128))
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

void Function_25(bool bParam0, bool bParam1) //Position: 0x202D / 8237
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
		Function_26(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_18())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0x2127 / 8487
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_27(bool bParam0, bool bParam1) //Position: 0x2134 / 8500
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		bVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		bVar0 = bParam1;
	}
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, bVar0);
	CLEAN_OBJECTSET(bVar0);
	return 1;
}

void Function_28(bool bParam0) //Position: 0x21AD / 8621
{
	vector3 vVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	Global_26361.f_16 = bParam0;
	Global_26361.f_20 = CREATE_OBJECT_ITERATOR(Global_26361.f_16);
	ITERATE_EVERYWHERE(Global_26361.f_20);
	ITERATE_ON_OBJECT_TYPE(Global_26361.f_20, 8);
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(Global_26361.f_20) >= 0)
	{
		Global_26361.f_24 = START_OBJECT_ITERATOR(Global_26361.f_20);
		GET_OBJECT_POSITION(Global_26361.f_24, &vVar0);
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_30(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_29(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_29(var uParam0) //Position: 0x2298 / 8856
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_30() //Position: 0x22B5 / 8885
{
	int iVar0;
	
	return iVar0;
}

void Function_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x22BD / 8893
{
	if (Global_26361 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_26361, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_26376 = Global_26361;
	Global_26376.f_4 = StackVal;
	Global_26376.f_8 = StackVal;
	Global_26376.f_12 = Global_26361.f_12;
	Global_26376.f_16 = Global_26361.f_16;
	Global_26376.f_20 = Global_26361.f_20;
	Global_26376.f_24 = Global_26361.f_24;
	Global_26376.f_32 = Global_26361.f_32;
	Global_26376.f_40 = Global_26361.f_40;
	Global_26376.f_44 = Global_26361.f_44;
	Global_26361.f_8 = iParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = iParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_32();
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

void Function_32() //Position: 0x23A1 / 9121
{
	int iVar0;
	
	Global_26960 = Function_33(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_33(int iParam0) //Position: 0x23EF / 9199
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_34(int iParam0) //Position: 0x2407 / 9223
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

bool Function_35(int iParam0, int iParam1, bool bParam2) //Position: 0x241C / 9244
{
	char* cVar0[64];
	struct<5> Var16;
	
	*iParam1[02] = { StackVal, *iParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_58(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_76(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_18())
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = *iParam1;
	stradd(&cVar0, &Global_29155[Global_30621[Global_29004]10] + 20, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	Global_30617 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

void Function_36(bool bParam0) //Position: 0x24DC / 9436
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

void Function_37(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x24EF / 9455
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
		Function_40();
	}
	if (bParam5)
	{
		Function_38(1048576);
	}
}

void Function_38(int iParam0) //Position: 0x2602 / 9730
{
	Function_39(&Global_28842, iParam0);
	return;
}

void Function_39(var uParam0, var uParam1) //Position: 0x2610 / 9744
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_40() //Position: 0x262B / 9771
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_38(16384);
	}
	return;
}

void Function_41(var uParam0, int iParam1) //Position: 0x2647 / 9799
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_42(var uParam0, bool bParam1) //Position: 0x265E / 9822
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(*uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)), bParam1);
		}
		bVar0++;
	}
	return;
}

bool Function_43(int iParam0) //Position: 0x26A6 / 9894
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_44(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x26C2 / 9922
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_43(2))
	{
		return;
	}
	if (Function_58(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_16(uParam0[iVar02], 2))
		{
			if (Function_45(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_41(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_74(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_45(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x2774 / 10100
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_58(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_16(uParam0, 2))
	{
		return 1;
	}
	if (Function_16(uParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, false))
		{
			return 0;
		}
	}
	if (StackVal == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_29155[iParam510] + 20, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		uParam1->f_8 = Function_48(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_47(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_71(uParam0, 4);
	}
	Function_46(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_46(bool bParam0, int iParam1) //Position: 0x28DF / 10463
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_47(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_47(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_47(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_47(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_47(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_47(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_47(vector3 vParam0) //Position: 0x2A1B / 10779
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_48(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2A33 / 10803
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

void Function_49(int iParam0, var uParam1, bool bParam2) //Position: 0x2B4C / 11084
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	uParam1[bVar020]->f_72 = bParam2;
	return;
}

void Function_50(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2BA7 / 11175
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_51(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_51(vector3 vParam0, vector3 vParam3) //Position: 0x2C0D / 11277
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_52(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2C3A / 11322
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_51(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_53(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2CA2 / 11426
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_51(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_54(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2D0C / 11532
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_51(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_55(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2D71 / 11633
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_51(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_56(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2DD9 / 11737
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_51(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_57(int iParam0) //Position: 0x2E3C / 11836
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_58(&(Global_29008[iParam0]), 4);
}

bool Function_58(var uParam0, int iParam1) //Position: 0x2E58 / 11864
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_59(var uParam0, var uParam1, int iParam2) //Position: 0x2E74 / 11892
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_18())
	{
		return 1;
	}
	if (Function_58(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_17(iParam2), 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_16(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_16(uParam0[iVar02], 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED((*uParam1)[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_60(var uParam0, var uParam1, bool bParam2) //Position: 0x2F40 / 12096
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(bParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_18())
	{
		return;
	}
	if (!Function_58(&(Global_29008[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_17(bParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_17(bParam2), 12));
			Function_74(&(Global_29008[bParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_15(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_15(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

struct<16> Function_61(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x3016 / 12310
{
	struct<4> Var0;
	
	Var0 = GET_GRINGO_FROM_OBJECT(bParam0);
	Var0.f_4 = GET_GRINGO_FROM_OBJECT(bParam1);
	if (bParam2)
	{
		Function_23(&Var0 + 8, 1);
	}
	else
	{
		Function_20(&Var0 + 8, 1);
	}
	if (bParam3)
	{
		Function_23(&Var0 + 8, 2);
	}
	else
	{
		Function_20(&Var0 + 8, 2);
	}
	if (bParam4)
	{
		Function_23(&Var0 + 8, 4);
	}
	else
	{
		Function_20(&Var0 + 8, 4);
	}
	if (bParam5)
	{
		Function_23(&Var0 + 8, 8);
	}
	else
	{
		Function_20(&Var0 + 8, 8);
	}
	if (bParam6)
	{
		Function_23(&Var0 + 8, 16);
	}
	else
	{
		Function_20(&Var0 + 8, 16);
	}
	if (bParam7)
	{
		Function_23(&Var0 + 8, 32);
	}
	else
	{
		Function_20(&Var0 + 8, 32);
	}
	Function_20(&Var0 + 8, 64);
	Function_20(&Var0 + 8, 128);
	Var0.f_12 = 4294967295;
	return StackVal, StackVal, StackVal, Var0;
}

bool Function_62() //Position: 0x30DF / 12511
{
	bool bVar0;
	
	Function_70(3, 3);
	bVar0 = bVar0;
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/mex_towerguard", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/mex_gateguards", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/mex_sleepbed_r", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_68(&Local_55 + 4, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	if (!Function_63(&Local_55 + 4))
	{
		return 0;
	}
	Local_55 = FIND_NAMED_LAYOUT("ElPresidio_layout");
	if (!IS_LAYOUTREF_VALID(Local_55))
	{
		Local_55 = CREATE_LAYOUT("ElPresidio_layout");
	}
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_towerGuard2", "mex_towerGuard", -717,5929f, 82,54761f, 3311,168f, 0.0f, -95,43549f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "sleeping_wall_scripted", "sleeping_wall_scripted", -720,3671f, 67,51764f, 3296,77f, 0.0f, -309,8027f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_gateGuards2", "mex_gateGuards", -736,3804f, 77,25826f, 3300,231f, 0.0f, 71,27296f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_talking_soldiers_link", "mex_talking_soldiers_link", -676,4285f, 63,24744f, 3299,296f, 0.0f, 100,7092f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", -708,4954f, 67,51375f, 3282,732f, 0.0f, 141,8311f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", -709,0433f, 67,52305f, 3287,112f, 0.0f, -222,0619f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_guntricks_e_any", "stand_guntricks_e_any", -706,5253f, 66,75459f, 3279,682f, 0.0f, 42,34697f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "nlean_rail", "nlean_rail", -713,3747f, 67,49703f, 3293,526f, 0.0f, -128,0872f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "look_distance_binocs", "look_distance_binocs", -721,3502f, 69,16821f, 3274,475f, 0.0f, 108,5536f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "look_out_window_R", "look_out_window_R", -710,0087f, 67,513f, 3278,964f, 0.0f, -40,43299f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "smoking_stand", "smoking_stand", -716,5546f, 67,50723f, 3299,334f, 0.0f, -111,8011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -687,7731f, 69,63348f, 3320,589f, 0.0f, 150,0506f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -682,194f, 63,38754f, 3292,064f, 0.0f, 151,4445f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -678,7137f, 63,321f, 3296,161f, 0.0f, 96,76859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "lean_rail2", "nlean_rail", -715,2169f, 67,55249f, 3301,539f, 0.0f, 229,4257f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "smoking_stand1", "smoking_stand", -703,7432f, 66,36328f, 3281,916f, 0.0f, -167,9729f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "smoking_stand2", "smoking_stand", -681,1483f, 63,247f, 3312,677f, 0.0f, -188,4532f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_check_clipboard", "stand_check_clipboard", -667,545f, 65,615f, 3309,488f, 0.0f, -86,90867f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "look_distance_binocs1", "look_distance_binocs", -669,469f, 69,554f, 3310,187f, 0.0f, 120,0851f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "look_distance_binocs2", "look_distance_binocs", -665,113f, 69,509f, 3311,136f, 0.0f, -133,429f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "rand_idle_stand", "rand_idle_stand", -664,575f, 69,43f, 3307,346f, 0.0f, -226,8707f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -666,3836f, 73,42818f, 3309,781f, 0.0f, 104,0507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "repair_kneel", "repair_kneel", -693,3738f, 63,247f, 3298,784f, 0.0f, 33,26788f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "look_out_window_L", "look_out_window_L", -720,3563f, 67,513f, 3288,755f, 0.0f, 50,0137f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_check_clipboard1", "stand_check_clipboard", -717,5f, 70,23735f, 3289,415f, 0.0f, 147,4977f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "look_distance_binocs3", "look_distance_binocs", -724,7563f, 78,35497f, 3319,749f, 0.0f, 159,0294f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", -717,5178f, 74,08543f, 3324,969f, 0.0f, 164,121f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "look_distance_binocs4", "look_distance_binocs", -721,7476f, 79,35668f, 3305,081f, 0.0f, 9,529112f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_gateGuards3", "mex_gateGuards", -712,3604f, 74,16735f, 3324,698f, 0.0f, 139,9103f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "rand_idle_stand1", "rand_idle_stand", -697,7014f, 68,73802f, 3287,415f, 0.0f, -19,38494f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_gateGuards5", "mex_gateGuards", -675,074f, 68,73569f, 3296,858f, 0.0f, -38,26125f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "lean_fence_H_talking", "lean_fence_L_talking", -719,137f, 79,3585f, 3307,064f, 0.0f, 321,2921f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "lean_fence_L_talking2", "lean_fence_L_talking", -723,9261f, 79,39802f, 3307,228f, 0.0f, 47,13749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_55.f_356 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_horseshoe", "stand_horseshoe", -713,3561f, 63,25285f, 3283,6f, 0.0f, 46,04274f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_55.f_356), 1);
	Local_55.f_360 = CREATE_GRINGO_IN_LAYOUT(Local_55, "horse_tend", "horse_tend", -713,0793f, 63,22428f, 3287,888f, 0.0f, -38,79781f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_55.f_360), 1);
	Local_55.f_364 = CREATE_GRINGO_IN_LAYOUT(Local_55, "horse_stay", "horse_stay", -714,4236f, 63,22428f, 3286,903f, 0.0f, -37,24018f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_55.f_364), 1);
	Local_55.f_368 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_check_clipboard2", "stand_check_clipboard", -722,121f, 75,168f, 3313,103f, 0.0f, -27,23085f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_55.f_368), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "Pee", "Pee", -726,3694f, 63,34876f, 3297,085f, 0.0f, 103,9532f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "sleeping_scripted", "sleeping_scripted", -724,4138f, 63,46781f, 3296,349f, 0.0f, 55,44757f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_worried_n_any", "stand_worried_n_any", -722,6904f, 63,34961f, 3294,993f, 0.0f, -118,666f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "sleeping_wall_scripted2", "sleeping_wall_scripted", -724,2662f, 63,37123f, 3298,342f, 0.0f, -43,0543f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_talking_soldiers_link3", "mex_talking_soldiers_link", -717,9738f, 63,33184f, 3297,667f, 0.0f, -226,7341f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", -715,2135f, 72,94291f, 3281,964f, 0.0f, 77,05769f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", -726,0411f, 72,94719f, 3294,013f, 0.0f, 54,14071f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "sit_cleanrifle1", "sit_cleanrifle", -719,3867f, 75,16785f, 3311,7f, 0.0f, 146,8785f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_yelling_mid", "stand_yelling_mid", -719,5087f, 63,35001f, 3297,715f, 0.0f, 55,37082f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_sleepBed_r", "mex_sleepBed_r", -722,3011f, 67,499f, 3298,616f, 0.0f, -42,57276f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_sleepBed_l", "mex_sleepBed_l", -719,3489f, 67,499f, 3295,029f, 0.0f, 131,0655f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_sleepBed_r2", "mex_sleepBed_r", -726,2709f, 67,49874f, 3295,064f, 0.0f, 137,8984f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_sleepBed_r3", "mex_sleepBed_r", -724,8945f, 67,49874f, 3293,523f, 0.0f, 140,2076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_sleepBed_l2", "mex_sleepBed_l", -724,3748f, 67,499f, 3293,344f, 0.0f, -36,61475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "rand_idle_stand2", "rand_idle_stand", -679,2576f, 63,24734f, 3306,653f, 0.0f, -183,2206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "rand_idle_stand3", "rand_idle_stand", -686,592f, 68,84886f, 3290,11f, 0.0f, -19,51385f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "rand_idle_stand4", "rand_idle_stand", -699,9139f, 66,44852f, 3312,629f, 0.0f, -191,081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "look_distance_binocs5", "look_distance_binocs", -665,6379f, 73,42816f, 3308,527f, 0.0f, -98,92401f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "look_distance_binocs6", "look_distance_binocs", -723,239f, 82,56435f, 3311,303f, 0.0f, 104,9122f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "mex_talking_soldiers_link4", "mex_talking_soldiers_link", -713,8732f, 67,60998f, 3281,132f, 0.0f, -48,07489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "lean_fence_L_talking3", "lean_fence_L_talking", -709,1548f, 67,52305f, 3290,407f, 0.0f, 229,0538f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "repair_kneel1", "repair_kneel", -692,5491f, 63,247f, 3296,923f, 0.0f, 121,5768f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "repair_kneel2", "repair_kneel", -687,4442f, 63,247f, 3298,384f, 0.0f, 242,9485f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_55, "repair_kneel3", "repair_kneel", -699,7437f, 63,247f, 3302,929f, 0.0f, 180,1734f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_check_clipboard3", "stand_check_clipboard", -680,707f, 63,24707f, 3314,156f, 0.0f, 46,13166f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_check_clipboard4", "stand_check_clipboard", -709,6506f, 63,24707f, 3287,052f, 0.0f, 83,30362f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_check_clipboard5", "stand_check_clipboard", -708,9877f, 63,24707f, 3303,349f, 0.0f, 165,8085f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_check_clipboard6", "stand_check_clipboard", -718,9658f, 67,5125f, 3290,026f, 0.0f, 314,4405f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_55, "sit_cleanrifle2", "sit_cleanrifle", -719,2407f, 82,50834f, 3311,104f, 0.0f, -3,261265f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_55.f_372 = CREATE_GRINGO_IN_LAYOUT(Local_55, "lean_table", "lean_table", -721,4617f, 79,36691f, 3311,719f, 0.0f, 232,2581f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_55.f_372), 0);
	Local_55.f_376 = CREATE_GRINGO_IN_LAYOUT(Local_55, "sit_barrel", "sit_barrel", -695,3147f, 63,24707f, 3299,635f, 0.0f, 0.0f, 0.0f);
	Local_55.f_380 = CREATE_GRINGO_IN_LAYOUT(Local_55, "sit_barrel1", "sit_barrel", -696,7335f, 63,24707f, 3304,058f, 0.0f, 87,03288f, 0.0f);
	Local_55.f_384 = CREATE_GRINGO_IN_LAYOUT(Local_55, "smoking_stand3", "smoking_stand", -673,927f, 63,24707f, 3318,569f, 0.0f, 72,97687f, 0.0f);
	Local_55.f_388 = CREATE_GRINGO_IN_LAYOUT(Local_55, "rand_idle_stand5", "rand_idle_stand", -705,0511f, 63,24707f, 3292,357f, 0.0f, 71,23727f, 0.0f);
	Local_55.f_392 = CREATE_GRINGO_IN_LAYOUT(Local_55, "rand_idle_stand6", "rand_idle_stand", -706,5574f, 63,24707f, 3293,625f, 0.0f, 22,83271f, 0.0f);
	Local_55.f_396 = CREATE_GRINGO_IN_LAYOUT(Local_55, "rand_idle_stand7", "rand_idle_stand", -706,1927f, 63,24707f, 3292,801f, 0.0f, 42,90367f, 0.0f);
	Local_55.f_400 = CREATE_GRINGO_IN_LAYOUT(Local_55, "smoking_stand4", "smoking_stand", -705,6854f, 63,24707f, 3294,188f, 0.0f, 27,05199f, 0.0f);
	Local_55.f_404 = CREATE_GRINGO_IN_LAYOUT(Local_55, "smoking_stand5", "smoking_stand", -704,7737f, 63,24707f, 3293,252f, 0.0f, 62,48718f, 0.0f);
	Local_55.f_408 = CREATE_GRINGO_IN_LAYOUT(Local_55, "smoking_stand6", "smoking_stand", -698,825f, 66,44852f, 3313,312f, 0.0f, 117,7524f, 0.0f);
	Local_55.f_412 = CREATE_GRINGO_IN_LAYOUT(Local_55, "lean_rail3", "nlean_rail", -699,0483f, 66,44852f, 3312,398f, 0.0f, -31,24462f, 0.0f);
	Local_55.f_416 = CREATE_GRINGO_IN_LAYOUT(Local_55, "smoking_stand7", "smoking_stand", -688,5365f, 69,63348f, 3320,037f, 0.0f, 173,308f, 0.0f);
	Local_55.f_420 = CREATE_GRINGO_IN_LAYOUT(Local_55, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -688,0103f, 66,44515f, 3318,783f, 0.0f, -392,013f, 0.0f);
	Local_55.f_424 = CREATE_GRINGO_IN_LAYOUT(Local_55, "smoking_stand8", "smoking_stand", -686,1005f, 66,44515f, 3318,783f, 0.0f, 24,025f, 0.0f);
	Local_55.f_428 = CREATE_GRINGO_IN_LAYOUT(Local_55, "sleeping_wall_scripted3", "sleeping_wall_scripted", -716,7067f, 63,33184f, 3295,983f, 0.0f, -130,46f, 0.0f);
	Local_55.f_432 = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), Local_55, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_55, "stand_yelling", "stand_yelling_mid", -707,428f, 63,24707f, 3291,421f, 0.0f, -134,4398f, 0.0f), Local_55.f_432);
	return 1;
}

bool Function_63(int iParam0) //Position: 0x51FB / 20987
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_67();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_66(iParam0[iVar03], 8);
		}
		else if (Function_65())
		{
			iVar1 = 1;
			Function_66(iParam0[iVar03], 8);
		}
		Function_66(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_9(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_66(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
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
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
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
	Function_64();
	return 1;
}

void Function_64() //Position: 0x5576 / 21878
{
	if (!Function_43(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_65() //Position: 0x55B6 / 21942
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

void Function_66(var uParam0, int iParam1) //Position: 0x55E1 / 21985
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_67() //Position: 0x55F2 / 22002
{
	if (!Function_43(128))
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

var Function_68(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5634 / 22068
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_69(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_66(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_69(var uParam0, int iParam1, int iParam2) //Position: 0x566C / 22124
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_66(uParam0[iVar03], 4);
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

void Function_70(int iParam0, int iParam1) //Position: 0x5730 / 22320
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

void Function_71(var uParam0, int iParam1) //Position: 0x5779 / 22393
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_72(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x5790 / 22416
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = uParam2;
	(*uParam1)[iVar03] = iParam3;
	if (!STRINGS_ARE_EQUAL(cParam4, ""))
	{
		strcpy(&cVar1, "$/content/scripting/gringo/gringobrains/", 64);
		stradd(&cVar1, bParam4, 64);
		uParam1[iVar03]->f_4 = GET_ASSET_ID(&cVar1, 1);
	}
	else
	{
		uParam1[iVar03]->f_4 = "";
	}
	Function_71(uParam0[iVar02], 1);
	Function_15(uParam0[iVar02], 2);
	Function_71(uParam0[iVar02], 8);
	Function_71(uParam0[iVar02], 16);
}

bool Function_73() //Position: 0x582A / 22570
{
	var uVar0;
	
	Function_70(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("ElPresidio_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("ElPresidio_layout");
	}
	*(&Local_4 + 4) = { -722,8911f, 82,45563f, 3309,264f };
	*(&Local_4 + 4 + 12) = { 0.0f, -133,0126f, 0.0f };
	Local_4.f_28 = CREATE_POINT_IN_LAYOUT(Local_4, "elpf_playerTele", -722,8911f, 82,45563f, 3309,264f, 0.0f, -133,0126f, 0.0f);
	*(&Local_4 + 32) = { -721,9144f, 82,4912f, 3308,142f };
	*(&Local_4 + 32 + 12) = { 0.0f, -136,666f, 0.0f };
	Local_4.f_56 = CREATE_POINT_IN_LAYOUT(Local_4, "elpf_genTele", -721,9144f, 82,4912f, 3308,142f, 0.0f, -136,666f, 0.0f);
	*(&Local_4 + 60) = { -723,6121f, 82,45563f, 3310,015f };
	*(&Local_4 + 60 + 12) = { 0.0f, -122,9633f, 0.0f };
	Local_4.f_84 = CREATE_POINT_IN_LAYOUT(Local_4, "elpf_soldierTele", -723,6121f, 82,45563f, 3310,015f, 0.0f, -122,9633f, 0.0f);
	*(&Local_4 + 88) = { -721,2819f, 82,47678f, 3312,793f };
	*(&Local_4 + 88 + 12) = { 0.0f, 54,11021f, 0.0f };
	Local_4.f_112 = CREATE_POINT_IN_LAYOUT(Local_4, "elpf_rebTele1", -721,2819f, 82,47678f, 3312,793f, 0.0f, 54,11021f, 0.0f);
	*(&Local_4 + 116) = { -720,6768f, 82,45563f, 3312,059f };
	*(&Local_4 + 116 + 12) = { 4,116799f, 57,54126f, 5,324008f };
	Local_4.f_140 = CREATE_POINT_IN_LAYOUT(Local_4, "elpf_rebTele2", -720,6768f, 82,45563f, 3312,059f, 4,116799f, 57,54126f, 5,324008f);
	*(&Local_4 + 144) = { -719,9883f, 82,45563f, 3310,954f };
	*(&Local_4 + 144 + 12) = { -2,711456f, 53,91066f, -3,620177f };
	Local_4.f_168 = CREATE_POINT_IN_LAYOUT(Local_4, "elpf_rebTele3", -719,9883f, 82,45563f, 3310,954f, -2,711456f, 53,91066f, -3,620177f);
	*(&Local_4 + 172) = { -719,1819f, 82,45563f, 3310,151f };
	*(&Local_4 + 172 + 12) = { -0,4835112f, 52,03443f, -0,6411216f };
	Local_4.f_196 = CREATE_POINT_IN_LAYOUT(Local_4, "elpf_rebTele4", -719,1819f, 82,45563f, 3310,151f, -0,4835112f, 52,03443f, -0,6411216f);
}

void Function_74(var uParam0, int iParam1) //Position: 0x5C85 / 23685
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_75(var uParam0, var uParam1, int iParam2) //Position: 0x5C94 / 23700
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	if (iParam2 == 0)
	{
		ADD_TIME(&bVar0, Function_14(Global_29007), 0, false, 0);
	}
	else
	{
		ADD_TIME(&bVar0, iParam2, 0, false, 0);
	}
	uParam0->f_4 = bVar0;
	Function_15(uParam0, 4);
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
	}
	return;
}

bool Function_76(int iParam0, bool bParam1) //Position: 0x5CE7 / 23783
{
	int iVar0;
	
	iVar0 = Function_78(iParam0);
	if (!Function_77(iVar0))
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

bool Function_77(int iParam0) //Position: 0x5D24 / 23844
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_78(int iParam0) //Position: 0x5D3B / 23867
{
	if (!Function_79(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_79(int iParam0) //Position: 0x5D55 / 23893
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_80(bool bParam0, var uParam1) //Position: 0x5D6B / 23915
{
	if (!Function_43(128))
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

