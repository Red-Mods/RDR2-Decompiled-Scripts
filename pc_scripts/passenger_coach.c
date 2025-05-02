//Decompiled with MagicRDR v1.0
//Function Count : 163
//Statics Count : 427
//Natives Count : 229
//Parameters Count : 62

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 2;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	struct<201> Local_27 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	float fLocal_299 = 0.0f;
	bool bLocal_300 = false;
	bool bLocal_301 = false;
	int iLocal_302 = 0;
	var uLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	struct<2> Local_308 = { 0, 0 } ;
	var uLocal_310 = 0;
	struct<2> Local_311 = { 0, 0 } ;
	var uLocal_313 = 0;
	struct<2> Local_314 = { 0, 0 } ;
	var uLocal_316 = 0;
	float fLocal_317 = 0.0f;
	bool bLocal_318 = false;
	float fLocal_319 = 0.0f;
	bool bLocal_320 = false;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	bool bLocal_323 = false;
	bool bLocal_324 = false;
	struct<2> Local_325 = { 0, 0 } ;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	float fLocal_329 = 0.0f;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	int iLocal_337 = 0;
	bool bLocal_338 = false;
	int iLocal_339 = 0;
	bool bLocal_340 = false;
	int iLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	float fLocal_345 = 0.0f;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	struct<2> Local_348 = { 0, 0 } ;
	var uLocal_350 = 0;
	float fLocal_351 = 0.0f;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	bool bLocal_355 = false;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	bool bLocal_363 = false;
	int iLocal_364 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[16];
	var uVar4;
	bool bVar6;
	int iVar7;
	int iVar10;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_318 = 4294967295;
	bLocal_301 = false;
	Global_6654 = 1;
	iLocal_302 = IS_SWITCH_CAMERA_BUTTON_ENABLED();
	*(&Local_27 + 8) = ScriptParam_0.f_56;
	iLocal_89 = 0;
	if (!SQUAD_IS_VALID(&Local_27 + 8))
	{
		iLocal_89 = 12;
	}
	Function_161(16);
	if (!Function_160(ScriptParam_0.f_52))
	{
		iLocal_89 = 12;
	}
	iLocal_328 = 1;
	strcpy(&cVar0, "dest_", 16);
	Global_6653 = 1;
	uLocal_346 = CREATE_LAYOUT("passengerCoach");
	iLocal_341 = Function_159(&Local_27 + 8);
	REFERENCE_ACTOR(&iLocal_341);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_341, 0);
	SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&iLocal_341, 1);
	SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&iLocal_341, 1);
	SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iLocal_341, 1);
	Function_158(&Local_27 + 8, 5);
	if (StackVal || StackVal != 2 != 1)
	{
		iLocal_92 = 1;
		Local_93 = *(&Global_42862 + 32);
	}
	uLocal_343 = GET_VEHICLE(&iLocal_341);
	REFERENCE_ACTOR(&uLocal_343);
	bVar6 = false;
	while (bVar6 <= GET_NUM_DRAFTED_ACTORS(&uLocal_343))
	{
		REFERENCE_ACTOR(GET_DRAFT_ACTOR(bVar6, &uLocal_343));
		bVar6++;
	}
	Global_43580.f_100 = GET_CURRENT_GAME_TIME();
	iVar7 = GET_PLAYER_PADINDEX(&Global_54076);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_96 = 250;
		if (((!IS_ACTOR_RIDING_VEHICLE(&Global_54076) || Function_157()) && !Global_6634) && !iLocal_89 <= 10)
		{
			if (iLocal_89 > 4)
			{
				SAY_SINGLE_LINE_CONTEXT(&iLocal_341, 317, Function_156(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			DECOR_REMOVE(&Local_27 + 8, "npassenger");
			iLocal_89 = 12;
			bLocal_96 = false;
		}
		if ((!IS_ACTOR_VALID(&iLocal_341) && !Global_6634) && !iLocal_89 <= 10)
		{
			DECOR_REMOVE(&Local_27 + 8, "npassenger");
			iLocal_89 = 12;
		}
		else if ((!IS_ACTOR_ALIVE(&iLocal_341) && !Global_6634) && !iLocal_89 <= 10)
		{
			DECOR_REMOVE(&Local_27 + 8, "npassenger");
			iLocal_89 = 12;
		}
		else if (!GET_ACTOR_IN_VEHICLE_SEAT(&uLocal_343, false) != &iLocal_341 && !iLocal_89 <= 10)
		{
			DECOR_REMOVE(&Local_27 + 8, "npassenger");
			iLocal_89 = 12;
		}
		else if (!IS_ACTOR_VALID(&iLocal_341))
		{
		}
		if (!IS_ACTOR_VALID(&uLocal_343))
		{
		}
		Function_150();
		switch (iLocal_89)
		{
			case 0x00000000:
				if (Function_146(&Local_97, &uLocal_91, &uLocal_303, iLocal_92, 0))
				{
					iLocal_305 = Function_144(&Local_97, iLocal_92, 1);
					if (iLocal_305 >= 0)
					{
						SAY_SINGLE_LINE_CONTEXT(&iLocal_341, 313, Function_156(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						iLocal_89 = 1;
						if (!Function_143(Global_119934, 256))
						{
							Function_137(&Global_54076, 256, 1, 0);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&iLocal_341, 312, Function_156(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
						bLocal_300 = true;
						if (iLocal_305 == 4294967295)
						{
							Function_135("PASS_COACH_NoDest", 0x41200000, 1, 0, 2, 1, 0);
						}
						else
						{
							Function_135("PASS_COACH_NoMoney", 0x41200000, 1, 0, 2, 1, 0);
						}
						iLocal_89 = 2;
						break;
					}
				}
				else
				{
					bLocal_96 = false;
				}
				break;
			
			case 0x00000001:
				if (!HUD_IS_SHOWING_SMALL_TEXT())
				{
					iLocal_89 = 2;
					bLocal_96 = false;
				}
				break;
			
			case 0x00000002:
				bLocal_301 = true;
				SET_SWITCH_CAMERA_BUTTON_ENABLED(0);
				Function_134(0);
				iLocal_330 = Function_133(&Local_97, Local_97 + 1, bLocal_300);
				Function_132(&Local_97, iLocal_330);
				iLocal_89 = 3;
			
			case 0x00000003:
				Function_124();
				bLocal_96 = false;
				break;
			
			case 0x00000004:
				uLocal_306 = Function_123(Local_97[iLocal_3042]);
				if (!IS_OBJECT_VALID(&uLocal_306))
				{
					if (Function_160(Local_97[iLocal_3042]))
					{
						uLocal_306 = GET_OBJECT_FROM_VOLUME(&Global_44085[Local_97[iLocal_3042]9] + 8);
					}
				}
				if (bLocal_301)
				{
					bLocal_301 = false;
					SET_SWITCH_CAMERA_BUTTON_ENABLED(iLocal_302);
				}
				if (iLocal_304 != 0 && iLocal_92)
				{
					Local_97[02] = Function_122(StackVal, *(&Global_42862 + 44), 1, 1, 1);
					if (!Function_160(Local_97[02]))
					{
						Local_97[02] = Function_121(StackVal, *(&Global_42862 + 44), 1);
					}
				}
				if (Function_160(Local_97[iLocal_3042]))
				{
					stradd(&cVar0, &Global_44085[Local_97[iLocal_3042]9] + 32, 16);
				}
				else
				{
					stradd(&cVar0, "gen", 16);
				}
				FORCE_VEHICLE_CINEMATIC_CAMERA(1);
				SAY_SINGLE_LINE_STRING(&Global_54076, &cVar0, true, true, 2, 0, true, false);
				fLocal_345 = GET_CURRENT_GAME_TIME();
				Function_103();
				Function_102();
				Function_97(Function_100(StackVal, Local_97[iLocal_3042]), 1);
				Function_82(StackVal, Function_100(384, Local_97[iLocal_3042]), 0, 0);
				DECOR_SET_INT(StackVal, &iLocal_341, Function_100("iAdditionalMoney", Local_97[iLocal_3042]));
				uLocal_353 = ADD_BLIP_FOR_COORD(&Local_308, 384, 0, 2, 0);
				iLocal_89 = 5;
			
			case 0x00000005:
				if (!IS_ANY_SPEECH_PLAYING(&Global_54076) || (fLocal_345 + 5.0f) > GET_CURRENT_GAME_TIME())
				{
					if (bLocal_323)
					{
						HUD_FADE_OUT(0,5f, 1f, 1);
						iLocal_89 = 6;
					}
					else
					{
						iLocal_89 = 7;
					}
					SAY_SINGLE_LINE_CONTEXT(&iLocal_341, 314, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				break;
			
			case 0x00000006:
				if (HUD_IS_FADED())
				{
					Function_81();
					Function_80(&Local_27 + 8);
					Function_79(&Local_27);
					Local_27 = 7;
					Function_50(&Local_27, 0, 0, 0);
					HUD_FADE_IN(0,5f, 1065353216);
					iLocal_89 = 7;
				}
				break;
			
			case 0x00000007:
				Function_45();
				if (!iLocal_339)
				{
					if (GET_CURRENT_GAME_TIME() < (fLocal_345 + 5.0f))
					{
						Function_42();
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_335))
					{
						Function_41();
					}
				}
				Function_40();
				if (!IS_ACTOR_VALID(&iLocal_341))
				{
					bLocal_338 = true;
				}
				else if (!IS_ACTOR_ALIVE(&iLocal_341))
				{
					bLocal_338 = true;
				}
				if (!Function_39(&uLocal_343, 1, 1, 4294967295))
				{
					bLocal_338 = true;
				}
				if (bLocal_338)
				{
					TASK_VEHICLE_LEAVE(&Global_54076);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					SAY_SINGLE_LINE_CONTEXT(&iLocal_341, 314, Function_156(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					iLocal_89 = 12;
					bLocal_96 = false;
					break;
				}
				iLocal_361 = GET_OBJECTSET_SIZE(&uLocal_321);
				if ((StackVal && Function_38(StackVal, iLocal_361 > 2, Local_311, Local_308) > 35.0f) || iLocal_361 > 1)
				{
					Function_35(StackVal, &Local_27 + 192, Local_308, 2,1f, 0.0f, 1.0f, 2);
					*(&Local_27 + 36) = { StackVal, StackVal, Function_35(StackVal, &Local_27 + 192, Local_308, 2,1f, 0.0f, 1.0f, 2) };
					Function_34(&Local_27 + 36);
					uVar4 = Function_34(&Local_27 + 36);
					Function_79(&Local_27);
					iLocal_89 = 8;
					bLocal_96 = false;
				}
				else if (iLocal_361 <= iLocal_362)
				{
					if (Global_47151[52])
					{
						iVar10 = 0;
						while (iVar10 <= iLocal_361)
						{
							iVar10++;
						}
					}
					iLocal_362 = iLocal_361;
				}
				break;
			
			case 0x00000008:
				if (!HUD_IS_FADED() && !HUD_IS_FADING())
				{
					Global_43580.f_100 = -300.0f;
					iLocal_89 = 9;
					FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				break;
			
			case 0x00000009:
				GET_POSITION(Function_159(&Local_27 + 8), &Local_311);
				if (!iLocal_339)
				{
					if (GET_CURRENT_GAME_TIME() < (fLocal_345 + 5.0f))
					{
						Function_42();
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_335))
					{
						Function_41();
					}
				}
				Function_30();
				if (VDIST(Local_308, Local_311) > 7,5f || GET_TASK_STATUS(&iLocal_341, 61) != 0)
				{
					Function_80(&Local_27 + 8);
					Function_158(&Local_27 + 8, 5);
					TASK_CLEAR(Function_159(&Local_27 + 8));
					TASK_STAND_STILL(Function_159(&Local_27 + 8), -1.0f, 0, 0);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					bLocal_96 = 1000;
					iLocal_89 = 10;
				}
				GET_ACTOR_VELOCITY(&uLocal_343, &Local_348);
				if (fLocal_351 > 1.0f)
				{
					if (VMAG(Local_348) > 0,5f)
					{
						fLocal_351 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (VMAG(Local_348) < 0,5f)
				{
					fLocal_351 = 0.0f;
				}
				else if (fLocal_351 + 5.0f) > GET_CURRENT_GAME_TIME()
				{
					Function_80(&Local_27 + 8);
					Function_158(&Local_27 + 8, 5);
					TASK_CLEAR(Function_159(&Local_27 + 8));
					TASK_STAND_STILL(Function_159(&Local_27 + 8), -1.0f, 0, 0);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					bLocal_96 = 1000;
					iLocal_89 = 10;
				}
				if (!IS_ACTOR_VALID(&iLocal_341))
				{
					bLocal_338 = true;
				}
				else if (!IS_ACTOR_ALIVE(&iLocal_341))
				{
					bLocal_338 = true;
				}
				if (!Function_39(&uLocal_343, 1, 1, 4294967295))
				{
					bLocal_338 = true;
				}
				if (bLocal_338)
				{
					TASK_VEHICLE_LEAVE(&Global_54076);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					SAY_SINGLE_LINE_CONTEXT(&iLocal_341, 314, Function_156(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					iLocal_89 = 12;
					bLocal_96 = false;
					break;
				}
				break;
			
			case 0x0000000B:
				if (!IS_ANY_SPEECH_PLAYING(&Global_54076) || (fLocal_345 + 5.0f) > GET_CURRENT_GAME_TIME())
				{
					if (Function_14())
					{
						Function_13(TO_FLOAT(StackVal));
						Function_11(ROUND(((TO_FLOAT(StackVal) * 4.0f) / 3600.0f)));
						Function_79(&Local_27);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						FORCE_VEHICLE_CINEMATIC_CAMERA(1);
						Local_27.f_112 = Function_8(StackVal, Local_27.f_120);
						Function_5(&Local_27, 0);
						if (Function_160(Local_97[iLocal_3042]))
						{
							if (StackVal == 5)
							{
								SAY_SINGLE_LINE_CONTEXT(&iLocal_341, 311, Function_156(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
						iLocal_339 = 1;
						Global_6634 = 0;
						iLocal_89 = 8;
						bLocal_96 = 250;
					}
				}
				else
				{
					bLocal_96 = 250;
				}
				break;
			
			case 0x0000000A:
				SAY_SINGLE_LINE_CONTEXT(&iLocal_341, 318, Function_156(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_VEHICLE_LEAVE(&Global_54076);
				Local_27.f_112 = Function_8(StackVal, Local_27.f_120);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				DECOR_REMOVE(&Local_27 + 8, "npassenger");
				iLocal_89 = 12;
				bLocal_96 = false;
				break;
			
			case 0x0000000C:
				if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076) || Function_157())
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
		}
		WAIT(bLocal_96);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	if (!IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_FADE_IN(0,5f, 1065353216);
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_335))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_335);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_333))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_333);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_331))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_331);
	}
	if (IS_BLIP_VALID(&uLocal_353))
	{
		REMOVE_BLIP(&uLocal_353);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_346))
	{
		DESTROY_LAYOUT(&uLocal_346);
	}
	Global_6634 = 0;
	Global_6653 = 0;
	if (IS_ACTOR_VALID(&uLocal_343))
	{
		bVar6 = false;
		while (bVar6 <= GET_NUM_DRAFTED_ACTORS(&uLocal_343))
		{
			DEREFERENCE_ACTOR(GET_DRAFT_ACTOR(bVar6, &uLocal_343));
			bVar6++;
		}
		DEREFERENCE_ACTOR(&uLocal_343);
	}
	Function_3(StackVal, &iLocal_341, Vector(0.0f, 0.0f, 0.0f), 131120, 0, 2, 1);
	Local_27 = 16;
	SQUAD_LEAVE(&iLocal_341);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	RESET_TIME_SINCE_LAST_INPUT(iVar7);
	Function_1(16);
	if (IS_ACTOR_VALID(&iLocal_341))
	{
		DEREFERENCE_ACTOR(&iLocal_341);
		TASK_CLEAR(&iLocal_341);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_341, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iLocal_341, 0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&iLocal_341);
	}
	if (SQUAD_IS_VALID(&Local_27 + 8))
	{
		DECOR_REMOVE(&Local_27 + 8, "npassenger");
		Function_80(&Local_27 + 8);
		SQUAD_GOALS_CLEAR(&Local_27 + 8);
	}
	if (!bLocal_301)
	{
		SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	}
	Global_6654 = 0;
	if (bLocal_301)
	{
		SET_SWITCH_CAMERA_BUTTON_ENABLED(iLocal_302);
	}
	SATCHEL_SET_ENABLED(1);
	Function_134(1);
	AI_STOP_IGNORING_ACTORS();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xAB6 / 2742
{
	Function_2(&Global_43580, iParam0);
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0xAC4 / 2756
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_3(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0xAEC / 2796
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		*(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideCurve", &iParam3);
	}
	if (!Function_4(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&uParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&uParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&uParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&uParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&uParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 1);
}

bool Function_4(vector3 vParam0) //Position: 0xC0B / 3083
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_5(int iParam0, bool bParam1) //Position: 0xC23 / 3107
{
	var uVar0;
	var uVar1;
	
	if (!Function_7(&iParam0))
	{
		Function_6(&iParam0, 1);
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam0 + 8))
	{
		LOG_WARNING("MOVE_IN_FORMATION given invalid squad");
		return 0;
	}
	uVar0 = Function_159(&iParam0 + 8);
	SQUAD_GOALS_CLEAR(&iParam0 + 8);
	TASK_CLEAR(&iLocal_341);
	AI_CLEAR_NAV_MATERIAL_USAGE(&uVar0);
	Local_314 = Local_308;
	if (!FIND_GROUND_INTERSECTION(&Local_314, 99.0f, &Local_308, &uVar1))
	{
		Local_308 = Local_314;
		iLocal_364 = 0;
	}
	TASK_CLEAR(&uVar0);
	if (&bParam1)
	{
		TASK_GO_NEAR_COORD(&uVar0, &Local_308, 5.0f, 1);
		iLocal_364 = 1;
	}
	else
	{
		TASK_GO_NEAR_COORD(&uVar0, &Local_308, 25.0f, 1);
		iLocal_364 = 0;
	}
	bLocal_340 = true;
	return 1;
}

void Function_6(struct<113> Param0) //Position: 0xCF8 / 3320
{
	struct<5> Var0;
	struct<13> Var8;
	
	if (!Global_47267[1] && iParam1)
	{
		return;
	}
	if (!Function_7(&Param0))
	{
		return;
	}
	strcpy(&cVar4, "TRAFFIC NODE", 16);
	switch (Param0.f_112)
	{
		case 0x00000005:
			Var8 = 1.0f;
			Var8.f_4 = 0.0f;
			Var8.f_8 = 0.0f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000001:
			Var8 = 0,9f;
			Var8.f_4 = 0,55f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var8 = 0,9f;
			Var8.f_4 = 0,9f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var8 = 0,2f;
			Var8.f_4 = 0,8f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var8 = 0,1f;
			Var8.f_4 = 0,1f;
			Var8.f_8 = 1.0f;
			Var8.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_159(&Param0 + 8), &Var0);
	fVar10 = Vector(0.0f, 1.0f, 0.0f);
	Var0.f_4 = (StackVal + 2,5f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_4 = (StackVal + 0,5f);
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	Function_34(&Param0 + 36);
	iVar2 = Function_34(&Param0 + 36);
	return;
}

bool Function_7(int iParam0) //Position: 0xE4A / 3658
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int Function_8(int iParam0, int iParam1) //Position: 0xE5B / 3675
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_9())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		switch (iParam0)
		{
			case 0x00000001:
				if (bVar0 <= 9000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				return 1;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in TownSpeed");
				break;
		}
		return 1;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (bVar1 <= 9000)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TownSpeed");
			break;
	}
	return 2;
}

bool Function_9() //Position: 0xF47 / 3911
{
	if (Function_10(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_10(var uParam0, int iParam1) //Position: 0xF62 / 3938
{
	return (uParam0 && iParam1) == 0;
}

void Function_11(int iParam0) //Position: 0xF6F / 3951
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 101;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		iVar2 = 0;
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTNL();
			PRINTSTRING("CUR time of day delay: ");
			Function_12(&(Global_26652[iVar04]));
		}
		if (GET_DAY(&(Global_26652[iVar04])) == 0)
		{
			iVar2 = 1;
		}
		ADD_TIME(&(Global_26652[iVar04]), iVar2, &iParam0, false, 0);
		*(&Global_27462[iVar052] + 376) = &Global_26652[iVar04];
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTSTRING("NEW time of day delay: ");
			Function_12(&(Global_26652[iVar04]));
		}
		iVar0++;
	}
	return;
}

void Function_12(int iParam0) //Position: 0x1035 / 4149
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

void Function_13(bool bParam0) //Position: 0x107F / 4223
{
	FEED_CODE_WARP_DIST(bParam0);
	ADVANCE_TIME_HOURS(((bParam0 * 4.0f) / 3600.0f));
	return;
}

bool Function_14() //Position: 0x1097 / 4247
{
	struct<2> Var0;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	var uVar24;
	int iVar25;
	
	switch (iLocal_90)
	{
		case 0x00000000:
			UNK_0xEF270DC9();
			AI_IGNORE_ACTOR(&Global_54076);
			Global_43580.f_100 = -300.0f;
			iLocal_90 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				Function_27(0, 0x40400000);
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				iLocal_90 = 2;
			}
			break;
		
		case 0x00000002:
			STREAMING_EVICT_ALL();
			fLocal_299 = GET_CURRENT_GAME_TIME();
			if (GET_OBJECTSET_SIZE(&uLocal_321) >= 1)
			{
				TASK_CLEAR(&iLocal_341);
				SQUAD_GOALS_CLEAR(&Local_27 + 8);
				if (bLocal_355)
				{
					*(&Local_27 + 192) = &uLocal_356;
				}
				else
				{
					*(&Local_27 + 192) = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_321));
				}
				Function_35(StackVal, &Local_27 + 192, Local_308, 2,1f, 0.0f, 1.0f, 2);
				vVar5 = { StackVal, StackVal, Function_35(StackVal, &Local_27 + 192, Local_308, 2,1f, 0.0f, 1.0f, 2) };
				Function_34(&vVar5);
				Local_314 = Function_34(&vVar5);
				if (bLocal_355)
				{
					uVar24 = &uLocal_358;
				}
				else
				{
					uVar24 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &uLocal_321));
				}
				GET_CURVE_POINT(&Local_27 + 192, 1.0f, &vVar8, 0);
				GET_CURVE_POINT(&Local_27 + 192, 0.0f, &vVar11, 0);
				GET_CURVE_POINT(&uVar24, 1.0f, &vVar14, 0);
				GET_CURVE_POINT(&uVar24, 1.0f, &vVar17, 0);
				fVar20 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar8, vVar14);
				fVar21 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar8, vVar17);
				fVar22 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar11, vVar14);
				fVar23 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar11, vVar17);
				if ((fVar20 > fVar22 && fVar20 > fVar23) || (fVar21 > fVar22 && fVar21 > fVar23))
				{
					Local_27.f_188 = 4294967295;
					UNK_0x19D652F9(&Local_27 + 192, 20.0f, &vVar5, &iVar2);
				}
				else
				{
					Local_27.f_188 = 1;
					UNK_0x19D652F9(&Local_27 + 192, -20.0f, &vVar5, &iVar2);
				}
				Function_34(&iVar2);
				Var0 = Function_34(&iVar2);
				Function_25(StackVal, StackVal, Var0, Local_308);
				Local_314 = Function_25(StackVal, StackVal, Var0, Local_308);
				fLocal_317 = UNK_0x9C40E671(&Local_314);
			}
			else
			{
				Var0 = Local_308;
				fLocal_317 = GET_OBJECT_HEADING(&uLocal_306);
			}
			iVar25 = Function_122(StackVal, Var0, 0, 1, 1);
			if (iVar25 != Local_97[iLocal_3042])
			{
				Local_97[iLocal_3042] = iVar25;
			}
			if (Function_4(StackVal, Var0))
			{
				SAY_SINGLE_LINE_CONTEXT(&iLocal_341, 311, Function_156(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				iLocal_90 = 7;
				return 1;
			}
			Function_24(StackVal, &Global_54076, Var0, fLocal_317, 1, 1, 1);
			Global_6634 = 1;
			Global_6629 = 0;
			Function_20(1, 0, 1);
			Function_18();
			iLocal_90 = 3;
			fLocal_329 = GET_CURRENT_GAME_TIME();
		
		case 0x00000003:
			if (fLocal_299 + 1.0f) > GET_CURRENT_GAME_TIME()
			{
				CAMERA_RESET(0);
				Function_17();
				iLocal_90 = 4;
			}
			break;
		
		case 0x00000004:
			if (STREAMING_IS_WORLD_LOADED() && ((Function_15(Local_97[iLocal_3042]) || !Function_160(Local_97[iLocal_3042])) || (iLocal_92 && iLocal_304 != 0)))
			{
				iLocal_90 = 6;
			}
			else if (fLocal_329 + 50.0f) > GET_CURRENT_GAME_TIME()
			{
				iLocal_90 = 6;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED() && Function_15(Local_97[iLocal_3042]))
			{
				AI_STOP_IGNORING_ACTORS();
				iLocal_90 = 7;
				return 1;
			}
			if (fLocal_329 + 30.0f) > GET_CURRENT_GAME_TIME()
			{
				AI_STOP_IGNORING_ACTORS();
				iLocal_90 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

int Function_15(int iParam0) //Position: 0x136B / 4971
{
	if (!Function_160(iParam0))
	{
		return 1;
	}
	return Function_16(&(Global_43791[iParam0]), 4);
}

bool Function_16(int iParam0, int iParam1) //Position: 0x1387 / 4999
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17() //Position: 0x13A4 / 5028
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_161(16384);
	}
	return;
}

void Function_18() //Position: 0x13C0 / 5056
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_19(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_19(var uParam0, int iParam1) //Position: 0x13EA / 5098
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_20(var uParam0, bool bParam1, int iParam2) //Position: 0x1404 / 5124
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_160(Global_43789))
		{
			Function_23(&(Global_43791[Global_43789]), 131072);
			Function_19(&(Global_43791[Global_43789]), 2097152);
			Function_21(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_16(&(Global_43791[iVar0]), 4) || Function_16(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_19(&(Global_43791[iVar0]), 2097155);
					Function_23(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (uParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_21(int iParam0) //Position: 0x1510 / 5392
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_22())
			{
				return;
			}
		}
		if (!Function_16(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_22() //Position: 0x158F / 5519
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_16(&(Global_43791[iVar0]), 4) || Function_16(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_23(var uParam0, int iParam1) //Position: 0x15F8 / 5624
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_24(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0x1609 / 5641
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&uParam0))
			{
				ACTOR_MOUNT_ACTOR(&uParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

struct<8> Function_25(struct<2> Param0, struct<2> Param2) //Position: 0x16D8 / 5848
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	VNORMALIZE(&Var0);
	return StackVal, Var0;
}

float Function_26(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) //Position: 0x16F5 / 5877
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_34(&iParam0);
	Var0 = Function_34(&iParam0);
	Function_34(&iParam3);
	Var2 = Function_34(&iParam3);
	return VDIST(Var0, Var2);
}

void Function_27(float fParam0, float fParam1) //Position: 0x1718 / 5912
{
	*(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_29();
	Function_28();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_28() //Position: 0x1829 / 6185
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_29() //Position: 0x185D / 6237
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

var Function_30() //Position: 0x1963 / 6499
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	
	bLocal_96 = 500;
	if (!bLocal_340 || !iLocal_364)
	{
		if (Function_31(&Local_27))
		{
			Var0 = Local_308;
			Var0.f_4 = (StackVal + 20.0f);
			if (FIND_GROUND_INTERSECTION(&Var0, 99,9f, &uVar2, &uVar4))
			{
				Local_308 = Var0;
				Function_5(&Local_27, 1);
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			}
			else if (!bLocal_340)
			{
				Function_5(&Local_27, 0);
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			}
		}
	}
	return bLocal_96;
}

bool Function_31(struct<201> Param0) //Position: 0x19D3 / 6611
{
	var uVar0;
	var uVar2;
	
	GET_OBJECT_POSITION(&uLocal_343, &uVar0);
	Function_34(&Param0 + 36);
	uVar2 = Function_34(&Param0 + 36);
	if (Param0.f_200 > 1.0f)
	{
		Param0.f_200 = Function_33(Param0.f_112, 2);
	}
	Function_34(&Param0 + 36);
	if (VDIST(Function_34(&Param0 + 36), Global_54078) > Function_32(Param0.f_200, Function_33(Param0.f_112, 2)))
	{
		return 1;
	}
	return 0;
}

float Function_32(bool bParam0, int iParam1) //Position: 0x1A2E / 6702
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_33(int iParam0, int iParam1) //Position: 0x1A41 / 6721
{
	float fVar0;
	
	fVar0 = 5.0f;
	if (StackVal == 1)
	{
		fVar0 = 5.0f;
	}
	switch (iParam1)
	{
		case 0x00000001:
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (15.0f * fVar0);
					break;
				
				case 0x00000002:
					return (25.0f * fVar0);
					break;
				
				case 0x00000004:
					return (45.0f * fVar0);
					break;
				
				case 0x00000003:
					return (45.0f * fVar0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (20.0f * fVar0);
					break;
				
				case 0x00000002:
					return (35.0f * fVar0);
					break;
				
				case 0x00000004:
					return (60.0f * fVar0);
					break;
				
				case 0x00000003:
					return (60.0f * fVar0);
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in FlagBuffer");
			break;
	}
	return (45.0f * fVar0);
}

struct<8> Function_34(vector3 vParam0) //Position: 0x1B52 / 6994
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_35(var uParam0, struct<2> Param1, float fParam3, float fParam4, float fParam5, int iParam6) //Position: 0x1B74 / 7028
{
	bool bVar0;
	struct<13> Var1;
	
	if (!&fParam5 <= &fParam4)
	{
		fVar10 = &fParam5;
		fParam5 = &fParam4;
		fParam4 = fVar10;
	}
	GET_CURVE_POINT(&uParam0, &fParam4, &Var1, 0);
	Function_34(&Var1);
	bVar11 = VDIST(Function_34(&Var1), Param1);
	vVar7 = { StackVal, StackVal, Var1 };
	while (Var1.f_12 >= &fParam5 && !bVar0)
	{
		Var4 = { StackVal, StackVal, Var1 };
		UNK_0x19D652F9(&uParam0, FABS(&fParam3), &Var4, &Var1);
		Function_34(&Var1);
		bVar12 = VDIST(Function_34(&Var1), Param1);
		if (bVar12 > bVar11)
		{
			bVar11 = bVar12;
			vVar7 = { StackVal, StackVal, Var1 };
		}
		if (Function_37(&Var1))
		{
			bVar0 = true;
		}
	}
	if (&iParam6 < 1 && &fParam3 < 1.0f)
	{
		UNK_0x19D652F9(&uParam0, (&fParam3 / 2.0f), &vVar7, &Var1);
		UNK_0x19D652F9(&uParam0, (-1.0f * (&fParam3 / 2.0f)), &vVar7, &Var4);
		Function_35(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_32(Var4.f_12, Var1.f_12), Function_36(Var4.f_12, Var1.f_12), (&iParam6 - 1));
		return StackVal, StackVal, Function_35(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_32(Var4.f_12, Var1.f_12), Function_36(Var4.f_12, Var1.f_12), (&iParam6 - 1));
	}
	return StackVal, StackVal, vVar7;
}

var Function_36(int iParam0, int iParam1) //Position: 0x1C76 / 7286
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_37(struct<13> Param0) //Position: 0x1C89 / 7305
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

float Function_38(struct<2> Param0, struct<2> Param2) //Position: 0x1CAC / 7340
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

bool Function_39(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1CC9 / 7369
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&uParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

void Function_40() //Position: 0x1D97 / 7575
{
	if (iLocal_318 != 4294967295)
	{
		if (!IS_ANY_SPEECH_PLAYING(&Global_54076))
		{
			SAY_SINGLE_LINE_CONTEXT(&iLocal_341, iLocal_318, &Global_54076, 0, 1, 0, 4294967295, 4294967295, 0, 1);
			bLocal_318 = 4294967295;
		}
	}
	return;
}

void Function_41() //Position: 0x1DC8 / 7624
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_335))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_335))
		{
			iLocal_89 = 11;
			SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_COACH_SLEEP", true, true, 2, 0, true, false);
			fLocal_345 = GET_CURRENT_GAME_TIME();
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_335))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_335);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_333))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_333);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_331))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_331);
			}
			SATCHEL_SET_ENABLED(0);
			bLocal_96 = false;
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_331))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_331))
		{
			switch (Local_27.f_112)
			{
				case 0x00000003:
				case 0x00000004:
					Local_27.f_112 = 2;
					iLocal_328 = 2;
					PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
					if (!IS_ANY_SPEECH_PLAYING(&Global_54076) && !IS_ANY_SPEECH_PLAYING(&iLocal_341))
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_COACH_STOP", true, true, 2, 0, true, false);
						bLocal_318 = 315;
					}
					break;
				
				case 0x00000002:
					Local_27.f_112 = 1;
					iLocal_328 = 1;
					PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
					if (!IS_ANY_SPEECH_PLAYING(&Global_54076) && !IS_ANY_SPEECH_PLAYING(&iLocal_341))
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_COACH_STOP_URGENT", true, true, 2, 0, true, false);
						bLocal_318 = 315;
					}
					break;
				
				default:
					break;
			}
			iLocal_337 = 1;
			Function_158(&Local_27 + 8, Local_27.f_112);
			Function_102();
			Function_42();
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_333))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_333))
		{
			switch (Local_27.f_112)
			{
				case 0x00000001:
					Local_27.f_112 = 2;
					iLocal_328 = 2;
					PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
					if (!IS_ANY_SPEECH_PLAYING(&Global_54076) && !IS_ANY_SPEECH_PLAYING(&iLocal_341))
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_COACH_SPEED_UP", true, true, 2, 0, true, false);
						bLocal_318 = 315;
					}
					break;
				
				case 0x00000002:
				case 0x00000004:
					Local_27.f_112 = 4;
					iLocal_328 = 4;
					PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
					if (!IS_ANY_SPEECH_PLAYING(&Global_54076) && !IS_ANY_SPEECH_PLAYING(&iLocal_341))
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_COACH_SPEED_UP_URGENT", true, true, 2, 0, true, false);
						bLocal_318 = 316;
					}
					break;
				
				default:
					break;
			}
			iLocal_337 = 1;
			Function_158(&Local_27 + 8, Local_27.f_112);
			Function_102();
			Function_42();
		}
	}
	return;
}

