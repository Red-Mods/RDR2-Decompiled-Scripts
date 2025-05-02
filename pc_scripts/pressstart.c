//Decompiled with MagicRDR v1.0
//Function Count : 5
//Statics Count : 464
//Natives Count : 53
//Parameters Count : 0

#region Local Var
	struct<11> Local_0[20];
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
	var uLocal_231 = 3;
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
	var uLocal_253 = 3;
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
	var uLocal_275 = 3;
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
	var uLocal_297 = 3;
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
	var uLocal_319 = 3;
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
	var uLocal_341 = 3;
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
	var uLocal_363 = 3;
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
	var uLocal_385 = 3;
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
	var uLocal_407 = 3;
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
	var uLocal_429 = 3;
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
	struct<2> Local_442 = { 0, 0 } ;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 3;
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
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	uVar0 = CREATE_LAYOUT(Function_4());
	uVar1 = CREATE_CAMERA_IN_LAYOUT(&uVar0, Function_4(), 0);
	bVar2 = 4294967295;
	bVar3 = IS_SIMULATE_START_MULTIPLAYER();
	if (bVar3)
	{
		bVar3 = NET_AUTHENTICATE_GAMER(0, "Multiplayer Online");
	}
	ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
	ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
	DISABLE_CHILD_SECTOR("tes_wall02x");
	DISABLE_CHILD_SECTOR("mp_tes_coop01ax");
	DISABLE_CHILD_SECTOR("mp_tes_coop01bx");
	DISABLE_CHILD_SECTOR("mp_tes_coop01cx");
	DISABLE_CHILD_SECTOR("mp_tes_coop02x");
	DISABLE_CHILD_SECTOR("mp_tes_base01x");
	DISABLE_CHILD_SECTOR("mp_gap_mineLid01x");
	DISABLE_CHILD_SECTOR("mp_fom_coop01x");
	DISABLE_CHILD_SECTOR("mp_fom_burntDebris01x");
	DISABLE_CHILD_SECTOR("mp_wld_base03x");
	DISABLE_CHILD_SECTOR("mp_nos_coop01ax");
	DISABLE_CHILD_SECTOR("mp_nos_coop01bx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01cx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01dx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01ex");
	DISABLE_CHILD_SECTOR("mp_scr_coop01x");
	DISABLE_CHILD_SECTOR("arm_flags01x");
	DISABLE_CHILD_SECTOR("chu_flags01x");
	DISABLE_CHILD_SECTOR("esc_flags01x");
	DISABLE_CHILD_SECTOR("han_flags01x");
	DISABLE_CHILD_SECTOR("hen_flags01x");
	DISABLE_CHILD_SECTOR("mtp_flags01x");
	DISABLE_CHILD_SECTOR("mp_arm_base01x");
	DISABLE_CHILD_SECTOR("mp_cas_base01x");
	DISABLE_CHILD_SECTOR("mp_pik_base01x");
	DISABLE_CHILD_SECTOR("mp_tes_base01x");
	DISABLE_CHILD_SECTOR("mp_tum_base01x");
	DISABLE_CHILD_SECTOR("mp_arm_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_ffa01x");
	DISABLE_CHILD_SECTOR("mp_esc_ffa01x");
	DISABLE_CHILD_SECTOR("mp_hen_ffa01x");
	DISABLE_CHILD_SECTOR("mp_lsh_ffa01x");
	DISABLE_CHILD_SECTOR("mp_pik_ffa01x");
	DISABLE_CHILD_SECTOR("mp_upr_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_platforms01x");
	DISABLE_CHILD_SECTOR("mp_mtp_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_ffa01x");
	DISABLE_CHILD_SECTOR("mp_wld_base01x");
	DISABLE_CHILD_SECTOR("mp_chu_base01x");
	PRINTSTRING("Hiding DLC leaderboards...\n");
	UI_EXCLUDE("LbCat_DLC0");
	UI_EXCLUDE("LbCat_DLC1");
	UI_EXCLUDE("LbCat_DLC2");
	UI_EXCLUDE("LbCat_DLC3");
	UI_EXCLUDE("LbCat_DLC4");
	UI_EXCLUDE("LbCat_DLC5");
	UI_EXCLUDE("LbCat_DLC6");
	UI_EXCLUDE("LbCat_DLC7");
	if (bVar3)
	{
		UI_SEND_EVENT("setupComplete");
		UNK_0x8A8BDCF9(0);
		UI_SEND_EVENT("startScreenExit");
		UI_SEND_EVENT("select");
		UI_SEND_EVENT("net.EnterOnline");
		bVar2 = false;
	}
	else if (IS_SIMULATE_START_PRESS() && !IS_SIMULATE_START_MULTIPLAYER())
	{
		UI_SEND_EVENT("setupComplete");
		UNK_0x8A8BDCF9(0);
		UI_SEND_EVENT("startScreenExit");
		UI_SEND_EVENT("simulateStartPress");
		bVar2 = false;
	}
	else
	{
		Function_3();
		bVar4 = RAND_INT_RANGE(false, 19);
		bVar5 = RAND_INT_RANGE(false, 2);
		if (!IS_DISK_CACHE_PRIMED())
		{
			bVar4 = RAND_INT_RANGE(false, 2);
			PRINTSTRING("PressStart.sc - Cache is NOT primed, using fewer shots.");
		}
		else
		{
			PRINTSTRING("PressStart.sc - Cache is primed, all shots available.");
		}
		PRINTNL();
		STREAMING_SET_CUTSCENE_MODE(1);
		if (GET_RUNNING_BENCHMARK())
		{
			SET_CAMERA_POSITION(&uVar1, Local_442);
			SET_CAMERA_ORIENTATION(&uVar1, *(&Local_442 + 12), 0);
			SET_CAMERA_DIRECTION(&uVar1, *(&Local_442 + 24), 1);
			SET_CURRENT_CAMERA_ON_CHANNEL(&uVar1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
			SET_WEATHER((*&Local_442 + 36)[bVar5], Function_2());
			SET_TIME_OF_DAY(&Local_442 + 72);
			AMBIENCE_AUDIO_ENTITY_UPDATE_TERRITORY(&Local_442 + 80);
			while (!STREAMING_IS_WORLD_LOADED())
			{
				WAIT(false);
			}
			while (!FLASH_INTRO_ARE_LEGALS_COMPLETED())
			{
				WAIT(false);
			}
			UI_SEND_EVENT("loadComplete");
			UI_SEND_EVENT("setupComplete");
			while (GET_RUNNING_BENCHMARK())
			{
				WAIT(false);
			}
		}
		SET_CAMERA_POSITION(&uVar1, Local_0[bVar411]);
		SET_CAMERA_ORIENTATION(&uVar1, *(&Local_0[bVar411] + 12), 0);
		SET_CAMERA_DIRECTION(&uVar1, *(&Local_0[bVar411] + 24), 1);
		SET_CURRENT_CAMERA_ON_CHANNEL(&uVar1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		SET_WEATHER((*&Local_0[bVar411] + 36)[bVar5], Function_2());
		SET_TIME_OF_DAY(&Local_0[bVar411] + 72);
		AMBIENCE_AUDIO_ENTITY_UPDATE_TERRITORY(&Local_0[bVar411] + 80);
		bVar2 = Function_1();
	}
	SET_PLAYER_PADINDEX(0, bVar2);
	PRINTSTRING("nStartpad ");
	PRINTINT(bVar2);
	PRINTNL();
	UI_SEND_EVENT("startPadSelected");
	WAIT(false);
	FLASH_INTRO_FADE_PRESS_START(1);
	FLASH_INTRO_FADE_LOGO(1);
	FLASH_INTRO_SHUTDOWN();
	MOVIE_PLAYER_STOP_MOVIE();
	while (!HUD_IS_FADED())
	{
		WAIT(1000);
	}
	REMOVE_CAMERA_FROM_CHANNEL(&uVar1, 0);
	DESTROY_LAYOUT(&uVar0);
	HUD_ENABLE(1);
	PRINTSTRING("asdf");
	TERMINATE_THIS_SCRIPT();
	return;
}

int Function_1() //Position: 0x713 / 1811
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	bVar0 = 4294967295;
	SETTIMERA(0);
	WAIT(5);
	UI_SEND_EVENT("fileDoFreeSpaceCheck");
	while (!STREAMING_IS_WORLD_LOADED())
	{
		WAIT(false);
	}
	while (!FLASH_INTRO_ARE_LEGALS_COMPLETED())
	{
		WAIT(false);
	}
	while (UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		WAIT(false);
	}
	UI_EXIT("LoadingScreen");
	HUD_ENABLE(0);
	UI_SEND_EVENT("loadComplete");
	UI_SEND_EVENT("setupComplete");
	UNK_0x8A8BDCF9(0);
	WAIT(false);
	SET_TIME_ACCELERATION(30.0f);
	FLASH_INTRO_FADE_PRESS_START(0);
	Global_124157 = 0;
	iVar1 = UI_GET_REBOOT_REASON(&bVar0);
	if (iVar1 == 2)
	{
		UI_SEND_EVENT("fileSignedOutPostReboot");
	}
	else if (iVar1 == 5)
	{
		UI_SEND_EVENT("dlc.reboot_content_removed");
	}
	while (bVar0 == 4294967295)
	{
		if (UI_IS_SHOWING_DIALOG())
		{
			bVar3 = false;
			if (((UI_ISFOCUSED("SSAlert_BlockedMP") || UI_ISFOCUSED("SSAlert_NotSignedIn")) || UI_ISFOCUSED("SSAlert_NotOnline")) || UI_ISFOCUSED("SSAlert_NoCable"))
			{
				iVar2 = 0;
				while (iVar2 <= 4)
				{
					if (UNK_0xDA674AE0("@UI.CANCEL", 1, 0))
					{
						bVar3 = true;
					}
					iVar2++;
				}
				if (bVar3)
				{
					UI_EXIT("SSAlert_BlockedMP");
					UI_EXIT("SSAlert_NotSignedIn");
					UI_EXIT("SSAlert_NotOnline");
					UI_EXIT("SSAlert_NoCable");
				}
			}
			else if (UI_ISFOCUSED("Dialog_PlayerHasSignedOut"))
			{
				iVar2 = 0;
				while (iVar2 <= 4)
				{
					if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
					{
						bVar3 = true;
					}
					iVar2++;
				}
				if (bVar3)
				{
					UI_EXIT("Dialog_PlayerHasSignedOut");
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0 == 4294967295)
		{
			bVar0 = UNK_0x03962973();
			if (bVar0 != 4294967295)
			{
				Global_124157 = 1;
				UI_SEND_EVENT("net.EnterOnlineForInvite");
			}
		}
		iVar4 = 4294967295;
		if (bVar0 != 4294967295 && UI_GET_REBOOT_REASON(&iVar4) != 4)
		{
			bVar0 = iVar4;
			PRINTSTRING("Rebooted for Content controller=");
			PRINTINT(bVar0);
			PRINTSTRING("\n");
		}
		WAIT(false);
	}
	return bVar0;
}

var Function_2() //Position: 0xA25 / 2597
{
	return MAKE_TIME_OF_DAY_EX(false, false, 0, 1);
}

void Function_3() //Position: 0xA32 / 2610
{
	struct<9> Var0;
	
	Local_442 = Vector(794,39f, 105,38f, 1216,563f);
	*(&Local_442 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_442 + 24) = Vector(-0,809f, -0,224f, 0,543f);
	(*&Local_442 + 36)[0] = 2;
	*(&Local_442 + 72) = MAKE_TIME_OF_DAY(17, 54, false);
	strcpy(&Local_442 + 80, "fro", 4);
	vVar0 = Vector(17.0f, 54.0f, 0.0f);
	UNK_0x14993D3B(&Local_442);
	UNK_0xE8AB1D5B(&Local_442 + 24);
	UNK_0x8291ED47(&Local_442 + 36[0]);
	UNK_0xB288F455(&vVar0);
	(*&Local_442 + 36)[1] = (*&Local_442 + 36)[0];
	(*&Local_442 + 36)[2] = (*&Local_442 + 36)[0];
	bVar2 = ROUND(vVar0.x);
	bVar3 = ROUND(vVar0.y);
	bVar4 = ROUND(vVar0.z);
	*(&Local_442 + 72) = MAKE_TIME_OF_DAY(bVar2, bVar3, bVar4);
	iVar5 = 0;
	Local_0[iVar511] = Vector(-4481,12f, 5,946f, 3709,654f);
	*(&Local_0[iVar511] + 12) = Vector(8,613f, 131,857f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,74f, 0,15f, 0,656f);
	(*&Local_0[iVar511] + 36)[0] = 2;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 2;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(17, 54, false);
	strcpy(&Local_0[iVar511] + 80, "fro", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-1422,511f, 210,743f, 1833,63f);
	*(&Local_0[iVar511] + 12) = Vector(8,304f, -95,444f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(0,985f, 0,144f, 0,094f);
	(*&Local_0[iVar511] + 36)[0] = 5;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 3;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(6, 6, false);
	strcpy(&Local_0[iVar511] + 80, "nor", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-627,2f, 143,995f, 800,196f);
	*(&Local_0[iVar511] + 12) = Vector(11,534f, -94,804f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(0,976f, 0,2f, 0,082f);
	(*&Local_0[iVar511] + 36)[0] = 2;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 2;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(6, false, false);
	strcpy(&Local_0[iVar511] + 80, "nor", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-639,938f, 35,648f, 3549,802f);
	*(&Local_0[iVar511] + 12) = Vector(11,37f, -79,908f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(0,965f, 0,197f, -0,172f);
	(*&Local_0[iVar511] + 36)[0] = 2;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 2;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(6, 40, false);
	strcpy(&Local_0[iVar511] + 80, "mex", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-330,665f, 24,499f, 3416,434f);
	*(&Local_0[iVar511] + 12) = Vector(13,423f, 140,379f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,62f, 0,232f, 0,749f);
	(*&Local_0[iVar511] + 36)[0] = 0;
	(*&Local_0[iVar511] + 36)[1] = 0;
	(*&Local_0[iVar511] + 36)[2] = 0;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(7, false, false);
	strcpy(&Local_0[iVar511] + 80, "mex", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-3200,493f, 39,453f, 4555,916f);
	*(&Local_0[iVar511] + 12) = Vector(7,407f, 90,383f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,992f, 0,129f, 0,007f);
	(*&Local_0[iVar511] + 36)[0] = 2;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 2;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(17, 30, false);
	strcpy(&Local_0[iVar511] + 80, "mex", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-378,529f, 36,804f, 2888,644f);
	*(&Local_0[iVar511] + 12) = Vector(19,647f, -64,053f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(0,847f, 0,336f, -0,412f);
	(*&Local_0[iVar511] + 36)[0] = 0;
	(*&Local_0[iVar511] + 36)[1] = 0;
	(*&Local_0[iVar511] + 36)[2] = 0;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(6, 51, false);
	strcpy(&Local_0[iVar511] + 80, "fro", 4);
	iVar5++;
	Local_0[iVar511] = Vector(85,627f, 129,558f, 1412,801f);
	*(&Local_0[iVar511] + 12) = Vector(5,309f, 123,244f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,833f, 0,093f, 0,546f);
	(*&Local_0[iVar511] + 36)[0] = 1;
	(*&Local_0[iVar511] + 36)[1] = 0;
	(*&Local_0[iVar511] + 36)[2] = 2;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(13, false, false);
	strcpy(&Local_0[iVar511] + 80, "nor", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-121,951f, 125,742f, 1205,495f);
	*(&Local_0[iVar511] + 12) = Vector(12,039f, 72,157f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,931f, 0,209f, -0,3f);
	(*&Local_0[iVar511] + 36)[0] = 1;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 1;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(13, false, false);
	strcpy(&Local_0[iVar511] + 80, "nor", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-839,653f, 195,536f, 886,82f);
	*(&Local_0[iVar511] + 12) = Vector(49,276f, 115,377f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,589f, 0,758f, 0,28f);
	(*&Local_0[iVar511] + 36)[0] = 5;
	(*&Local_0[iVar511] + 36)[1] = 5;
	(*&Local_0[iVar511] + 36)[2] = 5;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(19, false, false);
	strcpy(&Local_0[iVar511] + 80, "nor", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-912,198f, 199,899f, 1766,551f);
	*(&Local_0[iVar511] + 12) = Vector(13,889f, 41,717f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,646f, 0,24f, -0,725f);
	(*&Local_0[iVar511] + 36)[0] = 2;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 2;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(7, false, false);
	strcpy(&Local_0[iVar511] + 80, "nor", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-495,08f, 147,581f, 1879,051f);
	*(&Local_0[iVar511] + 12) = Vector(0,042f, -135,351f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(0,703f, 0,001f, 0,711f);
	(*&Local_0[iVar511] + 36)[0] = 2;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 2;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(7, false, false);
	strcpy(&Local_0[iVar511] + 80, "nor", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-3946,866f, 30,355f, 3062,77f);
	*(&Local_0[iVar511] + 12) = Vector(6,973f, 54,951f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,813f, 0,121f, -0,57f);
	(*&Local_0[iVar511] + 36)[0] = 1;
	(*&Local_0[iVar511] + 36)[1] = 1;
	(*&Local_0[iVar511] + 36)[2] = 1;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(7, 30, false);
	strcpy(&Local_0[iVar511] + 80, "fro", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-3172,137f, 44,054f, 3714,56f);
	*(&Local_0[iVar511] + 12) = Vector(11,959f, -137,357f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(0,663f, 0,207f, 0,72f);
	(*&Local_0[iVar511] + 36)[0] = 1;
	(*&Local_0[iVar511] + 36)[1] = 1;
	(*&Local_0[iVar511] + 36)[2] = 1;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(17, false, false);
	strcpy(&Local_0[iVar511] + 80, "fro", 4);
	iVar5++;
	Local_0[iVar511] = Vector(414,902f, 80,721f, 3494,851f);
	*(&Local_0[iVar511] + 12) = Vector(3,38f, 54,313f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,811f, 0,059f, -0,582f);
	(*&Local_0[iVar511] + 36)[0] = 0;
	(*&Local_0[iVar511] + 36)[1] = 0;
	(*&Local_0[iVar511] + 36)[2] = 0;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(7, false, false);
	strcpy(&Local_0[iVar511] + 80, "mex", 4);
	iVar5++;
	Local_0[iVar511] = Vector(77,174f, 95,916f, 2928,188f);
	*(&Local_0[iVar511] + 12) = Vector(0,149f, 130,056f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,765f, 0,003f, 0,644f);
	(*&Local_0[iVar511] + 36)[0] = 2;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 2;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(12, false, false);
	strcpy(&Local_0[iVar511] + 80, "fro", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-1265,052f, 77,699f, 3610,894f);
	*(&Local_0[iVar511] + 12) = Vector(12,592f, 60,897f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,853f, 0,218f, -0,475f);
	(*&Local_0[iVar511] + 36)[0] = 2;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 2;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(7, false, false);
	strcpy(&Local_0[iVar511] + 80, "mex", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-2061,975f, 44,545f, 3113,069f);
	*(&Local_0[iVar511] + 12) = Vector(6,955f, -15,545f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(0,266f, 0,121f, -0,956f);
	(*&Local_0[iVar511] + 36)[0] = 2;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 2;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(10, false, false);
	strcpy(&Local_0[iVar511] + 80, "fro", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-470,088f, 21,47f, 3974,894f);
	*(&Local_0[iVar511] + 12) = Vector(48,507f, 98,761f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,655f, 0,749f, 0,101f);
	(*&Local_0[iVar511] + 36)[0] = 0;
	(*&Local_0[iVar511] + 36)[1] = 0;
	(*&Local_0[iVar511] + 36)[2] = 0;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(7, false, false);
	strcpy(&Local_0[iVar511] + 80, "mex", 4);
	iVar5++;
	Local_0[iVar511] = Vector(-2885,432f, 20,614f, 2714,08f);
	*(&Local_0[iVar511] + 12) = Vector(7,073f, 72,66f, 0.0f);
	*(&Local_0[iVar511] + 24) = Vector(-0,947f, 0,123f, -0,296f);
	(*&Local_0[iVar511] + 36)[0] = 2;
	(*&Local_0[iVar511] + 36)[1] = 2;
	(*&Local_0[iVar511] + 36)[2] = 2;
	*(&Local_0[iVar511] + 72) = MAKE_TIME_OF_DAY(14, 30, false);
	strcpy(&Local_0[iVar511] + 80, "fro", 4);
	iVar5++;
	return;
}

var Function_4() //Position: 0x162B / 5675
{
	var uVar0;
	
	return &uVar0;
}

