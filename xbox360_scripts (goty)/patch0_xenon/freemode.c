//Decompiled with MagicRDR v1.0
//Function Count : 706
//Statics Count : 530
//Natives Count : 556
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<85> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<5> Local_166 = { 0, 0, 0, 0, 0 } ;
	var uLocal_171 = 0;
	struct<5> Local_172 = { 0, 0, 0, 0, 0 } ;
	char* cLocal_177 = NULL;
	float fLocal_178 = 0.0f;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	float fLocal_182 = 0.0f;
	float fLocal_183 = 0.0f;
	int iLocal_184 = 0;
	float fLocal_185 = 0.0f;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	float fLocal_188 = 0.0f;
	int iLocal_189 = 0;
	float fLocal_190 = 0.0f;
	int iLocal_191 = 0;
	float fLocal_192 = 0.0f;
	float fLocal_193 = 0.0f;
	int iLocal_194 = 0;
	float fLocal_195 = 0.0f;
	float fLocal_196 = 0.0f;
	float fLocal_197 = 0.0f;
	float fLocal_198 = 0.0f;
	float fLocal_199 = 0.0f;
	int iLocal_200 = 0;
	struct<113> Local_201 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = -1;
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
	var uLocal_339 = 27;
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
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	struct<5> Local_436[17];
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	bool bLocal_527 = false;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	char* cVar5[8];
	bool bVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	bool bVar11;
	
	iLocal_11 = 0;
	iLocal_67 = 0;
	iLocal_84 = 383;
	bLocal_168 = false;
	fLocal_178 = 180.0f;
	iLocal_179 = 5.0f;
	iLocal_180 = 10.0f;
	iLocal_181 = 35.0f;
	fLocal_182 = 35.0f;
	fLocal_183 = 35.0f;
	iLocal_184 = 10.0f;
	fLocal_185 = 10.0f;
	iLocal_186 = 5.0f;
	iLocal_187 = 2.5f;
	fLocal_188 = 30.0f;
	iLocal_189 = 180.0f;
	fLocal_190 = 180.0f;
	iLocal_191 = 1000;
	fLocal_192 = 0.001f;
	fLocal_193 = 600.0f;
	iLocal_194 = 15.0f;
	fLocal_195 = 5.0f;
	fLocal_196 = 5.0f;
	fLocal_197 = 0.4f;
	fLocal_198 = 0.5f;
	fLocal_199 = 3.0f;
	iLocal_200 = 3;
	iLocal_236 = 0;
	iLocal_237 = 0;
	iLocal_238 = 0;
	fLocal_241 = 25.0f;
	fLocal_242 = 25.0f;
	iLocal_260 = 0;
	iLocal_522 = 0;
	iLocal_523 = 0;
	iLocal_525 = 0;
	iLocal_524 = NET_GET_FREE_ROAM_MODE();
	Function_705(8);
	fVar1 = 0.0f;
	bVar2 = false;
	Function_704(&uLocal_416);
	SET_RICH_PRESENCE(1, 0, 0, 0, 0);
	uLocal_240 = Function_702("FreeModeThread");
	Function_699();
	switch (iLocal_524)
	{
		case 0x00000001:
		case 0x00000002:
			UI_SET_TEXT("OLNM_ReturnToFM", "mp_fe_freeroam");
			break;
		
		case 0x00000000:
			UI_SET_TEXT("OLNM_ReturnToFM", "mp_fe_resession");
			break;
	}
	if (NET_GET_PLAYMODE() == 1)
	{
		if (iLocal_524 == 0)
		{
			UI_EXCLUDE("MULTI_FREE_ROAM");
		}
		else
		{
			UI_INCLUDE("MULTI_FREE_ROAM");
		}
		UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_AvatarPicker", "mp_avatarpicker_conf_lobby");
	}
	else
	{
		UI_INCLUDE("MULTI_FREE_ROAM");
		UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_AvatarPicker", "mp_avatarpicker_conf");
	}
	UI_EXIT("XpHud");
	Function_698(2);
	Function_697(2192);
	Function_696(0);
	bVar3 = !Function_695("netNoAmbientWorld");
	if (Function_695("mpskiptutorial"))
	{
		Function_698(262144);
	}
	Function_694();
	iVar4 = 0;
	while (iVar4 <= Global_30750)
	{
		DESTROY_POPULATION_SET(Global_30750[iVar4]);
		iVar4++;
	}
	Function_681();
	NET_CLEAR_RELEVANCY_OVERRIDE();
	if (Global_16524.f_16)
	{
		Function_676(0, 60, 0);
	}
	if (HUD_IS_FADED())
	{
		strcpy(&cVar5, "LS_", 8);
		straddi(&cVar5, RAND_INT_RANGE(1, 13), 8);
		UI_TEXTURE_SET_NAME("LoadingScreenTexture", &cVar5);
		UI_SHOW("LoadingScreenTexture");
	}
	if (iLocal_524 == 1)
	{
		Global_3362 = (Global_3362 + 0.25f);
	}
	if (iLocal_524 == 1)
	{
		NET_GAMER_BLIPS_SHOW_ON_FULL_MAP(0);
		NET_GAMER_BLIPS_FORCE_VISIBLE(0);
		SET_PLAYER_COMBATMODE_OVERRIDE(1);
		NET_GAMER_ICONS_SET_STEALTH(6);
		NET_GAMER_BLIPS_SET_STEALTH(0);
		NET_GAMER_BLIPS_SHOW_POSSE_MEMBERS(1);
	}
	else
	{
		NET_GAMER_BLIPS_SHOW_ON_FULL_MAP(0);
		NET_GAMER_ICON_FORCE_VISIBLE(1);
		NET_GAMER_BLIPS_TREAT_COVER_AS_ALIVE(1);
		NET_GAMER_BLIPS_FORCE_VISIBLE(1);
		SET_PLAYER_COMBATMODE_OVERRIDE(4294967295);
		NET_GAMER_ICONS_SET_STEALTH(4294967295);
		NET_GAMER_BLIPS_SET_STEALTH(0);
	}
	if (iLocal_524 == 2)
	{
		Function_670(1);
	}
	switch (GET_PLAYER_COMBATMODE())
	{
		case 0x00000000:
			Function_669(1572864, 0);
			break;
		
		case 0x00000001:
			Function_669(524288, 0);
			Function_669(1048576, 1);
			break;
		
		case 0x00000002:
			Function_669(524288, 1);
			Function_669(1048576, 0);
			break;
	}
	while (!IS_EXITFLAG_SET() && ((UI_ISACTIVE("NetAlert_FailedInviteJoin_NoPlaylist") || UI_ISACTIVE("SG_AutoSaveDisabled")) || UI_ISACTIVE("NetAlert_NatWarning")))
	{
		WAIT(0);
	}
	if (((Global_83864.f_1264 > 3 && Global_84364.f_708 != 0) && !Function_668(262144)) && Function_667())
	{
		UI_ENTER("MP_Tutorial");
		Function_698(262144);
		Function_666(0);
	}
	bVar9 = false;
	fVar10 = 0.0f;
	while (!IS_EXITFLAG_SET() && !bVar9)
	{
		if (HUD_IS_FADED())
		{
			if (!bVar7)
			{
				UI_SET_TEXT("LoadingMissionName", &Global_79349 + 48);
				UI_REFRESH("LoadingMissionName");
				UI_REFRESH("LoadingScreen");
				UI_SET_TEXT("LoadingSpinner", "Common_Null");
				Function_665("mp_tip", 4294967295);
				bVar7 = true;
			}
			if (!bVar8)
			{
				if (fVar10 >= 0.0f)
				{
					fVar10 = GET_CURRENT_GAME_TIME();
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar10) <= 3.0f)
				{
					HUD_FADE_TO_LOADING_SCREEN();
					bVar8 = true;
				}
			}
		}
		else if (bVar7)
		{
			bVar7 = false;
			bVar8 = false;
			fVar10 = 0.0f;
		}
		if (!Function_667())
		{
			Local_286 = 5;
		}
		switch (Local_286)
		{
			case 0x00000000:
				if (!UI_ISACTIVE("MP_Tutorial"))
				{
					Function_666(1);
				}
				break;
			
			case 0x00000001:
				if (Function_663())
				{
					Function_661();
					Function_659();
					Function_656();
					SET_POP_DENSITY_MULTIPLIER(0.6f);
					Function_635(&Local_286 + 20, 1, 0, 1, 0);
					Function_615(&Local_286 + 20, 98848);
					Function_613(&Local_286 + 20, 98744);
					bVar11 = Function_612();
					if (IS_ACTOR_VALID(bVar11))
					{
						Function_611(bVar11);
					}
					Function_610(&Local_286 + 452);
					Function_666(2);
					Function_669(2048, 0);
					Function_609();
				}
				break;
			
			case 0x00000002:
				Function_587();
				if (NET_IS_IN_SESSION())
				{
					REGISTER_CLIENT_BROADCAST_VARIABLES(&iLocal_269, 17);
					REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_416, 20);
					Function_586();
					Function_666(3);
				}
				else if (Function_585(&Local_286 + 452) < 60.0f)
				{
				}
				break;
			
			case 0x00000003:
				if (NET_IS_IN_SESSION())
				{
					if (Function_584(0))
					{
						if (_IS_CLIENT_DATA_VALID_FOR_SLOT_2(&iLocal_269, 1) && UNK_0xA80C6DE6(&uLocal_416))
						{
							if (Function_580())
							{
								Function_576(1, 0, 0);
								Function_669(2048, 1);
								Function_610(&Local_286 + 488);
								Function_610(&iLocal_250);
								Function_610(&iLocal_253);
								if (Function_575(&Local_286 + 452))
								{
									if (Function_585(&Local_286 + 452) <= 30.0f)
									{
									}
								}
								Function_610(&Local_286 + 476);
								Function_574();
								Function_698(2097152);
								Function_573();
								Function_572(20485);
								Function_571(7);
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								if (Function_570(32))
								{
									if (Global_84364.f_708 >= 0)
									{
										if (!HAS_ACHIEVEMENT_BEEN_PASSED(64))
										{
											AWARD_ACHIEVEMENT(64);
										}
									}
								}
								NET_SCRIPTMSG_REGISTER_HANDLER(6, 92716);
								NET_SCRIPTMSG_REGISTER_HANDLER(98, 90920);
								NET_SCRIPTMSG_REGISTER_HANDLER(100, 90563);
								Function_610(&iLocal_256);
								if (DECOR_GET_FLOAT_VERBOSE(Function_548(), "TMS_BlipHideOverride", &fLocal_243))
								{
									DECOR_REMOVE(Function_548(), "TMS_BlipHideOverride");
								}
								else
								{
									fLocal_243 = 8.0f;
								}
								Function_666(4);
							}
						}
					}
				}
				else
				{
					Function_610(&Local_286 + 452);
					Function_666(2);
				}
				break;
			
			case 0x00000004:
				if (iLocal_524 != NET_GET_FREE_ROAM_MODE())
				{
					bVar9 = true;
				}
				Function_544();
				if (IS_SCRIPT_VALID(Global_78617.f_20))
				{
					bVar2 = true;
				}
				else if (bVar2)
				{
					bVar2 = false;
					Function_681();
				}
				Function_500();
				Function_495();
				Function_490();
				Function_488(2);
				if (Global_83864.f_1276)
				{
					Function_487();
					Function_461();
					Function_411();
					if (Function_570(32))
					{
						Function_408();
						Function_407();
						Function_406();
						Function_404(29, 10);
						GIVE_WEAPON_TO_ACTOR(Function_612(), 29, 1.0f, 0, 0);
					}
					if (Function_570(64))
					{
						Function_401();
						Function_400();
						Function_398();
						Function_395();
						Function_394();
						Function_392();
						Function_385();
						Function_384();
						Function_382();
						Function_374();
						Function_373();
						Function_371();
					}
					if (Function_570(1024))
					{
						Function_361();
						Function_360();
						Function_357();
					}
					Function_355();
					Function_354();
					Function_353();
					Function_352();
					if (Function_351(Global_84364.f_740, 1))
					{
						Function_343();
					}
					Local_261 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_342(Global_83864.f_1264, Global_84364.f_708, 1, 0) };
					Function_341(&Local_261, "Legendary_rank", "Common_Null", "HUD_MP_LEVEL_UP_MASTER", 0, 0, 0);
					PLAY_SOUND_FRONTEND("HUD_MP_UNLOCK_MASTER");
					Function_340(8);
					Function_610(&iLocal_250);
					if (Function_570(32))
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(64))
						{
							AWARD_ACHIEVEMENT(64);
						}
					}
					Global_83864.f_1276 = 0;
				}
				Function_586();
				if (Function_338(Function_612(), 0) && NET_ARE_UNLOCKS_READY())
				{
					if (!iLocal_236)
					{
						if (ACTOR_HAS_WEAPON(Function_612(), 31) && !NET_IS_UNLOCKED(43))
						{
							iLocal_236 = 1;
							ACTOR_SET_DROP_ITEM_ON_DEATH_ENUMERATED(Function_612(), 31, 0);
						}
					}
					else if (!ACTOR_HAS_WEAPON(Function_612(), 31))
					{
						iLocal_236 = 0;
					}
				}
				else
				{
					iLocal_236 = 0;
				}
				if (CEIL(Function_585(&iLocal_250)) != bVar0)
				{
					bVar0 = CEIL(Function_585(&iLocal_250));
					Function_325(bVar0);
				}
				Function_319();
				Function_318();
				if (!iLocal_238 && !HUD_IS_FADED())
				{
					iLocal_238 = 1;
					Function_610(&iLocal_244);
				}
				if (Function_317(&iLocal_244, 15.0f))
				{
					NET_GAMER_ICONS_SHOW_LOCAL(0);
				}
				if (!NET_IS_IN_SESSION())
				{
					bVar9 = true;
				}
				Function_309();
				if (!Function_668(256) && !Function_668(65536))
				{
					Function_290(60154, 59464);
				}
				Function_286();
				if (bVar3)
				{
					if (Local_286.f_508)
					{
						if (Function_284(1))
						{
							if (IS_POPSET_VALID(Global_30750[0]) && !Function_284(32768))
							{
								Function_282(32768);
							}
							else if (!IS_POPSET_VALID(Global_30750[0]) && Function_284(32768))
							{
								Function_280(32768);
							}
						}
					}
					else if (NET_GET_SESSION_GAMER_COUNT() >= 1 || Function_317(&Local_286 + 488, 20.0f))
					{
						Function_279();
					}
				}
				if (Function_278(1))
				{
					Function_174(&Local_286 + 464, &Local_286 + 20);
					if (Global_3391)
					{
						Local_286.f_504 = 1;
					}
					else if (Function_173(&Local_286 + 476, fLocal_241) || Local_286.f_504)
					{
						if (Function_162(Local_286.f_504, fLocal_242))
						{
							Function_610(&Local_286 + 476);
							Local_286.f_504 = 0;
						}
					}
				}
				else
				{
					(&Local_286 + 20)->f_116 = Global_78617.f_2648;
				}
				Function_74(&uLocal_416);
				Function_587();
				if (Function_278(4096) && Function_73())
				{
					Function_72(4096);
				}
				if (Function_351(Global_79338, 32))
				{
					Function_71(&Global_79338, 32);
					Function_610(&iLocal_253);
				}
				if (Function_575(&iLocal_253))
				{
					if (Function_585(&iLocal_253) < 300.0f && !Function_351(Global_79338, 32))
					{
						if (Function_68())
						{
							NET_START_LB_UPDATE(0);
							Function_65(4294967295);
							NET_END_LB_UPDATE();
						}
					}
				}
				break;
			
			case 0x00000005:
				bVar9 = true;
				break;
		}
		WAIT(0);
	}
	UI_EXIT("MP_Tutorial");
	Function_72(4096);
	Function_669(0x2000000, 0);
	Function_54();
	Function_52(0);
	Function_50();
	Function_49(&iLocal_244);
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	Function_36(&Local_286 + 20);
	UI_EXIT("MPSplash");
	Function_33();
	if (Function_278(32))
	{
		Function_72(32);
	}
	if (Function_278(8))
	{
		Function_72(8);
	}
	if (iLocal_524 == 1)
	{
		Global_3362 = (Global_3362 - 0.25f);
	}
	NET_GAMER_BLIPS_TREAT_COVER_AS_ALIVE(0);
	SET_PLAYER_COMBATMODE_OVERRIDE(4294967295);
	NET_GAMER_ICONS_SET_STEALTH(0);
	NET_GAMER_BLIPS_SET_STEALTH(0);
	NET_GAMER_BLIPS_SHOW_POSSE_MEMBERS(0);
	NET_GAMER_BLIPS_SHOW_ON_FULL_MAP(0);
	NET_GAMER_ICON_FORCE_VISIBLE(0);
	Function_697(2097152);
	Function_31(1);
	Function_29();
	Function_28();
	Function_670(0);
	Function_27();
	if (!UI_ISACTIVE("NetConf_ExitingWait"))
	{
		HUD_FADE_TO_LOADING_SCREEN();
	}
	if (NET_GET_PLAYMODE() != 1)
	{
		NET_SESSION_LEAVE_SESSION();
	}
	Function_26(uLocal_240);
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	Function_3(1);
	Function_2();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xBB0 / 2992
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_2() //Position: 0xBC5 / 3013
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_3(bool bParam0) //Position: 0xBD7 / 3031
{
	if (Function_24(32))
	{
		Function_22(32);
		if (Function_21(Local_201.f_48))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
		}
	}
	if (StackVal && IS_LAYOUTREF_VALID(bParam0))
	{
		DESTROY_LAYOUT(StackVal);
	}
	Function_18(0, "FRD Cleanup");
	Function_16(8, 0);
	Function_669(0x1000000, 0);
	Function_15(2, -1.0f);
	Function_14();
	Function_13();
	Function_12();
	Function_11();
	Function_10();
	Function_7();
	if (Function_24(64))
	{
		if (Function_6(256))
		{
			Function_5(256);
		}
		Function_22(64);
	}
	Function_4();
	UI_HIDE("FRD_ScorePanel");
	return;
}

void Function_4() //Position: 0xC95 / 3221
{
	Local_201.f_28 = 0;
	Local_201.f_40 = 0;
	return;
}

void Function_5(int iParam0) //Position: 0xCA5 / 3237
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

bool Function_6(int iParam0) //Position: 0xCC2 / 3266
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0xCE0 / 3296
{
	if (Function_73())
	{
		Function_72(3145728);
	}
	else
	{
		Function_72(3145792);
	}
	Function_9(&Local_201 + 116);
	Function_15(2, -1.0f);
	Local_201.f_100 = 0;
	AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
	if (Function_24(128))
	{
		Function_22(128);
		Function_8(35, 0);
	}
	return;
}

void Function_8(int iParam0, int iParam1) //Position: 0xD28 / 3368
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_9(bool bParam0) //Position: 0xD42 / 3394
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

void Function_10() //Position: 0xD56 / 3414
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	return;
}

void Function_11() //Position: 0xD6D / 3437
{
	if (IS_LAYOUTREF_VALID(Local_201))
	{
		DESTROY_LAYOUT(Local_201);
	}
	return;
}

void Function_12() //Position: 0xD80 / 3456
{
	if (IS_BLIP_VALID(Local_201.f_36))
	{
		REMOVE_BLIP(Local_201.f_36);
	}
	return;
}

void Function_13() //Position: 0xD97 / 3479
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (IS_ACTORSET_VALID(Local_201.f_96))
	{
		iVar1 = GET_ACTORSET_SIZE(Local_201.f_96);
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			bVar2 = GET_ACTOR_FROM_ACTORSET(Local_201.f_96, iVar0);
			if (IS_ACTOR_VALID(bVar2))
			{
				AI_GLOBAL_SET_PERMANENT_DANGER(bVar2, 0);
				NET_LOG(1, "FRD Client", "Actor %s removed from avoidance set.", GET_ACTOR_NAME(bVar2), 0, 0, 0);
			}
			iVar0++;
		}
		DESTROY_ACTORSET(Local_201.f_96);
	}
	return;
}

void Function_14() //Position: 0xE24 / 3620
{
	UI_HIDE("NetTimer");
	return;
}

void Function_15(int iParam0, int iParam1) //Position: 0xE38 / 3640
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

void Function_16(int iParam0, bool bParam1) //Position: 0xE61 / 3681
{
	if (bParam1)
	{
		Function_17(&Global_78480 + 128, iParam0);
	}
	else
	{
		Function_71(&Global_78480 + 128, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = Global_78480.f_128;
	}
	return;
}

void Function_17(bool bParam0, bool bParam1) //Position: 0xE9C / 3740
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

void Function_18(bool bParam0, int iParam1) //Position: 0xEAB / 3755
{
	if (bParam0 != Function_19(0x8000000, 1))
	{
		Function_669(0x8000000, bParam0);
		Function_16(2, bParam0);
		NET_LOG(1, "FRD Client", iParam1, 0, 0, 0, 0);
	}
	return;
}

bool Function_19(int iParam0, bool bParam1) //Position: 0xEE6 / 3814
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_20(int iParam0) //Position: 0xF06 / 3846
{
	switch (iParam0)
	{
		case 0xFFFFFFFE:
		case 0xFFFFFFFF:
			return 4294967294;
		
		case 0x00000000:
			return Global_30640[0];
		
		case 0x00000001:
			return Global_30693[0];
		
		case 0x00000002:
			return Global_30668[0];
		
		case 0x00000003:
			return Global_30668[1];
		
		case 0x00000004:
			return Global_30717[0];
		
		case 0x00000005:
			return Global_30685[0];
		
		case 0x00000006:
			return Global_30693[1];
		
		case 0x00000007:
			return Global_30723[2];
		
		default:
	}
	return 4294967294;
}

bool Function_21(int iParam0) //Position: 0xF8E / 3982
{
	return iParam0 < 4294967295;
}

void Function_22(int iParam0) //Position: 0xF98 / 3992
{
	Function_23(&Local_201 + 28, iParam0);
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0xFA7 / 4007
{
	Function_71(uParam0, iParam1);
	return;
}

bool Function_24(int iParam0) //Position: 0xFB4 / 4020
{
	return Function_25(Local_201.f_28, iParam0);
}

bool Function_25(var uParam0, int iParam1) //Position: 0xFC3 / 4035
{
	return (uParam0 && iParam1) == 0;
}

int Function_26(bool bParam0) //Position: 0xFD0 / 4048
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_27() //Position: 0xFE6 / 4070
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			NET_GAMER_SET_BLIP_STEALTH_OVERRIDE(bVar0, 4294967295);
			NET_GAMER_SET_ICON_STEALTH_OVERRIDE(bVar0, 4294967295);
		}
		bVar0++;
	}
	return;
}

void Function_28() //Position: 0x1013 / 4115
{
	Function_5(20485);
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		TERMINATE_SCRIPT(Global_26316.f_60);
	}
	if (IS_SCRIPT_VALID(Global_26316.f_64))
	{
		TERMINATE_SCRIPT(Global_26316.f_64);
	}
	return;
}

void Function_29() //Position: 0x1045 / 4165
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_30(bVar0, 0);
		}
		bVar0++;
	}
	return;
}

void Function_30(bool bParam0, bool bParam1) //Position: 0x106C / 4204
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		NET_GAMER_SET_BLIP_OVERRIDE(bParam0, 393);
	}
	else
	{
		NET_GAMER_SET_BLIP_OVERRIDE(bParam0, 4294967295);
	}
	return;
}

void Function_31(bool bParam0) //Position: 0x1092 / 4242
{
	Function_669(131072, 0);
	if (!bParam0)
	{
		Function_32("GENMESS_MWPLAYERKILLED", 0);
	}
	return;
}

void Function_32(char* cParam0, bool bParam1) //Position: 0x10C3 / 4291
{
	var uVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		uVar0 = "";
		if (bParam1)
		{
			uVar0 = cParam0;
		}
		ADD_LINE_TO_CONVERSATION(0, cParam0, uVar0, 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(0, 0);
	return;
}

void Function_33() //Position: 0x1103 / 4355
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_85)
	{
		Function_34(iVar0);
		iVar0++;
	}
	return;
}

void Function_34(int iParam0) //Position: 0x1121 / 4385
{
	bool bVar0;
	
	if (Function_35(Local_85[iParam04]))
	{
		bVar0 = StackVal;
		if (IS_VOLUME_VALID(bVar0))
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			if (IS_BLIP_VALID(Local_85[iParam04].f_12))
			{
				REMOVE_BLIP(Local_85[iParam04].f_12);
			}
		}
	}
	return;
}

bool Function_35(int iParam0) //Position: 0x117C / 4476
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_36(int iParam0) //Position: 0x1192 / 4498
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_46();
	bVar0 = Function_612();
	if (IS_ACTOR_VALID(bVar0))
	{
		DECOR_REMOVE(bVar0, "NoRegen");
		DECOR_REMOVE(bVar0, "NoBleedout");
	}
	if (IS_OBJECT_VALID(iParam0->f_188))
	{
		DESTROY_OBJECT(iParam0->f_188);
	}
	UI_ENABLE("SatchelTab_Weapons");
	UI_ENABLE("PM_Weapons");
	Function_45(!Function_668(1));
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_669(81920, 0);
	Function_669(8388608, 0);
	Function_37(iParam0);
	if (iParam0->f_108 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
	}
	return;
}

void Function_37(bool bParam0) //Position: 0x1244 / 4676
{
	Function_43(bParam0);
	Function_39(bParam0, 0);
	Function_38(32, 0, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
	}
	if (IS_SCRIPT_VALID(bParam0->f_84))
	{
		TERMINATE_SCRIPT(bParam0->f_84);
	}
	return;
}

void Function_38(int iParam0, bool bParam1, int iParam2) //Position: 0x127E / 4734
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_17(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_71(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_39(bool bParam0, bool bParam1) //Position: 0x12A6 / 4774
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_40(StackVal, StackVal, Function_548(), *(bParam0 + 72), !HUD_IS_FADED());
	}
	if (IS_OBJECT_VALID(bParam0->f_120))
	{
		DESTROY_OBJECT(bParam0->f_120);
	}
	if (bParam1)
	{
		bParam0->f_120 = uVar0;
	}
	if (IS_OBJECT_VALID(bParam0->f_156))
	{
		RELEASE_OBJECT_REF(bParam0->f_156);
	}
	if (IS_VOLUME_VALID(bParam0->f_424))
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(bParam0->f_424);
		DESTROY_VOLUME(bParam0->f_424);
	}
	if (IS_OBJECT_VALID(bParam0->f_112))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bParam0->f_112);
	}
	if (Function_351(bParam0->f_48, 2))
	{
		Function_71(bParam0 + 48, 2);
	}
	Function_17(bParam0 + 48, 1);
	return;
}

var Function_40(char* cParam0, vector3 vParam1, bool bParam4) //Position: 0x1337 / 4919
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	var uVar14;
	
	iVar0 = 3;
	if (bParam4)
	{
		iVar1 = 1;
	}
	bVar2 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "", (iVar0 + iVar1), 1);
	vVar5 = { 0.0f, 16.0f, 12.0f };
	vVar11 = { StackVal, StackVal, Vector(vParam1, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
	if (bParam4)
	{
		GET_CAMERA_CHANNEL_DIRECTION(&uVar14, 0);
		Function_42(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_42(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		uVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_41(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(uVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0.5f, 4294967295, 0), 1, 1);
		Function_42(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_42(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		uVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_42(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_42(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_41(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar4, vParam1, vVar8, vVar11);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= iVar0 * 3)
	{
		CUTSCENEOBJECT_ADD_TRANSITION_LERP(bVar2, ((iVar3 % iVar0) + iVar1), ((iVar3 + 1 % iVar0) + iVar1), 30.0f, iVar3, 1);
		iVar3++;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(bVar2, ((iVar3 % iVar0) + iVar1), 100);
	PLAY_CUTSCENEOBJECT(bVar2, false, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return bVar2;
}

void Function_41(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x1470 / 5232
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam4, vParam1, *uParam0));
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vParam7, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
}

vector3 Function_42(var uParam0, float fParam1) //Position: 0x14C5 / 5317
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, fParam1, 0);
	return StackVal, StackVal, vVar0;
}

void Function_43(int iParam0) //Position: 0x14DF / 5343
{
	Function_44(iParam0);
	Function_697(1048576);
	return;
}

void Function_44(int iParam0) //Position: 0x14F1 / 5361
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_45(bool bParam0) //Position: 0x1508 / 5384
{
	if (bParam0)
	{
		UI_EXIT("MPSplash");
	}
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("NotorietyMeter");
	UI_RESTORE("NotorietyMeter");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	return;
}

void Function_46() //Position: 0x158F / 5519
{
	if (Function_48(8))
	{
		Function_47();
	}
	Function_38(8, 0, 1);
	return;
}

void Function_47() //Position: 0x15A7 / 5543
{
	Function_38(32768, 1, 0);
	return;
}

bool Function_48(bool bParam0) //Position: 0x15B6 / 5558
{
	return Function_351(Global_76905.f_132, bParam0);
}

void Function_49(int iParam0) //Position: 0x15C7 / 5575
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_50() //Position: 0x15DB / 5595
{
	Function_51();
	return;
}

void Function_51() //Position: 0x15E4 / 5604
{
	if (Function_48(4194304))
	{
		Function_38(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_48(8388608))
	{
		Function_38(8388608, 0, 1);
		UI_INCLUDE("Splash_Message");
		UI_INCLUDE("Splash_Objective");
		UI_INCLUDE("Subtitle_Enabler");
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(0))
		{
			UI_SHOW("Splash_Message");
		}
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(2))
		{
			UI_SHOW("Splash_Objective");
		}
		UI_SHOW("Subtitle_Enabler");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	return;
}

void Function_52(int iParam0) //Position: 0x16ED / 5869
{
	Function_53(&Global_79378, 0, iParam0);
	return;
}

void Function_53(int iParam0, bool bParam1, var uParam2) //Position: 0x16FD / 5885
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	bVar0 = Function_612();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || uParam2)
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
		iVar3 = 0;
		while (iVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[iVar3] = _GET_AMMO_AMOUNT(bVar0, iVar3, 0);
			iVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, iVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
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
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (iVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, iVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (iVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, iVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		iVar5 = 0;
		while (iVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[iVar5] = IS_WEAPONENUM_LOCKED(iVar5);
			iVar5++;
		}
	}
	return;
}

void Function_54() //Position: 0x18EE / 6382
{
	Function_64();
	Function_57();
	Function_55();
	return;
}

void Function_55() //Position: 0x18FD / 6397
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_56();
	return;
}

void Function_56() //Position: 0x1931 / 6449
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_57() //Position: 0x1942 / 6466
{
	if (Global_83864.f_1264 > 6)
	{
		Function_58(&(Global_50170[522]));
		Function_58(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_58(&(Global_50170[722]));
		Function_58(&(Global_50170[822]));
		Function_58(&(Global_50170[922]));
		Function_58(&(Global_50170[1022]));
		Function_58(&(Global_50170[1122]));
	}
	return;
}

void Function_58(bool bParam0) //Position: 0x19A2 / 6562
{
	Global_56092[*bParam0] = 0;
	Function_59(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_59(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x19BC / 6588
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_63(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_62(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (bParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (bParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
		}
		if (bParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_63(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_61(iParam0, 4))
	{
		Function_60(Function_63(iParam0), 0);
	}
}

void Function_60(var uParam0, int iParam1) //Position: 0x1A73 / 6771
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

bool Function_61(int iParam0, bool bParam1) //Position: 0x1A98 / 6808
{
	return Function_351(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_62(int iParam0) //Position: 0x1AAC / 6828
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_63(int iParam0) //Position: 0x1AE0 / 6880
{
	return Global_50170[iParam022].f_24;
}

void Function_64() //Position: 0x1AEF / 6895
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_65(int iParam0) //Position: 0x1B08 / 6920
{
	int iVar0[67];
	int iVar68[67];
	
	Function_17(&Global_79338, 32);
	iVar0[13] = FLOOR(Function_67(8));
	iVar0[0] = FLOOR(Function_67(8));
	if (Function_67(8) < 0.0f)
	{
		if (Function_66())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 145, iParam0, &iVar0);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 144, iParam0, &iVar0);
		}
	}
	if (Function_67(7) < 0.0f)
	{
		iVar68[13] = FLOOR(Function_67(7));
		iVar68[0] = iVar68[13];
		if (Function_66())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 147, iParam0, &iVar68);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 146, iParam0, &iVar68);
		}
	}
	return;
}

bool Function_66() //Position: 0x1BAF / 7087
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

float Function_67(int iParam0) //Position: 0x1BBA / 7098
{
	return (*&Global_78480 + 176)[iParam0];
}

bool Function_68() //Position: 0x1BCA / 7114
{
	if (Function_70())
	{
		return (Function_69() != 1 || Function_69() != 0);
	}
	return 0;
}

int Function_69() //Position: 0x1BE3 / 7139
{
	return Global_79349.f_16;
}

bool Function_70() //Position: 0x1BEF / 7151
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_71(bool bParam0, int iParam1) //Position: 0x1BF8 / 7160
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
	return;
}

void Function_72(int iParam0) //Position: 0x1C0B / 7179
{
	Function_23(&Global_78617 + 52, iParam0);
	return;
}

bool Function_73() //Position: 0x1C1C / 7196
{
	return Global_78480.f_24 == 4294967294;
}

void Function_74(bool bParam0) //Position: 0x1C2C / 7212
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<5> Var11;
	bool bVar18;
	vector3 vVar19;
	bool bVar22;
	int iVar23;
	bool bVar24;
	char* cVar25[8];
	
	if (!NET_IS_IN_SESSION() || IS_EXITFLAG_SET())
	{
		return;
	}
	iVar0 = 1;
	bVar1 = GET_LOCAL_SLOT();
	if (Function_161())
	{
		iVar0 = 0;
	}
	else if (UI_ISACTIVE("RadialWeaponQuickPick"))
	{
		iVar0 = 0;
	}
	else if (Function_159())
	{
		iVar0 = 0;
	}
	else if (Function_157(16))
	{
		if (bParam0->f_48 != bVar1)
		{
			if (Function_157(32) && bParam0->f_48 != 4294967294)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	iVar2 = Local_201.f_48;
	bVar3 = Function_156();
	if (Local_201.f_48 != bParam0->f_68)
	{
		NET_LOG(1, "FRD Client", "Host FRD Region has changed from %s to %s", Function_155(Local_201.f_48), Function_155(bParam0->f_68), 0, 0);
		Function_154(1, Function_20(bParam0->f_68));
		if (bParam0->f_68 == 4294967295)
		{
			if (Function_24(1))
			{
				NET_LOG(1, "FRD Client", "Instance destroyed!", 0, 0, 0, 0);
			}
			Function_3(0);
		}
		else if (!Function_24(1))
		{
			Function_152(1);
			Local_201 = Function_143(bParam0->f_68);
			Local_201.f_12 = FIND_VOLUME_IN_LAYOUT(Local_201, "Defense_Volume");
			if (IS_LAYOUTREF_VALID(StackVal))
			{
				bVar4 = FIND_VOLUME_IN_LAYOUT(StackVal, Function_155(bParam0->f_68));
				if (IS_VOLUME_VALID(bVar4))
				{
					Local_201.f_12 = bVar4;
				}
			}
			NET_LOG(1, "FRD Client", "Instance instantiated!", 0, 0, 0, 0);
			if (Function_156())
			{
				Function_139(bParam0);
				Function_138(Local_201);
				bVar3 = true;
			}
			else
			{
				Function_137(StackVal, bParam0->f_48, bParam0->f_60);
			}
		}
		Local_201.f_48 = bParam0->f_68;
	}
	if (CEIL(bParam0->f_64) != Function_136(0))
	{
		Function_154(0, CEIL(bParam0->f_64));
		UI_LABEL_SET_VALUE("FRD_Score_top", CEIL(bParam0->f_64));
	}
	bVar5 = NET_IS_SESSION_HOST();
	fVar6 = -1.0f;
	if (Local_201.f_52 != Global_29006)
	{
		if (Function_156())
		{
			Function_139(bParam0);
			bVar3 = true;
			Function_138(Local_201);
		}
		else if (!Function_73())
		{
			Function_7();
			bVar3 = (Local_201.f_52 != Function_136(1) && Function_136(1) <= 0);
			Function_138(0);
		}
		Local_201.f_52 = Global_29006;
		if (Global_29006 == Global_30640[0])
		{
			Function_134(StackVal, Function_548(), "p_gen_antlerchandelier01x");
		}
	}
	bVar7 = false;
	if (bVar3)
	{
		if (IS_LOCAL_PLAYER_VALID(0))
		{
			if (IS_PLAYER_IN_COMBAT(0))
			{
				bVar7 = Function_133(0x41a00000) == 2;
			}
		}
		if (!Function_159())
		{
			if (!Function_24(64))
			{
				if (!Function_6(256))
				{
					Function_572(256);
					UI_EXIT("WantedMeter");
					Function_152(64);
				}
			}
		}
	}
	else if (Function_24(64))
	{
		Function_22(64);
		if (Function_6(256))
		{
			Function_5(256);
		}
	}
	if (Function_24(1))
	{
		bVar8 = true;
		iVar9 = 0;
		if (Function_338(Global_34573, 0))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_201.f_12))
			{
				Function_669(0x1000000, 1);
				Function_16(4, 1);
				iVar10 = 1;
				bVar8 = false;
			}
			else
			{
				iVar9 = 1;
			}
		}
		if (bVar8)
		{
			if (iVar9 && Function_19(0x9000000, 1))
			{
				PRINT_BIG("mp_FRD_Abandoned", 5.0f, 0, 0, "HUD_MP_OVERTIME_LOSE_MASTER");
			}
			Function_669(0x1000000, 0);
			Function_16(4, 0);
		}
		if (bVar3)
		{
			if (!Function_132(bParam0->f_48))
			{
				if ((iVar10 || bVar7) && Function_131(bParam0 + 24) < fLocal_196)
				{
					Function_129(&Local_201 + 100, 38, 0.0f, 400, 3000);
				}
				else
				{
					Function_129(&Local_201 + 100, 6, 0.0f, 400, 3000);
				}
			}
		}
	}
	if (Local_201.f_44 != bParam0->f_48)
	{
		NET_LOG(1, "FRD Client", "Host FRD Active Player has changed from %s to %s", I2STR(Local_201.f_44), I2STR(bParam0->f_48), 0, 0);
		Function_154(2, bParam0->f_48);
		Function_127(bParam0->f_48);
		if (bParam0->f_48 == 4294967295)
		{
			Function_12();
			if ((bVar3 && Function_21(iVar2)) && Local_201.f_44 == 4294967295)
			{
				Function_126(bParam0, iVar2);
				Function_124();
			}
			Local_201.f_44 = bParam0->f_48;
		}
		else if (Function_24(1))
		{
			Function_122(Local_201.f_12, bParam0->f_48);
			if (bParam0->f_48 == 4294967294)
			{
				if (bVar3)
				{
					if (UI_ISFOCUSED("HudSceneOnline"))
					{
						if (!Function_24(2))
						{
							PRINT_HELP_FORMAT(10.0f, "mp_FRD_UpForGrabsHelp", Function_155(bParam0->f_68), 0, 0, 0, 2, 0, 0);
							Function_152(2);
						}
						else
						{
							HUD_CLEAR_OBJECTIVE_QUEUE();
							Function_119("mp_FRD_Obj_GoGetIt", 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
					}
					Function_118("mp_FRD_UpForGrabs", UI_GET_STRING(Function_155(bParam0->f_68)));
				}
			}
			else if (bParam0->f_48 == bVar1)
			{
				if (bVar3)
				{
					if (bParam0->f_52 != 4294967295)
					{
						Function_117("ATTDEF_FR_DEFAREALOST_ATT", 0);
					}
					Function_113(bParam0->f_48, bParam0->f_68);
				}
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				if (UI_ISFOCUSED("HudSceneOnline"))
				{
					if (!Function_24(4))
					{
						PRINT_HELP_FORMAT(10.0f, "mp_FRD_DefendingHelp", Function_155(bParam0->f_68), 0, 0, 0, 2, 0, 0);
						Function_152(4);
					}
					else
					{
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_119("mp_FRD_Obj_DefendYourLand", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
				}
			}
			else if (Local_201.f_44 == bVar1)
			{
				if (bVar3)
				{
					if (!Function_19(2, 1))
					{
						Function_117("ATTDEF_FR_DEFAREALOST_DEF", 0);
						if (bParam0->f_48 > 0)
						{
							PRINT_BIG_FORMAT(4.0f, "mp_FRD_Obj_Tagged", Function_112(bParam0->f_48), 0, 0, 0, 2, 0);
							if (!Function_132(bParam0->f_48))
							{
								HUD_CLEAR_OBJECTIVE_QUEUE();
								PRINT_OBJECTIVE_FORMAT(7.5f, "mp_FRD_Obj_KillThatGuy", Function_112(bParam0->f_48), 0, 0, 0, 0, 2, 0, 0, 0);
							}
						}
					}
					if (bParam0->f_48 > 0)
					{
						Function_113(bParam0->f_48, bParam0->f_68);
					}
				}
				Var11.f_4 = 4294966796;
				PLAY_SOUND_FRONTEND_INITPARAMS("DEAD_EYE_STOP_MASTER", &Var11);
			}
			else if (bParam0->f_48 > 0)
			{
				if (bVar3 && !Function_132(bParam0->f_48))
				{
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(7.5f, "mp_FRD_Obj_KillThatGuy", Function_112(bParam0->f_48), 0, 0, 0, 0, 2, 0, 0, 0);
				}
				if (bVar3 || Local_201.f_44 != 4294967295)
				{
					Function_113(bParam0->f_48, bParam0->f_68);
				}
			}
			if (bParam0->f_48 > 0)
			{
				if (bParam0->f_56 && IS_SLOT_VALID(bParam0->f_48))
				{
					bVar18 = GET_SLOT_ACTOR(bParam0->f_48);
					if (IS_ACTOR_VALID(bVar18))
					{
						SAY_SINGLE_LINE_STRING(bVar18, "MPTAUNT", 1, 1, 3, 0, 1, 0);
					}
				}
				Function_111(bParam0->f_48);
				*(&Local_201 + 56) = { StackVal, StackVal, Function_111(bParam0->f_48) };
			}
			Local_201.f_44 = bParam0->f_48;
		}
		else
		{
			LOG_ERROR("FRD Active Player changed to Active, except we're not ready yet?");
		}
	}
	if (bParam0->f_48 > 0)
	{
		Function_111(bParam0->f_48);
		vVar19 = { StackVal, StackVal, Function_111(bParam0->f_48) };
		if (VDIST(vVar19, *(&Local_201 + 56)) <= fLocal_192)
		{
			NET_LOG(1, "FRD Client", "Updating UI because the color of the guy has changed from %s to %s", V2STR(&Local_201 + 56), V2STR(&vVar19), 0, 0);
			*(&Local_201 + 56) = { StackVal, StackVal, vVar19 };
			Function_122(Local_201.f_12, bParam0->f_48);
			Function_127(bParam0->f_48);
		}
	}
	if (bParam0->f_48 != 4294967295)
	{
		if (bVar5 && !Function_157(16384))
		{
			if (Function_110(&Local_201 + 84, iLocal_194) && Function_131(bParam0 + 24) < fLocal_196)
			{
				if (!Function_109())
				{
					NET_LOG(1, "FRD Host", "Nobody's in the same area... killing it off", 0, 0, 0, 0);
					Function_108(bParam0, 1);
				}
			}
		}
		if (Function_110(&Local_201 + 68, fLocal_195))
		{
			bVar22 = Function_106();
			if (Function_132(bParam0->f_48))
			{
				if ((bVar22 || bVar7) && Function_131(bParam0 + 24) < fLocal_196)
				{
					Function_129(&Local_201 + 100, 38, 0.0f, 400, 3000);
				}
				else
				{
					Function_129(&Local_201 + 100, 6, 0.0f, 400, 3000);
				}
			}
			if (bParam0->f_48 == GET_LOCAL_SLOT())
			{
				Local_201.f_80++;
				if (Local_201.f_80 > iLocal_200)
				{
					Local_201.f_80 = 0;
					if (!Function_24(8))
					{
						if (bVar22)
						{
							Function_152(8);
							if (RAND_INT_RANGE(0, 1000) < 500)
							{
								Function_117("ATTDEF_FR_ATTENTERS", 0);
							}
							else
							{
								Function_117("ATTDEF_FR_AREAATTKD_4DEF", 0);
							}
						}
					}
					else if (!bVar22)
					{
						Function_22(8);
						Function_117("ATTDEF_FR_AREADEFENDED", 0);
					}
				}
			}
			else
			{
				Function_22(8);
			}
		}
	}
	if (!Function_105(bParam0))
	{
		Function_154(4, 4294967295);
	}
	else if (Function_104(bParam0))
	{
		Function_154(4, 4294967295);
	}
	else
	{
		Function_154(4, bParam0->f_72);
	}
	switch (bParam0->f_48)
	{
		case 0xFFFFFFFE:
			Function_18(0, "Spoon has been dropped; removing my Spoonholder status");
			fVar6 = Function_103(bParam0 + 12);
			if (bVar5)
			{
				if (fVar6 >= 0.0f)
				{
					NET_LOG(1, "FRD Host", "Spoon has been on ground long enough. Dropping it forever.", 0, 0, 0, 0);
					Function_92(bParam0, 1);
					Function_108(bParam0, 0);
					Function_9(bParam0 + 12);
				}
			}
			if (Function_105(&Local_201 + 116))
			{
				if (!Function_91(&Local_201 + 116))
				{
					Function_90(&Local_201 + 116);
					Function_89();
					NET_LOG(1, "FRD Client", "Pausing due to dropped spoon with %s seconds of Spoonership.", F2STR(Function_67(2), 3, 2), 0, 0, 0);
				}
			}
			break;
		
		case 0xFFFFFFFF:
			Function_18(0, "Spoon has gone to No Player; removing my Spoonholder status");
			break;
		
		default:
			if (!IS_SLOT_VALID(bParam0->f_48))
			{
				if (bVar5)
				{
					NET_LOG(1, "FRD Host", "Currently running player #%s has gone invalid. Dropping spoon", I2STR(bParam0->f_48), 0, 0, 0);
					Function_88(bParam0);
				}
			}
			else
			{
				fVar6 = Function_103(bParam0 + 12);
				if (bVar5)
				{
					if (fVar6 >= 0.0f)
					{
						NET_LOG(1, "FRD Host", "Timer's ran out, awarding Player #%s, %s, %s XP!", I2STR(bParam0->f_48), GET_SLOT_NAME(bParam0->f_48), I2STR(CEIL(bParam0->f_64)), 0);
						Function_92(bParam0, 0);
						Function_108(bParam0, 0);
						Function_9(bParam0 + 12);
					}
					else if (!Function_85(bParam0->f_48, 0x1000000, 1) && Function_131(bParam0 + 24) < fLocal_196)
					{
						NET_LOG(1, "FRD Host", "Spoonholder, #%s, %s, has left the area, dropping!", I2STR(bParam0->f_48), GET_SLOT_NAME(bParam0->f_48), 0, 0);
						Function_88(bParam0);
					}
				}
				if (bParam0->f_48 == GET_LOCAL_SLOT())
				{
					Function_18(1, "Host gave it to me!");
					if (!Function_105(&Local_201 + 116))
					{
						Function_84(&Local_201 + 116);
						NET_LOG(1, "FRD Client", "Kicking off Spoonership with 0.0 seconds", 0, 0, 0, 0);
						Function_49(&Local_201 + 128);
					}
					else if (Function_91(&Local_201 + 116))
					{
						Function_83(&Local_201 + 116);
						Function_49(&Local_201 + 128);
						NET_LOG(1, "FRD Client", "Unpausing Spoonership with %s left.", F2STR(Function_131(&Local_201 + 116), 3, 2), 0, 0, 0);
					}
					if (fVar6 >= fLocal_199 || Function_110(&Local_201 + 128, fLocal_198))
					{
						Function_89();
					}
				}
				else
				{
					Function_18(0, "Local Player got sniped and lost the spoonholdership!");
					if (Function_105(&Local_201 + 116))
					{
						if (!Function_91(&Local_201 + 116))
						{
							Function_90(&Local_201 + 116);
							NET_LOG(1, "FRD Client", "Pausing Spoonership with %s left.", F2STR(Function_67(2), 3, 2), 0, 0, 0);
							Function_89();
						}
					}
				}
			}
			break;
	}
	Function_82(bParam0);
	if ((iVar0 && fVar6 <= 0.0f) && bVar3)
	{
		if (!Local_201.f_32)
		{
			Function_81();
			UI_SHOW("FRD_ScorePanel");
			UI_SHOW("FRD_Score_top");
			Local_201.f_32 = 1;
		}
		if (FABS((UI_ANIM_GET_TIME("NetTimer") - fVar6)) < 1.0f)
		{
			Function_80(fVar6);
		}
		iVar23 = 1;
	}
	else if (Local_201.f_32)
	{
		Local_201.f_32 = 0;
		Function_14();
		UI_HIDE("FRD_ScorePanel");
	}
	bVar24 = CEIL(fVar6);
	if (Local_201.f_20 != bVar24)
	{
		strcpy(&cVar25, I2STR((bVar24 / 60)), 8);
		stradd(&cVar25, ":", 8);
		straddi(&cVar25, ((bVar24 % 60) / 10), 8);
		straddi(&cVar25, ((bVar24 % 60) % 10), 8);
		UI_SET_STRING("FRD_Timeleft", &cVar25);
		if (UI_ISFOCUSED("HudSceneOnline") && iVar23)
		{
			if (bVar24 < 30)
			{
				PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
			}
			else if ((bVar24 < Local_201.f_20 && bVar24 < 0) && Local_201.f_20 < 0)
			{
				PLAY_SOUND_FRONTEND("HUD_MP_CHECKPOINT_MASTER");
			}
		}
		Local_201.f_20 = bVar24;
	}
	if (NET_IS_SESSION_HOST())
	{
		if (Function_105(bParam0 + 12))
		{
			if (Function_103(bParam0 + 12) < fLocal_190)
			{
				Function_75(bParam0 + 12, fLocal_190);
			}
		}
	}
	return;
}

void Function_75(bool bParam0, float fParam1) //Position: 0x2C8D / 11405
{
	Function_76(bParam0, -fParam1);
	return;
}

void Function_76(bool bParam0, float fParam1) //Position: 0x2C9B / 11419
{
	Function_78();
	Function_77(bParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_77(bool bParam0, var uParam1) //Position: 0x2CAF / 11439
{
	bParam0->f_4 = uParam1;
	Function_17(bParam0, 1);
	Function_71(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_78() //Position: 0x2CCC / 11468
{
	if (!Function_79())
	{
	}
	return;
}

bool Function_79() //Position: 0x2CD9 / 11481
{
	return NET_IS_IN_SESSION();
}

void Function_80(float fParam0) //Position: 0x2CE2 / 11490
{
	UI_ANIM_SETUP("NetTimer", fParam0, 1, 4294967295);
	UI_ANIM_RESTART("NetTimer");
	return;
}

void Function_81() //Position: 0x2D08 / 11528
{
	UI_SHOW("NetTimer");
	return;
}

void Function_82(int iParam0) //Position: 0x2D1C / 11548
{
	if (!Function_19(0x8000000, 1))
	{
		switch (iParam0->f_48)
		{
			case 0xFFFFFFFE:
			case 0xFFFFFFFF:
				Function_16(8, 0);
				break;
			
			default:
				if (IS_SLOT_VALID(iParam0->f_48))
				{
					if (NET_GET_GAMER_POSSE_LEADER(iParam0->f_48) != NET_GET_POSSE_LEADER_SLOT() && Function_19(0x1000000, 1))
					{
						Function_16(8, 1);
					}
					else
					{
						Function_16(8, 0);
					}
				}
				else
				{
					Function_16(8, 0);
				}
				break;
		}
	}
	else
	{
		Function_16(8, 1);
	}
	return;
}

void Function_83(bool bParam0) //Position: 0x2D93 / 11667
{
	if (Function_105(bParam0))
	{
		if (Function_91(bParam0))
		{
			Function_78();
			bParam0->f_4 = (StackVal - NET_GET_NET_TIME());
			bParam0->f_8 = 0.0f;
			Function_71(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_84(bool bParam0) //Position: 0x2E63 / 11875
{
	if (!Function_105(bParam0))
	{
		Function_76(bParam0, 0.0f);
	}
	return;
}

bool Function_85(bool bParam0, int iParam1, bool bParam2) //Position: 0x2E78 / 11896
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_19(iParam1, bParam2);
	}
	if (!Function_87(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_86(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_86(int iParam0) //Position: 0x2EF9 / 12025
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

bool Function_87(bool bParam0) //Position: 0x3212 / 12818
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

void Function_88(bool bParam0) //Position: 0x32B3 / 12979
{
	bParam0->f_52 = bParam0->f_48;
	bParam0->f_48 = 4294967294;
	return;
}

void Function_89() //Position: 0x32C8 / 13000
{
	int iVar0;
	bool bVar1;
	char* cVar2[8];
	
	if (Function_105(&Local_201 + 116))
	{
		iVar0 = Function_131(&Local_201 + 116);
		Function_15(2, iVar0);
		bVar1 = CEIL(iVar0);
		if (Local_201.f_24 != bVar1)
		{
			Local_201.f_24 = bVar1;
			strcpy(&cVar2, I2STR((bVar1 / 60)), 8);
			stradd(&cVar2, ":", 8);
			straddi(&cVar2, ((bVar1 % 60) / 10), 8);
			straddi(&cVar2, ((bVar1 % 60) % 10), 8);
			UI_SET_STRING("FRD_HeldTime", &cVar2);
			UI_REFRESH("nFRD_Timer");
		}
	}
	else if (Local_201.f_24 != 4294967294)
	{
		Local_201.f_24 = 4294967294;
		UI_SET_STRING("FRD_HeldTime", "--:--");
		UI_REFRESH("nFRD_Timer");
	}
	return;
}

void Function_90(bool bParam0) //Position: 0x3389 / 13193
{
	if (Function_105(bParam0))
	{
		if (!Function_91(bParam0))
		{
			Function_78();
			bParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_17(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_91(bool bParam0) //Position: 0x3451 / 13393
{
	return Function_351(*bParam0, 2);
}

void Function_92(bool bParam0, bool bParam1) //Position: 0x345E / 13406
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (Function_157(65536))
	{
		Function_100(bParam0);
		return;
	}
	if (bParam1)
	{
		if (Function_157(1))
		{
			NET_LOG(1, "FRD Host", "Nobody gets payout. That's %s just evaporating!", I2STR(CEIL(bParam0->f_64)), 0, 0, 0);
			return;
		}
	}
	iVar2 = Function_20(bParam0->f_68);
	bVar3 = bParam0->f_48;
	if (bParam1)
	{
		bVar3 = bParam0->f_52;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_94(bParam1, bVar0, bVar3, iVar2, 1))
		{
			bVar1++;
		}
		bVar0++;
	}
	bVar4 = FLOOR((bParam0->f_64 / TO_FLOAT(bVar1)));
	bVar5 = bVar4;
	if (!Function_157(4))
	{
		bVar5 = (bVar5 + (CEIL(bParam0->f_64) - (bVar4 * bVar1)));
	}
	NET_LOG(1, "FRD Host", "Dispensing payout: %s eligible players, %s per each with %s for last owner, %s", I2STR(bVar1), I2STR(bVar4), I2STR(bVar5), GET_SLOT_NAME(bVar3));
	iVar6 = 0;
	if (bParam1)
	{
		iVar6 = 1;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_94(bParam1, bVar0, bVar3, iVar2, 0))
		{
			if (bVar0 == bVar3)
			{
				Function_93(bVar0, TO_FLOAT(bVar5), iVar6);
			}
			else
			{
				Function_93(bVar0, TO_FLOAT(bVar4), iVar6);
			}
		}
		bVar0++;
	}
	return;
}

void Function_93(bool bParam0, float fParam1, int iParam2) //Position: 0x3601 / 13825
{
	struct<9> Var0;
	
	vVar0 = bParam0;
	vVar0.y = fParam1;
	vVar0.z = iParam2;
	NET_SCRIPTMSG_SEND(2, 100, &vVar0, 3, 1);
	NET_LOG(1, "FRD Host", "SEND Payout for player #%s for %s XP, bTheyWon: %s", I2STR(vVar0.x), I2STR(CEIL(vVar0.y)), 0, 0);
	return;
}

bool Function_94(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3677 / 13943
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_99(bParam1))
	{
		return 0;
	}
	bVar0 = Function_98(bParam1, bParam2);
	bVar1 = bVar0;
	if (bParam0 || (Function_157(8) && bVar0))
	{
		if (Function_157(2))
		{
			bVar2 = Function_96(bParam1);
			bVar1 = bVar2 != iParam3;
			if (bParam4)
			{
				NET_LOG(1, "FRD Host", "#%s Eligible: %s. Region: %s and posse: %s", I2STR(bParam1), Function_95(bVar1), I2STR(bVar2), Function_95(bVar0));
			}
		}
		else
		{
			bVar1 = Function_85(bParam1, 0x1000000, 1);
			if (bParam4)
			{
				NET_LOG(1, "FRD Host", "#%s Eligible: %s. Volume and posse: %s", I2STR(bParam1), Function_95(bVar1), Function_95(bVar0), 0);
			}
		}
	}
	else if (bParam4)
	{
		NET_LOG(1, "FRD Host", "#%s Eligible: %s. Just Posse: %s", I2STR(bParam1), Function_95(bVar1), Function_95(bVar0), 0);
	}
	return bVar1;
}

var Function_95(bool bParam0) //Position: 0x37BA / 14266
{
	if (bParam0)
	{
		return "TRUE";
	}
	return "FALSE";
}

int Function_96(bool bParam0) //Position: 0x37D5 / 14293
{
	if (!Function_87(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_97();
	}
	return Global_76943[bParam096];
}

var Function_97() //Position: 0x37FA / 14330
{
	return Global_78480;
}

bool Function_98(bool bParam0, bool bParam1) //Position: 0x3804 / 14340
{
	if (bParam0 == bParam1)
	{
		return 1;
	}
	if (bParam0 > 0 || bParam1 > 0)
	{
		return 0;
	}
	if (Function_157(256))
	{
		return NET_GET_GAMER_POSSE_LEADER(bParam0) != NET_GET_GAMER_POSSE_LEADER(bParam1);
	}
	return 0;
}

bool Function_99(bool bParam0) //Position: 0x3837 / 14391
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_87(bParam0);
}

void Function_100(int iParam0) //Position: 0x384D / 14413
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;
	struct<4> Var5[16];
	float fVar70;
	float fVar71;
	float fVar72;
	int iVar73;
	bool bVar74;
	int iVar75;
	
	iVar0 = Function_20(iParam0->f_68);
	bVar4 = false;
	NET_LOG(1, "FRD Host", "Getting Data for involved players", 0, 0, 0, 0);
	iParam0->f_76 = 4294967295;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_99(bVar1))
		{
			if (Function_96(bVar1) == iVar0)
			{
				Var5[bVar24] = bVar1;
				Var5[bVar24].f_4 = Function_101(Function_102(2, bVar1), 0.0f);
				Var5[bVar24].f_8 = NET_GET_GAMER_POSSE_LEADER(bVar1);
				fVar3 = (StackVal + fVar3);
				NET_LOG(StackVal, 1, "FRD Host", "     %s) Slot %s reports %s seconds", I2STR(bVar2), F2STR(I2STR(bVar1), 4, 2), 0);
				if (StackVal < StackVal)
				{
					bVar4 = bVar2;
				}
				bVar2++;
			}
		}
		bVar1++;
	}
	if (StackVal < 0.0f)
	{
		iParam0->f_76 = Var5[bVar44];
	}
	NET_LOG(1, "FRD Host", "     Total Time is %s", F2STR(fVar3, 4, 2), 0, 0, 0);
	NET_LOG(1, "FRD Host", "Calculating first draft payouts", 0, 0, 0, 0);
	bVar1 = false;
	while (bVar1 <= bVar2)
	{
		Var5[bVar14].f_12 = ((StackVal / fVar3) * iParam0->f_64);
		fVar70 = (fVar70 + Var5[bVar14].f_12);
		NET_LOG(1, "FRD Host", "     %s) Slot %s gets %s", I2STR(bVar1), I2STR(Var5[bVar14]), F2STR(Var5[bVar14].f_12, 4, 2), 0);
		bVar1++;
	}
	fVar71 = (iParam0->f_64 - fVar70);
	NET_LOG(1, "FRD Host", "     %s awarded of %s (PotSize) with difference of %s", F2STR(fVar70, 4, 2), F2STR(iParam0->f_64, 4, 2), F2STR(fVar71, 4, 2), 0);
	if (!Function_157(4))
	{
		NET_LOG(1, "FRD Host", "Slot %s is the highest scorer.  Adding remaineder (%s) if there is any", I2STR(Var5[bVar44]), F2STR(fVar71, 4, 2), 0, 0);
		if (fVar71 < 0.0f)
		{
			Var5[bVar44].f_12 = (Var5[bVar44].f_12 + fVar71);
		}
	}
	if (!Function_157(32768))
	{
		fVar72 = 0.0f;
		bVar1 = false;
		while (bVar1 <= bVar2)
		{
			fVar72 = 0.0f;
			bVar74 = false;
			if (StackVal > 0)
			{
				iVar73 = 0;
				while (iVar73 <= bVar2)
				{
					if (StackVal == StackVal)
					{
						fVar72 = (fVar72 + Var5[iVar734].f_12);
						bVar74++;
					}
					iVar73++;
				}
				if (bVar74 >= 1)
				{
					NET_LOG(StackVal, 1, "FRD Host", I2STR("Updating posse scores for posse %s.  %s members divvying %s"), I2STR(bVar74), F2STR(fVar72, 4, 2), 0);
					fVar72 = (fVar72 / IntToFloat(bVar74));
					iVar75 = StackVal;
					iVar73 = 0;
					while (iVar73 <= bVar2)
					{
						if (StackVal == iVar75)
						{
							NET_LOG(1, "FRD Host", "     Updating Slot %s award to %s", I2STR(Var5[iVar734]), F2STR(fVar72, 4, 2), 0, 0);
							Var5[iVar734].f_12 = fVar72;
							Var5[iVar734].f_8 = 4294967295;
						}
						iVar73++;
					}
				}
			}
			bVar1++;
		}
	}
	bVar1 = false;
	while (bVar1 <= bVar2)
	{
		if (Var5[bVar14].f_12 < 0.0f)
		{
			Function_93(Var5[bVar14], Var5[bVar14].f_12, 0);
		}
		bVar1++;
	}
	return;
}

int Function_101(int iParam0, int iParam1) //Position: 0x3CE7 / 15591
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_102(int iParam0, bool bParam1) //Position: 0x3CFA / 15610
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_67(iParam0);
	}
	if (!Function_87(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

float Function_103(bool bParam0) //Position: 0x3D63 / 15715
{
	return -Function_131(bParam0);
}

bool Function_104(bool bParam0) //Position: 0x3D6F / 15727
{
	if (Function_105(bParam0))
	{
		if (Function_103(bParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_105(bool bParam0) //Position: 0x3D8A / 15754
{
	return Function_351(*bParam0, 1);
}

var Function_106() //Position: 0x3D97 / 15767
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = GET_LOCAL_SLOT();
	bVar2 = false;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_99(bVar0))
		{
			if (Function_96(bVar0) == Function_136(1))
			{
				bVar3 = GET_SLOT_ACTOR(bVar0);
				if (IS_ACTOR_VALID(bVar3))
				{
					Function_107(bVar3);
				}
			}
			if (!bVar2)
			{
				if (Function_85(bVar0, 0x1000000, 1) && !Function_98(bVar0, bVar1))
				{
					bVar2 = true;
				}
			}
		}
		bVar0++;
	}
	return bVar2;
}

void Function_107(bool bParam0) //Position: 0x3E02 / 15874
{
	if (!IS_ACTORSET_VALID(Local_201.f_96))
	{
		Local_201.f_96 = CREATE_ACTORSET_IN_LAYOUT(Function_548(), "FRD_ActorSet", 1);
	}
	if (!IS_ACTOR_IN_ACTORSET(Local_201.f_96, bParam0))
	{
		ADD_ACTORSET_MEMBER(Local_201.f_96, bParam0);
		AI_GLOBAL_SET_PERMANENT_DANGER(bParam0, 1);
		NET_LOG(1, "FRD Client", "Actor %s added to avoidance set.", GET_ACTOR_NAME(bParam0), 0, 0, 0);
	}
	return;
}

void Function_108(bool bParam0, bool bParam1) //Position: 0x3E86 / 16006
{
	bParam0->f_48 = 4294967295;
	bParam0->f_60 = 4294967295;
	bParam0->f_52 = 4294967295;
	bParam0->f_64 = 0.0f;
	bParam0->f_72 = bParam0->f_68;
	bParam0->f_68 = 4294967295;
	if (!bParam1)
	{
		Function_75(bParam0, iLocal_189);
	}
	else
	{
		Function_9(bParam0);
	}
	Function_9(bParam0 + 12);
	Function_9(bParam0 + 24);
	return;
}

bool Function_109() //Position: 0x3ED0 / 16080
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_99(bVar0))
		{
			if (Function_96(bVar0) == Function_136(1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_110(int iParam0, float fParam1) //Position: 0x3F00 / 16128
{
	if (!Function_575(iParam0))
	{
		Function_610(iParam0);
		return 1;
	}
	if (Function_173(iParam0, fParam1))
	{
		Function_610(iParam0);
		return 1;
	}
	return 0;
}

vector3 Function_111(int iParam0) //Position: 0x3F2B / 16171
{
	vector3 vVar0;
	
	if (!NET_GET_GAMER_RGB_COLOR(iParam0, &vVar0, &vVar0 + 4, &vVar0 + 8))
	{
		vVar0 = { (68.0f / 255.0f), (68.0f / 255.0f), (68.0f / 255.0f) };
	}
	return StackVal, StackVal, vVar0;
}

var Function_112(int iParam0) //Position: 0x3F6D / 16237
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MPPlayerNameColored_0";
		
		case 0x00000001:
			return "MPPlayerNameColored_1";
		
		case 0x00000002:
			return "MPPlayerNameColored_2";
		
		case 0x00000003:
			return "MPPlayerNameColored_3";
		
		case 0x00000004:
			return "MPPlayerNameColored_4";
		
		case 0x00000005:
			return "MPPlayerNameColored_5";
		
		case 0x00000006:
			return "MPPlayerNameColored_6";
		
		case 0x00000007:
			return "MPPlayerNameColored_7";
		
		case 0x00000008:
			return "MPPlayerNameColored_8";
		
		case 0x00000009:
			return "MPPlayerNameColored_9";
		
		case 0x0000000A:
			return "MPPlayerNameColored_10";
		
		case 0x0000000B:
			return "MPPlayerNameColored_11";
		
		case 0x0000000C:
			return "MPPlayerNameColored_12";
		
		case 0x0000000D:
			return "MPPlayerNameColored_13";
		
		case 0x0000000E:
			return "MPPlayerNameColored_14";
		
		case 0x0000000F:
			return "MPPlayerNameColored_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

void Function_113(int iParam0, int iParam1) //Position: 0x418F / 16783
{
	var uVar0;
	
	uVar0 = "mp_FRD_newManagement_bad";
	if (Function_132(iParam0))
	{
		uVar0 = "mp_FRD_NewManagement_friend";
	}
	Function_114(uVar0, iParam0, UI_GET_STRING(Function_155(iParam1)));
	return;
}

void Function_114(int iParam0, var uParam1, int iParam2) //Position: 0x41E9 / 16873
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_115(uParam1), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(iParam0), &uVar0, iParam2, 0, 0, 0, 0);
	return;
}

struct<32> Function_115(bool bParam0) //Position: 0x420A / 16906
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("g", I2STR(bParam0));
}

struct<32> Function_116(char* cParam0, char* cParam1) //Position: 0x421E / 16926
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_117(char* cParam0, char* cParam1) //Position: 0x4237 / 16951
{
	if (Function_570(1024))
	{
		NET_LOG(1, "FRD Client", "Making the VO guy say %s", cParam0, 0, 0, 0);
		Function_32(cParam0, 0);
	}
	else if (IS_STRING_VALID(cParam1))
	{
		NET_LOG(1, "FRD Client", "Making the VO guy say %s instead of %s", cParam1, cParam0, 0, 0);
		Function_32(cParam1, 0);
	}
	else
	{
		NET_LOG(1, "FRD Client", "Making the VO guy say %s, but couldn't (not installed)", cParam0, 0, 0, 0);
	}
	return;
}

void Function_118(int iParam0, bool bParam1) //Position: 0x4320 / 17184
{
	NET_TICKER_REPORTF(UI_GET_STRING(iParam0), bParam1, 0, 0, 0, 0, 0);
	return;
}

void Function_119(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x4335 / 17205
{
	struct<4> Var0;
	var uVar4;
	
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
			Var0 = { StackVal, StackVal, StackVal, Function_120(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, uVar4, iParam5, iParam6);
	}
}

struct<16> Function_120(int iParam0) //Position: 0x43BA / 17338
{
	char* cVar0[16];
	
	if (!Function_121())
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

bool Function_121() //Position: 0x43F9 / 17401
{
	if (Function_351(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_122(bool bParam0, int iParam1) //Position: 0x4414 / 17428
{
	struct<9> Var0;
	
	if (!IS_BLIP_VALID(Local_201.f_36))
	{
		GET_VOLUME_SCALE(bParam0, &vVar0);
		Local_201.f_36 = ADD_BLIP_FOR_OBJECT(bParam0, 440, 0, 2, 0);
		SET_BLIP_SCALE(Local_201.f_36, ((vVar0.x + vVar0.z) / 2.0f));
		SET_BLIP_PRIORITY(Local_201.f_36, 2);
		SET_BLIP_NAME(Local_201.f_36, "mp_FreeRoamDefense_blip");
	}
	Function_123(Local_201.f_36, iParam1, 0.5f, 1);
	return;
}

void Function_123(float fParam0, int iParam1, float fParam2, bool bParam3) //Position: 0x4483 / 17539
{
	struct<9> Var0;
	
	if (iParam1 == 4294967294)
	{
		SET_BLIP_COLOR(fParam0, (206.0f / 255.0f), (158.0f / 255.0f), (90.0f / 255.0f), fParam2);
	}
	else if (iParam1 == 4294967295)
	{
		SET_BLIP_COLOR(fParam0, 1.0f, 1.0f, 1.0f, fParam2);
	}
	else if (iParam1 == GET_LOCAL_SLOT())
	{
		SET_BLIP_COLOR(fParam0, (90.0f / 255.0f), (145.0f / 255.0f), (189.0f / 255.0f), fParam2);
	}
	else if (Function_157(131072))
	{
		Function_111(iParam1);
		vVar0 = { StackVal, StackVal, Function_111(iParam1) };
		SET_BLIP_COLOR(fParam0, vVar0.x, vVar0.y, vVar0.z, fParam2);
	}
	else if (Function_132(iParam1))
	{
		if (Function_157(262144))
		{
			SET_BLIP_COLOR(fParam0, (90.0f / 255.0f), (145.0f / 255.0f), (189.0f / 255.0f), fParam2);
		}
		else if (bParam3)
		{
			SET_BLIP_COLOR(fParam0, 0.95f, 0.95f, 0.95f, 0.3f);
		}
		else
		{
			SET_BLIP_COLOR(fParam0, 1.0f, 1.0f, 1.0f, fParam2);
		}
	}
	else
	{
		SET_BLIP_COLOR(fParam0, (165.0f / 255.0f), (56.0f / 255.0f), (66.0f / 255.0f), fParam2);
	}
}

void Function_124() //Position: 0x45BE / 17854
{
	int iVar0[67];
	int iVar68;
	
	if (Local_201.f_104 < 0.0f)
	{
		iVar0[13] = FLOOR(Local_201.f_104);
		iVar0[0] = FLOOR(Local_201.f_104);
		iVar0[14] = 1;
		iVar0[12] = Local_201.f_112;
		iVar0[11] = Local_201.f_108;
		iVar0[66] = FLOOR((Function_67(2) * 1000.0f));
		iVar68 = 152;
		if (Function_66())
		{
			iVar68 = 153;
		}
		NET_START_LB_UPDATE(0);
		NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), iVar68, 4294967295, &iVar0);
		NET_END_LB_UPDATE();
	}
	Function_125();
	return;
}

void Function_125() //Position: 0x463F / 17983
{
	Local_201.f_104 = 0.0f;
	Local_201.f_108 = 0;
	Local_201.f_112 = 0;
	return;
}

void Function_126(var uParam0, int iParam1) //Position: 0x4654 / 18004
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (Function_157(65536))
	{
		if (IS_SLOT_VALID(uParam0->f_76))
		{
			NET_LOG(1, "FRD Client", "Splashing winner message for %s", GET_SLOT_NAME(uParam0->f_76), 0, 0, 0);
			if (Function_132(uParam0->f_76))
			{
				Function_32("GENMESS_GAMEWON", 0);
				uVar1 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				Function_32("GENMESS_GAMELOST", 0);
				uVar1 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			PRINT_BIG_FORMAT(4.0f, "mp_FRD_Wins", Function_112(uParam0->f_76), Function_155(iParam1), iVar0, iVar0, 0, uVar1);
		}
		else
		{
			NET_LOG(1, "FRD Client", "Splashing Nobody win message cause non-valid high scorer", 0, 0, 0, 0);
			PRINT_BIG_FORMAT(4.0f, "mp_FRD_NobodyWins", Function_155(iParam1), iVar0, iVar0, iVar0, 0, "HUD_MP_OVERTIME_LOSE_MASTER");
			Function_32("GENMESS_GAMEOVER", 0);
		}
	}
	else if (Local_201.f_44 == 4294967294)
	{
		PRINT_BIG_FORMAT(4.0f, "mp_FRD_NobodyWins", Function_155(iParam1), iVar2, iVar2, iVar2, 0, "HUD_MP_OVERTIME_LOSE_MASTER");
		Function_32("GENMESS_GAMEOVER", 0);
	}
	else if (IS_SLOT_VALID(Local_201.f_44))
	{
		if (Function_132(Local_201.f_44))
		{
			Function_32("GENMESS_GAMEWON", 0);
			iVar3 = "HUD_MP_OVERTIME_WIN_MASTER";
		}
		else
		{
			Function_32("GENMESS_GAMELOST", 0);
			iVar3 = "HUD_MP_OVERTIME_LOSE_MASTER";
		}
		PRINT_BIG_FORMAT(4.0f, "mp_FRD_Wins", Function_112(Local_201.f_44), Function_155(iParam1), iVar2, iVar2, 0, iVar3);
	}
	return;
}

void Function_127(int iParam0) //Position: 0x4906 / 18694
{
	if (iParam0 == 4294967294)
	{
		UI_SET_STRING("FRD_Holder", UI_GET_STRING("mp_FRD_UpForGrabslbl"));
		UI_SET_STRING("FRD_BlipColor", "<yellow><MP_DEFEND></yellow>");
	}
	else if (iParam0 != 4294967295)
	{
		if (Function_157(131072))
		{
			UI_SET_STRING_FORMAT("FRD_BlipColor", "%s<MP_DEFEND></0x>", Function_128(iParam0, 1), 0, 0);
		}
		else if (iParam0 == GET_LOCAL_SLOT())
		{
			UI_SET_STRING("FRD_BlipColor", "<blue><MP_DEFEND></blue>");
		}
		else if (Function_132(iParam0))
		{
			if (Function_157(262144))
			{
				UI_SET_STRING("FRD_BlipColor", "<blue><MP_DEFEND></blue>");
			}
			else
			{
				UI_SET_STRING("FRD_BlipColor", "<MP_DEFEND>");
			}
		}
		else
		{
			UI_SET_STRING("FRD_BlipColor", "<red><MP_DEFEND></red>");
		}
		UI_SET_STRING("FRD_Holder", UI_GET_STRING(Function_112(iParam0)));
	}
	UI_REFRESH("nFRD_Owner");
	return;
}

var Function_128(var uParam0, int iParam1) //Position: 0x4AA9 / 19113
{
	return NET_GET_GAMER_HEX_COLOR(uParam0, iParam1);
}

void Function_129(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x4AB6 / 19126
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_130(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_130(int iParam0) //Position: 0x4ADA / 19162
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return iVar0;
}

float Function_131(bool bParam0) //Position: 0x502D / 20525
{
	if (Function_105(bParam0))
	{
		if (Function_91(bParam0))
		{
			return StackVal;
		}
		Function_78();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_132(int iParam0) //Position: 0x50FE / 20734
{
	return Function_98(GET_LOCAL_SLOT(), iParam0);
}

int Function_133(float fParam0) //Position: 0x510C / 20748
{
	if (IS_PLAYER_IN_COMBAT(0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Function_612())) > fParam0)
		{
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Function_612())) > fParam0)
		{
			return 0;
		}
		return 1;
	}
	return 2;
}

void Function_134(bool bParam0, var uParam1, var uParam2) //Position: 0x5140 / 20800
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_135(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(uVar1, uParam2, uParam1, 1);
	iVar2 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_SET(iVar2, uVar1);
	bVar3 = START_OBJECT_ITERATOR(iVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		DESTROY_OBJECT(bVar3);
		iVar0++;
		bVar3 = OBJECT_ITERATOR_NEXT(iVar2);
	}
	DESTROY_OBJECTSET(uVar1);
	DESTROY_ITERATOR(iVar2);
	return;
}

var Function_135() //Position: 0x5199 / 20889
{
	int iVar0;
	
	return iVar0;
}

int Function_136(int iParam0) //Position: 0x51A1 / 20897
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_137(bool bParam0, bool bParam1, bool bParam2) //Position: 0x51C1 / 20929
{
	DECOR_SET_INT(bParam2, "FRD_Invite", (SHIFT_LEFT(bParam0, 16) || bParam1));
	if (bParam0 > 0)
	{
		NET_LOG(1, "FRD Invite", "SENDing invite to PR_multiplayer from %s, %s, at barker %s", I2STR(bParam0), GET_SLOT_NAME(bParam0), I2STR(bParam1), 0);
	}
	else
	{
		NET_LOG(1, "FRD Invite", "SENDing invite to PR_multiplayer from %s, --Invalid--, at barker %s", I2STR(bParam0), GET_SLOT_NAME(bParam0), I2STR(bParam1), 0);
	}
	return;
}

void Function_138(int iParam0) //Position: 0x52B2 / 21170
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_139(int iParam0) //Position: 0x52C0 / 21184
{
	int iVar0;
	
	if (!Function_24(16))
	{
		if (iParam0->f_48 == GET_LOCAL_SLOT() && !Function_132(iParam0->f_48))
		{
			Function_142("mp_FRD_ClaimStaken", 0x41200000, 1, 0, 2, 1, 0);
		}
		Function_152(16);
		Function_106();
		if (Function_21(iParam0->f_68))
		{
			iVar0 = Function_20(iParam0->f_68);
			if (Function_35(iVar0))
			{
				if (!Function_24(32))
				{
					Function_152(32);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
				}
			}
		}
	}
	Function_152(128);
	Function_89();
	Function_140(Function_141(iParam0->f_68), 6, 0.0f, 400, 3000, 3212836864, 0);
	Local_201.f_100 = 6;
	Function_571(3145792);
	Function_15(2, -1.0f);
	Function_125();
	return;
}

void Function_140(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5383 / 21379
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_130(uParam1), fParam2, iParam3, iParam4, iParam5, iParam6);
}

var Function_141(int iParam0) //Position: 0x539F / 21407
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "";
		
		case 0x00000000:
			return "FTR_SONG_04";
		
		case 0x00000001:
			return "MEX_SONG_01";
		
		case 0x00000002:
			return "FTR_SONG_01";
		
		case 0x00000003:
			return "FTR_SONG_03";
		
		case 0x00000004:
			return "NRT_SONG_05";
		
		case 0x00000005:
			return "MEX_SONG_05";
		
		case 0x00000006:
			return "MEX_SONG_02";
		
		case 0x00000007:
			return "FTR_SONG_02";
		
		case 0xFFFFFFFE:
			return "";
		
		default:
	}
	return "FRD_Invalid!?";
}

void Function_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5478 / 21624
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_120(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

int Function_143(int iParam0) //Position: 0x54F3 / 21747
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("FRD_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("FRD_Layout");
	}
	switch (iParam0)
	{
		case 0x00000000:
			Function_151(bVar0);
			break;
		
		case 0x00000001:
			Function_150(bVar0);
			break;
		
		case 0x00000002:
			Function_149(bVar0);
			break;
		
		case 0x00000003:
			Function_148(bVar0);
			break;
		
		case 0x00000004:
			Function_147(bVar0);
			break;
		
		case 0x00000005:
			Function_146(bVar0);
			break;
		
		case 0x00000006:
			Function_144(bVar0);
			break;
		
		default:
			break;
	}
	return bVar0;
}

int Function_144(int iParam0) //Position: 0x559B / 21915
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	var uVar42;
	
	Function_145(4, 1);
	uVar0 = uVar0;
	cLocal_177 = iParam0;
	CREATE_VOLUME_IN_LAYOUT(cLocal_177, "Defense_Volume", 3, -1700.528f, 10.47344f, 4226.433f, 0.0f, -37.6365f, 0.0f, 21.93562f, 12.67413f, 21.51064f);
	uVar1 = CREATE_VOLUME_SET_IN_LAYOUT(cLocal_177, "SpawnVolGroup_set");
	uVar2 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_0", 2, -1678.539f, 11.23122f, 4250.337f, 0.0f, -181.1415f, 0.0f, 1.822228f, 1.0f, 6.190878f);
	ADD_TO_VOLUME_SET(uVar1, uVar2);
	uVar3 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_1", 3, -1742.453f, 9.28788f, 4187.162f, 0.0f, -630.7231f, 0.0f, 0.8521102f, 0.9324868f, 0.8521102f);
	ADD_TO_VOLUME_SET(uVar1, uVar3);
	uVar4 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_2", 3, -1721.454f, 11.23147f, 4252.247f, 0.0f, -194.697f, 0.0f, 0.7925131f, 0.8672681f, 0.7925131f);
	ADD_TO_VOLUME_SET(uVar1, uVar4);
	uVar5 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_3", 3, -1684.705f, 11.42213f, 4198.116f, 0.0f, -657.2018f, 0.0f, 0.8660001f, 0.9476869f, 0.8660001f);
	ADD_TO_VOLUME_SET(uVar1, uVar5);
	uVar6 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_4", 3, -1733.83f, 8.205861f, 4220.664f, 0.0f, -596.8854f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar6);
	uVar7 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_5", 3, -1709.49f, 11.72357f, 4186.356f, 0.0f, -757.7119f, 0.0f, 1.417508f, 0.3476295f, 1.448981f);
	ADD_TO_VOLUME_SET(uVar1, uVar7);
	uVar8 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_6", 3, -1698.603f, 8.07091f, 4258.942f, 0.0f, 193.7598f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar8);
	uVar9 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_7", 3, -1686.876f, 8.106473f, 4199.681f, 0.0f, -733.7842f, 0.0f, 1.548491f, 0.8296183f, 1.486551f);
	ADD_TO_VOLUME_SET(uVar1, uVar9);
	uVar10 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_8", 3, -1743.21f, 9.287154f, 4209.956f, 0.0f, -537.5621f, 0.0f, 1.247992f, 0.9146472f, 1.308093f);
	ADD_TO_VOLUME_SET(uVar1, uVar10);
	uVar11 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_9", 3, -1678.546f, 11.23586f, 4231.047f, 0.0f, -721.4225f, 0.0f, 0.7064732f, 0.7731124f, 0.7064732f);
	ADD_TO_VOLUME_SET(uVar1, uVar11);
	uVar12 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_11", 3, -1707.741f, 17.41178f, 4199.205f, 0.0f, -627.4625f, 0.0f, 2.142498f, 0.9476869f, 2.344801f);
	ADD_TO_VOLUME_SET(uVar1, uVar12);
	uVar13 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_12", 3, -1709.057f, 11.63805f, 4193.896f, 0.0f, -856.5405f, 0.0f, 1.137298f, 0.3187335f, 1.319873f);
	ADD_TO_VOLUME_SET(uVar1, uVar13);
	uVar14 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_13", 3, -1697.034f, 12.00094f, 4258.991f, 0.0f, -91.47185f, 0.0f, 0.7381514f, 0.8077787f, 0.7381514f);
	ADD_TO_VOLUME_SET(uVar1, uVar14);
	uVar15 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_14", 3, -1733.705f, 11.26626f, 4185.059f, 0.0f, -653.0002f, 0.0f, 1.3959f, 0.8198009f, 1.477618f);
	ADD_TO_VOLUME_SET(uVar1, uVar15);
	uVar16 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_15", 3, -1717.947f, 8.031364f, 4184.902f, 0.0f, 8.687687f, 0.0f, 0.8660001f, 0.9476869f, 0.8660001f);
	ADD_TO_VOLUME_SET(uVar1, uVar16);
	uVar17 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_16", 3, -1714.692f, 11.28081f, 4214.787f, 0.0f, -451.3032f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar17);
	uVar18 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_17", 3, -1718.596f, 8.031358f, 4252.0f, 0.0f, -256.2474f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar18);
	uVar19 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_18", 2, -1684.332f, 11.18858f, 4252.177f, 0.0f, -179.686f, 0.0f, 2.561617f, 1.0f, 2.112239f);
	ADD_TO_VOLUME_SET(uVar1, uVar19);
	uVar20 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_19", 3, -1700.025f, 13.77437f, 4251.741f, 0.0f, -163.295f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar20);
	uVar21 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_20", 3, -1706.325f, 11.04855f, 4252.162f, 0.0f, -179.9845f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar21);
	uVar22 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_21", 3, -1700.265f, 8.07091f, 4263.071f, 0.0f, 178.8806f, 0.0f, 1.36225f, 0.7527589f, 0.6878741f);
	ADD_TO_VOLUME_SET(uVar1, uVar22);
	uVar23 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_23", 3, -1721.484f, 11.24403f, 4224.455f, 0.0f, -307.8875f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar23);
	uVar24 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_24", 3, -1713.556f, 11.28081f, 4221.56f, 0.0f, -490.32f, 0.0f, 0.6383516f, 0.6985651f, 0.6383516f);
	ADD_TO_VOLUME_SET(uVar1, uVar24);
	uVar25 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_25", 3, -1704.473f, 8.031363f, 4187.081f, 0.0f, -335.7577f, 0.0f, 1.503884f, 0.8581703f, 1.477348f);
	ADD_TO_VOLUME_SET(uVar1, uVar25);
	uVar26 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_26", 3, -1684.0f, 8.031361f, 4252.0f, 0.0f, -141.8529f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar26);
	uVar27 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_27", 3, -1707.261f, 8.03136f, 4252.0f, 0.0f, -181.5903f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar27);
	uVar28 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_28", 3, -1724.721f, 11.28081f, 4212.497f, 0.0f, -612.9294f, 0.0f, 0.7987055f, 0.8740447f, 0.7987055f);
	ADD_TO_VOLUME_SET(uVar1, uVar28);
	uVar29 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_29", 3, -1734.643f, 11.28081f, 4212.792f, 0.0f, -577.1346f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar29);
	uVar30 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_30", 3, -1734.126f, 14.16805f, 4221.208f, 0.0f, -597.4125f, 0.0f, 1.437195f, 0.7585974f, 1.542515f);
	ADD_TO_VOLUME_SET(uVar1, uVar30);
	uVar31 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_31", 3, -1693.02f, 13.16173f, 4186.859f, 0.0f, -721.1874f, 0.0f, 2.232815f, 0.7585974f, 2.638756f);
	ADD_TO_VOLUME_SET(uVar1, uVar31);
	uVar32 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_32", 3, -1676.258f, 8.338675f, 4225.855f, 0.0f, -847.5884f, 0.0f, 1.440719f, 0.9476869f, 0.937914f);
	ADD_TO_VOLUME_SET(uVar1, uVar32);
	uVar33 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_33", 3, -1720.11f, 8.207294f, 4221.409f, 0.0f, -572.591f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar33);
	uVar34 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_34", 3, -1676.773f, 11.42063f, 4225.947f, 0.0f, -810.5008f, 0.0f, 1.255111f, 0.9476869f, 1.542937f);
	ADD_TO_VOLUME_SET(uVar1, uVar34);
	uVar35 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_35", 3, -1724.771f, 8.207294f, 4212.745f, 0.0f, -621.2491f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	ADD_TO_VOLUME_SET(uVar1, uVar35);
	uVar36 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_36", 3, -1734.352f, 8.176961f, 4187.887f, 0.0f, -588.9538f, 0.0f, 0.7268851f, 0.7954496f, 0.7268851f);
	ADD_TO_VOLUME_SET(uVar1, uVar36);
	uVar37 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_38", 3, -1739.959f, 7.300356f, 4206.479f, 0.0f, 90.09533f, 0.0f, 2.015636f, 0.9975055f, 1.09129f);
	ADD_TO_VOLUME_SET(uVar1, uVar37);
	uVar38 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_39", 3, -1738.095f, 7.33384f, 4191.57f, 0.0f, -653.0002f, 0.0f, 2.070623f, 0.9975055f, 2.015033f);
	ADD_TO_VOLUME_SET(uVar1, uVar38);
	uVar39 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_40", 2, -1690.174f, 11.18858f, 4250.331f, 0.0f, -166.8669f, 0.0f, 5.420168f, 1.0f, 5.962139f);
	ADD_TO_VOLUME_SET(uVar1, uVar39);
	uVar40 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_41", 2, -1742.776f, 9.619265f, 4191.415f, 76.12954f, 88.84176f, 76.63393f, 5.565413f, 1.0f, 1.168585f);
	ADD_TO_VOLUME_SET(uVar1, uVar40);
	uVar41 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_42", 2, -1742.812f, 9.698732f, 4198.682f, 76.12954f, 88.84176f, 76.63393f, 5.565413f, 1.0f, 1.168585f);
	ADD_TO_VOLUME_SET(uVar1, uVar41);
	uVar42 = CREATE_VOLUME_IN_LAYOUT(cLocal_177, "SpawnVol_43", 2, -1742.843f, 9.604905f, 4205.212f, 76.12954f, 88.84176f, 76.63393f, 5.539093f, 1.0f, 1.168585f);
	ADD_TO_VOLUME_SET(uVar1, uVar42);
	return 1;
}

void Function_145(int iParam0, int iParam1) //Position: 0x608F / 24719
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

int Function_146(int iParam0) //Position: 0x60D8 / 24792
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	
	Function_145(4, 1);
	uVar0 = uVar0;
	cLocal_176 = iParam0;
	CREATE_VOLUME_IN_LAYOUT(cLocal_176, "Defense_Volume", 3, -4295.403f, 33.01773f, 4410.761f, 0.0f, -37.6365f, 0.0f, 28.8377f, 24.13157f, 28.279f);
	uVar1 = CREATE_VOLUME_SET_IN_LAYOUT(cLocal_176, "SpawnVolGroup_set");
	uVar2 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_0", 3, -4335.921f, 19.07746f, 4479.539f, 0.0f, 236.0073f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	ADD_TO_VOLUME_SET(uVar1, uVar2);
	uVar3 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_1", 3, -4300.848f, 18.0706f, 4459.596f, 0.0f, 123.5088f, 0.0f, 0.8253789f, 0.9907081f, 0.8253789f);
	ADD_TO_VOLUME_SET(uVar1, uVar3);
	uVar4 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_2", 3, -4280.566f, 18.22794f, 4465.846f, 0.0f, 135.1432f, 0.0f, 0.8526884f, 1.023488f, 0.8526884f);
	ADD_TO_VOLUME_SET(uVar1, uVar4);
	uVar5 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_3", 3, -4279.006f, 22.74587f, 4381.741f, 0.0f, 30.77226f, 0.0f, 1.490163f, 1.788653f, 1.490163f);
	ADD_TO_VOLUME_SET(uVar1, uVar5);
	uVar6 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_4", 3, -4244.776f, 22.78407f, 4371.674f, 0.0f, 2.84242f, 0.0f, 0.9407431f, 0.8382427f, 0.9407431f);
	ADD_TO_VOLUME_SET(uVar1, uVar6);
	uVar7 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_5", 3, -4264.64f, 18.07059f, 4443.685f, 0.0f, -53.83153f, 0.0f, 1.507544f, 1.809515f, 1.507544f);
	ADD_TO_VOLUME_SET(uVar1, uVar7);
	uVar8 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_6", 3, -4260.016f, 24.95712f, 4331.824f, 0.0f, -84.60384f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	ADD_TO_VOLUME_SET(uVar1, uVar8);
	uVar9 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_7", 3, -4311.848f, 31.70709f, 4374.23f, 0.0f, -10.65867f, 0.0f, 1.501884f, 0.5731589f, 1.501884f);
	ADD_TO_VOLUME_SET(uVar1, uVar9);
	uVar10 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_8", 3, -4329.582f, 27.64485f, 4411.813f, 0.0f, -51.53185f, 0.0f, 1.288239f, 0.3481335f, 1.288239f);
	ADD_TO_VOLUME_SET(uVar1, uVar10);
	uVar11 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_9", 3, -4360.919f, 30.23645f, 4388.051f, 0.0f, 46.04944f, 0.0f, 1.336139f, 0.7509382f, 1.336139f);
	ADD_TO_VOLUME_SET(uVar1, uVar11);
	uVar12 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_10", 3, -4331.715f, 22.48272f, 4464.491f, 0.0f, 52.2365f, 0.0f, 0.7263988f, 0.8719015f, 0.7263988f);
	ADD_TO_VOLUME_SET(uVar1, uVar12);
	uVar13 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_11", 3, -4290.286f, 18.28778f, 4457.1f, 0.0f, 131.2531f, 0.0f, 0.5238062f, 0.5406335f, 0.5404987f);
	ADD_TO_VOLUME_SET(uVar1, uVar13);
	uVar14 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_12", 3, -4271.064f, 18.07059f, 4448.095f, 0.0f, 124.4667f, 0.0f, 1.507544f, 1.809515f, 1.507544f);
	ADD_TO_VOLUME_SET(uVar1, uVar14);
	uVar15 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_13", 3, -4264.638f, 21.92659f, 4397.713f, 0.0f, 272.6876f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	ADD_TO_VOLUME_SET(uVar1, uVar15);
	uVar16 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_14", 3, -4258.166f, 26.25237f, 4361.932f, 0.0f, -33.0556f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	ADD_TO_VOLUME_SET(uVar1, uVar16);
	uVar17 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_15", 3, -4405.673f, 34.78413f, 4416.313f, 0.0f, 91.34052f, 0.0f, 2.140898f, 1.20323f, 2.140898f);
	ADD_TO_VOLUME_SET(uVar1, uVar17);
	uVar18 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_16", 3, -4311.877f, 31.70709f, 4381.509f, 0.0f, 118.8577f, 0.0f, 1.501884f, 0.5731589f, 1.501884f);
	ADD_TO_VOLUME_SET(uVar1, uVar18);
	uVar19 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_17", 3, -4335.903f, 22.34797f, 4459.782f, 0.0f, 191.0454f, 0.0f, 0.7263988f, 0.8719015f, 0.7263988f);
	ADD_TO_VOLUME_SET(uVar1, uVar19);
	uVar20 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_18", 3, -4284.072f, 18.50686f, 4456.616f, 0.0f, 205.6215f, 0.0f, 0.7271153f, 0.7384764f, 0.7271153f);
	ADD_TO_VOLUME_SET(uVar1, uVar20);
	uVar21 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_19", 3, -4280.566f, 18.22794f, 4465.846f, 0.0f, 135.1432f, 0.0f, 0.8526884f, 1.023488f, 0.8526884f);
	ADD_TO_VOLUME_SET(uVar1, uVar21);
	uVar22 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_20", 3, -4263.382f, 19.12264f, 4455.153f, 0.0f, -54.78981f, 0.0f, 1.410503f, 1.693037f, 1.410503f);
	ADD_TO_VOLUME_SET(uVar1, uVar22);
	uVar23 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_21", 3, -4351.787f, 18.99342f, 4494.982f, 0.0f, 139.8281f, 0.0f, 3.684973f, 3.018145f, 3.684973f);
	ADD_TO_VOLUME_SET(uVar1, uVar23);
	uVar24 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_22", 3, -4243.849f, 22.27629f, 4349.88f, 0.0f, -3.45362f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	ADD_TO_VOLUME_SET(uVar1, uVar24);
	uVar25 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_23", 3, -4305.67f, 31.11509f, 4360.742f, 0.0f, 39.3694f, 0.0f, 2.106963f, 2.529002f, 2.106963f);
	ADD_TO_VOLUME_SET(uVar1, uVar25);
	uVar26 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_24", 3, -4276.169f, 30.1767f, 4351.824f, 0.0f, -29.01862f, 0.0f, 2.106963f, 2.529002f, 2.106963f);
	ADD_TO_VOLUME_SET(uVar1, uVar26);
	uVar27 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_25", 3, -4270.711f, 27.43315f, 4368.194f, 2.971155f, -45.59039f, 0.7849898f, 1.490163f, 1.788653f, 1.490163f);
	ADD_TO_VOLUME_SET(uVar1, uVar27);
	uVar28 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_26", 3, -4406.357f, 18.99342f, 4477.839f, 0.0f, 89.35223f, 0.0f, 4.713051f, 3.018145f, 4.713051f);
	ADD_TO_VOLUME_SET(uVar1, uVar28);
	uVar29 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_27", 3, -4265.999f, 18.99342f, 4505.105f, 0.0f, 200.6565f, 0.0f, 4.713051f, 3.018145f, 4.713051f);
	ADD_TO_VOLUME_SET(uVar1, uVar29);
	uVar30 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_28", 3, -4283.144f, 18.99342f, 4517.908f, 0.0f, 184.24f, 0.0f, 4.713051f, 3.018145f, 4.713051f);
	ADD_TO_VOLUME_SET(uVar1, uVar30);
	uVar31 = CREATE_VOLUME_IN_LAYOUT(cLocal_176, "SpawnVol_29", 3, -4367.55f, 18.99342f, 4475.954f, 0.0f, 117.5588f, 0.0f, 4.713051f, 3.018145f, 4.713051f);
	ADD_TO_VOLUME_SET(uVar1, uVar31);
	return 1;
}

int Function_147(int iParam0) //Position: 0x68FE / 26878
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	Function_145(4, 1);
	uVar0 = uVar0;
	cLocal_175 = iParam0;
	CREATE_VOLUME_IN_LAYOUT(cLocal_175, "Defense_Volume", 3, 764.5848f, 80.782f, 1314.62f, 0.0f, 14.90262f, 0.0f, 19.56264f, 9.706238f, 19.56264f);
	uVar1 = CREATE_VOLUME_SET_IN_LAYOUT(cLocal_175, "SpawnVolGroup_set");
	uVar2 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_0", 3, 813.1932f, 78.471f, 1270.206f, 0.0f, -42.77343f, 0.0f, 0.8397177f, 0.8736401f, 0.8397177f);
	ADD_TO_VOLUME_SET(uVar1, uVar2);
	uVar3 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_1", 3, 672.7479f, 77.84531f, 1318.569f, 0.0f, 127.6531f, 0.0f, 0.8397177f, 0.8736401f, 0.8397177f);
	ADD_TO_VOLUME_SET(uVar1, uVar3);
	uVar4 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_2", 3, 705.7951f, 78.30585f, 1267.145f, 0.0f, 127.6531f, 0.0f, 0.8397177f, 0.8736401f, 0.8397177f);
	ADD_TO_VOLUME_SET(uVar1, uVar4);
	uVar5 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_3", 3, 710.1257f, 78.30585f, 1309.012f, 0.0f, 200.7917f, 0.0f, 0.8397177f, 0.8736401f, 0.8397177f);
	ADD_TO_VOLUME_SET(uVar1, uVar5);
	uVar6 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_4", 3, 680.5995f, 78.30585f, 1365.438f, 0.0f, 162.4858f, 0.0f, 1.119613f, 1.164842f, 1.119613f);
	ADD_TO_VOLUME_SET(uVar1, uVar6);
	uVar7 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_5", 3, 780.6464f, 78.30585f, 1228.0f, 0.0f, 357.1966f, 0.0f, 1.119613f, 1.164842f, 1.119613f);
	ADD_TO_VOLUME_SET(uVar1, uVar7);
	uVar8 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_6", 3, 755.1655f, 78.30585f, 1363.146f, 0.0f, 483.2696f, 0.0f, 0.8312305f, 0.8648101f, 0.8312305f);
	ADD_TO_VOLUME_SET(uVar1, uVar8);
	uVar9 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_7", 3, 697.2882f, 78.30585f, 1228.852f, 0.0f, 366.5947f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	ADD_TO_VOLUME_SET(uVar1, uVar9);
	uVar10 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_8", 3, 701.3563f, 78.30585f, 1359.133f, 0.0f, 521.6205f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	ADD_TO_VOLUME_SET(uVar1, uVar10);
	uVar11 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_9", 3, 762.4905f, 78.38076f, 1224.0f, 0.0f, 643.3622f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	ADD_TO_VOLUME_SET(uVar1, uVar11);
	uVar12 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_10", 3, 810.7064f, 78.471f, 1303.057f, 0.0f, 626.6191f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	ADD_TO_VOLUME_SET(uVar1, uVar12);
	uVar13 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_11", 3, 657.325f, 78.16015f, 1274.664f, 0.0f, 451.4027f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	ADD_TO_VOLUME_SET(uVar1, uVar13);
	uVar14 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_12", 3, 750.1956f, 78.30585f, 1365.805f, 0.0f, 453.1971f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	ADD_TO_VOLUME_SET(uVar1, uVar14);
	uVar15 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_13", 3, 736.9054f, 78.87982f, 1223.318f, 0.0f, 366.189f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	ADD_TO_VOLUME_SET(uVar1, uVar15);
	uVar16 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_14", 3, 780.5359f, 78.30585f, 1362.74f, 0.0f, 174.9852f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	ADD_TO_VOLUME_SET(uVar1, uVar16);
	uVar17 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_15", 3, 674.2471f, 78.30585f, 1228.0f, 0.0f, -5.333569f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	ADD_TO_VOLUME_SET(uVar1, uVar17);
	uVar18 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_16", 3, 812.2103f, 79.56858f, 1233.079f, 0.0f, -94.42254f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	ADD_TO_VOLUME_SET(uVar1, uVar18);
	uVar19 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_17", 3, 675.7842f, 78.30585f, 1344.0f, 0.0f, 88.75424f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	ADD_TO_VOLUME_SET(uVar1, uVar19);
	uVar20 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_18", 3, 812.2593f, 78.30585f, 1356.679f, 0.0f, 215.5624f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	ADD_TO_VOLUME_SET(uVar1, uVar20);
	uVar21 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_19", 3, 806.312f, 78.30585f, 1360.931f, 0.0f, 215.5624f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	ADD_TO_VOLUME_SET(uVar1, uVar21);
	uVar22 = CREATE_VOLUME_IN_LAYOUT(cLocal_175, "SpawnVol_20", 3, 805.6031f, 78.30585f, 1382.199f, 0.0f, 215.5624f, 0.0f, 1.23048f, 3.910332f, 1.23048f);
	ADD_TO_VOLUME_SET(uVar1, uVar22);
	return 1;
}

int Function_148(int iParam0) //Position: 0x6ECA / 28362
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	
	Function_145(4, 1);
	uVar0 = uVar0;
	cLocal_174 = iParam0;
	CREATE_VOLUME_IN_LAYOUT(cLocal_174, "Defense_Volume", 3, 134.0985f, 81.05609f, 2337.494f, 0.0f, 20.0f, 0.0f, 23.24967f, 13.33089f, 23.24967f);
	uVar1 = CREATE_VOLUME_SET_IN_LAYOUT(cLocal_174, "SpawnVolGroup_set");
	uVar2 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_0", 3, 124.7039f, 73.28625f, 2392.0f, 0.0f, 140.6321f, 0.0f, 1.784259f, 5.228127f, 1.784259f);
	ADD_TO_VOLUME_SET(uVar1, uVar2);
	uVar3 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_1", 3, 150.4786f, 73.28625f, 2381.521f, 0.0f, -120.8779f, 0.0f, 1.887448f, 5.530484f, 1.887448f);
	ADD_TO_VOLUME_SET(uVar1, uVar3);
	uVar4 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_2", 3, 84.22247f, 73.28625f, 2291.777f, 0.0f, 100.4313f, 0.0f, 1.684196f, 3.050434f, 1.684196f);
	ADD_TO_VOLUME_SET(uVar1, uVar4);
	uVar5 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_3", 3, 137.8256f, 73.84786f, 2310.655f, 0.0f, 275.7021f, 0.0f, 0.8092422f, 1.267242f, 0.8092422f);
	ADD_TO_VOLUME_SET(uVar1, uVar5);
	uVar6 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_4", 3, 132.6836f, 73.28625f, 2383.165f, 0.0f, 208.9608f, 0.0f, 1.784259f, 5.228127f, 1.784259f);
	ADD_TO_VOLUME_SET(uVar1, uVar6);
	uVar7 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_5", 3, 93.76576f, 73.65821f, 2270.044f, 0.0f, -7.073559f, 0.0f, 1.226203f, 1.68419f, 1.226203f);
	ADD_TO_VOLUME_SET(uVar1, uVar7);
	uVar8 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_6", 3, 80.50367f, 74.24982f, 2304.045f, 0.0f, 88.78371f, 0.0f, 1.238919f, 1.591931f, 1.238919f);
	ADD_TO_VOLUME_SET(uVar1, uVar8);
	uVar9 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_7", 3, 73.77852f, 73.4857f, 2290.221f, 0.0f, 67.02595f, 0.0f, 1.684196f, 3.050434f, 1.684196f);
	ADD_TO_VOLUME_SET(uVar1, uVar9);
	uVar10 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_8", 3, 98.2511f, 74.52679f, 2344.97f, 0.0f, 28.12626f, 0.0f, 0.6678761f, 0.3214595f, 0.6678761f);
	ADD_TO_VOLUME_SET(uVar1, uVar10);
	uVar11 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_9", 3, 58.61261f, 71.9895f, 2356.374f, 0.0f, 108.4973f, 0.0f, 4.048919f, 6.348159f, 4.048919f);
	ADD_TO_VOLUME_SET(uVar1, uVar11);
	uVar12 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_10", 3, 130.1538f, 74.16968f, 2289.688f, 0.0f, 323.1199f, 0.0f, 0.8092422f, 1.267242f, 0.8092422f);
	ADD_TO_VOLUME_SET(uVar1, uVar12);
	uVar13 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_11", 3, 80.50367f, 74.24982f, 2310.526f, 0.0f, 32.51496f, 0.0f, 1.238919f, 1.591931f, 1.238919f);
	ADD_TO_VOLUME_SET(uVar1, uVar13);
	uVar14 = CREATE_VOLUME_IN_LAYOUT(cLocal_174, "SpawnVol_12", 3, 63.54552f, 71.9895f, 2371.119f, 0.0f, 108.4973f, 0.0f, 3.022411f, 6.348159f, 3.022411f);
	ADD_TO_VOLUME_SET(uVar1, uVar14);
	return 1;
}

int Function_149(int iParam0) //Position: 0x7286 / 29318
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	var uVar42;
	var uVar43;
	var uVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	var uVar52;
	var uVar53;
	var uVar54;
	var uVar55;
	var uVar56;
	var uVar57;
	var uVar58;
	var uVar59;
	
	Function_145(4, 1);
	uVar0 = uVar0;
	Local_172 = iParam0;
	Local_172.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_172, "Defense_Volume", 3, -823.6151f, 93.8091f, 2431.115f, 0.0f, 20.0f, 0.0f, 23.24967f, 6.822145f, 23.24967f);
	uVar1 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "SpawnVolGroup_set");
	uVar2 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_0", 3, -817.7644f, 92.36078f, 2356.241f, 0.0f, 257.614f, 0.0f, 0.6626928f, 0.7619622f, 0.6626928f);
	ADD_TO_VOLUME_SET(uVar1, uVar2);
	uVar3 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_1", 3, -797.9971f, 92.60523f, 2370.066f, 0.0f, 50.56062f, 0.0f, 0.6626928f, 0.7619622f, 0.6626928f);
	ADD_TO_VOLUME_SET(uVar1, uVar3);
	uVar4 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_2", 3, -942.0309f, 90.35291f, 2474.402f, 0.0f, 188.858f, 0.0f, 0.6626928f, 0.7619622f, 0.6626928f);
	ADD_TO_VOLUME_SET(uVar1, uVar4);
	uVar5 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_3", 3, -956.8411f, 90.71284f, 2431.56f, 0.0f, 21.9239f, 0.0f, 0.6626928f, 0.7619622f, 0.6626928f);
	ADD_TO_VOLUME_SET(uVar1, uVar5);
	uVar6 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_4", 3, -863.5199f, 91.35687f, 2364.794f, 0.0f, -58.96709f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar6);
	uVar7 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_5", 3, -877.2281f, 91.35687f, 2393.228f, 0.0f, -144.8857f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar7);
	uVar8 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_6", 3, -881.7861f, 91.35687f, 2396.0f, 0.0f, -143.6582f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar8);
	uVar9 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_7", 3, -900.0001f, 90.35291f, 2437.428f, 0.0f, 17.82667f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar9);
	uVar10 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_8", 3, -898.0054f, 91.35687f, 2405.104f, 0.0f, 210.8967f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar10);
	uVar11 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_9", 3, -902.5246f, 91.35687f, 2408.0f, 0.0f, -148.5523f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar11);
	uVar12 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_10", 3, -858.9274f, 90.35294f, 2466.075f, 0.0f, -159.9448f, 0.0f, 0.8132938f, 0.9351226f, 7.009917f);
	ADD_TO_VOLUME_SET(uVar1, uVar12);
	uVar13 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_11", 3, -839.5899f, 92.54645f, 2370.257f, 0.0f, 3.767457f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar13);
	uVar14 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_12", 3, -911.3191f, 90.35291f, 2442.739f, 0.0f, 15.93598f, 0.0f, 0.6577268f, 0.7562522f, 0.6577268f);
	ADD_TO_VOLUME_SET(uVar1, uVar14);
	uVar15 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_13", 3, -866.2332f, 91.35687f, 2360.0f, 0.0f, -62.59444f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar15);
	uVar16 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_14", 3, -803.8776f, 92.56953f, 2376.849f, 0.0f, -105.2951f, 0.0f, 1.801808f, 0.9351226f, 1.801808f);
	ADD_TO_VOLUME_SET(uVar1, uVar16);
	uVar17 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_15", 3, -871.1148f, 91.35687f, 2352.721f, 0.0f, -74.46162f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar17);
	uVar18 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_16", 3, -906.3019f, 90.35291f, 2440.0f, 0.0f, 21.22196f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar18);
	uVar19 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_17", 3, -888.0756f, 91.07147f, 2433.381f, 0.0f, 108.0659f, 0.0f, 0.5904461f, 0.678893f, 0.5904461f);
	ADD_TO_VOLUME_SET(uVar1, uVar19);
	uVar20 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_18", 3, -954.3661f, 90.35291f, 2420.0f, 0.0f, 129.1342f, 0.0f, 1.156655f, 1.329918f, 1.156655f);
	ADD_TO_VOLUME_SET(uVar1, uVar20);
	uVar21 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_19", 3, -864.14f, 90.35291f, 2451.645f, 0.0f, 22.32719f, 0.0f, 0.7483366f, 0.860435f, 2.703511f);
	ADD_TO_VOLUME_SET(uVar1, uVar21);
	uVar22 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_20", 3, -846.5788f, 90.35291f, 2470.348f, 0.0f, 145.6762f, 0.0f, 1.305717f, 0.9351226f, 1.305717f);
	ADD_TO_VOLUME_SET(uVar1, uVar22);
	uVar23 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_21", 3, -903.887f, 90.35291f, 2440.319f, 0.0f, 14.41094f, 0.0f, 0.7432537f, 0.8545907f, 0.7432537f);
	ADD_TO_VOLUME_SET(uVar1, uVar23);
	uVar24 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_22", 3, -843.2527f, 90.35291f, 2452.484f, 0.0f, -233.0104f, 0.0f, 1.578806f, 0.9351226f, 1.578806f);
	ADD_TO_VOLUME_SET(uVar1, uVar24);
	uVar25 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_23", 3, -852.3418f, 90.35294f, 2454.473f, 0.0f, 101.1046f, 0.0f, 1.396349f, 0.8413346f, 1.469087f);
	ADD_TO_VOLUME_SET(uVar1, uVar25);
	uVar26 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_24", 3, -830.5043f, 92.54638f, 2358.676f, 0.0f, 13.15314f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar26);
	uVar27 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_25", 3, -864.6239f, 91.63651f, 2381.855f, 0.0f, 91.59521f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar27);
	uVar28 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_26", 3, -823.1486f, 92.36078f, 2389.426f, 0.0f, -12.68404f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar28);
	uVar29 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_27", 3, -867.1241f, 90.35291f, 2444.078f, 0.0f, -159.008f, 0.0f, 0.8132938f, 0.9351226f, 3.754489f);
	ADD_TO_VOLUME_SET(uVar1, uVar29);
	uVar30 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_28", 3, -913.8144f, 90.35291f, 2442.85f, 0.0f, 34.00362f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar30);
	uVar31 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_29", 3, -889.8019f, 91.35687f, 2400.663f, 0.0f, -147.6535f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar31);
	uVar32 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_30", 3, -838.7493f, 90.35291f, 2465.923f, 0.0f, -70.00797f, 0.0f, 0.6870878f, 0.7900114f, 0.6870878f);
	ADD_TO_VOLUME_SET(uVar1, uVar32);
	uVar33 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_31", 3, -771.4444f, 93.36469f, 2398.056f, 0.0f, -38.06047f, 0.0f, 1.958284f, 0.9351226f, 1.958284f);
	ADD_TO_VOLUME_SET(uVar1, uVar33);
	uVar34 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_32", 3, -875.3961f, 91.36105f, 2344.317f, 0.0f, -55.93968f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar34);
	uVar35 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_33", 3, -878.7861f, 91.07147f, 2430.055f, 0.0f, -246.014f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar35);
	uVar36 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_34", 3, -964.7426f, 90.35291f, 2393.901f, 0.0f, 84.48253f, 0.0f, 0.6626928f, 0.7619622f, 0.6626928f);
	ADD_TO_VOLUME_SET(uVar1, uVar36);
	uVar37 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_35", 3, -830.1868f, 92.36078f, 2387.998f, 0.0f, 9.239779f, 0.0f, 0.8132938f, 0.9351226f, 0.8132938f);
	ADD_TO_VOLUME_SET(uVar1, uVar37);
	uVar38 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_36", 3, -745.0301f, 92.361f, 2440.354f, 0.0f, -101.2035f, 0.0f, 2.182904f, 2.689942f, 2.182904f);
	ADD_TO_VOLUME_SET(uVar1, uVar38);
	uVar39 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_37", 3, -815.9114f, 93.42899f, 2327.169f, 0.0f, -372.8771f, 0.0f, 3.347799f, 5.147401f, 3.347799f);
	ADD_TO_VOLUME_SET(uVar1, uVar39);
	uVar40 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_38", 3, -878.152f, 90.75146f, 2492.801f, 0.0f, -223.7806f, 0.0f, 4.754608f, 2.689942f, 4.754608f);
	ADD_TO_VOLUME_SET(uVar1, uVar40);
	uVar41 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_39", 3, -853.1545f, 90.75146f, 2509.17f, 0.0f, -223.7806f, 0.0f, 4.192278f, 2.689942f, 4.192278f);
	ADD_TO_VOLUME_SET(uVar1, uVar41);
	uVar42 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_40", 3, -858.5275f, 90.75146f, 2491.592f, 0.0f, -223.7806f, 0.0f, 4.192278f, 2.689942f, 4.192278f);
	ADD_TO_VOLUME_SET(uVar1, uVar42);
	uVar43 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_41", 3, -871.7704f, 90.75146f, 2509.12f, 0.0f, -223.7806f, 0.0f, 4.192278f, 2.689942f, 4.192278f);
	ADD_TO_VOLUME_SET(uVar1, uVar43);
	uVar44 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_42", 3, -827.3336f, 90.21899f, 2501.808f, 0.0f, -182.4503f, 0.0f, 6.387031f, 2.689942f, 6.472105f);
	ADD_TO_VOLUME_SET(uVar1, uVar44);
	uVar45 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_43", 3, -821.9771f, 99.18549f, 2544.449f, 0.0f, -168.3465f, 0.0f, 6.387031f, 2.689942f, 6.472105f);
	ADD_TO_VOLUME_SET(uVar1, uVar45);
	uVar46 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_44", 3, -803.6876f, 94.55854f, 2518.386f, 0.0f, -168.3465f, 0.0f, 6.387031f, 2.689942f, 6.472105f);
	ADD_TO_VOLUME_SET(uVar1, uVar46);
	uVar47 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_45", 3, -779.0264f, 92.04891f, 2475.499f, 0.0f, -135.295f, 0.0f, 4.88823f, 2.689942f, 4.88823f);
	ADD_TO_VOLUME_SET(uVar1, uVar47);
	uVar48 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_46", 3, -778.9647f, 92.04891f, 2485.408f, 0.0f, -135.295f, 0.0f, 4.88823f, 2.689942f, 4.88823f);
	ADD_TO_VOLUME_SET(uVar1, uVar48);
	uVar49 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_47", 3, -769.1495f, 92.04891f, 2485.314f, 0.0f, -135.295f, 0.0f, 4.88823f, 2.689942f, 4.88823f);
	ADD_TO_VOLUME_SET(uVar1, uVar49);
	uVar50 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_48", 3, -768.9102f, 92.04891f, 2475.515f, 0.0f, -135.295f, 0.0f, 4.88823f, 2.689942f, 4.88823f);
	ADD_TO_VOLUME_SET(uVar1, uVar50);
	uVar51 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_49", 3, -772.1108f, 93.47188f, 2348.005f, 0.0f, -386.7786f, 0.0f, 3.864763f, 5.147401f, 3.864763f);
	ADD_TO_VOLUME_SET(uVar1, uVar51);
	uVar52 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_50", 3, -770.111f, 93.47188f, 2339.405f, 0.0f, -386.7786f, 0.0f, 3.864763f, 5.147401f, 3.864763f);
	ADD_TO_VOLUME_SET(uVar1, uVar52);
	uVar53 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_51", 3, -787.0292f, 93.47188f, 2332.507f, 0.0f, -386.7786f, 0.0f, 3.864763f, 5.147401f, 3.864763f);
	ADD_TO_VOLUME_SET(uVar1, uVar53);
	uVar54 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_52", 3, -789.4606f, 93.47188f, 2345.892f, 0.0f, -386.7786f, 0.0f, 3.864763f, 5.147401f, 3.864763f);
	ADD_TO_VOLUME_SET(uVar1, uVar54);
	uVar55 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_53", 3, -818.6615f, 93.42899f, 2333.719f, 0.0f, -372.8771f, 0.0f, 3.23241f, 5.147401f, 3.23241f);
	ADD_TO_VOLUME_SET(uVar1, uVar55);
	uVar56 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_54", 3, -746.2285f, 92.361f, 2444.275f, 0.0f, -101.2035f, 0.0f, 1.661863f, 2.689942f, 1.661863f);
	ADD_TO_VOLUME_SET(uVar1, uVar56);
	uVar57 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_55", 3, -774.6917f, 93.36469f, 2383.227f, 0.0f, 281.5919f, 0.0f, 2.164809f, 1.004039f, 2.164809f);
	ADD_TO_VOLUME_SET(uVar1, uVar57);
	uVar58 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_56", 3, -773.7627f, 93.36469f, 2378.932f, 0.0f, 281.5919f, 0.0f, 2.164809f, 1.004039f, 2.164809f);
	ADD_TO_VOLUME_SET(uVar1, uVar58);
	uVar59 = CREATE_VOLUME_IN_LAYOUT(Local_172, "SpawnVol_57", 3, -741.0922f, 92.361f, 2443.828f, 0.0f, -101.2035f, 0.0f, 2.182904f, 2.689942f, 2.182904f);
	ADD_TO_VOLUME_SET(uVar1, uVar59);
	return 1;
}

int Function_150(int iParam0) //Position: 0x81E1 / 33249
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	
	Function_145(4, 1);
	uVar0 = uVar0;
	Local_170 = iParam0;
	Local_170.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_170, "Defense_Volume", 3, -2670.229f, 35.90528f, 4254.9f, 0.0f, 20.0f, 0.0f, 26.33345f, 15.66705f, 26.33345f);
	uVar1 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "SpawnVolGroup_set");
	uVar2 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_0", 3, -2760.512f, 32.12549f, 4256f, 0.0f, 9.233223f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar2);
	uVar3 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_1", 3, -2748.588f, 32.12549f, 4251.412f, 0.0f, 46.20432f, 0.0f, 0.9022594f, 0.9034847f, 0.9022594f);
	ADD_TO_VOLUME_SET(uVar1, uVar3);
	uVar4 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_2", 3, -2737.67f, 33.12256f, 4244.289f, 0.0f, 49.67945f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar4);
	uVar5 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_3", 3, -2738.575f, 37.05106f, 4239.249f, 0.0f, 49.19656f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar5);
	uVar6 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_4", 3, -2734.75f, 36.39109f, 4227.83f, 0.0f, 34.35859f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar6);
	uVar7 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_5", 3, -2729.205f, 32.12549f, 4224.676f, 0.0f, -61.05159f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar7);
	uVar8 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_6", 3, -2721.499f, 32.27308f, 4240.707f, 0.0f, -57.00735f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar8);
	uVar9 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_7", 3, -2724.598f, 32.01712f, 4212.325f, 0.0f, 98.80845f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar9);
	uVar10 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_8", 3, -2699.351f, 32.04588f, 4209.363f, 0.0f, -86.14007f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar10);
	uVar11 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_9", 3, -2700.719f, 32.278f, 4217.393f, 0.0f, -13.28103f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar11);
	uVar12 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_10", 3, -2693.202f, 32.42036f, 4220.326f, 0.0f, -10.46397f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar12);
	uVar13 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_11", 3, -2685.337f, 37.30204f, 4222.66f, 0.0f, -12.02485f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar13);
	uVar14 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_12", 3, -2682.895f, 32.46119f, 4223.428f, 0.0f, -0.2914835f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar14);
	uVar15 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_13", 3, -2671.783f, 32.0428f, 4222.503f, 0.0f, -10.38336f, 0.0f, 0.6935719f, 0.6945138f, 0.6935719f);
	ADD_TO_VOLUME_SET(uVar1, uVar15);
	uVar16 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_14", 3, -2648.276f, 31.74105f, 4224.108f, 0.0f, 23.81742f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar16);
	uVar17 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_15", 3, -2641.641f, 30.95173f, 4246.359f, 0.0f, 187.2254f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar17);
	uVar18 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_16", 3, -2641.966f, 30.50269f, 4269.966f, 0.0f, 149.6369f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar18);
	uVar19 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_17", 3, -2657.712f, 31.26224f, 4278.634f, 0.0f, -43.77999f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar19);
	uVar20 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_18", 3, -2669.73f, 31.25181f, 4282.102f, 0.0f, -176.702f, 0.0f, 0.7241939f, 0.7251773f, 0.7241939f);
	ADD_TO_VOLUME_SET(uVar1, uVar20);
	uVar21 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_19", 3, -2650.365f, 37.47691f, 4275.292f, 0.0f, -135.0193f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar21);
	uVar22 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_20", 3, -2682.648f, 31.51851f, 4293.608f, 0.0f, 93.46996f, 0.0f, 0.9461301f, 0.9474149f, 0.9461301f);
	ADD_TO_VOLUME_SET(uVar1, uVar22);
	uVar23 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_21", 3, -2706.759f, 31.1852f, 4291.589f, 0.9350824f, -182.6491f, -1.598515f, 0.8757765f, 0.8769658f, 0.8757765f);
	ADD_TO_VOLUME_SET(uVar1, uVar23);
	uVar24 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_22", 3, -2682.453f, 31.92464f, 4286.938f, 0.0f, 88.61055f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar24);
	uVar25 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_23", 3, -2698.622f, 32.07688f, 4287.92f, 0.0f, 179.3026f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar25);
	uVar26 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_24", 3, -2719.374f, 32.82863f, 4296f, 0.0f, 90.42851f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar26);
	uVar27 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_25", 3, -2733.317f, 33.04647f, 4291.812f, 0.0f, 133.1982f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar27);
	uVar28 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_26", 3, -2753.526f, 32.66684f, 4281.099f, 0.0f, -161.4441f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar28);
	uVar29 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_27", 3, -2630.424f, 30.27378f, 4269.654f, 0.0f, 196.3942f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar29);
	uVar30 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_28", 3, -2616.55f, 30.62609f, 4256.363f, 0.0f, 248.8268f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar30);
	uVar31 = CREATE_VOLUME_IN_LAYOUT(Local_170, "SpawnVol_29", 3, -2616.329f, 29.26509f, 4243.254f, 0.0f, 264.1773f, 0.0f, 1.045797f, 1.047217f, 1.045797f);
	ADD_TO_VOLUME_SET(uVar1, uVar31);
	return 1;
}

int Function_151(int iParam0) //Position: 0x8A0A / 35338
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	
	Function_145(4, 1);
	uVar0 = uVar0;
	cLocal_169 = iParam0;
	CREATE_VOLUME_IN_LAYOUT(cLocal_169, "Defense_Volume", 3, -2166.842f, 20.91559f, 2599.401f, 0.0f, 20.0f, 0.0f, 23.66759f, 15.74754f, 23.66759f);
	uVar1 = CREATE_VOLUME_SET_IN_LAYOUT(cLocal_169, "SpawnVolGroup_set");
	uVar2 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_0", 3, -2162.351f, 16.34795f, 2521.649f, 0.0f, 0.05228467f, 0.0f, 1.541307f, 1.975699f, 1.541307f);
	ADD_TO_VOLUME_SET(uVar1, uVar2);
	uVar3 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_1", 3, -2144.51f, 16.41612f, 2535.491f, 0.0f, 297.4826f, 0.0f, 1.530316f, 1.96161f, 1.530316f);
	ADD_TO_VOLUME_SET(uVar1, uVar3);
	uVar4 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_2", 3, -2127.331f, 16.28618f, 2545.701f, 0.0f, 10.13893f, 0.0f, 1.377995f, 1.766359f, 1.377995f);
	ADD_TO_VOLUME_SET(uVar1, uVar4);
	uVar5 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_3", 3, -2106.168f, 16.06273f, 2554.168f, 0.0f, -41.25896f, 0.0f, 1.725682f, 2.212037f, 1.725682f);
	ADD_TO_VOLUME_SET(uVar1, uVar5);
	uVar6 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_4", 3, -2084.015f, 15.81276f, 2584.698f, 0.0f, -68.6739f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	ADD_TO_VOLUME_SET(uVar1, uVar6);
	uVar7 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_5", 3, -2076.0f, 16.44941f, 2604.0f, 0.0f, -61.70661f, 0.0f, 0.8652607f, 1.750756f, 1.365822f);
	ADD_TO_VOLUME_SET(uVar1, uVar7);
	uVar8 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_6", 3, -2075.648f, 16.20653f, 2625.021f, 0.0f, -88.64908f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	ADD_TO_VOLUME_SET(uVar1, uVar8);
	uVar9 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_7", 3, -2058.058f, 18.93071f, 2646.03f, 0.0f, -135.7061f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	ADD_TO_VOLUME_SET(uVar1, uVar9);
	uVar10 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_8", 3, -2104.0f, 16.00696f, 2653.806f, 0.0f, -179.9427f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	ADD_TO_VOLUME_SET(uVar1, uVar10);
	uVar11 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_9", 3, -2148f, 16.44941f, 2654.184f, 0.0f, 180.8005f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	ADD_TO_VOLUME_SET(uVar1, uVar11);
	uVar12 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_10", 3, -2190.656f, 16.40293f, 2640.169f, 0.0f, 145.4984f, 0.0f, 1.260149f, 1.615301f, 1.260149f);
	ADD_TO_VOLUME_SET(uVar1, uVar12);
	uVar13 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_11", 3, -2215.472f, 16.35969f, 2603.036f, 0.0f, 89.57423f, 0.0f, 1.62741f, 2.086068f, 1.62741f);
	ADD_TO_VOLUME_SET(uVar1, uVar13);
	uVar14 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_12", 3, -2211.47f, 16.38527f, 2572.32f, 0.0f, 108.963f, 0.0f, 1.647036f, 2.111226f, 1.647036f);
	ADD_TO_VOLUME_SET(uVar1, uVar14);
	uVar15 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_13", 3, -2206.753f, 16.16532f, 2557.132f, 0.0f, 99.86391f, 0.0f, 1.469378f, 1.883498f, 1.469378f);
	ADD_TO_VOLUME_SET(uVar1, uVar15);
	uVar16 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_14", 3, -2200f, 16.33816f, 2544f, 0.0f, 54.41577f, 0.0f, 1.631281f, 2.09103f, 1.631281f);
	ADD_TO_VOLUME_SET(uVar1, uVar16);
	uVar17 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_15", 3, -2193.606f, 16.26402f, 2558.866f, 0.0f, 4.191174f, 0.0f, 1.43347f, 1.837469f, 1.43347f);
	ADD_TO_VOLUME_SET(uVar1, uVar17);
	uVar18 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_16", 3, -2173.271f, 16.53027f, 2543.441f, 0.0f, 91.57569f, 0.0f, 1.392081f, 1.784416f, 1.392081f);
	ADD_TO_VOLUME_SET(uVar1, uVar18);
	uVar19 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_17", 3, -2144.488f, 17.16976f, 2540.982f, 0.0f, 266.9426f, 0.0f, 0.5674518f, 0.7273786f, 0.5674518f);
	ADD_TO_VOLUME_SET(uVar1, uVar19);
	uVar20 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_18", 3, -2132.972f, 17.10097f, 2545.113f, 0.0f, 0.05228467f, 0.0f, 0.6450346f, 0.8268269f, 0.6450346f);
	ADD_TO_VOLUME_SET(uVar1, uVar20);
	uVar21 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_19", 3, -2154.693f, 16.63584f, 2559.684f, 0.0f, 9.831319f, 0.0f, 0.7560618f, 0.9691452f, 0.7560618f);
	ADD_TO_VOLUME_SET(uVar1, uVar21);
	uVar22 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_20", 3, -2146.118f, 16.63344f, 2557.882f, 0.0f, 32.38064f, 0.0f, 0.7341444f, 0.9410508f, 0.7341444f);
	ADD_TO_VOLUME_SET(uVar1, uVar22);
	uVar23 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_21", 3, -2168.56f, 16.56466f, 2567.37f, 0.0f, 0.05228467f, 0.0f, 0.6201649f, 0.794948f, 0.6201649f);
	ADD_TO_VOLUME_SET(uVar1, uVar23);
	uVar24 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_22", 3, -2168.176f, 19.57925f, 2571.821f, 0.0f, 80.57937f, 0.0f, 0.6679758f, 0.8562336f, 0.6679758f);
	ADD_TO_VOLUME_SET(uVar1, uVar24);
	uVar25 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_23", 3, -2195.589f, 16.96554f, 2599.106f, 0.0f, 0.05228467f, 0.0f, 0.832998f, 1.067765f, 0.832998f);
	ADD_TO_VOLUME_SET(uVar1, uVar25);
	uVar26 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_24", 3, -2191.433f, 16.95088f, 2610.71f, 0.0f, -191.0736f, 0.0f, 0.6917561f, 0.886716f, 0.6917561f);
	ADD_TO_VOLUME_SET(uVar1, uVar26);
	uVar27 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_25", 3, -2163.903f, 16.909f, 2631.824f, 0.0f, -177.5938f, 0.0f, 0.7694689f, 0.9863309f, 0.7694689f);
	ADD_TO_VOLUME_SET(uVar1, uVar27);
	uVar28 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_26", 3, -2148.094f, 16.77384f, 2625.596f, 0.0f, 135.4297f, 0.0f, 0.8150952f, 1.044816f, 0.8150952f);
	ADD_TO_VOLUME_SET(uVar1, uVar28);
	uVar29 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_27", 3, -2142.998f, 19.90847f, 2626.977f, 0.0f, 168.0672f, 0.0f, 0.5276877f, 0.6343777f, 0.5276877f);
	ADD_TO_VOLUME_SET(uVar1, uVar29);
	uVar30 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_28", 3, -2132.26f, 16.612f, 2625.073f, 0.0f, 144.4726f, 0.0f, 1.152722f, 0.6717942f, 1.152722f);
	ADD_TO_VOLUME_SET(uVar1, uVar30);
	uVar31 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_30", 3, -2086.002f, 16.96188f, 2603.537f, 0.0f, -65.40534f, 0.0f, 0.8166552f, 1.046816f, 0.8166552f);
	ADD_TO_VOLUME_SET(uVar1, uVar31);
	uVar32 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_31", 3, -2113.162f, 16.64206f, 2584.0f, 0.0f, -89.32012f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	ADD_TO_VOLUME_SET(uVar1, uVar32);
	uVar33 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_32", 3, -2111.177f, 22.16126f, 2598.696f, 0.0f, -71.9375f, 0.0f, 1.42253f, 1.230905f, 1.42253f);
	ADD_TO_VOLUME_SET(uVar1, uVar33);
	uVar34 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_33", 3, -2143.166f, 16.86635f, 2594.939f, 0.0f, 176.6415f, 0.0f, 0.5206611f, 0.7999916f, 0.6240996f);
	ADD_TO_VOLUME_SET(uVar1, uVar34);
	uVar35 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_34", 3, -2173.487f, 16.56466f, 2567.375f, 0.0f, 0.05228467f, 0.0f, 0.6201649f, 0.794948f, 0.6201649f);
	ADD_TO_VOLUME_SET(uVar1, uVar35);
	uVar36 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_35", 3, -2194.833f, 16.95088f, 2611.279f, 0.0f, -227.0958f, 0.0f, 0.6917561f, 0.886716f, 0.6917561f);
	ADD_TO_VOLUME_SET(uVar1, uVar36);
	uVar37 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_36", 3, -2164.537f, 16.909f, 2639.31f, 0.0f, -248.3953f, 0.0f, 0.7694689f, 0.9863309f, 0.7694689f);
	ADD_TO_VOLUME_SET(uVar1, uVar37);
	uVar38 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_37", 3, -2129.216f, 16.612f, 2625.431f, 0.0f, 173.8015f, 0.0f, 1.152722f, 0.6717942f, 1.152722f);
	ADD_TO_VOLUME_SET(uVar1, uVar38);
	uVar39 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_38", 3, -2137.042f, 16.86635f, 2597.063f, 0.0f, 361.4528f, 0.0f, 0.6240996f, 0.7999916f, 0.6240996f);
	ADD_TO_VOLUME_SET(uVar1, uVar39);
	uVar40 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_39", 3, -2125.0f, 16.64206f, 2590.118f, 0.0f, -99.75868f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	ADD_TO_VOLUME_SET(uVar1, uVar40);
	uVar41 = CREATE_VOLUME_IN_LAYOUT(cLocal_169, "SpawnVol_40", 3, -2215.53f, 16.35969f, 2610.852f, 0.0f, 89.57423f, 0.0f, 1.62741f, 2.086068f, 1.62741f);
	ADD_TO_VOLUME_SET(uVar1, uVar41);
	return 1;
}

void Function_152(int iParam0) //Position: 0x94BC / 38076
{
	Function_153(&Local_201 + 28, iParam0);
	return;
}

void Function_153(var uParam0, int iParam1) //Position: 0x94CB / 38091
{
	Function_17(uParam0, iParam1);
	return;
}

void Function_154(int iParam0, bool bParam1) //Position: 0x94D8 / 38104
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = bParam1;
	return;
}

var Function_155(int iParam0) //Position: 0x94F9 / 38137
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "FRD_NO_REGION";
		
		case 0x00000000:
			return "FRD_ARM";
		
		case 0x00000001:
			return "FRD_CHU";
		
		case 0x00000002:
			return "FRD_HEN";
		
		case 0x00000003:
			return "FRD_THI";
		
		case 0x00000004:
			return "FRD_BLK";
		
		case 0x00000005:
			return "FRD_ESC";
		
		case 0x00000006:
			return "FRD_LSH";
		
		case 0x00000007:
			return "FRD_UPR";
		
		case 0xFFFFFFFE:
			return "FRD_REG_OFF_THE_CHART";
		
		default:
	}
	return "FRD_Invalid!?";
}

bool Function_156() //Position: 0x95D4 / 38356
{
	if (Function_136(1) <= 0)
	{
		return 0;
	}
	return Global_29006 != Function_136(1);
}

bool Function_157(int iParam0) //Position: 0x95EC / 38380
{
	return Function_158(iParam0);
}

int Function_158(bool bParam0) //Position: 0x95F7 / 38391
{
	return Function_351((&Global_83591 + 140)->f_56, bParam0);
}

bool Function_159() //Position: 0x960A / 38410
{
	return Function_160() == 4294967295;
}

int Function_160() //Position: 0x9615 / 38421
{
	return Global_78480.f_112;
}

bool Function_161() //Position: 0x9621 / 38433
{
	return Function_48(16384);
}

bool Function_162(bool bParam0, float fParam1) //Position: 0x962D / 38445
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	var uVar8;
	
	bVar0 = Function_612();
	iVar7 = 0;
	if (!Function_172(bVar0, 0, 1, 1, 1, 0, 0, 1, 1))
	{
		if (bParam0)
		{
			return 0;
		}
		return 1;
	}
	Function_171(bVar0);
	vVar1 = { StackVal, StackVal, Function_171(bVar0) };
	Function_170(bVar0);
	vVar4 = { StackVal, StackVal, Function_170(bVar0) };
	if (Function_168(StackVal, StackVal, vVar1))
	{
		Function_164(StackVal, StackVal, vVar1);
		vVar1 = { StackVal, StackVal, Function_164(StackVal, StackVal, vVar1) };
	}
	if (VDIST(vVar1, Global_76888[03]) < fParam1)
	{
		if (Function_163(bVar0))
		{
			uVar8 = GET_MATERIAL_AT_VECTOR(&vVar1);
			if (!(Function_351(uVar8, 1024) || Function_351(uVar8, 512)))
			{
				iVar7 = 1;
			}
		}
	}
	if (iVar7 || bParam0)
	{
		if (!bParam0)
		{
			Global_76888[13] = { StackVal, StackVal, Global_76888[03] };
			Global_76895[13] = { StackVal, StackVal, Global_76895[03] };
		}
		Global_76888[03] = { StackVal, StackVal, vVar1 };
		Global_76895[03] = { StackVal, StackVal, vVar4 };
		if (bParam0)
		{
			Global_76888[13] = { StackVal, StackVal, Global_76888[03] };
			Global_76895[13] = { StackVal, StackVal, Global_76895[03] };
		}
	}
	return 1;
}

bool Function_163(bool bParam0) //Position: 0x972F / 38703
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_ON_FOOT(bParam0))
	{
		return IS_ACTOR_ON_GROUND(bParam0);
	}
	bVar0 = GET_MOUNT(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	bVar0 = GET_VEHICLE(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	return 0;
}

vector3 Function_164(vector3 vParam0) //Position: 0x977F / 38783
{
	vector3 vVar0;
	struct<9> Var3;
	
	vVar0 = { StackVal, StackVal, vParam0 };
	if (!Function_168(StackVal, StackVal, vParam0))
	{
		return StackVal, StackVal, vParam0;
	}
	Function_167();
	vVar3 = { StackVal, StackVal, Function_167() };
	iVar6 = Function_166(StackVal, StackVal, vParam0, 0, 0, 1);
	iVar7 = 200.0f;
	if (Function_35(iVar6))
	{
		bVar8 = StackVal;
		if (IS_VOLUME_VALID(bVar8))
		{
			if (GET_OBJECT_TYPE(bVar8) == 9)
			{
				GET_VOLUME_SCALE(StackVal, &vVar3);
			}
		}
		iVar9 = (Function_101(vVar3.x, vVar3.z) + 25.0f);
		iVar7 = Function_101(iVar9, iVar7);
	}
	AMBIENT_RESET_USED_CELLS();
	AMBIENT_RESET_FILTER(1);
	if (Function_35(iVar6))
	{
		AMBIENT_SET_EXCLUSION_VOLUME(StackVal);
	}
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, iVar7);
	Function_165(0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(640, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 0.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 5.0f, 0);
	AMBIENT_SET_SLOPE_FILTER(0, 2, 3.0f);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	if (AMBIENT_GET_POINT(&vVar10, 0))
	{
		if (!Function_168(StackVal, StackVal, vVar10))
		{
			vVar0 = { StackVal, StackVal, vVar10 };
		}
	}
	return StackVal, StackVal, vVar0;
}

void Function_165(bool bParam0) //Position: 0x9883 / 39043
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

var Function_166(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x9936 / 39222
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

vector3 Function_167() //Position: 0x99D1 / 39377
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_168(vector3 vParam0) //Position: 0x99DA / 39386
{
	var uVar0[8];
	int iVar9;
	int iVar10;
	
	Function_169(&uVar0);
	iVar9 = Function_166(StackVal, StackVal, vParam0, 1, 1, 0);
	if (Function_35(iVar9))
	{
		if (StackVal == 7)
		{
			return 1;
		}
	}
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				return 1;
			}
		}
		iVar10++;
	}
	return 0;
}

void Function_169(int iParam0) //Position: 0x9A4E / 39502
{
	(*iParam0)[0] = Global_30640[2];
	(*iParam0)[1] = Global_30658[0];
	(*iParam0)[2] = Global_30658[3];
	(*iParam0)[3] = Global_30658[2];
	(*iParam0)[4] = Global_30679[1];
	(*iParam0)[5] = Global_30668[2];
	(*iParam0)[6] = Global_30685[2];
	(*iParam0)[7] = Global_30685[1];
	return;
}

vector3 Function_170(bool bParam0) //Position: 0x9AAC / 39596
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

vector3 Function_171(bool bParam0) //Position: 0x9AD3 / 39635
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_172(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x9AE4 / 39652
{
	int iVar0;
	
	if (bParam1)
	{
		Function_153(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_153(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_153(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_153(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_153(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_153(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_153(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_153(&iVar0, 1048576);
	}
	return Function_338(bParam0, iVar0);
}

bool Function_173(int iParam0, float fParam1) //Position: 0x9B53 / 39763
{
	if (Function_575(iParam0))
	{
		if (Function_585(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_174(int iParam0, bool bParam1) //Position: 0x9B6F / 39791
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	vector3 vVar10;
	int iVar13;
	
	if (Function_277())
	{
		bVar0 = false;
		if (Function_278(4))
		{
			*bParam1 = 9;
			Function_571(8);
			Function_571(32);
			Function_72(4);
		}
		if (Function_276(bParam1))
		{
			if (Function_575(iParam0))
			{
				if (Function_585(iParam0) > 7.215f)
				{
					if (VDIST(Global_76888[03], Global_76888[13]) > 5.0f)
					{
						vVar1.x = ((SQRT(RAND_FLOAT_RANGE(0.0f, 1.0f)) * 20.0f) + 15.0f);
						ROTATE_VECTOR_XZ(&vVar1, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
						vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Global_76888[03], vVar1, StackVal) };
						if (FIND_GROUND_INTERSECTION(&vVar1, 10.0f, &vVar4, &uVar7))
						{
							Global_76888[13] = { StackVal, StackVal, vVar4 };
							vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_76888[13], Global_76888[03], StackVal) };
							Global_76895[13].f_4 = UNK_0x9C40E671(&vVar10);
							Global_76895[13] = 0.0f;
							Global_76895[13].f_8 = 0.0f;
						}
					}
					Global_76888[03] = { StackVal, StackVal, Global_76888[13] };
					Global_76895[03] = { StackVal, StackVal, Global_76895[13] };
					Function_49(iParam0);
				}
			}
		}
		else if (Function_275(bParam1))
		{
			bVar0 = true;
		}
		iVar13 = Function_175(bParam1);
		if (bVar0)
		{
			if (iVar13 != 0)
			{
				Function_610(iParam0);
			}
		}
	}
	else
	{
		*bParam1 = 0;
		Function_39(bParam1, 0);
	}
	return;
}

int Function_175(bool bParam0) //Position: 0x9CBD / 40125
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = Function_612();
	bVar1 = IS_ACTOR_VALID(bVar0);
	if (bVar1)
	{
		bVar2 = IS_ACTOR_ALIVE(bVar0);
	}
	else
	{
		bVar2 = false;
	}
	if (IS_SCRIPT_VALID(Global_78617.f_28))
	{
		bParam0->f_64 = 0.0f;
	}
	else
	{
		bParam0->f_64 = Function_274((bParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_273())
	{
		if (bVar1)
		{
			switch (Function_271())
			{
				case 0x00000000:
					SET_ACTOR_FACTION(bVar0, 28);
					break;
				
				case 0x00000001:
					SET_ACTOR_FACTION(bVar0, 29);
					break;
				
				default:
					SET_ACTOR_FACTION(bVar0, 2);
					break;
				}
		}
	}
	else if (bVar1)
	{
		SET_ACTOR_FACTION(bVar0, bParam0->f_52);
	}
	if (Function_270(bParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_351(bParam0->f_44, 2) || Function_351(bParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					if (Function_269() && IS_PS3())
					{
						bParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 5, 0, 0, 0, 0, 4294967295, 0);
					}
					else
					{
						bParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 6, 0, 0, 0, 0, 4294967295, 0);
					}
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
					*bParam0 = 8;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
	}
	if (((Function_270(bParam0) && Function_278(4096)) && Function_68()) && !Function_668(32768))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_351(bParam0->f_44, 2) || Function_351(bParam0->f_44, 128)) && !IS_SCRIPT_VALID(Global_78617.f_28))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
				{
					bParam0->f_104 = ADD_SCRIPT_USE_CONTEXT("mp_TELEPORT", 30, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
					Function_698(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_72(4096);
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
	}
	fVar8 = Function_268();
	if (bVar1)
	{
		bVar9 = Function_267(bVar0);
	}
	switch (*bParam0)
	{
		case 0x00000000:
			if (bVar1)
			{
				bVar5 = GET_LAST_ATTACKER(bVar0);
				if (IS_ACTOR_VALID(bVar5))
				{
					bParam0->f_112 = bVar5;
				}
			}
			bParam0->f_4 = Global_29006;
			if ((Function_265(8192) || Function_351(bParam0->f_48, 512)) && !Function_19(1, 1))
			{
				iVar6 = Function_264(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_351(bParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_17(bParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_142("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_15(2, NET_GET_NET_TIME());
								Function_261(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", 1);
								Function_669(65536, 1);
							}
							else
							{
								UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
								SET_ACTOR_HEALTH(bVar0, 0.0f);
							}
						}
					}
					else
					{
						fVar7 = (NET_GET_NET_TIME() - Function_67(2));
						if (!Function_19(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_71(bParam0 + 48, 512);
							ACTOR_REPAIR_INCAPACITATION(bVar0);
							SET_PLAYER_CONTROL(0, 1, 1, 1);
							SET_ACTOR_HEALTH(bVar0, 60.0f);
							DECOR_REMOVE(bVar0, "NoRegen");
							CLEAR_ACTOR_PROOF(bVar0, 129);
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
						else if ((fVar7 <= fVar8 || iVar6 >= 0) || !bVar9)
						{
							if (!bVar9)
							{
								DECOR_SET_BOOL(bVar0, "Drowned", 1);
							}
							else
							{
								if (iVar6 < 0)
								{
								}
								DECOR_SET_BOOL(bVar0, "BledOut", 1);
							}
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							KILL_ACTOR(bVar0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
					}
				}
				else
				{
					Function_669(65536, 0);
					Function_71(bParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_669(8388608, 1);
					bParam0->f_428 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_19(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - bParam0->f_428) <= 2.0f)
					{
						Function_669(8388608, 0);
					}
				}
			}
			if (Function_260(bParam0 + 116, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_351(bParam0->f_44, 16))
					{
						Function_17(bParam0 + 48, 32);
						*bParam0 = 1;
					}
					else
					{
						Function_259(bParam0 + 116, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_71(bParam0 + 48, 32);
					*bParam0 = 1;
				}
			}
			else if (!bVar1)
			{
			}
			if (IS_OBJECT_VALID(bParam0->f_188))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0->f_188))
				{
					Function_258(bParam0->f_188, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_38(32, 1, 1);
			bParam0->f_48 = 0;
			bParam0->f_420 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(bParam0->f_168);
			Function_669(65536, 0);
			Function_669(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_351(bParam0->f_44, 8))
			{
				Function_52(0);
			}
			else if (bVar1)
			{
				bParam0->f_152 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
			}
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				SET_PLAYER_CONTROL(0, 0, 1, 0);
				if (IS_PLAYER_DEADEYE(0))
				{
					CANCEL_DEADEYE();
				}
			}
			CANCEL_TIME_WARP(0);
			UI_DISABLE("PM_Weapons");
			if (UI_ISACTIVE("SatchelTab_Weapons"))
			{
				UI_EXIT("SatchelTab_Weapons");
				UI_FOCUS("nPauseMenu");
			}
			bParam0->f_56 = 4294967295;
			bParam0->f_68 = 0.0f;
			if (Function_257(bParam0 + 116, &Global_78617 + 2648))
			{
				switch (StackVal)
				{
					case 0x00000001:
					case 0x00000002:
						if (IS_SLOT_VALID(StackVal))
						{
							bParam0->f_112 = GET_SLOT_ACTOR(StackVal);
						}
						break;
					
					case 0x00000003:
						bParam0->f_112 = "";
						break;
					
					default:
						break;
					}
			}
			Function_254(bParam0);
			*bParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_239(bParam0, bParam0->f_12 != 0);
			}
			Function_237(bParam0, 0);
			bParam0->f_64 = 0.0f;
			*bParam0 = 3;
			break;
		
		case 0x00000003:
			Function_237(bParam0, 1);
			if ((bParam0->f_12 >= 0 && bParam0->f_64 <= 4.0f) || (bParam0->f_12 < 0 && bParam0->f_64 <= 2.0f))
			{
				if (bParam0->f_12 < 0)
				{
					*bParam0 = 8;
				}
				else
				{
					*bParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			bParam0->f_64 = 0.0f;
			*bParam0 = 5;
		
		case 0x00000005:
			Function_237(bParam0, 1);
			if (bParam0->f_64 <= 2.0f)
			{
				if (Function_351(bParam0->f_44, 512))
				{
					*bParam0 = 8;
				}
				else if (bParam0->f_12 < 1)
				{
					*bParam0 = 8;
				}
				else
				{
					*bParam0 = 6;
				}
			}
			break;
		
		case 0x00000006:
			Function_237(bParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_236();
				Function_38(32, 0, 1);
				Function_45(1);
			}
			bParam0->f_64 = 0.0f;
			*bParam0 = 7;
			break;
		
		case 0x00000007:
			Function_237(bParam0, 1);
			if (bParam0->f_64 <= 4.0f)
			{
				bParam0->f_64 = 0.0f;
				*bParam0 = 8;
				Function_46();
			}
			break;
		
		case 0x00000008:
			if (Function_351(bParam0->f_44, 2))
			{
				if (Function_351(bParam0->f_44, 512))
				{
					if (!Function_351(bParam0->f_48, 4096))
					{
						Function_39(bParam0, 1);
						Function_17(bParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(bParam0->f_84))
					{
						if (!Function_19(16384, 1))
						{
							Function_39(bParam0, 0);
							Function_669(16384, 1);
							bParam0->f_84 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/Spectator/mp_spectatorMk2", 0);
						}
					}
				}
				else
				{
					if (IS_SCRIPT_VALID(bParam0->f_84))
					{
						TERMINATE_SCRIPT(bParam0->f_84);
					}
					Function_237(bParam0, 1);
				}
			}
			else
			{
				Function_237(bParam0, 1);
				bParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
				}
				*bParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_237(bParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
				if (bParam0->f_64 > 0.0f)
				{
					bParam0->f_64 = 0.0f;
				}
			}
			if (bParam0->f_64 <= 2.0f)
			{
				UI_SEND_EVENT("InTransitionComplete");
				bParam0->f_64 = 0.0f;
			}
			if (HUD_IS_FADED())
			{
				Function_45(1);
				if (IS_SCRIPT_VALID(bParam0->f_84))
				{
					TERMINATE_SCRIPT(bParam0->f_84);
				}
				Function_1();
				Function_46();
				Function_38(32, 0, 1);
				bParam0->f_424 = CREATE_VOLUME_IN_LAYOUT(Function_548(), Function_135(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(bParam0->f_424);
				*bParam0 = 10;
				bParam0->f_64 = 0.0f;
			}
			break;
		
		case 0x0000000A:
			if (bParam0->f_108 == Global_76887 || bParam0->f_64 <= 5.0f)
			{
				if (bParam0->f_64 <= 5.0f)
				{
					bParam0->f_64 = 0.0f;
				}
				if (bParam0->f_108 >= 4294967295)
				{
					STREAMING_EVICT_ACTOR(bParam0->f_108, 4294967295);
				}
				bParam0->f_108 = Global_76887;
				STREAMING_REQUEST_ACTOR(bParam0->f_108, 1, false);
			}
			else if (STREAMING_IS_ACTOR_LOADED(bParam0->f_108, 4294967295))
			{
				*bParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			bVar3 = false;
			Call_Loc(bParam0->f_176);
			iVar4 = StackVal;
			if (iVar4 == 0)
			{
				if (!Function_351(bParam0->f_48, 8))
				{
					Call_Loc(bParam0->f_164);
					Function_17(bParam0 + 48, 8);
				}
				if (Function_230(StackVal, Function_351(bParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_206(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_351(bParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else
				{
					return 0;
				}
			}
			if (iVar4 == 2)
			{
			}
			else if (iVar4 == 1)
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				if (Function_351(bParam0->f_44, 1))
				{
					Function_71(bParam0 + 44, 1);
				}
				else
				{
					Function_43(bParam0);
					Function_39(bParam0, 0);
				}
				bVar0 = Function_612();
				Function_611(bVar0);
				if (Function_351(bParam0->f_44, 32))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				SET_CAMERA_FOLLOW_ACTOR(bVar0);
				CAMERA_RESET(0);
				if (IS_OBJECT_VALID(bParam0->f_188))
				{
					DESTROY_OBJECT(bParam0->f_188);
				}
				Global_62993 = 0;
				if (IS_VOLUME_VALID(bParam0->f_424))
				{
					REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(bParam0->f_424);
					DESTROY_VOLUME(bParam0->f_424);
				}
				bParam0->f_64 = 0.0f;
				*bParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_172(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				*bParam0 = 11;
			}
			else if (!HAS_INVENTORY_COMPONENT(bVar0))
			{
			}
			else if (!STREAMING_IS_WORLD_LOADED_PRIORITY(5) && bParam0->f_64 > 60.0f)
			{
				if (bParam0->f_64 <= 30.0f)
				{
				}
			}
			else if (Function_205(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_351(bParam0->f_44, 8))
				{
					Function_204(bParam0 + 192, 0, 1, 1);
					Function_199(bParam0 + 192);
					Function_189(&bVar0, 0, 0, 0);
					Function_189(&bVar0, 0, 0, 0);
					Function_188(bVar0);
				}
				else
				{
					Function_204(bParam0 + 192, 1, 1, 1);
				}
				bParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(bParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(bParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(bParam0->f_188, 1);
				bParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_171(bVar0);
					vVar10 = { StackVal, StackVal, Function_171(bVar0) };
					iVar13 = Function_166(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_35(iVar13))
					{
						if (StackVal || Function_68() == 7)
						{
							bParam0->f_4 = iVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_576(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_187(&(Global_29008[StackVal]), 4194304);
				}
				Function_72(32);
				*bParam0 = 13;
			}
			if (!Function_351(bParam0->f_48, 128))
			{
				Call_Loc(bParam0->f_184);
				if (StackVal)
				{
					Function_17(bParam0 + 48, 128);
					Function_71(bParam0 + 48, 8);
					*bParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (bParam0->f_64 < 60.0f)
			{
				Function_72(32);
				Function_576(1, 0, 0);
				*bParam0 = 14;
			}
			if (Function_35(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_185(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_185(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_185(&(Global_29008[StackVal]), 4194304))
						{
						}
					}
					else
					{
						*bParam0 = 14;
					}
				}
				else
				{
					iVar14 = Global_29155[StackVal10];
					if (Function_35(iVar14))
					{
						if (StackVal && (!Function_186(iVar14) && !Function_185(&(Global_29008[iVar14]), 1)) != 2)
						{
							Function_184(iVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_183();
			if (!Function_351(bParam0->f_44, 32))
			{
				if (Function_182())
				{
					iVar15 = 4294967295;
					if (bParam0->f_152 >= 4294967295)
					{
						iVar15 = GET_WEAPON_EQUIPPED(bVar0, bParam0->f_152);
						if (iVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
						}
					}
					if (iVar15 == 4294967295)
					{
						iVar15 = Function_181(bVar0, 40);
						if (iVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
						}
						else
						{
							iVar15 = Function_181(bVar0, 39);
							if (iVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
							}
							else
							{
								iVar15 = Function_181(bVar0, 42);
								if (iVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
								}
								else
								{
									iVar15 = Function_181(bVar0, 41);
									if (iVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
									}
									else
									{
										iVar15 = Function_181(bVar0, 43);
										if (iVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
										}
										else
										{
											iVar15 = Function_181(bVar0, 48);
											if (iVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
											}
											else
											{
												iVar15 = Function_181(bVar0, 46);
												if (iVar15 != 4294967295)
												{
													ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!Function_351(bParam0->f_44, 64))
				{
					HUD_FADE_IN(0.5f, 1065353216);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_669(16384, 0);
			Function_180(bVar0, !Function_351(bParam0->f_44, 96));
			Stack.Push(bVar0);
			Call_Loc(bParam0->f_160);
			bParam0->f_112 = "";
			*bParam0 = 0;
			break;
		
		case 0x0000000F:
			if (IS_SCRIPT_VALID(bParam0->f_84))
			{
				TERMINATE_SCRIPT(bParam0->f_84);
			}
			Function_237(bParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_45(1);
			}
			else if (!Function_178())
			{
				Call_Loc(bParam0->f_172);
				bParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(bParam0->f_16))
				{
					Function_177(bParam0);
					*bParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*bParam0 = 20;
				}
				Function_176(bParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_237(bParam0, 1);
			if (bParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*bParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_237(bParam0, 1);
			Call_Loc(bParam0->f_180);
			if (StackVal)
			{
				if (Function_351(bParam0->f_44, 4))
				{
					*bParam0 = 17;
				}
				else
				{
					*bParam0 = 18;
				}
			}
			break;
		
		case 0x00000011:
			Function_237(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000012:
			Function_237(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000013:
			Function_237(bParam0, 1);
			if (Function_178())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_176(int iParam0) //Position: 0xAD7E / 44414
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0f, 0f, 0, 0);
	}
	return;
}

void Function_177(int iParam0) //Position: 0xAD9A / 44442
{
	var uVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_1();
		uVar0 = "";
		if (Function_351(iParam0->f_44, 256))
		{
			if (Function_351(iParam0->f_44, 4))
			{
				uVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				uVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_105(&Global_78578 + 96))
			{
				if (FABS(Function_103(&Global_78578 + 96)) > 1.0f)
				{
				}
				else
				{
					AUDIO_MUSIC_SUSPEND(1000);
				}
			}
		}
		PRINT_BIG_FORMAT(4.0f, iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3], 2, uVar0);
		NET_LOG(1, "Player State", iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3]);
	}
	return;
}

bool Function_178() //Position: 0xAE8B / 44683
{
	return (HUD_IS_FADED() || Function_179(0));
}

int Function_179(bool bParam0) //Position: 0xAE99 / 44697
{
	bool bVar0;
	
	if (UI_ISACTIVE("MPSplash"))
	{
		if (UNK_0x9D20BDC4("networking"))
		{
			bVar0 = FLASH_GET_INT("networking", "splash.style");
			switch (bVar0)
			{
				case 0x00000000:
				case 0x00000004:
				case 0x00000005:
				case 0x00000009:
					if (FLASH_GET_INT("networking", "splashDone") == 2)
					{
						return 1;
					}
					break;
				
				default:
					break;
			}
		}
		else if (bParam0)
		{
		}
	}
	else if (bParam0)
	{
	}
	return 0;
}

void Function_180(bool bParam0, int iParam1) //Position: 0xAF3D / 44861
{
	struct<5> Var0;
	
	Function_669(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_278(256))
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 3);
	}
	else
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 2);
	}
	AI_STOP_IGNORING_ACTOR(bParam0);
	if (NET_IS_IN_SESSION() && iParam1)
	{
		Var0 = GET_LOCAL_SLOT();
		Var0.f_4 = NET_GET_NET_TIME();
		NET_SCRIPTMSG_SEND(1, 9, &Var0, 2, 1);
	}
	return;
}

int Function_181(bool bParam0, int iParam1) //Position: 0xAF93 / 44947
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_182() //Position: 0xAFA4 / 44964
{
	return !Function_68();
}

void Function_183() //Position: 0xAFAE / 44974
{
	int iVar0;
	bool bVar1;
	
	bVar1 = Function_612();
	if (IS_ACTOR_VALID(bVar1))
	{
		iVar0 = 0;
		while (iVar0 <= 39)
		{
			if (ACTOR_HAS_WEAPON(bVar1, iVar0))
			{
				SET_WEAPON_GOLD(bVar1, iVar0, Global_83823[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

void Function_184(int iParam0) //Position: 0xAFED / 45037
{
	if (!Function_35(iParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", 1);
	}
	else if (StackVal == 1)
	{
		Function_187(&(Global_29008[Global_29155[iParam010]]), 1024);
	}
	return;
}

bool Function_185(var uParam0, int iParam1) //Position: 0xB048 / 45128
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_186(int iParam0) //Position: 0xB064 / 45156
{
	if (!Function_35(iParam0))
	{
		return 1;
	}
	return Function_185(&(Global_29008[iParam0]), 4);
}

void Function_187(var uParam0, int iParam1) //Position: 0xB080 / 45184
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_188(bool bParam0) //Position: 0xB08F / 45199
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	while (iVar0 < 6)
	{
		iVar1 = GET_WEAPON_EQUIPPED(bParam0, iVar0);
		if (iVar1 != 4294967295)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, iVar1, GET_WEAPON_MAX_AMMO(iVar1));
		}
		iVar0++;
	}
	return;
}

var Function_189(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xB0C2 / 45250
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar5[17];
	bool bVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	int iVar27;
	char* cVar28[32];
	struct<5> Var36;
	
	iVar0 = 0;
	if (IS_ACTOR_LOCAL_PLAYER(*bParam0))
	{
		iVar1 = 0;
		while (iVar1 <= 40)
		{
			iVar2 = iVar1;
			if (bParam2)
			{
				switch (UNK_0xDB679ED9(iVar2))
				{
					case 0x0000002F:
					case 0x00000030:
						bVar23 = false;
						break;
					
					default:
						bVar23 = true;
						break;
				}
			}
			else
			{
				bVar23 = true;
			}
			if (bVar23)
			{
				if (ACTOR_HAS_WEAPON(*bParam0, iVar2))
				{
					iVar3 = GET_AMMO_ENUM(iVar2);
					if (Function_198(iVar3, 1))
					{
						iVar5[iVar3] = 1;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 17)
		{
			if (iVar5[iVar1])
			{
				iVar3 = iVar1;
				_ADD_AMMO_OF_TYPE(*bParam0, iVar3, TO_FLOAT(Function_197(&Global_83591 + 276, iVar3)), 1, 0);
				iVar0 = 1;
			}
			iVar1++;
		}
		switch (iParam3)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				iVar1 = 0;
				while (iVar1 <= 27)
				{
					iVar2 = (*&Global_83591 + 276)[iVar12];
					if (Function_196(iVar2))
					{
						if (Function_195(iVar2))
						{
							iVar3 = GET_AMMO_ENUM(iVar2);
							if (Function_198(iVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, iVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, iVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*bParam0, iVar2))
								{
									GIVE_WEAPON_TO_ACTOR(*bParam0, iVar2, 0.0f, 0, 0);
								}
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 0x00000002:
				iVar2 = 0;
				while (iVar2 <= 40)
				{
					if (Global_84559[iVar2])
					{
						iVar3 = GET_AMMO_ENUM(iVar2);
						if (Function_198(iVar3, 1))
						{
							bVar24 = (Function_197(&Global_83591 + 276, iVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, iVar3, 1)));
							if (bVar24 >= 0)
							{
								_ADD_AMMO_OF_TYPE(*bParam0, iVar3, TO_FLOAT(bVar24), 1, 0);
							}
							if (!ACTOR_HAS_WEAPON(*bParam0, iVar2))
							{
								GIVE_WEAPON_TO_ACTOR(*bParam0, iVar2, 0.0f, 0, 0);
							}
						}
					}
					iVar2++;
				}
				if (DECOR_GET_INT_VERBOSE(Function_548(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_548(), &cVar28, &uVar26))
						{
							Function_190(uVar26, &Var36);
							iVar3 = GET_AMMO_ENUM(Var36);
							if (Function_198(iVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, iVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, iVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*bParam0, Var36))
								{
									GIVE_WEAPON_TO_ACTOR(*bParam0, Var36, 0.0f, 0, 0);
								}
							}
						}
						iVar27++;
					}
				}
				break;
			}
	}
	if (iVar0 && iParam1)
	{
		CLEAR_STAT_MESSAGE();
		SET_STAT_MESSAGE(STRING_TO_HASH("pickup_ammo_header"), UI_GET_STRING("pickup_ammo_message"), 1084227584, 0, 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
	}
	return iVar0;
}

void Function_190(var uParam0, int iParam1) //Position: 0xB3A5 / 45989
{
	*iParam1 = Function_191(uParam0, Function_193(), 0);
	iParam1->f_4 = Function_191(uParam0, Function_193() + 8, Function_193());
	return;
}

var Function_191(var uParam0, int iParam1, int iParam2) //Position: 0xB3C8 / 46024
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_192((iParam1 - 1)), 1) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

bool Function_192(int iParam0) //Position: 0xB3E7 / 46055
{
	return SHIFT_LEFT(true, iParam0);
}

int Function_193() //Position: 0xB3F3 / 46067
{
	return Function_194(39);
}

int Function_194(int iParam0) //Position: 0xB3FE / 46078
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

bool Function_195(int iParam0) //Position: 0xB42C / 46124
{
	switch (UNK_0xDB679ED9(iParam0))
	{
		case 0x00000030:
		case 0x0000002F:
			return 1;
			break;
	}
	return 0;
}

bool Function_196(int iParam0) //Position: 0xB44E / 46158
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_197(int iParam0, int iParam1) //Position: 0xB460 / 46176
{
	if (Function_198(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_198(int iParam0, int iParam1) //Position: 0xB47A / 46202
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_199(int iParam0) //Position: 0xB48D / 46221
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_201(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_612()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_570(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_200(StackVal, Var0, 1, 1, 0);
			}
		}
	}
	if (DECOR_GET_INT_VERBOSE(Function_548(), "DLCFM_Weapon", &iVar2))
	{
		iVar4 = 0;
		while (iVar4 <= iVar2)
		{
			strcpy(&cVar5, "DLCFM_Weapon_", 32);
			straddi(&cVar5, iVar4, 32);
			if (DECOR_GET_INT_VERBOSE(Function_548(), &cVar5, &uVar3))
			{
				Function_190(uVar3, &Var13);
				Function_200(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_200(struct<5> Param0) //Position: 0xB534 / 46388
{
	bool bVar0;
	int iVar1;
	float fVar2;
	
	if (!Function_196(Param0))
	{
		return;
	}
	bVar0 = Function_612();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			iVar1 = GET_AMMO_ENUM(Param0);
			if (Function_198(iVar1, 1))
			{
				fVar2 = TO_FLOAT(StackVal);
				if (bParam2)
				{
					fVar2 = (fVar2 - _GET_AMMO_AMOUNT(bVar0, iVar1, 0));
				}
				if (fVar2 < 0.0f)
				{
					_ADD_AMMO_OF_TYPE(bVar0, iVar1, fVar2, 1, 0);
				}
			}
		}
	}
	SET_WEAPONENUM_LOCKED(Param0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, Param0, 0.0f, 0, iParam4);
}

void Function_201(int iParam0, int iParam1) //Position: 0xB5B4 / 46516
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = Function_612();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_202(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_202(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_202(23, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 23, 1.0f, 0, 0);
		}
		iVar1 = 0;
		while (iVar1 < (7 - 1))
		{
			if ((*iParam0 + 1088)[iVar1] != 4294967295)
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, (*iParam0 + 1088)[iVar1]);
			}
			iVar1++;
		}
		if (iParam0->f_1124 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1124))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1124);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (iParam0->f_1128 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1128))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1128);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (iParam0->f_1120 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1120))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1120);
			}
			else
			{
				bVar3 = true;
			}
		}
		if (bVar3)
		{
			iVar4 = Function_181(bVar2, 40);
			if (iVar4 == 4294967295)
			{
				iVar4 = Function_181(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, iVar4);
		}
	}
	return;
}

bool Function_202(int iParam0, int iParam1) //Position: 0xB731 / 46897
{
	return Function_203(iParam0, iParam1) < 4294967295;
}

int Function_203(int iParam0, int iParam1) //Position: 0xB740 / 46912
{
	int iVar0;
	
	if (!Function_196(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		if (iParam0 == (*iParam1)[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_204(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xB773 / 46963
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_612();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam1)
	{
		DELETE_ALL_INVENTORY_FROM_ACTOR(bVar0);
	}
	SETUP_ASSOCIATED_FRAGMENTS(bVar0);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		Function_200(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_205(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB7BE / 47038
{
	float fVar0;
	bool bVar1;
	
	if (Function_70() || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= bParam2)
		{
			DECOR_REMOVE(bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

bool Function_206(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0xB85B / 47195
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_612();
	Function_54();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_229();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_338(bVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam0, vParam3.y, 1, 1, 1);
	}
	else
	{
		bVar9 = Function_278(256);
		if (bVar9)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 3);
		}
		else if (!bParam6 && iParam7)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 0);
		}
		bVar0 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(bVar1, bVar0, "player", Global_76887, vParam0, vParam3, 0);
		if (bVar9 || (!bParam6 && iParam7))
		{
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	SET_CAMERA_FOLLOW_ACTOR(bVar0);
	CAMERA_RESET(0);
	SET_PLAYER_POSTURE(0, 0, 0);
	if (!bParam6)
	{
		Function_226(bVar0, 0);
		Function_208();
		Function_207(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			iVar14 = Function_166(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_35(iVar14))
			{
				Var10.f_4 = iVar14;
			}
			else
			{
				Var10.f_4 = Global_29006;
			}
			NET_SCRIPTMSG_SEND(2, 8, &Var10, 4, 1);
			NET_SCRIPTMSG_SEND(3, 8, &Var10, 4, 1);
		}
	}
	return 1;
}

void Function_207(char* cParam0, vector3 vParam1) //Position: 0xB9D2 / 47570
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_208() //Position: 0xBA10 / 47632
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_225(iVar1))
		{
			uVar2 = Function_224(iVar1);
			Function_209(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_209(int iParam0, bool bParam1) //Position: 0xBA42 / 47682
{
	if (!Function_225(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_223(222, Global_26401[iParam0], 0);
		if (Function_222(222) <= 0)
		{
			Function_210(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_210((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_223((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_223(222, bParam1, 0);
	}
	return;
}

int Function_210(int iParam0, bool bParam1, bool bParam2) //Position: 0xBACB / 47819
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
		Function_221(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_220(iParam0);
	if (bParam2)
	{
		Function_211(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_211(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xBD66 / 48486
{
	char* cVar0;
	char* cVar1[32];
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_219(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_218(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_218(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_216(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_213(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_342(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(iParam7), &Global_35278[iParam020] + 16, Function_212(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_135(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_212(int iParam0) //Position: 0xC395 / 50069
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

void Function_213(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xC3A6 / 50086
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_215(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_214(Function_215(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_214(int iParam0, int iParam1) //Position: 0xC40B / 50187
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_215(int iParam0, int iParam1) //Position: 0xC41D / 50205
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_216(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xC42F / 50223
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
	if (((Function_217(iParam0) != 19 || Function_217(iParam0) != 17) || Function_217(iParam0) != 10) || Function_217(iParam0) != 9)
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

int Function_217(int iParam0) //Position: 0xC55F / 50527
{
	return Global_35278[iParam020].f_48;
}

float Function_218(int iParam0) //Position: 0xC56E / 50542
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_219(int iParam0) //Position: 0xC5A7 / 50599
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_220(int iParam0) //Position: 0xC5E4 / 50660
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

int Function_221(int iParam0, float fParam1, bool bParam2) //Position: 0xC77E / 51070
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

int Function_222(int iParam0) //Position: 0xC9C2 / 51650
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_223(int iParam0, bool bParam1, int iParam2) //Position: 0xCA03 / 51715
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
	Function_220(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_211(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_224(int iParam0) //Position: 0xCBFE / 52222
{
	if (!Function_225(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_225(int iParam0) //Position: 0xCC16 / 52246
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_226(bool bParam0, bool bParam1) //Position: 0xCC2B / 52267
{
	var uVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_228(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_265(8192) && !Function_19(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_68())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 4, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 13, 5.0f);
	}
	if (bParam1)
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, 22, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 4, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 8, 1.0f, 0, 1);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 7, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 8, 20.0f, 0);
	}
	uVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	SET_LOCAL_PLAYER_VOICE(uVar0);
	SET_LOCAL_PLAYER_PAIN_VOICE(uVar0);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(bParam0);
	SET_DEADEYE_INVULNERABILITY(0, 0);
	SET_DEADEYE_DAMAGE_SCALING(0, 1.0f);
	SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_227())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_227() //Position: 0xCD33 / 52531
{
	return Function_351(Global_79962, 2048);
}

var Function_228(int iParam0) //Position: 0xCD43 / 52547
{
	int iVar0;
	
	iVar0 = "";
	if (((iParam0 > 837 && iParam0 < 971) && iParam0 > 972) && iParam0 < 975)
	{
		return iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(iParam0);
	return iVar0;
}

void Function_229() //Position: 0xCD78 / 52600
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

bool Function_230(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCD8D / 52621
{
	vector3 vVar0;
	vector3 vVar3;
	struct<5> Var6;
	vector3 vVar12;
	bool bVar15;
	char* cVar16[64];
	bool bVar32;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	GENERATE_RANDOM_POINT_IN_VOLUME(bParam0, &vVar0);
	Function_234(bParam0);
	Var6 = { StackVal, StackVal, Function_234(bParam0) };
	vVar0.f_4 = StackVal;
	GET_VOLUME_SCALE(bParam0, &Var9);
	if (!FIND_GROUND_INTERSECTION(StackVal, &vVar0, &vVar3, &Var6))
	{
		vVar3 = { StackVal, StackVal, vVar0 };
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar12);
	if (!bParam1)
	{
		vVar12.f_4 = (vVar12.y + 180.0f);
	}
	bVar15 = GET_OBJECT_OWNER(bParam0);
	if (IS_OBJECT_VALID(bVar15))
	{
		strcpy(&cVar16, GET_OBJECT_NAME(bParam0), 64);
		stradd(&cVar16, "_FF", 64);
		bVar32 = FIND_OBJECT_IN_OBJECT(bVar15, &cVar16);
		if (IS_OBJECT_VALID(bVar32))
		{
			Function_233(bVar32);
			vVar12.f_4 = Function_231(StackVal, StackVal, StackVal, StackVal, vVar3, Function_233(bVar32));
		}
	}
	return Function_206(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_231(vector3 vParam0, vector3 vParam3) //Position: 0xCE44 / 52804
{
	var uVar0;
	
	Function_232(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_232(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xCE5E / 52830
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_233(bool bParam0) //Position: 0xCE81 / 52865
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

vector3 Function_234(bool bParam0) //Position: 0xCEA8 / 52904
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_235(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xCEB9 / 52921
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

void Function_236() //Position: 0xCEE2 / 52962
{
	if (!Function_48(8))
	{
		Function_47();
	}
	Function_38(8, 1, 1);
	return;
}

void Function_237(bool bParam0, int iParam1) //Position: 0xCEFB / 52987
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (!IS_OBJECT_VALID(bParam0->f_120))
	{
		return;
	}
	if (Function_351(bParam0->f_48, 256) || Function_351(bParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_351(bParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(bParam0->f_120);
	if (!Function_338(bParam0->f_112, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(bParam0->f_120, true);
			Function_71(bParam0 + 48, 1024);
			if (iVar0 <= 5)
			{
			}
			else
			{
				DETACH_CAMERASHOT(bParam0->f_128);
				DETACH_CAMERASHOT(bParam0->f_132);
			}
			return;
		}
	}
	if (iVar0 > 4 && iParam1)
	{
		Function_238(bParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_351(bParam0->f_48, 8192))
		{
			Function_17(bParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			if (IS_ACTOR_PLAYER(bParam0->f_112))
			{
				Global_78617.f_48 = GET_ACTOR_SLOT(bParam0->f_112);
				Function_698(1048576);
			}
			if (IS_OBJECT_VALID(bParam0->f_124) && IS_OBJECT_VALID(bParam0->f_128))
			{
				GET_POSITION(bParam0->f_112, &vVar16);
				vVar1 = { StackVal, StackVal, vVar16 };
				GET_CAMERASHOT_POSITION(bParam0->f_124, &vVar10);
				vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar10, vVar1, StackVal) };
				vVar13.f_4 = 0.0f;
				VNORMALIZE(&vVar13);
				ATTACH_CAMERASHOT(StackVal, StackVal, bParam0->f_128, bParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				ATTACH_CAMERASHOT(StackVal, StackVal, bParam0->f_132, bParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_128, bParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_132, bParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_128, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_132, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_128, bParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_132, bParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_128, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_132, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(bParam0->f_128, bParam0->f_112, 243);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(bParam0->f_132, bParam0->f_112, 243);
			}
			SET_CAMERA_FOLLOW_ACTOR_EX(bParam0->f_112, 1);
		}
	}
	return;
}

void Function_238(int iParam0) //Position: 0xD0F6 / 53494
{
	var uVar0;
	vector3 vVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1);
	GET_CAMERASHOT_DIRECTION(iParam0->f_124, &vVar1);
	SET_CAMERASHOT_DIRECTION(uVar0, vVar1, 1);
	GET_CAMERASHOT_POSITION(iParam0->f_124, &vVar1);
	SET_CAMERASHOT_POSITION(uVar0, vVar1);
	SET_CAMERASHOT_FOV(uVar0, GET_CAMERASHOT_FOV(iParam0->f_124));
	return;
}

void Function_239(int iParam0, int iParam1) //Position: 0xD137 / 53559
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	char* cVar7;
	vector3 vVar8;
	vector3 vVar11;
	
	bVar0 = Function_612();
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_171(bVar0);
		vVar1 = { StackVal, StackVal, Function_171(bVar0) };
		Function_170(bVar0);
		vVar4 = { StackVal, StackVal, Function_170(bVar0) };
	}
	else
	{
		vVar1 = { StackVal, StackVal, Global_34574 };
		GET_CAMERA_CHANNEL_DIRECTION(&vVar4, 0);
		vVar4 = { 0.0f, UNK_0x9C40E671(&vVar4), 0.0f };
	}
	cVar7 = Function_548();
	iParam0->f_156 = FIND_OBJECT_IN_LAYOUT(cVar7, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(iParam0->f_156))
	{
		SET_OBJECT_POSITION(iParam0->f_156, vVar1);
		SET_OBJECT_ORIENTATION(iParam0->f_156, vVar4);
	}
	else
	{
		iParam0->f_156 = CREATE_POINT_IN_LAYOUT(bVar7, "DeathAnchorPoint", vVar1, vVar4);
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(iParam0->f_112))
	{
		iParam0->f_120 = Function_250(bVar7, 0, iParam0->f_156, 1, 0, 0);
		Function_17(iParam0 + 48, 256);
	}
	else
	{
		Function_171(iParam0->f_112);
		vVar8 = { StackVal, StackVal, Function_171(iParam0->f_112) };
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar8, StackVal) };
		VNORMALIZE(&vVar11);
		iParam0->f_120 = Function_242(bVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_241(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_17(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar8, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar11, 1);
	}
	Function_240(iParam0->f_120);
	return;
}

void Function_240(int iParam0) //Position: 0xD2CC / 53964
{
	Function_229();
	Global_63118 = iParam0;
	return;
}

void Function_241(bool bParam0, bool bParam1) //Position: 0xD2DA / 53978
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_242(char* cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xD2EF / 53999
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_135(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_243(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_243(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xD371 / 54129
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_249(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_248(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_247(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_246(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_245(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_244(&uVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.15f, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 0.65f, 1, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0.1f, 2), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 1, 2, 0.25f, 3, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 1.5f, 4), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 0.35f, 5, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 4, 5, 0.35f, 6, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 2.0f, 7), 1, 0);
}

void Function_244(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xD48C / 54412
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43.16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller");
}

void Function_245(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xD5A1 / 54689
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43.16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller_pre");
}

void Function_246(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xD6BA / 54970
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.5f, 0.020286f, -0.644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller_pst");
}

void Function_247(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xD7C4 / 55236
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.5f, 0.020286f, -0.644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller");
}

void Function_248(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xD8CA / 55498
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 3.512409f, 1.385313f, 11.99437f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.000168f, 1.399967f, 0.006852f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_249(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xD97A / 55674
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 6.044836f, 1.844389f, 8.871694f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.125951f, 1.612884f, -0.415524f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_250(char* cParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xDA31 / 55857
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_135(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "nMPSuicide", 2, 1);
	}
	Function_251(&bVar0, uParam2);
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

void Function_251(var uParam0, int iParam1) //Position: 0xDAA8 / 55976
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_253(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_252(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_252(var uParam0, bool bParam1) //Position: 0xDB14 / 56084
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 50.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.221893f, 12.0f, 0.202029f };
	Function_170(bParam1);
	vVar3 = { StackVal, StackVal, Function_170(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_233(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_233(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_170(bParam1);
	vVar6 = { StackVal, StackVal, Function_170(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_233(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_233(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_253(var uParam0, bool bParam1) //Position: 0xDBD6 / 56278
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.17905f, 10.0f, 0.125767f };
	Function_170(bParam1);
	vVar3 = { StackVal, StackVal, Function_170(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_233(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_233(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_170(bParam1);
	vVar6 = { StackVal, StackVal, Function_170(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_233(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_233(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_254(int iParam0) //Position: 0xDC98 / 56472
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	struct<16> Var4;
	vector3 vVar20;
	bool bVar23;
	
	if (!Function_351(iParam0->f_48, 2048))
	{
		Function_17(iParam0 + 48, 2048);
		bVar0 = true;
		bVar1 = false;
		bVar3 = false;
		if (!IS_ACTOR_VALID(iParam0->f_112))
		{
			bVar3 = true;
		}
		else if (IS_ACTOR_PLAYER(iParam0->f_112))
		{
			if (IS_SLOT_VALID(StackVal))
			{
				iVar2 = (&Global_78617 + 2604)->f_12;
				if (Function_196(iVar2) && RAND_INT_RANGE(0, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_255(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_112("MPSplashItem.s1"));
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (IS_ACTOR_HUMAN(iParam0->f_112))
		{
			UI_SET_TEXT("MPSplashItem.s1", GET_ACTOR_ENUM_STRING(iParam0->f_112));
			iVar2 = GET_WEAPON_IN_HAND(iParam0->f_112);
			bVar1 = true;
		}
		else
		{
			bVar3 = true;
		}
		if (bVar3)
		{
			UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
			UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
		}
		if (bVar0)
		{
			UI_INCLUDE("MPSplashItem.s0");
			UI_INCLUDE("MPSplashItem.s1");
			UI_ENTER("MPSplash");
			UI_EXIT("FameText");
			UI_EXCLUDE("FameText");
			UI_EXIT("NotorietyMeter");
			UI_EXCLUDE("NotorietyMeter");
			UI_EXIT("SplashObjective");
			UI_EXCLUDE("SplashObjective");
			UI_SET_STYLE("MPSplashTitle", 10);
			if (bVar1)
			{
				if (Function_196(iVar2))
				{
					if (iVar2 == 22)
					{
						UI_SET_TEXT("MPSplashItem.s0", GET_WEAPON_DISPLAY_NAME(iVar2));
					}
					else
					{
						GET_POSITION(iParam0->f_112, &vVar20);
						bVar23 = CEIL((VDIST(vVar20, *(&Global_78617 + 2604 + 16)) * 1.093613f));
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "%s - %s %s", UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(iVar2)), I2STR(bVar23), UI_GET_STRING("stat_yd"));
						UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
					}
				}
				else
				{
					UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				}
			}
		}
	}
	return;
}

struct<64> Function_255(bool bParam0) //Position: 0xDFBE / 57278
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_269())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_256();
	}
	if (!Function_87(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_87(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_256() //Position: 0xE064 / 57444
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_257(var uParam0, int iParam1) //Position: 0xE075 / 57461
{
	if (Function_260(uParam0, iParam1))
	{
		Function_259(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_258(var uParam0, bool bParam1) //Position: 0xE08F / 57487
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_548(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(iVar0, uParam0);
	bVar1 = START_OBJECT_ITERATOR(iVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &iVar2))
		{
			if (Function_196(iVar2))
			{
				SET_WEAPON_GOLD(bParam1, iVar2, Global_83823[iVar2]);
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(iVar0);
	}
	EVENT_TRAP_CLEAR_EVENTS(uParam0);
	EVENT_TRAP_CLEAR_TRAP_FLAG(uParam0);
	DESTROY_ITERATOR(iVar0);
	return;
}

void Function_259(var uParam0, int iParam1) //Position: 0xE10B / 57611
{
	*uParam0 = *iParam1;
	return;
}

bool Function_260(var uParam0, int iParam1) //Position: 0xE117 / 57623
{
	return *uParam0 == *iParam1;
}

void Function_261(var uParam0, int iParam1) //Position: 0xE124 / 57636
{
	Function_262(uParam0, (Function_263(uParam0) + iParam1));
	return;
}

void Function_262(int iParam0, int iParam1) //Position: 0xE137 / 57655
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_263(int iParam0) //Position: 0xE160 / 57696
{
	return (*&Global_78480 + 132)[iParam0];
}

var Function_264(int iParam0, bool bParam1, int iParam2) //Position: 0xE170 / 57712
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_87(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_85(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_265(int iParam0) //Position: 0xE1B7 / 57783
{
	return Function_266(&Global_79349, iParam0);
}

int Function_266(var uParam0, bool bParam1) //Position: 0xE1C6 / 57798
{
	return Function_351(uParam0->f_44, bParam1);
}

int Function_267(int iParam0) //Position: 0xE1D5 / 57813
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

var Function_268() //Position: 0xE1EB / 57835
{
	if (Function_351(Global_79349.f_44, 4194304))
	{
		return 180.0f;
	}
	if (Function_351(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

bool Function_269() //Position: 0xE221 / 57889
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_270(bool bParam0) //Position: 0xE22F / 57903
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

int Function_271() //Position: 0xE241 / 57921
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_272(GET_LOCAL_SLOT(), 1, 0);
}

int Function_272(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE258 / 57944
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_87(bParam0))
			{
				if (!Function_85(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_273() //Position: 0xE29C / 58012
{
	return Function_265(2);
}

var Function_274(int iParam0, int iParam1) //Position: 0xE2A6 / 58022
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_275(int iParam0) //Position: 0xE2B9 / 58041
{
	return *iParam0 != 11;
}

bool Function_276(bool bParam0) //Position: 0xE2C5 / 58053
{
	return *bParam0 != 1;
}

bool Function_277() //Position: 0xE2D0 / 58064
{
	return Function_278(1);
}

bool Function_278(int iParam0) //Position: 0xE2DA / 58074
{
	return Function_25(Global_78617.f_52, iParam0);
}

void Function_279() //Position: 0xE2EB / 58091
{
	NET_LOG(1, "FREEMODE", "Enabling the Ambient World", 0, 0, 0, 0);
	Function_705(1);
	ENABLE_AMBIENT_SPAWNING(1);
	Function_282(6);
	Function_280(312);
	Local_286.f_508 = 1;
	return;
}

void Function_280(int iParam0) //Position: 0xE33A / 58170
{
	Function_281(&Global_28842, iParam0);
	return;
}

void Function_281(var uParam0, int iParam1) //Position: 0xE348 / 58184
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_282(int iParam0) //Position: 0xE36B / 58219
{
	Function_283(&Global_28842, iParam0);
	return;
}

void Function_283(var uParam0, int iParam1) //Position: 0xE379 / 58233
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

bool Function_284(int iParam0) //Position: 0xE394 / 58260
{
	return Function_285(&Global_28842, iParam0);
}

int Function_285(int iParam0, int iParam1) //Position: 0xE3A2 / 58274
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_286() //Position: 0xE3BE / 58302
{
	int iVar0;
	
	if (Function_287())
	{
		SET_POP_DENSITY_MULTIPLIER(0.4f);
	}
	else if (Global_3386)
	{
		SET_POP_DENSITY_MULTIPLIER(0.6f);
	}
	else if (NET_IS_IN_SESSION())
	{
		iVar0 = NET_GET_AREA_OVERLOAD_STATE_FOR_SLOT(GET_LOCAL_SLOT());
		if (iVar0 == 2)
		{
			SET_POP_DENSITY_MULTIPLIER(1.0f);
		}
		else
		{
			SET_POP_DENSITY_MULTIPLIER(0.6f);
		}
	}
	return;
}

bool Function_287() //Position: 0xE409 / 58377
{
	int iVar0;
	
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if ((Global_3386 && Global_76943[iVar096] != Global_29006) || Function_289(iVar0))
		{
			if (Function_288(iVar0) != 4294967295)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int Function_288(bool bParam0) //Position: 0xE450 / 58448
{
	return Global_76943[bParam096].f_112;
}

int Function_289(int iParam0) //Position: 0xE460 / 58464
{
	if (iParam0 > 0 || iParam0 <= 16)
	{
		return 0;
	}
	return (Global_79297 && SHIFT_LEFT(true, iParam0)) == 0;
}

void Function_290(var uParam0, int iParam1) //Position: 0xE482 / 58498
{
	Function_291(uParam0, iParam1, 59457);
	return;
}

void Function_291(var uParam0, var uParam1, int iParam2) //Position: 0xE493 / 58515
{
	if (Function_48(0x4000000))
	{
		Function_47();
		Function_38(0x4000000, 0, 1);
	}
	if (Function_48(0x10000000))
	{
		Function_47();
		Function_38(0x10000000, 0, 1);
	}
	if (Function_48(2) != Function_48(0x2000000))
	{
		Function_47();
		Function_38(0x2000000, Function_48(2), 1);
	}
	if (Function_296())
	{
		Function_295(!Function_48(16));
	}
	if (Function_48(16))
	{
		Function_292(&uParam0, &uParam1, &iParam2);
		if (Function_48(8192))
		{
			if (!Function_48(4194304))
			{
				Function_38(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_48(8388608))
			{
				Function_38(8388608, 1, 1);
				UI_HIDE("Splash_Message");
				UI_HIDE("Splash_Objective");
				UI_HIDE("Subtitle_Enabler");
				UI_EXCLUDE("Splash_Message");
				UI_EXCLUDE("Splash_Objective");
				UI_EXCLUDE("Subtitle_Enabler");
				SET_HUD_MAP_DRAW_ENABLED(0);
			}
		}
		else
		{
			Function_51();
		}
		Function_38(16384, 1, 1);
	}
	else if (!Function_48(32))
	{
		Function_51();
	}
	Function_38(32768, 0, 1);
	return;
}

void Function_292(var uParam0, var uParam1, int iParam2) //Position: 0xE62C / 58924
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_38(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_48(0x40000000);
	bVar3 = !Function_48(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_87(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_85(bVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(bVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_293(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_48(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
					}
					else
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(1);
					}
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		else if (bVar2)
		{
			if (Function_293(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		bVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

bool Function_293(bool bParam0, int iParam1, int iParam2) //Position: 0xE7A4 / 59300
{
	var uVar0;
	
	return Function_294(bParam0, iParam1, &uVar0, iParam2);
}

int Function_294(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xE7B5 / 59317
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(uParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (bParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(bParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, uParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

void Function_295(bool bParam0) //Position: 0xE81A / 59418
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_38(16384, 0, 1);
	return;
}

bool Function_296() //Position: 0xE834 / 59444
{
	return Function_48(32768);
}

int Function_297() //Position: 0xE841 / 59457
{
	return 1;
}

int Function_298(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xE848 / 59464
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* cVar7[32];
	bool bVar15;
	struct<8> Var16;
	float fVar24;
	
	Function_301(bParam1, uParam2, uParam3);
	iVar0 = Function_96(bParam0);
	iVar2 = NET_GET_GAMER_POSSE_SIZE(bParam0);
	iVar3 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar4 = (iVar2 < 1 && iVar3 != bParam0);
	if (bLocal_168)
	{
		iVar1 = (iVar2 * 10000000);
		iVar5 = 16;
		if (iVar2 >= 1)
		{
			iVar5 = (16 - iVar3) * 10;
			if (bVar4)
			{
				iVar5++;
			}
		}
		iVar1 = (iVar1 + iVar5 * 10000);
		iVar1 = (iVar1 + Function_215((CEIL(Function_102(1, bParam0)) / 1000), 9999));
	}
	else
	{
		iVar1 = FLOOR(Function_102(8, bParam0));
	}
	if (!bParam1)
	{
		Function_293(bParam0, iVar1, 0);
	}
	iVar6 = 0;
	if (Function_136(1) > 0)
	{
		strcpy(&cVar7, "", 32);
		if (Function_136(1) == Function_96(bParam0))
		{
			if (Function_85(bParam0, 0x8000000, 1))
			{
				strcpy(&cVar7, "<MP_DEFEND> ", 32);
			}
			else
			{
				strcpy(&cVar7, "<SPACE> ", 32);
			}
			if (Function_102(2, bParam0) > 0.0f)
			{
				stradd(&cVar7, "--:--", 32);
			}
			else
			{
				bVar15 = CEIL(Function_102(2, bParam0));
				stradd(&cVar7, I2STR((bVar15 / 60)), 32);
				stradd(&cVar7, ":", 32);
				straddi(&cVar7, ((bVar15 % 60) / 10), 32);
				straddi(&cVar7, ((bVar15 % 60) % 10), 32);
			}
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_300(&iVar6), &cVar7);
	}
	Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_299(iVar0) };
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_300(&iVar6), UI_GET_STRING(&Var16));
	fVar24 = Function_102(8, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_300(&iVar6), FLOOR(fVar24));
	if (bLocal_168)
	{
		if (bVar4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_300(&iVar6), FLOOR(Function_102(9, bParam0)));
		}
		else
		{
			Function_300(&iVar6);
		}
	}
	if (Function_85(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_300(&iVar6), "<SKULL>");
	}
	return 0;
}

struct<32> Function_299(int iParam0) //Position: 0xEA09 / 59913
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_35(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_300(int iParam0) //Position: 0xEAC6 / 60102
{
	*iParam0++;
	return (*iParam0 - 1);
}

void Function_301(bool bParam0, int iParam1, char* cParam2) //Position: 0xEAD9 / 60121
{
	if (bParam0)
	{
		if (Function_296())
		{
			NET_PLAYER_LIST_ADD_ITEM(uParam2, uParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_302() //Position: 0xEAFA / 60154
{
	bool bVar0;
	int iVar1;
	
	if (!Function_304(1))
	{
		return 0;
	}
	bVar0 = false;
	bLocal_168 = false;
	while (bVar0 > 16 && !bLocal_168)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			bLocal_168 = NET_GET_GAMER_POSSE_SIZE(bVar0) < 1;
		}
		bVar0++;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(0);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	iVar1 = 2;
	if (Function_136(1) > 0)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_300(&iVar1), "FRD_StakeHolder");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_300(&iVar1), "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(Function_300(&iVar1), "mp_plist_score_alt");
	if (bLocal_168)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_300(&iVar1), "mp_plist_posse");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_300(&iVar1), "mp_plist_mw");
	Function_303();
	bVar0 = iVar1;
	while (bVar0 < 6)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_300(&iVar1), "Common_Null");
		bVar0++;
	}
	return 1;
}

void Function_303() //Position: 0xEC1D / 60445
{
	if (Function_48(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_38(8192, 1, 1);
	}
	else if (Function_48(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_38(8192, 1, 1);
	}
	else
	{
		Function_38(8192, 0, 1);
	}
	return;
}

bool Function_304(bool bParam0) //Position: 0xEC5A / 60506
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_296() || Function_308(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_306(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_296())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_305(Function_296());
	return 1;
}

void Function_305(bool bParam0) //Position: 0xECDB / 60635
{
	if (bParam0 || Function_48(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_48(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_48(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_48(1048576) || Function_48(4)) || Function_19(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_38(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_306(var uParam0) //Position: 0xED64 / 60772
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_307(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_307(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xED78 / 60792
{
	char* cVar0[64];
	
	if (bParam29)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 48) };
	}
	else
	{
		strcpy(&cVar0, UI_GET_STRING(&iParam0 + 48), 64);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "nINVALID!?", 64);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_308(bool bParam0, bool bParam1) //Position: 0xEDBD / 60861
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(iParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(bParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(bParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

void Function_309() //Position: 0xEDF1 / 60913
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	iVar0 = 0.0f;
	if (Function_316())
	{
		iVar1 = NET_GET_POSSE_LEADER_SLOT();
		bVar2 = false;
		while (bVar2 <= 16)
		{
			if (Function_99(bVar2))
			{
				if (NET_GET_GAMER_POSSE_LEADER(bVar2) == iVar1)
				{
					iVar0 = (iVar0 + Function_102(8, bVar2));
				}
			}
			bVar2++;
		}
	}
	if (Function_570(64))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(82))
		{
			if (Function_102(8, GET_LOCAL_SLOT()) < 9001.0f)
			{
				AWARD_ACHIEVEMENT(82);
			}
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(83))
		{
			if (iVar0 < 50000.0f)
			{
				AWARD_ACHIEVEMENT(83);
			}
		}
	}
	Function_15(9, iVar0);
	if (iVar0 < Function_67(7))
	{
		Function_15(7, iVar0);
	}
	Function_310();
	return;
}

void Function_310() //Position: 0xEE9A / 61082
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 <= Local_436)
	{
		iVar1 = iVar0;
		if (Function_315(iVar1))
		{
			bVar2 = false;
			switch (iVar1)
			{
				case 0x00000000:
					if (Function_67(8) <= 1000.0f && Function_67(8) > 3000.0f)
					{
						bVar2 = true;
					}
					break;
				
				case 0x00000001:
					if (Function_67(8) <= 3000.0f && Function_67(8) > 5000.0f)
					{
						bVar2 = true;
					}
					break;
				
				case 0x00000002:
					if (Function_67(8) <= 5000.0f && Function_67(8) > 10000.0f)
					{
						bVar2 = true;
					}
					break;
				
				case 0x00000003:
					if (Function_67(8) <= 10000.0f && Function_67(8) > 50000.0f)
					{
						bVar2 = true;
					}
					break;
				
				case 0x00000004:
					if (Function_67(8) <= 50000.0f)
					{
						bVar2 = true;
					}
					break;
				
				case 0x00000005:
					if (((GET_NUM_PLAYERS() < 1 && Function_314() != GET_LOCAL_SLOT()) && Function_67(8) < 10.0f) && !iLocal_522)
					{
						iLocal_522 = 1;
						bVar2 = true;
					}
					break;
				
				case 0x00000006:
					if ((GET_NUM_PLAYERS() < 1 && Function_314() == GET_LOCAL_SLOT()) && iLocal_522)
					{
						iLocal_522 = 0;
						bVar2 = true;
					}
					break;
				
				case 0x00000009:
					if ((Function_67(9) < 5000.0f && Function_67(9) > 10000.0f) && Function_316())
					{
						bVar2 = true;
					}
					break;
				
				case 0x0000000A:
					if ((Function_67(9) < 10000.0f && Function_67(9) > 50000.0f) && Function_316())
					{
						bVar2 = true;
					}
					break;
				
				case 0x0000000B:
					if ((Function_67(9) < 50000.0f && Function_67(9) > 100000.0f) && Function_316())
					{
						bVar2 = true;
					}
					break;
				
				case 0x0000000C:
					if (Function_67(9) < 100000.0f && Function_316())
					{
						bVar2 = true;
					}
					break;
				
				case 0x0000000D:
					if ((((Function_313() != NET_GET_POSSE_LEADER_SLOT() && Function_316()) && Function_312() < 1) && Function_67(9) < 20.0f) && !iLocal_523)
					{
						iLocal_523 = 1;
						bVar2 = true;
					}
					break;
				
				case 0x0000000E:
					if (((Function_313() == NET_GET_POSSE_LEADER_SLOT() && Function_316()) && Function_312() < 1) && iLocal_523)
					{
						iLocal_523 = 0;
						bVar2 = true;
					}
					break;
			}
			if (bVar2)
			{
				Function_311(iVar1);
			}
		}
		iVar0++;
	}
	return;
}

void Function_311(int iParam0) //Position: 0xF0D4 / 61652
{
	Function_610(&iLocal_256);
	Local_436[iParam05].f_4 = 1;
	Local_436[iParam05].f_12 = GET_CURRENT_GAME_TIME();
	if (IS_STRING_VALID(Local_436[iParam05]))
	{
		Function_32(Local_436[iParam05], 0);
	}
	return;
}

int Function_312() //Position: 0xF111 / 61713
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			if (NET_GET_GAMER_POSSE_LEADER(bVar1) != bVar1 && NET_GET_GAMER_POSSE_SIZE(bVar1) < 1)
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_313() //Position: 0xF150 / 61776
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = 0.0f;
	bVar1 = NET_GET_POSSE_LEADER_SLOT();
	bVar2 = false;
	while (bVar2 <= 16)
	{
		if (Function_99(bVar2))
		{
			if (NET_GET_GAMER_POSSE_LEADER(bVar2) != bVar2 && NET_GET_GAMER_POSSE_SIZE(bVar2) < 1)
			{
				if (Function_102(9, bVar2) < fVar0)
				{
					fVar0 = Function_102(9, bVar2);
					bVar1 = bVar2;
				}
			}
		}
		bVar2++;
	}
	return bVar1;
}

int Function_314() //Position: 0xF1A8 / 61864
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_67(8);
	bVar1 = GET_LOCAL_SLOT();
	bVar2 = false;
	while (bVar2 <= 16)
	{
		if (Function_99(bVar2))
		{
			if (Function_102(8, bVar2) < fVar0)
			{
				fVar0 = Function_102(8, bVar2);
				bVar1 = bVar2;
			}
		}
		bVar2++;
	}
	return bVar1;
}

bool Function_315(int iParam0) //Position: 0xF1F1 / 61937
{
	if (!Function_570(64))
	{
		return 0;
	}
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	if (NET_ARE_UNLOCKS_READY())
	{
		if (NET_IS_UNLOCKED(45))
		{
			return 0;
		}
	}
	if (Function_156())
	{
		return 0;
	}
	if (HUD_IS_FADED())
	{
		return 0;
	}
	if (Local_436[iParam05].f_16 != 1 && !IS_SLOT_VALID(NET_GET_POSSE_LEADER_SLOT()))
	{
		return 0;
	}
	if (StackVal && StackVal)
	{
		return 0;
	}
	if ((GET_CURRENT_GAME_TIME() - Local_436[iParam05].f_12) > 40.0f)
	{
		return 0;
	}
	if (Function_575(&iLocal_256))
	{
		if (Function_585(&iLocal_256) > 8.0f)
		{
			return 0;
		}
	}
	return 1;
}

bool Function_316() //Position: 0xF28E / 62094
{
	return NET_GET_POSSE_COUNT() < 1;
}

bool Function_317(int iParam0, float fParam1) //Position: 0xF299 / 62105
{
	if (Function_173(iParam0, fParam1))
	{
		Function_49(iParam0);
		return 1;
	}
	return 0;
}

void Function_318() //Position: 0xF2B1 / 62129
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(42))
	{
		if (NET_GET_PLAYMODE() == 0)
		{
			if ((GET_HOUR(GET_TIME_OF_DAY()) > 5 || GET_HOUR(GET_TIME_OF_DAY()) < 18) || (IS_PLAYER_TELEPORTING() || Global_3391))
			{
				if (Local_286.f_516)
				{
					Local_286.f_516 = 0;
				}
			}
			else if (!Local_286.f_516)
			{
				if (Global_29006 != Global_30717[0] && !HUD_IS_FADED())
				{
					Local_286.f_516 = 1;
				}
			}
			else if (Global_29006 == Global_30685[0])
			{
				AWARD_ACHIEVEMENT(42);
			}
		}
	}
	return;
}

void Function_319() //Position: 0xF32F / 62255
{
	Function_320();
	return;
}

void Function_320() //Position: 0xF338 / 62264
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	if (NET_IS_IN_SESSION())
	{
		iVar1 = NET_GET_SESSION_GAMER_COUNT();
	}
	if (Local_85[StackVal4] == Global_78480.f_24)
	{
		Function_34(StackVal);
	}
	else
	{
		Function_322(StackVal);
	}
	if (iVar1 >= 1)
	{
		bVar0 = false;
		bVar2 = false;
		while (bVar2 > 16 && !bVar0)
		{
			if (Function_99(bVar2))
			{
				if (StackVal == Local_85[Global_76943[bVar296].f_244])
				{
					bVar0 = true;
				}
			}
			bVar2++;
		}
		if (bVar0)
		{
			Function_321(StackVal, 1);
		}
		else
		{
			Function_321(StackVal, 0);
		}
	}
	else
	{
		Function_321(StackVal, 0);
	}
	Local_166.f_4 = (StackVal + 1 % 20);
	return;
}

void Function_321(int iParam0, bool bParam1) //Position: 0xF3DF / 62431
{
	if (StackVal != bParam1)
	{
		if (bParam1)
		{
			if (IS_BLIP_VALID(Local_85[iParam04].f_12))
			{
				SET_BLIP_BLINK(Local_85[iParam04].f_12, 1, 0, -1.0f);
			}
			if (IS_BLIP_VALID(StackVal))
			{
				SET_BLIP_BLINK(StackVal, 1, 0, -1.0f);
			}
		}
		else
		{
			if (IS_BLIP_VALID(Local_85[iParam04].f_12))
			{
				SET_BLIP_BLINK(Local_85[iParam04].f_12, 0, 0, -1.0f);
			}
			if (IS_BLIP_VALID(StackVal))
			{
				SET_BLIP_BLINK(StackVal, 0, 0, -1.0f);
			}
		}
		Local_85[iParam04].f_4 = bParam1;
	}
	return;
}

void Function_322(int iParam0) //Position: 0xF474 / 62580
{
	bool bVar0;
	int iVar1;
	char* cVar2[32];
	var uVar10;
	
	if (Function_35(Local_85[iParam04]))
	{
		if (((StackVal && !Function_570(64) != 7) && Function_269()) && !Function_570(4096))
		{
			return;
		}
		if (Local_85[iParam04] != Global_78480.f_24)
		{
			bVar0 = StackVal;
			if (IS_VOLUME_VALID(bVar0))
			{
				if (!IS_BLIP_VALID(StackVal))
				{
					if (Function_324(iParam0))
					{
						iVar1 = 416;
						strcpy(&cVar2, "net_aa_hunting_ground_icon", 32);
					}
					else
					{
						iVar1 = iLocal_84;
						strcpy(&cVar2, "BLIP_ACTIVE_ACTION_AREA", 32);
					}
					Local_85[iParam04].f_8 = Function_323(bVar0, iVar1, 0x40a00000);
					UNK_0x1E98AFEC(StackVal, 1);
					SET_BLIP_MAX_DISTANCE(StackVal, 10.0f);
					SET_BLIP_MIN_DISTANCE(StackVal, 0.0f);
					if (StackVal && !Function_570(64) != 7)
					{
						SET_BLIP_COLOR(StackVal, 1.0f, 1.0f, 1.0f, 0.4f);
					}
					GET_VOLUME_CENTER(bVar0, &uVar10);
					Local_85[iParam04].f_12 = ADD_BLIP_FOR_COORD(&uVar10, iVar1, 0f, 2, 0);
					UNK_0xFF3DB575(Local_85[iParam04].f_12, 1);
					SET_BLIP_NAME(Local_85[iParam04].f_12, &cVar2);
					if (StackVal && !Function_570(64) != 7)
					{
						SET_BLIP_COLOR(Local_85[iParam04].f_12, 1.0f, 1.0f, 1.0f, 0.4f);
					}
				}
			}
		}
	}
	return;
}

var Function_323(bool bParam0, int iParam1, int iParam2) //Position: 0xF5FA / 62970
{
	var uVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return "";
	}
	uVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (IS_BLIP_VALID(uVar0))
	{
		if (GET_BLIP_ICON(uVar0) == iParam1)
		{
			return uVar0;
		}
		REMOVE_BLIP(uVar0);
	}
	uVar0 = ADD_BLIP_FOR_OBJECT(bParam0, iParam1, iParam2, 2, 0);
	if (IS_BLIP_VALID(uVar0))
	{
		return uVar0;
	}
	return "";
}

bool Function_324(int iParam0) //Position: 0xF647 / 63047
{
	if (((Local_85[iParam04] != Global_30717[2] || Local_85[iParam04] != Global_30640[13]) || Local_85[iParam04] != Global_30707[4]) || Local_85[iParam04] != Global_30658[7])
	{
		return 1;
	}
	return 0;
}

void Function_325(int iParam0) //Position: 0xF68B / 63115
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0x00000006:
			if (Function_337(8))
			{
				Function_336("HUD_MP_OUTRO_MASTER");
				PRINT_BIG("XP_Legend_Now", 5f, 0, 2, 0);
				Function_335(8);
				Function_340(16);
			}
			else
			{
				Function_334();
			}
			break;
		
		case 0x00000010:
			if (Function_337(16))
			{
				Function_142("XP_Legend_symbol_hlp", 0x41200000, 1, 0, 2, 1, 0);
				Function_142("XP_Legend_avatar_hlp", 0x41200000, 1, 0, 2, 1, 0);
				Function_142("XP_Legend_mount_hlp", 0x41200000, 1, 0, 2, 1, 0);
				Function_335(16);
			}
			break;
	}
	if ((Function_73() || Function_668(32768)) || Function_156())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000258:
		case 0x00000E10:
			iVar0 = 0;
			while (iVar0 <= 35)
			{
				iVar1 = Function_333(iVar0);
				if (iVar1 >= 0)
				{
					switch (GET_JOURNAL_ENTRY_TYPE(iVar1))
					{
						case 0x00000003:
							Function_142("mp_challenge_help", 0x41200000, 1, 0, 2, 1, 0);
							return;
							break;
						}
				}
				iVar0++;
			}
			break;
		
		case 0x00000384:
			if ((Function_332(996) && !Function_330(996)) || ((Function_332(987) && !Function_330(987)) && Function_329() != 1000))
			{
				Function_142("mp_mount_help", 0x41200000, 1, 0, 2, 1, 0);
			}
			break;
		
		case 0x000004B0:
			if (Function_326(0))
			{
				Function_142("mp_title_help", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_260 = 1;
			}
			break;
		
		case 0x000004B5:
			if (iLocal_260 != 0 && Function_326(1))
			{
				Function_142("mp_title_help", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_260 = 1;
			}
			break;
		
		case 0x000004BA:
			if (iLocal_260 != 0 && Function_326(2))
			{
				Function_142("mp_title_help", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_260 = 1;
			}
			break;
		
		case 0x000004BF:
			if (iLocal_260 != 0 && Function_326(3))
			{
				Function_142("mp_title_help", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_260 = 1;
			}
			break;
	}
	return;
}

bool Function_326(int iParam0) //Position: 0xF910 / 63760
{
	int iVar0;
	
	iLocal_259 = iParam0;
	while (iLocal_259 < (&Global_83864 + 1288[iParam017])->f_64)
	{
		iVar0 = (iParam0 * 1000 + iLocal_259);
		if (iParam0 == 0)
		{
		}
		else if ((iParam0 != 1 || iParam0 != 2) || iParam0 != 3)
		{
			iVar0++;
		}
		if (Function_328(iVar0) && !Function_327(iVar0))
		{
			return 1;
		}
		iLocal_259++;
	}
	return 0;
}

bool Function_327(int iParam0) //Position: 0xF976 / 63862
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	return Function_351((*&Global_84364 + 4[(iParam0 / 1000)10] + 20)[(iVar0 / 32)], Function_192((iVar0 % 32)));
}

bool Function_328(bool bParam0) //Position: 0xF9A6 / 63910
{
	int iVar0;
	
	iVar0 = (bParam0 % 1000);
	return Function_351((*&Global_84364 + 4[(bParam0 / 1000)10])[(iVar0 / 32)], Function_192((iVar0 % 32)));
}

int Function_329() //Position: 0xF9D4 / 63956
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

bool Function_330(int iParam0) //Position: 0xF9EE / 63982
{
	return Function_351(Global_84364.f_772, Function_192(Function_331(iParam0)));
}

int Function_331(int iParam0) //Position: 0xFA06 / 64006
{
	switch (iParam0)
	{
		case 0x000003E8:
			return 0;
			break;
		
		case 0x000003E4:
			return 1;
			break;
		
		case 0x000003DB:
			return 2;
			break;
		
		case 0x000003D0:
			return 3;
			break;
		
		case 0x000003D6:
			return 4;
			break;
		
		case 0x000003D3:
			return 5;
			break;
		
		case 0x000003EE:
			return 6;
			break;
		
		case 0x000003EC:
			return 7;
			break;
		
		case 0x000003ED:
			return 8;
			break;
		
		case 0x000003EF:
			return 9;
			break;
		
		case 0x000003EB:
			return 10;
			break;
		
		default:
			LOG_ERROR("INVALID HORSE PASSED IN TO GET_MOUNT_INDEX! GIVING AE_RIDEABLE_ANIMAL_MEX_Mule01");
			return 0;
			break;
	}
	return 0;
}

bool Function_332(int iParam0) //Position: 0xFAEB / 64235
{
	return Function_25((*&Global_83864 + 1204)[Function_331(iParam0)], 1);
}

var Function_333(int iParam0) //Position: 0xFB03 / 64259
{
	if (Function_70() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_24;
	}
	return Global_49310[iParam022].f_24;
}

void Function_334() //Position: 0xFB2B / 64299
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_337(4))
	{
		Function_335(4);
		iVar0 = 0;
		while (iVar0 <= 35)
		{
			iVar2 = Function_333(iVar0);
			if (iVar2 >= 0)
			{
				if (IS_JOURNAL_ENTRY_UPDATED(iVar2))
				{
					Function_142("mp_challenge_help", 0x41200000, 1, 0, 2, 1, 0);
					return;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 <= 259)
		{
			iVar2 = Function_63(iVar1);
			if (iVar2 >= 0)
			{
				if (IS_JOURNAL_ENTRY_UPDATED(iVar2))
				{
					Function_142("mp_challenge_help", 0x41200000, 1, 0, 2, 1, 0);
					return;
				}
			}
			iVar1++;
		}
	}
	return;
}

void Function_335(int iParam0) //Position: 0xFBD7 / 64471
{
	Function_23(&Global_83864 + 1256, iParam0);
	return;
}

void Function_336(bool bParam0) //Position: 0xFBE9 / 64489
{
	UI_HIDE("MPReward");
	if (IS_STRING_VALID(iParam0))
	{
		PLAY_SOUND_FRONTEND(bParam0);
	}
	return;
}

bool Function_337(int iParam0) //Position: 0xFC0A / 64522
{
	return Function_25(Global_83864.f_1256, iParam0);
}

bool Function_338(bool bParam0, int iParam1) //Position: 0xFC1C / 64540
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_339(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_339(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_339(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_339(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_339(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_339(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_339(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_339(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_339(var uParam0, int iParam1) //Position: 0xFCF5 / 64757
{
	return (uParam0 && iParam1) == 0;
}

void Function_340(int iParam0) //Position: 0xFD02 / 64770
{
	Function_153(&Global_83864 + 1256, iParam0);
	return;
}

void Function_341(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xFD14 / 64788
{
	if (iParam6 != 0)
	{
		UI_TEXTURE_SET_HASH("MPRankTexture", iParam6);
	}
	else
	{
		UI_TEXTURE_SET_NAME("MPRankTexture", uParam0);
	}
	UI_SET_TEXT("MPRewardTitle", iParam1);
	if (iParam5 != 0)
	{
		UI_SET_TEXT_HASH("MPRewardItem.s0", iParam5);
	}
	else
	{
		UI_SET_TEXT("MPRewardItem.s0", iParam2);
	}
	UI_SHOW("MPReward");
	UI_SHOW("MPRewardItem.s0");
	UI_SET_STYLE("MPRewardTitle", iParam4);
	UI_REFRESH("MPRewardItem.s0");
	UI_SHOW("MPRewardItem.s1");
	UI_SET_TEXT("MPRewardItem.s1", "Common_Null");
	PLAY_SOUND_FRONTEND(cParam3);
}

struct<32> Function_342(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xFE25 / 65061
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_343() //Position: 0xFF1A / 65306
{
	if (!Function_61(161, 2))
	{
		Function_350(161, 2);
		Function_344(161, 0, 0, 0);
	}
	if (!Function_61(162, 2))
	{
		Function_350(162, 2);
		Function_344(162, 0, 0, 0);
	}
	if (!Function_61(163, 2))
	{
		Function_350(163, 2);
		Function_344(163, 0, 0, 0);
	}
	if (!Function_61(164, 2))
	{
		Function_350(164, 2);
		Function_344(164, 0, 0, 0);
	}
	if (!Function_61(165, 2))
	{
		Function_350(165, 2);
		Function_344(165, 0, 0, 0);
	}
	if (!Function_61(166, 2))
	{
		Function_350(166, 2);
		Function_344(166, 0, 0, 0);
	}
	if (!Function_61(167, 2))
	{
		Function_350(167, 2);
		Function_344(167, 0, 0, 0);
	}
	if (!Function_61(168, 2))
	{
		Function_350(168, 2);
		Function_344(168, 0, 0, 0);
	}
	if (!Function_61(169, 2))
	{
		Function_350(169, 2);
		Function_344(169, 0, 0, 0);
	}
	if (!Function_61(172, 2))
	{
		Function_350(172, 2);
		Function_344(172, 0, 0, 0);
	}
	if (!Function_61(175, 2))
	{
		Function_350(175, 2);
		Function_344(175, 0, 0, 0);
	}
	if (!Function_61(178, 2))
	{
		Function_350(178, 2);
		Function_344(178, 0, 0, 0);
	}
	if (!Function_61(181, 2))
	{
		Function_350(181, 2);
		Function_344(181, 0, 0, 0);
	}
	if (!Function_61(184, 2))
	{
		Function_350(184, 2);
		Function_344(184, 0, 0, 0);
	}
	return;
}

void Function_344(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10072 / 65650
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_349(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_63(iParam0));
	if ((bParam3 && Function_61(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_63(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_348(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_62(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_347(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_346(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_345(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_63(iParam0), &Var7, 0, 2, Function_61(iParam0, 4));
			if (!bParam3)
			{
				Function_350(iParam0, 4);
			}
		}
	}
}

struct<16> Function_345(int iParam0) //Position: 0x1012F / 65839
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_62(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_346(int iParam0) //Position: 0x1014F / 65871
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_347(int iParam0) //Position: 0x1017D / 65917
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_348(int iParam0) //Position: 0x101AD / 65965
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_349(int iParam0) //Position: 0x101DE / 66014
{
	switch (iParam0)
	{
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000044:
		case 0x00000048:
		case 0x0000004C:
		case 0x0000004F:
		case 0x00000052:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x0000005A:
		case 0x0000005D:
		case 0x00000060:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000076:
		case 0x00000079:
		case 0x0000007C:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000084:
		case 0x00000087:
		case 0x0000008A:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000092:
		case 0x00000095:
		case 0x00000098:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000A0:
		case 0x000000A1:
		case 0x000000A2:
		case 0x000000A3:
		case 0x000000A4:
		case 0x000000A5:
		case 0x000000A6:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AB:
		case 0x000000AE:
		case 0x000000B1:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000BA:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_350(int iParam0, int iParam1) //Position: 0x1035C / 66396
{
	Function_17(&Global_50170[iParam022] + 32, iParam1);
	return;
}

bool Function_351(var uParam0, bool bParam1) //Position: 0x10370 / 66416
{
	return (uParam0 && bParam1) == 0;
}

void Function_352() //Position: 0x1037D / 66429
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 259)
	{
		Global_56352[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_353() //Position: 0x1039F / 66463
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			iVar2 = 0;
			while (iVar2 <= 8)
			{
				Function_71(&(Global_55869[iVar037][iVar118][iVar2]), 1);
				Function_71(&Global_55869[iVar037][iVar118] + 36[iVar2], 1);
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	return;
}

void Function_354() //Position: 0x10404 / 66564
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Function_71(&Global_84364 + 712[iVar0], 1);
		iVar0++;
	}
	return;
}

void Function_355() //Position: 0x1042B / 66603
{
	Global_56688[776].f_292 = 0;
	Global_56688[876].f_292 = 0;
	Global_56688[976].f_292 = 0;
	Function_356(7);
	Function_356(8);
	Function_356(9);
	return;
}

void Function_356(int iParam0) //Position: 0x1045F / 66655
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_56688[iParam076][iVar09] = 4294967294;
		Global_56688[iParam076][iVar09].f_4 = 0.0f;
		Global_56688[iParam076][iVar09].f_8 = 0;
		Global_56688[iParam076][iVar09].f_20 = 0;
		Global_56688[iParam076][iVar09].f_24 = 0;
		iVar0++;
	}
	Global_56688[iParam076].f_296 = 0;
	Global_56688[iParam076].f_300 = 0;
	Global_56688[iParam076].f_292 = 0;
	return;
}

void Function_357() //Position: 0x104DF / 66783
{
	Function_358(253, &Global_50170, 5, 50.0f, 20, 100.0f, 500, 150.0f, 1000, 200.0f, 5000, 250.0f, 0, 0);
	Function_358(254, &Global_50170, 2, 50.0f, 4, 100.0f, 10, 150.0f, 15, 200.0f, 500, 250.0f, 0, 0);
	Function_358(255, &Global_50170, 1, 50.0f, 3, 100.0f, 10, 150.0f, 15, 200.0f, 200, 250.0f, 0, 0);
	Function_358(256, &Global_50170, 10, 50.0f, 20, 100.0f, 30, 150.0f, 35, 200.0f, 40, 250.0f, 0, 0);
	return;
}

void Function_358(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, float fParam9, int iParam10, float fParam11, int iParam12, int iParam13) //Position: 0x10599 / 66969
{
	bool bVar0;
	float fVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			bVar0 = iParam2;
			fVar1 = fParam3;
			break;
		
		case 0x00000001:
			bVar0 = iParam4;
			fVar1 = fParam5;
			break;
		
		case 0x00000002:
			bVar0 = iParam6;
			fVar1 = fParam7;
			break;
		
		case 0x00000003:
			bVar0 = iParam8;
			fVar1 = fParam9;
			break;
		
		case 0x00000004:
			bVar0 = iParam10;
			fVar1 = fParam11;
			break;
		
		case 0x00000005:
			bVar0 = iParam12;
			fVar1 = iParam13;
			break;
		
		case 0x0000000A:
			Function_359(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			fVar1 = fParam3;
			break;
	}
	if (Function_351(uParam1[iParam022]->f_32, 4) || Function_351(uParam1[iParam022]->f_32, 2))
	{
		Function_344(iParam0, bVar0, CEIL(fVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_59(iParam0, uParam1[iParam022]->f_12, 1, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_359(int iParam0, int iParam1) //Position: 0x106A7 / 67239
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_349(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_63(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_348(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_62(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_345(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_63(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_63(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_63(iParam0), 1.0f, 0, 0);
	}
	return;
}

void Function_360() //Position: 0x10729 / 67369
{
	if (!Function_61(253, 2))
	{
		Function_350(253, 2);
		Function_344(253, 0, 0, 0);
	}
	if (!Function_61(254, 2))
	{
		Function_350(254, 2);
		Function_344(254, 0, 0, 0);
	}
	if (!Function_61(255, 2))
	{
		Function_350(255, 2);
		Function_344(255, 0, 0, 0);
	}
	if (!Function_61(256, 2))
	{
		Function_350(256, 2);
		Function_344(256, 0, 0, 0);
	}
	return;
}

void Function_361() //Position: 0x10792 / 67474
{
	Function_365(253, &Global_50170, "ZC_KLS", 1, 12, Function_370(1));
	Function_365(254, &Global_50170, "ZC_WVS", 1, 12, Function_364(1));
	Function_365(255, &Global_50170, "ZC_TMP", 1, 12, Function_363(1));
	Function_365(256, &Global_50170, "ZC_KLC", 1, 12, Function_362(1));
	return;
}

int Function_362(bool bParam0) //Position: 0x107F9 / 67577
{
	if (bParam0)
	{
		return "UN_UNDEADTEAMPLAYER_64";
	}
	return "UN_UNDEADTEAMPLAYER_128";
}

int Function_363(bool bParam0) //Position: 0x1083B / 67643
{
	if (bParam0)
	{
		return "UN_UNDEADKILLCHAIN_64";
	}
	return "UN_UNDEADKILLCHAIN_128";
}

int Function_364(bool bParam0) //Position: 0x1087B / 67707
{
	if (bParam0)
	{
		return "UN_UNDEADWAVES_64";
	}
	return "UN_UNDEADWAVES_128";
}

void Function_365(int iParam0, int iParam1, char* cParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x108B3 / 67763
{
	strcpy(iParam1[iParam022] + 16, cParam2, 8);
	(*iParam1)[iParam022] = iParam0;
	iParam1[iParam022]->f_84 = bParam3;
	if (Global_3364 || Global_83864.f_1276)
	{
		iParam1[iParam022]->f_8 = 0;
		Global_50170[iParam022].f_28 = 0;
	}
	if (bParam3)
	{
		if (!Global_34165.f_44)
		{
			iParam1[iParam022]->f_4 = 1;
			iParam1[iParam022]->f_8 = 0;
			iParam1[iParam022]->f_12 = 0.0f;
			return;
		}
	}
	if (Global_83864.f_1276)
	{
		Function_369(iParam0, 4);
		Function_369(iParam0, 2);
		Function_368(iParam0, 0);
		iParam1[iParam022]->f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_63(iParam0), iParam1[iParam022]->f_12, 0, 0);
		REMOVE_JOURNAL_ENTRY(Function_63(iParam0), 1);
	}
	if (!IS_STRING_VALID(iParam5))
	{
		bParam5 = Function_367();
	}
	Function_366(iParam0, iParam4, bParam5);
	Function_344(iParam0, 0, 0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_359(iParam0, 1);
	}
	else
	{
		iParam1[iParam022]->f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Function_63(iParam0), iParam1[iParam022]->f_12, 0, 0);
	}
}

var Function_366(int iParam0, var uParam1, int iParam2) //Position: 0x109C3 / 68035
{
	struct<6> Var0;
	struct<4> Var6;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_348(iParam0) };
	Global_50170[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, uParam1, 0, uParam2);
	Var6 = { StackVal, StackVal, StackVal, Function_62(iParam0) };
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	return Global_50170[iParam022].f_24;
}

int Function_367() //Position: 0x10A01 / 68097
{
	return "SC_Travel_Icon";
}

void Function_368(int iParam0, int iParam1) //Position: 0x10A18 / 68120
{
	REMOVE_JOURNAL_ENTRY(Global_50170[iParam022].f_24, iParam1);
	return;
}

void Function_369(int iParam0, int iParam1) //Position: 0x10A2C / 68140
{
	Function_71(&Global_50170[iParam022] + 32, iParam1);
	return;
}

int Function_370(bool bParam0) //Position: 0x10A40 / 68160
{
	if (bParam0)
	{
		return "UN_UNDEADKILLS_64";
	}
	return "UN_UNDEADKILLS_128";
}

void Function_371() //Position: 0x10A78 / 68216
{
	Function_372(246, &Global_50170, 5, 50.0f, 10, 150.0f, 15, 200.0f, 0, 0, 0, 0, 0, 0, 1);
	Function_372(247, &Global_50170, 25, 50.0f, 50, 150.0f, 100, 200.0f, 0, 0, 0, 0, 0, 0, 1);
	Function_372(249, &Global_50170, 16, 50.0f, 18, 150.0f, 20, 200.0f, 0, 0, 0, 0, 0, 0, 1);
	Function_372(250, &Global_50170, 5, 50.0f, 4, 150.0f, 3, 200.0f, 0, 0, 0, 0, 0, 0, 1);
	Function_372(251, &Global_50170, 10, 50.0f, 15, 150.0f, 20, 200.0f, 0, 0, 0, 0, 0, 0, 1);
	Function_372(248, &Global_50170, (CEIL(2700.0f) / 60), 50.0f, (CEIL(2700.0f) / 60), 150.0f, 0, 0.0f, 0, 0.0f, 0, 0.0f, 0, 0.0f, 0);
	Function_372(252, &Global_50170, (CEIL(2700.0f) / 60), 50.0f, (CEIL(2700.0f) / 60), 150.0f, 0, 0.0f, 0, 0.0f, 0, 0.0f, 0, 0.0f, 0);
	return;
}

void Function_372(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14) //Position: 0x10B90 / 68496
{
	bool bVar0;
	float fVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			bVar0 = iParam2;
			fVar1 = fParam3;
			break;
		
		case 0x00000001:
			bVar0 = iParam4;
			fVar1 = fParam5;
			break;
		
		case 0x00000002:
			bVar0 = iParam6;
			fVar1 = fParam7;
			break;
		
		case 0x00000003:
			bVar0 = iParam8;
			fVar1 = iParam9;
			break;
		
		case 0x00000004:
			bVar0 = iParam10;
			fVar1 = iParam11;
			break;
		
		case 0x00000005:
			bVar0 = iParam12;
			fVar1 = iParam13;
			break;
		
		case 0x0000000A:
			Function_359(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			fVar1 = fParam3;
			break;
	}
	if (Function_351(uParam1[iParam022]->f_32, 4) || Function_351(uParam1[iParam022]->f_32, 2))
	{
		Function_344(iParam0, bVar0, CEIL(fVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_59(iParam0, uParam1[iParam022]->f_12, bParam14, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_373() //Position: 0x10C9F / 68767
{
	if (!Function_61(246, 2))
	{
		Function_350(246, 2);
		Function_344(246, 0, 0, 0);
	}
	if (!Function_61(247, 2))
	{
		Function_350(247, 2);
		Function_344(247, 0, 0, 0);
	}
	if (!Function_61(248, 2))
	{
		Function_350(248, 2);
		Function_344(248, 0, 0, 0);
	}
	if (!Function_61(249, 2))
	{
		Function_350(249, 2);
		Function_344(249, 0, 0, 0);
	}
	if (!Function_61(250, 2))
	{
		Function_350(250, 2);
		Function_344(250, 0, 0, 0);
	}
	if (!Function_61(251, 2))
	{
		Function_350(251, 2);
		Function_344(251, 0, 0, 0);
	}
	if (!Function_61(252, 2))
	{
		Function_350(252, 2);
		Function_344(252, 0, 0, 0);
	}
	return;
}

void Function_374() //Position: 0x10D4D / 68941
{
	Function_365(246, &Global_50170, "AD_WIN", 1, 11, Function_381(1));
	Function_365(247, &Global_50170, "AD_CPT1", 1, 11, Function_380(1));
	Function_365(248, &Global_50170, "AD_ATK1", 1, 11, Function_379(1));
	Function_365(249, &Global_50170, "AD_TKTS", 1, 11, Function_378(1));
	Function_365(250, &Global_50170, "AD_DTHS", 1, 11, Function_377(1));
	Function_365(251, &Global_50170, "AD_KLSD", 1, 11, Function_376(1));
	Function_365(252, &Global_50170, "AD_ATK2", 1, 11, Function_375(1));
	return;
}

int Function_375(bool bParam0) //Position: 0x10E01 / 69121
{
	if (bParam0)
	{
		return "timeAttacking_64";
	}
	return "timeAttacking_128";
}

int Function_376(bool bParam0) //Position: 0x10E37 / 69175
{
	if (bParam0)
	{
		return "MP_KillStreak_Icon";
	}
	return "MP_KillStreak_Icon_128";
}

int Function_377(bool bParam0) //Position: 0x10E74 / 69236
{
	if (bParam0)
	{
		return "hardToKill_64";
	}
	return "hardToKill_128";
}

int Function_378(bool bParam0) //Position: 0x10EA4 / 69284
{
	if (bParam0)
	{
		return "gotLives_64";
	}
	return "gotLives_128";
}

int Function_379(bool bParam0) //Position: 0x10ED0 / 69328
{
	if (bParam0)
	{
		return "timeAttacking_64";
	}
	return "timeAttacking_128";
}

int Function_380(bool bParam0) //Position: 0x10F06 / 69382
{
	if (bParam0)
	{
		return "captureCheckPoints_64";
	}
	return "captureCheckPoints_128";
}

int Function_381(bool bParam0) //Position: 0x10F46 / 69446
{
	if (bParam0)
	{
		return "matchWins_64";
	}
	return "matchWins_128";
}

void Function_382() //Position: 0x10F74 / 69492
{
	Function_383(240, &Global_50170, 10, 50.0f, 15, 150.0f, 25, 200.0f, 0, 0, 0, 0, 0, 0);
	Function_383(241, &Global_50170, 250, 50.0f, 500, 150.0f, 750, 200.0f, 0, 0, 0, 0, 0, 0);
	Function_383(242, &Global_50170, 1, 50.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 1, 300.0f, 1, 350.0f);
	Function_383(243, &Global_50170, 1, 50.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 1, 300.0f, 0, 0);
	Function_383(244, &Global_50170, 1, 50.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 1, 300.0f, 0, 0);
	Function_383(245, &Global_50170, 1, 50.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 1, 300.0f, 0, 0);
	return;
}

void Function_383(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) //Position: 0x11066 / 69734
{
	bool bVar0;
	float fVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			bVar0 = iParam2;
			fVar1 = fParam3;
			break;
		
		case 0x00000001:
			bVar0 = iParam4;
			fVar1 = fParam5;
			break;
		
		case 0x00000002:
			bVar0 = iParam6;
			fVar1 = fParam7;
			break;
		
		case 0x00000003:
			bVar0 = iParam8;
			fVar1 = iParam9;
			break;
		
		case 0x00000004:
			bVar0 = iParam10;
			fVar1 = iParam11;
			break;
		
		case 0x00000005:
			bVar0 = iParam12;
			fVar1 = iParam13;
			break;
		
		case 0x0000000A:
			Function_359(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			fVar1 = fParam3;
			break;
	}
	if (Function_351(uParam1[iParam022]->f_32, 4) || Function_351(uParam1[iParam022]->f_32, 2))
	{
		Function_344(iParam0, bVar0, CEIL(fVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_59(iParam0, uParam1[iParam022]->f_12, 1, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_384() //Position: 0x11174 / 70004
{
	if (!Function_61(240, 2))
	{
		Function_350(240, 2);
		Function_344(240, 0, 0, 0);
	}
	if (!Function_61(241, 2))
	{
		Function_350(241, 2);
		Function_344(241, 0, 0, 0);
	}
	if (!Function_61(242, 2))
	{
		Function_350(242, 2);
		Function_344(242, 0, 0, 0);
	}
	if (!Function_61(243, 2))
	{
		Function_350(243, 2);
		Function_344(243, 0, 0, 0);
	}
	if (!Function_61(244, 2))
	{
		Function_350(244, 2);
		Function_344(244, 0, 0, 0);
	}
	if (!Function_61(245, 2))
	{
		Function_350(245, 2);
		Function_344(245, 0, 0, 0);
	}
	return;
}

void Function_385() //Position: 0x1120A / 70154
{
	Function_365(240, &Global_50170, "RC_TP3", 1, 10, Function_391(1));
	Function_365(241, &Global_50170, "RC_GP", 1, 10, Function_390(1));
	Function_365(242, &Global_50170, "RC_SML", 1, 10, Function_389(1));
	Function_365(243, &Global_50170, "RC_DS1", 1, 10, Function_388(1));
	Function_365(244, &Global_50170, "RC_DS2", 1, 10, Function_387(1));
	Function_365(245, &Global_50170, "RC_KLS", 1, 10, Function_386(1));
	return;
}

int Function_386(bool bParam0) //Position: 0x1129F / 70303
{
	if (bParam0)
	{
		return "MP_KillStreak_Icon";
	}
	return "MP_KillStreak_Icon_128";
}

int Function_387(bool bParam0) //Position: 0x112DC / 70364
{
	if (bParam0)
	{
		return "dontShoot_64";
	}
	return "dontShoot_128";
}

int Function_388(bool bParam0) //Position: 0x1130A / 70410
{
	if (bParam0)
	{
		return "dontShoot_64";
	}
	return "dontShoot_128";
}

int Function_389(bool bParam0) //Position: 0x11338 / 70456
{
	if (bParam0)
	{
		return "finishAll3_64";
	}
	return "finishAll3_128";
}

int Function_390(bool bParam0) //Position: 0x11368 / 70504
{
	if (bParam0)
	{
		return "grandPrixPoints_64";
	}
	return "grandPrixPoints_128";
}

int Function_391(bool bParam0) //Position: 0x113A2 / 70562
{
	if (bParam0)
	{
		return "grandPrixTop3_64";
	}
	return "grandPrixTop3_128";
}

void Function_392() //Position: 0x113D8 / 70616
{
	Function_393(236, &Global_50170, 1, 50.0f, 1, 100.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 1, 300.0f);
	Function_393(237, &Global_50170, 1, 50.0f, 1, 100.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 0, 0);
	Function_393(238, &Global_50170, 2, 50.0f, 2, 100.0f, 10, 150.0f, 20, 200.0f, 10, 250.0f, 20, 300.0f);
	Function_393(239, &Global_50170, 3, 50.0f, 4, 100.0f, (CEIL(3600.0f) / 3600), 150.0f, (CEIL(18000.0f) / 3600), 200.0f, (CEIL(36000.0f) / 3600), 250.0f, 0, 0);
	return;
}

void Function_393(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, float fParam9, int iParam10, float fParam11, int iParam12, int iParam13) //Position: 0x114AB / 70827
{
	bool bVar0;
	float fVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			bVar0 = iParam2;
			fVar1 = fParam3;
			break;
		
		case 0x00000001:
			bVar0 = iParam4;
			fVar1 = fParam5;
			break;
		
		case 0x00000002:
			bVar0 = iParam6;
			fVar1 = fParam7;
			break;
		
		case 0x00000003:
			bVar0 = iParam8;
			fVar1 = fParam9;
			break;
		
		case 0x00000004:
			bVar0 = iParam10;
			fVar1 = fParam11;
			break;
		
		case 0x00000005:
			bVar0 = iParam12;
			fVar1 = iParam13;
			break;
		
		case 0x0000000A:
			Function_359(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			fVar1 = fParam3;
			break;
	}
	if (Function_351(uParam1[iParam022]->f_32, 4) || Function_351(uParam1[iParam022]->f_32, 2))
	{
		Function_344(iParam0, bVar0, CEIL(fVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_59(iParam0, uParam1[iParam022]->f_12, 1, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_394() //Position: 0x115B9 / 71097
{
	if (!Function_61(236, 2))
	{
		Function_350(236, 2);
		Function_344(236, 0, 0, 0);
	}
	if (!Function_61(237, 2))
	{
		Function_350(237, 2);
		Function_344(237, 0, 0, 0);
	}
	if (!Function_61(238, 2))
	{
		Function_350(238, 2);
		Function_344(238, 0, 0, 0);
	}
	if (!Function_61(239, 2))
	{
		Function_350(239, 2);
		Function_344(239, 0, 0, 0);
	}
	return;
}

void Function_395() //Position: 0x1161F / 71199
{
	Function_365(236, &Global_50170, "GB_PKR1", 1, 9, Function_397());
	Function_365(237, &Global_50170, "GB_PKR2", 1, 9, Function_397());
	Function_365(238, &Global_50170, "GB_LD1", 1, 9, Function_396());
	Function_365(239, &Global_50170, "GB_LD2", 1, 9, Function_396());
	return;
}

int Function_396() //Position: 0x11683 / 71299
{
	return "SC_LiarsDice_Icon";
}

int Function_397() //Position: 0x1169D / 71325
{
	return "SC_Poker_Icon";
}

void Function_398() //Position: 0x116B3 / 71347
{
	Function_399(232, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(233, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	return;
}

void Function_399(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11) //Position: 0x116FB / 71419
{
	bool bVar0;
	float fVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			bVar0 = iParam2;
			fVar1 = fParam3;
			break;
		
		case 0x00000001:
			bVar0 = iParam4;
			fVar1 = fParam5;
			break;
		
		case 0x00000002:
			bVar0 = iParam6;
			fVar1 = fParam7;
			break;
		
		case 0x00000003:
			bVar0 = iParam8;
			fVar1 = iParam9;
			break;
		
		case 0x00000004:
			bVar0 = iParam10;
			fVar1 = iParam11;
			break;
		
		case 0x0000000A:
			Function_359(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			fVar1 = fParam3;
			break;
	}
	if (Function_351(uParam1[iParam022]->f_32, 4) || Function_351(uParam1[iParam022]->f_32, 2))
	{
		Function_344(iParam0, bVar0, CEIL(fVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_59(iParam0, uParam1[iParam022]->f_12, 1, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_400() //Position: 0x117F8 / 71672
{
	if (!Function_61(232, 2))
	{
		Function_350(232, 2);
		Function_344(232, 0, 0, 0);
	}
	if (!Function_61(233, 2))
	{
		Function_350(233, 2);
		Function_344(233, 0, 0, 0);
	}
	return;
}

void Function_401() //Position: 0x1182E / 71726
{
	Function_365(232, &Global_50170, "WP_ATR", 1, 5, Function_403());
	Function_365(233, &Global_50170, "WP_ATR2", 1, 5, Function_402());
	return;
}

int Function_402() //Position: 0x11861 / 71777
{
	return "challenge_01lvl2";
}

int Function_403() //Position: 0x1187A / 71802
{
	return "challenge_01";
}

void Function_404(var uParam0, int iParam1) //Position: 0x1188F / 71823
{
	int iVar0;
	char* cVar1[32];
	struct<2> Var9;
	
	iVar0 = DECOR_GET_INT(Function_548(), "DLCFM_Weapon");
	DECOR_SET_INT(Function_548(), "DLCFM_Weapon", iVar0 + 1);
	strcpy(&cVar1, "DLCFM_Weapon_", 32);
	straddi(&cVar1, iVar0, 32);
	Var9 = uParam0;
	Var9.f_4 = iParam1;
	DECOR_SET_INT(StackVal, Function_548(), Function_405(&cVar1, Var9, 0));
	return;
}

var Function_405(struct<5> Param0) //Position: 0x118FB / 71931
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_193())) || SHIFT_LEFT(iParam2, Function_193() + 8));
}

void Function_406() //Position: 0x11919 / 71961
{
	Function_399(228, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(229, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(230, &Global_50170, 1, 150.0f, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(231, &Global_50170, 1, 50.0f, 3, 100.0f, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_407() //Position: 0x11991 / 72081
{
	if (!Function_61(228, 2))
	{
		Function_350(228, 2);
		Function_344(228, 0, 0, 0);
	}
	if (!Function_61(229, 2))
	{
		Function_350(229, 2);
		Function_344(229, 0, 0, 0);
	}
	if (!Function_61(230, 2))
	{
		Function_350(230, 2);
		Function_344(230, 0, 0, 0);
	}
	if (!Function_61(231, 2))
	{
		Function_350(231, 2);
		Function_344(231, 0, 0, 0);
	}
	return;
}

void Function_408() //Position: 0x119F7 / 72183
{
	Function_365(228, &Global_50170, "WP_TOM", 1, 5, Function_403());
	Function_365(229, &Global_50170, "WP_TOM2", 1, 5, Function_402());
	Function_365(230, &Global_50170, "PVPTS", 1, 6, Function_410());
	Function_365(231, &Global_50170, "PVPRT", 1, 6, Function_409());
	return;
}

int Function_409() //Position: 0x11A54 / 72276
{
	return "MP_Revenge_Icon";
}

int Function_410() //Position: 0x11A6C / 72300
{
	return "MP_TrickShot_Icon";
}

void Function_411() //Position: 0x11A86 / 72326
{
	Function_458();
	Function_413();
	Function_412();
	Global_88795 = 1;
	return;
}

void Function_412() //Position: 0x11A9A / 72346
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_56612[iVar09] = 4294967294;
		Global_56612[iVar09].f_4 = 0.0f;
		Global_56612[iVar09].f_8 = 0;
		Global_56612[iVar09].f_20 = 0;
		Global_56612[iVar09].f_24 = 0;
		iVar0++;
	}
	Global_56612.f_296 = 0;
	Global_56612.f_300 = 0;
	Global_56612.f_292 = 0;
	return;
}

void Function_413() //Position: 0x11AFA / 72442
{
	if (Global_34165.f_44)
	{
		Function_444(0, &Global_49399, "AM_SS", 3, 0, Function_403());
		Function_444(1, &Global_49399, "AM_MH", 3, 0, Function_443());
		Function_444(2, &Global_49399, "AM_SU", 3, 0, Function_442());
		Function_444(3, &Global_49399, "AM_TH", 3, 0, Function_441());
		Function_444(7, &Global_49399, "AM_LB", 3, 1, Function_441());
		Function_444(4, &Global_49399, "AM_SS2", 3, 1, Function_402());
		Function_444(5, &Global_49399, "AM_MH2", 3, 1, Function_440());
		Function_444(6, &Global_49399, "AM_SU2", 3, 1, Function_439());
		Function_444(8, &Global_49399, "AM_LB2", 3, 1, Function_441());
		Function_444(9, &Global_49399, "AM_LB3", 3, 1, Function_441());
		Function_444(22, &Global_49399, "OC_MW", 3, 1, Function_438());
		Function_444(23, &Global_49399, "OC_BO", 3, 1, Function_438());
		Function_444(24, &Global_49399, "OC_B2", 3, 1, Function_437());
		Function_444(10, &Global_49399, "WP_DYN", 5, 1, Function_403());
		Function_444(11, &Global_49399, "WP_DYN2", 5, 1, Function_402());
		Function_444(12, &Global_49399, "WP_PYR", 5, 1, Function_403());
		Function_444(13, &Global_49399, "WP_PYR2", 5, 1, Function_402());
		Function_444(14, &Global_49399, "ST_TF", 8, 1, Function_367());
		Function_444(15, &Global_49399, "ST_TH", 8, 1, Function_367());
		Function_444(16, &Global_49399, "ST_TS", 8, 1, Function_367());
		Function_444(17, &Global_49399, "ST_TW", 8, 1, Function_367());
		Function_444(18, &Global_49399, "ST_RH", 8, 1, Function_367());
		Function_444(19, &Global_49399, "ST_RW", 8, 1, Function_367());
		Function_444(21, &Global_49399, "ST_RC", 8, 1, Function_367());
		Function_444(20, &Global_49399, "ST_FD", 8, 1, Function_367());
	}
	else
	{
		Function_444(0, &Global_49310, "AM_SS", 3, 0, "challenge_01");
		Function_444(1, &Global_49310, "AM_MH", 3, 0, "challenge_02");
		Function_444(2, &Global_49310, "AM_SU", 3, 0, "challenge_03");
		Function_444(3, &Global_49310, "AM_TH", 3, 0, "challenge_04");
		if (Function_570(32))
		{
			Function_431();
		}
		if (Function_570(64))
		{
			Function_414();
		}
	}
	return;
}

void Function_414() //Position: 0x11DB9 / 73145
{
	var uVar0;
	bool bVar4;
	
	strcpy(&Local_40 + 16, "AM_ER", 8);
	Local_40 = 26;
	Local_40.f_84 = 0;
	Function_425();
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_424(), 4);
	Local_40.f_24 = CREATE_JOURNAL_ENTRY(&uVar0, 3, 0, "challenge_01");
	if (Function_423(5))
	{
		CLEAR_JOURNAL_ENTRY(Local_40.f_24);
		PREPEND_JOURNAL_ENTRY(Local_40.f_24, 0);
		SET_JOURNAL_ENTRY_PROGRESS(Local_40.f_24, 0.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(Local_40.f_24, 0);
		Function_422();
	}
	if (StackVal == 10)
	{
		Function_416();
	}
	else
	{
		Local_40.f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Local_40.f_24, Local_40.f_12, 1, 0);
		bVar4 = Function_415();
		if (IS_LAYOUTREF_VALID(bVar4))
		{
			CREATE_OBJECTSET_IN_LAYOUT("AM_OBJSETER_SP", bVar4, 4294967295, 0);
		}
	}
	return;
}

var Function_415() //Position: 0x11E6D / 73325
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_416() //Position: 0x11EBA / 73402
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_40.f_24);
	memcpy(&Var0, StackVal, *(&Local_40 + 16), 6);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_417() };
	APPEND_JOURNAL_ENTRY_DETAIL(Local_40.f_24, &Var0, 0, 2, 0);
	PREPEND_JOURNAL_ENTRY(Local_40.f_24, 1);
	SET_JOURNAL_ENTRY_PROGRESS(Local_40.f_24, 1.0f, 0, 0);
	return;
}

struct<24> Function_417() //Position: 0x11EF7 / 73463
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_40 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	stradd(&cVar0, "_des", 24);
	stradd(&cVar0, "z", 24);
	if (StackVal == 4)
	{
		if (Function_418(4, 0))
		{
			stradd(&cVar0, "2", 24);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_418(var uParam0, bool bParam1) //Position: 0x11F4C / 73548
{
	int iVar0;
	
	iVar0 = Function_420(uParam0);
	if (!Function_419(iVar0))
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

bool Function_419(int iParam0) //Position: 0x11F89 / 73609
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_420(int iParam0) //Position: 0x11FA0 / 73632
{
	if (!Function_421(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_421(int iParam0) //Position: 0x11FBA / 73658
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_422() //Position: 0x11FD0 / 73680
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_40.f_24);
	PREPEND_JOURNAL_ENTRY(Local_40.f_24, 0);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_424() };
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_417() };
	PREPEND_JOURNAL_ENTRY_DETAIL(Local_40.f_24, &Var0, 0, 2, false);
	return;
}

bool Function_423(int iParam0) //Position: 0x11FFF / 73727
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

struct<24> Function_424() //Position: 0x12014 / 73748
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_40 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_425() //Position: 0x1203E / 73790
{
	iLocal_63 = Function_426(10, 1, 5);
	Local_40.f_8 = Global_13172[iLocal_6311].f_20;
	Local_40.f_12 = Global_13172[iLocal_6311].f_28;
	Local_40.f_28 = Global_13172[iLocal_6311].f_24;
	Local_40.f_32 = Global_13172[iLocal_6311].f_16;
	return;
}

int Function_426(int iParam0, int iParam1, int iParam2) //Position: 0x12081 / 73857
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_430(iParam0, iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_427(iParam0, iParam1, iParam2, iVar0);
		}
		iVar0++;
	}
	return Function_427(iParam0, iParam1, iParam2, 4294967295);
}

int Function_427(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x120DF / 73951
{
	var uVar0;
	
	if (!Function_429(iParam2))
	{
		return 4294967295;
	}
	if (iParam0 > 0 || iParam0 < 255)
	{
		return 4294967295;
	}
	if (iParam1 > 0 || iParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_430(iParam0, iParam1, iParam2);
	if (iParam3 != 4294967295 || iParam3 <= 275)
	{
		iParam3 = Function_428(uVar0);
	}
	if (iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[iParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
		Global_16198[iParam3] = 0;
		Global_13172[iParam311].f_4 = 0;
		Global_13172[iParam311].f_8 = 0;
		Global_13172[iParam311].f_12 = 0;
		Global_13172[iParam311].f_16 = 0;
		Global_13172[iParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
	}
	return iParam3;
}

int Function_428(int iParam0) //Position: 0x12234 / 74292
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

bool Function_429(int iParam0) //Position: 0x12272 / 74354
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_430(int iParam0, int iParam1, var uParam2) //Position: 0x12287 / 74375
{
	return ((uParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_431() //Position: 0x122A7 / 74407
{
	var uVar0;
	bool bVar4;
	
	strcpy(&Local_18 + 16, "AM_TM", 8);
	Local_18 = 25;
	Local_18.f_84 = 0;
	Function_436();
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_435(), 4);
	Local_18.f_24 = CREATE_JOURNAL_ENTRY(&uVar0, 3, 0, "challenge_01");
	if (Function_423(5))
	{
		CLEAR_JOURNAL_ENTRY(Local_18.f_24);
		PREPEND_JOURNAL_ENTRY(Local_18.f_24, 0);
		SET_JOURNAL_ENTRY_PROGRESS(Local_18.f_24, 0.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(Local_18.f_24, 0);
		Function_434();
	}
	if (StackVal == 10)
	{
		Function_432();
	}
	else
	{
		Local_18.f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Local_18.f_24, Local_18.f_12, 1, 0);
		bVar4 = Function_415();
		if (IS_LAYOUTREF_VALID(bVar4))
		{
			CREATE_OBJECTSET_IN_LAYOUT("AM_OBJSETTM_SP", bVar4, 4294967295, 0);
		}
	}
	return;
}

void Function_432() //Position: 0x1235B / 74587
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_18.f_24);
	memcpy(&Var0, StackVal, *(&Local_18 + 16), 6);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_433() };
	APPEND_JOURNAL_ENTRY_DETAIL(Local_18.f_24, &Var0, 0, 2, 0);
	PREPEND_JOURNAL_ENTRY(Local_18.f_24, 1);
	SET_JOURNAL_ENTRY_PROGRESS(Local_18.f_24, 1.0f, 0, 0);
	return;
}

struct<24> Function_433() //Position: 0x12398 / 74648
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_18 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	stradd(&cVar0, "_des", 24);
	stradd(&cVar0, "z", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_434() //Position: 0x123D5 / 74709
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_18.f_24);
	PREPEND_JOURNAL_ENTRY(Local_18.f_24, 0);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_435() };
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_433() };
	PREPEND_JOURNAL_ENTRY_DETAIL(Local_18.f_24, &Var0, 0, 2, false);
	return;
}

struct<24> Function_435() //Position: 0x12404 / 74756
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_18 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_436() //Position: 0x1242E / 74798
{
	iLocal_62 = Function_426(9, 1, 5);
	Local_18.f_8 = Global_13172[iLocal_6211].f_20;
	Local_18.f_12 = Global_13172[iLocal_6211].f_28;
	Local_18.f_28 = Global_13172[iLocal_6211].f_24;
	Local_18.f_32 = Global_13172[iLocal_6211].f_16;
	return;
}

int Function_437() //Position: 0x12471 / 74865
{
	return "challenge_04lvl2";
}

int Function_438() //Position: 0x1248A / 74890
{
	return "challenge_04";
}

int Function_439() //Position: 0x1249F / 74911
{
	return "challenge_03lvl2";
}

int Function_440() //Position: 0x124B8 / 74936
{
	return "challenge_02lvl2";
}

int Function_441() //Position: 0x124D1 / 74961
{
	return "challenge_05";
}

int Function_442() //Position: 0x124E6 / 74982
{
	return "challenge_03";
}

int Function_443() //Position: 0x124FB / 75003
{
	return "challenge_02";
}

void Function_444(int iParam0, int iParam1, char* cParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x12510 / 75024
{
	int iVar0;
	var uVar1;
	
	strcpy(iParam1[iParam022] + 16, cParam2, 8);
	(*iParam1)[iParam022] = iParam0;
	iParam1[iParam022]->f_84 = bParam4;
	if (Global_3364 || Global_83864.f_1276)
	{
		iParam1[iParam022]->f_8 = 0;
		if (Global_34165.f_44)
		{
			Global_49399[iParam022].f_28 = 0;
			Global_49399[iParam022].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_49399[iParam022] + 36)[iVar0] = 0.0f;
				iVar0++;
			}
		}
		else
		{
			Global_49310[iParam022].f_28 = 0;
			Global_49310[iParam022].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_49310[iParam022] + 36)[iVar0] = 0.0f;
				iVar0++;
			}
		}
	}
	if (Global_83864.f_1276)
	{
		Function_457(iParam0, 4);
		Function_457(iParam0, 2);
		Function_456(iParam0, 0);
		Function_456(iParam0, 1);
		uVar1 = Function_455(iParam0);
		Function_454(&uVar1);
		Function_453(iParam0, 1);
	}
	if (bParam4)
	{
		if (!Global_34165.f_44)
		{
			iParam1[iParam022]->f_4 = 1;
			iParam1[iParam022]->f_8 = 0;
			return;
		}
	}
	if (!IS_STRING_VALID(iParam5))
	{
		bParam5 = "challenge_04";
	}
	Function_452(iParam0, iParam3, bParam5);
	Function_449(iParam0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_445(iParam0);
	}
	else
	{
		iParam1[iParam022]->f_4 = 0;
		iParam1[iParam022]->f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_333(iParam0), 0.0f, 1, 0);
	}
}

void Function_445(int iParam0) //Position: 0x12681 / 75393
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_333(iParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_448(iParam0) };
	if (Function_70() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_447(iParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[iParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_446(iParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_333(iParam0), &Var6, 0, 2, 0);
	PREPEND_JOURNAL_ENTRY(Function_333(iParam0), 1);
	SET_JOURNAL_ENTRY_PROGRESS(Function_333(iParam0), 1.0f, 0, 0);
	return;
}

struct<24> Function_446(int iParam0) //Position: 0x126F4 / 75508
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_447(iParam0) };
	if (Global_34165.f_44 || Function_70())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_447(iParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_447(int iParam0) //Position: 0x12751 / 75601
{
	char* cVar0[24];
	
	if (Function_70() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_448(int iParam0) //Position: 0x127C3 / 75715
{
	char* cVar0[24];
	
	if (Function_70() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_449(int iParam0, bool bParam1) //Position: 0x1282F / 75823
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_333(iParam0));
	if ((bParam1 && Function_451(iParam0, 4)) || !bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_333(iParam0), 0);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_448(iParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_447(iParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_446(iParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_333(iParam0), &Var6, 0, 2, Function_451(iParam0, 4));
		if (iParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_333(iParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!bParam1)
		{
			Function_450(iParam0, 4);
		}
	}
	return;
}

void Function_450(int iParam0, int iParam1) //Position: 0x128B6 / 75958
{
	if (Function_70() || Global_34165.f_44)
	{
		Function_17(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_17(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

bool Function_451(int iParam0, bool bParam1) //Position: 0x128E7 / 76007
{
	if (Function_70() || Global_34165.f_44)
	{
		return Function_351(Global_49399[iParam022].f_32, bParam1);
	}
	return Function_351(Global_49310[iParam022].f_32, bParam1);
}

var Function_452(int iParam0, int iParam1, int iParam2) //Position: 0x12919 / 76057
{
	struct<6> Var0;
	var uVar6;
	var uVar10;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_448(iParam0) };
	if (Function_70() || Global_34165.f_44)
	{
		Global_49399[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, uParam1, 0, iParam2);
		memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_447(iParam0), 4);
		UI_SET_STRING(&Var0, UI_GET_STRING(&uVar6));
		return Global_49399[iParam022].f_24;
	}
	Global_49310[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, 0, iParam2);
	memcpy(&uVar10, StackVal, StackVal, StackVal, StackVal, StackVal, Function_447(iParam0), 4);
	UI_SET_STRING(&Var0, UI_GET_STRING(&uVar10));
	return Global_49310[iParam022].f_24;
}

void Function_453(bool bParam0, bool bParam1) //Position: 0x12998 / 76184
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_415();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			if (Function_70() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (Function_70() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		if (Function_70() || Global_34165.f_44)
		{
			Global_49399[bParam022].f_28 = 0;
		}
		else
		{
			Global_49310[bParam022].f_28 = 0;
		}
	}
	return;
}

void Function_454(int iParam0) //Position: 0x12B58 / 76632
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (IS_OBJECTSET_VALID(*iParam0))
	{
		iVar0 = 0;
		if (GET_OBJECTSET_SIZE(*iParam0) >= iVar0)
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, *iParam0);
			while (IS_OBJECT_VALID(bVar1))
			{
				if (DECOR_CHECK_EXIST(bVar1, "AM_NO_PURGE"))
				{
					iVar2 = DECOR_GET_INT(bVar1, "AM_NO_PURGE");
					iVar2 = (iVar2 - 1);
					DECOR_SET_INT(bVar1, "AM_NO_PURGE", iVar2);
				}
				iVar0++;
				if (GET_OBJECTSET_SIZE(*iParam0) >= iVar0)
				{
					bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, *iParam0);
				}
				else
				{
					bVar1 = "";
				}
			}
		}
		DISBAND_OBJECTSET(*iParam0);
	}
	else
	{
		LOG_ERROR("AM_PURGE_COLLECTION: attempting to disband an invalid objectset");
	}
	return;
}

var Function_455(int iParam0) //Position: 0x12C41 / 76865
{
	int iVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar1 = Function_415();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		strcpy(&cVar2, "nAM_OBJSET", 16);
		straddi(&cVar2, iParam0, 16);
		iVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar1, &cVar2));
	}
	return iVar0;
}

void Function_456(int iParam0, int iParam1) //Position: 0x12C78 / 76920
{
	if (Global_34165.f_44)
	{
		REMOVE_JOURNAL_ENTRY(Global_49399[iParam022].f_24, iParam1);
	}
	else
	{
		REMOVE_JOURNAL_ENTRY(Global_49310[iParam022].f_24, iParam1);
	}
	return;
}

void Function_457(int iParam0, int iParam1) //Position: 0x12CA5 / 76965
{
	if (Global_34165.f_44)
	{
		Function_71(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_71(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

void Function_458() //Position: 0x12CD2 / 77010
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	char* cVar7[16];
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (Global_63000 - 1))
	{
		Function_460(bVar0);
		bVar0++;
	}
	bVar1 = Function_415();
	iVar2 = Function_459();
	if (Global_34165.f_44)
	{
		bVar0 = false;
		while (bVar0 < 35)
		{
			strcpy(&cVar3, "nAM_OBJSET", 16);
			stradd(&cVar3, INT_TO_STRING(bVar0), 16);
			CREATE_OBJECTSET_IN_LAYOUT(&cVar3, bVar1, 4294967295, 0);
			bVar0++;
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < 3)
		{
			strcpy(&cVar7, "nAM_OBJSET", 16);
			stradd(&cVar7, INT_TO_STRING(bVar0), 16);
			CREATE_OBJECTSET_IN_LAYOUT(&cVar7, bVar1, 4294967295, 0);
			bVar0++;
		}
	}
	ITERATE_EVERYWHERE(iVar2);
	ITERATE_ON_OBJECT_TYPE(iVar2, 3);
	ITERATE_IN_LAYOUT(iVar2, bVar1);
	return;
}

var Function_459() //Position: 0x12D88 / 77192
{
	char* cVar0;
	int iVar1;
	
	cVar0 = Function_415();
	iVar1 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(cVar0, "AmbientMissions_Iterator"));
	if (!IS_ITERATOR_VALID(iVar1))
	{
		iVar1 = CREATE_NAMED_OBJECT_ITERATOR(bVar0, "AmbientMissions_Iterator");
	}
	return iVar1;
}

void Function_460(int iParam0) //Position: 0x12DE5 / 77285
{
	Global_63000[iParam08] = 4294967295;
	Global_63000[iParam08].f_4 = 4294967295;
	strcpy(&Global_63000[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63000[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_461() //Position: 0x12E21 / 77345
{
	Function_485();
	Function_465();
	Function_462();
	return;
}

void Function_462() //Position: 0x12E30 / 77360
{
	Function_399(187, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(188, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(189, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(190, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(191, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(192, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(193, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(194, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(195, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(196, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(197, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(198, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(199, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(200, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(201, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(202, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(203, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(204, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(205, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(206, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_399(207, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(208, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(209, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(210, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(211, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(212, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(213, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(214, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(215, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(216, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(217, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(218, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(219, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(220, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(221, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(222, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(223, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(224, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(225, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_399(226, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_463(10, &Global_49399, 5, 25, 50);
	Function_463(12, &Global_49399, 5, 25, 50);
	Function_399(0, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(1, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(2, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(3, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(4, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(5, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 7, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(6, &Global_50170, 5, TO_FLOAT(50), 10, TO_FLOAT(100), 15, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(7, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_399(8, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_399(9, &Global_50170, 3, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(10, &Global_50170, 10, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(11, &Global_50170, 20, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(12, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(13, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(14, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(15, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(16, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(17, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(19, &Global_50170, 1, TO_FLOAT(50), 3, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_399(21, &Global_50170, 1, TO_FLOAT(50), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(20, &Global_50170, 5, TO_FLOAT(50), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(22, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(25, &Global_50170, 25, TO_FLOAT(50), 100, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_399(26, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(27, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(31, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(32, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(33, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_399(34, &Global_50170, 5, TO_FLOAT(50), 25, TO_FLOAT(100), 75, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(35, &Global_50170, 1, TO_FLOAT(50), 2, TO_FLOAT(100), 3, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(36, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(37, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(38, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(39, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(40, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(41, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_399(42, &Global_50170, 5, TO_FLOAT(50), 25, TO_FLOAT(100), 75, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(43, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 7, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(44, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(45, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(46, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(47, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(48, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_399(49, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(50, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(51, &Global_50170, 2, TO_FLOAT(50), 3, TO_FLOAT(100), 5, TO_FLOAT(150), 0, 0, 0, 0);
	Function_399(52, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(54, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(55, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(56, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_399(57, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_463(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x138A8 / 80040
{
	switch (StackVal)
	{
		case 0x00000000:
			uParam1[iParam022]->f_12 = Function_274(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam2)));
			break;
		
		case 0x00000001:
			uParam1[iParam022]->f_12 = Function_274(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam3)));
			break;
		
		case 0x00000002:
			uParam1[iParam022]->f_12 = Function_274(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam4)));
			break;
		
		case 0x0000000A:
			Function_445(iParam0);
			return;
			break;
	}
	Function_464(iParam0, uParam1[iParam022]->f_12, 0, 4294967295, 4294967295, 4294967295, 0);
}

void Function_464(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x13952 / 80210
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_333(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		if (((iParam0 != 12 || iParam0 != 13) || iParam0 != 10) || iParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_447(iParam0) };
			stradd(&cVar0, "_info", 24);
			memcpy(&cVar6, StackVal, *(&Global_49399[iParam022] + 16), 6);
			stradd(&cVar6, "_num", 24);
			if (bParam3 >= 4294967295)
			{
				UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
			}
			if (bParam4 >= 4294967295)
			{
				strcpy(&cVar12, "PVP_num2", 16);
				UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
			}
			if (bParam5 >= 4294967295)
			{
				strcpy(&cVar16, "PVP_num3", 16);
				UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_333(iParam0), &cVar0, 2, 2, 0);
			Function_60(Function_333(iParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_447(iParam0) };
			if (Function_70() || Global_34165.f_44)
			{
				stradd(&cVar20, "_info_mp", 24);
			}
			else
			{
				stradd(&cVar20, "_info", 24);
			}
			if (bParam3 >= 4294967295)
			{
				strcpy(&cVar26, "AM_num", 24);
				stradd(&cVar26, INT_TO_STRING((1 + iParam6)), 24);
				UI_SET_STRING(&cVar26, INT_TO_STRING(bParam3));
			}
			if (bParam4 >= 4294967295)
			{
				strcpy(&cVar32, "AM_num", 24);
				stradd(&cVar32, INT_TO_STRING((2 + iParam6)), 24);
				UI_SET_STRING(&cVar32, INT_TO_STRING(bParam4));
			}
			if (bParam5 >= 4294967295)
			{
				strcpy(&cVar38, "AM_num", 24);
				stradd(&cVar38, INT_TO_STRING((3 + iParam6)), 24);
				UI_SET_STRING(&cVar38, INT_TO_STRING(bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_333(iParam0), &cVar20, 2, 2, 1);
			Function_60(Function_333(iParam0), 0);
		}
	}
}

void Function_465() //Position: 0x13ADD / 80605
{
	Function_365(0, &Global_50170, "PVDM_1", 1, 6, Function_484());
	Function_365(1, &Global_50170, "PVDM_2", 1, 6, Function_484());
	Function_365(2, &Global_50170, "PVTD_1", 1, 6, Function_483());
	Function_365(3, &Global_50170, "PVTD_2", 1, 6, Function_483());
	Function_365(4, &Global_50170, "PVTD_3", 1, 6, Function_483());
	Function_365(5, &Global_50170, "PVKS_1", 1, 6, Function_482());
	Function_365(6, &Global_50170, "PVKS_2", 1, 6, Function_482());
	Function_365(7, &Global_50170, "PVKS2_1", 1, 6, Function_481());
	Function_365(8, &Global_50170, "PVKS2_2", 1, 6, Function_481());
	Function_365(9, &Global_50170, "PVKS2_3", 1, 6, Function_481());
	Function_365(10, &Global_50170, "PVKS2_4", 1, 6, Function_481());
	Function_365(11, &Global_50170, "PVKS2_5", 1, 6, Function_481());
	Function_365(12, &Global_50170, "PVKD_1", 1, 6, Function_480());
	Function_365(13, &Global_50170, "PVKD_2", 1, 6, Function_480());
	Function_365(14, &Global_50170, "PVKD_3", 1, 6, Function_480());
	Function_365(15, &Global_50170, "PVUS1_1", 1, 6, Function_479());
	Function_365(16, &Global_50170, "PVUS1_2", 1, 6, Function_479());
	Function_365(17, &Global_50170, "PVUS1_3", 1, 6, Function_479());
	Function_365(18, &Global_50170, "PVUS2", 1, 6, Function_479());
	Function_365(19, &Global_50170, "PVRV_1", 1, 6, Function_409());
	Function_365(20, &Global_50170, "PVRV_2", 1, 6, Function_409());
	Function_365(21, &Global_50170, "PVRV_3", 1, 6, Function_409());
	Function_365(22, &Global_50170, "PVTS1_1", 1, 6, Function_410());
	Function_365(25, &Global_50170, "PVTS1_4", 1, 6, Function_410());
	Function_365(26, &Global_50170, "PVTS1_5", 1, 6, Function_410());
	Function_365(27, &Global_50170, "PVTS2_1", 1, 6, Function_410());
	Function_365(31, &Global_50170, "PVHYD_1", 1, 6, Function_478());
	Function_365(32, &Global_50170, "PVHYW_1", 1, 6, Function_478());
	Function_365(33, &Global_50170, "PVHYG_1", 1, 6, Function_478());
	Function_365(34, &Global_50170, "PVHYS_1", 1, 6, Function_478());
	Function_365(35, &Global_50170, "PVHYO_1", 1, 6, Function_478());
	Function_365(36, &Global_50170, "PVHYM_1", 1, 6, Function_478());
	Function_365(37, &Global_50170, "PVHYC_1", 1, 6, Function_478());
	Function_365(38, &Global_50170, "PVHYK_1", 1, 6, Function_478());
	Function_365(39, &Global_50170, "PVGTD_1", 1, 6, Function_477());
	Function_365(40, &Global_50170, "PVGTW_1", 1, 6, Function_477());
	Function_365(41, &Global_50170, "PVGTG_1", 1, 6, Function_477());
	Function_365(42, &Global_50170, "PVGTS_1", 1, 6, Function_476());
	Function_365(43, &Global_50170, "PVGTO_1", 1, 6, Function_476());
	Function_365(44, &Global_50170, "PVGTM_1", 1, 6, Function_476());
	Function_365(45, &Global_50170, "PVGTC_1", 1, 6, Function_476());
	Function_365(46, &Global_50170, "PVFFD_1", 1, 6, Function_475());
	Function_365(47, &Global_50170, "PVFFW_1", 1, 6, Function_475());
	Function_365(48, &Global_50170, "PVFFG_1", 1, 6, Function_475());
	Function_365(49, &Global_50170, "PVHWC", 1, 6, Function_474());
	Function_365(50, &Global_50170, "PVHWG", 1, 6, Function_474());
	Function_365(51, &Global_50170, "PVHMC", 1, 6, Function_474());
	Function_365(52, &Global_50170, "PVHCC", 1, 6, Function_474());
	Function_365(54, &Global_50170, "OC_SU", 1, 3, Function_438());
	Function_365(55, &Global_50170, "OC_W2_1", 1, 3, Function_437());
	Function_365(56, &Global_50170, "OC_W2_2", 1, 3, Function_437());
	Function_365(57, &Global_50170, "OC_W2_3", 1, 3, Function_437());
	Function_365(58, &Global_50170, "CA", 1, 7, Function_473());
	Function_365(59, &Global_50170, "CAKD", 1, 7, Function_473());
	Function_365(60, &Global_50170, "CAND", 1, 7, Function_473());
	Function_365(62, &Global_50170, "CASL", 1, 7, Function_473());
	Function_365(61, &Global_50170, "CAMK", 1, 7, Function_473());
	Function_365(63, &Global_50170, "CAMN", 1, 7, Function_473());
	Function_365(64, &Global_50170, "CAGN", 1, 7, Function_473());
	Function_365(65, &Global_50170, "COR1", 1, 7, Function_473());
	Function_365(66, &Global_50170, "COR10", 1, 7, Function_473());
	Function_365(67, &Global_50170, "COR50", 1, 7, Function_473());
	Function_365(68, &Global_50170, "COR250", 1, 7, Function_473());
	Function_365(69, &Global_50170, "COD1", 1, 7, Function_473());
	Function_365(70, &Global_50170, "COD10", 1, 7, Function_473());
	Function_365(71, &Global_50170, "COD50", 1, 7, Function_473());
	Function_365(72, &Global_50170, "COD250", 1, 7, Function_473());
	Function_365(73, &Global_50170, "COA1", 1, 7, Function_473());
	Function_365(74, &Global_50170, "COA10", 1, 7, Function_473());
	Function_365(75, &Global_50170, "COA50", 1, 7, Function_473());
	Function_365(76, &Global_50170, "COA250", 1, 7, Function_473());
	Function_365(77, &Global_50170, "CSPKTM1", 1, 7, Function_472());
	Function_365(78, &Global_50170, "CSPKTM2", 1, 7, Function_472());
	Function_365(79, &Global_50170, "CSPKTM3", 1, 7, Function_472());
	Function_365(80, &Global_50170, "CSPKKS1", 1, 7, Function_472());
	Function_365(81, &Global_50170, "CSPKKS2", 1, 7, Function_472());
	Function_365(82, &Global_50170, "CSPKKS3", 1, 7, Function_472());
	Function_365(83, &Global_50170, "CSPKKL1", 1, 7, Function_472());
	Function_365(84, &Global_50170, "CSPKKL2", 1, 7, Function_472());
	Function_365(85, &Global_50170, "CSPKKL3", 1, 7, Function_472());
	Function_365(86, &Global_50170, "CSPKND", 1, 7, Function_472());
	Function_365(87, &Global_50170, "CSPKNN", 1, 7, Function_472());
	Function_365(88, &Global_50170, "CSPKCW1", 1, 7, Function_472());
	Function_365(89, &Global_50170, "CSPKCW2", 1, 7, Function_472());
	Function_365(90, &Global_50170, "CSPKCW3", 1, 7, Function_472());
	Function_365(91, &Global_50170, "CSFMTM1", 1, 7, Function_471());
	Function_365(92, &Global_50170, "CSFMTM2", 1, 7, Function_471());
	Function_365(93, &Global_50170, "CSFMTM3", 1, 7, Function_471());
	Function_365(94, &Global_50170, "CSFMKS1", 1, 7, Function_471());
	Function_365(95, &Global_50170, "CSFMKS2", 1, 7, Function_471());
	Function_365(96, &Global_50170, "CSFMKS3", 1, 7, Function_471());
	Function_365(97, &Global_50170, "CSFMKL1", 1, 7, Function_471());
	Function_365(98, &Global_50170, "CSFMKL2", 1, 7, Function_471());
	Function_365(99, &Global_50170, "CSFMKL3", 1, 7, Function_471());
	Function_365(100, &Global_50170, "CSFMND", 1, 7, Function_471());
	Function_365(101, &Global_50170, "CSFMNN", 1, 7, Function_471());
	Function_365(102, &Global_50170, "CSFMGT1", 1, 7, Function_471());
	Function_365(103, &Global_50170, "CSFMGT2", 1, 7, Function_471());
	Function_365(104, &Global_50170, "CSFMGT3", 1, 7, Function_471());
	Function_365(105, &Global_50170, "CSTSTM1", 1, 7, Function_470());
	Function_365(106, &Global_50170, "CSTSTM2", 1, 7, Function_470());
	Function_365(107, &Global_50170, "CSTSTM3", 1, 7, Function_470());
	Function_365(108, &Global_50170, "CSTSKS1", 1, 7, Function_470());
	Function_365(109, &Global_50170, "CSTSKS2", 1, 7, Function_470());
	Function_365(110, &Global_50170, "CSTSKS3", 1, 7, Function_470());
	Function_365(111, &Global_50170, "CSTSKL1", 1, 7, Function_470());
	Function_365(112, &Global_50170, "CSTSKL2", 1, 7, Function_470());
	Function_365(113, &Global_50170, "CSTSKL3", 1, 7, Function_470());
	Function_365(114, &Global_50170, "CSTSND", 1, 7, Function_470());
	Function_365(115, &Global_50170, "CSTSNN", 1, 7, Function_470());
	Function_365(116, &Global_50170, "CSTSGT1", 1, 7, Function_470());
	Function_365(117, &Global_50170, "CSTSGT2", 1, 7, Function_470());
	Function_365(118, &Global_50170, "CSTSGT3", 1, 7, Function_470());
	Function_365(119, &Global_50170, "CSGPTM1", 1, 7, Function_469());
	Function_365(120, &Global_50170, "CSGPTM2", 1, 7, Function_469());
	Function_365(121, &Global_50170, "CSGPTM3", 1, 7, Function_469());
	Function_365(122, &Global_50170, "CSGPKS1", 1, 7, Function_469());
	Function_365(123, &Global_50170, "CSGPKS2", 1, 7, Function_469());
	Function_365(124, &Global_50170, "CSGPKS3", 1, 7, Function_469());
	Function_365(125, &Global_50170, "CSGPKL1", 1, 7, Function_469());
	Function_365(126, &Global_50170, "CSGPKL2", 1, 7, Function_469());
	Function_365(127, &Global_50170, "CSGPKL3", 1, 7, Function_469());
	Function_365(128, &Global_50170, "CSGPND", 1, 7, Function_469());
	Function_365(129, &Global_50170, "CSGPNN", 1, 7, Function_469());
	Function_365(130, &Global_50170, "CSGPBG1", 1, 7, Function_469());
	Function_365(131, &Global_50170, "CSGPBG2", 1, 7, Function_469());
	Function_365(132, &Global_50170, "CSGPBG3", 1, 7, Function_469());
	Function_365(133, &Global_50170, "CSTMTM1", 1, 7, Function_468());
	Function_365(134, &Global_50170, "CSTMTM2", 1, 7, Function_468());
	Function_365(135, &Global_50170, "CSTMTM3", 1, 7, Function_468());
	Function_365(136, &Global_50170, "CSTMKS1", 1, 7, Function_468());
	Function_365(137, &Global_50170, "CSTMKS2", 1, 7, Function_468());
	Function_365(138, &Global_50170, "CSTMKS3", 1, 7, Function_468());
	Function_365(139, &Global_50170, "CSTMKL1", 1, 7, Function_468());
	Function_365(140, &Global_50170, "CSTMKL2", 1, 7, Function_468());
	Function_365(141, &Global_50170, "CSTMKL3", 1, 7, Function_468());
	Function_365(142, &Global_50170, "CSTMND", 1, 7, Function_468());
	Function_365(143, &Global_50170, "CSTMNN", 1, 7, Function_468());
	Function_365(144, &Global_50170, "CSTMCK1", 1, 7, Function_468());
	Function_365(145, &Global_50170, "CSTMCK2", 1, 7, Function_468());
	Function_365(146, &Global_50170, "CSTMCK3", 1, 7, Function_468());
	Function_365(147, &Global_50170, "CSNSTM1", 1, 7, Function_467());
	Function_365(148, &Global_50170, "CSNSTM2", 1, 7, Function_467());
	Function_365(149, &Global_50170, "CSNSTM3", 1, 7, Function_467());
	Function_365(150, &Global_50170, "CSNSKS1", 1, 7, Function_467());
	Function_365(151, &Global_50170, "CSNSKS2", 1, 7, Function_467());
	Function_365(152, &Global_50170, "CSNSKS3", 1, 7, Function_467());
	Function_365(153, &Global_50170, "CSNSKL1", 1, 7, Function_467());
	Function_365(154, &Global_50170, "CSNSKL2", 1, 7, Function_467());
	Function_365(155, &Global_50170, "CSNSKL3", 1, 7, Function_467());
	Function_365(156, &Global_50170, "CSNSND", 1, 7, Function_467());
	Function_365(157, &Global_50170, "CSNSNN", 1, 7, Function_467());
	Function_365(158, &Global_50170, "CSNSHT1", 1, 7, Function_467());
	Function_365(159, &Global_50170, "CSNSHT2", 1, 7, Function_467());
	Function_365(160, &Global_50170, "CSNSHT3", 1, 7, Function_467());
	Function_365(161, &Global_50170, "CAA", 1, 7, Function_466());
	Function_365(162, &Global_50170, "CAAKD", 1, 7, Function_466());
	Function_365(163, &Global_50170, "CAAND", 1, 7, Function_466());
	Function_365(164, &Global_50170, "CAAMK", 1, 7, Function_466());
	Function_365(165, &Global_50170, "CAASL", 1, 7, Function_466());
	Function_365(166, &Global_50170, "CAAMN", 1, 7, Function_466());
	Function_365(167, &Global_50170, "CAAGN", 1, 7, Function_466());
	Function_365(168, &Global_50170, "CAACU", 1, 7, Function_466());
	Function_365(169, &Global_50170, "CAPKTM1", 1, 7, Function_466());
	Function_365(170, &Global_50170, "CAPKTM2", 1, 7, Function_466());
	Function_365(171, &Global_50170, "CAPKTM3", 1, 7, Function_466());
	Function_365(172, &Global_50170, "CAFMTM1", 1, 7, Function_466());
	Function_365(173, &Global_50170, "CAFMTM2", 1, 7, Function_466());
	Function_365(174, &Global_50170, "CAFMTM3", 1, 7, Function_466());
	Function_365(175, &Global_50170, "CATSTM1", 1, 7, Function_466());
	Function_365(176, &Global_50170, "CATSTM2", 1, 7, Function_466());
	Function_365(177, &Global_50170, "CATSTM3", 1, 7, Function_466());
	Function_365(178, &Global_50170, "CAGPTM1", 1, 7, Function_466());
	Function_365(179, &Global_50170, "CAGPTM2", 1, 7, Function_466());
	Function_365(180, &Global_50170, "CAGPTM3", 1, 7, Function_466());
	Function_365(181, &Global_50170, "CATMTM1", 1, 7, Function_466());
	Function_365(182, &Global_50170, "CATMTM2", 1, 7, Function_466());
	Function_365(183, &Global_50170, "CATMTM3", 1, 7, Function_466());
	Function_365(184, &Global_50170, "CANSTM1", 1, 7, Function_466());
	Function_365(185, &Global_50170, "CANSTM2", 1, 7, Function_466());
	Function_365(186, &Global_50170, "CANSTM3", 1, 7, Function_466());
	Function_365(187, &Global_50170, "WP_REP", 1, 5, Function_403());
	Function_365(188, &Global_50170, "WP_VOL", 1, 5, Function_403());
	Function_365(189, &Global_50170, "WP_WIN", 1, 5, Function_403());
	Function_365(190, &Global_50170, "WP_SCH", 1, 5, Function_403());
	Function_365(191, &Global_50170, "WP_PMP", 1, 5, Function_403());
	Function_365(192, &Global_50170, "WP_SPR", 1, 5, Function_403());
	Function_365(193, &Global_50170, "WP_DBL", 1, 5, Function_403());
	Function_365(194, &Global_50170, "WP_SAW", 1, 5, Function_403());
	Function_365(195, &Global_50170, "WP_ROL", 1, 5, Function_403());
	Function_365(196, &Global_50170, "WP_SEMP", 1, 5, Function_403());
	Function_365(197, &Global_50170, "WP_SEMS", 1, 5, Function_403());
	Function_365(198, &Global_50170, "WP_CAR", 1, 5, Function_403());
	Function_365(199, &Global_50170, "WP_BUF", 1, 5, Function_403());
	Function_365(200, &Global_50170, "WP_HEN", 1, 5, Function_403());
	Function_365(201, &Global_50170, "WP_HPW", 1, 5, Function_403());
	Function_365(202, &Global_50170, "WP_DBB", 1, 5, Function_403());
	Function_365(203, &Global_50170, "WP_BLT", 1, 5, Function_403());
	Function_365(204, &Global_50170, "WP_EVN", 1, 5, Function_403());
	Function_365(205, &Global_50170, "WP_LMT", 1, 5, Function_403());
	Function_365(206, &Global_50170, "WP_MSR", 1, 5, Function_403());
	Function_365(207, &Global_50170, "WP_REP2", 1, 5, Function_402());
	Function_365(208, &Global_50170, "WP_VOL2", 1, 5, Function_402());
	Function_365(209, &Global_50170, "WP_WIN2", 1, 5, Function_402());
	Function_365(210, &Global_50170, "WP_SCH2", 1, 5, Function_402());
	Function_365(211, &Global_50170, "WP_PMP2", 1, 5, Function_402());
	Function_365(212, &Global_50170, "WP_SPR2", 1, 5, Function_402());
	Function_365(213, &Global_50170, "WP_DBL2", 1, 5, Function_402());
	Function_365(214, &Global_50170, "WP_SAW2", 1, 5, Function_402());
	Function_365(215, &Global_50170, "WP_ROL2", 1, 5, Function_402());
	Function_365(216, &Global_50170, "WP_SAP2", 1, 5, Function_402());
	Function_365(217, &Global_50170, "WP_SAS2", 1, 5, Function_402());
	Function_365(218, &Global_50170, "WP_CAR2", 1, 5, Function_402());
	Function_365(219, &Global_50170, "WP_BUF2", 1, 5, Function_402());
	Function_365(220, &Global_50170, "WP_HEN2", 1, 5, Function_402());
	Function_365(221, &Global_50170, "WP_HPW2", 1, 5, Function_402());
	Function_365(222, &Global_50170, "WP_DBB2", 1, 5, Function_402());
	Function_365(223, &Global_50170, "WP_BLT2", 1, 5, Function_402());
	Function_365(224, &Global_50170, "WP_EVN2", 1, 5, Function_402());
	Function_365(225, &Global_50170, "WP_LMT2", 1, 5, Function_402());
	Function_365(226, &Global_50170, "WP_MSR2", 1, 5, Function_402());
	return;
}

int Function_466() //Position: 0x14E42 / 85570
{
	return "COOP_advanced_icon";
}

int Function_467() //Position: 0x14E5D / 85597
{
	return "SC_AA_Nosalida_Icon";
}

int Function_468() //Position: 0x14E79 / 85625
{
	return "SC_AA_TwinRocks_Icon";
}

int Function_469() //Position: 0x14E96 / 85654
{
	return "SC_AA_Gaptooth_Icon";
}

int Function_470() //Position: 0x14EB2 / 85682
{
	return "SC_AA_Tesoro_Icon";
}

int Function_471() //Position: 0x14ECC / 85708
{
	return "SC_AA_Mercer_Icon";
}

int Function_472() //Position: 0x14EE6 / 85734
{
	return "SC_AA_Pikes_Icon";
}

int Function_473() //Position: 0x14EFF / 85759
{
	return "nCOOP_icon";
}

int Function_474() //Position: 0x14F11 / 85777
{
	return "MP_HeavyWeapons_Icon";
}

int Function_475() //Position: 0x14F2E / 85806
{
	return "MP_Goldrush_icon";
}

int Function_476() //Position: 0x14F47 / 85831
{
	return "MP_GrabTheBagII_icon";
}

int Function_477() //Position: 0x14F64 / 85860
{
	return "MP_GrabTheBag_Icon";
}

int Function_478() //Position: 0x14F7F / 85887
{
	return "MP_HoldYourOwn_Icon";
}

int Function_479() //Position: 0x14F9B / 85915
{
	return "MP_Unstoppable_Icon";
}

int Function_480() //Position: 0x14FB7 / 85943
{
	return "MP_KDR_Icon";
}

int Function_481() //Position: 0x14FCB / 85963
{
	return "KillStreakII_Icon";
}

int Function_482() //Position: 0x14FE5 / 85989
{
	return "MP_KillStreak_Icon";
}

int Function_483() //Position: 0x15000 / 86016
{
	return "MP_TDM_Icon";
}

int Function_484() //Position: 0x15014 / 86036
{
	return "MP_DM_Icon";
}

void Function_485() //Position: 0x15027 / 86055
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Global_63041 - 1))
	{
		Function_486(iVar0);
		iVar0++;
	}
	return;
}

void Function_486(int iParam0) //Position: 0x1504B / 86091
{
	Global_63041[iParam08] = 4294967295;
	Global_63041[iParam08].f_4 = 4294967295;
	strcpy(&Global_63041[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63041[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_487() //Position: 0x15087 / 86151
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = Function_415();
	iVar1 = Function_459();
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		if (GET_NUM_ITERATOR_MATCHES(iVar1) >= 0)
		{
			bVar2 = START_OBJECT_ITERATOR(iVar1);
			while (IS_OBJECT_VALID(bVar2))
			{
				DESTROY_OBJECT(bVar2);
				bVar2 = OBJECT_ITERATOR_NEXT(iVar1);
			}
		}
	}
	return;
}

void Function_488(int iParam0) //Position: 0x150C6 / 86214
{
	var uVar0;
	var uVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	while (NET_SCRIPTMSG_ISPENDING(iParam0, &uVar1))
	{
		if (NET_SCRIPTMSG_QUERY_HANDLER(uVar1, &uVar0))
		{
			Stack.Push(iParam0);
			Call_Loc(uVar0);
		}
		else
		{
			Function_489(iParam0);
		}
	}
	return;
}

void Function_489(var uParam0) //Position: 0x150F8 / 86264
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_490() //Position: 0x15107 / 86279
{
	bool bVar0;
	int iVar1;
	
	if (Function_278(1048576))
	{
		return;
	}
	bVar0 = false;
	if (!Function_19(131072, 1) && Function_494() > 1000)
	{
		if (Function_493(35) > 6)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		iVar1 = (1000 - Function_494());
		if (iVar1 >= 0)
		{
			Function_491(StackVal, iVar1);
		}
		Function_669(0x2000000, 1);
	}
	return;
}

void Function_491(int iParam0, bool bParam1) //Position: 0x15162 / 86370
{
	if (!Function_225(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_26401[iParam0] = (Global_26401[iParam0] + bParam1);
	Function_492((*&Global_26401 + 2220)[iParam0], bParam1, 0, 0);
	Function_492(222, bParam1, 0, 0);
	return;
}

int Function_492(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x151A7 / 86439
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
	Function_221(iParam0, TO_FLOAT(bParam1), 1);
	Function_220(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_211(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

int Function_493(int iParam0) //Position: 0x153C7 / 86983
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_494() //Position: 0x153E0 / 87008
{
	return Global_78480.f_108;
}

void Function_495() //Position: 0x153EC / 87020
{
	bool bVar0;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	iLocal_525++;
	if (iLocal_525 >= 5)
	{
		iLocal_525 = 0;
		if (iLocal_269[GET_LOCAL_SLOT()] && (Function_173(&iLocal_247, fLocal_243) || !Function_575(&iLocal_247)))
		{
			Function_497(0);
		}
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_99(bVar0))
			{
				if ((iLocal_269[bVar0] && !Function_496(GET_LOCAL_SLOT(), bVar0)) && iLocal_524 == 1)
				{
					NET_GAMER_SET_BLIP_STEALTH_OVERRIDE(bVar0, 4);
					NET_GAMER_SET_ICON_STEALTH_OVERRIDE(bVar0, 4);
				}
				else
				{
					if (iLocal_524 != 1 && Function_496(GET_LOCAL_SLOT(), bVar0))
					{
						NET_GAMER_SET_ICON_STEALTH_OVERRIDE(bVar0, 0);
					}
					else
					{
						NET_GAMER_SET_ICON_STEALTH_OVERRIDE(bVar0, 4294967295);
					}
					NET_GAMER_SET_BLIP_STEALTH_OVERRIDE(bVar0, 4294967295);
				}
			}
			bVar0++;
		}
	}
	return;
}

bool Function_496(bool bParam0, bool bParam1) //Position: 0x15495 / 87189
{
	int iVar0;
	int iVar1;
	
	iVar0 = NET_GET_GAMER_POSSE_LEADER(iParam0);
	iVar1 = NET_GET_GAMER_POSSE_LEADER(bParam1);
	if (iVar0 != iVar1 && iVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

void Function_497(bool bParam0) //Position: 0x154B9 / 87225
{
	int iVar0;
	
	iVar0 = GET_LOCAL_SLOT();
	if (iVar0 > 0)
	{
		if (bParam0)
		{
			Function_610(&iLocal_247);
			iLocal_269[iVar0] = 1;
		}
		else
		{
			if (Function_575(&iLocal_247))
			{
				Function_498(&iLocal_247);
			}
			iLocal_269[iVar0] = 0;
		}
	}
	return;
}

void Function_498(bool bParam0) //Position: 0x154F4 / 87284
{
	if (Function_575(bParam0))
	{
		if (!Function_499(bParam0))
		{
			bParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_17(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_499(bool bParam0) //Position: 0x155B3 / 87475
{
	return Function_351(*bParam0, 2);
}

void Function_500() //Position: 0x155C0 / 87488
{
	if (Global_83822)
	{
		if (Function_186(Global_29006) && !HUD_IS_FADED())
		{
			Global_83864.f_1280 = 1;
			Global_83822 = 0;
		}
	}
	if (Global_84364.f_744)
	{
		if (Function_186(Global_29006) && !HUD_IS_FADED())
		{
			Function_522(&Global_83591);
			*(&Local_286 + 20 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_83591 + 276) };
			Function_501();
			Global_84364.f_744 = 0;
		}
	}
	return;
}

void Function_501() //Position: 0x15626 / 87590
{
	Global_83864.f_1276 = 1;
	Function_521(0);
	Function_517();
	Function_516();
	Function_514(Global_84364.f_708);
	Function_513(1000);
	Function_510();
	Function_509(Global_83864.f_1284, 0, 1);
	Function_508();
	Function_52(1);
	Function_502(Global_84364.f_708 * 100);
	return;
}

void Function_502(int iParam0) //Position: 0x15670 / 87664
{
	int iVar0;
	
	iVar0 = 837;
	while (iVar0 < 971)
	{
		if (Function_507(iVar0) == iParam0)
		{
			Function_503(iVar0);
		}
		iVar0++;
	}
	iVar0 = 1287;
	while (iVar0 < 1310)
	{
		if (Function_507(iVar0) == iParam0)
		{
			Function_503(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_503(int iParam0) //Position: 0x156C0 / 87744
{
	Function_17(&Global_83864 + 1976[Function_506(iParam0)], Function_504(iParam0));
	return;
}

int Function_504(int iParam0) //Position: 0x156DC / 87772
{
	return Function_192((Function_505(iParam0) % 32));
}

int Function_505(int iParam0) //Position: 0x156ED / 87789
{
	if (iParam0 > 1287)
	{
		return (iParam0 - 1287) + 134 + 1;
	}
	return (iParam0 - 837);
}

int Function_506(int iParam0) //Position: 0x1570C / 87820
{
	return (Function_505(iParam0) / 32);
}

int Function_507(int iParam0) //Position: 0x1571A / 87834
{
	return (ABS(GET_ACTORENUM_AVATAR_GROUP(iParam0)) % 1000);
}

void Function_508() //Position: 0x1572C / 87852
{
	bool bVar0;
	
	bVar0 = (Global_83864.f_1264 + 1 + Global_84364.f_708 * 50);
	NET_GAMERDATA_SET("Rank", bVar0);
	UPDATE_PROFILE_STAT("MpLevel", TO_FLOAT(bVar0), 1);
	return;
}

void Function_509(var uParam0, bool bParam1, bool bParam2) //Position: 0x15766 / 87910
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_17(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_17(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_510() //Position: 0x15793 / 87955
{
	Function_511(Function_329());
	return;
}

void Function_511(int iParam0) //Position: 0x1579F / 87967
{
	if (!Function_512(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	Global_83864.f_1284 = iParam0;
	return;
}

bool Function_512(int iParam0) //Position: 0x157CC / 88012
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_513(int iParam0) //Position: 0x157E3 / 88035
{
	if (!Function_512(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	strcpy(&Global_76870, GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0), 64);
	return;
}

void Function_514(int iParam0) //Position: 0x15812 / 88082
{
	Function_17(&Global_83864 + 1204[0], 1);
	switch (iParam0)
	{
		case 0x00000000:
			Function_515(1000, 0);
			Function_515(996, 3);
			Function_515(987, 7);
			Function_515(976, 21);
			Function_515(982, 32);
			Function_515(979, 39);
			Function_515(1006, 49);
			break;
		
		case 0x00000001:
			Function_515(1000, 0);
			Function_515(996, 3);
			Function_515(987, 7);
			Function_515(976, 10);
			Function_515(982, 21);
			Function_515(979, 32);
			Function_515(1006, 39);
			Function_515(1004, 49);
			break;
		
		case 0x00000002:
			Function_515(1000, 0);
			Function_515(996, 3);
			Function_515(987, 7);
			Function_515(976, 10);
			Function_515(982, 14);
			Function_515(979, 21);
			Function_515(1006, 32);
			Function_515(1004, 39);
			Function_515(1005, 49);
			break;
		
		case 0x00000003:
			Function_515(1000, 0);
			Function_515(996, 3);
			Function_515(987, 7);
			Function_515(976, 10);
			Function_515(982, 14);
			Function_515(979, 21);
			Function_515(1006, 25);
			Function_515(1004, 32);
			Function_515(1005, 39);
			Function_515(1007, 49);
			break;
		
		case 0x00000004:
			Function_515(1000, 0);
			Function_515(996, 3);
			Function_515(987, 7);
			Function_515(976, 10);
			Function_515(982, 14);
			Function_515(979, 21);
			Function_515(1006, 25);
			Function_515(1004, 32);
			Function_515(1005, 36);
			Function_515(1007, 41);
			Function_515(1003, 49);
			break;
	}
	return;
}

void Function_515(int iParam0, int iParam1) //Position: 0x159B3 / 88499
{
	Global_83864[iParam16].f_8 = iParam0;
	return;
}

void Function_516() //Position: 0x159C5 / 88517
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar0 <= 50)
	{
		Global_83864[iVar06].f_8 = 4294967295;
		iVar0++;
	}
	while (iVar1 <= 11)
	{
		Function_71(&Global_83864 + 1204[iVar1], 1);
		iVar1++;
	}
	return;
}

void Function_517() //Position: 0x15A0B / 88587
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 1;
	Global_83864.f_1260 = 0;
	Global_83864.f_1264 = 0;
	Global_83864.f_1268 = 0;
	Global_84364.f_708++;
	Function_520(487, 0.0f, 0);
	while (iVar0 <= 50)
	{
		Function_519(iVar0, 1);
		Function_71(&Global_83864[iVar06] + 20, 1);
		iVar0++;
	}
	while (iVar1 <= 40)
	{
		Global_84559[iVar1] = 0;
		iVar1++;
	}
	Function_518();
	return;
}

void Function_518() //Position: 0x15A88 / 88712
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 50)
	{
		Function_71(&Global_83864[iVar06] + 20, 1);
		iVar0++;
	}
	return;
}

void Function_519(int iParam0, int iParam1) //Position: 0x15AAF / 88751
{
	Function_71(&Global_83864[iParam06] + 16, iParam1);
	return;
}

int Function_520(int iParam0, float fParam1, bool bParam2) //Position: 0x15AC4 / 88772
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
	if (Global_34581[iParam0] > fParam1)
	{
		Function_221(iParam0, fParam1, 0);
	}
	Global_34581[iParam0] = fParam1;
	Function_220(iParam0);
	if (bParam2)
	{
		Function_211(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_521(bool bParam0) //Position: 0x15D30 / 89392
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	
	bVar0 = Function_612();
	bVar1 = false;
	if (Function_570(64) && !bParam0)
	{
		if (IS_ACTOR_VALID(bVar0))
		{
			if (ACTOR_HAS_WEAPON(bVar0, 31))
			{
				bVar1 = true;
			}
		}
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(41))
			{
				bVar1 = false;
			}
		}
	}
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	if (IS_WEAPONENUM_LOCKED(4))
	{
		SET_WEAPONENUM_LOCKED(4, 0);
	}
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 1.0f, 0, 1);
	ACTOR_SET_NEXT_WEAPON(bVar0, 4);
	_ADD_AMMO_OF_TYPE(bVar0, GET_AMMO_ENUM(4), (GET_WEAPON_MAX_AMMO(4) * 4.0f), 0, 0);
	if (IS_WEAPONENUM_LOCKED(22))
	{
		SET_WEAPONENUM_LOCKED(22, 0);
	}
	GIVE_WEAPON_TO_ACTOR(bVar0, 22, 1.0f, 0, 0);
	ACTOR_SET_NEXT_WEAPON(bVar0, 22);
	if (bVar1)
	{
		Var2 = 31;
		Var2.f_4 = 5;
		Function_200(StackVal, Var2, 1, 1, 0);
	}
	return;
}

void Function_522(int iParam0) //Position: 0x15DD8 / 89560
{
	Function_539(iParam0 + 276, 1);
	Function_538(iParam0);
	Function_536(iParam0, 1, 4, 7, 1);
	Function_536(iParam0, 2, 22, 1, 1);
	Function_531(iParam0, 1, 5, 5, 1);
	Function_531(iParam0, 2, 10, 3, 1);
	Function_531(iParam0, 3, 17, 1, 1);
	Function_531(iParam0, 4, 19, 1, 1);
	Function_531(iParam0, 5, 24, 1, 1);
	Function_529(iParam0, 5, 3);
	Function_529(iParam0, 4, 3);
	Function_529(iParam0, 3, 10);
	Function_529(iParam0, 7, 18);
	Function_529(iParam0, 6, 20);
	Function_529(iParam0, 8, 15);
	Function_529(iParam0, 9, 15);
	Function_529(iParam0, 10, 10);
	Function_529(iParam0, 11, 5);
	Function_528(iParam0, 0, 45.0f);
	Function_528(iParam0, 1, 45.0f);
	Function_528(iParam0, 2, 15.0f);
	Function_528(iParam0, 3, 15.0f);
	Function_528(iParam0, 4, 30.0f);
	Function_528(iParam0, 5, 30.0f);
	Function_527(iParam0, 15.0f);
	Function_526(iParam0, 15.0f);
	Function_525(iParam0, 15.0f);
	Function_524(iParam0 + 276 + 228, 100.0f);
	Function_523(iParam0 + 276, 0);
	return;
}

void Function_523(int iParam0, int iParam1) //Position: 0x15EEE / 89838
{
	(iParam0 + 228)->f_220 = 0;
	Function_17(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_524(var uParam0, int iParam1) //Position: 0x15F06 / 89862
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_525(int iParam0, int iParam1) //Position: 0x15F12 / 89874
{
	(iParam0 + 276 + 528)->f_28 = iParam1;
	return;
}

void Function_526(int iParam0, int iParam1) //Position: 0x15F24 / 89892
{
	(iParam0 + 276 + 528)->f_36 = iParam1;
	return;
}

void Function_527(int iParam0, int iParam1) //Position: 0x15F36 / 89910
{
	(iParam0 + 276 + 528)->f_32 = iParam1;
	return;
}

void Function_528(int iParam0, int iParam1, int iParam2) //Position: 0x15F48 / 89928
{
	if (iParam1 <= 0)
	{
	}
	else if (iParam1 >= 6)
	{
	}
	(*iParam0 + 276 + 528)[iParam1] = iParam2;
	return;
}

void Function_529(int iParam0, int iParam1, int iParam2) //Position: 0x15F6B / 89963
{
	Function_530(iParam0 + 276, iParam1, iParam2);
	return;
}

void Function_530(int iParam0, int iParam1, int iParam2) //Position: 0x15F7D / 89981
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_531(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x15F8E / 89998
{
	Function_532(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_532(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x15FA6 / 90022
{
	Function_533(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_533(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x15FBD / 90045
{
	if (!Function_535(iParam1))
	{
		return;
	}
	Function_534(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_534(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x15FE0 / 90080
{
	*uParam0 = bParam1;
	if (bParam3)
	{
		uParam0->f_4 = (CEIL(GET_WEAPON_MAX_AMMO(bParam1)) * iParam2);
	}
	else
	{
		uParam0->f_4 = iParam2;
	}
}

bool Function_535(int iParam0) //Position: 0x1600A / 90122
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_536(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1601A / 90138
{
	Function_537(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_537(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x16032 / 90162
{
	Function_533(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_538(int iParam0) //Position: 0x16047 / 90183
{
	iParam0->f_844 = 1;
	return;
}

void Function_539(int iParam0, bool bParam1) //Position: 0x16053 / 90195
{
	Function_542(iParam0);
	Function_542(iParam0 + 228);
	if (bParam1)
	{
		Function_540(iParam0);
	}
	return;
}

void Function_540(int iParam0) //Position: 0x1606F / 90223
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_541(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_541(var uParam0, int iParam1) //Position: 0x1608F / 90255
{
	Function_530(uParam0, iParam1, 0);
	return;
}

void Function_542(int iParam0) //Position: 0x1609D / 90269
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_543(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_524(iParam0, 0.0f);
	return;
}

void Function_543(var uParam0) //Position: 0x160CA / 90314
{
	Function_534(uParam0, 4294967295, 0, 1);
	return;
}

void Function_544() //Position: 0x160D8 / 90328
{
	var uVar0;
	
	if (Function_547(uLocal_240, 82, &uVar0, 0))
	{
		Function_546();
	}
	Function_545(uLocal_240);
	return;
}

void Function_545(int iParam0) //Position: 0x160F3 / 90355
{
	if (IS_OBJECTSET_VALID(iParam0))
	{
		DISBAND_OBJECTSET(iParam0);
	}
	return;
}

void Function_546() //Position: 0x16106 / 90374
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_436)
	{
		if (Local_436[iVar05].f_16 == 1)
		{
			Local_436[iVar05].f_4 = 0;
		}
		iVar0++;
	}
	iLocal_523 = 0;
	return;
}

bool Function_547(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1613B / 90427
{
	int iVar0;
	int iVar1;
	
	if (!IS_OBJECTSET_VALID(iParam0))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < (GET_OBJECTSET_SIZE(iParam0) - 1))
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar1, iParam0);
		if (iParam1 == GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(iVar0)))
		{
			*uParam2 = iVar0;
			if (bParam3)
			{
				REMOVE_OBJECT_FROM_OBJECTSET(iVar0, iParam0);
			}
			return 1;
		}
		iVar1++;
	}
	return 0;
}

var Function_548() //Position: 0x16194 / 90516
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_549(var uParam0) //Position: 0x161C3 / 90563
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &vVar0, 3);
	NET_LOG(1, "FRD Client", "RECV Payout for player #%s for %s XP, pType: %s", I2STR(vVar0.x), I2STR(CEIL(vVar0.y)), I2STR(vVar0.z), 0);
	if (vVar0.x == GET_LOCAL_SLOT())
	{
		vVar0.f_4 = TO_FLOAT(CEIL(vVar0.y));
		switch (vVar0.z)
		{
			case 0x00000000:
				Function_550(vVar0.y, "mp_FRD_BigPayout", 1);
				break;
			
			case 0x00000001:
				Function_550(vVar0.y, "XP_Coop_Consolation", 1);
				break;
			
			case 0x00000002:
				Function_550(vVar0.y, "FRD_StakeHolder", 1);
				break;
		}
		Local_201.f_104 = (Local_201.f_104 + vVar0.y);
	}
	return;
}

int Function_550(float fParam0, int iParam1, bool bParam2) //Position: 0x162C9 / 90825
{
	if (!Function_68())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_552(8, fParam0);
	}
	Function_551(487, (fParam0 * Global_3362), iParam1);
	return 1;
}

void Function_551(int iParam0, float fParam1, int iParam2) //Position: 0x162F9 / 90873
{
	Function_492(iParam0, CEIL(fParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

void Function_552(int iParam0, float fParam1) //Position: 0x16315 / 90901
{
	Function_15(iParam0, (Function_67(iParam0) + fParam1));
	return;
}

void Function_553(var uParam0) //Position: 0x16328 / 90920
{
	Function_554(&uLocal_416, uParam0);
	return;
}

void Function_554(bool bParam0, int iParam1) //Position: 0x16336 / 90934
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam1, &vVar0, 3);
	if (NET_IS_SESSION_HOST())
	{
		NET_LOG(1, "FRD Host", "RECV FRD Start Request for %s received from Player #%s, %s", Function_155(vVar0.z), I2STR(vVar0.x), GET_SLOT_NAME(vVar0.x), 0);
		switch (bParam0->f_48)
		{
			case 0xFFFFFFFF:
				if (!Function_105(bParam0))
				{
					NET_LOG(1, "FRD Host", "He has now started the FRD for the first time ever!", 0, 0, 0, 0);
					Function_562(bParam0, vVar0.z, vVar0.y, vVar0.x);
				}
				else if (vVar0.z != bParam0->f_72)
				{
					NET_LOG(1, "FRD Host", "He has now started the FRD in ANOTHER region", 0, 0, 0, 0);
					Function_562(bParam0, vVar0.z, vVar0.y, vVar0.x);
				}
				else if (Function_104(bParam0))
				{
					NET_LOG(1, "FRD Host", "He has now started the FRD in the SAME region because the timer's expired", 0, 0, 0, 0);
					Function_562(bParam0, vVar0.z, vVar0.y, vVar0.x);
				}
				else
				{
					NET_LOG(1, "FRD Host", "Nothing happened--the cooldown timer ain't ready.", 0, 0, 0, 0);
				}
				break;
			
			case 0xFFFFFFFE:
				if (vVar0.z == bParam0->f_68)
				{
					NET_LOG(1, "FRD Host", "He has now picked up the spoon!", 0, 0, 0, 0);
					Function_555(bParam0, vVar0.x, 1);
				}
				else
				{
					NET_LOG(1, "FRD Host", "Package came in for the wrong region. Ignoring.", 0, 0, 0, 0);
				}
				break;
			
			default:
				if (vVar0.z == bParam0->f_68)
				{
					NET_LOG(1, "FRD Host", "And they've snagged it away from #%s, %s!", I2STR(bParam0->f_48), GET_SLOT_NAME(bParam0->f_48), 0, 0);
					Function_555(bParam0, vVar0.x, 1);
				}
				else
				{
					NET_LOG(1, "FRD Host", "Package came in for the wrong region. Ignoring.", 0, 0, 0, 0);
				}
				break;
		}
	}
	else
	{
		NET_LOG(1, "FRD Client", "RECV FRD Start Request for %s received from Player #%s, %s, but ignored 'cuz we're not the host.", Function_155(vVar0.z), I2STR(vVar0.x), GET_SLOT_NAME(vVar0.x), 0);
	}
	return;
}

void Function_555(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16709 / 91913
{
	bool bVar0;
	float fVar1;
	
	if (bParam0->f_52 != bParam1)
	{
		bVar0 = false;
		if (Function_560(bParam0 + 36, Function_561(bParam2, iLocal_186, iLocal_187)))
		{
			bVar0 = Function_215(Function_559(bParam0), (iLocal_191 - CEIL(bParam0->f_64)));
			bParam0->f_64 = (bParam0->f_64 + IntToFloat(bVar0));
			NET_LOG(1, "FRD Host", "Pot Increased by %s from %s to %s.", I2STR(bVar0), I2STR((CEIL(bParam0->f_64) - bVar0)), I2STR(CEIL(bParam0->f_64)), 0);
			if (bParam2)
			{
				Function_93(bParam1, fLocal_183, 2);
			}
			fVar1 = Function_274(Function_557(bParam0), Function_101(0.0f, (fLocal_190 - Function_103(bParam0 + 12))));
			Function_556(bParam0 + 12, fVar1);
			NET_LOG(1, "FRD Host", "Time Increased by %s to %s.", F2STR(fVar1, 3, 2), F2STR(Function_103(bParam0 + 12), 3, 2), 0, 0);
		}
		else
		{
			NET_LOG(1, "FRD Host", "Pot Left @%s and Time left @%s because it's too soon for turnover", I2STR(CEIL(bParam0->f_64)), F2STR(Function_103(bParam0 + 12), 3, 2), 0, 0);
		}
	}
	else
	{
		NET_LOG(1, "FRD Host", "Didn't add time or pot because last owner is the same guy again (Old: %s v. New: %s)", I2STR(bParam0->f_52), I2STR(bParam1), 0, 0);
	}
	bParam0->f_52 = bParam0->f_48;
	bParam0->f_48 = bParam1;
	bParam0->f_56 = RAND_FLOAT_RANGE(0.0f, 1.0f) >= fLocal_197;
	return;
}

void Function_556(var uParam0, float fParam1) //Position: 0x1690E / 92430
{
	uParam0->f_4 = (StackVal + fParam1);
	return;
}

int Function_557(int iParam0) //Position: 0x1691F / 92447
{
	if (iParam0->f_64 <= IntToFloat(iLocal_191))
	{
		return iLocal_179;
	}
	return Function_101(iLocal_179, Function_558(iParam0, fLocal_178, fLocal_188, 0));
}

int Function_558(int iParam0, float fParam1, float fParam2, bool bParam3) //Position: 0x16942 / 92482
{
	float fVar0;
	
	if (!Function_105(iParam0 + 24))
	{
		return fParam1;
	}
	fVar0 = (fParam2 - (fParam2 * Function_101(0.0f, (Function_131(iParam0 + 24) / fLocal_193))));
	if (bParam3)
	{
		return (IntToFloat(ROUND((fVar0 / 5.0f))) * 5.0f);
	}
	return fVar0;
}

int Function_559(int iParam0) //Position: 0x16984 / 92548
{
	if (Function_157(64))
	{
		return CEIL(Function_558(iParam0, iLocal_181, iLocal_181, 1));
	}
	return CEIL(iLocal_181);
}

bool Function_560(bool bParam0, float fParam1) //Position: 0x169A5 / 92581
{
	if (!Function_105(bParam0))
	{
		Function_75(bParam0, fParam1);
		return 1;
	}
	if (Function_104(bParam0))
	{
		Function_75(bParam0, fParam1);
		return 1;
	}
	Function_75(bParam0, fParam1);
	return 0;
}

var Function_561(bool bParam0, int iParam1, int iParam2) //Position: 0x169D6 / 92630
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void Function_562(int iParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x169E6 / 92646
{
	iParam0->f_48 = uParam3;
	iParam0->f_68 = uParam1;
	iParam0->f_60 = bParam2;
	iParam0->f_56 = 0;
	Function_75(iParam0 + 12, fLocal_178);
	Function_563(iParam0 + 24);
	Function_9(iParam0);
	iParam0->f_64 = iLocal_180;
}

void Function_563(bool bParam0) //Position: 0x16A20 / 92704
{
	Function_76(bParam0, 0.0f);
	return;
}

void Function_564(int iParam0) //Position: 0x16A2C / 92716
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &vVar0, 11);
	Function_565(&uLocal_416, &vVar0);
	if (vVar0.x == GET_LOCAL_SLOT())
	{
		Function_669(0x2000000, 0);
		if (vVar0.z == 1)
		{
			if (!Function_278(2097152))
			{
				if (Function_105(&bLocal_527))
				{
					if (Function_131(&bLocal_527) > 90.0f)
					{
						iLocal_526++;
					}
					else
					{
						iLocal_526 = 0;
					}
				}
				else
				{
					iLocal_526 = 0;
				}
				if ((iLocal_526 <= 3 && !Function_73()) && !Function_668(32768))
				{
					Function_571(4096);
				}
				Function_563(&bLocal_527);
			}
			else
			{
				Function_9(&bLocal_527);
				iLocal_526 = 0;
			}
		}
	}
	return;
}

void Function_565(int iParam0, int iParam1) //Position: 0x16AC5 / 92869
{
	bool bVar0;
	bool bVar1;
	
	if (IS_SLOT_VALID(*iParam1) && iParam1->f_32 != 0)
	{
		bVar0 = *iParam1 != GET_LOCAL_SLOT();
		bVar1 = StackVal != GET_LOCAL_SLOT();
		if (StackVal != 1 && bVar0)
		{
			Local_201.f_112++;
		}
		if (Function_25(iParam1->f_40, 2) || (Function_25(iParam1->f_40, 8) && Function_157(256)))
		{
			if (((StackVal != 1 && bVar1) && !bVar0) && !Function_132(*iParam1))
			{
				Function_550(fLocal_182, "MP_FRD_DefenderKill", 1);
				Local_201.f_104 = (Local_201.f_104 + fLocal_182);
				Local_201.f_108++;
				if (Function_159())
				{
					Function_142("mp_FRD_NoClaimWhileWanted", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (NET_IS_SESSION_HOST())
			{
				if (Function_25(iParam1->f_40, 2))
				{
					Function_569(StackVal, StackVal, iParam0, *iParam1);
				}
				else if (StackVal && !Function_98(Function_25(iParam1->f_40, 8), *iParam1))
				{
					NET_LOG(StackVal, StackVal, 1, "FRD Host", GET_SLOT_NAME(I2STR("#%s, %s, killed #%s, %s, who's in a posse with the spoon holder.  Adding points to pot")), I2STR(*iParam1), GET_SLOT_NAME(*iParam1));
					Function_568(iParam0);
				}
			}
		}
		else if (StackVal == 1)
		{
			if (!IS_SLOT_VALID(StackVal))
			{
				return;
			}
			if (StackVal || ((StackVal && Function_98(Function_85(StackVal != iParam0->f_48, 0x1000000, 1), iParam0->f_48)) && !Function_157(32768)))
			{
				if (!Function_98(StackVal, *iParam1))
				{
					if (bVar1 && !bVar0)
					{
						Function_550(fLocal_185, "MP_FRD_AttackerKill", 1);
						Local_201.f_104 = (Local_201.f_104 + fLocal_185);
						Local_201.f_108++;
						if (StackVal != iParam0->f_48 && (Function_570(1024) || Function_157(8192)))
						{
							Function_17(&Local_201 + 40, Function_192(*iParam1));
							PRINTSTRING("Achievement: Players Killed while FRDing: ");
							Function_567(Local_201.f_40, 4);
							PRINTNL();
							if (Function_566(Local_201.f_40) > 8)
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(100))
								{
									if (!AWARD_ACHIEVEMENT(100))
									{
									}
								}
							}
						}
					}
					if (NET_IS_SESSION_HOST())
					{
						Function_568(iParam0);
						NET_LOG(StackVal, StackVal, 1, "FRD Host", GET_SLOT_NAME(I2STR("Spoonholder #%s, %s, killed #%s, %s, and adding points to pot")), I2STR(*iParam1), GET_SLOT_NAME(*iParam1));
					}
				}
			}
		}
	}
	return;
}

int Function_566(int iParam0) //Position: 0x16DDF / 93663
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_71(&bVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (bVar1 >= 0)
	{
		bVar1 = (bVar1 && (bVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_567(var uParam0, int iParam1) //Position: 0x16E1C / 93724
{
	int iVar0;
	
	iVar0 = 31;
	while (iVar0 > 0)
	{
		if (Function_351(uParam0, Function_192(iVar0)))
		{
			PRINTINT(1);
		}
		else
		{
			PRINTINT(0);
		}
		if ((iVar0 % iParam1) != 0 && iVar0 < 0)
		{
			PRINTSTRING(" ");
		}
		iVar0 = (iVar0 + 4294967295);
	}
	return;
}

void Function_568(int iParam0) //Position: 0x16E63 / 93795
{
	bool bVar0;
	
	bVar0 = Function_559(iParam0);
	iParam0->f_64 = (iParam0->f_64 + IntToFloat(bVar0));
	NET_LOG(1, "FRD Host", "Pot Increased 'cuz of Defender Kill by %s from %s to %s.", I2STR(bVar0), I2STR((CEIL(iParam0->f_64) - bVar0)), I2STR(CEIL(iParam0->f_64)), 0);
	return;
}

void Function_569(bool bParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x16EE3 / 93923
{
	bool bVar0;
	
	bVar0 = 4294967294;
	if (iParam1 == 1)
	{
		if ((Function_85(bParam3, 0x1000000, 1) && Function_288(bParam3) != 4294967295) && !Function_98(bParam3, bParam2))
		{
			bVar0 = bParam3;
			NET_LOG(1, "FRD Host", "Player #%s, %s, killed #%s, %s, and is now in charge of the FRD", I2STR(bParam3), GET_SLOT_NAME(bParam3), I2STR(bParam2), GET_SLOT_NAME(bParam2));
		}
	}
	if (bVar0 == 4294967294)
	{
		Function_88(bParam0);
		NET_LOG(1, "FRD Host", "Player #%s, %s up and died, dropping the spoon.", I2STR(bParam2), GET_SLOT_NAME(bParam2), 0, 0);
	}
	else
	{
		Function_555(bParam0, bVar0, 0);
	}
}

bool Function_570(int iParam0) //Position: 0x16FE3 / 94179
{
	return Function_25(Global_83864.f_1252, iParam0);
}

void Function_571(int iParam0) //Position: 0x16FF5 / 94197
{
	Function_153(&Global_78617 + 52, iParam0);
	return;
}

void Function_572(int iParam0) //Position: 0x17006 / 94214
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_573() //Position: 0x17019 / 94233
{
	Function_15(8, 0.0f);
	Function_15(9, 0.0f);
	Function_15(7, 0.0f);
	return;
}

void Function_574() //Position: 0x17030 / 94256
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			if (Function_85(bVar1, 131072, 1) && GET_LOCAL_SLOT() == bVar1)
			{
				iVar0++;
				Function_30(bVar1, 1);
			}
		}
		bVar1++;
	}
	if (iVar0 == 1)
	{
		Function_142("net_help_most_wanted_target", 0x41200000, 1, 0, 2, 1, 0);
	}
	else if (iVar0 >= 1)
	{
		Function_142("net_help_most_wanted_targets", 0x41200000, 1, 0, 2, 1, 0);
	}
	return;
}

bool Function_575(int iParam0) //Position: 0x170DA / 94426
{
	return Function_351(*iParam0, 1);
}

void Function_576(int iParam0, bool bParam1, int iParam2) //Position: 0x170E7 / 94439
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_35(Global_29006))
		{
			Function_187(&(Global_29008[Global_29006]), 131072);
			Function_579(&(Global_29008[Global_29006]), 2097152);
			Function_577(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_185(&(Global_29008[iVar0]), 4) || Function_185(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_579(&(Global_29008[iVar0]), 2097155);
					Function_187(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_70())
			{
			}
			WAIT(0);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(0);
	}
	return;
}

void Function_577(int iParam0) //Position: 0x171F2 / 94706
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_578())
			{
				return;
			}
		}
		if (!Function_185(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_578() //Position: 0x17271 / 94833
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_185(&(Global_29008[iVar0]), 4) || Function_185(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_579(var uParam0, int iParam1) //Position: 0x172DA / 94938
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_580() //Position: 0x172F1 / 94961
{
	Function_583(4294967295, 0);
	Function_583(65792, 1);
	if (Function_269())
	{
		Function_583(65792 | 1024, 1);
	}
	Function_154(3, 3);
	Local_201.f_4 = FIND_NAMED_LAYOUT("FRD_TMSLayout");
	if (!IS_LAYOUTREF_VALID(StackVal))
	{
		Local_201.f_4 = CREATE_LAYOUT("FRD_TMSLayout");
	}
	Function_582(StackVal, "TMS_FRD_MAX_TIME", &fLocal_190);
	Function_581(StackVal, "TMS_FRD_MAX_POT", &iLocal_191);
	Function_582(StackVal, "TMS_FRD_INITIAL_TIME", &fLocal_178);
	Function_582(StackVal, "TMS_FRD_MINIMUM_TIME", &iLocal_179);
	Function_582(StackVal, "TMS_FRD_INITIAL_POT", &iLocal_180);
	Function_582(StackVal, "TMS_FRD_EXTENSION_TIME", &fLocal_188);
	Function_582(StackVal, "TMS_FRD_TAG_TURNOVER_COOLDOWN", &iLocal_186);
	Function_582(StackVal, "TMS_FRD_KILL_TURNOVER_COOLDOWN", &iLocal_187);
	Function_582(StackVal, "TMS_FRD_KILL_DEFENDER_POT", &iLocal_181);
	Function_582(StackVal, "TMS_FRD_KILL_DEFENDER_XP", &fLocal_182);
	Function_582(StackVal, "TMS_FRD_KILL_AS_DEFENDER_POT", &iLocal_184);
	Function_582(StackVal, "TMS_FRD_KILL_AS_DEFENDER_XP", &fLocal_185);
	Function_582(StackVal, "TMS_FRD_TAG_XP", &fLocal_183);
	Function_582(StackVal, "TMS_FRD_DIMINISHING_RETURNS_FACTOR", &fLocal_193);
	Function_582(StackVal, "TMS_FRD_COOLDOWN_TIME", &iLocal_189);
	Function_582(StackVal, "TMS_FRD_HOST_NOBODY_AROUND_TIME", &iLocal_194);
	Function_582(StackVal, "TMS_FRD_GRACE_TIME", &fLocal_196);
	Function_582(StackVal, "TMS_FRD_TAUNT_CHANCE", &fLocal_197);
	Function_581(StackVal, "TMS_FRD_TUNE_BITS", &Global_83591 + 140 + 56);
	Function_582(StackVal, "TMS_FRD_TUNE_COLOR_DELTA", &fLocal_192);
	Function_581(StackVal, "TMS_FRD_MINIMUM_SIZE", &Global_83591 + 140 + 8[3]);
	Function_581(StackVal, "TMS_FRD_LAWN_TICK_COUNT", &iLocal_200);
	Function_582(StackVal, "TMS_FRD_REPORT_FREQ", &fLocal_198);
	Function_582(StackVal, "TMS_FRD_REPORT_PANIC_TIME", &fLocal_199);
	return 1;
}

void Function_581(bool bParam0, bool bParam1, int iParam2) //Position: 0x176A1 / 95905
{
	if (DECOR_CHECK_EXIST(bParam0, bParam1))
	{
		*iParam2 = DECOR_GET_INT(bParam0, bParam1);
		DECOR_REMOVE(bParam0, bParam1);
	}
	return;
}

void Function_582(bool bParam0, bool bParam1, int iParam2) //Position: 0x176C6 / 95942
{
	if (DECOR_CHECK_EXIST(bParam0, bParam1))
	{
		*iParam2 = DECOR_GET_FLOAT(bParam0, bParam1);
		DECOR_REMOVE(bParam0, bParam1);
	}
	return;
}

void Function_583(int iParam0, bool bParam1) //Position: 0x176EB / 95979
{
	if (bParam1)
	{
		Function_17(&Global_83591 + 140 + 56, iParam0);
	}
	else
	{
		Function_71(&Global_83591 + 140 + 56, iParam0);
	}
	return;
}

bool Function_584(int iParam0) //Position: 0x17713 / 96019
{
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	iParam0 = iParam0;
	return _IS_CLIENT_DATA_VALID_FOR_SLOT_2(&Global_76943, 0);
}

float Function_585(int iParam0) //Position: 0x1772E / 96046
{
	if (Function_575(iParam0))
	{
		if (Function_499(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_586() //Position: 0x177F6 / 96246
{
	if (!IS_SCRIPT_VALID(uLocal_239))
	{
		uLocal_239 = LAUNCH_NEW_SCRIPT("$/content/Ambient/CrimeResponse/mplaw_response_thread", 0);
	}
	return;
}

void Function_587() //Position: 0x17843 / 96323
{
	if ((NET_IS_IN_SESSION() && Function_668(2)) && !Function_668(16))
	{
		Function_607();
	}
	if (IS_OBJECT_VALID(Global_83803.f_16))
	{
		if (NET_IS_IN_SESSION())
		{
			NET_SESSION_LEAVE_SESSION();
		}
		else if (NET_IS_BUSY())
		{
		}
		else
		{
			if (UNK_0x63034F52(Global_83803.f_16))
			{
				Function_606(Global_83803.f_16);
			}
			Global_83803.f_36 = 0;
			Function_605();
		}
	}
	else if (Function_603())
	{
		if (Function_588())
		{
			if (IS_OBJECT_VALID(Global_83803.f_16))
			{
			}
		}
	}
	else if (Global_83803 == 1)
	{
		Global_83803 = 0;
	}
	return;
	return;
}

bool Function_588() //Position: 0x178CE / 96462
{
	int iVar0;
	
	switch (Global_83803)
	{
		case 0x00000000:
			if (!NET_IS_BUSY())
			{
				if (Function_602())
				{
					Global_83803 = 3;
				}
				else if (NET_GET_PLAYMODE() == 1)
				{
					if (!NET_IS_IN_SESSION())
					{
						Function_600();
						Function_605();
						return 1;
					}
					Function_605();
				}
				else if (Global_83803.f_40)
				{
					if (!NET_IS_IN_SESSION())
					{
						Function_600();
						Function_605();
						return 1;
					}
					Function_605();
				}
				else
				{
					Function_599(&iVar0);
					(&iVar0 + 8)->f_12 = 1;
					if (Function_66())
					{
						iVar0 = Function_598();
					}
					else if (Function_597())
					{
						iVar0 = Function_596();
					}
					Function_595(&iVar0);
					if (NET_RUN_SEARCH_BOT(0))
					{
						Global_83803 = 1;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (NET_GET_NUMBER_OF_SESSIONS() > 1)
			{
				if (Function_593(&Global_83803 + 16))
				{
					return 1;
				}
				NET_SESSION_LEAVE_SESSION();
				Global_83803 = 4;
			}
			else if (NET_GET_NUMBER_OF_SESSIONS() == 0)
			{
				if (NET_IS_IN_SESSION())
				{
					if (Global_83803.f_36)
					{
						NET_SESSION_LEAVE_SESSION();
						Global_83803 = 4;
					}
					else
					{
						Global_83803 = 5;
					}
				}
				else
				{
					Function_600();
					Function_605();
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			if (!NET_IS_BUSY())
			{
				if (Function_591(&Global_83803 + 16))
				{
					return 1;
				}
				Global_83803 = 5;
			}
			break;
		
		case 0x00000004:
			if (!NET_IS_BUSY() && !NET_IS_IN_SESSION())
			{
				Function_600();
				Global_83803 = 0;
				Global_83803.f_36 = 0;
				Function_605();
				return 1;
			}
			break;
		
		case 0x00000005:
			if (!Function_575(&Global_83803 + 4))
			{
				Function_589(&Global_83803 + 4);
			}
			else if (Function_317(&Global_83803 + 4, 10.0f) || !NET_IS_IN_SESSION())
			{
				Function_605();
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_589(int iParam0) //Position: 0x17A6B / 96875
{
	if (!Function_575(iParam0))
	{
		Function_590(iParam0, 0.0f);
	}
	return;
}

void Function_590(var uParam0, float fParam1) //Position: 0x17A80 / 96896
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_17(uParam0, 1);
	Function_71(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_591(int iParam0) //Position: 0x17AA1 / 96929
{
	var uVar0;
	int iVar1;
	
	if (Function_592(&uVar0))
	{
		iVar1 = UNK_0xE9EAC45C(uVar0);
		if ((1 != iVar1 || iVar1 != Function_598()) || iVar1 != Function_596())
		{
			*iParam0 = uVar0;
			return 1;
		}
	}
	return 0;
}

bool Function_592(int iParam0) //Position: 0x17AD3 / 96979
{
	char* cVar0;
	bool bVar1;
	
	cVar0 = FIND_NAMED_LAYOUT("NetSesssionLayout");
	bVar1 = FIND_OBJECT_IN_LAYOUT(cVar0, "nPosseGame");
	if (IS_OBJECT_VALID(bVar1))
	{
		*iParam0 = bVar1;
		return 1;
	}
	return 0;
}

bool Function_593(int iParam0) //Position: 0x17B18 / 97048
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = FIND_NAMED_LAYOUT("NetSesssionLayout");
	iVar1 = CREATE_OBJECT_ITERATOR(bVar0);
	ITERATE_ON_OBJECT_TYPE(iVar1, 59);
	ITERATE_IN_LAYOUT(iVar1, bVar0);
	bVar2 = START_OBJECT_ITERATOR(iVar1);
	bVar3 = false;
	if (IS_OBJECT_VALID(bVar2))
	{
		while (IS_OBJECT_VALID(bVar2) && !bVar3)
		{
			if (!IS_SESSION_CURRENTLY_JOINED_SESSION(bVar2))
			{
				if (!Function_594(bVar2))
				{
					if (!IS_OBJECT_VALID(*iParam0))
					{
						*iParam0 = bVar2;
						bVar3 = true;
					}
				}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(iVar1);
		}
	}
	DESTROY_ITERATOR(iVar1);
	return bVar3;
}

bool Function_594(bool bParam0) //Position: 0x17BA2 / 97186
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x581CAC89();
	iVar1 = UNK_0xA174152C(bParam0);
	if (iVar1 > 0)
	{
		iVar2 = (iVar0 - iVar1);
		if (iVar2 <= 5)
		{
			return 1;
		}
	}
	iVar3 = UNK_0x0183A3F0(bParam0);
	if (iVar3 > 0)
	{
		iVar4 = (iVar0 - iVar3);
		if (iVar4 <= 5)
		{
			return 1;
		}
	}
	if (!IS_OBJECT_VALID(Global_83803.f_20))
	{
		return 0;
	}
	if (bParam0 == Global_83803.f_20)
	{
		if (Function_173(&Global_83803 + 24, 60.0f))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_595(int iParam0) //Position: 0x17C26 / 97318
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 4294967295;
	if (!(iParam0 + 8)->f_12)
	{
		iVar0 = SHIFT_LEFT(StackVal, 20);
		bVar0 = (StackVal + SHIFT_LEFT(iVar0, 10));
		bVar0 = (StackVal + SHIFT_LEFT(bVar0, 0));
	}
	uVar1 = *iParam0;
	uVar2 = StackVal;
	UNK_0xF6E40FF3(uVar1, bVar0, iParam0->f_32, uVar2, iParam0->f_28);
	return;
}

int Function_596() //Position: 0x17C80 / 97408
{
	return 31;
}

bool Function_597() //Position: 0x17C88 / 97416
{
	return NET_GET_FREE_ROAM_MODE() != 2;
}

int Function_598() //Position: 0x17C93 / 97427
{
	return 32;
}

void Function_599(int iParam0) //Position: 0x17C9B / 97435
{
	*iParam0 = 1;
	iParam0->f_4 = 1;
	iParam0->f_8 = 0;
	(iParam0 + 8)->f_4 = 0;
	(iParam0 + 8)->f_8 = Global_29006;
	(iParam0 + 8)->f_12 = 0;
	iParam0->f_24 = 1;
	iParam0->f_28 = 4294967295;
	iParam0->f_32 = 16;
	iParam0->f_36 = 0;
	return;
}

int Function_600() //Position: 0x17CDB / 97499
{
	struct<33> Var0;
	
	Function_599(&Var0);
	if (Function_66())
	{
		Var0 = Function_598();
	}
	else if (Function_597())
	{
		Var0 = Function_596();
	}
	if (Global_83803.f_44 >= 0)
	{
		Var0.f_32 = Global_83803.f_44;
	}
	if (Function_601(&Var0))
	{
		return 1;
	}
	return 0;
}

bool Function_601(var uParam0) //Position: 0x17D21 / 97569
{
	Function_595(uParam0);
	return NET_IS_FACTION_SAFE(uParam0->f_24);
}

bool Function_602() //Position: 0x17D33 / 97587
{
	var uVar0;
	
	return Function_591(&uVar0);
}

bool Function_603() //Position: 0x17D3E / 97598
{
	bool bVar0;
	
	bVar0 = false;
	if (!Function_70())
	{
		return 0;
	}
	if (NET_IS_BUSY())
	{
		return 0;
	}
	if (!Function_667())
	{
		return 0;
	}
	if (Function_602())
	{
		return Function_668(2);
	}
	if (Function_668(16))
	{
		return 0;
	}
	if (Global_83803.f_40)
	{
		if (!NET_IS_IN_SESSION() || !NET_IS_SESSION_HOST())
		{
			return Function_668(2);
		}
		return 0;
	}
	if (NET_GET_PLAYMODE() == 1)
	{
		return (!NET_IS_IN_SESSION() && Function_668(2));
	}
	if (!NET_IS_IN_SESSION())
	{
		bVar0 = Function_668(2);
	}
	else
	{
		if (Global_83803.f_36)
		{
			bVar0 = true;
		}
		if (Function_604())
		{
			bVar0 = false;
		}
	}
	return bVar0;
}

bool Function_604() //Position: 0x17DCD / 97741
{
	return (Function_316() && !NET_IS_POSSE_LEADER());
}

void Function_605() //Position: 0x17DDB / 97755
{
	if (Global_83803 != 4)
	{
		Global_83803 = 0;
	}
	Function_49(&Global_83803 + 4);
	if (!Global_83803.f_36)
	{
		Global_83803.f_16 = "";
	}
	return;
}

void Function_606(var uParam0) //Position: 0x17E09 / 97801
{
	Global_83803.f_20 = uParam0;
	Function_589(&Global_83803 + 24);
	return;
}

void Function_607() //Position: 0x17E20 / 97824
{
	var uVar0;
	
	uVar0 = Function_608();
	NET_SESSION_SET_GAME_LOCALE_EX(uVar0);
	return;
}

var Function_608() //Position: 0x17E30 / 97840
{
	return Global_29006;
}

void Function_609() //Position: 0x17E39 / 97849
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_436)
	{
		Local_436[iVar05].f_4 = 0;
		Local_436[iVar05].f_8 = 0;
		Local_436[iVar05].f_12 = -1.0f;
		Local_436[iVar05] = "";
		iVar0++;
	}
	Local_436[05] = "ModeP_Score_PersonlB";
	Local_436[05].f_8 = 1;
	Local_436[05].f_16 = 0;
	Local_436[15] = "ModeP_Score_PersonlC";
	Local_436[15].f_8 = 1;
	Local_436[15].f_16 = 0;
	Local_436[25] = "ModeP_Score_PersonlD";
	Local_436[25].f_8 = 1;
	Local_436[25].f_16 = 0;
	Local_436[35] = "ModeP_Score_PersonlE";
	Local_436[35].f_8 = 1;
	Local_436[35].f_16 = 0;
	Local_436[45] = "ModeP_Score_Personli";
	Local_436[45].f_8 = 1;
	Local_436[45].f_16 = 0;
	Local_436[55] = "ModeP_Score_Personlj";
	Local_436[55].f_16 = 0;
	Local_436[65] = "ModeP_Score_Personlk";
	Local_436[65].f_16 = 0;
	Local_436[75] = "ModeP_Score_PosseA";
	Local_436[75].f_8 = 1;
	Local_436[75].f_16 = 1;
	Local_436[85] = "ModeP_Score_PosseB";
	Local_436[85].f_8 = 1;
	Local_436[85].f_16 = 1;
	Local_436[95] = "ModeP_Score_PosseD";
	Local_436[95].f_8 = 1;
	Local_436[95].f_16 = 1;
	Local_436[105] = "ModeP_Score_PosseE";
	Local_436[105].f_8 = 1;
	Local_436[105].f_16 = 1;
	Local_436[115] = "ModeP_Score_PosseG";
	Local_436[115].f_8 = 1;
	Local_436[115].f_16 = 1;
	Local_436[125] = "ModeP_Score_PosseI";
	Local_436[125].f_8 = 1;
	Local_436[125].f_16 = 1;
	Local_436[135] = "ModeP_Score_PosseJ";
	Local_436[135].f_16 = 1;
	Local_436[145] = "ModeP_Score_PosseK";
	Local_436[145].f_16 = 1;
	Local_436[155] = "ModeP_Score_RivalC";
	Local_436[155].f_16 = 2;
	Local_436[165] = "ModeP_Score_RivalG";
	Local_436[165].f_16 = 2;
	return;
}

void Function_610(int iParam0) //Position: 0x1816A / 98666
{
	Function_590(iParam0, 0.0f);
	return;
}

void Function_611(bool bParam0) //Position: 0x18176 / 98678
{
	Function_669(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_612() //Position: 0x18197 / 98711
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_613(var uParam0, int iParam1) //Position: 0x181AC / 98732
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_614(bool bParam0) //Position: 0x181B8 / 98744
{
	bool bVar0;
	
	bParam0 = bParam0;
	bVar0 = true;
	if (bLocal_81)
	{
		bVar0 = false;
	}
	if (NET_ARE_UNLOCKS_READY())
	{
		if (NET_IS_UNLOCKED(42))
		{
			bVar0 = false;
		}
	}
	if (!Function_68())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			if (ACTOR_HAS_WEAPON(bParam0, 31))
			{
				_SET_ACTOR_AMMO_OF_TYPE(bParam0, 13, 0.0f, 0);
				DELETE_WEAPON_FROM_ACTOR(bParam0, 31);
			}
		}
	}
	Function_72(8);
	return;
}

void Function_615(var uParam0, int iParam1) //Position: 0x18214 / 98836
{
	uParam0->f_176 = iParam1;
	return;
}

var Function_616() //Position: 0x18220 / 98848
{
	if (iLocal_524 != 1)
	{
		Function_497(1);
	}
	Function_72(4096);
	return Function_617();
}

var Function_617() //Position: 0x1823A / 98874
{
	int iVar0;
	bool bVar1;
	struct<5> Var2;
	bool bVar8;
	bool bVar9;
	struct<5> Var10;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	struct<5> Var23;
	
	iVar0 = 2;
	switch (iLocal_67)
	{
		case 0x00000000:
			fLocal_77 = 100.0f;
			fLocal_78 = 100.0f;
			vLocal_68 = { StackVal, StackVal, Global_76888[03] };
			vLocal_74 = { StackVal, StackVal, Global_76895[03] };
			vLocal_71 = { StackVal, StackVal, vLocal_68 };
			bLocal_79 = false;
			bLocal_80 = true;
			bLocal_81 = Function_278(16);
			if (Function_278(128))
			{
				bVar1 = Function_631(Function_632());
				if (IS_VOLUME_VALID(bVar1))
				{
					GET_VOLUME_CENTER(bVar1, &vLocal_68);
					GET_VOLUME_SCALE(bVar1, &Var2);
					fLocal_78 = StackVal;
				}
			}
			else if (Function_278(2))
			{
				if (GET_SLOT_POSITION(GET_LOCAL_SLOT(), &vVar5))
				{
					bVar9 = Function_628(StackVal, StackVal, vVar5, 1);
					bVar8 = Function_631(bVar9);
					if (IS_VOLUME_VALID(bVar8))
					{
						GET_VOLUME_CENTER(bVar8, &vLocal_68);
						GET_VOLUME_SCALE(bVar8, &Var10);
						fLocal_78 = StackVal;
					}
				}
			}
			else if (Function_278(512))
			{
				if (NET_IS_IN_SESSION())
				{
					if (Function_604())
					{
						bVar13 = NET_GET_POSSE_LEADER_SLOT();
						if (IS_SLOT_VALID(bVar13))
						{
							if (!Function_85(bVar13, 2097152, 1))
							{
								if (GET_SLOT_POSITION(bVar13, &vVar14))
								{
									vLocal_68 = { StackVal, StackVal, vVar14 };
									Function_72(64);
									if (Function_168(StackVal, StackVal, vVar14))
									{
										fLocal_77 = 20.0f;
										bLocal_80 = false;
									}
									else
									{
										fLocal_77 = 50.0f;
										Global_76888[03] = { StackVal, StackVal, vVar14 };
									}
								}
							}
							else
							{
								UI_SEND_EVENT("net.PosseTeleportFail");
								vLocal_71 = { StackVal, StackVal, vLocal_68 };
								bLocal_79 = true;
							}
						}
					}
				}
			}
			if (Function_73() || Function_156())
			{
				iVar17 = 0;
				if (Function_278(64))
				{
					bLocal_82 = Function_156();
					if (IS_LAYOUTREF_VALID(Function_627()))
					{
						bVar18 = false;
						bVar19 = Function_626(Function_627(), 0);
						if (!IS_OBJECT_VALID(bVar19))
						{
							bVar19 = Function_625(Global_29006);
						}
						if (IS_OBJECT_VALID(bVar19))
						{
							if (GET_OBJECT_TYPE(bVar19) == 9)
							{
								bLocal_83 = GET_VOLUME_FROM_OBJECT(bVar19);
								iVar17 = 1;
								bVar18 = true;
							}
							else if (GET_OBJECT_TYPE(bVar19) == 10)
							{
								iVar20 = CREATE_OBJECT_ITERATOR(Function_627());
								if (IS_ITERATOR_VALID(iVar20))
								{
									bVar21 = GET_VOLUME_FROM_OBJECT(bVar19);
									ITERATE_IN_VOLUME_SET(iVar20, bVar21);
									bVar22 = Function_624(iVar20);
									if (GET_OBJECT_TYPE(bVar22) == 9)
									{
										bLocal_83 = GET_VOLUME_FROM_OBJECT(bVar22);
										bVar18 = true;
									}
									DESTROY_ITERATOR(iVar20);
								}
							}
							if (bVar18)
							{
								GET_VOLUME_CENTER(bLocal_83, &vLocal_68);
								bLocal_79 = true;
								GENERATE_RANDOM_POINT_IN_VOLUME(bLocal_83, &vLocal_68);
								GET_VOLUME_SCALE(bLocal_83, &Var23);
								fLocal_78 = StackVal;
								GET_OBJECT_ORIENTATION(bLocal_83, &vLocal_74);
								if (FABS(vLocal_74.x) < 5.0f && bLocal_81)
								{
									vLocal_74.f_4 = (vLocal_74.x - vLocal_74.y);
								}
								if (bLocal_81 && iVar17)
								{
								}
								else
								{
									vLocal_74.f_4 = (vLocal_74.y + 180.0f);
								}
							}
						}
					}
				}
				bLocal_80 = false;
				fLocal_77 = 50.0f;
			}
			if (fLocal_78 < 100.0f)
			{
				fLocal_78 = 100.0f;
			}
			else if (fLocal_78 > 10.0f)
			{
				fLocal_78 = 10.0f;
			}
			iLocal_67 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				bVar26 = Function_612();
				if (bLocal_81 && Function_338(bVar26, 3145855))
				{
					MAKE_ACTOR_READY_FOR_ACTION(bVar26, 1);
				}
				STREAMING_OVERRIDE_MAIN_POI(vLocal_68, 0.034f, -0.268f, 0.963f);
				iLocal_67 = 2;
			}
			else
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			}
			break;
		
		case 0x00000002:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (!FIND_GROUND_INTERSECTION(&vLocal_68, fLocal_78, &vLocal_71, &uVar27))
				{
				}
				else
				{
					fLocal_78 = 100.0f;
				}
				if (!bLocal_79)
				{
					Function_620(StackVal, StackVal, vLocal_71, fLocal_77, 20.0f, bLocal_80);
				}
				iLocal_67 = 3;
			}
			break;
		
		case 0x00000003:
			if (bLocal_82 && IS_VOLUME_VALID(bLocal_83))
			{
				if (Function_230(bLocal_83, bLocal_81, 1))
				{
					STREAMING_RELEASE_MAIN_POI();
					iLocal_67 = 4;
				}
			}
			else
			{
				if (bLocal_79 == 1)
				{
				}
				else if (Function_618(&vLocal_71, 1))
				{
					vLocal_74 = { StackVal, StackVal, Global_76895[03] };
				}
				else
				{
					Function_620(StackVal, StackVal, Global_76888[13], fLocal_77, -1.0f, bLocal_80);
					if (Function_618(&vLocal_71, 1))
					{
						vLocal_74 = { StackVal, StackVal, Global_76895[13] };
					}
					else
					{
						vLocal_71 = { StackVal, StackVal, Global_76888[03] };
						vLocal_74 = { StackVal, StackVal, Global_76895[03] };
					}
				}
				STREAMING_RELEASE_MAIN_POI();
				if (Function_206(StackVal, StackVal, StackVal, StackVal, vLocal_71, vLocal_74, bLocal_81, 1))
				{
					iLocal_67 = 4;
				}
			}
			break;
		
		case 0x00000004:
			iLocal_67 = 0;
			Global_76888[03] = { StackVal, StackVal, vLocal_71 };
			Global_76895[03] = { StackVal, StackVal, vLocal_74 };
			Global_76888[13] = { StackVal, StackVal, vLocal_71 };
			Global_76895[13] = { StackVal, StackVal, vLocal_74 };
			Function_72(658);
			iVar0 = 1;
			break;
	}
	return iVar0;
}

bool Function_618(var uParam0, int iParam1) //Position: 0x18665 / 99941
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6[5];
	float fVar22[5];
	vector3 vVar28;
	int iVar31;
	float fVar32;
	var uVar33;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (AMBIENT_GET_POINT(&vVar28, 0))
		{
			vVar6[iVar23] = { StackVal, StackVal, vVar28 };
			fVar22[iVar2] = 50.0f;
			iVar2++;
		}
		iVar0++;
	}
	if (iVar2 == 0)
	{
		return 0;
	}
	if (NET_IS_IN_SESSION() && iParam1)
	{
		iVar0 = 0;
		while (iVar0 <= iVar2)
		{
			if (!Function_619(StackVal, StackVal, vVar6[iVar03]))
			{
				bVar1 = false;
				while (bVar1 <= 16)
				{
					if (Function_99(bVar1) && bVar1 == GET_LOCAL_SLOT())
					{
						if (!Function_85(bVar1, 2, 1))
						{
							if (GET_SLOT_POSITION(bVar1, &vVar3))
							{
								fVar32 = VDIST2(vVar3, vVar6[iVar03]);
								if (fVar32 > (fVar22[iVar0] * fVar22[iVar0]))
								{
									fVar22[iVar0] = SQRT(fVar32);
								}
							}
						}
					}
					bVar1++;
				}
			}
			iVar0++;
		}
		iVar31 = 4294967295;
		iVar0 = 0;
		while (iVar0 <= iVar2)
		{
			if (!Function_619(StackVal, StackVal, vVar6[iVar03]))
			{
				if (iVar31 == 4294967295)
				{
					iVar31 = iVar0;
				}
				else if (fVar22[iVar0] < fVar22[iVar31])
				{
					iVar31 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar31 == 4294967295)
		{
			return 0;
		}
	}
	iVar31 = 0;
	if (FIND_GROUND_INTERSECTION(&(vVar6[iVar313]), 3.0f, uParam0, &uVar33))
	{
	}
	else
	{
		*uParam0 = { StackVal, StackVal, vVar6[iVar313] };
	}
	return 1;
}

bool Function_619(vector3 vParam0) //Position: 0x187C1 / 100289
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_620(vector3 vParam0, float fParam3, float fParam4, bool bParam5) //Position: 0x187D9 / 100313
{
	int iVar0;
	
	if (bParam5)
	{
		if (Function_168(StackVal, StackVal, vParam0))
		{
			Function_164(StackVal, StackVal, vParam0);
			vParam0 = { StackVal, StackVal, Function_164(StackVal, StackVal, vParam0) };
		}
	}
	AMBIENT_RESET_FILTER(1);
	if (bParam5)
	{
		iVar0 = Function_621(5, 0);
		if (Function_35(iVar0))
		{
			AMBIENT_SET_EXCLUSION_VOLUME(StackVal);
		}
	}
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, fParam3);
	if (fParam4 < 0.0f)
	{
		AMBIENT_SET_ELEVATION_FILTER(-fParam4, fParam4);
	}
	Function_165(0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(128, 3.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(512, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(2, 5.0f, 0);
	AMBIENT_SET_SLOPE_FILTER(0, 2, 3.0f);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
}

var Function_621(int iParam0, bool bParam1) //Position: 0x1887C / 100476
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	
	fVar3 = 999999.9f;
	iVar9 = 4294967295;
	if (!Function_623(&vVar0))
	{
		return 4294967295;
	}
	bVar10 = FIND_NAMED_LAYOUT("regions_layout");
	if (!IS_LAYOUTREF_VALID(bVar10))
	{
		return 4294967295;
	}
	iVar11 = CREATE_OBJECT_ITERATOR(bVar10);
	ITERATE_ON_OBJECT_TYPE(iVar11, 9);
	if (!IS_ITERATOR_VALID(iVar11))
	{
		return 4294967295;
	}
	bVar12 = START_OBJECT_ITERATOR(iVar11);
	while (IS_OBJECT_VALID(bVar12))
	{
		iVar8 = Function_622(GET_VOLUME_FROM_OBJECT(bVar12));
		if (iVar8 < 4294967295 && iVar8 > 146)
		{
			if (StackVal != iParam0 && (!bParam1 || !Function_185(&(Global_29008[iVar8]), 4096)))
			{
				GET_OBJECT_POSITION(bVar12, &vVar5);
				fVar4 = VDIST(vVar5, vVar0);
				if (fVar4 > fVar3)
				{
					fVar3 = fVar4;
					iVar9 = iVar8;
				}
			}
		}
		bVar12 = OBJECT_ITERATOR_NEXT(iVar11);
	}
	DESTROY_ITERATOR(iVar11);
	return iVar9;
}

var Function_622(bool bParam0) //Position: 0x1894F / 100687
{
	int iVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 4294967295;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "regid"))
	{
		return 4294967295;
	}
	if (DECOR_GET_INT_VERBOSE(bParam0, "regid", &iVar0))
	{
		return iVar0;
	}
	return 4294967295;
}

bool Function_623(int iParam0) //Position: 0x18989 / 100745
{
	bool bVar0;
	
	bVar0 = Function_612();
	if (IS_ACTOR_VALID(bVar0))
	{
		GET_POSITION(bVar0, iParam0);
	}
	else if (!GET_CAMERA_CHANNEL_POSITION(iParam0, 0))
	{
		return 0;
	}
	return 1;
}

var Function_624(int iParam0) //Position: 0x189B3 / 100787
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = GET_NUM_ITERATOR_MATCHES(iParam0);
	iVar1 = 0;
	iVar2 = "";
	if (iVar0 >= 0)
	{
		iVar1 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar0);
		iVar2 = START_OBJECT_ITERATOR(iParam0);
		while (iVar1 >= 0)
		{
			iVar1 = (iVar1 - 1);
			iVar2 = OBJECT_ITERATOR_NEXT(iParam0);
		}
	}
	return iVar2;
}

bool Function_625(int iParam0) //Position: 0x18A00 / 100864
{
	bool bVar0;
	int iVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_35(iParam0))
	{
		return "";
	}
	iVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(iVar1, 9);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 6);
	ITERATE_ON_PARTIAL_NAME(iVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	bVar0 = START_OBJECT_ITERATOR(iVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(bVar0)))
		{
			DESTROY_ITERATOR(iVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(iVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(iVar1);
	return bVar0;
}

var Function_626(bool bParam0, bool bParam1) //Position: 0x18A8F / 101007
{
	bool bVar0;
	int iVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return "";
	}
	iVar1 = CREATE_OBJECT_ITERATOR(bParam0);
	if (bParam1)
	{
		ITERATE_ON_OBJECT_TYPE(iVar1, 9);
	}
	strcpy(&cVar2, "spawnvol", 24);
	ITERATE_ON_PARTIAL_NAME(iVar1, &cVar2);
	bVar0 = START_OBJECT_ITERATOR(iVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar0), &cVar2))
		{
			DESTROY_ITERATOR(iVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(iVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(iVar1);
	return bVar0;
}

var Function_627() //Position: 0x18B03 / 101123
{
	return Global_83591.f_140;
}

int Function_628(vector3 vParam0, int iParam3) //Position: 0x18B0F / 101135
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = 4294967295;
	fVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_619(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		iVar7 = iVar6;
		if (Function_35(iVar7))
		{
			if (IS_VOLUME_VALID(StackVal) && Function_630(iVar7))
			{
				iVar5 = 0;
				if (iParam3 == 0)
				{
					iVar5 = 1;
				}
				else if (Function_629(Global_29006) == Global_30621[Global_29004])
				{
					iVar5 = 1;
				}
				if (iVar5 == 1)
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (VDIST(vParam0, vVar1) > fVar4)
					{
						iVar0 = iVar7;
						fVar4 = VDIST(vParam0, vVar1);
					}
				}
			}
		}
		iVar6++;
	}
	if (Function_35(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_629(int iParam0) //Position: 0x18BCF / 101327
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_35(iParam0))
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

bool Function_630(int iParam0) //Position: 0x18C27 / 101415
{
	if (StackVal == 3)
	{
		return 1;
	}
	if (((iParam0 != Global_30707[1] || iParam0 != Global_30693[1]) || iParam0 != Global_30679[0]) || iParam0 != Global_30640[1])
	{
		return 1;
	}
	return 0;
}

var Function_631(bool bParam0) //Position: 0x18C6C / 101484
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_35(bParam0))
	{
		return "";
	}
	bVar0 = Function_625(bParam0);
	if (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_VOLUME_FROM_OBJECT(bVar0);
	}
	if (!IS_VOLUME_VALID(bVar1))
	{
		bVar1 = StackVal;
	}
	return bVar1;
}

var Function_632() //Position: 0x18CAA / 101546
{
	struct<2> Var0[16];
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	int iVar39;
	bool bVar40;
	
	bVar38 = GET_LOCAL_SLOT();
	bVar35 = false;
	while (bVar35 <= 16)
	{
		if (bVar35 != bVar38)
		{
			if (Function_99(bVar35))
			{
				iVar37 = Function_633(bVar35);
				if (Function_35(iVar37))
				{
					if (StackVal != 2 || Function_630(iVar37))
					{
						iVar36 = 0;
						while (iVar36 > iVar33 && Var0[iVar362] == iVar37)
						{
							iVar36++;
						}
						if (iVar36 == iVar33)
						{
							Var0[iVar362] = iVar37;
							iVar33++;
						}
						Var0[iVar362].f_4 = StackVal + 1;
						if (StackVal >= StackVal)
						{
							iVar34 = iVar36;
						}
					}
				}
			}
		}
		bVar35++;
	}
	iVar39 = 4294967295;
	if (StackVal >= 0)
	{
		if (Function_630(Var0[iVar342]))
		{
			iVar39 = Var0[iVar342];
		}
		else
		{
			bVar40 = StackVal;
			if (IS_VOLUME_VALID(bVar40))
			{
				Function_234(bVar40);
				iVar39 = Function_628(StackVal, StackVal, Function_234(bVar40), 1);
			}
		}
	}
	if (!Function_35(iVar39))
	{
		iVar39 = Function_628(StackVal, StackVal, Global_34165, 1);
		if (!Function_35(iVar39))
		{
			return Global_30640[0];
		}
	}
	return iVar39;
}

bool Function_633(bool bParam0) //Position: 0x18DCA / 101834
{
	if (!Function_87(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_634();
	}
	return (StackVal % StackVal);
}

bool Function_634() //Position: 0x18DF1 / 101873
{
	return StackVal;
}

void Function_635(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x18DFD / 101885
{
	if (bParam1)
	{
		*iParam0 = 9;
	}
	else if (bParam4)
	{
		*iParam0 = 8;
	}
	else
	{
		*iParam0 = 0;
	}
	iParam0->f_64 = 0.0f;
	iParam0->f_44 = 0;
	iParam0->f_48 = 0;
	iParam0->f_152 = 4294967295;
	iParam0->f_12 = 2;
	Function_655(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_204(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_654(iParam0, 2);
	Function_652(iParam0);
	Function_650(iParam0);
	Function_648(iParam0);
	Function_646(iParam0);
	Function_643(iParam0);
	Function_640(iParam0);
	Function_637(iParam0);
	if (bParam2)
	{
		Function_17(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_17(iParam0 + 44, 8);
		Function_199(iParam0 + 192);
	}
	Function_636(iParam0, bParam4);
	Function_669(8388608, 0);
}

void Function_636(int iParam0, bool bParam1) //Position: 0x18EC5 / 102085
{
	if (bParam1)
	{
		Function_17(iParam0 + 44, 32);
	}
	else
	{
		Function_71(iParam0 + 44, 32);
	}
	return;
}

void Function_637(int iParam0) //Position: 0x18EE5 / 102117
{
	Function_638(iParam0, 102144);
	return;
}

void Function_638(var uParam0, var uParam1) //Position: 0x18EF4 / 102132
{
	uParam0->f_184 = uParam1;
	return;
}

int Function_639() //Position: 0x18F00 / 102144
{
	return 0;
}

void Function_640(int iParam0) //Position: 0x18F07 / 102151
{
	Function_641(iParam0, 102178);
	return;
}

void Function_641(var uParam0, var uParam1) //Position: 0x18F16 / 102166
{
	uParam0->f_180 = uParam1;
	return;
}

int Function_642() //Position: 0x18F22 / 102178
{
	return 1;
}

void Function_643(int iParam0) //Position: 0x18F29 / 102185
{
	Function_644(iParam0, 102212);
	return;
}

void Function_644(var uParam0, var uParam1) //Position: 0x18F38 / 102200
{
	uParam0->f_164 = uParam1;
	return;
}

void Function_645() //Position: 0x18F44 / 102212
{
	return;
}

void Function_646(int iParam0) //Position: 0x18F4A / 102218
{
	Function_647(iParam0, 102212);
	return;
}

void Function_647(var uParam0, int iParam1) //Position: 0x18F59 / 102233
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_648(int iParam0) //Position: 0x18F65 / 102245
{
	Function_649(iParam0, 102212);
	return;
}

void Function_649(var uParam0, int iParam1) //Position: 0x18F74 / 102260
{
	uParam0->f_172 = iParam1;
	return;
}

void Function_650(var uParam0) //Position: 0x18F80 / 102272
{
	Function_615(uParam0, 102287);
	return;
}

int Function_651() //Position: 0x18F8F / 102287
{
	return 0;
}

void Function_652(int iParam0) //Position: 0x18F96 / 102294
{
	Function_613(iParam0, 102309);
	return;
}

void Function_653(var uParam0) //Position: 0x18FA5 / 102309
{
	uParam0 = uParam0;
	return;
}

void Function_654(var uParam0, var uParam1) //Position: 0x18FAF / 102319
{
	uParam0->f_52 = uParam1;
	return;
}

void Function_655(int iParam0, struct<57> Param1) //Position: 0x18FBB / 102331
{
	*(iParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

void Function_656() //Position: 0x18FCF / 102351
{
	Function_657();
	return;
}

void Function_657() //Position: 0x18FD8 / 102360
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 146)
	{
		if (StackVal || StackVal != 5 != 7)
		{
			if (!STRINGS_ARE_EQUAL(&Global_29155[iVar110] + 20, "coc") && !STRINGS_ARE_EQUAL(&Global_29155[iVar110] + 20, "ser"))
			{
				if (STRINGS_ARE_EQUAL(&Global_29155[iVar110] + 20, "sol"))
				{
					if (Function_658())
					{
						Local_85[iVar04] = iVar1;
						iVar0++;
					}
				}
				else
				{
					Local_85[iVar04] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return;
}

bool Function_658() //Position: 0x19075 / 102517
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_659() //Position: 0x19084 / 102532
{
	Global_83803.f_40 = Function_695("dynsession_alwayshost");
	Global_83803.f_44 = Function_660("dynsession_fmsize");
	Function_605();
	return;
}

var Function_660(int iParam0) //Position: 0x190CB / 102603
{
	int iVar0;
	
	iVar0 = _GET_PARAM_VALUE(iParam0, "blah");
	if (IS_STRING_VALID(iVar0))
	{
		return STRING_TO_INT(bVar0);
	}
	return 4294967295;
}

void Function_661() //Position: 0x190EE / 102638
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ROUND(GET_PROFILE_TIME());
	iVar1 = ROUND((GET_TIME_SINCE_LAST_INPUT(Function_662()) * 100000.0f));
	NET_GET_MAC_ADDRESS32(&iVar2);
	RAND_SET_SEED(iVar0 ^ iVar1 ^ iVar2);
	return;
}

int Function_662() //Position: 0x1911D / 102685
{
	bool bVar0;
	
	bVar0 = Function_612();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

bool Function_663() //Position: 0x19137 / 102711
{
	Function_280(32769);
	Function_664(1);
	ENABLE_AMBIENT_SPAWNING(0);
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	if (!Function_284(65536))
	{
		return 0;
	}
	Local_286.f_500 = 0.0f;
	Function_282(1);
	Local_286.f_508 = 0;
	return 1;
}

void Function_664(int iParam0) //Position: 0x1916F / 102767
{
	int iVar0;
	
	if (Function_351(iParam0, 1) && Function_351(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_665(char* cParam0, int iParam1) //Position: 0x191A3 / 102819
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (iParam1 == 4294967295)
	{
		strcpy(&cVar0, cParam0, 32);
		stradd(&cVar0, "_count", 32);
		iParam1 = STRING_TO_INT(UI_GET_STRING(&cVar0));
	}
	if (Global_6286 == 0)
	{
		Global_6286 = ROUND((GET_PROFILE_TIME() * 1000.0f));
	}
	strcpy(&cVar8, cParam0, 32);
	stradd(&cVar8, "_", 32);
	stradd(&cVar8, I2STR((Global_6286 % iParam1)), 32);
	Global_6286++;
	UI_SET_TEXT("LoadingTip", &cVar8);
	UI_ENTER("LoadingTip");
	UI_REFRESH("LoadingScreen");
	return;
}

void Function_666(int iParam0) //Position: 0x1923A / 102970
{
	Local_286 = iParam0;
	return;
}

bool Function_667() //Position: 0x19245 / 102981
{
	return (NET_IS_CONNECTED_FOR_PLAY() && NET_IS_MANAGER_INITIALIZED());
}

bool Function_668(int iParam0) //Position: 0x19252 / 102994
{
	return Function_25(Global_79336, iParam0);
}

void Function_669(int iParam0, bool bParam1) //Position: 0x19261 / 103009
{
	if (bParam1)
	{
		Function_17(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_71(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_670(bool bParam0) //Position: 0x1929C / 103068
{
	if (bParam0)
	{
		SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(0.0f);
		Function_675(4);
	}
	else
	{
		SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(1.0f);
		Function_674(4);
	}
	Function_671(!bParam0);
	return;
}

void Function_671(bool bParam0) //Position: 0x192C0 / 103104
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!Function_673(4))
		{
			Function_675(1);
		}
		else
		{
			return;
		}
	}
	Function_674(1);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_672(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_672(bool bParam0, bool bParam1) //Position: 0x19304 / 103172
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_496(GET_LOCAL_SLOT(), bParam0) && !Function_673(2))
		{
			return;
		}
		if (!Function_673(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
		if (Function_673(4))
		{
			if (!bParam1)
			{
				DECOR_SET_BOOL(bVar0, "ArmUp", 1);
			}
		}
		else
		{
			DECOR_REMOVE(bVar0, "ArmUp");
		}
	}
	return;
}

bool Function_673(int iParam0) //Position: 0x19381 / 103297
{
	return Function_25(Global_79337, iParam0);
}

void Function_674(int iParam0) //Position: 0x19390 / 103312
{
	Function_23(&Global_79337, iParam0);
	return;
}

void Function_675(int iParam0) //Position: 0x1939F / 103327
{
	Function_153(&Global_79337, iParam0);
	return;
}

void Function_676(var uParam0, var uParam1, int iParam2) //Position: 0x193AE / 103342
{
	var uVar0;
	
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
		uVar0 = MAKE_TIME_OF_DAY(uParam0, uParam1, iParam2);
		Function_677(Global_16524, uVar0, 1);
	}
	return;
}

void Function_677(int iParam0, var uParam1, bool bParam2) //Position: 0x19494 / 103572
{
	int iVar0;
	
	Function_680(iParam0);
	Function_679(uParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, uParam1);
	Function_678();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(uParam1), 0);
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

void Function_678() //Position: 0x1960D / 103949
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_679(int iParam0) //Position: 0x19619 / 103961
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(iParam0));
	return;
}

void Function_680(int iParam0) //Position: 0x1965F / 104031
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

void Function_681() //Position: 0x196A5 / 104101
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_693() };
	if (Function_692(&Var0, &Global_79349, 0))
	{
		Function_682(Global_79349.f_16, &Global_83591, 1);
		if (iLocal_524 == 1)
		{
			Function_23(&Global_79349 + 44, 2048);
			strcpy(&Global_79349 + 48, "net_name_hcfm", 64);
		}
		else if (iLocal_524 == 2)
		{
			strcpy(&Global_79349 + 48, "net_name_friendlyfm", 64);
		}
	}
	return;
}

void Function_682(int iParam0, int iParam1, int iParam2) //Position: 0x19723 / 104227
{
	iParam1->f_4 = 2;
	iParam2 = iParam2;
	iParam1->f_8 = 16;
	Function_522(iParam1);
	Function_690();
	Function_688();
	switch (iParam0)
	{
		case 0x00000001:
			Function_685(iParam1);
			break;
		
		case 0x00000002:
			*iParam1 = 2500;
			iParam1->f_16 = 600.0f;
			Function_684(iParam1);
			Function_539(iParam1 + 276, 0);
			Function_536(iParam1, 1, 0, 5, 1);
			Function_536(iParam1, 2, 22, 1, 1);
			Function_531(iParam1, 1, 7, 3, 1);
			Function_531(iParam1, 2, 10, 1, 1);
			Function_531(iParam1, 3, 17, 2, 1);
			Function_531(iParam1, 4, 19, 1, 1);
			Function_531(iParam1, 5, 24, 1, 1);
			Function_523(iParam1 + 276, 4);
			break;
		
		case 0x00000003:
			*iParam1 = 1500;
			iParam1->f_16 = 600.0f;
			Function_684(iParam1);
			Function_539(iParam1 + 276, 0);
			break;
		
		case 0x00000011:
			*iParam1 = 5000;
			iParam1->f_16 = 600.0f;
			Function_684(iParam1);
			Function_539(iParam1 + 276, 0);
			Function_536(iParam1, 1, 0, 5, 1);
			Function_536(iParam1, 2, 22, 1, 1);
			Function_531(iParam1, 1, 7, 3, 1);
			Function_531(iParam1, 2, 10, 1, 1);
			Function_531(iParam1, 3, 17, 2, 1);
			Function_531(iParam1, 4, 19, 1, 1);
			Function_531(iParam1, 5, 24, 1, 1);
			Function_523(iParam1 + 276, 4);
			break;
		
		case 0x00000006:
			iParam1->f_16 = 900.0f;
			Function_684(iParam1);
			Function_539(iParam1 + 276, 0);
			Function_536(iParam1, 1, 0, 3, 1);
			Function_536(iParam1, 2, 22, 1, 1);
			Function_531(iParam1, 1, 9, 2, 1);
			Function_531(iParam1, 2, 1, 2, 1);
			Function_531(iParam1, 3, 16, 2, 1);
			Function_531(iParam1, 4, 19, 2, 1);
			Function_531(iParam1, 5, 24, 1, 1);
			Function_523(iParam1 + 276, 4);
			break;
		
		case 0x00000007:
			*iParam1 = 10;
			iParam1->f_16 = 600.0f;
			Function_539(iParam1 + 276, 0);
			Function_684(iParam1);
			Function_536(iParam1, 1, 0, 5, 1);
			Function_536(iParam1, 2, 22, 1, 1);
			Function_531(iParam1, 1, 7, 3, 1);
			Function_531(iParam1, 2, 10, 1, 1);
			Function_531(iParam1, 3, 17, 2, 1);
			Function_531(iParam1, 4, 19, 1, 1);
			Function_531(iParam1, 5, 24, 1, 1);
			Function_523(iParam1 + 276, 4);
			break;
		
		case 0x00000008:
			*iParam1 = 7;
			iParam1->f_16 = 600.0f;
			Function_539(iParam1 + 276, 0);
			Function_536(iParam1, 1, 0, 5, 1);
			Function_536(iParam1, 2, 22, 1, 1);
			Function_536(iParam1, 3, 25, 2, 1);
			Function_531(iParam1, 1, 9, 3, 1);
			Function_531(iParam1, 2, 1, 1, 1);
			Function_531(iParam1, 3, 24, 2, 1);
			Function_684(iParam1);
			Function_523(iParam1 + 276, 4);
			break;
		
		case 0x00000009:
			*iParam1 = 3;
			iParam1->f_16 = 600.0f;
			Function_539(iParam1 + 276, 0);
			Function_536(iParam1, 1, 0, 5, 1);
			Function_536(iParam1, 2, 22, 1, 1);
			Function_536(iParam1, 3, 25, 2, 1);
			Function_531(iParam1, 1, 9, 3, 1);
			Function_531(iParam1, 2, 1, 1, 1);
			Function_531(iParam1, 3, 24, 2, 1);
			Function_684(iParam1);
			Function_523(iParam1 + 276, 4);
			break;
		
		case 0x0000000E:
			iParam1->f_8 = 2;
			Function_539(iParam1 + 276, 0);
			Function_536(iParam1, 1, 5, 2, 1);
			break;
		
		case 0x0000000A:
			iParam1->f_8 = 6;
			Function_684(iParam1);
			break;
		
		case 0x0000000B:
			iParam1->f_8 = 6;
			Function_684(iParam1);
			break;
		
		case 0x0000000C:
			iParam1->f_8 = 16;
			Function_539(iParam1 + 276, 0);
			Function_536(iParam1, 1, 5, 5, 1);
			Function_536(iParam1, 3, 17, 2, 1);
			Function_684(iParam1);
			break;
		
		case 0x00000012:
			iParam1->f_8 = 2;
			Function_684(iParam1);
			break;
		
		case 0x00000013:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_539(iParam1 + 276, 0);
			Function_536(iParam1, 1, 0, 8, 1);
			Function_536(iParam1, 2, 9, 6, 1);
			Function_536(iParam1, 3, 22, 1, 1);
			Function_684(iParam1);
			Function_523(iParam1 + 276, 0);
			break;
		
		case 0x00000014:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_538(iParam1);
			Function_523(iParam1 + 276, 0);
			break;
	}
	if (Function_683())
	{
		Function_523(iParam1 + 276, 2);
	}
	return;
}

bool Function_683() //Position: 0x19B10 / 105232
{
	return Function_351(Global_79962, 1024);
}

void Function_684(int iParam0) //Position: 0x19B20 / 105248
{
	iParam0->f_844 = 0;
	return;
}

void Function_685(int iParam0) //Position: 0x19B2C / 105260
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = Function_218(487);
	iVar1 = 1;
	iVar2 = 1;
	iVar3 = 3;
	while (iVar1 > 50 && iVar2)
	{
		if (fVar0 <= Global_83864[iVar16] && Global_83864[iVar16] < 0.0f)
		{
			if (!StackVal != 4294967295)
			{
				Function_687(StackVal, iParam0, iVar3, 0, 1);
				if (Global_83823[StackVal])
				{
					SET_WEAPON_GOLD(StackVal, Function_612(), 1);
				}
				iVar3++;
			}
			Function_686(iVar1, 1);
			iVar1++;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return;
}

void Function_686(int iParam0, int iParam1) //Position: 0x19BC9 / 105417
{
	Function_17(&Global_83864[iParam06] + 16, iParam1);
	return;
}

void Function_687(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x19BDE / 105438
{
	Function_537(iParam0 + 276, uParam1, uParam2, uParam3, uParam4);
}

void Function_688() //Position: 0x19BF6 / 105462
{
	var uVar0;
	
	uVar0 = "";
	Function_689(uVar0, uVar0, 0, 58, 58, 1);
	return;
}

void Function_689(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x19C0C / 105484
{
	strcpy(&Global_83591 + 28[09], cParam0, 32);
	(&Global_83591 + 28[09])->f_32 = uParam3;
	strcpy(&Global_83591 + 28[19], cParam1, 32);
	(&Global_83591 + 28[19])->f_32 = uParam4;
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(&Global_83591 + 28[29], bParam2, 32);
		(&Global_83591 + 28[29])->f_32 = uParam5;
	}
	else
	{
		strcpy(&Global_83591 + 28[29], "MP_COUNTDOWN_SONG_02", 32);
		(&Global_83591 + 28[29])->f_32 = 61;
	}
}

void Function_690() //Position: 0x19C9C / 105628
{
	Function_691("%s", 0);
	return;
}

void Function_691(int iParam0, bool bParam1) //Position: 0x19CAB / 105643
{
	if (bParam1)
	{
		UI_SET_STRING("MP_SB_TFMT", UI_GET_STRING(iParam0));
	}
	else
	{
		UI_SET_STRING("MP_SB_TFMT", iParam0);
	}
	return;
}

bool Function_692(char* cParam0, int iParam1, bool bParam2) //Position: 0x19CE0 / 105696
{
	char* cVar0[64];
	
	if (UNK_0xFAD5A270(cParam0, iParam1))
	{
		if (bParam2)
		{
			if (iParam1->f_40 == 4294967294)
			{
				iParam1->f_40 = Function_166(StackVal, StackVal, *(iParam1 + 28), 0, 1, 1);
				if (!GAME_INSTANCE_SET_REGION(cParam0, iParam1->f_40))
				{
					strcpy(&cVar0, "Unable to set region for ", 64);
					stradd(&cVar0, cParam0, 64);
				}
			}
		}
		return 1;
	}
	return 0;
}

struct<16> Function_693() //Position: 0x19D45 / 105797
{
	return StackVal, StackVal, StackVal, *(&Global_78617 + 32);
}

void Function_694() //Position: 0x19D55 / 105813
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30767)
	{
		Global_30767[iVar0] = 1;
		iVar0++;
	}
	Global_30837 = 0;
	return;
}

bool Function_695(int iParam0) //Position: 0x19D7B / 105851
{
	int iVar0;
	
	iVar0 = _GET_PARAM_VALUE(iParam0, "blah");
	if (IS_STRING_VALID(iVar0))
	{
		return 1;
	}
	return 0;
}

void Function_696(bool bParam0) //Position: 0x19D9A / 105882
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_675(2);
	}
	else
	{
		Function_674(2);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (Function_496(GET_LOCAL_SLOT(), bVar0))
			{
				Function_672(bVar0, bParam0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_697(int iParam0) //Position: 0x19DDD / 105949
{
	Function_23(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_698(int iParam0) //Position: 0x19E16 / 106006
{
	Function_153(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_699() //Position: 0x19E6F / 106095
{
	Function_700(Function_701());
	return;
}

void Function_700(int iParam0) //Position: 0x19E7B / 106107
{
	if (!Function_512(iParam0))
	{
		return;
	}
	if (!(iParam0 <= 837 && iParam0 >= 975) && !(iParam0 <= 1287 && iParam0 >= 1310))
	{
		return;
	}
	Global_76887 = iParam0;
	Function_262(9, Global_76887);
	return;
}

var Function_701() //Position: 0x19EBE / 106174
{
	if (!IS_STRING_VALID(&Global_76854))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76854);
}

var Function_702(char* cParam0) //Position: 0x19ED8 / 106200
{
	var uVar0;
	
	uVar0 = Function_703();
	return CREATE_OBJECTSET_IN_LAYOUT(uParam0, uVar0, 3, 1);
}

var Function_703() //Position: 0x19EEC / 106220
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_704(int iParam0) //Position: 0x19F28 / 106280
{
	iParam0->f_60 = 4294967295;
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = 4294967295;
	Local_201.f_44 = 4294967293;
	Local_201.f_52 = 4294967294;
	iParam0->f_72 = 4294967295;
	iParam0->f_68 = 4294967295;
	Local_201.f_48 = 4294967294;
	Local_201.f_20 = 4294967295;
	Local_201.f_24 = 4294967295;
	Function_125();
	Function_154(1, 4294967294);
	Function_154(2, 4294967295);
	Function_154(0, 0);
	Function_154(4, 4294967295);
	Function_669(0x9000000, 0);
	Function_16(6, 0);
	Function_15(2, -1.0f);
	return;
}

void Function_705(int iParam0) //Position: 0x19F92 / 106386
{
	if (Function_351(iParam0, 1) && !Function_351(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