void Function_42() //Position: 0x2081 / 8321
{
	if ((!Global_6629 && !IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_331)) && !IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_333))
	{
		Function_102();
	}
	if (!Global_6629 || (Global_43790 == 3 && Global_43790 == 4))
	{
		if (((!Local_27.f_112 != 4 && !Local_27.f_112 != 3) && !IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_333)) && !bLocal_363)
		{
			uLocal_333 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_Faster", 10, "@UI.NAVIGATE_UP", 0, 0, 0, 0, 4294967295, 0);
		}
		if (!Local_27.f_112 != 1 && !IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_331))
		{
			uLocal_331 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_Slower", 10, "@UI.NAVIGATE_DOWN", 0, 0, 0, 0, 4294967295, 0);
		}
		Function_44(&Local_27 + 8, 1);
	}
	else
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_331))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&uLocal_331);
		}
		if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_333))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&uLocal_333);
		}
		Function_44(&Local_27 + 8, 0);
	}
	if (StackVal && Function_38(StackVal, !IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_335), Global_54078, Local_308) < 50.0f)
	{
		uLocal_335 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", 10, "@UI.ACCEPT", Function_43(), Function_43(), Function_43(), Function_43(), 4294967295, "HUD_MENU_SELECT_MASTER");
	}
	else if (StackVal && Function_38(StackVal, IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_335), Global_54078, Local_308) >= 50.0f)
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_335);
	}
	return;
}

var Function_43() //Position: 0x2227 / 8743
{
	int iVar0;
	
	return &iVar0;
}

void Function_44(var uParam0, int iParam1) //Position: 0x2230 / 8752
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

var Function_45() //Position: 0x225A / 8794
{
	struct<5> Var0;
	vector3 vVar7;
	
	bLocal_96 = 500;
	GET_OBJECT_POSITION(Function_159(&Local_27 + 8), &Local_311);
	iVar2 = GET_OBJECTSET_SIZE(&uLocal_321);
	if (Function_31(&Local_27))
	{
		if (iVar2 >= 1)
		{
			uVar3 = &Local_27 + 192;
			if (IS_OBJECT_VALID(&Local_27 + 192))
			{
				if (IS_OBJECT_IN_OBJECTSET(&Local_27 + 192, &uLocal_321))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&Local_27 + 192, &uLocal_321);
					iVar2 = (iVar2 - 1);
				}
			}
			*(&Local_27 + 192) = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET((iVar2 - 1), &uLocal_321));
			Local_27.f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Local_27 + 192, 0.0f, 1.0f, 10);
			GET_CURVE_POINT(&Local_27 + 192, 1.0f, &vVar4, 0);
			GET_CURVE_POINT(&Local_27 + 192, 0.0f, &vVar7, 0);
			Function_34(&vVar4);
			Function_34(&vVar7);
			if (VDIST(Local_311, Function_34(&vVar4)) > VDIST(Local_311, Function_34(&vVar7)))
			{
				Local_27.f_188 = 4294967295;
				*(&Local_27 + 36) = { StackVal, StackVal, vVar7 };
			}
			else
			{
				Local_27.f_188 = 1;
				*(&Local_27 + 36) = { StackVal, StackVal, vVar4 };
			}
			Function_79(&Local_27);
			if (IS_OBJECT_VALID(&uVar3))
			{
				RELEASE_CURVE(&uVar3);
			}
		}
		else
		{
			Function_35(StackVal, &Local_27 + 192, Local_308, 2,1f, 0.0f, 1.0f, 2);
			*(&Local_27 + 36) = { StackVal, StackVal, Function_35(StackVal, &Local_27 + 192, Local_308, 2,1f, 0.0f, 1.0f, 2) };
			Function_34(&Local_27 + 36);
			Var0 = Function_34(&Local_27 + 36);
			Function_79(&Local_27);
			iLocal_89 = 8;
			bLocal_96 = false;
		}
	}
	else
	{
		Function_47();
		Function_46(&Local_27);
	}
	if (GET_DEBUG_DRAW_STATE())
	{
		Function_6(&Local_27, 0);
		Var0.f_4 = (StackVal + 2.0f);
		Var0 = Local_311;
		Var0.f_4 = (StackVal + 10.0f);
		bLocal_96 = false;
	}
	return bLocal_96;
}

void Function_46(struct<113> Param0) //Position: 0x23BF / 9151
{
	Function_80(&Param0 + 8);
	if (Global_6629 && (Global_43790 != 3 || Global_43790 != 4))
	{
		Local_27.f_112 = 1;
	}
	else if (bLocal_363)
	{
		if (Local_27.f_112 == 4)
		{
			Local_27.f_112 = 2;
		}
	}
	else if (!iLocal_337)
	{
		Local_27.f_112 = 2;
	}
	else
	{
		Local_27.f_112 = iLocal_328;
	}
	Function_158(&Param0 + 8, Param0.f_112);
	return;
}

void Function_47() //Position: 0x2422 / 9250
{
	var uVar0;
	struct<21> Var1;
	
	uVar0 = Function_49(StackVal, Local_311, 131120, 0.0f, 25.0f, 5.0f);
	Function_35(StackVal, &uVar0, Local_311, 0x41200000, 0, 0x3f800000, 1);
	Var1 = { StackVal, StackVal, Function_35(StackVal, &uVar0, Local_311, 0x41200000, 0, 0x3f800000, 1) };
	Var4 = Vector(0.0f, 0.0f, 1.0f);
	ROTATE_VECTOR_XZ(&Var4, GET_HEADING(&iLocal_341), 0);
	iVar6 = Function_48(StackVal, StackVal, StackVal, &uVar0, Var1, Var4);
	bVar7 = 0.0f;
	iVar12 = 0;
	while (iVar12 <= 5)
	{
		UNK_0x19D652F9(&uVar0, (7,5f * IntToFloat(iVar6)), &Var1, &Var8);
		if (FABS((Var1.f_16 - Var8.f_16)) < 55.0f)
		{
			bVar11 = true;
		}
		bVar7 = (bVar7 + (Var1.f_16 - Var8.f_16));
		Var1 = Var8;
		Var1.f_4 = StackVal;
		Var1.f_8 = StackVal;
		Var1.f_12 = Var8.f_12;
		Var1.f_16 = Var8.f_16;
		Var1.f_20 = Var8.f_20;
		iVar12++;
	}
	if (FABS(bVar7) < 110.0f)
	{
		bVar11 = true;
	}
	if (bVar11)
	{
		bLocal_363 = true;
	}
	else
	{
		bLocal_363 = false;
	}
	RELEASE_CURVE(&uVar0);
	return;
}

int Function_48(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, Vector3 vParam5) //Position: 0x251E / 9502
{
	int iVar0;
	int iVar3;
	var uVar6;
	var uVar8;
	float fVar10;
	float fVar11;
	
	UNK_0x19D652F9(&uParam0, 1.0f, &iParam1, &iVar0);
	UNK_0x19D652F9(&uParam0, -1.0f, &iParam1, &iVar3);
	Function_34(&iVar0);
	Function_34(&iParam1);
	uVar6 = Vector(StackVal, StackVal, StackVal) - Vector(Function_34(&iParam1), Function_34(&iVar0), StackVal);
	fVar10 = VDOT(&uParam4, &uVar6);
	Function_34(&iVar3);
	Function_34(&iParam1);
	uVar8 = Vector(StackVal, StackVal, StackVal) - Vector(Function_34(&iParam1), Function_34(&iVar3), StackVal);
	fVar11 = VDOT(&uParam4, &uVar8);
	if (fVar11 > fVar10)
	{
		return 1;
	}
	return 4294967295;
}

var Function_49(struct<2> Param0, int iParam2, float fParam3, float fParam4, bool bParam5) //Position: 0x2577 / 9591
{
	struct<2> Var0;
	var uVar2;
	struct<9> Var3;
	
	bVar7 = -1.0f;
	uVar2 = START_CURVE_QUERY(&Global_43578, Param0, iParam2, fParam3, fParam4, &bParam5, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) < 0)
	{
	}
	else
	{
		bVar8 = false;
		while (bVar8 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar2, bVar8, &vVar3);
			Var0 = vVar3.x;
			Var0.f_4 = vVar3.y;
			Var0.f_8 = vVar3.z;
			if (bVar7 > 0.0f || bVar7 < VDIST(Param0, Var0))
			{
				bVar7 = VDIST(Param0, Var0);
				uVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar2, bVar8);
			}
			bVar8++;
		}
	}
	UNK_0xDF93BD7C(&uVar2);
	return &uVar6;
}

int Function_50(struct<169> Param0) //Position: 0x2618 / 9752
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	
	iVar0 = 0;
	if (!SQUAD_IS_VALID(&Param0 + 8) && !(((Param0 != 0 || Param0 != 18) || Param0 != 16) || Param0 != 17))
	{
		Param0 = 0;
		return 4;
	}
	switch (Param0)
	{
		case 0x00000000:
			iVar0 = 2;
			break;
		
		case 0x00000009:
			iVar0 = 2;
			break;
		
		case 0x0000000A:
			iVar0 = 2;
			break;
		
		case 0x0000000C:
			iVar0 = 2;
			break;
		
		case 0x0000000D:
			iVar0 = 2;
			break;
		
		case 0x00000010:
			iVar0 = 2;
			break;
		
		case 0x00000011:
			iVar0 = 2;
			break;
		
		case 0x00000001:
			Function_34(&Param0 + 36);
			Var1 = Vector(StackVal, StackVal, StackVal) - Vector(Function_34(&Param0 + 36), *(&Param0 + 220), StackVal);
			Function_34(&Param0 + 36);
			Var3 = Function_34(&Param0 + 36);
			vVar7 = { StackVal, StackVal, *(&Param0 + 36) };
			Function_78(StackVal, StackVal, StackVal, &Param0, vVar7, &Param0 + 192, Var1);
			*(&Param0 + 36) = { StackVal, StackVal, Function_78(StackVal, StackVal, StackVal, &Param0, vVar7, &Param0 + 192, Var1) };
			if (Function_77(&Param0 + 36))
			{
				Param0 = 16;
				return 3;
			}
			Function_34(&Param0 + 36);
			*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Var3, Function_34(&Param0 + 36), StackVal);
			*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
			if (&bParam1)
			{
				Function_73(&Param0, 0);
			}
			Param0 = 2;
			return 1;
			break;
		
		case 0x00000002:
			bVar11 = false;
			while (bVar11 <= SQUAD_GET_SIZE(&Param0 + 8))
			{
				TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar11));
				bVar11++;
			}
			if (Function_68(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000003:
			if (!SQUAD_IS_VALID(&Param0 + 8))
			{
				Param0 = 16;
				return 4;
			}
			if (!IS_ACTOR_VALID(Function_159(&Param0 + 8)))
			{
				Param0 = 16;
				return 5;
			}
			GET_POSITION(Function_159(&Param0 + 8), &Var3);
			Function_67(StackVal, Var3);
			*(&Param0 + 36) = { StackVal, StackVal, Function_67(StackVal, Var3) };
			GET_ACTOR_VELOCITY(Function_159(&Param0 + 8), &Var1);
			GET_POSITION(Function_159(&Param0 + 8), &Var5);
			if (Function_77(&Param0 + 36))
			{
				Function_65(Function_159(&Param0 + 8));
				*(&Param0 + 36) = { StackVal, StackVal, Function_65(Function_159(&Param0 + 8)) };
				return 7;
			}
			if (Function_68(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000006:
			iParam2 = &iParam2;
			if (Function_68(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			if (!Function_56(&Param0))
			{
				Param0 = 9;
				return 7;
			}
			if (!Function_68(&Param0, &bParam1, &bParam3))
			{
				Param0 = 16;
				return 6;
			}
			Param0 = 7;
		
		case 0x00000008:
			break;
		
		case 0x00000007:
			if (!Function_54(&Param0))
			{
				Param0 = 6;
				return 0;
			}
			if (&bParam1)
			{
				if (Function_52(&Param0))
				{
					bVar10 = true;
				}
				if (Function_51(&Param0 + 8))
				{
					bVar10 = true;
				}
				if (Param0.f_136 && Param0.f_112 < 2)
				{
					bVar10 = true;
				}
				if (Global_6646 && Param0.f_112 == 3)
				{
					bVar10 = true;
				}
				if (bVar10)
				{
					Function_73(&Param0, 0);
				}
			}
			GET_POSITION(Function_159(&Param0 + 8), &Var5);
			if (Param0.f_128)
			{
				if (!Function_4(StackVal, *(&Param0 + 176)))
				{
					if (Function_38(StackVal, StackVal, Var5, *(&Param0 + 176)) > Param0.f_168)
					{
						SQUAD_GOALS_CLEAR(&Param0 + 8);
						TASK_GO_TO_COORD(Function_159(&Param0 + 8), &Param0 + 176, 1);
						Param0 = 8;
						Param0.f_128 = 0;
						return 8;
					}
				}
			}
			break;
	}
	return iVar0;
}

bool Function_51(int iParam0) //Position: 0x298A / 10634
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		if (AI_GET_TASK_RETREAT_FLAG(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_52(struct<137> Param0) //Position: 0x29B8 / 10680
{
	if (!IS_VOLUME_VALID(&Global_43580 + 40))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_53(&Param0 + 8, &Global_43580 + 40))
		{
			if (!Param0.f_136)
			{
				Param0.f_136 = 1;
				return 1;
			}
		}
		if (Param0.f_136)
		{
			Param0.f_136 = 0;
			return 1;
		}
	}
	if (Param0.f_136)
	{
		Param0.f_136 = 0;
		return 1;
	}
	return 0;
}

bool Function_53(var uParam0, int iParam1) //Position: 0x2A31 / 10801
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_ALIVE(&uVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_54(struct<201> Param0) //Position: 0x2ABF / 10943
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	Function_34(&Param0 + 36);
	uVar4 = Function_55(StackVal, Function_34(&Param0 + 36), &Param0 + 8);
	GET_POSITION(&uVar4, &Var0);
	Function_34(&Param0 + 36);
	Var2 = Function_34(&Param0 + 36);
	if (Param0.f_200 > 1.0f)
	{
		Param0.f_200 = Function_33(StackVal, Param0.f_112);
	}
	if (StackVal > Function_32(VDIST(Var2, Var0), Function_33(Param0.f_200, Param0.f_112)))
	{
		Param0 = 6;
		return 0;
	}
	return 1;
}

var Function_55(struct<2> Param0, int iParam2) //Position: 0x2B51 / 11089
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<2> Var4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_4(StackVal, Param0))
	{
		LOG_WARNING("Invalid test vector passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(&iParam2))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam2) - 1))
	{
		uVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar0));
		GET_OBJECT_POSITION(&uVar3, &Var4);
		if (VDIST(Param0, Var4) > bVar2 || bVar2 > 0.0f)
		{
			bVar2 = VDIST(Param0, Var4);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR!");
	return "";
}

bool Function_56(int iParam0) //Position: 0x2CD0 / 11472
{
	var uVar0;
	var uVar2;
	
	if (DECOR_CHECK_EXIST(&iParam0 + 8, "wasstickup"))
	{
		DECOR_REMOVE(&iParam0 + 8, "wasstickup");
		return 1;
	}
	Function_34(&iParam0 + 36);
	uVar2 = Function_55(StackVal, Function_34(&iParam0 + 36), &iParam0 + 8);
	GET_POSITION(&uVar2, &uVar0);
	Function_57(StackVal, StackVal, &iParam0, (&iParam0 + 36), &iParam0 + 192, 2,5f, 0);
	*(&iParam0 + 36) = { StackVal, StackVal, Function_57(StackVal, StackVal, &iParam0, (&iParam0 + 36), &iParam0 + 192, 2,5f, 0) };
	if (Function_77(&iParam0 + 36))
	{
		return 0;
	}
	return 1;
}

vector3 Function_57(struct<217> Param0) //Position: 0x2D52 / 11602
{
	vector3 vVar0;
	struct<2> Var3;
	bool bVar5;
	bool bVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	var uVar11;
	struct<2> Var13;
	var uVar15;
	float fVar17;
	vector3 vVar18;
	var uVar21;
	bool bVar22;
	var uVar23;
	float fVar24;
	struct<17> Var25;
	
	Function_34(&vParam1);
	Var3 = Function_34(&vParam1);
	bVar5 = false;
	uVar7 = Function_64(StackVal, Param0.f_216);
	fVar8 = 0.0f;
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		fVar9 = 5.0f;
	}
	else
	{
		fVar9 = (fParam5 * 2.0f);
	}
	iVar10 = 0;
	GET_OBJECT_POSITION(Function_159(&Param0 + 8), &uVar11);
	Var13 = Vector(0.0f, 0.0f, -1.0f);
	if (!IS_OBJECTSET_VALID(&Param0 + 208))
	{
		*(&Param0 + 208) = CREATE_OBJECTSET_IN_LAYOUT(Function_43(), &Global_43578, 36, 1);
	}
	bVar22 = 4294967295;
	while (!bVar6)
	{
		uVar21 = START_CURVE_QUERY(&Global_43578, Var3, uVar7, fVar8, fVar9, Function_32(Function_63(&Param0), ((fVar9 - fVar8) / 2.0f)), 0);
		if (IS_OBJECT_VALID(&uParam4))
		{
			REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uParam4);
			if (!IS_OBJECT_IN_OBJECTSET(&uParam4, &Param0 + 208))
			{
				ADD_OBJECT_TO_OBJECTSET(&uParam4, &Param0 + 208);
			}
		}
		if (IS_OBJECTSET_VALID(&Param0 + 64))
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (!IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 64))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uVar23);
					RELEASE_CURVE(&uVar23);
				}
				bVar5++;
			}
		}
		else
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 208))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uVar23);
					RELEASE_CURVE(&uVar23);
				}
				bVar5++;
			}
		}
		if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21) < 0)
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uParam4, &Param0 + 208);
			UNK_0xDF93BD7C(&uVar21);
			Function_62(&Param0 + 208);
			ADD_OBJECT_TO_OBJECTSET(&uParam4, &Param0 + 208);
			if (uParam6 || iVar10 > 5)
			{
				fVar8 = fVar9;
				fVar9 = (fVar9 + fParam5);
				iVar10++;
			}
			else
			{
				Function_61();
				return StackVal, StackVal, Function_61();
			}
		}
		fVar24 = -100000.0f;
		bVar22 = 4294967295;
		bVar5 = false;
		if (IS_OBJECTSET_VALID(&Param0 + 64))
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 64))
				{
					GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar5, &vVar18);
					Function_34(&vVar18);
					Function_34(&vParam1);
					uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_34(&vParam1), Function_34(&vVar18), StackVal);
					fVar17 = VDOT(&uVar15, &Var13);
					if (fVar17 < fVar24)
					{
						fVar24 = fVar17;
						bVar22 = bVar5;
					}
				}
				RELEASE_CURVE(&uVar23);
				bVar5++;
			}
		}
		else if (Function_4(StackVal, Var13))
		{
			bVar22 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21) - 1000))) / 1000.0f));
		}
		else if (Global_6629)
		{
			Function_34(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_34(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			Function_61();
			Var25 = { StackVal, StackVal, Function_61() };
			Function_61();
			Var28 = { StackVal, StackVal, Function_61() };
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_34(&vParam1);
				Function_34(&Var25);
				Function_34(&vParam1);
				Function_34(&Var28);
				if (StackVal > Function_38(StackVal, Function_38(StackVal, StackVal, Function_34(&vParam1), Function_34(&Var25)), Function_34(&vParam1), Function_34(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, 0.0f, -5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, 0.0f, 5.0f, &vVar18);
				}
				if (Global_47151[12])
				{
					Function_60(StackVal, StackVal, vVar18);
					PRINTNL();
				}
				Function_34(&vVar18);
				Function_34(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_34(&vParam1), Function_34(&vVar18), StackVal);
				VNORMALIZE(&uVar15);
				fVar17 = VDOT(&uVar15, &Var13);
				fVar17 = (fVar17 * RAND_FLOAT_GAUSSIAN(0,5f, 0,5f));
				if (fVar17 < fVar24)
				{
					fVar24 = fVar17;
					bVar22 = bVar5;
				}
				RELEASE_CURVE(&uVar31);
				bVar5++;
			}
		}
		else
		{
			Function_61();
			Var25 = { StackVal, StackVal, Function_61() };
			Function_61();
			Var28 = { StackVal, StackVal, Function_61() };
			Function_34(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_34(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_34(&vParam1);
				Function_34(&Var25);
				Function_34(&vParam1);
				Function_34(&Var28);
				if (StackVal > Function_38(StackVal, Function_38(StackVal, StackVal, Function_34(&vParam1), Function_34(&Var25)), Function_34(&vParam1), Function_34(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, Var25.f_16, 5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, Var28.f_16, 5.0f, &vVar18);
				}
				Function_34(&vVar18);
				Function_34(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_34(&vParam1), Function_34(&vVar18), StackVal);
				VNORMALIZE(&uVar15);
				fVar17 = VDOT(&uVar15, &Var13);
				fVar17 = (fVar17 * RAND_FLOAT_GAUSSIAN(0,25f, 1.0f));
				if (fVar17 < fVar24)
				{
					fVar24 = fVar17;
					bVar22 = bVar5;
				}
				RELEASE_CURVE(&uVar31);
				bVar5++;
			}
		}
		iVar10 = 0;
		if (bVar22 == 4294967295)
		{
			UNK_0xDF93BD7C(&uVar21);
			if (uParam6 || iVar10 > 5)
			{
				fVar8 = fVar9;
				fVar9 = (fVar9 + fParam5);
				iVar10++;
			}
			else
			{
				Function_61();
				return StackVal, StackVal, Function_61();
			}
		}
		bVar6 = true;
	}
	*(&Param0 + 192) = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar22);
	Param0.f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Param0 + 192, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar22, &vVar0);
	Function_34(&vVar0);
	uVar32 = Function_34(&vVar0);
	GET_CURVE_POINT(&Param0 + 192, 1.0f, &vVar34, 0);
	GET_CURVE_POINT(&Param0 + 192, 0.0f, &vVar37, 0);
	if (StackVal < Function_26(StackVal, StackVal, StackVal, Function_26(StackVal, StackVal, StackVal, StackVal, vVar34, vParam1), vVar37, vParam1))
	{
		Param0.f_188 = 1;
		GET_CURVE_POINT(&Param0 + 192, 1.0f, &vVar0, 0);
	}
	else
	{
		Param0.f_188 = 4294967295;
		GET_CURVE_POINT(&Param0 + 192, 0.0f, &vVar0, 0);
	}
	if (Global_47267[1])
	{
		bVar5 = false;
		bVar5 = false;
		while (bVar5 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uVar21))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar5, &vVar18);
			Function_34(&vVar18);
			uVar32 = Function_34(&vVar18);
			bVar5++;
		}
		Function_34(&vVar0);
		uVar32 = Function_34(&vVar0);
	}
	Function_58(&Param0);
	UNK_0xDF93BD7C(&uVar21);
	return StackVal, StackVal, vVar0;
}

void Function_58(struct<33> Param0) //Position: 0x32A7 / 12967
{
	if (!Function_7(&Param0))
	{
		return;
	}
	if (!Function_59(StackVal))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&Param0 + 192))
	{
		return;
	}
	if (!Param0.f_32 < 0)
	{
		return;
	}
	if (!GET_CURVE_TYPE(&Param0 + 192) != 4 && !GET_CURVE_TYPE(&Param0 + 192) != 5)
	{
		LOG_ERROR("Adding a traffic node with a bad pathtype. I thought we filtered this?");
		return;
	}
	return;
}

bool Function_59(int iParam0) //Position: 0x3356 / 13142
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_60(struct<17> Param0) //Position: 0x336B / 13163
{
	Function_34(&Param0);
	PRINTVECTOR(Function_34(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
	return;
}

vector3 Function_61() //Position: 0x339E / 13214
{
	vector3 vVar0;
	
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_62(int iParam0) //Position: 0x33AD / 13229
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&iParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &iParam0);
		CLEAN_OBJECTSET(&iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

int Function_63(struct<113> Param0) //Position: 0x33F6 / 13302
{
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		return 5.0f;
	}
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			switch (Param0.f_112)
			{
				case 0x00000005:
					return 2,5f;
					break;
				
				case 0x00000001:
					return 3,75f;
					break;
				
				case 0x00000002:
					return 6,25f;
					break;
				
				case 0x00000004:
					return 8,75f;
					break;
				
				case 0x00000003:
					return 12,5f;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in NextTravelFreq");
			break;
	}
	return 6,25f;
}

int Function_64(int iParam0, int iParam1) //Position: 0x34B2 / 13490
{
	if (&iParam1 != 0)
	{
		return &iParam1;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 16;
			break;
		
		case 0x00000001:
			return 48;
			break;
	}
	return 48;
}

vector3 Function_65(int iParam0) //Position: 0x34E4 / 13540
{
	struct<2> Var0;
	struct<2> Var2;
	
	Var0 = Vector(0.0f, -50.0f, 0.0f);
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&iParam0), Var0, &Var2);
	if (!Function_66(&Var2, 50.0f, &Var0, 10))
	{
		Var0 = Var2;
	}
	Function_67(StackVal, Var0);
	return StackVal, StackVal, Function_67(StackVal, Var0);
}

bool Function_66(struct<2> Param0, struct<5> Param2) //Position: 0x3525 / 13605
{
	var uVar0;
	int iVar2;
	struct<2> Var3;
	
	if (iParam3 == 4294967295)
	{
		iVar2 = 4294967294;
	}
	else
	{
		iVar2 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(Param0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var3);
		if (VDIST(Param0, Var3) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(Var3);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(Param0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(Param0, Var3));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
	{
		if (!Function_4(StackVal, Param2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar2 > iParam3)
	{
		Param0 = (Param0 + 0,01f);
		Param0.f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
		{
			if (!Function_4(StackVal, Param2))
			{
				return 1;
			}
		}
		Param2 = Param0;
		Param2.f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar2++;
		}
		WAIT(false);
	}
	return 0;
}

vector3 Function_67(vector3 vParam0) //Position: 0x3668 / 13928
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

bool Function_68(struct<137> Param0) //Position: 0x3686 / 13958
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!Function_7(&Param0))
	{
		Function_6(&Param0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_159(&Param0 + 8));
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		SQUAD_GOALS_CLEAR(&Param0 + 8);
	}
	Function_34(&Param0 + 36);
	Var2 = Function_34(&Param0 + 36);
	Var0 = Var2;
	Function_72(StackVal, Var0, &Param0 + 36);
	if (&bParam1)
	{
		Param0.f_116 = Function_71(StackVal, Param0.f_116, Param0.f_120);
		if (!Param0.f_136 || Param0.f_112 != 4294967295)
		{
			Param0.f_112 = Param0.f_116;
		}
	}
	if (&bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_70(Function_159(&Param0 + 8)), 0);
	}
	Function_69(&Param0);
	return 1;
}

void Function_69(struct<189> Param0) //Position: 0x3756 / 14166
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	iVar1 = 2;
	if (Function_9())
	{
		iVar1 = 0;
	}
	if (Param0.f_188 == 4294967295)
	{
		iVar0 = 1;
	}
	if (Param0.f_148)
	{
		iVar1 = 1;
	}
	if (Param0.f_156)
	{
		if (!Param0.f_136 && GET_CURVE_TYPE(&Param0 + 192) == 5)
		{
			Param0.f_156 = 0;
		}
	}
	else
	{
		if (GET_CURVE_TYPE(&Param0 + 192) == 5)
		{
			Param0.f_156 = 1;
		}
		if (Param0.f_136)
		{
			Param0.f_156 = 1;
		}
	}
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		*(&Param0 + 16) = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(&Param0 + 8, 0, 4294967295, &Param0 + 192, Param0.f_112, iVar0, iVar1);
		if (Param0.f_156)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 0);
		}
		if (Param0.f_124 != 2)
		{
			if (!Param0.f_144)
			{
				Param0.f_124 = 2;
			}
			else
			{
				SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(&Param0 + 8, &Param0 + 16, Param0.f_124);
			}
		}
		if (StackVal && !Param0.f_152 != 2)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 4, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 4, 0);
		}
		SQUAD_GOAL_ADD_FACTION_STATUS_WITHIN_GOAL(&Param0 + 8, 1, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 8, 1);
	}
	else
	{
		if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0, 0))
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0);
		}
		if (Param0.f_156)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 0);
		}
	}
	return;
}

int Function_70(int iParam0) //Position: 0x3951 / 14673
{
	switch (iParam0)
	{
		case 0x00000002:
			return 64;
			break;
		
		case 0x00000001:
			return 96;
			break;
	}
	return 96;
}

int Function_71(int iParam0, int iParam1, int iParam2) //Position: 0x3978 / 14712
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_9())
	{
		if (&iParam2 != 0)
		{
			return &iParam2;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		iParam1 = &iParam1;
		switch (iParam0)
		{
			case 0x00000001:
				if (bVar0 <= 5000)
				{
					return 2;
				}
				if (bVar0 <= 4000)
				{
					return 4;
				}
				return 3;
				break;
			
			case 0x00000003:
				if (bVar0 <= 5000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				if (bVar0 <= 7500)
				{
					return 2;
				}
				return 4;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in WildSpeed");
				break;
		}
		return 2;
	}
	if (&iParam2 != 0)
	{
		return &iParam2;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	iParam1 = &iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000003:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		case 0x00000002:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in WildSpeed");
			break;
	}
	return 2;
}

void Function_72(vector3 vParam0) //Position: 0x3ABE / 15038
{
	vParam2 = vParam0.x;
	vParam2.f_4 = vParam0.y;
	vParam2.f_8 = vParam0.z;
	return;
}

void Function_73(struct<137> Param0) //Position: 0x3ADC / 15068
{
	if (!Function_9())
	{
		Function_80(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_158(&Param0 + 8, Param0.f_112);
		}
		else if (Global_6646 || iParam1)
		{
			if (StackVal == 2)
			{
				Param0.f_112 = 4;
			}
			else
			{
				Param0.f_112 = 3;
			}
			Function_158(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_44(&Param0 + 8, 1);
			}
		}
		else if ((Global_6647 || Function_75(131072)) || Function_51(&Param0 + 8))
		{
			Param0.f_112 = 4;
			Function_158(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_44(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_74(StackVal, Param0.f_120);
			Function_158(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_8(StackVal, Param0.f_120);
			Function_158(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_44(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_44(&Param0 + 8, 1);
			}
		}
	}
	else
	{
		Function_80(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_158(&Param0 + 8, Param0.f_112);
		}
		else if (Function_75(131072) || Function_51(&Param0 + 8))
		{
			Param0.f_112 = 3;
			Function_158(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_44(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_74(StackVal, Param0.f_120);
			Function_158(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_8(StackVal, Param0.f_120);
			Function_158(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_44(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_44(&Param0 + 8, 1);
			}
		}
	}
	return;
}

int Function_74(int iParam0, int iParam1) //Position: 0x3D18 / 15640
{
	if (!Function_9())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000003:
				return 1;
				break;
			
			case 0x00000002:
				return 5;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
				break;
		}
		return 5;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000003:
			return 4;
			break;
		
		case 0x00000002:
			return 2;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
			break;
	}
	return 2;
}

int Function_75(int iParam0) //Position: 0x3DE3 / 15843
{
	return Function_76(&Global_43580, iParam0);
}

int Function_76(var uParam0, int iParam1) //Position: 0x3DF1 / 15857
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_77(struct<21> Param0) //Position: 0x3E0E / 15886
{
	return ((((StackVal && (StackVal && Param0 != 0.0f != 0.0f) != 0.0f) && Param0.f_12 != 0.0f) && Param0.f_16 != 0.0f) && Param0.f_20 != 4294967295);
}

vector3 Function_78(struct<189> Param0) //Position: 0x3E42 / 15938
{
	int iVar0;
	int iVar3;
	vector3 vVar6;
	
	if (!IS_OBJECT_VALID(&uParam4))
	{
		return StackVal, StackVal, vVar6;
	}
	Param0.f_188 = Function_48(StackVal, StackVal, StackVal, &uParam4, vParam1, Param5);
	if (Param0.f_188 >= 0)
	{
		GET_CURVE_POINT(&uParam4, 1.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, 1.0f, &vParam1, &iVar0);
		Function_34(&iVar0);
		Function_34(&vParam1);
		*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_34(&vParam1), Function_34(&iVar0), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	else
	{
		GET_CURVE_POINT(&uParam4, 0.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, -1.0f, &vParam1, &iVar3);
		Function_34(&iVar3);
		Function_34(&vParam1);
		*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_34(&vParam1), Function_34(&iVar3), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	return StackVal, StackVal, vVar6;
}

int Function_79(struct<189> Param0) //Position: 0x3EEC / 16108
{
	int iVar0;
	
	if (!Function_7(&Param0))
	{
		Function_6(&Param0, 1);
		return 0;
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		LOG_WARNING("MOVE_IN_FORMATION given invalid squad");
		return 0;
	}
	Function_34(&Param0 + 36);
	if (Function_4(StackVal, Function_34(&Param0 + 36)))
	{
		LOG_ERROR("Trying to send some AI to 0,0,0!");
		return 0;
	}
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		SQUAD_GOALS_CLEAR(&Param0 + 8);
		TASK_CLEAR(&iLocal_341);
		AI_CLEAR_NAV_MATERIAL_USAGE(Function_159(&Param0 + 8));
		AI_SET_NAV_MATERIAL_USAGE(Function_159(&Param0 + 8), 96, 0);
	}
	if (Param0.f_188 == 4294967295)
	{
		iVar0 = 1;
	}
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		*(&Param0 + 16) = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(&Param0 + 8, 1, 4294967295, &Param0 + 192, 3, iVar0, 0);
	}
	else if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0, 0))
	{
		SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0);
	}
	Function_46(&Param0);
	return 1;
}

void Function_80(var uParam0) //Position: 0x401F / 16415
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_81() //Position: 0x4047 / 16455
{
	TELEPORT_ACTOR_WITH_HEADING(&uLocal_343, Local_325, bLocal_324, 1, 1, 1);
	return;
}

int Function_82(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x405F / 16479
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
	Function_96(iParam0, TO_FLOAT(bParam1), 1);
	Function_95(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_84(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &uParam3);
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
	Function_83(iParam0);
	return 1;
}

void Function_83(bool bParam0) //Position: 0x4287 / 17031
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

void Function_84(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, var uParam7) //Position: 0x4325 / 17189
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_94(390))), 32);
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
					bVar19 = (Function_93(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_93(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_91(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_88(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_85(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_43(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_85(int iParam0) //Position: 0x4963 / 18787
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_86(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4974 / 18804
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_87(char* cParam0) //Position: 0x4A6B / 19051
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_88(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4A86 / 19078
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_90(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_89(Function_90(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_89(int iParam0, int iParam1) //Position: 0x4AED / 19181
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_90(int iParam0, bool bParam1) //Position: 0x4AFF / 19199
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_91(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4B11 / 19217
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_92(int iParam0) //Position: 0x4C45 / 19525
{
	return Global_55480[iParam016].f_96;
}

float Function_93(int iParam0) //Position: 0x4C54 / 19540
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_94(int iParam0) //Position: 0x4C8D / 19597
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_95(int iParam0) //Position: 0x4CCA / 19658
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

int Function_96(int iParam0, float fParam1, bool bParam2) //Position: 0x4E64 / 20068
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

int Function_97(int iParam0, bool bParam1) //Position: 0x50A8 / 20648
{
	bool bVar0;
	
	bVar0 = Function_99(0);
	if ((Function_99(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_98(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_99(0));
	return 1;
}

int Function_98(int iParam0, bool bParam1, int iParam2) //Position: 0x5139 / 20793
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_95(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_84(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_99(int iParam0) //Position: 0x5336 / 21302
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

int Function_100(int iParam0, int iParam1) //Position: 0x5377 / 21367
{
	int iVar0;
	
	if (Function_101(3) > 5)
	{
		return 0;
	}
	iVar0 = 1;
	if (Function_160(iParam0))
	{
		if (StackVal == 5)
		{
			iVar0 = 5;
		}
	}
	return (iVar0 * ROUND((0,67f * POW((IntToFloat(iParam1) * 0,01f), 0,9f))));
}

int Function_101(int iParam0) //Position: 0x53BF / 21439
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_102() //Position: 0x53E7 / 21479
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_335))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_335);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_333))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_333);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_331))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_331);
	}
	return;
}

void Function_103() //Position: 0x5420 / 21536
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	vector3 vVar7;
	var uVar10;
	struct<2> Var11;
	bool bVar13;
	float fVar14;
	var uVar15;
	var uVar16;
	struct<2> Var17;
	int iVar19;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	vector3 vVar31;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	int iVar38;
	vector3 vVar39;
	int iVar42;
	struct<2> Var45;
	
	iVar0 = 16;
	if ((Local_97[iLocal_3042] != Global_46914[1] || Local_97[iLocal_3042] != Global_46866[2]) || Global_43789 != Global_46866[0])
	{
		iVar0 = 131088;
	}
	uVar1 = Function_159(&Local_27 + 8);
	Var2 = Vector(0.0f, 0.0f, -2,5f);
	ROTATE_VECTOR_XZ(&Var2, GET_HEADING(&uVar1), 0);
	GET_OBJECT_POSITION(&uVar1, &Var4);
	Local_311 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var4, StackVal);
	uLocal_321 = CREATE_OBJECTSET_IN_LAYOUT("scoachoset", &uLocal_346, 36, 1);
	if (iLocal_304 != 0 && iLocal_92)
	{
		Local_308 = *(&Global_42862 + 56);
		if (!FIND_TRAFFIC_PATH(&uLocal_346, &uLocal_321, &Local_311, &Local_308, 131120, &uVar6))
		{
			LOG_ERROR("Cannot find path!");
		}
		Function_35(StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_321)), Local_308, 0x41200000, 0, 0x3f800000, 1);
		vVar7 = { StackVal, StackVal, Function_35(StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_321)), Local_308, 0x41200000, 0, 0x3f800000, 1) };
		if (!Function_77(&vVar7))
		{
			Function_34(&vVar7);
			Local_308 = Function_34(&vVar7);
		}
	}
	else
	{
		GET_OBJECT_POSITION(&uLocal_306, &Local_308);
		if (!FIND_TRAFFIC_PATH(&uLocal_346, &uLocal_321, &Local_311, &Local_308, iVar0, &uVar6))
		{
			LOG_ERROR("Cannot find path!");
		}
	}
	iLocal_362 = GET_OBJECTSET_SIZE(&uLocal_321);
	uVar10 = Function_114(StackVal, Local_308);
	if (IS_OBJECT_VALID(&uVar10))
	{
		uVar15 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, &uLocal_321));
		uVar16 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13 + 1, &uLocal_321));
		Var17 = Local_308;
		while (((Function_4(StackVal, Var11) && bVar13 > 10) && IS_OBJECT_VALID(&uVar15)) && IS_OBJECT_VALID(&uVar16))
		{
			fVar14 = Function_113(&uVar15, &uVar16);
			Function_110(StackVal, Var17, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, &uLocal_321)), 1.0f, GET_VOLUME_FROM_OBJECT(&uVar10));
			Var11 = Function_110(StackVal, Var17, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, &uLocal_321)), 1.0f, GET_VOLUME_FROM_OBJECT(&uVar10));
			bVar13++;
			if (Function_4(StackVal, Var11))
			{
				if (fVar14 > 0.0f)
				{
					GET_CURVE_POINT(&uVar15, 1.0f, &iVar19, 0);
				}
				else
				{
					GET_CURVE_POINT(&uVar15, 0.0f, &iVar19, 0);
				}
				Function_34(&iVar19);
				Var17 = Function_34(&iVar19);
				uVar15 = &uVar16;
				uVar16 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13 + 1, &uLocal_321));
			}
		}
		if (!Function_4(StackVal, Var11))
		{
			Local_308 = Var11;
			bLocal_355 = true;
			uLocal_356 = &uVar15;
			uLocal_358 = &uVar16;
		}
		if (DECOR_CHECK_EXIST(&uVar10, "deleteMe"))
		{
			DESTROY_OBJECT(&uVar10);
		}
	}
	if (!Global_6629 || (Global_43790 == 3 && Global_43790 == 4))
	{
		Function_44(&Local_27 + 8, 1);
	}
	else
	{
		Function_44(&Local_27 + 8, 0);
	}
	Function_80(&Local_27 + 8);
	Function_109(StackVal, &Local_27, Local_308);
	Local_27.f_4 = 2;
	Local_27.f_112 = 2;
	*(&Local_27 + 192) = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(&uLocal_321) - 1), &uLocal_321));
	Function_106(StackVal, StackVal, &Local_27, Local_311, Vector(0.0f, 0.0f, 0.0f), &Local_27 + 192, 0, 0);
	GET_CURVE_POINT(&Local_27 + 192, 1.0f, &vVar22, 0);
	GET_CURVE_POINT(&Local_27 + 192, 0.0f, &vVar25, 0);
	GET_CURVE_POINT(GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(&uLocal_321) - 2), &uLocal_321)), 1.0f, &vVar28, 0);
	GET_CURVE_POINT(GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(&uLocal_321) - 2), &uLocal_321)), 0.0f, &vVar31, 0);
	fVar34 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar22, vVar28);
	fVar35 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar22, vVar31);
	fVar36 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar25, vVar28);
	fVar37 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar25, vVar31);
	if ((fVar34 > fVar36 && fVar34 > fVar37) || (fVar35 > fVar36 && fVar35 > fVar37))
	{
		Local_27.f_188 = 1;
		*(&Local_27 + 36) = { StackVal, StackVal, vVar22 };
	}
	else
	{
		Local_27.f_188 = 4294967295;
		*(&Local_27 + 36) = { StackVal, StackVal, vVar25 };
	}
	if (Global_47151[52])
	{
		iVar38 = 0;
		while (iVar38 <= GET_OBJECTSET_SIZE(&uLocal_321))
		{
			iVar38++;
		}
	}
	Function_35(StackVal, &Local_27 + 192, Local_311, 0x41200000, 0, 0x3f800000, 1);
	vVar39 = { StackVal, StackVal, Function_35(StackVal, &Local_27 + 192, Local_311, 0x41200000, 0, 0x3f800000, 1) };
	UNK_0x19D652F9(&Local_27 + 192, (10.0f * IntToFloat(Local_27.f_188)), &vVar39, &iVar42);
	Function_34(&iVar42);
	Var45 = Function_34(&iVar42);
	Function_34(&iVar42);
	if (!Function_104(StackVal, &uLocal_343, Function_34(&iVar42)))
	{
		bLocal_323 = true;
		Function_34(&vVar39);
		Local_325 = Function_34(&vVar39);
		Var45 = Vector(StackVal, StackVal, StackVal) - Vector(Local_325, Var45, StackVal);
		bLocal_324 = UNK_0x9C40E671(&Var45);
		Function_158(&Local_27 + 8, 5);
	}
	else
	{
		Function_79(&Local_27);
		Local_27 = 7;
		Function_50(&Local_27, 0, 0, 0);
	}
	return;
}

bool Function_104(Vector3 vParam0, struct<2> Param1) //Position: 0x5861 / 22625
{
	var uVar0;
	struct<2> Var2;
	var uVar4;
	
	uVar0 = Vector(0.0f, 0.0f, -1.0f);
	ROTATE_VECTOR_XZ(&uVar0, Function_105(&vParam0), 0);
	GET_POSITION(&vParam0, &Var2);
	uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Param1, StackVal);
	if (VDOT(&uVar0, &uVar4) < 0.0f)
	{
		return 1;
	}
	return 0;
}

var Function_105(bool bParam0) //Position: 0x589D / 22685
{
	return GET_HEADING(&bParam0);
}

void Function_106(struct<157> Param0) //Position: 0x58A9 / 22697
{
	Function_67(StackVal, Param1);
	*(&Param0 + 36) = { StackVal, StackVal, Function_67(StackVal, Param1) };
	(&Param0 + 36)->f_12 = Param3;
	(&Param0 + 36)->f_16 = StackVal;
	*(&Param0 + 192) = &uParam5;
	Param0.f_152 = &uParam7;
	Param0.f_156 = &uParam6;
	Function_107(&Param0);
	Param0.f_32 = SQUAD_GET_SIZE(&Param0 + 8);
	Function_58(&Param0);
}

void Function_107(int iParam0) //Position: 0x5906 / 22790
{
	struct<2> Var0;
	
	if (!SQUAD_IS_VALID(&iParam0 + 8))
	{
		Function_108();
		Var0 = { StackVal, Function_108() };
		*(&iParam0 + 8) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_43578, &Var0));
	}
	iParam0 = 1;
	return;
}

struct<8> Function_108() //Position: 0x5937 / 22839
{
	char* cVar0[8];
	
	strcpy(&cVar0, "", 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	return StackVal, cVar0;
}

void Function_109(int iParam0, struct<2> Param1) //Position: 0x598E / 22926
{
	*(&iParam0 + 220) = Param1;
	return;
}

struct<8> Function_110(struct<2> Param0, var uParam2, bool bParam3, float fParam4) //Position: 0x599E / 22942
{
	vector3 vVar0;
	vector3 vVar3;
	struct<2> Var6;
	int iVar8;
	
	Function_35(StackVal, &uParam2, Param0, 0x41200000, 0, 0x3f800000, 1);
	vVar0 = { StackVal, StackVal, Function_35(StackVal, &uParam2, Param0, 0x41200000, 0, 0x3f800000, 1) };
	while (!Function_112(&vVar0, ROUND(bParam3)) && iVar8 > 10)
	{
		vVar3 = { StackVal, StackVal, vVar0 };
		UNK_0x19D652F9(&uParam2, (bParam3 * 20.0f), &vVar3, &vVar0);
		Function_34(&vVar0);
		if (!IS_POINT_IN_VOLUME(Function_34(&vVar0), &fParam4))
		{
			Function_34(&vVar0);
			Var6 = Function_34(&vVar0);
			return StackVal, Var6;
		}
		Function_34(&vVar0);
		Var6 = Function_34(&vVar0);
		iVar8++;
	}
	Function_111();
	return StackVal, Function_111();
}

struct<8> Function_111() //Position: 0x5A23 / 23075
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_112(struct<13> Param0) //Position: 0x5A2D / 23085
{
	if (iParam1 != 4294967295 && Param0.f_12 > 0,001f)
	{
		return 1;
	}
	if (iParam1 != 1 && Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

var Function_113(var uParam0, int iParam1) //Position: 0x5A61 / 23137
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	
	GET_CURVE_POINT(&uParam0, 1.0f, &vVar0, 0);
	GET_CURVE_POINT(&uParam0, 0.0f, &vVar3, 0);
	GET_CURVE_POINT(&iParam1, 1.0f, &vVar6, 0);
	GET_CURVE_POINT(&iParam1, 0.0f, &vVar9, 0);
	fVar12 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar0, vVar6);
	fVar13 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar0, vVar9);
	fVar14 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar3, vVar6);
	fVar15 = Function_26(StackVal, StackVal, StackVal, StackVal, vVar3, vVar9);
	if ((fVar12 > fVar14 && fVar12 > fVar15) || (fVar13 > fVar14 && fVar13 > fVar15))
	{
		return -1.0f;
	}
	return 1.0f;
}

var Function_114(struct<2> Param0) //Position: 0x5AE0 / 23264
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_6667)
	{
		if (Global_6667[iVar028].f_152 == 4)
		{
			if (Global_6667[iVar028].f_180)
			{
				if (!Function_117(iVar0, 0) && IS_VOLUME_VALID(&Global_6667[iVar028] + 80))
				{
					if (IS_POINT_IN_VOLUME(Param0, &Global_6667[iVar028] + 80))
					{
						return GET_OBJECT_FROM_VOLUME(&Global_6667[iVar028] + 80);
					}
				}
			}
		}
		if (Global_6667[iVar028].f_152 == 3)
		{
			if (Global_6667[iVar028].f_180)
			{
				if (!Function_117(iVar0, 0))
				{
					if (Function_38(StackVal, StackVal, Param0, *(&Global_6667[iVar028] + 88)) > 10.0f)
					{
						uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_43578, Function_43(), 4,203895E-45f, *(&Global_6667[iVar028] + 88), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
						DECOR_SET_BOOL(&uVar1, "deleteMe", true);
						return GET_OBJECT_FROM_VOLUME(&uVar1);
					}
				}
			}
		}
		iVar0++;
	}
	if (Function_116())
	{
		Function_115(Global_39906.f_24);
		if (Function_38(StackVal, StackVal, Param0, Function_115(Global_39906.f_24)) > 200.0f)
		{
			Function_115(Global_39906.f_24);
			uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_43578, Function_43(), 4,203895E-45f, Function_115(Global_39906.f_24), Vector(0.0f, 0.0f, 0.0f), Vector(200.0f, 50.0f, 200.0f));
			DECOR_SET_BOOL(&uVar1, "deleteMe", true);
			return GET_OBJECT_FROM_VOLUME(&uVar1);
		}
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46760[2]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46760[2]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46816[2]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46816[2]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46796[0]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46796[0]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46796[3]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46796[3]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46796[2]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46796[2]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46838[1]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46838[1]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46850[2]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46850[2]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46850[1]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46850[1]9] + 8);
	}
	return "";
}

struct<8> Function_115(int iParam0) //Position: 0x5D89 / 23945
{
	struct<2> Var0;
	
	if (iParam0 == Global_46926[5])
	{
		Var0 = Vector(-1043,829f, 183,985f, 1371,714f);
	}
	else if (iParam0 == Global_46866[3])
	{
		Var0 = Vector(-2234,426f, 23,091f, 4454,898f);
	}
	else if (iParam0 == Global_46926[6])
	{
		Var0 = Vector(-482,365f, 143,447f, 1908,17f);
	}
	else if (iParam0 == Global_46816[3])
	{
		Var0 = Vector(-490,208f, 20,103f, 3023,158f);
	}
	else if (iParam0 == Global_46760[13])
	{
		Var0 = Vector(-1945,125f, 30,262f, 3469,187f);
	}
	else if (iParam0 == Global_46866[7])
	{
		Var0 = Vector(-2726,75f, 55,867f, 4619,704f);
	}
	else if (iParam0 == Global_46760[6])
	{
		Var0 = Vector(-1912,426f, 29,225f, 2261,395f);
	}
	else if (iParam0 == Global_46866[10])
	{
		Var0 = Vector(-1756,155f, 30,369f, 4819,779f);
	}
	else if (iParam0 == Global_46866[8])
	{
		Var0 = Vector(-1445,059f, 19,691f, 4909,378f);
	}
	else if (iParam0 == Global_46760[11])
	{
		Var0 = Vector(-2829.0f, 20,079f, 3076,999f);
	}
	else if (iParam0 == Global_46816[6])
	{
		Var0 = Vector(-1269,727f, 109,427f, 2762,885f);
	}
	else if (iParam0 == Global_46926[3])
	{
		Var0 = Vector(-733,172f, 228,751f, 1129,988f);
	}
	else if (iParam0 == Global_46850[5])
	{
		Var0 = Vector(-3384,816f, 55,788f, 4746,955f);
	}
	else if (iParam0 == Global_46866[9])
	{
		Var0 = Vector(-1200,055f, 19,075f, 4964,34f);
	}
	else if (iParam0 == Global_46866[11])
	{
		Var0 = Vector(-1147,715f, 27,988f, 4820,093f);
	}
	else if (iParam0 == Global_46760[7])
	{
		Var0 = Vector(-2868,86f, 74,342f, 2178,624f);
	}
	else if (iParam0 == Global_46838[3])
	{
		Var0 = Vector(-3140,568f, 44,538f, 3284,213f);
	}
	else if (iParam0 == Global_46866[4])
	{
		Var0 = Vector(-1361,188f, 13,056f, 4299,818f);
	}
	else if (iParam0 == Global_46796[7])
	{
		Var0 = Vector(-4016,218f, 21,468f, 2398,236f);
	}
	else if (iParam0 == Global_46926[4])
	{
		Var0 = Vector(-844,503f, 189,827f, 1577,429f);
	}
	else
	{
		PRINTSTRING("The bad bh region is: ");
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_44085[iParam09] + 8)));
		PRINTNL();
		LOG_ERROR("No True bounty location...we're guessing here!");
		GET_VOLUME_CENTER(&Global_44085[iParam09] + 8, &Var0);
	}
	return StackVal, Var0;
}

bool Function_116() //Position: 0x60A2 / 24738
{
	return Function_10(StackVal, 1);
}

bool Function_117(int iParam0, bool bParam1) //Position: 0x60B1 / 24753
{
	int iVar0;
	
	iVar0 = Function_119(iParam0);
	if (!Function_118(iVar0))
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

bool Function_118(int iParam0) //Position: 0x60EF / 24815
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_119(int iParam0) //Position: 0x6106 / 24838
{
	if (!Function_120(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_120(int iParam0) //Position: 0x6120 / 24864
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_121(struct<2> Param0, bool bParam2) //Position: 0x6136 / 24886
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
			if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (&bParam2)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

int Function_122(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x61A2 / 24994
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
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
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

var Function_123(int iParam0) //Position: 0x6242 / 25154
{
	int iVar0;
	char* cVar1[24];
	
	if (!IS_LAYOUTREF_VALID(&Global_43578))
	{
		return "";
	}
	if (!Function_160(iParam0))
	{
		return "";
	}
	cVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&cVar1, 9);
	memcpy(&cVar2, &Global_44085[iParam09] + 32, 6);
	ITERATE_ON_PARTIAL_NAME(&cVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	iVar0 = START_OBJECT_ITERATOR(&cVar1);
	while (IS_OBJECT_VALID(&iVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(&iVar0)))
		{
			DESTROY_ITERATOR(&cVar1);
			return &iVar0;
		}
		iVar0 = OBJECT_ITERATOR_NEXT(&cVar1);
	}
	iVar0 = "";
	DESTROY_ITERATOR(&cVar1);
	return &iVar0;
}

void Function_124() //Position: 0x62E2 / 25314
{
	if (iLocal_92)
	{
		if (!Function_131(StackVal, StackVal, Local_93, (&Global_42862 + 32)))
		{
			Function_129(&Local_97);
			Local_93 = *(&Global_42862 + 32);
			iLocal_330 = 0;
			Function_127(&Local_97, iLocal_330);
		}
		if (StackVal || StackVal != 3 != 0)
		{
			Function_126(&Local_97);
			Local_93 = Vector(0.0f, 0.0f, 0.0f);
			iLocal_330 = Function_133(&Local_97, 0, bLocal_300);
			Function_127(&Local_97, iLocal_330);
			iLocal_92 = 0;
		}
	}
	else if (StackVal || StackVal != 2 != 1)
	{
		iLocal_92 = 1;
		Function_129(&Local_97);
		Local_93 = *(&Global_42862 + 32);
		iLocal_330 = 0;
		Function_127(&Local_97, iLocal_330);
	}
	if (!bLocal_300 && ((fLocal_319 + 0,3f) - Function_32(0,15f, ((0,15f * TO_FLOAT(iLocal_320)) / 5.0f))) > GET_CURRENT_GAME_TIME())
	{
		if (UNK_0x062C5047("@UI.NAVIGATE_UP", 1, 0))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			iLocal_330 = Function_125(&Local_97, iLocal_330);
			Function_127(&Local_97, iLocal_330);
			fLocal_319 = GET_CURRENT_GAME_TIME();
			bLocal_320++;
		}
		else if (UNK_0x062C5047("@UI.NAVIGATE_DOWN", 1, 0))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			iLocal_330 = Function_133(&Local_97, iLocal_330, bLocal_300);
			Function_127(&Local_97, iLocal_330);
			fLocal_319 = GET_CURRENT_GAME_TIME();
			bLocal_320++;
		}
		else
		{
			fLocal_319 = 0.0f;
			bLocal_320 = true;
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_335))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_335))
		{
			iLocal_304 = iLocal_330;
			iLocal_89 = 4;
			return;
		}
	}
	return;
}

int Function_125(struct<2>[] Param0, int iParam1) //Position: 0x648D / 25741
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam1 - 1);
	if (iVar0 <= 0)
	{
		iVar0 = (Param0 - 1);
	}
	while (!StackVal)
	{
		iVar0 = (iVar0 - 1);
		if (iVar0 > 0 && !bVar1)
		{
			iVar0 = (Param0 - 1);
			bVar1 = true;
		}
		else if (iVar0 > 0 && bVar1)
		{
			if (Function_160(Param0[02]))
			{
			}
			return 0;
		}
	}
	if (Function_160(Param0[iVar02]))
	{
	}
	return iVar0;
}

void Function_126(struct<2>[] Param0) //Position: 0x6503 / 25859
{
	Param0[02].f_4 = 0;
	Param0[02].f_8 = 0;
	Param0[02] = 4294967295;
	Param0[02].f_12 = 0;
	return;
}

void Function_127(struct<2>[] Param0, int iParam1) //Position: 0x652B / 25899
{
	char* cVar0[32];
	char[] cVar8[4];
	
	if (iLocal_92 && iParam1 != 0)
	{
		strcpy(&cVar0, "PASS_COACH_Waypoint", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_128(Param0[iParam12]) };
	}
	strcpy(&cVar8, I2STR(Param0[iParam12].f_12), 4);
	SET_USE_CONTEXT_TEXT(&uLocal_335, "PASS_COACH_CurrentDest", &cVar0, &cVar8, 0, 0);
	return;
}

struct<32> Function_128(int iParam0) //Position: 0x659D / 26013
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_160(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, &Global_44085[iParam09] + 32, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_129(struct<2>[] Param0) //Position: 0x665F / 26207
{
	Param0[02].f_4 = 1;
	Param0[02].f_8 = ROUND(Function_130(&Global_42862 + 16));
	Param0[02] = Function_121(StackVal, *(&Global_42862 + 32), 1);
	Param0[02].f_12 = Function_100(StackVal, Param0[02]);
	return;
}

var Function_130(int iParam0) //Position: 0x66AC / 26284
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&iParam0))
	{
		iVar1 = (iVar1 + CURVE_CALCULATE_DISTANCE_BY_STEP_SIZE(GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0)), 0.0f, 1.0f, 50.0f));
		bVar0++;
	}
	return iVar1;
}

bool Function_131(struct<2> Param0, struct<2> Param2) //Position: 0x66E5 / 26341
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_132(struct<2>[] Param0, int iParam1) //Position: 0x6711 / 26385
{
	struct<8> Var0;
	
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_333))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_333);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_331))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_331);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_335))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_335);
	}
	if (!bLocal_300)
	{
		if (iLocal_305 >= 1)
		{
			uLocal_331 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_PreviousDest", 10, "@UI.NAVIGATE_UP", 0, 0, 0, 0, 4294967295, 0);
			uLocal_333 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_NextDest", 10, "@UI.NAVIGATE_DOWN", 0, 0, 0, 0, 4294967295, 0);
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_128(Param0[iParam12]) };
		uLocal_335 = ADD_SCRIPT_USE_CONTEXT(&Var0, 10, "@UI.ACCEPT", "", "", "", "", 4294967295, "HUD_MENU_SELECT_MASTER");
		Function_127(&Param0, iParam1);
	}
	return;
}

int Function_133(struct<2>[] Param0, int iParam1, bool bParam2) //Position: 0x6821 / 26657
{
	int iVar0;
	bool bVar1;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = iParam1 + 1;
	if (iVar0 >= (Param0 - 1))
	{
		iVar0 = 0;
	}
	while (!StackVal)
	{
		iVar0++;
		if (iVar0 < (Param0 - 1) && !bVar1)
		{
			iVar0 = 0;
			bVar1 = true;
		}
		else if (iVar0 < (Param0 - 1) && bVar1)
		{
			if (Function_160(Param0[02]))
			{
			}
			return 0;
		}
	}
	if (Function_160(Param0[iVar02]))
	{
	}
	return iVar0;
}

void Function_134(bool bParam0) //Position: 0x68A3 / 26787
{
	if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_135(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x691A / 26906
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_136(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_136(int iParam0) //Position: 0x69A5 / 27045
{
	char* cVar0[16];
	
	if (!Function_9())
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

void Function_137(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x69E4 / 27108
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_139(&uParam0, uParam1, &uParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_138(&cVar1, &uParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_138(char* cParam0) //Position: 0x6A59 / 27225
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_139(int iParam0, var uParam1, int iParam2) //Position: 0x6A93 / 27283
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_141(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_140(uVar0))
		{
			case 0x00000002:
				if (!Function_143(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_140(char* cParam0) //Position: 0x6B0F / 27407
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

int Function_141(int iParam0) //Position: 0x6BB0 / 27568
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_142(&iVar1, 2147483648);
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

void Function_142(var uParam0, int iParam1) //Position: 0x6BED / 27629
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

bool Function_143(var uParam0, int iParam1) //Position: 0x6C03 / 27651
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

var Function_144(struct<2>[] Param0, var uParam1, bool bParam2) //Position: 0x6C16 / 27670
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 500;
	if (!&bParam2)
	{
		iVar3 = 150;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if ((StackVal && Function_160(Param0[iVar02])) || (uParam1 && iVar0 != 0))
		{
			if (&bParam2)
			{
				Param0[iVar02].f_12 = Function_100(StackVal, Param0[iVar02]);
			}
			else
			{
				Param0[iVar02].f_12 = 0;
			}
			if (Function_160(Param0[iVar02]) && !iVar0 != 0)
			{
				if (Function_16(&(Global_43791[Param0[iVar02]]), 4096) || !Global_6606)
				{
					iVar2++;
					if (Function_145() > Param0[iVar02].f_12)
					{
						if (StackVal >= iVar3)
						{
							bVar1++;
						}
						else
						{
							Param0[iVar02].f_4 = 0;
						}
					}
					else
					{
						Param0[iVar02].f_4 = 0;
					}
				}
				else
				{
					Param0[iVar02].f_4 = 0;
				}
			}
			else if (uParam1 && iVar0 != 0)
			{
				if (Function_145() > Param0[iVar02].f_12)
				{
					if (StackVal >= iVar3)
					{
						bVar1++;
					}
					else
					{
						Param0[iVar02].f_4 = 0;
					}
				}
				else
				{
					Param0[iVar02].f_4 = 0;
				}
			}
			else
			{
				Param0[iVar02].f_4 = 0;
			}
		}
		else
		{
			Param0[iVar02].f_4 = 0;
		}
		iVar0++;
	}
	if (iVar2 == 0)
	{
		bVar1 = 4294967295;
	}
	return bVar1;
}

int Function_145() //Position: 0x6D7B / 28027
{
	return Function_99(0);
}

bool Function_146(struct<2>[] Param0, var uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x6D85 / 28037
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (Global_47151[52])
	{
		fVar2 = 10000.0f;
	}
	else
	{
		fVar2 = 1500.0f;
	}
	fVar3 = GET_PROFILE_TIME();
	switch (uParam1)
	{
		case 0x00000000:
			iVar1 = 0;
			while (iVar1 <= Param0)
			{
				Param0[iVar12] = 4294967295;
				Param0[iVar12].f_4 = 0;
				Param0[iVar12].f_8 = 99999999;
				iVar1++;
			}
			if (bParam3)
			{
				if (&bParam4)
				{
					Param0[02].f_4 = 1;
					Param0[02].f_8 = ROUND(Function_130(&Global_42890 + 16));
					Param0[02] = Function_121(StackVal, (&Global_42890 + 32), 1);
				}
				else
				{
					Param0[02].f_4 = 1;
					Param0[02].f_8 = ROUND(Function_130(&Global_42862 + 16));
					Param0[02] = Function_121(StackVal, *(&Global_42862 + 32), 1);
				}
			}
			uParam1 = 1;
			break;
		
		case 0x00000001:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_117(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46760 - 1))
				{
					if (StackVal && !(StackVal && !(Function_16(&(Global_43791[Global_46760[iVar0]]), 32768) && (Function_16(&(Global_43791[Global_46760[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_147(&Param0, Global_46760[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46760 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 2;
			break;
		
		case 0x00000002:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_117(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46816 - 1))
				{
					if (StackVal && !(StackVal && !(Function_16(&(Global_43791[Global_46816[iVar0]]), 32768) && (Function_16(&(Global_43791[Global_46816[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_147(&Param0, Global_46816[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46816 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 3;
			break;
		
		case 0x00000003:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_117(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46796 - 1))
				{
					if (StackVal && !(StackVal && !(Function_16(&(Global_43791[Global_46796[iVar0]]), 32768) && (Function_16(&(Global_43791[Global_46796[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_147(&Param0, Global_46796[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46796 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 4;
			break;
		
		case 0x00000004:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_117(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46838 - 1))
				{
					if (StackVal && !(StackVal && !(Function_16(&(Global_43791[Global_46838[iVar0]]), 32768) && (Function_16(&(Global_43791[Global_46838[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_147(&Param0, Global_46838[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46838 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 5;
			break;
		
		case 0x00000005:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_117(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46926 - 1))
				{
					if (StackVal && !(StackVal && !(Function_16(&(Global_43791[Global_46926[iVar0]]), 32768) && (Function_16(&(Global_43791[Global_46926[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_147(&Param0, Global_46926[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46926 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 6;
			break;
		
		case 0x00000006:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_117(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46914 - 1))
				{
					if (StackVal && !(StackVal && !(Function_16(&(Global_43791[Global_46914[iVar0]]), 32768) && (Function_16(&(Global_43791[Global_46914[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_147(&Param0, Global_46914[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46914 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 7;
			break;
		
		case 0x00000007:
			if ((Global_43787 != 1 || Function_117(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46850 - 1))
				{
					if (StackVal && !(StackVal && !(Function_16(&(Global_43791[Global_46850[iVar0]]), 32768) && (Function_16(&(Global_43791[Global_46850[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_147(&Param0, Global_46850[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46850 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 8;
			break;
		
		case 0x00000008:
			if ((Global_43787 != 1 || Function_117(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46866 - 1))
				{
					if (StackVal && !(StackVal && !(Function_16(&(Global_43791[Global_46866[iVar0]]), 32768) && (Function_16(&(Global_43791[Global_46866[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_147(&Param0, Global_46866[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46866 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 9;
			break;
		
		case 0x00000009:
			if ((Global_43787 != 1 || Function_117(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46894 - 1))
				{
					if (StackVal && !(StackVal && !(Function_16(&(Global_43791[Global_46894[iVar0]]), 32768) && (Function_16(&(Global_43791[Global_46894[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_147(&Param0, Global_46894[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46894 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 10;
			break;
		
		case 0x0000000A:
			if (Global_47151[52])
			{
				iVar0 = 0;
				while (iVar0 <= Param0)
				{
					if (StackVal)
					{
						if (Function_160(Param0[iVar02]) && !iVar0 != 0)
						{
						}
						else if (iVar0 == 0)
						{
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			return 1;
			break;
	}
	return 0;
}

void Function_147(struct<2>[] Param0, int iParam1) //Position: 0x75A4 / 30116
{
	var uVar0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	GET_OBJECT_POSITION(&Global_44085[iParam19] + 8, &uVar0);
	iVar2 = Function_148(iParam1);
	iVar3 = 1;
	while (StackVal && (StackVal > iVar2 && iVar3 > (Param0 - 1)))
	{
		iVar3++;
	}
	iVar4 = iVar3;
	iVar5 = iParam1;
	iVar7 = iVar2;
	while (StackVal && iVar4 > (Param0 - 1))
	{
		iVar8 = StackVal;
		iVar6 = Param0[iVar42];
		Param0[iVar42].f_8 = iVar7;
		Param0[iVar42] = iVar5;
		Param0[iVar42].f_4 = 1;
		iVar7 = iVar8;
		iVar5 = iVar6;
		iVar4++;
	}
	if (!StackVal)
	{
		Param0[iVar42].f_8 = iVar7;
		Param0[iVar42] = iVar5;
		Param0[iVar42].f_4 = 1;
	}
	return;
}

int Function_148(int iParam0) //Position: 0x7680 / 30336
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&Global_44085[iParam09] + 8, &Var0);
	return Function_149(StackVal, Var0, 0);
}

int Function_149(var uParam0, bool bParam1, bool bParam2) //Position: 0x769E / 30366
{
	struct<2> Var0;
	var uVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar3 = 16;
	if (&bParam2)
	{
		iVar3 = 393264;
	}
	iVar4 = CREATE_OBJECTSET_IN_LAYOUT("tempPathSet", &Global_43578, 36, 1);
	if (FIND_TRAFFIC_PATH(&Global_43578, &iVar4, &Global_54078, &uParam0, iVar3, &uVar2))
	{
		bVar5 = ROUND(Function_130(&iVar4));
		Function_62(&iVar4);
		DESTROY_OBJECTSET(&iVar4);
		return bVar5;
	}
	Function_62(&iVar4);
	DESTROY_OBJECTSET(&iVar4);
	return ROUND(VDIST(Global_54078, Var0));
}

void Function_150() //Position: 0x771A / 30490
{
	bool bVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (GET_DAMAGE_BY_LOCAL_PLAYER(&iLocal_341) < 0.0f)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (AI_GET_IS_RETREATING(&iLocal_341))
		{
			bVar0 = true;
		}
	}
	Function_155(&uLocal_360, 16);
	if (Function_151(&iLocal_341, &uVar1, &uLocal_352, uLocal_360, 0, 0x40400000))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (GET_DAMAGE_BY_LOCAL_PLAYER(&uLocal_343) < 0.0f)
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		bVar3 = false;
		while (bVar3 <= GET_NUM_DRAFT_POSITIONS(&uLocal_343))
		{
			iVar2 = GET_DRAFT_ACTOR(bVar3, &uLocal_343);
			if (IS_ACTOR_VALID(&iVar2))
			{
				if (GET_DAMAGE_BY_LOCAL_PLAYER(&iVar2) < 0.0f)
				{
					bVar0 = true;
				}
				if (Function_151(&iVar2, &uVar1, &uLocal_352, uLocal_360, 0, 0x40400000))
				{
					bVar0 = true;
				}
			}
			bVar3++;
		}
	}
	if (bVar0)
	{
		Function_102();
		TASK_CLEAR(&iLocal_341);
		SQUAD_GOALS_CLEAR(&Local_27 + 8);
		AI_CLEAR_NAV_MATERIAL_USAGE(&iLocal_341);
		Function_80(&Local_27 + 8);
		SAY_SINGLE_LINE_CONTEXT(&iLocal_341, 60, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		MEMORY_PREFER_WALKING(&iLocal_341, 1);
		bVar4 = TASK_SEQUENCE_OPEN();
		TASK_VEHICLE_LEAVE(false);
		TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&iLocal_341, bVar4);
		TASK_SEQUENCE_RELEASE(bVar4, 1);
		TASK_PRIORITY_SET(&iLocal_341, false);
		iLocal_89 = 12;
		TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
	}
	return;
}

bool Function_151(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x7851 / 30801
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_154(&iParam0, &Global_54076);
		if (!Function_10(&uParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_152(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_152(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_152(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_152(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_152(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_10(&uParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_152(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&uParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_152(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_152(int iParam0) //Position: 0x7A1A / 31258
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_153(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_153(int iParam0) //Position: 0x7A57 / 31319
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_154(var uParam0, int iParam1) //Position: 0x7A70 / 31344
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_155(var uParam0, var uParam1) //Position: 0x7B65 / 31589
{
	uParam0 = (uParam0 || uParam1);
	return;
}

var Function_156() //Position: 0x7B76 / 31606
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_157() //Position: 0x7B8B / 31627
{
	return Global_54082 != 3;
}

void Function_158(var uParam0, bool bParam1) //Position: 0x7B96 / 31638
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), bParam1);
		bVar0++;
	}
	return;
}

var Function_159(var uParam0) //Position: 0x7BC0 / 31680
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

bool Function_160(int iParam0) //Position: 0x7C0D / 31757
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_161(int iParam0) //Position: 0x7C23 / 31779
{
	Function_162(&Global_43580, iParam0);
	return;
}

void Function_162(var uParam0, var uParam1) //Position: 0x7C31 / 31793
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

