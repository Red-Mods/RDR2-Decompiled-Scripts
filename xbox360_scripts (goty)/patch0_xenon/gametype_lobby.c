//Decompiled with MagicRDR v1.0
//Function Count : 591
//Statics Count : 398
//Natives Count : 590
//Parameters Count : 8

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
	int iLocal_10 = 0;
	int iLocal_11 = 0;
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
	var uLocal_27 = 11;
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
	var uLocal_49 = 11;
	var uLocal_50 = 0;
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
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
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
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	float fLocal_88 = 0.0f;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	struct<105> Local_91 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_227 = 4;
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
	var uLocal_249 = -1;
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
	var uLocal_270 = 27;
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
	var uLocal_383 = 1;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	struct<17> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	bool bVar16;
	struct<8> Var17;
	struct<16> Var25;
	
	iLocal_11 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	uLocal_87 = "RotLobby";
	Function_590(ScriptParam_0.f_16);
	Function_584();
	Function_583();
	uLocal_90 = Function_582("netBotReadyUp");
	Function_580(0);
	bVar0 = false;
	bVar8 = false;
	fVar12 = 1.0f;
	iVar13 = 0;
	iVar14 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iVar5 = 0;
		if (Local_118.f_12 >= 0)
		{
			Function_578(1);
		}
		if (!Function_577(16) || (Function_576() < 13 && !NET_IS_IN_SESSION()))
		{
			if (Local_118.f_12 <= 43)
			{
				if (NET_IS_MANAGER_INITIALIZED())
				{
					Function_580(43);
				}
				else
				{
					Function_580(48);
				}
			}
		}
		if (NET_IS_SESSION_HOST())
		{
			if (Function_576() <= 49)
			{
				Local_91.f_96 = Function_576();
			}
		}
		if (HUD_IS_FADED())
		{
			Local_118 = (Local_118 + GET_UNWARPED_REALTIME_SECONDS());
		}
		else
		{
			Local_118 = 0.0f;
			if (StackVal < 0.0f)
			{
				Local_118.f_4 = (StackVal - GET_UNWARPED_REALTIME_SECONDS());
				if (StackVal >= 0.0f)
				{
					if ((Function_575(0) && !UI_ISACTIVE("NotorietyMeter")) && !(Function_574(2) || Function_577(524288)))
					{
						HUD_FADE_OUT(0.0f, 1f, 1);
						HUD_FADE_TO_LOADING_SCREEN();
						UI_POP("MPSplash");
						UI_EXIT("MPSplash");
					}
				}
			}
		}
		bVar6 = Function_573();
		iVar11 = Local_118.f_12;
		if (Function_576() < 13 && Function_576() > 49)
		{
			if (!IS_SLOT_VALID(GET_SLOT_FOR_HOST()))
			{
				iVar11 = 50;
			}
			else if (!Function_572())
			{
				iVar11 = 50;
			}
			else if (Local_91.f_96 == 49)
			{
			}
			iVar14 = NET_GET_SESSION_GAMER_COUNT();
			if (iVar13 != iVar14)
			{
				fVar12 = (0.6f - (0.0375f * IntToFloat(iVar14)));
				if (fVar12 > 0.0f)
				{
					fVar12 = 0.0f;
				}
				else if (fVar12 < 0.6f)
				{
					fVar12 = 0.6f;
				}
				SET_POP_DENSITY_MULTIPLIER(fVar12);
			}
			iVar13 = iVar14;
		}
		switch (iVar11)
		{
			case 0x00000032:
				break;
			
			case 0x00000000:
				Function_571(0x40000000);
				if (IS_ACTOR_VALID(bVar6))
				{
					Function_570(bVar6);
				}
				NET_SCRIPTMSG_REGISTER_HANDLER(22, 68249);
				REGISTER_HOST_BROADCAST_VARIABLES(&Local_91, 27);
				Local_118.f_412 = Function_568(uLocal_87);
				Local_118.f_8 = 0.0f;
				Local_91.f_104 = ScriptParam_0.f_16;
				*(&Local_118 + 992) = { StackVal, StackVal, StackVal, ScriptParam_0 };
				Local_118.f_56 = ScriptParam_0.f_20;
				Local_118.f_60 = CREATE_LAYOUT("LobbyIdleCam");
				if (!IS_LAYOUTREF_VALID(Local_118.f_60))
				{
				}
				if (IS_LOCAL_PLAYER_VALID(0))
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
				Function_580(1);
			
			case 0x00000001:
				Function_571(0x40000000);
				if (HUD_IS_FADED())
				{
					if (Function_562(&Local_118 + 1060))
					{
						Function_561();
						Function_580(2);
					}
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_TO_LOADING_SCREEN();
				}
				break;
			
			case 0x00000002:
				Function_571(0x40000000);
				if (IS_ACTOR_VALID(bVar6))
				{
					if (IS_ACTOR_ON_FOOT(bVar6))
					{
						Function_580(6);
						Local_118.f_8 = 0.0f;
					}
					else
					{
						NET_LOG(true, "State Gametype_lobby", "Player is not on foot, forcing them to dismount", 0, 0, 0, 0);
						ACTOR_DISMOUNT_NOW(bVar6);
					}
				}
				else
				{
					NET_LOG(true, "State Gametype_lobby", "Player is invalid; allowing them in anyway", 0, 0, 0, 0);
					Function_580(6);
					Local_118.f_8 = 0.0f;
				}
				break;
			
			case 0x00000006:
				Function_571(0x40000000);
				Function_560(2048, 0);
				Local_118.f_8 = 0.0f;
				Function_559(&iVar1);
				Function_558(Local_118.f_412);
				if (NET_IS_BUSY())
				{
					NET_LOG(true, "Lobby Session", "Networking is busy, hanging out", 0, 0, 0, 0);
				}
				else if (NET_IS_SEARCHBOT_BUSY())
				{
					NET_LOG(true, "Lobby Session", "Searchbot is busy, hanging out", 0, 0, 0, 0);
				}
				else
				{
					Function_580(7);
				}
				break;
			
			case 0x00000007:
				Function_571(0x40000000);
				Function_553(&Local_118 + 16);
				Function_558(Local_118.f_412);
				if (NET_GET_PLAYMODE() == 1)
				{
					if (NET_IS_IN_SESSION())
					{
						bVar8 = (NET_IS_SESSION_HOST() || (!NET_IS_SESSION_HOST() && ScriptParam_0.f_28 != 3));
						UNK_0xFA0E1F8B((&Local_118 + 16)->f_32);
						if (NET_IS_SESSION_HOST() && ScriptParam_0.f_28 != 2)
						{
							bVar8 = false;
						}
						if (bVar8)
						{
							NET_LOG(true, "Lobby Session", "Starting lobby for private session.  No sessioning", 0, 0, 0, 0);
							Function_580(10);
						}
						else
						{
							NET_LOG(true, "Lobby Session", "Starting Lobby in private mode as non-host.  Leaving the current private session", 0, 0, 0, 0);
							NET_SESSION_LEAVE_SESSION();
							Function_580(8);
						}
					}
					else
					{
						Function_580(9);
					}
				}
				else if (NET_IS_IN_SESSION())
				{
					NET_SESSION_LEAVE_SESSION();
					NET_LOG(true, "Lobby Session", "Leaving Previous Session", 0, 0, 0, 0);
					Function_580(8);
				}
				else
				{
					NET_LOG(true, "Lobby Session", "Not in a previous session", 0, 0, 0, 0);
					Function_580(9);
				}
				break;
			
			case 0x00000008:
				Function_571(0x40000000);
				Local_118.f_8 = (StackVal + GET_UNWARPED_REALTIME_SECONDS());
				if (StackVal <= 15.0f)
				{
					NET_LOG(true, "Lobby Session", "Giving up, still in a session/busy after %s seconds!", I2STR(CEIL(15.0f)), 0, 0, 0);
					Function_580(9);
				}
				else if (NET_IS_IN_SESSION())
				{
				}
				else if (NET_IS_BUSY())
				{
				}
				else
				{
					NET_LOG(true, "Lobby Session", "No longer in a session", 0, 0, 0, 0);
					Local_118.f_8 = 0.0f;
					Function_580(9);
				}
				break;
			
			case 0x00000009:
				Function_571(0x40000000);
				Function_552(1);
				Function_550();
				Function_546();
				bVar0 = false;
				switch (ScriptParam_0.f_28)
				{
					case 0x00000004:
						if (Function_544(&Local_118 + 16))
						{
							NET_LOG(true, "Lobby Session", "NET_SESSION_CREATE_SESSION returned true", 0, 0, 0, 0);
						}
						else
						{
							NET_LOG(true, "Lobby Session", "NET_SESSION_CREATE_SESSION returned false", 0, 0, 0, 0);
						}
						break;
					
					case 0x00000000:
						if (Function_543(&Local_118 + 16))
						{
							NET_LOG(true, "Lobby Session", "NET_SESSION_QUICK_JOIN returned true", 0, 0, 0, 0);
						}
						else
						{
							NET_LOG(true, "Lobby Session", "NET_SESSION_QUICK_JOIN returned false", 0, 0, 0, 0);
						}
						break;
					
					case 0x00000002:
						if (Function_541())
						{
							NET_LOG(true, "Lobby Session", "LOBBY_JOIN_GAME_INVITE_SESSION returned true", 0, 0, 0, 0);
						}
						else
						{
							NET_LOG(true, "Lobby Session", "LOBBY_JOIN_GAME_INVITE_SESSION returned false", 0, 0, 0, 0);
							if (Function_540())
							{
								if (NET_IS_POSSE_LEADER())
								{
									UI_SEND_EVENT("net.GameInviteJoinFailed_PosseLeader");
								}
								else
								{
									UI_SEND_EVENT("net.PosseGameInviteJoinFailed");
								}
							}
							else
							{
								UI_SEND_EVENT("net.GameInviteJoinFailed");
							}
							bVar0 = true;
						}
						break;
					
					case 0xFFFFFFFF:
						break;
					
					case 0x00000003:
						break;
				}
				if (bVar0)
				{
					Local_118.f_8 = 0.0f;
					Function_580(43);
				}
				else
				{
					Local_118.f_8 = 0.0f;
					Function_559(&iVar1);
					Function_580(10);
				}
				break;
			
			case 0x0000000A:
				Function_571(0x40000000);
				if (!NET_IS_IN_SESSION())
				{
					bVar0 = false;
					if (!(NET_IS_BUSY() || NET_IS_SEARCHBOT_BUSY()))
					{
						if (Function_539(&iVar1))
						{
							if (Function_535(&iVar1, 1.0f))
							{
								NET_LOG(true, "Lobby Session", "Net's not busy, and searchbot's inactive. STARTING OVER", 0, 0, 0, 0);
								bVar0 = true;
							}
							else
							{
								NET_LOG(true, "Lobby Session", "WAITING while Net's not busy, and searchbot's inactive.", 0, 0, 0, 0);
								bVar0 = false;
							}
						}
						else
						{
							Function_533(&iVar1);
							bVar0 = false;
						}
					}
					if (Function_532(Local_118.f_412, 80))
					{
						NET_LOG(true, "Lobby Session", "Invite Join Failed", 0, 0, 0, 0);
						Function_580(43);
						bVar0 = false;
					}
					else if (Function_532(Local_118.f_412, 63))
					{
						NET_LOG(true, "Lobby Session", "Join Failed", 0, 0, 0, 0);
						bVar0 = true;
					}
					else if (Function_532(Local_118.f_412, 65))
					{
						NET_LOG(true, "Lobby Session", "Creation Failed", 0, 0, 0, 0);
						bVar0 = true;
					}
					else if (Function_532(Local_118.f_412, 66))
					{
						NET_LOG(true, "Lobby Session", "Invite Join Failed", 0, 0, 0, 0);
						UI_SEND_EVENT("net.UnexpectedFail");
						Function_580(43);
					}
					else if (!bVar0)
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						NET_LOG(true, "Lobby Session", "Sessioning Problem found", 0, 0, 0, 0);
						Function_580(6);
					}
				}
				else
				{
					Local_118.f_8 = 0.0f;
					Function_559(&iVar1);
					if (NET_GET_PLAYMODE() == 1)
					{
						if (NET_IS_SESSION_HOST())
						{
							Function_531(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, ScriptParam_0);
							NET_SESSION_SET_GAME_MODE_TYPE(Local_118.f_16);
						}
					}
					Function_580(11);
				}
				iVar5 = 1;
				break;
			
			case 0x0000000B:
				Function_571(0x40000000);
				Local_118.f_8 = (StackVal + GET_UNWARPED_REALTIME_SECONDS());
				if (!NET_IS_IN_SESSION())
				{
					NET_LOG(true, "Lobby Session", "In WAITING TO JOIN but not in a session!", 0, 0, 0, 0);
					Function_580(6);
				}
				else if (!Function_572())
				{
					if (StackVal > 15.0f)
					{
						NET_LOG(true, "Lobby Session", "Haven't Received Host Data yet", 0, 0, 0, 0);
					}
					else
					{
						NET_LOG(true, "Lobby Session", "Gave Up on this session, trying another", 0, 0, 0, 0);
						Function_580(6);
					}
				}
				else
				{
					if (NET_IS_SESSION_HOST())
					{
						NET_LOG(false, "Lobby Session", "Got into a session as host", 0, 0, 0, 0);
					}
					else
					{
						NET_LOG(false, "Lobby Session", "Got into a session as client", 0, 0, 0, 0);
					}
					Function_580(12);
				}
				break;
			
			case 0x0000000C:
				Function_571(0x40000000);
				Function_530();
				if (NET_GET_PLAYMODE() == 0)
				{
					UNK_0xFA0E1F8B((&Local_118 + 16)->f_32);
				}
				Function_529();
				Function_522(1, 0);
				iLocal_89 = Function_518();
				if (Function_517())
				{
					if (Function_516())
					{
						SET_RICH_PRESENCE(1, 1, 0, 0, 0);
					}
					else if (Function_515())
					{
						SET_RICH_PRESENCE(1, 3, 0, 0, 0);
					}
					else if (Function_514())
					{
						SET_RICH_PRESENCE(1, 2, 0, 0, 0);
					}
					else
					{
						SET_RICH_PRESENCE(1, 0, 0, 0, 0);
					}
				}
				else
				{
					SET_RICH_PRESENCE(1, Function_513(Local_91.f_104), 0, 0, 0);
				}
				Function_580(15);
			
			case 0x0000000F:
				Function_571(0x40000000);
				Function_512();
				Function_508();
				Function_507(0);
				if (Function_506(524288))
				{
					Function_580(18);
				}
				else
				{
					Function_580(16);
				}
			
			case 0x00000010:
				Function_571(0x40000000);
				if (!Function_505())
				{
					if (NET_IS_SESSION_HOST())
					{
						Local_91.f_92 = RAND_INT_RANGE(false, 10000);
						Function_504(&Local_91 + 44);
						Function_504(&Local_91 + 8);
						Function_504(&Local_91 + 32);
						Function_504(&Local_91 + 20);
						Function_503(3, 0);
						Function_503(8, ScriptParam_0.f_24);
						Local_91.f_4 = 0;
						Global_78578.f_152 = (RAND_INT_RANGE(false, 1000) % 5);
						if (!Function_502(65536))
						{
							*(&Local_91 + 72) = { StackVal, StackVal, StackVal, *(&Local_91 + 56) };
							if (StackVal != 2)
							{
								if (Function_517() || Function_501())
								{
									*(&Local_91 + 56) = { StackVal, StackVal, StackVal, *(&Local_118 + 992) };
								}
								else
								{
									*(&Local_91 + 56) = { StackVal, StackVal, StackVal, Function_497(Local_91.f_104, &Local_91 + 88) };
								}
								Function_496(&Local_91 + 100);
							}
							Function_495(65536, 1);
						}
					}
					if (Local_91.f_100 < 1 || !NET_IS_SESSION_HOST())
					{
					}
				}
				else
				{
					if (!Function_494(&Local_91 + 56, &Local_118 + 876, 1))
					{
					}
					Function_493(&Local_118 + 1020, &Local_91 + 100);
					Function_507(0);
					if (NET_IS_SESSION_HOST())
					{
						Function_504(&Local_91 + 8);
						Function_504(&Local_91 + 32);
					}
					if (NET_IS_SESSION_HOST() && Local_91.f_100 >= 1)
					{
						Function_580(21);
					}
					else
					{
						Function_580(18);
					}
				}
				break;
			
			case 0x00000012:
				Function_571(0x40000000);
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(0);
				UI_EXIT("HudMPNoFun");
				HUD_ENABLE(0);
				if (StackVal && (!Function_492(131072) && !IS_PS3()) == 1)
				{
					UI_FOCUS("HudGamerList");
				}
				ScriptParam_0.f_24 = 0;
				Function_491(4);
				Function_490(5);
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				if (IS_ACTOR_VALID(bVar6) && !Function_506(524288))
				{
					SET_ACTOR_HEALTH(bVar6, GET_ACTOR_MAX_HEALTH(bVar6));
				}
				if (((NET_IS_SESSION_HOST() || !Function_489(20)) || iLocal_89) || Function_506(524288))
				{
					if ((StackVal == 1 || !Function_488(2048, 1)) || Function_506(524288))
					{
						if (!IS_OBJECT_VALID(StackVal))
						{
							Function_487(&Local_118 + 60, 1, 1, 1);
						}
					}
					if (IS_SCRIPT_VALID(Local_118.f_860))
					{
						if (!Function_486(32))
						{
							Function_485(32, 1);
							Function_485(512, 0);
							UI_SET_TEXT("LobbyNew_Toggle", "mp_aa_stats_toggle_scoreboard");
						}
					}
					else
					{
						Function_485(2, 1);
						if (iLocal_89)
						{
							if (Function_494(&Local_91 + 56, &Global_79349, 1))
							{
								Function_484();
								Local_118.f_860 = Function_482();
							}
						}
						else if (Function_494(&Local_91 + 72, &Global_79349, 1))
						{
							Local_118.f_860 = Function_482();
						}
					}
				}
				if (Function_492(2097152))
				{
					fLocal_88 = 30.0f;
				}
				else
				{
					fLocal_88 = 20.0f;
				}
				DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
				Function_481();
				if (Function_506(524288))
				{
					fVar15 = GET_CURRENT_GAME_TIME();
				}
				Function_580(19);
			
			case 0x00000013:
				Function_571(0x40000000);
				bVar4 = false;
				if (Function_505())
				{
					Function_507(0);
					Function_580(16);
					Function_480();
				}
				else if ((Function_489(20) && !iLocal_89) && !Function_506(524288))
				{
					bVar4 = true;
				}
				else
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						(&Local_118 + 60)->f_64 = GET_CURRENT_GAME_TIME();
						Function_454(&Local_118 + 60, 1);
					}
					while (UI_ISACTIVE("NotorietyMeter") || (fVar15 + 10.0f) < GET_CURRENT_GAME_TIME())
					{
						WAIT(0);
					}
					if (HUD_IS_FADED() || (Function_575(0) && !UI_ISACTIVE("NotorietyMeter")))
					{
						if (STREAMING_IS_WORLD_LOADED())
						{
							if (((NET_IS_SESSION_HOST() || !Function_489(20)) || Function_502(4)) || iLocal_89)
							{
								NET_TICKER_CLEAR();
								Function_484();
								Function_453();
								Function_452();
								if (UI_ISACTIVE("MPSplash"))
								{
									UI_POP("MPSplash");
									UI_EXIT("MPSplash");
								}
								else
								{
									HUD_FADE_IN(1.5f, 1065353216);
								}
							}
						}
					}
					Function_436(0);
					if (!Function_435(&Local_91 + 44))
					{
						if (NET_IS_SESSION_HOST())
						{
							if (StackVal == 1)
							{
								Function_432(&Local_91 + 44, 5.0f);
							}
							else
							{
								Function_432(&Local_91 + 44, (fLocal_88 + 3.0f));
							}
						}
						else
						{
							Function_484();
						}
					}
					else if (Function_431(&Local_91 + 44) && !iLocal_89)
					{
						bVar4 = true;
					}
					else
					{
						bVar16 = CEIL(Function_427(&Local_91 + 44));
						if (Local_118.f_1008 != bVar16)
						{
							Local_118.f_1008 = bVar16;
							if (bVar16 <= 0 && iLocal_89)
							{
								iLocal_89 = 0;
							}
							if (Local_118.f_1008 >= FLOOR(fLocal_88) && Local_118.f_1008 < 4294967291)
							{
								if (StackVal == 0)
								{
									if (Function_426(&Local_118 + 876, 1024))
									{
										Function_425("mp_lobby_rotation_starting_light");
									}
									else
									{
										Function_425("mp_lobby_rotation_starting");
										Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_424((&Local_118 + 876)->f_40) };
										UI_SET_STRING("MP_LobbyArea", UI_GET_STRING(&Var17));
									}
									Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_423(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_118 + 876), 0) };
									UI_SET_STRING("MP_LobbyMode", &Var25);
								}
								if (Function_422())
								{
									Function_421(Local_118.f_1008, 0);
								}
							}
						}
						if (StackVal == 1)
						{
							Function_406(50921, 49757);
						}
					}
				}
				if (bVar4)
				{
					TASK_CLEAR(bVar6);
					Function_580(21);
				}
				break;
			
			case 0x00000015:
				Function_571(0x40000000);
				UI_UNFOCUS("HudGamerList");
				Function_405();
				Function_480();
				Function_404(4);
				iLocal_89 = 0;
				Function_580(22);
			
			case 0x00000016:
				Function_571(0x40000000);
				if (HUD_IS_FADED())
				{
					if (MAKE_ACTOR_READY_FOR_ACTION(bVar6, 1) || !IS_ACTOR_VALID(bVar6))
					{
						if (Function_426(&Global_79349, 256))
						{
							Function_402();
						}
						Global_79349 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_118 + 876) };
						Global_79345 = { StackVal, StackVal, StackVal, *(&Local_91 + 56) };
						Function_401();
						if (IS_OBJECT_VALID(StackVal))
						{
							Function_400(&Local_118 + 60, 1);
						}
						Function_356();
						Function_522(0, 1);
						Function_355();
						if (NET_IS_SESSION_HOST())
						{
							Function_504(&Local_91 + 8);
							Function_504(&Local_91 + 20);
							Local_91.f_4 = 0;
							Function_503(1, 0);
						}
						Function_354();
						Function_484();
						Function_453();
						Function_350();
						Function_346();
						Function_345();
						if (Global_16524.f_16)
						{
							Function_340(0, 0, 0);
							Function_339();
						}
						STREAMING_UNLOAD_BOUNDS();
						STREAMING_UNLOAD_SCENE();
						Local_118.f_860 = Function_482();
						Function_561();
						Function_336();
						Local_118 = 0.0f;
						STREAMING_EVICT_ALL();
						Function_580(23);
					}
				}
				else if (!HUD_IS_FADING())
				{
					Function_401();
				}
				break;
			
			case 0x00000017:
				Function_571(0x40000000);
				if (Function_335(StackVal, StackVal, *(&Local_118 + 1024), Local_118.f_1036))
				{
					if (IS_LOCAL_PLAYER_VALID(0))
					{
						SET_PLAYER_CONTROL(0, 0, 0, 0);
					}
					bVar6 = Function_573();
					Function_570(bVar6);
					Function_331(1, 0, 0);
					Local_118.f_1040 = Function_330(StackVal, StackVal, *(&Local_118 + 1024), 0, 1, 1);
					if (Function_329(Local_118.f_1040))
					{
						Function_495(1, 1);
					}
					else
					{
						Function_495(1, 0);
					}
					Function_580(24);
				}
				break;
			
			case 0x00000018:
				Function_571(0x40000000);
				if (STREAMING_IS_WORLD_LOADED() || Local_118 < 30.0f)
				{
					if (Local_118 < 30.0f)
					{
					}
					Function_580(26);
					Global_3391 = 0;
				}
				break;
			
			case 0x0000001A:
				Function_571(0x40000000);
				if (!Function_502(1))
				{
					Local_118 = 0.0f;
					Function_580(29);
				}
				else if (Function_328(Local_118.f_1040))
				{
					Local_118 = 0.0f;
					Function_580(29);
				}
				else if (Local_118 < 30.0f)
				{
					Local_118 = 0.0f;
					Function_580(29);
				}
				break;
			
			case 0x0000001D:
				Function_571(0x40000000);
				if (Function_327(1))
				{
					Function_485(4, 1);
					Function_580(30);
				}
				break;
			
			case 0x0000001E:
				Function_571(0x40000000);
				if (Function_326(&Global_79349))
				{
					if (!IS_SCRIPT_VALID(Local_118.f_860) || Function_325())
					{
						NET_LOG(true, "Lobby Gametype", "GAME REGION SCRIPT ('%s') failed!", GET_ASSET_NAME(Global_79349.f_24, 4), 0, 0, 0);
						PRINT_BIG("REGION SCRIPT INVALID! Quitting Lobby for your own protection", 30.0f, 0, 2, 0);
						Function_404(16);
					}
					else if (Function_324())
					{
						Function_580(28);
					}
				}
				else
				{
					Function_580(28);
				}
				break;
			
			case 0x0000001C:
				Function_571(5.0f);
				Function_322();
				Function_560(1, 1);
				Function_507(0);
				Function_484();
				Function_495(90, 0);
				Function_321();
				if (NET_IS_SESSION_HOST())
				{
					Function_504(&Local_91 + 8);
					Function_504(&Local_91 + 20);
					Local_91.f_4 = 0;
					Function_503(1, 0);
					Function_320(1, 0);
					Function_320(0, 0);
				}
				if (IS_OBJECT_VALID(StackVal))
				{
					Function_400(&Local_118 + 60, 1);
				}
				if (Function_426(&Global_79349, 128))
				{
					Function_311();
				}
				Function_580(32);
			
			case 0x00000020:
				Function_571(0x40000000);
				if (Function_310())
				{
				}
				Global_76888[03] = { StackVal, StackVal, *(&Local_118 + 1024) };
				Global_76888[13] = { StackVal, StackVal, *(&Local_118 + 1024) };
				Global_76895[03] = { 0.0f, Local_118.f_1036, 0.0f };
				Global_76895[13] = { 0.0f, Local_118.f_1036, 0.0f };
				if (Function_335(StackVal, StackVal, *(&Local_118 + 1024), Local_118.f_1036))
				{
					if (!Function_582("skiplobbyGringos") && (NET_IS_SESSION_HOST() || !Function_489(40)))
					{
						if (Function_306())
						{
							Function_580(33);
							Local_118 = 0.0f;
						}
						else
						{
							Function_580(25);
						}
					}
					else
					{
						Function_580(25);
					}
				}
				break;
			
			case 0x00000021:
				Function_571(0x40000000);
				if (GET_CURRENT_GRINGO(bVar6) == Local_118.f_1076)
				{
					Function_580(25);
					Function_495(16384, 1);
					Function_495(32768, 0);
					Function_304();
				}
				else if (Local_118 < 5.0f)
				{
					Function_580(25);
					Function_304();
				}
				break;
			
			case 0x00000019:
				Function_571(0x40000000);
				if (STREAMING_IS_WORLD_LOADED() || Local_118 < 30.0f)
				{
					if (Local_118 < 30.0f)
					{
						Local_118 = 0.0f;
					}
					Function_580(34);
				}
				break;
			
			case 0x00000022:
				Function_571(0x40000000);
				if (Function_303(bVar6, 1, 0x41700000))
				{
					if (IS_LOCAL_PLAYER_VALID(0))
					{
						SET_PLAYER_CONTROL(0, 1, 1, 1);
						DISABLE_PLAYER_GRINGO_USE(0, 1);
					}
					HUD_ENABLE(1);
					Function_282(&Local_118 + 416, 0, 0, 0, 0);
					Function_278(&Local_118 + 416 + 192);
					Function_275(&Local_118 + 416, 39872);
					Function_270(&Local_118 + 416, 39149);
					Function_269(&Local_118 + 416, 0);
					if (NET_IS_SESSION_HOST() || !Function_489(40))
					{
						Function_268(bVar6, 0);
					}
					Function_267(0);
					SET_SWITCH_CAMERA_BUTTON_ENABLED(0);
					Function_560(2048, 1);
					Function_276(bVar6);
					STREAMING_RELEASE_MAIN_POI();
					Function_580(31);
				}
				break;
			
			case 0x0000001F:
				Function_571(0x40000000);
				if (HUD_IS_FADED() && (NET_IS_SESSION_HOST() || !Function_489(40)))
				{
					Function_266(1.5f);
					Local_118.f_1084 = GET_CURRENT_GAME_TIME();
				}
				if (!HUD_IS_FADING())
				{
					Function_580(35);
				}
				break;
			
			case 0x00000023:
				Function_571(0x40000000);
				Function_580(36);
			
			case 0x00000024:
				Function_571(30.0f);
				Function_169(&Local_118 + 416);
				Function_161();
				if (NET_IS_IN_SESSION())
				{
					Local_118.f_1016 = Function_155();
					Function_436(Local_118.f_1016);
					Function_154(Local_118.f_1016);
					Function_406(50921, 49757);
					if (Function_505())
					{
						HUD_CLEAR_HELP();
						Function_146(&Local_118 + 416);
						UI_EXIT("MPSplash");
						Function_580(16);
					}
					Function_137();
					if (StackVal != 1)
					{
						if (Function_133(Local_118.f_1016))
						{
							Function_580(37);
						}
					}
					Function_132();
					Function_131();
				}
				else
				{
					Function_130();
				}
				break;
			
			case 0x00000025:
				Function_571(0x40000000);
				Function_128();
				Function_350();
				Function_484();
				Function_453();
				Function_507(0);
				Function_127();
				if (NET_IS_SESSION_HOST())
				{
					Local_91.f_4 = 0;
				}
				Function_125();
				SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
				Function_124(Function_573());
				Function_560(1, 0);
				Function_495(1160, 0);
				Function_123();
				Function_121();
				Function_404(64);
				Function_580(38);
			
			case 0x00000026:
				Function_571(0x40000000);
				if (IS_LAYOUTREF_VALID(Global_83591.f_140))
				{
					if (Function_83(Global_83591.f_140, &Global_83591 + 276, !Function_426(&Global_79349, 512), 1) != 0)
					{
						Function_580(39);
					}
				}
				else
				{
					Function_580(39);
				}
				break;
			
			case 0x00000027:
				Function_571(0x40000000);
				if (!Function_502(512) || Function_82() == 4294967295)
				{
					if (IS_LOCAL_PLAYER_VALID(0))
					{
						DISABLE_PLAYER_GRINGO_USE(0, 0);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						if (IS_ACTOR_VALID(bVar6))
						{
							ACTOR_END_FORCE_HOLSTER(bVar6);
						}
					}
					NET_GAMER_ICON_FORCE_TEXT_VISIBLE(0);
					Function_79(&Local_118 + 416);
					UI_EXIT("MPSplash");
					NET_TICKER_CLEAR();
					if (Function_426(&Global_79349, 256))
					{
						Function_311();
					}
					Function_78();
					Function_552(0);
					Function_495(2048, 0);
					Local_118.f_864 = Function_77();
					Function_580(41);
				}
				else if (NET_IS_SESSION_HOST())
				{
					Function_61();
				}
				break;
			
			case 0x00000029:
				Function_571(-1.0f);
				if (!Function_502(2048))
				{
					if (IS_SCRIPT_VALID(Local_118.f_864))
					{
						Function_495(2048, 1);
						NET_LOG(true, "Lobby State", "Game script successfully launched!", 0, 0, 0, 0);
					}
				}
				else if (Function_577(64))
				{
					NET_LOG(true, "Gametype Lobby", "Told to ditch, and doing so!", 0, 0, 0, 0);
					Function_60();
					Function_404(64);
					UI_ACTIVATE("NetAlert_UnexpectedFail");
				}
				else if ((!Function_492(524288) && !IS_SCRIPT_VALID(Local_118.f_864)) || Function_486(256))
				{
					NET_LOG(true, "Lobby State", "Game script is no longer valid, deemed over!", 0, 0, 0, 0);
					Function_60();
					if (NET_IS_SESSION_HOST())
					{
						Function_503(2, 0);
					}
					Function_59();
					Local_118.f_4 = 2.0f;
					Function_495(4, 1);
					Function_495(8, 0);
					Function_580(14);
				}
				break;
			
			case 0x0000000E:
				Function_571(0x40000000);
				Function_560(1, 0);
				Function_54(0);
				Function_350();
				Function_580(15);
				break;
			
			case 0x0000002B:
				Function_571(0x40000000);
				if (IS_LOCAL_PLAYER_VALID(0))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				UNK_0xFA0E1F8B(4294967295);
				if (NET_GET_PLAYMODE() == 1)
				{
					NET_SESSION_SET_INVITABLE(1);
					NET_SET_SESSION_CLOSED_FOR_JOIN(0);
					if (Function_53())
					{
						ScriptParam_0.f_16 = Function_52();
					}
					else if (Function_51())
					{
						ScriptParam_0.f_16 = Function_50();
					}
				}
				Function_531(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, ScriptParam_0);
				Function_580(44);
				break;
			
			case 0x0000002C:
				Function_571(0x40000000);
				if (HUD_IS_FADED())
				{
					Function_60();
					Function_580(45);
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_OUT(0.25f, 1f, 1);
					UNK_0xEF270DC9();
				}
				break;
			
			case 0x0000002D:
				Function_571(0x40000000);
				if (!IS_SCRIPT_VALID(Local_118.f_864))
				{
					Function_346();
					Function_580(46);
				}
				break;
			
			case 0x0000002E:
				Function_571(0x40000000);
				if (!IS_SCRIPT_VALID(Local_118.f_864) && !IS_SCRIPT_VALID(Local_118.f_860))
				{
					if (NET_GET_PLAYMODE() == 1)
					{
						if (NET_IS_SESSION_HOST())
						{
							NET_SESSION_SET_GAME_MODE_TYPE(1);
						}
					}
					else if (NET_IS_IN_SESSION())
					{
						NET_SESSION_LEAVE_SESSION();
					}
					Function_580(47);
				}
				break;
			
			case 0x00000030:
				Function_571(0x40000000);
				Function_60();
				Function_346();
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
			
			case 0x0000002F:
				Function_571(0x40000000);
				Function_402();
				Function_49(5);
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		if (NET_IS_SESSION_HOST() && Function_502(512))
		{
			switch (Function_576())
			{
				case 0x00000028:
				case 0x0000002A:
					if (Function_48(Local_118.f_412, 102, &bVar9, 0))
					{
						Function_39();
					}
					else if (Function_48(Local_118.f_412, 69, &bVar9, 0))
					{
						iVar10 = DECOR_GET_INT(bVar9, "Slot");
						Function_39();
					}
					break;
				}
		}
		bVar9 = "";
		if (NET_GET_PLAYMODE() != 1)
		{
			if (Function_48(Local_118.f_412, 71, &bVar9, 1))
			{
				if (DECOR_CHECK_EXIST(bVar9, "failed"))
				{
					Function_404(16);
				}
			}
		}
		if (iVar5 || Function_576() == 13)
		{
			Function_558(Local_118.f_412);
		}
		WAIT(0);
	}
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	Function_60();
	Function_346();
	if (NET_IS_IN_SESSION() && NET_GET_PLAYMODE() == 1)
	{
		NET_LOG(true, "LOBBY", "Lobby leaving session", 0, 0, 0, 0);
		NET_SESSION_LEAVE_SESSION();
	}
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	TASK_CLEAR(bVar6);
	if ((IS_EXITFLAG_SET() && Function_577(16)) && !IS_GAME_RESETTING())
	{
		Function_266(1.5f);
	}
	UI_UNFOCUS("HudGamerList");
	UI_EXIT("HudMPNoFun");
	UI_EXIT("MPSplash");
	UI_POP("MPSplash");
	Function_530();
	Function_6();
	Function_3(uLocal_87);
	if (IS_LAYOUTREF_VALID(Local_118.f_60))
	{
		DESTROY_LAYOUT(Local_118.f_60);
	}
	STREAMING_UNLOAD_SCENE();
	if (Global_16524.f_16)
	{
		Function_340(0, 0, 0);
		Function_339();
	}
	Function_2();
	Function_1(ScriptParam_0.f_16);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0) //Position: 0x1EEA / 7914
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
			DISABLE_WORLD_SECTOR("dlc02x");
			break;
		
		case 0x00000033:
		case 0x00000042:
		case 0x00000043:
			DISABLE_WORLD_SECTOR("dlc05x");
			break;
		
		case 0x00000047:
			DISABLE_WORLD_SECTOR("dlc06x");
			break;
	}
	return;
}

void Function_2() //Position: 0x1F58 / 8024
{
	if (Function_574(64))
	{
		Global_29155[Global_30717[2]10].f_4 = 7;
		Global_29155[Global_30640[15]10].f_4 = 7;
		Global_29155[Global_30685[4]10].f_4 = 7;
		Global_29155[Global_30658[5]10].f_4 = 7;
		Global_29155[Global_30640[13]10].f_4 = 7;
		Global_29155[Global_30707[4]10].f_4 = 7;
		Global_29155[Global_30658[6]10].f_4 = 7;
		Global_29155[Global_30658[7]10].f_4 = 7;
		Global_29155[Global_30640[16]10].f_4 = 7;
		Global_29155[Global_30693[11]10].f_4 = 7;
		Global_29155[Global_30668[9]10].f_4 = 7;
	}
	return;
}

int Function_3(char* cParam0) //Position: 0x2005 / 8197
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_5();
	bVar1 = FIND_OBJECT_IN_LAYOUT(bVar0, cParam0);
	if (Function_4(bVar1))
	{
		return 1;
	}
	return 0;
}

bool Function_4(bool bParam0) //Position: 0x2024 / 8228
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

var Function_5() //Position: 0x203A / 8250
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_6() //Position: 0x2076 / 8310
{
	Function_491(2);
	Function_49(2);
	Function_404(148);
	Function_490(5);
	Function_30(0);
	Function_24();
	Function_354();
	Function_484();
	Function_453();
	Function_54(1);
	Function_402();
	Function_23();
	Function_508();
	UNREGISTER_SCRIPT_WITH_AUDIO();
	UI_UNFOCUS("HudGamerList");
	Function_405();
	Function_480();
	HUD_ENABLE(1);
	Function_121();
	AUDIO_TURN_ON_WALLA();
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	SET_POP_DENSITY_MULTIPLIER(0.6f);
	NET_CLEAR_RELEVANCY_OVERRIDE();
	SET_PLAYER_COMBATMODE_OVERRIDE(4294967295);
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Global_62993 = 0;
	Function_79(&Local_118 + 416);
	Function_19(&Local_118 + 1060);
	Function_124(Function_573());
	Function_7();
	if (Local_118.f_1012 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(Local_118.f_1012, 4294967295);
	}
	Function_400(&Local_118 + 60, 1);
	return;
}

void Function_7() //Position: 0x211F / 8479
{
	Function_18();
	Function_10();
	Function_8();
	return;
}

void Function_8() //Position: 0x212E / 8494
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_9();
	return;
}

void Function_9() //Position: 0x2162 / 8546
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_10() //Position: 0x2173 / 8563
{
	if (Global_83864.f_1264 > 6)
	{
		Function_11(&(Global_50170[522]));
		Function_11(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_11(&(Global_50170[722]));
		Function_11(&(Global_50170[822]));
		Function_11(&(Global_50170[922]));
		Function_11(&(Global_50170[1022]));
		Function_11(&(Global_50170[1122]));
	}
	return;
}

void Function_11(bool bParam0) //Position: 0x21D3 / 8659
{
	Global_56092[*bParam0] = 0;
	Function_12(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_12(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x21ED / 8685
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_17(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_16(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_17(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_14(iParam0, 4))
	{
		Function_13(Function_17(iParam0), 0);
	}
}

void Function_13(var uParam0, int iParam1) //Position: 0x22A4 / 8868
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

bool Function_14(int iParam0, int iParam1) //Position: 0x22C9 / 8905
{
	return Function_15(Global_50170[iParam022].f_32, iParam1);
}

bool Function_15(int iParam0, int iParam1) //Position: 0x22DD / 8925
{
	return (iParam0 && iParam1) == 0;
}

struct<16> Function_16(int iParam0) //Position: 0x22EA / 8938
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_17(int iParam0) //Position: 0x231E / 8990
{
	return Global_50170[iParam022].f_24;
}

void Function_18() //Position: 0x232D / 9005
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_19(int iParam0) //Position: 0x2346 / 9030
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_20(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0x236C / 9068
{
	if (Function_22(uParam0[iParam13], 4))
	{
		if (Function_22(uParam0[iParam13], 1))
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
			Function_21(uParam0[iParam13], 1);
			Function_21(uParam0[iParam13], 2);
			Function_21(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x249A / 9370
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_22(int iParam0, int iParam1) //Position: 0x24B4 / 9396
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_23() //Position: 0x24D1 / 9425
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

void Function_24() //Position: 0x24F7 / 9463
{
	if (Function_28())
	{
		Function_452();
	}
	Function_25(4096, 0, 1);
	return;
}

void Function_25(int iParam0, bool bParam1, int iParam2) //Position: 0x250E / 9486
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_27(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_26(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_26(int iParam0, int iParam1) //Position: 0x2536 / 9526
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_27(int iParam0, int iParam1) //Position: 0x2549 / 9545
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_28() //Position: 0x2558 / 9560
{
	return (Function_29(4096) || Function_29(4));
}

bool Function_29(int iParam0) //Position: 0x2569 / 9577
{
	return Function_15(Global_76905.f_132, iParam0);
}

void Function_30(bool bParam0) //Position: 0x257A / 9594
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_37(2);
	}
	else
	{
		Function_35(2);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (Function_34(GET_LOCAL_SLOT(), bVar0))
			{
				Function_31(bVar0, bParam0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_31(bool bParam0, bool bParam1) //Position: 0x25BD / 9661
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_34(GET_LOCAL_SLOT(), bParam0) && !Function_32(2))
		{
			return;
		}
		if (!Function_32(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
		if (Function_32(4))
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

bool Function_32(int iParam0) //Position: 0x263A / 9786
{
	return Function_33(Global_79337, iParam0);
}

bool Function_33(var uParam0, int iParam1) //Position: 0x2649 / 9801
{
	return (uParam0 && iParam1) == 0;
}

bool Function_34(bool bParam0, bool bParam1) //Position: 0x2656 / 9814
{
	int iVar0;
	int iVar1;
	
	iVar0 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	iVar1 = NET_GET_GAMER_POSSE_LEADER(bParam1);
	if (iVar0 != iVar1 && iVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

void Function_35(int iParam0) //Position: 0x267A / 9850
{
	Function_36(&Global_79337, iParam0);
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x2689 / 9865
{
	Function_26(uParam0, iParam1);
	return;
}

void Function_37(int iParam0) //Position: 0x2696 / 9878
{
	Function_38(&Global_79337, iParam0);
	return;
}

void Function_38(var uParam0, int iParam1) //Position: 0x26A5 / 9893
{
	Function_27(uParam0, iParam1);
	return;
}

void Function_39() //Position: 0x26B2 / 9906
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_42(0);
	iVar1 = Function_42(1);
	Function_40(iVar0, iVar1);
	return;
}

void Function_40(int iParam0, int iParam1) //Position: 0x26CB / 9931
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (!IS_SLOT_VALID(bVar0))
		{
			if (iParam0 <= iParam1)
			{
				Function_41(bVar0, 0);
				iParam0++;
			}
			else
			{
				Function_41(bVar0, 1);
				iParam1++;
			}
		}
		bVar0++;
	}
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x270F / 9999
{
	if (NET_IS_SESSION_HOST())
	{
		(*&Global_78578 + 20)[bParam0] = iParam1;
	}
	return;
}

int Function_42(int iParam0) //Position: 0x2727 / 10023
{
	return Function_43(iParam0, 1);
}

int Function_43(int iParam0, bool bParam1) //Position: 0x2733 / 10035
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1) || !bParam1)
		{
			if (Function_44(bVar1, bParam1, 0) == iParam0)
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_44(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2770 / 10096
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_47(bParam0))
			{
				if (!Function_45(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_45(bool bParam0, int iParam1, bool bParam2) //Position: 0x27B4 / 10164
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_488(iParam1, bParam2);
	}
	if (!Function_47(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_46(iParam1), 64);
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

var Function_46(int iParam0) //Position: 0x2835 / 10293
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

bool Function_47(bool bParam0) //Position: 0x2B4E / 11086
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

bool Function_48(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2BEF / 11247
{
	bool bVar0;
	int iVar1;
	
	if (!IS_OBJECTSET_VALID(iParam0))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < (GET_OBJECTSET_SIZE(iParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar1, iParam0);
		if (iParam1 == GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar0)))
		{
			*bParam2 = bVar0;
			if (bParam3)
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0);
			}
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void Function_49(int iParam0) //Position: 0x2C48 / 11336
{
	Function_38(&Global_78617 + 52, iParam0);
	return;
}

int Function_50() //Position: 0x2C59 / 11353
{
	return 31;
}

bool Function_51() //Position: 0x2C61 / 11361
{
	return NET_GET_FREE_ROAM_MODE() != 2;
}

int Function_52() //Position: 0x2C6C / 11372
{
	return 32;
}

bool Function_53() //Position: 0x2C74 / 11380
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

void Function_54(bool bParam0) //Position: 0x2C7F / 11391
{
	bool bVar0;
	
	Function_552(0);
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar0 = Function_573();
		if (IS_ACTOR_VALID(bVar0))
		{
			MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		}
		if (bParam0)
		{
			DISABLE_PLAYER_GRINGO_USE(0, 0);
			SET_PLAYER_CONTROL(0, 1, 1, 1);
			if (IS_ACTOR_VALID(bVar0))
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
		}
		else
		{
			DISABLE_PLAYER_GRINGO_USE(0, 1);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			if (IS_ACTOR_VALID(bVar0))
			{
				ACTOR_START_FORCE_HOLSTER(bVar0, 1, 0);
			}
		}
	}
	Function_123();
	Function_560(1, 0);
	Function_405();
	Function_350();
	Function_484();
	Function_57(0);
	NET_GAMER_ICON_FORCE_TEXT_VISIBLE(0);
	Function_127();
	Function_56();
	Function_55();
	return;
}

void Function_55() //Position: 0x2D04 / 11524
{
	SET_PLAYER_COMBATMODE_OVERRIDE(4294967295);
	SET_PLAYER_COMBATMODE_EXCLUSION(4294967295);
	NET_GAMER_BLIPS_FORCE_VISIBLE(false);
	NET_GAMER_ICONS_SET_STEALTH(0);
	NET_GAMER_BLIPS_SET_STEALTH(0);
	Global_79962 = 0;
	return;
}

void Function_56() //Position: 0x2D23 / 11555
{
	return;
}

void Function_57(int iParam0) //Position: 0x2D29 / 11561
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_58())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_58() //Position: 0x2D65 / 11621
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_59() //Position: 0x2D8A / 11658
{
	if (NET_SESSION_END_GAMEPLAY())
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_503(4, 0);
		}
	}
	if (NET_GET_PLAYMODE() == 1)
	{
		NET_SESSION_SET_INVITABLE(1);
		NET_SET_SESSION_CLOSED_FOR_JOIN(0);
	}
	PLAYSTAT_MP_DEED_COMPLETE(&Global_79349);
	return;
}

void Function_60() //Position: 0x2DBB / 11707
{
	if (IS_SCRIPT_VALID(Local_118.f_864))
	{
		TERMINATE_SCRIPT(Local_118.f_864);
	}
	return;
}

void Function_61() //Position: 0x2DD4 / 11732
{
	bool bVar0;
	
	bVar0 = false;
	if (Function_435(&Local_91 + 20))
	{
		bVar0 = Function_431(&Local_91 + 20);
	}
	Function_62(1, bVar0, 0, 0, 1);
	return;
}

int Function_62(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2DFA / 11770
{
	int iVar0;
	int iVar1;
	struct<2> Var35[16];
	int iVar68;
	int iVar69;
	int iVar70;
	struct<2> Var71[2];
	int iVar76;
	int iVar77;
	bool bVar78;
	bool bVar79;
	bool bVar80;
	int iVar81;
	
	iVar1 = 16;
	*(&iVar1 + 68) = 16;
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 1;
	if (!bParam4)
	{
		iLocal_67 = 0;
	}
	iVar68 = Function_68(&Var35, &iVar1, bParam1);
	if (bParam3)
	{
		iVar76 = 0;
		while (iVar76 <= 16)
		{
			if ((Var35[iVar762] % 2) == 1)
			{
				Function_67(&iVar1, iVar76, 1, &Var71, &Var35);
			}
			iVar76++;
		}
	}
	iVar76 = 0;
	while (iVar76 <= 16)
	{
		iVar0 = 0;
		while (iVar0 <= 16)
		{
			if (Function_66(StackVal, StackVal, Var35[iVar02], Var35[iVar692]))
			{
				iVar69 = iVar0;
			}
			iVar0++;
		}
		if (Function_66(StackVal, StackVal, Var71[02], Var71[12]))
		{
			iVar70 = 1;
		}
		else
		{
			iVar70 = 0;
		}
		Function_67(&iVar1, iVar69, iVar70, &Var71, &Var35);
		iVar76++;
	}
	if (iVar68 == 1)
	{
		if (!bParam3 && bParam4)
		{
			iLocal_67++;
			PRINTSTRING("Only one posse on the final balance attempt, we'll allow loading to continue if we're stuck here for a little bit..");
			PRINTNL();
			if (iLocal_67 >= 30)
			{
				if (!bParam2 && iParam0)
				{
					Function_65(&iVar1);
					Function_40(Var71[02], Var71[12]);
				}
				iLocal_67 = 0;
				return 4;
			}
			Function_64(Var71[02], Var71[12], bParam3);
			return 0;
		}
		Function_64(Var71[02], Var71[12], bParam3);
		return 0;
	}
	iVar77 = ABS((Var71[02] - Var71[12]));
	bVar78 = iVar77 < 1;
	bVar79 = iVar77 < 2;
	bVar80 = iVar68 != 2;
	if (bParam2)
	{
		PRINTSTRING("TEAM SIZES: ");
		PRINTINT(Var71[02]);
		PRINTSTRING(" v ");
		PRINTINT(Var71[12]);
		PRINTNL();
	}
	if (bVar78)
	{
		if (bParam2)
		{
			PRINTSTRING("TEAM SIZE MISMATCH: ");
			PRINTINT(Var71[02]);
			PRINTSTRING(" v ");
			PRINTINT(Var71[12]);
			PRINTNL();
		}
		if (!bParam3 && !bVar80)
		{
			if (bParam2)
			{
				PRINTSTRING("Attempting magic fix...");
				PRINTNL();
			}
			iVar81 = Function_62(iParam0, bParam1, bParam2, 1, 0);
			if (iVar81 == 5)
			{
				if (bParam2)
				{
					return 5;
				}
				return 4;
			}
			if (bParam2)
			{
				PRINTSTRING("Magic fix failed...");
				PRINTNL();
			}
		}
	}
	if (NET_GET_PLAYMODE() != 1)
	{
		if (Function_63(Var71[02], Var71[12]) >= 8)
		{
			Function_64(Var71[02], Var71[12], bParam3);
			return 3;
		}
		if (bVar79)
		{
			if (bVar80)
			{
				Function_64(Var71[02], Var71[12], bParam3);
				return 1;
			}
			Function_64(Var71[02], Var71[12], bParam3);
			return 2;
		}
	}
	if (!bParam2 && iParam0)
	{
		Function_65(&iVar1);
		Function_40(Var71[02], Var71[12]);
	}
	if (bParam3)
	{
		return 5;
	}
	return 4;
}

int Function_63(int iParam0, bool bParam1) //Position: 0x313F / 12607
{
	if (iParam0 >= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_64(var uParam0, var uParam1, bool bParam2) //Position: 0x3151 / 12625
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	if (!bParam2)
	{
	}
	return;
}

void Function_65(int iParam0) //Position: 0x3165 / 12645
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = false;
	while (bVar0 > 16 && !bVar1)
	{
		if ((*iParam0)[bVar0] != 4294967295)
		{
			if (Function_44(bVar0, 0, 0) != (*iParam0 + 68)[bVar0])
			{
				bVar1 = true;
			}
		}
		bVar0++;
	}
	if (bVar1)
	{
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if ((*iParam0)[bVar0] != 4294967295)
		{
			Function_41(bVar0, (*iParam0 + 68)[bVar0]);
		}
		bVar0++;
	}
	if (bVar1)
	{
	}
	return;
}

bool Function_66(struct<5> Param0) //Position: 0x31D9 / 12761
{
	if (Param0 >= Param2)
	{
		return 1;
	}
	if (StackVal && StackVal < Param0 != Param2)
	{
		return 1;
	}
	return 0;
}

void Function_67(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4) //Position: 0x3206 / 12806
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			(*iParam0 + 68)[iVar0] = iParam2;
		}
		iVar0++;
	}
	(*uParam3)[iParam22] = ((*uParam3)[iParam22] + (*uParam4)[iParam12]);
	uParam3[iParam22]->f_4 = (StackVal + StackVal);
	(*uParam4)[iParam12] = -(*uParam4)[iParam12];
	uParam4[iParam12]->f_4 = -1.0f;
}

int Function_68(var uParam0, var uParam1, bool bParam2) //Position: 0x3278 / 12920
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (bParam2)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = Function_76(iVar0);
		}
		if (iVar1 != 4294967295)
		{
			if ((*uParam0)[iVar12] == 0)
			{
				iVar2++;
			}
			Function_69(uParam0[iVar12], iVar0);
		}
		(*uParam1)[iVar0] = iVar1;
		iVar0++;
	}
	return iVar2;
}

void Function_69(var uParam0, bool bParam1) //Position: 0x32D2 / 13010
{
	float fVar0;
	
	*uParam0++;
	if (Function_47(bParam1))
	{
		fVar0 = (((IntToFloat(Function_75(bParam1)) * 1.5f) + (IntToFloat(Function_72(bParam1)) * -1.0f)) + (IntToFloat(Function_70(5, bParam1)) * 2.0f));
		uParam0->f_4 = (StackVal + fVar0);
	}
	return;
}

int Function_70(int iParam0, bool bParam1) //Position: 0x3314 / 13076
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_71(iParam0);
	}
	if (!Function_47(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

int Function_71(int iParam0) //Position: 0x337B / 13179
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_72(bool bParam0) //Position: 0x338B / 13195
{
	return Function_73(12, bParam0);
}

int Function_73(int iParam0, bool bParam1) //Position: 0x3398 / 13208
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_74(iParam0);
	}
	if (!Function_47(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_74(int iParam0) //Position: 0x3406 / 13318
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_75(int iParam0) //Position: 0x341F / 13343
{
	return Function_73(11, iParam0);
}

int Function_76(bool bParam0) //Position: 0x342C / 13356
{
	return NET_GET_GAMER_POSSE_LEADER(bParam0);
}

var Function_77() //Position: 0x3437 / 13367
{
	if (Function_492(524288))
	{
		Function_495(2048, 1);
		Function_485(128, 1);
		return "";
	}
	if (UNK_0x214AFB8C(Global_79349.f_20))
	{
		return LAUNCH_NEW_SCRIPT(GET_ASSET_NAME(Global_79349.f_20, 4), 0);
	}
	return "";
}

void Function_78() //Position: 0x3474 / 13428
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_79(int iParam0) //Position: 0x3489 / 13449
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_81();
	bVar0 = Function_573();
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
	Function_80(!Function_577(1));
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_560(81920, 0);
	Function_560(8388608, 0);
	Function_146(iParam0);
	if (iParam0->f_108 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
	}
	return;
}

void Function_80(bool bParam0) //Position: 0x353B / 13627
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

void Function_81() //Position: 0x35C2 / 13762
{
	if (Function_29(8))
	{
		Function_452();
	}
	Function_25(8, 0, 1);
	return;
}

int Function_82() //Position: 0x35DA / 13786
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_44(GET_LOCAL_SLOT(), 1, 0);
}

int Function_83(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x35F1 / 13809
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	char* cVar17[64];
	char* cVar33[64];
	bool bVar49;
	bool bVar50;
	
	iVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_120()));
	if (!IS_OBJECTSET_VALID(iVar0))
	{
		return 4294967295;
	}
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_119()));
	if (!IS_OBJECTSET_VALID(iVar1))
	{
		iVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_119(), bParam0, 17, 0);
	}
	iVar2 = 0;
	iVar4 = 0;
	bVar5 = false;
	iVar6 = 0;
	iVar13 = Function_118(32, GET_OBJECTSET_SIZE(iVar0));
	iVar6 = 0;
	while (iVar6 <= iVar13)
	{
		bVar14 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar6, iVar0);
		bVar49 = false;
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_117(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_116(bVar14);
				vVar7 = { StackVal, StackVal, Function_116(bVar14) };
				uVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2.5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2.5f, "");
				Function_115(bVar14);
				vVar10 = { StackVal, StackVal, Function_115(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_113(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_112());
							if (Function_111(bVar5))
							{
								if (Function_110((*iParam1 + 228)[bVar52]))
								{
									Function_90(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, uVar3, iVar4);
									Function_85(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
									if (bParam2)
									{
										SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bVar16), GET_WEAPON_DISPLAY_NAME((*iParam1 + 228)[bVar52]));
									}
								}
								else
								{
									cVar33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar17 };
									stradd(&cVar33, " is using undefined pickup slot #", 64);
									stradd(&cVar33, I2STR(bVar5), 64);
									bVar49 = true;
								}
							}
							break;
						
						case 0x00000005:
							if ((iParam1 + 228)->f_224 < 0.0f)
							{
								Function_90(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, uVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_84(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_90(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, uVar3, iVar4);
							break;
					}
					if (!bVar49)
					{
						ADD_OBJECT_TO_OBJECTSET(bVar15, iVar1);
					}
				}
			}
		}
		DESTROY_OBJECT(bVar14);
		iVar6++;
	}
	CLEAN_OBJECTSET(iVar0);
	if (GET_OBJECTSET_SIZE(iVar0) == 0)
	{
		DESTROY_OBJECTSET(iVar0);
		bVar50 = GET_LOCAL_SLOT();
		NET_SCRIPTMSG_SEND(1, 19, &bVar50, 1, 1);
		return 1;
	}
	return 0;
}

var Function_84() //Position: 0x3825 / 14373
{
	return "XPBonus";
}

void Function_85(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x3835 / 14389
{
	bool bVar0;
	
	if (Function_110(Param1))
	{
		bVar0 = Function_87(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_86(), bVar0);
	}
}

var Function_86() //Position: 0x385B / 14427
{
	return "PackedWeapon";
}

var Function_87(struct<5> Param0) //Position: 0x3870 / 14448
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_88())) || SHIFT_LEFT(bParam2, Function_88() + 8));
}

int Function_88() //Position: 0x388E / 14478
{
	return Function_89(39);
}

int Function_89(int iParam0) //Position: 0x3899 / 14489
{
	float fVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	fVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, 1);
		fVar0++;
	}
	return fVar0;
}

void Function_90(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, var uParam13, int iParam14) //Position: 0x38C7 / 14535
{
	Function_102(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_95(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_94(), Function_93(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_92(), Function_91(uParam13, iParam14));
}

var Function_91(var uParam0, bool bParam1) //Position: 0x3918 / 14616
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_92() //Position: 0x3928 / 14632
{
	return "PackedGrass";
}

var Function_93(bool bParam0, bool bParam1, bool bParam2) //Position: 0x393C / 14652
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = 1;
	}
	if (bParam1)
	{
		iVar0 += 2;
	}
	return (iVar0 || SHIFT_LEFT(bParam2, 2));
}

var Function_94() //Position: 0x3961 / 14689
{
	return "PackedMetadata";
}

void Function_95(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x3978 / 14712
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				uVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 379, 0, 2, 0);
				uVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 379, 0, 2, 0);
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_86(), &iVar5))
				{
					Function_99(iVar5, &iVar6);
					SET_BLIP_NAME(uVar4, GET_WEAPON_DISPLAY_NAME(iVar6));
				}
			}
			if (bParam4)
			{
				Function_98();
				vVar0 = { StackVal, StackVal, Function_98() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				uVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 380, 0, 2, 0);
				uVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 380, 0, 2, 0);
			}
			if (bParam4)
			{
				Function_97();
				vVar0 = { StackVal, StackVal, Function_97() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			if (bParam3)
			{
				uVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 381, 0, 2, 0);
				uVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 381, 0, 2, 0);
			}
			if (bParam4)
			{
				Function_96();
				vVar0 = { StackVal, StackVal, Function_96() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	if (bParam3)
	{
		SET_BLIP_MAX_DISTANCE(uVar3, 1.0f);
		UNK_0x1E98AFEC(uVar3, 1);
		UNK_0xFF3DB575(uVar4, 1);
	}
}

vector3 Function_96() //Position: 0x3AA3 / 15011
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_97() //Position: 0x3AB4 / 15028
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_98() //Position: 0x3AC5 / 15045
{
	return 0.0f, 0.158f, -0.163f;
}

void Function_99(int iParam0, int iParam1) //Position: 0x3AD6 / 15062
{
	*iParam1 = Function_100(iParam0, Function_88(), 0);
	iParam1->f_4 = Function_100(iParam0, Function_88() + 8, Function_88());
	return;
}

int Function_100(int iParam0, int iParam1, int iParam2) //Position: 0x3AF9 / 15097
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_101((iParam1 - 1)), 1) - 1);
	return SHIFT_RIGHT((iVar0 && iParam0), iParam2);
}

int Function_101(bool bParam0) //Position: 0x3B18 / 15128
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_102(var uParam0, var uParam1, int iParam2, var uParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x3B24 / 15140
{
	var uVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			uVar0 = Function_109();
			Function_97();
			vVar1 = { StackVal, StackVal, Function_97() };
			break;
		
		case 0x00000001:
			uVar0 = Function_108();
			Function_98();
			vVar1 = { StackVal, StackVal, Function_98() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			uVar0 = Function_107();
			Function_96();
			vVar1 = { StackVal, StackVal, Function_96() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_106(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Function_106()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(uParam3, &cVar4, uVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, 0, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_103(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_103() //Position: 0x3C28 / 15400
{
	return "MPItemGiver";
}

struct<32> Function_104(bool bParam0) //Position: 0x3C3C / 15420
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105("0", &cVar8, ""), 4);
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

struct<32> Function_105(char* cParam0, char* cParam1, char* cParam2) //Position: 0x3CA6 / 15526
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_106() //Position: 0x3CC5 / 15557
{
	return "PBox_";
}

var Function_107() //Position: 0x3CD3 / 15571
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_108() //Position: 0x3CF9 / 15609
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_109() //Position: 0x3D21 / 15649
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_110(int iParam0) //Position: 0x3D47 / 15687
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_111(bool bParam0) //Position: 0x3D59 / 15705
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_112() //Position: 0x3D69 / 15721
{
	return "ID";
}

bool Function_113(bool bParam0, int iParam1) //Position: 0x3D74 / 15732
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_33((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_114())
			{
				return 0;
			}
			return !Function_33((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_33((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_114() //Position: 0x3DC9 / 15817
{
	return Function_15(Global_79962, 1024);
}

vector3 Function_115(bool bParam0) //Position: 0x3DD9 / 15833
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

vector3 Function_116(bool bParam0) //Position: 0x3E00 / 15872
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

var Function_117() //Position: 0x3E27 / 15911
{
	return "Type";
}

var Function_118(int iParam0, int iParam1) //Position: 0x3E34 / 15924
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_119() //Position: 0x3E46 / 15942
{
	return "PickupsSet";
}

var Function_120() //Position: 0x3E59 / 15961
{
	return "PickupFlagsSet";
}

void Function_121() //Position: 0x3E70 / 15984
{
	Function_122();
	return;
}

void Function_122() //Position: 0x3E79 / 15993
{
	if (Function_29(4194304))
	{
		Function_25(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_29(8388608))
	{
		Function_25(8388608, 0, 1);
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

void Function_123() //Position: 0x3F82 / 16258
{
	Function_25(1024, 0, 1);
	Function_25(1, 0, 0);
	return;
}

void Function_124(bool bParam0) //Position: 0x3F96 / 16278
{
	Function_560(4194304, 0);
	DECOR_REMOVE(bParam0, "NoMelee");
	return;
}

void Function_125() //Position: 0x3FB4 / 16308
{
	if (!Function_126(4) && NET_IS_SESSION_HOST())
	{
		if (NET_SESSION_START_GAMEPLAY())
		{
			Function_503(4, 1);
		}
	}
	if (NET_GET_PLAYMODE() != 1 && !Function_15(Global_79962, 2))
	{
		if (NET_IS_SESSION_HOST())
		{
			if (!NET_SESSION_SET_INVITABLE(0))
			{
			}
		}
		NET_SET_SESSION_CLOSED_FOR_JOIN(1);
	}
	PLAYSTAT_MP_DEED_START(&Global_79349);
	return;
}

bool Function_126(int iParam0) //Position: 0x4000 / 16384
{
	return Function_15(Local_91, iParam0);
}

void Function_127() //Position: 0x400D / 16397
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_128() //Position: 0x401F / 16415
{
	int iVar0;
	
	if (!NET_IS_IN_SESSION() || NET_IS_SESSION_HOST())
	{
		NET_LOG(true, "Host VBA", "HOST VARIABLES CLEARED", 0, 0, 0, 0);
		Function_504(&Global_78578 + 96);
		Global_78578.f_108 = 4294967295;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_78578[iVar02] = 0;
			iVar0++;
		}
		Global_78578.f_92 = 0;
	}
	else
	{
		NET_LOG(true, "Host VBA", "HOST VARIABLES NOT CLEARED, %s is the host, not me", Function_129(), 0, 0, 0);
	}
	return;
}

var Function_129() //Position: 0x40DB / 16603
{
	bool bVar0;
	
	if (!NET_IS_IN_SESSION())
	{
		return "NOT IN SESSION";
	}
	bVar0 = GET_SLOT_FOR_HOST();
	if (!IS_SLOT_VALID(bVar0))
	{
		return "INVALIDSLOT";
	}
	return GET_SLOT_NAME(bVar0);
}

int Function_130() //Position: 0x411C / 16668
{
	if (Function_577(16))
	{
	}
	else
	{
		Global_83803.f_36 = 1;
	}
	Function_404(16);
	return 1;
}

void Function_131() //Position: 0x413A / 16698
{
	return;
}

void Function_132() //Position: 0x4140 / 16704
{
	if (NET_SESSION_IS_GAMEPLAY_STARTED())
	{
		if (!Function_126(4))
		{
			if (!NET_SESSION_END_GAMEPLAY())
			{
			}
		}
		else if (NET_IS_SESSION_HOST())
		{
			Function_503(4, 0);
			NET_SESSION_END_GAMEPLAY();
		}
	}
	else if (NET_IS_SESSION_HOST())
	{
		if (Function_126(4))
		{
			Function_503(4, 0);
		}
	}
	return;
}

bool Function_133(bool bParam0) //Position: 0x4182 / 16770
{
	if (NET_IS_SESSION_HOST())
	{
		if (Function_435(&Local_91 + 8))
		{
			if (Function_136(&Local_91 + 8))
			{
				Function_503(2, 1);
			}
		}
		else if (bParam0 != 0)
		{
			Function_504(&Local_91 + 8);
			if (!Function_435(&Local_91 + 32))
			{
				Function_504(&Local_91 + 32);
			}
			else if (!Function_135(&Local_91 + 32))
			{
				Function_504(&Local_91 + 32);
			}
			switch (bParam0)
			{
				case 0x00000003:
				case 0x00000004:
					if (!Function_435(&Local_91 + 20))
					{
						Function_432(&Local_91 + 20, 120.0f);
					}
					break;
				
				default:
					if (Function_435(&Local_91 + 20))
					{
						Function_504(&Local_91 + 20);
					}
					break;
			}
			Function_495(256, 0);
			Function_495(128, 0);
			Function_503(1, 0);
		}
		else if (!Function_435(&Local_91 + 32) && Function_134())
		{
			if (StackVal == 2)
			{
				Function_432(&Local_91 + 32, 5.0f);
			}
			else if (Function_582("nshortFuse"))
			{
				Function_432(&Local_91 + 32, 5.0f);
			}
			else
			{
				Function_432(&Local_91 + 32, 45.0f);
			}
			Function_504(&Local_91 + 8);
		}
		else if (Function_136(&Local_91 + 32))
		{
			Function_432(&Local_91 + 8, 2.0f);
		}
	}
	if (!UNK_0xA80C6DE6(&Local_91))
	{
	}
	return Function_126(2);
}

bool Function_134() //Position: 0x42A8 / 17064
{
	return Function_492(1);
}

bool Function_135(int iParam0) //Position: 0x42B2 / 17074
{
	return Function_15(*iParam0, 2);
}

bool Function_136(int iParam0) //Position: 0x42BF / 17087
{
	if (Function_431(iParam0))
	{
		Function_504(iParam0);
		return 1;
	}
	return 0;
}

void Function_137() //Position: 0x42D5 / 17109
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_SESSION_HOST())
	{
		if (Function_144(0) != 0 || Function_144(1) != 0)
		{
			iVar2 = 1014;
			if (!Function_517())
			{
				iVar2 = Function_142(Local_91.f_104);
			}
			if (Function_138(&iVar0, &iVar1, iVar2, 1))
			{
				Function_320(0, iVar0);
				Function_320(1, iVar1);
			}
		}
	}
	return;
}

bool Function_138(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x431F / 17183
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (Function_141(iParam2) <= 2)
	{
		return 0;
	}
	bVar2 = true;
	while (bVar2 < 15)
	{
		if (Function_15((*&Global_78617 + 2652)[bVar2], 1) && Function_15(iParam2, Function_101(bVar2)))
		{
			if (bVar1 == 0)
			{
				bVar1 = bVar2;
			}
			bVar0 = bVar2;
		}
		bVar2++;
	}
	if (bVar0 < 0)
	{
		return 0;
	}
	iVar4 = 1;
	while (iVar4 && iVar3 > 50)
	{
		if (iVar3 == 0)
		{
			*uParam0 = RAND_INT_RANGE(bVar1, bVar0);
		}
		else
		{
			*uParam0 = RAND_INT_RANGE_DIFFERENT(*uParam0, bVar1, bVar0);
		}
		if (Function_15((*&Global_78617 + 2652)[*uParam0], 1) && Function_15(iParam2, Function_101(*uParam0)))
		{
			iVar5 = ((*&Global_78617 + 2652)[*uParam0] && iParam2);
			Function_26(&iVar5, 1);
			if (Function_141(iVar5) > 1)
			{
				iVar4 = 0;
			}
			else
			{
				iVar3++;
			}
		}
		else
		{
			iVar3++;
		}
	}
	iLocal_10 = Function_63(iVar3, iLocal_10);
	if (iVar3 == 50)
	{
		if (!Function_15((*&Global_78617 + 2652)[*uParam0], 1) || !Function_15(iParam2, Function_101(*uParam0)))
		{
			bVar7 = Function_140();
			while (!Function_15((*&Global_78617 + 2652)[*uParam0], 1) || !Function_15(iParam2, Function_101(*uParam0)))
			{
				if (bVar7)
				{
					*uParam0++;
					if (*uParam0 >= bVar0)
					{
						*uParam0 = bVar1;
					}
				}
				else
				{
					*uParam0 = (*uParam0 - 1);
					if (*uParam0 <= (bVar1 - 1))
					{
						*uParam0 = bVar0;
					}
				}
			}
		}
	}
	if (bParam3)
	{
	}
	iVar5 = ((*&Global_78617 + 2652)[*uParam0] && iParam2);
	Function_26(&iVar5, 1);
	iVar6 = Function_141(iVar5);
	if (iVar6 <= 1)
	{
		Function_139(iVar5, 4);
		PRINTNL();
		return 0;
	}
	iVar8 = (RAND_INT_RANGE(false, 1000) % iVar6);
	iVar9 = 0;
	*uParam1 = 0;
	while (iVar9 < iVar8)
	{
		*uParam1++;
		if (Function_15(iVar5, Function_101(*uParam1)))
		{
			iVar9++;
		}
	}
	if (bParam3)
	{
	}
	return 1;
}

void Function_139(int iParam0, int iParam1) //Position: 0x4504 / 17668
{
	bool bVar0;
	
	bVar0 = 31;
	while (bVar0 > 0)
	{
		if (Function_15(iParam0, Function_101(bVar0)))
		{
			PRINTINT(1);
		}
		else
		{
			PRINTINT(0);
		}
		if ((bVar0 % iParam1) != 0 && bVar0 < 0)
		{
			PRINTSTRING(" ");
		}
		bVar0 = (bVar0 + 4294967295);
	}
	return;
}

var Function_140() //Position: 0x454B / 17739
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_141(int iParam0) //Position: 0x455E / 17758
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_26(&iVar1, 2147483648);
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

int Function_142(int iParam0) //Position: 0x459B / 17819
{
	struct<661> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_143(iParam0, &Var0))
	{
		return Var0.f_660;
	}
	return 0;
}

bool Function_143(var uParam0, int iParam1) //Position: 0x45BC / 17852
{
	if (GET_PLAYLIST_FROM_DB(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int Function_144(int iParam0) //Position: 0x45CF / 17871
{
	if (!Function_145())
	{
		return 0;
	}
	return StackVal;
}

bool Function_145() //Position: 0x45E8 / 17896
{
	return UNK_0xA80C6DE6(&Global_78578);
}

void Function_146(int iParam0) //Position: 0x45F5 / 17909
{
	Function_152(iParam0);
	Function_147(iParam0, 0);
	Function_25(32, 0, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
	}
	if (IS_SCRIPT_VALID(iParam0->f_84))
	{
		TERMINATE_SCRIPT(iParam0->f_84);
	}
	return;
}

void Function_147(int iParam0, bool bParam1) //Position: 0x462F / 17967
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_148(StackVal, StackVal, Function_151(), *(iParam0 + 72), !HUD_IS_FADED());
	}
	if (IS_OBJECT_VALID(iParam0->f_120))
	{
		DESTROY_OBJECT(iParam0->f_120);
	}
	if (bParam1)
	{
		iParam0->f_120 = uVar0;
	}
	if (IS_OBJECT_VALID(iParam0->f_156))
	{
		RELEASE_OBJECT_REF(iParam0->f_156);
	}
	if (IS_VOLUME_VALID(iParam0->f_424))
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_424);
		DESTROY_VOLUME(iParam0->f_424);
	}
	if (IS_OBJECT_VALID(iParam0->f_112))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
	}
	if (Function_15(iParam0->f_48, 2))
	{
		Function_26(iParam0 + 48, 2);
	}
	Function_27(iParam0 + 48, 1);
	return;
}

var Function_148(char* cParam0, vector3 vParam1, bool bParam4) //Position: 0x46C0 / 18112
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
		Function_150(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_150(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		uVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_149(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(uVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0.5f, 4294967295, 0), 1, 1);
		Function_150(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_150(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		uVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_150(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_150(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_149(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar4, vParam1, vVar8, vVar11);
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

void Function_149(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x47F9 / 18425
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

vector3 Function_150(var uParam0, float fParam1) //Position: 0x484E / 18510
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, fParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_151() //Position: 0x4868 / 18536
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_152(int iParam0) //Position: 0x4897 / 18583
{
	Function_153(iParam0);
	Function_404(1048576);
	return;
}

void Function_153(int iParam0) //Position: 0x48A9 / 18601
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_154(char* cParam0) //Position: 0x48C0 / 18624
{
	float fVar0;
	bool bVar1;
	
	if (IS_HUD_MAP_DRAW_ENABLED())
	{
		SET_HUD_MAP_DRAW_ENABLED(0);
	}
	if (Function_435(&Local_91 + 8))
	{
		if (!(HUD_IS_FADED() || HUD_IS_FADING()))
		{
			Function_401();
		}
	}
	else if (Function_435(&Local_91 + 32))
	{
		fVar0 = Function_427(&Local_91 + 32);
		bVar1 = CEIL(fVar0);
		if (Function_135(&Local_91 + 32))
		{
		}
		else if (Local_118.f_1008 != bVar1)
		{
			Local_118.f_1008 = bVar1;
			if (StackVal == 0)
			{
				Function_425("mp_lobby_lockdown_header");
			}
			if (IntToFloat(bVar1) >= 2.0f && (bVar1 % 2) != 1)
			{
				if (bVar1 == 1)
				{
					PLAY_SOUND_FRONTEND("HUD_TIMER_BELL_STRIKE_FINAL_MASTER");
				}
				else
				{
					PLAY_SOUND_FRONTEND("HUD_TIMER_BELL_STRIKE_MASTER");
				}
			}
			Function_421(Function_63(0, bVar1), 0);
		}
	}
	else if (Function_435(&Local_91 + 20))
	{
		fVar0 = Function_427(&Local_91 + 20);
		bVar1 = CEIL(fVar0);
		if (Local_118.f_1008 != bVar1)
		{
			Local_118.f_1008 = bVar1;
			Function_421(Function_63(0, bVar1), 0);
		}
	}
	else
	{
		Function_453();
	}
	if (!Function_126(1))
	{
		switch (cParam0)
		{
			case 0x00000000:
			case 0x00000002:
				if (!Function_435(&Local_91 + 32) && !Function_435(&Local_91 + 8))
				{
					if (!Function_134())
					{
						Function_425("mp_lobby_waiting_for_ready");
					}
					else
					{
						Function_425("mp_lobby_waiting_for_more");
					}
				}
				break;
			
			case 0x00000001:
				Function_425("mp_lobby_waiting_for_more");
				break;
			
			case 0x00000003:
			case 0x00000004:
				Function_425("mp_lobby_ignoring_posses");
				break;
			}
	}
	return;
}

int Function_155() //Position: 0x4AC3 / 19139
{
	int iVar0;
	int iVar1;
	
	if (!Function_159())
	{
		return 1;
	}
	if (Function_502(512))
	{
		iVar0 = 0;
		if (Function_435(&Local_91 + 20))
		{
			iVar0 = Function_431(&Local_91 + 20);
		}
		iVar1 = Function_62(0, iVar0, 0, 0, 0);
		switch (iVar1)
		{
			case 0x00000003:
				return 3;
				break;
			
			case 0x00000000:
				if (NET_GET_SESSION_GAMER_COUNT() == 1)
				{
					return 1;
				}
			
			case 0x00000001:
			case 0x00000002:
				return 4;
				break;
			
			default:
				break;
			}
	}
	if (!Function_134())
	{
		if (!Function_156())
		{
			return 2;
		}
	}
	return 0;
}

bool Function_156() //Position: 0x4B42 / 19266
{
	return Function_157(2048);
}

int Function_157(int iParam0) //Position: 0x4B4E / 19278
{
	return Function_158(iParam0, 1) != GET_NUM_PLAYERS();
}

int Function_158(int iParam0, bool bParam1) //Position: 0x4B5E / 19294
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_47(bVar1))
		{
			if (Function_45(bVar1, iParam0, bParam1))
			{
				bVar0++;
			}
		}
		bVar1++;
	}
	return bVar0;
}

bool Function_159() //Position: 0x4B96 / 19350
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_160(bVar0))
		{
			if (Function_45(bVar0, 2048, 1))
			{
				iVar1++;
				if (iVar1 > iLocal_86)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_160(bool bParam0) //Position: 0x4BD3 / 19411
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_47(bParam0);
}

void Function_161() //Position: 0x4BE9 / 19433
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_168(4))
	{
		Function_167(4);
		iVar0 = 0;
		while (iVar0 <= 35)
		{
			iVar2 = Function_165(iVar0);
			if (iVar2 >= 0)
			{
				if (IS_JOURNAL_ENTRY_UPDATED(iVar2))
				{
					Function_162("mp_challenge_help", 0x41200000, 1, 0, 2, 1, 0);
					return;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 <= 259)
		{
			iVar2 = Function_17(iVar1);
			if (iVar2 >= 0)
			{
				if (IS_JOURNAL_ENTRY_UPDATED(iVar2))
				{
					Function_162("mp_challenge_help", 0x41200000, 1, 0, 2, 1, 0);
					return;
				}
			}
			iVar1++;
		}
	}
	return;
}

void Function_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4C95 / 19605
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_163(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_163(int iParam0) //Position: 0x4D10 / 19728
{
	char* cVar0[16];
	
	if (!Function_164())
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

bool Function_164() //Position: 0x4D4F / 19791
{
	if (Function_15(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_165(int iParam0) //Position: 0x4D6A / 19818
{
	if (Function_166() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_24;
	}
	return Global_49310[iParam022].f_24;
}

bool Function_166() //Position: 0x4D92 / 19858
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_167(int iParam0) //Position: 0x4D9B / 19867
{
	Function_36(&Global_83864 + 1256, iParam0);
	return;
}

bool Function_168(int iParam0) //Position: 0x4DAD / 19885
{
	return Function_33(Global_83864.f_1256, iParam0);
}

int Function_169(int iParam0) //Position: 0x4DBF / 19903
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
	bool bVar13;
	bool bVar14;
	int iVar15;
	
	bVar0 = Function_573();
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
		iParam0->f_64 = 0.0f;
	}
	else
	{
		iParam0->f_64 = Function_265((iParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_514())
	{
		if (bVar1)
		{
			switch (Function_82())
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
		SET_ACTOR_FACTION(bVar0, iParam0->f_52);
	}
	if (Function_264(iParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_15(iParam0->f_44, 2) || Function_15(iParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
				{
					if (Function_263() && IS_PS3())
					{
						iParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 5, 0, 0, 0, 0, 4294967295, 0);
					}
					else
					{
						iParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 6, 0, 0, 0, 0, 4294967295, 0);
					}
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
					*iParam0 = 8;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
	}
	if (((Function_264(iParam0) && Function_262(4096)) && Function_260()) && !Function_577(32768))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_15(iParam0->f_44, 2) || Function_15(iParam0->f_44, 128)) && !IS_SCRIPT_VALID(Global_78617.f_28))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
				{
					iParam0->f_104 = ADD_SCRIPT_USE_CONTEXT("mp_TELEPORT", 30, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
					Function_491(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_259(4096);
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
	}
	fVar8 = Function_258();
	if (bVar1)
	{
		bVar9 = Function_257(bVar0);
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (bVar1)
			{
				bVar5 = GET_LAST_ATTACKER(bVar0);
				if (IS_ACTOR_VALID(bVar5))
				{
					iParam0->f_112 = bVar5;
				}
			}
			iParam0->f_4 = Global_29006;
			if ((Function_492(8192) || Function_15(iParam0->f_48, 512)) && !Function_488(1, 1))
			{
				iVar6 = Function_256(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_15(iParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_27(iParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_162("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_255(2, NET_GET_NET_TIME());
								Function_253(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", 1);
								Function_560(65536, 1);
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
						fVar7 = (NET_GET_NET_TIME() - Function_252(2));
						if (!Function_488(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_26(iParam0 + 48, 512);
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
					Function_560(65536, 0);
					Function_26(iParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_560(8388608, 1);
					iParam0->f_428 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_488(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - iParam0->f_428) <= 2.0f)
					{
						Function_560(8388608, 0);
					}
				}
			}
			if (Function_251(iParam0 + 116, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_15(iParam0->f_44, 16))
					{
						Function_27(iParam0 + 48, 32);
						*iParam0 = 1;
					}
					else
					{
						Function_493(iParam0 + 116, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_26(iParam0 + 48, 32);
					*iParam0 = 1;
				}
			}
			else if (!bVar1)
			{
			}
			if (IS_OBJECT_VALID(iParam0->f_188))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_188))
				{
					Function_250(iParam0->f_188, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_25(32, 1, 1);
			iParam0->f_48 = 0;
			iParam0->f_420 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(iParam0->f_168);
			Function_560(65536, 0);
			Function_560(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_15(iParam0->f_44, 8))
			{
				Function_248(0);
			}
			else if (bVar1)
			{
				iParam0->f_152 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
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
			iParam0->f_56 = 4294967295;
			iParam0->f_68 = 0.0f;
			if (Function_247(iParam0 + 116, &Global_78617 + 2648))
			{
				switch (StackVal)
				{
					case 0x00000001:
					case 0x00000002:
						if (IS_SLOT_VALID(StackVal))
						{
							iParam0->f_112 = GET_SLOT_ACTOR(StackVal);
						}
						break;
					
					case 0x00000003:
						iParam0->f_112 = "";
						break;
					
					default:
						break;
					}
			}
			Function_243(iParam0);
			*iParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_228(iParam0, iParam0->f_12 != 0);
			}
			Function_226(iParam0, 0);
			iParam0->f_64 = 0.0f;
			*iParam0 = 3;
			break;
		
		case 0x00000003:
			Function_226(iParam0, 1);
			if ((iParam0->f_12 >= 0 && iParam0->f_64 <= 4.0f) || (iParam0->f_12 < 0 && iParam0->f_64 <= 2.0f))
			{
				if (iParam0->f_12 < 0)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			iParam0->f_64 = 0.0f;
			*iParam0 = 5;
		
		case 0x00000005:
			Function_226(iParam0, 1);
			if (iParam0->f_64 <= 2.0f)
			{
				if (Function_15(iParam0->f_44, 512))
				{
					*iParam0 = 8;
				}
				else if (iParam0->f_12 < 1)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 6;
				}
			}
			break;
		
		case 0x00000006:
			Function_226(iParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_225();
				Function_25(32, 0, 1);
				Function_80(1);
			}
			iParam0->f_64 = 0.0f;
			*iParam0 = 7;
			break;
		
		case 0x00000007:
			Function_226(iParam0, 1);
			if (iParam0->f_64 <= 4.0f)
			{
				iParam0->f_64 = 0.0f;
				*iParam0 = 8;
				Function_81();
			}
			break;
		
		case 0x00000008:
			if (Function_15(iParam0->f_44, 2))
			{
				if (Function_15(iParam0->f_44, 512))
				{
					if (!Function_15(iParam0->f_48, 4096))
					{
						Function_147(iParam0, 1);
						Function_27(iParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(iParam0->f_84))
					{
						if (!Function_488(16384, 1))
						{
							Function_147(iParam0, 0);
							Function_560(16384, 1);
							iParam0->f_84 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/Spectator/mp_spectatorMk2", 0);
						}
					}
				}
				else
				{
					if (IS_SCRIPT_VALID(iParam0->f_84))
					{
						TERMINATE_SCRIPT(iParam0->f_84);
					}
					Function_226(iParam0, 1);
				}
			}
			else
			{
				Function_226(iParam0, 1);
				iParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
				}
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_226(iParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_224(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
				if (iParam0->f_64 > 0.0f)
				{
					iParam0->f_64 = 0.0f;
				}
			}
			if (iParam0->f_64 <= 2.0f)
			{
				UI_SEND_EVENT("InTransitionComplete");
				iParam0->f_64 = 0.0f;
			}
			if (HUD_IS_FADED())
			{
				Function_80(1);
				if (IS_SCRIPT_VALID(iParam0->f_84))
				{
					TERMINATE_SCRIPT(iParam0->f_84);
				}
				Function_223();
				Function_81();
				Function_25(32, 0, 1);
				iParam0->f_424 = CREATE_VOLUME_IN_LAYOUT(Function_151(), Function_222(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_424);
				*iParam0 = 10;
				iParam0->f_64 = 0.0f;
			}
			break;
		
		case 0x0000000A:
			if (iParam0->f_108 == Global_76887 || iParam0->f_64 <= 5.0f)
			{
				if (iParam0->f_64 <= 5.0f)
				{
					iParam0->f_64 = 0.0f;
				}
				if (iParam0->f_108 >= 4294967295)
				{
					STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
				}
				iParam0->f_108 = Global_76887;
				STREAMING_REQUEST_ACTOR(iParam0->f_108, 1, false);
			}
			else if (STREAMING_IS_ACTOR_LOADED(iParam0->f_108, 4294967295))
			{
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			bVar3 = false;
			Call_Loc(iParam0->f_176);
			iVar4 = StackVal;
			if (iVar4 == 0)
			{
				if (!Function_15(iParam0->f_48, 8))
				{
					Call_Loc(iParam0->f_164);
					Function_27(iParam0 + 48, 8);
				}
				if (Function_218(StackVal, Function_15(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_195(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_15(iParam0->f_48, 32), 1))
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
				if (Function_15(iParam0->f_44, 1))
				{
					Function_26(iParam0 + 44, 1);
				}
				else
				{
					Function_152(iParam0);
					Function_147(iParam0, 0);
				}
				bVar0 = Function_573();
				Function_570(bVar0);
				if (Function_15(iParam0->f_44, 32))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				SET_CAMERA_FOLLOW_ACTOR(bVar0);
				CAMERA_RESET(0);
				if (IS_OBJECT_VALID(iParam0->f_188))
				{
					DESTROY_OBJECT(iParam0->f_188);
				}
				Global_62993 = 0;
				if (IS_VOLUME_VALID(iParam0->f_424))
				{
					REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_424);
					DESTROY_VOLUME(iParam0->f_424);
				}
				iParam0->f_64 = 0.0f;
				*iParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_192(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				*iParam0 = 11;
			}
			else if (!HAS_INVENTORY_COMPONENT(bVar0))
			{
			}
			else if (!STREAMING_IS_WORLD_LOADED() && iParam0->f_64 > 60.0f)
			{
				if (iParam0->f_64 <= 30.0f)
				{
				}
			}
			else if (Function_303(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_15(iParam0->f_44, 8))
				{
					Function_191(iParam0 + 192, 0, 1, 1);
					Function_186(iParam0 + 192);
					Function_182(&bVar0, 0, 0, 0);
					Function_182(&bVar0, 0, 0, 0);
					Function_181(bVar0);
				}
				else
				{
					Function_191(iParam0 + 192, 1, 1, 1);
				}
				iParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(iParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(iParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(iParam0->f_188, 1);
				iParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_180(bVar0);
					vVar10 = { StackVal, StackVal, Function_180(bVar0) };
					bVar13 = Function_179(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_329(bVar13))
					{
						if (StackVal || Function_260() == 7)
						{
							iParam0->f_4 = bVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_331(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_178(&(Global_29008[StackVal]), 4194304);
				}
				Function_259(32);
				*iParam0 = 13;
			}
			if (!Function_15(iParam0->f_48, 128))
			{
				Call_Loc(iParam0->f_184);
				if (StackVal)
				{
					Function_27(iParam0 + 48, 128);
					Function_26(iParam0 + 48, 8);
					*iParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (iParam0->f_64 < 60.0f)
			{
				Function_259(32);
				Function_331(1, 0, 0);
				*iParam0 = 14;
			}
			if (Function_329(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_177(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_177(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_177(&(Global_29008[StackVal]), 4194304))
						{
						}
					}
					else
					{
						*iParam0 = 14;
					}
				}
				else
				{
					bVar14 = Global_29155[StackVal10];
					if (Function_329(bVar14))
					{
						if (StackVal && (!Function_328(bVar14) && !Function_177(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_176(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_175();
			if (!Function_15(iParam0->f_44, 32))
			{
				if (Function_174())
				{
					iVar15 = 4294967295;
					if (iParam0->f_152 >= 4294967295)
					{
						iVar15 = GET_WEAPON_EQUIPPED(bVar0, iParam0->f_152);
						if (iVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
						}
					}
					if (iVar15 == 4294967295)
					{
						iVar15 = Function_173(bVar0, 40);
						if (iVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
						}
						else
						{
							iVar15 = Function_173(bVar0, 39);
							if (iVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
							}
							else
							{
								iVar15 = Function_173(bVar0, 42);
								if (iVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
								}
								else
								{
									iVar15 = Function_173(bVar0, 41);
									if (iVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
									}
									else
									{
										iVar15 = Function_173(bVar0, 43);
										if (iVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
										}
										else
										{
											iVar15 = Function_173(bVar0, 48);
											if (iVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
											}
											else
											{
												iVar15 = Function_173(bVar0, 46);
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
				if (!Function_15(iParam0->f_44, 64))
				{
					Function_266(0.5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_560(16384, 0);
			Function_268(bVar0, !Function_15(iParam0->f_44, 96));
			Stack.Push(bVar0);
			Call_Loc(iParam0->f_160);
			iParam0->f_112 = "";
			*iParam0 = 0;
			break;
		
		case 0x0000000F:
			if (IS_SCRIPT_VALID(iParam0->f_84))
			{
				TERMINATE_SCRIPT(iParam0->f_84);
			}
			Function_226(iParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_80(1);
			}
			else if (!Function_172())
			{
				Call_Loc(iParam0->f_172);
				iParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(iParam0->f_16))
				{
					Function_171(iParam0);
					*iParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*iParam0 = 20;
				}
				Function_170(iParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_226(iParam0, 1);
			if (iParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_226(iParam0, 1);
			Call_Loc(iParam0->f_180);
			if (StackVal)
			{
				if (Function_15(iParam0->f_44, 4))
				{
					*iParam0 = 17;
				}
				else
				{
					*iParam0 = 18;
				}
			}
			break;
		
		case 0x00000011:
			Function_226(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_224(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000012:
			Function_226(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_224(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000013:
			Function_226(iParam0, 1);
			if (Function_172())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_224(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_170(int iParam0) //Position: 0x5E7A / 24186
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0f, 0f, 0, 0);
	}
	return;
}

void Function_171(int iParam0) //Position: 0x5E96 / 24214
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_223();
		iVar0 = "";
		if (Function_15(iParam0->f_44, 256))
		{
			if (Function_15(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_435(&Global_78578 + 96))
			{
				if (FABS(Function_427(&Global_78578 + 96)) > 1.0f)
				{
				}
				else
				{
					AUDIO_MUSIC_SUSPEND(1000);
				}
			}
		}
		PRINT_BIG_FORMAT(4.0f, iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3], 2, iVar0);
		NET_LOG(true, "Player State", iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3]);
	}
	return;
}

bool Function_172() //Position: 0x5F87 / 24455
{
	return (HUD_IS_FADED() || Function_575(0));
}

int Function_173(bool bParam0, int iParam1) //Position: 0x5F95 / 24469
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_174() //Position: 0x5FA6 / 24486
{
	return !Function_260();
}

void Function_175() //Position: 0x5FB0 / 24496
{
	int iVar0;
	bool bVar1;
	
	bVar1 = Function_573();
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

void Function_176(bool bParam0) //Position: 0x5FEF / 24559
{
	if (!Function_329(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", 1);
	}
	else if (StackVal == 1)
	{
		Function_178(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_177(var uParam0, int iParam1) //Position: 0x604A / 24650
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_178(var uParam0, bool bParam1) //Position: 0x6066 / 24678
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

var Function_179(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x6075 / 24693
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

vector3 Function_180(bool bParam0) //Position: 0x6110 / 24848
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_181(bool bParam0) //Position: 0x6121 / 24865
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 1;
	while (iVar0 < 6)
	{
		bVar1 = GET_WEAPON_EQUIPPED(bParam0, iVar0);
		if (bVar1 != 4294967295)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, bVar1, GET_WEAPON_MAX_AMMO(bVar1));
		}
		iVar0++;
	}
	return;
}

var Function_182(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x6154 / 24916
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar5[17];
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
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
					if (Function_185(iVar3, 1))
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
				_ADD_AMMO_OF_TYPE(*bParam0, iVar3, TO_FLOAT(Function_184(&Global_83591 + 276, iVar3)), 1, 0);
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
					if (Function_110(iVar2))
					{
						if (Function_183(iVar2))
						{
							iVar3 = GET_AMMO_ENUM(iVar2);
							if (Function_185(iVar3, 1))
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
						if (Function_185(iVar3, 1))
						{
							bVar24 = (Function_184(&Global_83591 + 276, iVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, iVar3, 1)));
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
				if (DECOR_GET_INT_VERBOSE(Function_151(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_151(), &cVar28, &iVar26))
						{
							Function_99(iVar26, &Var36);
							iVar3 = GET_AMMO_ENUM(Var36);
							if (Function_185(iVar3, 1))
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

bool Function_183(int iParam0) //Position: 0x6437 / 25655
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

int Function_184(int iParam0, int iParam1) //Position: 0x6459 / 25689
{
	if (Function_185(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_185(int iParam0, int iParam1) //Position: 0x6473 / 25715
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_186(int iParam0) //Position: 0x6486 / 25734
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_188(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_573()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_574(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_187(StackVal, Var0, 1, 1, 0);
			}
		}
	}
	if (DECOR_GET_INT_VERBOSE(Function_151(), "DLCFM_Weapon", &iVar2))
	{
		iVar4 = 0;
		while (iVar4 <= iVar2)
		{
			strcpy(&cVar5, "DLCFM_Weapon_", 32);
			straddi(&cVar5, iVar4, 32);
			if (DECOR_GET_INT_VERBOSE(Function_151(), &cVar5, &uVar3))
			{
				Function_99(uVar3, &Var13);
				Function_187(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_187(struct<5> Param0) //Position: 0x652D / 25901
{
	bool bVar0;
	int iVar1;
	float fVar2;
	
	if (!Function_110(Param0))
	{
		return;
	}
	bVar0 = Function_573();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			iVar1 = GET_AMMO_ENUM(Param0);
			if (Function_185(iVar1, 1))
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

void Function_188(int iParam0, int iParam1) //Position: 0x65AD / 26029
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = Function_573();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_189(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_189(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_189(23, iParam1))
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
			iVar4 = Function_173(bVar2, 40);
			if (iVar4 == 4294967295)
			{
				iVar4 = Function_173(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, iVar4);
		}
	}
	return;
}

bool Function_189(int iParam0, int iParam1) //Position: 0x672A / 26410
{
	return Function_190(iParam0, iParam1) < 4294967295;
}

int Function_190(int iParam0, int iParam1) //Position: 0x6739 / 26425
{
	int iVar0;
	
	if (!Function_110(iParam0))
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

void Function_191(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x676C / 26476
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_573();
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
		Function_187(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_192(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x67B7 / 26551
{
	int iVar0;
	
	if (bParam1)
	{
		Function_38(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_38(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_38(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_38(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_38(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_38(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_38(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_38(&iVar0, 1048576);
	}
	return Function_193(bParam0, iVar0);
}

bool Function_193(bool bParam0, int iParam1) //Position: 0x6826 / 26662
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_194(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_194(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_194(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_194(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_194(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_194(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_194(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_194(iParam1, 64))
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

bool Function_194(var uParam0, bool bParam1) //Position: 0x68FF / 26879
{
	return (uParam0 && bParam1) == 0;
}

bool Function_195(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x690C / 26892
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_573();
	Function_7();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_78();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_193(bVar0, 3145855);
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
		bVar9 = Function_262(256);
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
		Function_215(bVar0, 0);
		Function_197();
		Function_196(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			bVar14 = Function_179(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_329(bVar14))
			{
				Var10.f_4 = bVar14;
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

void Function_196(char* cParam0, vector3 vParam1) //Position: 0x6A83 / 27267
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_197() //Position: 0x6AC1 / 27329
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_214(iVar1))
		{
			uVar2 = Function_213(iVar1);
			Function_198(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_198(int iParam0, bool bParam1) //Position: 0x6AF3 / 27379
{
	if (!Function_214(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_212(222, Global_26401[iParam0], 0);
		if (Function_211(222) <= 0)
		{
			Function_199(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_199((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_212((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_212(222, bParam1, 0);
	}
	return;
}

int Function_199(int iParam0, bool bParam1, bool bParam2) //Position: 0x6B7C / 27516
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
		Function_210(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_209(iParam0);
	if (bParam2)
	{
		Function_200(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_200(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x6E17 / 28183
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_208(390))), 32);
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
					fVar19 = (Function_207(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_207(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_205(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_204(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_202(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_201(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_222(), &Var9);
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

var Function_201(int iParam0) //Position: 0x7444 / 29764
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_202(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x7455 / 29781
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_203("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_203("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_203("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_203(char* cParam0, char* cParam1) //Position: 0x754A / 30026
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_204(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x7563 / 30051
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_118(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_63(Function_118(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

void Function_205(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x75C8 / 30152
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
	if (((Function_206(iParam0) != 19 || Function_206(iParam0) != 17) || Function_206(iParam0) != 10) || Function_206(iParam0) != 9)
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

int Function_206(int iParam0) //Position: 0x76F8 / 30456
{
	return Global_35278[iParam020].f_48;
}

float Function_207(int iParam0) //Position: 0x7707 / 30471
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_208(int iParam0) //Position: 0x7740 / 30528
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_209(int iParam0) //Position: 0x777D / 30589
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

int Function_210(int iParam0, float fParam1, bool bParam2) //Position: 0x7917 / 30999
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

int Function_211(int iParam0) //Position: 0x7B5B / 31579
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_212(int iParam0, bool bParam1, int iParam2) //Position: 0x7B9C / 31644
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
	Function_209(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_200(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_213(int iParam0) //Position: 0x7D97 / 32151
{
	if (!Function_214(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_214(int iParam0) //Position: 0x7DAF / 32175
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_215(bool bParam0, bool bParam1) //Position: 0x7DC4 / 32196
{
	var uVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_217(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_492(8192) && !Function_488(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_260())
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
	if (Function_216())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_216() //Position: 0x7ECC / 32460
{
	return Function_15(Global_79962, 2048);
}

var Function_217(int iParam0) //Position: 0x7EDC / 32476
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

bool Function_218(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7F11 / 32529
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
	Function_221(bParam0);
	Var6 = { StackVal, StackVal, Function_221(bParam0) };
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
			Function_116(bVar32);
			vVar12.f_4 = Function_219(StackVal, StackVal, StackVal, StackVal, vVar3, Function_116(bVar32));
		}
	}
	return Function_195(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

float Function_219(vector3 vParam0, vector3 vParam3) //Position: 0x7FC8 / 32712
{
	var uVar0;
	
	Function_220(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_220(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x7FE2 / 32738
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_221(bool bParam0) //Position: 0x8006 / 32774
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_222() //Position: 0x8017 / 32791
{
	var uVar0;
	
	return uVar0;
}

void Function_223() //Position: 0x801F / 32799
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_224(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x8034 / 32820
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

void Function_225() //Position: 0x805D / 32861
{
	if (!Function_29(8))
	{
		Function_452();
	}
	Function_25(8, 1, 1);
	return;
}

void Function_226(int iParam0, int iParam1) //Position: 0x8076 / 32886
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (!IS_OBJECT_VALID(iParam0->f_120))
	{
		return;
	}
	if (Function_15(iParam0->f_48, 256) || Function_15(iParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_15(iParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_120);
	if (!Function_193(iParam0->f_112, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(iParam0->f_120, true);
			Function_26(iParam0 + 48, 1024);
			if (iVar0 <= 5)
			{
			}
			else
			{
				DETACH_CAMERASHOT(iParam0->f_128);
				DETACH_CAMERASHOT(iParam0->f_132);
			}
			return;
		}
	}
	if (iVar0 > 4 && iParam1)
	{
		Function_227(iParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_15(iParam0->f_48, 8192))
		{
			Function_27(iParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			if (IS_ACTOR_PLAYER(iParam0->f_112))
			{
				Global_78617.f_48 = GET_ACTOR_SLOT(iParam0->f_112);
				Function_491(1048576);
			}
			if (IS_OBJECT_VALID(iParam0->f_124) && IS_OBJECT_VALID(iParam0->f_128))
			{
				GET_POSITION(iParam0->f_112, &vVar16);
				vVar1 = { StackVal, StackVal, vVar16 };
				GET_CAMERASHOT_POSITION(iParam0->f_124, &vVar10);
				vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar10, vVar1, StackVal) };
				vVar13.f_4 = 0.0f;
				VNORMALIZE(&vVar13);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_128, iParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_132, iParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_128, iParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_132, iParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_128, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_132, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_128, iParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_132, iParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_128, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_132, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_128, iParam0->f_112, 243);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_132, iParam0->f_112, 243);
			}
			SET_CAMERA_FOLLOW_ACTOR_EX(iParam0->f_112, 1);
		}
	}
	return;
}

void Function_227(int iParam0) //Position: 0x8271 / 33393
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

void Function_228(int iParam0, int iParam1) //Position: 0x82B2 / 33458
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	char* cVar7;
	vector3 vVar8;
	vector3 vVar11;
	
	bVar0 = Function_573();
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_180(bVar0);
		vVar1 = { StackVal, StackVal, Function_180(bVar0) };
		Function_115(bVar0);
		vVar4 = { StackVal, StackVal, Function_115(bVar0) };
	}
	else
	{
		vVar1 = { StackVal, StackVal, Global_34574 };
		GET_CAMERA_CHANNEL_DIRECTION(&vVar4, 0);
		vVar4 = { 0.0f, UNK_0x9C40E671(&vVar4), 0.0f };
	}
	cVar7 = Function_151();
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
		iParam0->f_120 = Function_239(bVar7, 0, iParam0->f_156, 1, 0, 0);
		Function_27(iParam0 + 48, 256);
	}
	else
	{
		Function_180(iParam0->f_112);
		vVar8 = { StackVal, StackVal, Function_180(iParam0->f_112) };
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar8, StackVal) };
		VNORMALIZE(&vVar11);
		iParam0->f_120 = Function_231(bVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_230(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_27(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar8, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar11, 1);
	}
	Function_229(iParam0->f_120);
	return;
}

void Function_229(int iParam0) //Position: 0x8447 / 33863
{
	Function_78();
	Global_63118 = iParam0;
	return;
}

void Function_230(bool bParam0, bool bParam1) //Position: 0x8455 / 33877
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_231(char* cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x846A / 33898
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_222(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_232(&bVar0, uParam2, uParam3, uParam4);
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

void Function_232(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x84EC / 34028
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_238(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_237(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_236(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_235(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_234(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_233(&uVar0, uParam1, uParam2, uParam3);
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

void Function_233(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8607 / 34311
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

void Function_234(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x871C / 34588
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

void Function_235(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8835 / 34869
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

void Function_236(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x893F / 35135
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

void Function_237(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8A45 / 35397
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

void Function_238(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8AF5 / 35573
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

var Function_239(char* cParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8BAC / 35756
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_222(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "nMPSuicide", 2, 1);
	}
	Function_240(&bVar0, uParam2);
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

void Function_240(var uParam0, int iParam1) //Position: 0x8C23 / 35875
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_242(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_241(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_241(var uParam0, bool bParam1) //Position: 0x8C8F / 35983
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
	Function_115(bParam1);
	vVar3 = { StackVal, StackVal, Function_115(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_116(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_116(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_115(bParam1);
	vVar6 = { StackVal, StackVal, Function_115(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_116(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_116(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_242(var uParam0, bool bParam1) //Position: 0x8D51 / 36177
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
	Function_115(bParam1);
	vVar3 = { StackVal, StackVal, Function_115(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_116(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_116(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_115(bParam1);
	vVar6 = { StackVal, StackVal, Function_115(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_116(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_116(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_243(int iParam0) //Position: 0x8E13 / 36371
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	struct<16> Var4;
	vector3 vVar20;
	bool bVar23;
	
	if (!Function_15(iParam0->f_48, 2048))
	{
		Function_27(iParam0 + 48, 2048);
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
				if (Function_110(iVar2) && RAND_INT_RANGE(false, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_245(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_244("MPSplashItem.s1"));
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
				if (Function_110(iVar2))
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

var Function_244(int iParam0) //Position: 0x9139 / 37177
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

struct<64> Function_245(bool bParam0) //Position: 0x934D / 37709
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_263())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_246();
	}
	if (!Function_47(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_47(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_246() //Position: 0x93F3 / 37875
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_247(var uParam0, int iParam1) //Position: 0x9404 / 37892
{
	if (Function_251(uParam0, iParam1))
	{
		Function_493(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_248(int iParam0) //Position: 0x941E / 37918
{
	Function_249(&Global_79378, 0, iParam0);
	return;
}

void Function_249(int iParam0, bool bParam1, int iParam2) //Position: 0x942E / 37934
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
	
	bVar0 = Function_573();
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

void Function_250(var uParam0, bool bParam1) //Position: 0x961F / 38431
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_151(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(iVar0, uParam0);
	bVar1 = START_OBJECT_ITERATOR(iVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &iVar2))
		{
			if (Function_110(iVar2))
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

bool Function_251(var uParam0, int iParam1) //Position: 0x969B / 38555
{
	return *uParam0 == *iParam1;
}

float Function_252(int iParam0) //Position: 0x96A8 / 38568
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_253(var uParam0, int iParam1) //Position: 0x96B8 / 38584
{
	Function_254(uParam0, (Function_71(uParam0) + iParam1));
	return;
}

void Function_254(int iParam0, int iParam1) //Position: 0x96CB / 38603
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_255(int iParam0, int iParam1) //Position: 0x96F4 / 38644
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

var Function_256(int iParam0, bool bParam1, int iParam2) //Position: 0x971D / 38685
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_47(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_45(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_257(int iParam0) //Position: 0x9764 / 38756
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

var Function_258() //Position: 0x977A / 38778
{
	if (Function_15(Global_79349.f_44, 4194304))
	{
		return 180.0f;
	}
	if (Function_15(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

void Function_259(int iParam0) //Position: 0x97B0 / 38832
{
	Function_36(&Global_78617 + 52, iParam0);
	return;
}

bool Function_260() //Position: 0x97C1 / 38849
{
	if (Function_166())
	{
		return (Function_261() != 1 || Function_261() != 0);
	}
	return 0;
}

int Function_261() //Position: 0x97DA / 38874
{
	return Global_79349.f_16;
}

bool Function_262(int iParam0) //Position: 0x97E6 / 38886
{
	return Function_33(Global_78617.f_52, iParam0);
}

bool Function_263() //Position: 0x97F7 / 38903
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_264(int iParam0) //Position: 0x9805 / 38917
{
	return (*iParam0 <= 1 && *iParam0 >= 14);
}

var Function_265(int iParam0, int iParam1) //Position: 0x9817 / 38935
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_266(float fParam0) //Position: 0x982A / 38954
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(fParam0, 1065353216);
		}
	}
	return;
}

void Function_267(int iParam0) //Position: 0x9847 / 38983
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_58())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_268(bool bParam0, bool bParam1) //Position: 0x987C / 39036
{
	struct<5> Var0;
	
	Function_560(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_262(256))
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 3);
	}
	else
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 2);
	}
	AI_STOP_IGNORING_ACTOR(bParam0);
	if (NET_IS_IN_SESSION() && bParam1)
	{
		Var0 = GET_LOCAL_SLOT();
		Var0.f_4 = NET_GET_NET_TIME();
		NET_SCRIPTMSG_SEND(1, 9, &Var0, 2, 1);
	}
	return;
}

void Function_269(var uParam0, int iParam1) //Position: 0x98D2 / 39122
{
	uParam0->f_12 = 2;
	iParam1 = iParam1;
	return;
}

void Function_270(var uParam0, int iParam1) //Position: 0x98E1 / 39137
{
	uParam0->f_176 = iParam1;
	return;
}

int Function_271() //Position: 0x98ED / 39149
{
	vector3 vVar0;
	
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER(*(&Global_79349 + 28));
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 50.0f);
	AMBIENT_SET_ELEVATION_FILTER(-15.0f, 15.0f);
	Function_274(0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(512, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 0.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(3, 5.0f, 0);
	AMBIENT_SET_SLOPE_FILTER(0, 2, 0.0f);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	if (Function_272(&vVar0, 0))
	{
		if (Function_195(StackVal, StackVal, StackVal, StackVal, Function_219(StackVal, StackVal, vVar0, 0.0f, vVar0, *(&Global_79349 + 28)), 0.0f, 0, 1))
		{
			return 1;
		}
	}
	if (Function_195(StackVal, StackVal, *(&Local_118 + 1024), 0.0f, Local_118.f_1036, 0.0f, 0, 1))
	{
		return 1;
	}
	return 2;
}

bool Function_272(var uParam0, int iParam1) //Position: 0x998D / 39309
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
			if (!Function_273(StackVal, StackVal, vVar6[iVar03]))
			{
				bVar1 = false;
				while (bVar1 <= 16)
				{
					if (Function_160(bVar1) && bVar1 == GET_LOCAL_SLOT())
					{
						if (!Function_45(bVar1, 2, 1))
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
			if (!Function_273(StackVal, StackVal, vVar6[iVar03]))
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

bool Function_273(vector3 vParam0) //Position: 0x9AE9 / 39657
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_274(int iParam0) //Position: 0x9B01 / 39681
{
	switch (iParam0)
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

void Function_275(var uParam0, int iParam1) //Position: 0x9BB4 / 39860
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_276(bool bParam0) //Position: 0x9BC0 / 39872
{
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	ACTOR_START_FORCE_HOLSTER(bParam0, 1, 0);
	DISABLE_PLAYER_GRINGO_USE(0, 1);
	if (!(Function_488(256, 1) || Function_488(512, 1)))
	{
		Function_277(bParam0);
	}
	return;
}

void Function_277(bool bParam0) //Position: 0x9BFA / 39930
{
	Function_560(4194304, 1);
	DECOR_SET_INT(bParam0, "NoMelee", true);
	return;
}

void Function_278(int iParam0) //Position: 0x9C19 / 39961
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_280(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_279(iParam0, 0.0f);
	return;
}

void Function_279(var uParam0, int iParam1) //Position: 0x9C46 / 40006
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_280(int iParam0) //Position: 0x9C52 / 40018
{
	Function_281(iParam0, 4294967295, 0, 1);
	return;
}

void Function_281(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9C60 / 40032
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

void Function_282(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9C8A / 40074
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
	Function_302(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_191(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_301(iParam0, 2);
	Function_299(iParam0);
	Function_297(iParam0);
	Function_295(iParam0);
	Function_293(iParam0);
	Function_290(iParam0);
	Function_287(iParam0);
	Function_284(iParam0);
	if (bParam2)
	{
		Function_27(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_27(iParam0 + 44, 8);
		Function_186(iParam0 + 192);
	}
	Function_283(iParam0, bParam4);
	Function_560(8388608, 0);
}

void Function_283(int iParam0, bool bParam1) //Position: 0x9D52 / 40274
{
	if (bParam1)
	{
		Function_27(iParam0 + 44, 32);
	}
	else
	{
		Function_26(iParam0 + 44, 32);
	}
	return;
}

void Function_284(int iParam0) //Position: 0x9D72 / 40306
{
	Function_285(iParam0, 40333);
	return;
}

void Function_285(var uParam0, var uParam1) //Position: 0x9D81 / 40321
{
	uParam0->f_184 = uParam1;
	return;
}

int Function_286() //Position: 0x9D8D / 40333
{
	return 0;
}

void Function_287(int iParam0) //Position: 0x9D94 / 40340
{
	Function_288(iParam0, 40367);
	return;
}

void Function_288(var uParam0, var uParam1) //Position: 0x9DA3 / 40355
{
	uParam0->f_180 = uParam1;
	return;
}

int Function_289() //Position: 0x9DAF / 40367
{
	return 1;
}

void Function_290(int iParam0) //Position: 0x9DB6 / 40374
{
	Function_291(iParam0, 40401);
	return;
}

void Function_291(var uParam0, var uParam1) //Position: 0x9DC5 / 40389
{
	uParam0->f_164 = uParam1;
	return;
}

void Function_292() //Position: 0x9DD1 / 40401
{
	return;
}

void Function_293(int iParam0) //Position: 0x9DD7 / 40407
{
	Function_294(iParam0, 40401);
	return;
}

void Function_294(var uParam0, int iParam1) //Position: 0x9DE6 / 40422
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_295(int iParam0) //Position: 0x9DF2 / 40434
{
	Function_296(iParam0, 40401);
	return;
}

void Function_296(var uParam0, int iParam1) //Position: 0x9E01 / 40449
{
	uParam0->f_172 = iParam1;
	return;
}

void Function_297(var uParam0) //Position: 0x9E0D / 40461
{
	Function_270(uParam0, 40476);
	return;
}

int Function_298() //Position: 0x9E1C / 40476
{
	return 0;
}

void Function_299(int iParam0) //Position: 0x9E23 / 40483
{
	Function_275(iParam0, 40498);
	return;
}

void Function_300(var uParam0) //Position: 0x9E32 / 40498
{
	uParam0 = uParam0;
	return;
}

void Function_301(var uParam0, var uParam1) //Position: 0x9E3C / 40508
{
	uParam0->f_52 = uParam1;
	return;
}

void Function_302(int iParam0, struct<57> Param1) //Position: 0x9E48 / 40520
{
	*(iParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

bool Function_303(bool bParam0, bool bParam1, float fParam2) //Position: 0x9E5C / 40540
{
	float fVar0;
	bool bVar1;
	
	if (Function_166() || !bParam1)
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
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= fParam2)
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

void Function_304() //Position: 0x9EF9 / 40697
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	Function_180(Function_573());
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_180(Function_573()), *(&Global_79349 + 28), StackVal) };
	VNORMALIZE(&vVar0);
	SET_CAMERA_DIRECTION(GET_GAME_CAMERA(), vVar0, 1);
	Function_180(Function_573());
	Function_305(StackVal, StackVal, &vVar3, &vVar6, Function_180(Function_573()), UNK_0x9C40E671(&vVar0), 0);
	STREAMING_OVERRIDE_MAIN_POI(vVar3, vVar6);
	return;
}

var Function_305(int iParam0, var uParam1, vector3 vParam2, float fParam5, int iParam6) //Position: 0x9F41 / 40769
{
	int iVar0;
	
	iVar0 = "";
	switch (iParam6)
	{
		case 0x00000000:
			iVar0 = "roam";
			break;
		
		case 0x00000001:
			iVar0 = "interior";
			break;
		
		case 0x00000002:
			iVar0 = "horse";
			break;
		
		case 0x00000003:
			iVar0 = "wagonDefault";
			break;
		
		case 0x00000004:
			iVar0 = "wagonShotgun";
			break;
		
		case 0x00000005:
			iVar0 = "wagonShotgun";
			break;
	}
	PRINTSTRING("GET_GAME_CAMERA_RESET_POSITION_HELPER called with position ");
	PRINTVECTOR(vParam2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(fParam5);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(iVar0);
	PRINTNL();
	return GET_GAME_CAMERA_RESET_POSITION(iParam0, uParam1, vParam2, fParam5, iVar0);
}

bool Function_306() //Position: 0xA068 / 41064
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	var uVar9;
	var uVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	
	bVar0 = Function_309();
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		return 0;
	}
	if (!DECOR_CHECK_EXIST(bVar0, "LobbyGringoSet"))
	{
		return 0;
	}
	iVar1 = GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar0, "LobbyGringoSet"));
	if (!IS_OBJECTSET_VALID(iVar1))
	{
		return 0;
	}
	iVar2 = GET_OBJECTSET_SIZE(iVar1);
	if (iVar2 <= (&Local_118 + 16)->f_32)
	{
		return 0;
	}
	iVar13 = CREATE_OBJECTSET_IN_LAYOUT("GringoAdjuster", bVar0, 12, 0);
	iVar14 = CREATE_OBJECTSET_IN_LAYOUT("GringoKeeper", bVar0, 12, 0);
	iVar3 = 0;
	while (iVar3 <= iVar2)
	{
		bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar3, iVar1);
		GET_OBJECT_POSITION(bVar6, &uVar9);
		uVar12 = GET_OBJECT_MODEL_NAME(bVar6);
		DISBAND_OBJECTSET(iVar13);
		iVar4 = LOCATE_GRINGOS_OF_TYPE(iVar13, uVar12, &uVar9, 0.25f, 0);
		if (iVar4 == 2)
		{
			iVar15++;
			iVar5 = 0;
			while (iVar5 <= iVar4)
			{
				bVar7 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar5, iVar13);
				if (bVar7 == bVar6)
				{
					DESTROY_OBJECT(bVar6);
				}
				else
				{
					ADD_OBJECT_TO_OBJECTSET(bVar7, iVar14);
				}
				iVar5++;
			}
		}
		else
		{
			if (iVar4 >= 2)
			{
			}
			ADD_OBJECT_TO_OBJECTSET(bVar6, iVar14);
		}
		iVar3++;
	}
	Function_308(iVar1);
	Function_307(&iVar14, &iVar1);
	DESTROY_OBJECTSET(iVar13);
	DESTROY_OBJECTSET(iVar14);
	iVar2 = GET_OBJECTSET_SIZE(iVar1);
	iVar16 = ((GET_LOCAL_SLOT() + Local_91.f_92) % iVar2);
	bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar16, iVar1);
	uVar8 = GET_GRINGO_FROM_OBJECT(bVar6);
	if (!IS_GRINGO_VALID(uVar8))
	{
		return 0;
	}
	bVar17 = Function_573();
	if (!SNAP_ACTOR_TO_GRINGO(bVar17, bVar6, "UseCase1", 1, 0, 1))
	{
		return 0;
	}
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar17, false, "INITIAL");
	DECOR_SET_BOOL(bVar17, "NoGringoCamera", 1);
	DECOR_SET_BOOL(bVar17, "LobbyGringo", 1);
	Local_118.f_1076 = uVar8;
	Function_304();
	return 1;
}

void Function_307(var uParam0, int iParam1) //Position: 0xA249 / 41545
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = GET_OBJECTSET_SIZE(*uParam0);
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, *uParam0);
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *iParam1))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar2, *iParam1);
		}
		iVar0++;
	}
	return;
}

void Function_308(int iParam0) //Position: 0xA289 / 41609
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(iParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, iParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0);
		}
		CLEAN_OBJECTSET(iParam0);
	}
	return;
}

var Function_309() //Position: 0xA2C1 / 41665
{
	return Global_83591.f_140;
}

bool Function_310() //Position: 0xA2CD / 41677
{
	vector3 vVar0;
	var uVar3;
	
	if (FIND_GROUND_INTERSECTION(&Local_118 + 1024, 3.0f, &vVar0, &uVar3))
	{
		*(&Local_118 + 1024) = { StackVal, StackVal, vVar0 };
		return 1;
	}
	return 0;
}

void Function_311() //Position: 0xA2F1 / 41713
{
	int iVar0;
	
	iVar0 = Function_314();
	Function_312(iVar0);
	return;
}

void Function_312(int iParam0) //Position: 0xA301 / 41729
{
	if (!Function_313(iParam0))
	{
		return;
	}
	if (!(iParam0 <= 837 && iParam0 >= 975) && !(iParam0 <= 1287 && iParam0 >= 1310))
	{
		return;
	}
	Global_76887 = iParam0;
	Function_254(9, Global_76887);
	return;
}

bool Function_313(int iParam0) //Position: 0xA344 / 41796
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_314() //Position: 0xA35B / 41819
{
	bool bVar0;
	int iVar1;
	
	if (Function_516())
	{
		iVar1 = 1;
		bVar0 = GET_LOCAL_SLOT();
		Function_317(1, 0);
	}
	else
	{
		Function_317(0, Function_144(0));
		Function_317(1, Function_144(1));
		iVar1 = Function_82();
		bVar0 = Function_316(GET_LOCAL_SLOT(), 1);
		bVar0 = ((bVar0 + Local_91.f_100) % 8);
	}
	return Function_315(iVar1, bVar0);
}

int Function_315(int iParam0, bool bParam1) //Position: 0xA3A8 / 41896
{
	int iVar0;
	
	iVar0 = (*&Global_83591 + 140 + 60[iParam09])[bParam1];
	if (!Function_313(iVar0))
	{
	}
	else if (iVar0 > 837 || iVar0 < 975)
	{
	}
	return iVar0;
}

bool Function_316(bool bParam0, bool bParam1) //Position: 0xA3DE / 41950
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = Function_44(bParam0, bParam1, 0);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (bVar0 == bParam0)
		{
			return iVar1;
		}
		if (Function_44(bVar0, bParam1, 0) == iVar2)
		{
			iVar1++;
		}
		bVar0++;
	}
	return 4294967295;
}

void Function_317(int iParam0, int iParam1) //Position: 0xA425 / 42021
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 837;
	iVar1 = 0;
	while (iVar0 >= 971 && iVar1 > 8)
	{
		if (IS_ACTORENUM_INSTALLED(iVar0))
		{
			if (Function_319(iVar0) == iParam1)
			{
				Function_318(iParam0, iVar1, iVar0);
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 1287;
	while (iVar0 >= 1310 && iVar1 > 8)
	{
		if (IS_ACTORENUM_INSTALLED(iVar0))
		{
			if (Function_319(iVar0) == iParam1)
			{
				Function_318(iParam0, iVar1, iVar0);
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		return;
	}
	if (iVar1 <= 8)
	{
		iVar2 = iVar1;
		while (iVar1 <= 8)
		{
			Function_318(iParam0, iVar1, Function_315(iParam0, (iVar1 % iVar2)));
			iVar1++;
		}
	}
	return;
}

void Function_318(int iParam0, int iParam1, int iParam2) //Position: 0xA4DD / 42205
{
	(*&Global_83591 + 140 + 60[iParam09])[iParam1] = iParam2;
	return;
}

int Function_319(int iParam0) //Position: 0xA4F5 / 42229
{
	return (GET_ACTORENUM_AVATAR_GROUP(iParam0) / 1000);
}

void Function_320(int iParam0, int iParam1) //Position: 0xA504 / 42244
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578[iParam02].f_4 = iParam1;
	}
	return;
}

void Function_321() //Position: 0xA51C / 42268
{
	Function_25(1025, 1, 0);
	return;
}

void Function_322() //Position: 0xA52A / 42282
{
	Function_323(0);
	return;
}

void Function_323(bool bParam0) //Position: 0xA534 / 42292
{
	Function_560(4, bParam0);
	return;
}

bool Function_324() //Position: 0xA540 / 42304
{
	return Function_486(8);
}

bool Function_325() //Position: 0xA54B / 42315
{
	return Function_486(16);
}

bool Function_326(int iParam0) //Position: 0xA556 / 42326
{
	return UNK_0x214AFB8C(iParam0->f_24);
}

bool Function_327(int iParam0) //Position: 0xA563 / 42339
{
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	iParam0 = iParam0;
	return _IS_CLIENT_DATA_VALID_FOR_SLOT_2(&Global_76943, 0);
}

bool Function_328(bool bParam0) //Position: 0xA57E / 42366
{
	if (!Function_329(bParam0))
	{
		return 1;
	}
	return Function_177(&(Global_29008[bParam0]), 4);
}

bool Function_329(bool bParam0) //Position: 0xA59A / 42394
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_330(vector3 vParam0, var uParam3, var uParam4, bool bParam5) //Position: 0xA5B0 / 42416
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (!(StackVal != 2 && uParam3))
				{
					iVar1 = iVar0;
					if (StackVal || !(!(StackVal != 6 && uParam4) != 7 && uParam4))
					{
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar3 = iVar2;
	if (iVar3 == 4294967295)
	{
		iVar3 = iVar1;
	}
	if (bParam5)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

void Function_331(int iParam0, bool bParam1, int iParam2) //Position: 0xA650 / 42576
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
		if (Function_329(Global_29006))
		{
			Function_178(&(Global_29008[Global_29006]), 131072);
			Function_334(&(Global_29008[Global_29006]), 2097152);
			Function_332(Global_29006);
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
				if (Function_177(&(Global_29008[iVar0]), 4) || Function_177(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_334(&(Global_29008[iVar0]), 2097155);
					Function_178(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_166())
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

void Function_332(int iParam0) //Position: 0xA75B / 42843
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_333())
			{
				return;
			}
		}
		if (!Function_177(&(Global_29008[iParam0]), 2048))
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

bool Function_333() //Position: 0xA7DA / 42970
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_177(&(Global_29008[iVar0]), 4) || Function_177(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_334(var uParam0, int iParam1) //Position: 0xA843 / 43075
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_335(vector3 vParam0, var uParam3) //Position: 0xA85A / 43098
{
	if (Local_118.f_1012 != Global_76887)
	{
		if (Local_118.f_1012 >= 4294967295)
		{
			STREAMING_EVICT_ACTOR(Local_118.f_1012, 4294967295);
		}
		Local_118.f_1012 = Global_76887;
		STREAMING_REQUEST_ACTOR(Local_118.f_1012, 1, false);
	}
	if (STREAMING_IS_ACTOR_LOADED(Local_118.f_1012, 4294967295) || Local_118 <= 10.0f)
	{
		if (Local_118 <= 10.0f)
		{
		}
		if (Function_195(StackVal, StackVal, vParam0, 0.0f, uParam3, 0.0f, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_336() //Position: 0xA8CE / 43214
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	vector3 vVar12;
	bool bVar15;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	iVar4 = 1;
	bVar5 = true;
	iVar6 = 0;
	fVar8 = 4.0f;
	bVar9 = false;
	if (Function_492(1048576))
	{
		bVar9 = true;
	}
	else if (Function_492(4096))
	{
		fVar8 = 2.0f;
	}
	bVar10 = GET_LOCAL_SLOT();
	while (iVar6 > 10 && iVar4)
	{
		if (bVar9)
		{
			vVar0.f_8 = 1.5f;
		}
		else
		{
			fVar7 = SQRT(RAND_FLOAT_RANGE(0.0f, 1.0f));
			vVar0.f_8 = ((fVar7 * (fVar8 - 0.5f)) + 0.5f);
		}
		if (bVar9 && iVar6 != 0)
		{
			fVar3 = (60.0f * TO_FLOAT(GET_LOCAL_SLOT()));
		}
		else
		{
			fVar3 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		}
		ROTATE_VECTOR_XZ(&vVar0, fVar3, 0);
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(&Global_79349 + 28), vVar0, StackVal) };
		bVar11 = false;
		bVar5 = true;
		while (bVar11 > 16 && bVar5)
		{
			if (IS_SLOT_VALID(bVar11) && bVar11 == bVar10)
			{
				bVar15 = GET_SLOT_ACTOR(bVar11);
				if (IS_ACTOR_VALID(bVar15))
				{
					if (Function_337(StackVal, StackVal, bVar15, vVar12) > 1.0f)
					{
						bVar5 = false;
					}
				}
			}
			bVar11++;
		}
		if (bVar5)
		{
			iVar4 = 0;
		}
		else
		{
			iVar6++;
		}
	}
	Local_118.f_1036 = fVar3;
	*(&Local_118 + 1024) = { StackVal, StackVal, vVar12 };
	return;
}

float Function_337(bool bParam0, vector3 vParam1) //Position: 0xA9F3 / 43507
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_338(bParam0);
		vVar0 = { StackVal, StackVal, Function_338(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_338(bool bParam0) //Position: 0xAA6D / 43629
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

void Function_339() //Position: 0xAAD7 / 43735
{
	Global_16517.f_8 = -1.0f;
	Global_16517.f_12 = -1.0f;
	Global_16517.f_16 = 0;
	return;
}

void Function_340(int iParam0, int iParam1, int iParam2) //Position: 0xAAEF / 43759
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
		uVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_341(Global_16524, uVar0, 1);
	}
	return;
}

void Function_341(int iParam0, var uParam1, bool bParam2) //Position: 0xABD5 / 43989
{
	int iVar0;
	
	Function_344(iParam0);
	Function_343(uParam1);
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
	Function_342();
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

void Function_342() //Position: 0xAD4E / 44366
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_343(int iParam0) //Position: 0xAD5A / 44378
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

void Function_344(int iParam0) //Position: 0xADA0 / 44448
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

void Function_345() //Position: 0xADE6 / 44518
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_346() //Position: 0xADFD / 44541
{
	if (IS_LAYOUTREF_VALID(Global_83591.f_140))
	{
		Function_347(Global_83591.f_140);
	}
	if (IS_SCRIPT_VALID(Local_118.f_860))
	{
		TERMINATE_SCRIPT(Local_118.f_860);
	}
	return;
}

void Function_347(bool bParam0) //Position: 0xAE2B / 44587
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		iVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_119()));
		if (IS_OBJECTSET_VALID(iVar0))
		{
			iVar1 = GET_OBJECTSET_SIZE(iVar0);
			iVar2 = 0;
			while (iVar2 <= iVar1)
			{
				bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar2, iVar0);
				bVar7 = FIND_OBJECT_IN_OBJECT(bVar6, Function_103());
				if (IS_OBJECT_VALID(bVar7))
				{
					if (DECOR_GET_INT_VERBOSE(bVar7, Function_92(), &uVar3))
					{
						uVar4 = Function_349(uVar3);
						uVar5 = Function_348(uVar3);
						RESET_THIS_TREE_TYPE_CLEARING(uVar4);
						RESET_THIS_TREE_TYPE_CLEARING(uVar5);
					}
				}
				iVar2++;
			}
		}
	}
	return;
}

int Function_348(int iParam0) //Position: 0xAEAB / 44715
{
	return Function_100(iParam0, 32, 16);
}

int Function_349(var uParam0) //Position: 0xAEB9 / 44729
{
	return Function_100(uParam0, 16, 0);
}

void Function_350() //Position: 0xAEC7 / 44743
{
	Function_353();
	Function_352();
	Function_351();
	return;
}

void Function_351() //Position: 0xAED6 / 44758
{
	Function_495(8192, 0);
	Function_495(4096, 0);
	return;
}

void Function_352() //Position: 0xAEEA / 44778
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_118.f_852))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_118.f_852);
	}
	return;
}

void Function_353() //Position: 0xAF03 / 44803
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_118.f_848))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_118.f_848);
	}
	return;
}

void Function_354() //Position: 0xAF1C / 44828
{
	if (Function_29(4))
	{
		Function_452();
	}
	Function_25(4, 0, 1);
	return;
}

void Function_355() //Position: 0xAF32 / 44850
{
	int iVar0;
	
	if (!NET_IS_IN_SESSION() || NET_IS_SESSION_HOST())
	{
		NET_LOG(true, "Host VBA", "HOST VARIABLES RESET", 0, 0, 0, 0);
		Function_504(&Global_78578 + 96);
		Global_78578.f_108 = 4294967295;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_78578[iVar02] = 0;
			Global_78578[iVar02].f_4 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 16)
		{
			(*&Global_78578 + 20)[iVar0] = 4294967295;
			iVar0++;
		}
		Global_78578.f_92 = 0;
	}
	else
	{
		NET_LOG(true, "Host VBA", "HOST VARIABLES NOT RESET, %s is the host, not me", Function_129(), 0, 0, 0);
	}
	return;
}

void Function_356() //Position: 0xB013 / 45075
{
	bool bVar0;
	
	Local_118.f_868 = 0;
	if (!Function_517())
	{
		Function_394();
	}
	Function_368(Global_79349.f_16, &Global_83591, 1);
	iLocal_86 = StackVal;
	if (Function_514())
	{
		Function_495(512, 1);
	}
	Function_560(1, 1);
	if (Function_126(2))
	{
		Function_491(1024);
	}
	else
	{
		Function_404(1024);
	}
	Function_323(0);
	HUD_CLEAR_OBJECTIVE();
	CLEAR_PRINTED_OBJECTIVE();
	NET_GAMER_ICON_FORCE_TEXT_VISIBLE(1);
	Function_360();
	Function_30(1);
	Function_358();
	Function_357();
	Function_552(!Function_577(1024));
	bVar0 = Function_573();
	if (IS_ACTOR_VALID(bVar0))
	{
		ACTOR_START_FORCE_HOLSTER(bVar0, 0, 0);
	}
	return;
}

void Function_357() //Position: 0xB0A4 / 45220
{
	Function_25(1024, 1, 0);
	Function_25(1, 0, 0);
	return;
}

void Function_358() //Position: 0xB0B8 / 45240
{
	Function_359(20485);
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

void Function_359(var uParam0) //Position: 0xB0EA / 45290
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_360() //Position: 0xB107 / 45319
{
	Function_367(8);
	Function_366(0);
	Function_366(3);
	Function_366(7);
	Function_366(11);
	Function_366(13);
	Function_366(35);
	Function_366(16);
	Function_366(33);
	Function_366(23);
	Function_366(24);
	Function_366(9);
	Function_366(6);
	Function_366(20);
	Function_366(31);
	if (IS_PS3())
	{
		Function_366(10);
		Function_366(26);
		Function_366(29);
		Function_366(14);
		Function_366(18);
		Function_366(22);
		Function_366(32);
		Function_366(34);
	}
	Function_364(1);
	Function_361();
	ENABLE_AMBIENT_SPAWNING(0);
	return;
}

void Function_361() //Position: 0xB18D / 45453
{
	Function_367(4);
	Function_362(1, 0);
	return;
}

void Function_362(int iParam0, int iParam1) //Position: 0xB19C / 45468
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_363(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_363(int iParam0) //Position: 0xB21E / 45598
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_364(int iParam0) //Position: 0xB26C / 45676
{
	Function_365(&Global_28842, iParam0);
	return;
}

void Function_365(var uParam0, int iParam1) //Position: 0xB27A / 45690
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_366(int iParam0) //Position: 0xB29D / 45725
{
	if (iParam0 >= 4294967295 || iParam0 <= 36)
	{
		return;
	}
	Global_30767[iParam0] = 0;
	Global_30837 = 1;
	return;
}

void Function_367(int iParam0) //Position: 0xB2BD / 45757
{
	int iVar0;
	
	if (Function_15(iParam0, 1) && Function_15(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_368(int iParam0, int iParam1, int iParam2) //Position: 0xB2F1 / 45809
{
	iParam1->f_4 = 2;
	iParam2 = iParam2;
	iParam1->f_8 = 16;
	Function_388(iParam1);
	Function_386();
	Function_384();
	switch (iParam0)
	{
		case 0x00000001:
			Function_381(iParam1);
			break;
		
		case 0x00000002:
			*iParam1 = 2500;
			iParam1->f_16 = 600.0f;
			Function_380(iParam1);
			Function_376(iParam1 + 276, 0);
			Function_374(iParam1, 1, 0, 5, 1);
			Function_374(iParam1, 2, 22, 1, 1);
			Function_371(iParam1, 1, 7, 3, 1);
			Function_371(iParam1, 2, 10, 1, 1);
			Function_371(iParam1, 3, 17, 2, 1);
			Function_371(iParam1, 4, 19, 1, 1);
			Function_371(iParam1, 5, 24, 1, 1);
			Function_370(iParam1 + 276, 4);
			break;
		
		case 0x00000003:
			*iParam1 = 1500;
			iParam1->f_16 = 600.0f;
			Function_380(iParam1);
			Function_376(iParam1 + 276, 0);
			break;
		
		case 0x00000011:
			*iParam1 = 5000;
			iParam1->f_16 = 600.0f;
			Function_380(iParam1);
			Function_376(iParam1 + 276, 0);
			Function_374(iParam1, 1, 0, 5, 1);
			Function_374(iParam1, 2, 22, 1, 1);
			Function_371(iParam1, 1, 7, 3, 1);
			Function_371(iParam1, 2, 10, 1, 1);
			Function_371(iParam1, 3, 17, 2, 1);
			Function_371(iParam1, 4, 19, 1, 1);
			Function_371(iParam1, 5, 24, 1, 1);
			Function_370(iParam1 + 276, 4);
			break;
		
		case 0x00000006:
			iParam1->f_16 = 900.0f;
			Function_380(iParam1);
			Function_376(iParam1 + 276, 0);
			Function_374(iParam1, 1, 0, 3, 1);
			Function_374(iParam1, 2, 22, 1, 1);
			Function_371(iParam1, 1, 9, 2, 1);
			Function_371(iParam1, 2, 1, 2, 1);
			Function_371(iParam1, 3, 16, 2, 1);
			Function_371(iParam1, 4, 19, 2, 1);
			Function_371(iParam1, 5, 24, 1, 1);
			Function_370(iParam1 + 276, 4);
			break;
		
		case 0x00000007:
			*iParam1 = 10;
			iParam1->f_16 = 600.0f;
			Function_376(iParam1 + 276, 0);
			Function_380(iParam1);
			Function_374(iParam1, 1, 0, 5, 1);
			Function_374(iParam1, 2, 22, 1, 1);
			Function_371(iParam1, 1, 7, 3, 1);
			Function_371(iParam1, 2, 10, 1, 1);
			Function_371(iParam1, 3, 17, 2, 1);
			Function_371(iParam1, 4, 19, 1, 1);
			Function_371(iParam1, 5, 24, 1, 1);
			Function_370(iParam1 + 276, 4);
			break;
		
		case 0x00000008:
			*iParam1 = 7;
			iParam1->f_16 = 600.0f;
			Function_376(iParam1 + 276, 0);
			Function_374(iParam1, 1, 0, 5, 1);
			Function_374(iParam1, 2, 22, 1, 1);
			Function_374(iParam1, 3, 25, 2, 1);
			Function_371(iParam1, 1, 9, 3, 1);
			Function_371(iParam1, 2, 1, 1, 1);
			Function_371(iParam1, 3, 24, 2, 1);
			Function_380(iParam1);
			Function_370(iParam1 + 276, 4);
			break;
		
		case 0x00000009:
			*iParam1 = 3;
			iParam1->f_16 = 600.0f;
			Function_376(iParam1 + 276, 0);
			Function_374(iParam1, 1, 0, 5, 1);
			Function_374(iParam1, 2, 22, 1, 1);
			Function_374(iParam1, 3, 25, 2, 1);
			Function_371(iParam1, 1, 9, 3, 1);
			Function_371(iParam1, 2, 1, 1, 1);
			Function_371(iParam1, 3, 24, 2, 1);
			Function_380(iParam1);
			Function_370(iParam1 + 276, 4);
			break;
		
		case 0x0000000E:
			iParam1->f_8 = 2;
			Function_376(iParam1 + 276, 0);
			Function_374(iParam1, 1, 5, 2, 1);
			break;
		
		case 0x0000000A:
			iParam1->f_8 = 6;
			Function_380(iParam1);
			break;
		
		case 0x0000000B:
			iParam1->f_8 = 6;
			Function_380(iParam1);
			break;
		
		case 0x0000000C:
			iParam1->f_8 = 16;
			Function_376(iParam1 + 276, 0);
			Function_374(iParam1, 1, 5, 5, 1);
			Function_374(iParam1, 3, 17, 2, 1);
			Function_380(iParam1);
			break;
		
		case 0x00000012:
			iParam1->f_8 = 2;
			Function_380(iParam1);
			break;
		
		case 0x00000013:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_376(iParam1 + 276, 0);
			Function_374(iParam1, 1, 0, 8, 1);
			Function_374(iParam1, 2, 9, 6, 1);
			Function_374(iParam1, 3, 22, 1, 1);
			Function_380(iParam1);
			Function_370(iParam1 + 276, 0);
			break;
		
		case 0x00000014:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_369(iParam1);
			Function_370(iParam1 + 276, 0);
			break;
	}
	if (Function_114())
	{
		Function_370(iParam1 + 276, 2);
	}
	return;
}

void Function_369(int iParam0) //Position: 0xB6DE / 46814
{
	iParam0->f_844 = 1;
	return;
}

void Function_370(int iParam0, int iParam1) //Position: 0xB6EA / 46826
{
	(iParam0 + 228)->f_220 = 0;
	Function_27(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_371(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xB702 / 46850
{
	Function_372(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_372(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xB71A / 46874
{
	Function_373(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_373(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xB731 / 46897
{
	if (!Function_111(iParam1))
	{
		return;
	}
	Function_281(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_374(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xB754 / 46932
{
	Function_375(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_375(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB76C / 46956
{
	Function_373(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_376(int iParam0, bool bParam1) //Position: 0xB781 / 46977
{
	Function_278(iParam0);
	Function_278(iParam0 + 228);
	if (bParam1)
	{
		Function_377(iParam0);
	}
	return;
}

void Function_377(int iParam0) //Position: 0xB79D / 47005
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_378(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_378(var uParam0, int iParam1) //Position: 0xB7BD / 47037
{
	Function_379(uParam0, iParam1, 0);
	return;
}

void Function_379(int iParam0, int iParam1, int iParam2) //Position: 0xB7CB / 47051
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_380(int iParam0) //Position: 0xB7DC / 47068
{
	iParam0->f_844 = 0;
	return;
}

void Function_381(int iParam0) //Position: 0xB7E8 / 47080
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = Function_207(487);
	iVar1 = 1;
	iVar2 = 1;
	iVar3 = 3;
	while (iVar1 > 50 && iVar2)
	{
		if (fVar0 <= Global_83864[iVar16] && Global_83864[iVar16] < 0.0f)
		{
			if (!StackVal != 4294967295)
			{
				Function_383(StackVal, iParam0, iVar3, 0, 1);
				if (Global_83823[StackVal])
				{
					SET_WEAPON_GOLD(StackVal, Function_573(), 1);
				}
				iVar3++;
			}
			Function_382(iVar1, 1);
			iVar1++;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return;
}

void Function_382(int iParam0, int iParam1) //Position: 0xB885 / 47237
{
	Function_27(&Global_83864[iParam06] + 16, iParam1);
	return;
}

void Function_383(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB89A / 47258
{
	Function_375(iParam0 + 276, uParam1, uParam2, uParam3, uParam4);
}

void Function_384() //Position: 0xB8B2 / 47282
{
	var uVar0;
	
	uVar0 = "";
	Function_385(uVar0, uVar0, 0, 58, 58, 1);
	return;
}

void Function_385(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0xB8C8 / 47304
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

void Function_386() //Position: 0xB958 / 47448
{
	Function_387("%s", 0);
	return;
}

void Function_387(int iParam0, bool bParam1) //Position: 0xB967 / 47463
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

void Function_388(int iParam0) //Position: 0xB99C / 47516
{
	Function_376(iParam0 + 276, 1);
	Function_369(iParam0);
	Function_374(iParam0, 1, 4, 7, 1);
	Function_374(iParam0, 2, 22, 1, 1);
	Function_371(iParam0, 1, 5, 5, 1);
	Function_371(iParam0, 2, 10, 3, 1);
	Function_371(iParam0, 3, 17, 1, 1);
	Function_371(iParam0, 4, 19, 1, 1);
	Function_371(iParam0, 5, 24, 1, 1);
	Function_393(iParam0, 5, 3);
	Function_393(iParam0, 4, 3);
	Function_393(iParam0, 3, 10);
	Function_393(iParam0, 7, 18);
	Function_393(iParam0, 6, 20);
	Function_393(iParam0, 8, 15);
	Function_393(iParam0, 9, 15);
	Function_393(iParam0, 10, 10);
	Function_393(iParam0, 11, 5);
	Function_392(iParam0, 0, 45.0f);
	Function_392(iParam0, 1, 45.0f);
	Function_392(iParam0, 2, 15.0f);
	Function_392(iParam0, 3, 15.0f);
	Function_392(iParam0, 4, 30.0f);
	Function_392(iParam0, 5, 30.0f);
	Function_391(iParam0, 15.0f);
	Function_390(iParam0, 15.0f);
	Function_389(iParam0, 15.0f);
	Function_279(iParam0 + 276 + 228, 100.0f);
	Function_370(iParam0 + 276, 0);
	return;
}

void Function_389(int iParam0, int iParam1) //Position: 0xBAB2 / 47794
{
	(iParam0 + 276 + 528)->f_28 = iParam1;
	return;
}

void Function_390(int iParam0, int iParam1) //Position: 0xBAC4 / 47812
{
	(iParam0 + 276 + 528)->f_36 = iParam1;
	return;
}

void Function_391(int iParam0, int iParam1) //Position: 0xBAD6 / 47830
{
	(iParam0 + 276 + 528)->f_32 = iParam1;
	return;
}

void Function_392(int iParam0, int iParam1, int iParam2) //Position: 0xBAE8 / 47848
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

void Function_393(int iParam0, int iParam1, int iParam2) //Position: 0xBB0B / 47883
{
	Function_379(iParam0 + 276, iParam1, iParam2);
	return;
}

void Function_394() //Position: 0xBB1D / 47901
{
	Global_79962 = Function_399(Local_91.f_104);
	Function_395();
	NET_GAMER_BLIPS_FORCE_VISIBLE(Function_15(Global_79962, 4096));
	if (Function_15(Global_79962, 8192))
	{
		NET_GAMER_ICONS_SET_STEALTH(3);
	}
	if (Function_15(Global_79962, 65536))
	{
		NET_GAMER_BLIPS_SET_STEALTH(1);
	}
	return;
}

void Function_395() //Position: 0xBB61 / 47969
{
	if (Function_15(Global_79962, 16))
	{
		SET_PLAYER_COMBATMODE_OVERRIDE(1);
	}
	else if (Function_15(Global_79962, 8))
	{
		SET_PLAYER_COMBATMODE_OVERRIDE(2);
	}
	else
	{
		SET_PLAYER_COMBATMODE_OVERRIDE(4294967295);
	}
	if (Function_398())
	{
		if (!Function_397() && !Function_396())
		{
			SET_PLAYER_COMBATMODE_EXCLUSION(2);
		}
	}
	return;
}

bool Function_396() //Position: 0xBBAA / 48042
{
	return Function_15(Global_79962, 16);
}

bool Function_397() //Position: 0xBBB9 / 48057
{
	return Function_15(Global_79962, 8);
}

bool Function_398() //Position: 0xBBC8 / 48072
{
	return Function_15(Global_79962, 32768);
}

int Function_399(int iParam0) //Position: 0xBBD9 / 48089
{
	struct<657> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_143(iParam0, &Var0))
	{
		return Var0.f_656;
	}
	return 0;
}

int Function_400(int iParam0, bool bParam1) //Position: 0xBBFA / 48122
{
	STREAMING_SET_CUTSCENE_MODE(0);
	if (IS_OBJECT_VALID(StackVal))
	{
		if (IS_OBJECT_VALID(iParam0->f_348))
		{
			DESTROY_OBJECT(iParam0->f_348);
		}
		REMOVE_CAMERA_FROM_CHANNEL(StackVal, 0);
		DEREFERENCE_OBJECT(StackVal);
		DESTROY_CAMERA(StackVal);
		DESTROY_OBJECTSET(iParam0->f_184);
		DESTROY_OBJECTSET(iParam0->f_108);
		DESTROY_OBJECT(iParam0->f_16);
		CAMERA_RESET(0);
		STREAMING_RELEASE_MAIN_POI();
		if (bParam1)
		{
			STREAMING_UNLOAD_SCENE();
		}
		Global_30841 = 1;
	}
	else
	{
		STREAMING_SET_POI_LIMIT(1);
		Global_30841 = 1;
		return 1;
	}
	return 0;
}

void Function_401() //Position: 0xBC70 / 48240
{
	char* cVar0[32];
	struct<8> Var8;
	
	HUD_FADE_TO_LOADING_SCREEN();
	strcpy(&cVar0, "LS_", 32);
	stradd(&cVar0, &Global_79349, 32);
	UI_TEXTURE_SET_NAME("LoadingScreenTexture", &cVar0);
	UI_SHOW("LoadingScreenTexture");
	UI_SHOW("LoadingMissionName");
	if ((Function_426(&Global_79349, 1024) || STRING_CONTAINS_STRING(&Global_79349 + 48, "_coc2_")) || STRING_CONTAINS_STRING(&Global_79349 + 48, "ctf_ben_"))
	{
		UI_SET_TEXT("LoadingMissionName", &Global_79349 + 48);
	}
	else
	{
		Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_424(Global_79349.f_40) };
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("mp_lobby_loading"), UI_GET_STRING(&Global_79349 + 48), UI_GET_STRING(&Var8), 0);
		UI_SET_TEXT("LoadingMissionName", "Generic_Dbuffer128_0");
	}
	UI_REFRESH("LoadingMissionName");
	UI_SET_TEXT("LoadingSpinner", "Common_Null");
	UI_REFRESH("LoadingSpinner");
	UI_REFRESH("LoadingScreen");
	return;
}

void Function_402() //Position: 0xBE0C / 48652
{
	Function_312(Function_403());
	return;
}

var Function_403() //Position: 0xBE18 / 48664
{
	if (!IS_STRING_VALID(&Global_76854))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76854);
}

void Function_404(int iParam0) //Position: 0xBE32 / 48690
{
	Function_36(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_405() //Position: 0xBE6B / 48747
{
	UI_EXIT("Lobby_NewStyle");
	Function_495(2097152, 0);
	return;
}

void Function_406(int iParam0, int iParam1) //Position: 0xBE8D / 48781
{
	Function_407(iParam0, iParam1, 49750);
	return;
}

void Function_407(var uParam0, var uParam1, int iParam2) //Position: 0xBE9E / 48798
{
	if (Function_29(0x4000000))
	{
		Function_452();
		Function_25(0x4000000, 0, 1);
	}
	if (Function_29(0x10000000))
	{
		Function_452();
		Function_25(0x10000000, 0, 1);
	}
	if (Function_29(2) != Function_29(0x2000000))
	{
		Function_452();
		Function_25(0x2000000, Function_29(2), 1);
	}
	if (Function_412())
	{
		Function_411(!Function_29(16));
	}
	if (Function_29(16))
	{
		Function_408(&uParam0, &uParam1, &iParam2);
		if (Function_29(8192))
		{
			if (!Function_29(4194304))
			{
				Function_25(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_29(8388608))
			{
				Function_25(8388608, 1, 1);
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
			Function_122();
		}
		Function_25(16384, 1, 1);
	}
	else if (!Function_29(32))
	{
		Function_122();
	}
	Function_25(32768, 0, 1);
	return;
}

void Function_408(var uParam0, var uParam1, int iParam2) //Position: 0xC041 / 49217
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_25(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_29(0x40000000);
	bVar3 = !Function_29(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_47(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_45(bVar1, 2048, 1))
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
				if (Function_409(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_29(4))
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
			if (Function_409(bVar1, (4294966296 - bVar1), 1))
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

bool Function_409(bool bParam0, int iParam1, int iParam2) //Position: 0xC1B9 / 49593
{
	var uVar0;
	
	return Function_410(bParam0, iParam1, &uVar0, iParam2);
}

bool Function_410(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xC1CA / 49610
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
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
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, iParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

void Function_411(bool bParam0) //Position: 0xC22F / 49711
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_25(16384, 0, 1);
	return;
}

bool Function_412() //Position: 0xC249 / 49737
{
	return Function_29(32768);
}

int Function_413() //Position: 0xC256 / 49750
{
	return 1;
}

int Function_414(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC25D / 49757
{
	var uVar0;
	char* cVar1;
	int iVar2;
	
	uParam1 = uParam1;
	uParam2 = uParam2;
	uParam3 = uParam3;
	if (Function_410(bParam0, bParam0 * -2, &uVar0, 0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(0);
		cVar1 = "<VNO>";
		if (Function_45(bParam0, 256, 1))
		{
			cVar1 = "<VGO>";
		}
		else if (Function_45(bParam0, 512, 1))
		{
			cVar1 = "<VSKIP>";
		}
		else if (Function_45(bParam0, 1024, 1))
		{
		}
		iVar2 = 0;
		if (Function_492(65536))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iVar2, UI_GET_STRING(Function_415((Function_70(8, bParam0) - 1), 0)));
			iVar2++;
		}
		if (Function_29(0x1000000))
		{
			if (Function_492(8))
			{
				if (NET_GET_PLAYMODE() == 0)
				{
					if (Function_45(bParam0, 0x4000000, 1))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iVar2, "<red><MP_KO></red>");
					}
					else
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iVar2, "<green><MONEY></green>");
					}
					iVar2++;
				}
			}
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iVar2, cVar1);
			iVar2++;
		}
	}
	return 0;
}

var Function_415(bool bParam0, bool bParam1) //Position: 0xC376 / 50038
{
	if (bParam1)
	{
		switch (bParam0)
		{
			case 0x00000000:
				return "Class_0_desc";
			
			case 0x00000001:
				return "Class_1_desc";
			
			case 0x00000002:
				return "Class_2_desc";
			
			case 0x00000003:
				return "Class_3_desc";
			
			case 0x00000004:
				return "Class_4_desc";
			
			case 0x00000005:
				return "Class_5_desc";
			
			case 0x00000006:
				return "Class_6_desc";
			
			case 0x00000007:
				return "Class_7_desc";
			
			case 0x00000008:
				return "Class_8_desc";
			
			case 0x00000009:
				return "Class_9_desc";
			
			case 0x0000000A:
				return "Class_10_desc";
			
			case 0x0000000B:
				return "Class_11_desc";
			
			case 0x0000000C:
				return "Class_12_desc";
			
			case 0x0000000D:
				return "Class_13_desc";
			
			case 0x0000000E:
				return "Class_14_desc";
			
			case 0x0000000F:
				return "Class_15_desc";
			
			case 0x00000010:
				return "Class_16_desc";
			
			case 0x00000011:
				return "Class_17_desc";
			
			case 0x00000012:
				return "Class_18_desc";
			
			case 0x00000013:
				return "Class_19_desc";
			
			case 0x00000014:
				return "Class_20_desc";
			
			default:
		}
	}
	switch (bParam0)
	{
		case 0x00000000:
			return "Class_0";
		
		case 0x00000001:
			return "Class_1";
		
		case 0x00000002:
			return "Class_2";
		
		case 0x00000003:
			return "Class_3";
		
		case 0x00000004:
			return "Class_4";
		
		case 0x00000005:
			return "Class_5";
		
		case 0x00000006:
			return "Class_6";
		
		case 0x00000007:
			return "Class_7";
		
		case 0x00000008:
			return "Class_8";
		
		case 0x00000009:
			return "Class_9";
		
		case 0x0000000A:
			return "Class_10";
		
		case 0x0000000B:
			return "Class_11";
		
		case 0x0000000C:
			return "Class_12";
		
		case 0x0000000D:
			return "Class_13";
		
		case 0x0000000E:
			return "Class_14";
		
		case 0x0000000F:
			return "Class_15";
		
		case 0x00000010:
			return "Class_16";
		
		case 0x00000011:
			return "Class_17";
		
		case 0x00000012:
			return "Class_18";
		
		case 0x00000013:
			return "Class_19";
		
		case 0x00000014:
			return "Class_20";
		
		default:
	}
	return "Common_Null";
}

int Function_416() //Position: 0xC6E9 / 50921
{
	bool bVar0;
	
	bVar0 = "";
	switch (Local_118.f_1016)
	{
		case 0x00000003:
		case 0x00000004:
			bVar0 = "mp_lobby_teamlock";
			break;
	}
	if (!Function_417(!IS_STRING_VALID(bVar0)))
	{
		return 0;
	}
	if (Function_412() && IS_STRING_VALID(bVar0))
	{
		NET_PLAYER_LIST_SET_TITLE(bVar0);
	}
	return 1;
}

bool Function_417(bool bParam0) //Position: 0xC743 / 51011
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_412() || Function_420(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_419(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_412())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_418(Function_412());
	return 1;
}

void Function_418(bool bParam0) //Position: 0xC7C4 / 51140
{
	if (bParam0 || Function_29(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_29(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_29(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_29(1048576) || Function_29(4)) || Function_488(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_25(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_419(bool bParam0) //Position: 0xC84D / 51277
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_423(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, bParam0);
}

bool Function_420(bool bParam0, bool bParam1) //Position: 0xC861 / 51297
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(bParam1))
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

void Function_421(int iParam0, bool bParam1) //Position: 0xC895 / 51349
{
	if (Global_76905.f_128 != iParam0)
	{
		Function_25(0x20000000, 1, 1);
	}
	Global_76905.f_128 = iParam0;
	Function_25(65536, bParam1, 1);
	return;
}

bool Function_422() //Position: 0xC8C2 / 51394
{
	if (!Function_492(2097152))
	{
		return 1;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	if (StackVal == 1)
	{
		return 1;
	}
	if (Function_486(32) && !Function_486(512))
	{
		return 0;
	}
	return 1;
}

struct<64> Function_423(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xC8F6 / 51446
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

struct<32> Function_424(int iParam0) //Position: 0xC93B / 51515
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_329(iParam0))
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

void Function_425(char* cParam0) //Position: 0xC9F8 / 51704
{
	if (Function_420(cParam0, &Global_76905))
	{
		Function_25(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

bool Function_426(var uParam0, int iParam1) //Position: 0xCA1C / 51740
{
	return Function_15(uParam0->f_44, iParam1);
}

float Function_427(int iParam0) //Position: 0xCA2B / 51755
{
	return -Function_428(iParam0);
}

float Function_428(int iParam0) //Position: 0xCA37 / 51767
{
	if (Function_435(iParam0))
	{
		if (Function_135(iParam0))
		{
			return StackVal;
		}
		Function_429();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_429() //Position: 0xCB08 / 51976
{
	if (!Function_430())
	{
	}
	return;
}

bool Function_430() //Position: 0xCB15 / 51989
{
	return NET_IS_IN_SESSION();
}

bool Function_431(int iParam0) //Position: 0xCB1E / 51998
{
	if (Function_435(iParam0))
	{
		if (Function_427(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_432(var uParam0, float fParam1) //Position: 0xCB39 / 52025
{
	Function_433(uParam0, -fParam1);
	return;
}

void Function_433(var uParam0, float fParam1) //Position: 0xCB47 / 52039
{
	Function_429();
	Function_434(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_434(int iParam0, int iParam1) //Position: 0xCB5B / 52059
{
	iParam0->f_4 = iParam1;
	Function_27(iParam0, 1);
	Function_26(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_435(int iParam0) //Position: 0xCB78 / 52088
{
	return Function_15(*iParam0, 1);
}

void Function_436(var uParam0) //Position: 0xCB85 / 52101
{
	bool bVar0;
	bool bVar1;
	
	Function_447(uParam0);
	if (Function_126(1))
	{
		if (Local_118.f_12 == 19)
		{
			Function_445(0);
		}
		else
		{
			Function_350();
		}
		Function_444();
		return;
	}
	bVar0 = UI_ISFOCUSED("HudScene");
	if (Local_118.f_12 == 36)
	{
		Function_351();
		if (Function_435(&Local_91 + 32))
		{
			if (Function_427(&Local_91 + 32) >= 2.0f && !Function_135(&Local_91 + 32))
			{
				bVar0 = false;
				Function_124(Function_573());
			}
		}
		if (Function_435(&Local_91 + 8))
		{
			bVar0 = false;
			Function_124(Function_573());
		}
		if (bVar0)
		{
			switch (Function_442())
			{
				case 0x00000000:
					Function_441();
					if (IS_SCRIPT_USE_CONTEXT_VALID(Local_118.f_848) || uLocal_90)
					{
						if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 13, 1, 0) || uLocal_90)
						{
							Function_350();
							bVar0 = false;
							PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
							Function_507(3);
							Function_124(Function_573());
						}
					}
					if (bVar0 && !Function_517())
					{
						Function_440();
						if (IS_SCRIPT_USE_CONTEXT_VALID(Local_118.f_852))
						{
							if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 15, 1, 0))
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
								Function_350();
								Function_507(1);
								Function_124(Function_573());
							}
						}
					}
					break;
				
				case 0x00000001:
					Function_439();
					if (IS_SCRIPT_USE_CONTEXT_VALID(Local_118.f_852))
					{
						if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 15, 1, 0))
						{
							PLAY_SOUND_FRONTEND("HUD_MENU_MAP_DE-ACTIVATE_MASTER");
							Function_350();
							Function_507(0);
							Function_277(Function_573());
							UPDATE_PROFILE_STAT(&Global_79349, -1.0f, 0);
						}
					}
					break;
				
				case 0x00000003:
					Function_437();
					if (IS_SCRIPT_USE_CONTEXT_VALID(Local_118.f_848))
					{
						if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 13, 1, 0))
						{
							PLAY_SOUND_FRONTEND("HUD_MENU_MAP_DE-ACTIVATE_MASTER");
							Function_350();
							Function_507(0);
							Function_277(Function_573());
						}
					}
					break;
			}
		}
		else
		{
			Function_350();
		}
	}
	else if (Local_118.f_12 == 19)
	{
		Function_353();
		Function_352();
		bVar1 = false;
		if (Function_442() == 2 && !Function_517())
		{
			bVar0 = true;
			if (Function_435(&Local_91 + 44))
			{
				if (Function_427(&Local_91 + 44) > 5.0f)
				{
					bVar0 = false;
				}
			}
			if (bVar0)
			{
				bVar1 = true;
				if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 15, 1, 0))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
					bVar1 = false;
					Function_507(2);
				}
			}
		}
		Function_445(bVar1);
	}
	return;
}

int Function_437() //Position: 0xCE07 / 52743
{
	if (Function_134())
	{
		return Function_438(&Local_118 + 848, "mp_lobby_cancel_ready", 13, 1);
	}
	return Function_438(&Local_118 + 848, "mp_lobby_ready_down", 13, 1);
}

int Function_438(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xCE58 / 52824
{
	if (HUD_IS_FADED() || HUD_IS_FADING())
	{
		return 0;
	}
	if (!IS_SCRIPT_USE_CONTEXT_VALID(*uParam0))
	{
		*uParam0 = ADD_SCRIPT_USE_CONTEXT(bParam1, iParam3, iParam2, 0, 0, 0, 0, 4294967295, 0);
	}
	return IS_SCRIPT_USE_CONTEXT_VALID(*uParam0);
}

int Function_439() //Position: 0xCE90 / 52880
{
	return Function_438(&Local_118 + 852, "mp_lobby_cancel_skip", 15, 1);
}

int Function_440() //Position: 0xCEB8 / 52920
{
	return Function_438(&Local_118 + 852, "mp_lobby_vote_skip", 15, 1);
}

int Function_441() //Position: 0xCEDE / 52958
{
	if (Function_134())
	{
		return Function_438(&Local_118 + 848, "mp_lobby_vote_ready", 13, 1);
	}
	return Function_438(&Local_118 + 848, "mp_lobby_ready_up", 13, 1);
}

int Function_442() //Position: 0xCF2B / 53035
{
	return Function_443(GET_LOCAL_SLOT());
}

int Function_443(bool bParam0) //Position: 0xCF37 / 53047
{
	if (Function_45(bParam0, 512, 1))
	{
		return 1;
	}
	if (Function_45(bParam0, 256, 1))
	{
		return 3;
	}
	if (Function_45(bParam0, 1024, 1))
	{
		return 2;
	}
	return 0;
}

void Function_444() //Position: 0xCF6E / 53102
{
	if (Function_29(0x1000000))
	{
		Function_452();
	}
	Function_25(0x1000000, 0, 1);
	return;
}

void Function_445(bool bParam0) //Position: 0xCF8C / 53132
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = (UI_ISFOCUSED("HudGamerList") && NET_GET_PLAYMODE() == 3);
	bVar1 = (Function_492(2097152) && Function_486(512));
	bVar2 = ((bParam0 || bVar0) || bVar1);
	if (((bParam0 == Function_502(8192) || bVar0 == Function_502(4096)) || bVar1 == Function_502(1048576)) || bVar2 == Function_502(2097152))
	{
		if (bVar2)
		{
			UI_ENTER("Lobby_NewStyle");
			Function_446("LobbyNew_Replay", bParam0);
			if (!IS_PS3())
			{
				Function_446("LobbyNew_nav", bVar0);
				Function_446("LobbyNew_card", bVar0);
			}
			Function_446("LobbyNew_Toggle", bVar1);
		}
		else
		{
			Function_405();
		}
		Function_495(8192, bParam0);
		Function_495(4096, bVar0);
		Function_495(1048576, bVar1);
		Function_495(2097152, bVar2);
	}
	return;
}

void Function_446(char* cParam0, bool bParam1) //Position: 0xD091 / 53393
{
	if (bParam1)
	{
		UI_INCLUDE(cParam0);
	}
	else
	{
		UI_EXCLUDE(cParam0);
	}
	return;
}

void Function_447(int iParam0) //Position: 0xD0A9 / 53417
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (Function_126(1))
	{
		switch (StackVal)
		{
			case 0x00000001:
				Function_425("mp_lobby_vote_skip_passed");
				Function_444();
				break;
			
			case 0x00000002:
				Function_425("mp_lobby_vote_replay_passed");
				Function_444();
				break;
			
			case 0x00000003:
				Function_425("mp_lobby_vote_ready_passed");
				Function_444();
				break;
			
			default:
				Function_451();
				break;
		}
		return;
	}
	iVar4 = Function_450(&iVar0, &iVar1, &uVar3, &uVar2);
	if (Function_449())
	{
		Function_444();
	}
	else
	{
		Function_451();
	}
	if (!NET_IS_SESSION_HOST())
	{
		return;
	}
	if (iVar4 == 0)
	{
		if (StackVal != 0)
		{
			Function_504(&Local_91 + 32);
			Local_91.f_4 = iVar4;
			Function_495(128, 0);
		}
		return;
	}
	if (iParam0 == 0 && iVar4 != 3)
	{
		if (!Function_134() && Function_435(&Local_91 + 32))
		{
			Function_504(&Local_91 + 32);
			Function_495(128, 0);
		}
	}
	Local_91.f_4 = iVar4;
	if (iVar4 == 3)
	{
		if (Local_118.f_12 == 36)
		{
			if (!Function_134() && (iVar1 + iVar0) > NET_GET_SESSION_GAMER_COUNT())
			{
				if (Function_435(&Local_91 + 32))
				{
					if (Function_427(&Local_91 + 32) < 45.0f)
					{
						Function_432(&Local_91 + 32, 45.0f);
					}
				}
				else if (iParam0 == 0)
				{
					Function_432(&Local_91 + 32, 45.0f);
				}
			}
			else if (!Function_502(128) && iParam0 != 0)
			{
				Function_495(128, 1);
				Function_503(1, 1);
				if (Function_435(&Local_91 + 32))
				{
					Function_448(&Local_91 + 32);
					if (Function_427(&Local_91 + 32) < 10.0f)
					{
						Function_432(&Local_91 + 32, 10.0f);
					}
				}
				else
				{
					Function_432(&Local_91 + 32, 10.0f);
				}
			}
		}
	}
	else
	{
		Function_503(1, 1);
		Function_496(&Local_91 + 100);
		if (iVar4 == 1)
		{
			*(&Local_91 + 56) = { StackVal, StackVal, StackVal, Function_497(Local_91.f_104, &Local_91 + 88) };
			Function_432(&Local_91 + 44, 5.0f);
		}
		else if (iVar4 == 2)
		{
			Local_91.f_88 = (Local_91.f_88 - 1);
			*(&Local_91 + 56) = { StackVal, StackVal, StackVal, *(&Local_91 + 72) };
			if (Function_435(&Local_91 + 44))
			{
				if (Function_427(&Local_91 + 44) > 5.0f)
				{
					Function_432(&Local_91 + 44, 5.0f);
				}
			}
		}
	}
	return;
}

void Function_448(int iParam0) //Position: 0xD2E2 / 53986
{
	if (Function_435(iParam0))
	{
		if (Function_135(iParam0))
		{
			Function_429();
			iParam0->f_4 = (StackVal - NET_GET_NET_TIME());
			iParam0->f_8 = 0.0f;
			Function_26(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_449() //Position: 0xD3B2 / 54194
{
	if (Function_435(&Local_91 + 32))
	{
		return Function_427(&Local_91 + 32) >= 2.0f;
	}
	return 0;
}

int Function_450(var uParam0, var uParam1, int iParam2, int iParam3) //Position: 0xD3CD / 54221
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 0;
	*uParam1 = 0;
	*iParam2 = 0;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_160(iVar0))
		{
			switch (Function_443(iVar0))
			{
				case 0x00000001:
					*uParam0++;
					break;
				
				case 0x00000003:
					*uParam1++;
					break;
				
				case 0x00000002:
					*iParam2++;
					break;
				}
		}
		iVar0++;
	}
	iVar1 = NET_GET_SESSION_GAMER_COUNT();
	*iParam3 = (iVar1 / 2);
	if (*uParam1 >= *iParam3)
	{
		return 3;
	}
	if (*uParam0 >= *iParam3)
	{
		return 1;
	}
	if (*iParam2 >= *iParam3)
	{
		return 2;
	}
	return 0;
}

void Function_451() //Position: 0xD473 / 54387
{
	if (!Function_29(0x1000000))
	{
		Function_452();
	}
	Function_25(0x1000000, 1, 1);
	return;
}

void Function_452() //Position: 0xD492 / 54418
{
	Function_25(32768, 1, 0);
	return;
}

void Function_453() //Position: 0xD4A1 / 54433
{
	Function_421(4294967295, 0);
	return;
}

int Function_454(bool bParam0, int iParam1) //Position: 0xD4AC / 54444
{
	float fVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	
	if (!IS_OBJECT_VALID(StackVal))
	{
		return 0;
	}
	fVar0 = GET_CURRENT_GAME_TIME();
	bVar1 = false;
	if (IS_OBJECT_VALID(bParam0->f_12))
	{
		if (STREAMING_IS_WORLD_LOADED() || (fVar0 - bParam0->f_56) < 15.0f)
		{
			if (!IS_CAMERA_ACTIVE_ON_CHANNEL(StackVal, 0))
			{
				SET_CURRENT_CAMERA_ON_CHANNEL(StackVal, 0, 0.0f, 0, 0, 0, 0, 0, 0, 0);
			}
			Function_479(bParam0, bParam0->f_12);
			iVar8 = 0;
			while (iVar8 <= 38)
			{
				(*bParam0 + 188)[iVar8] = 0;
				iVar8++;
			}
			REFERENCE_OBJECT(StackVal);
			bParam0->f_12 = "";
			DISBAND_OBJECTSET(bParam0->f_184);
			DISBAND_OBJECTSET(bParam0->f_108);
			bParam0->f_88 = 2;
			bParam0->f_84 = 1;
			bParam0->f_76 = (15.0f * 5.0f);
			bParam0->f_92 = 0;
			bParam0->f_80 = 6;
			Function_478(bParam0);
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_POSITION(GET_GAME_CAMERA(), &vVar2);
			GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar5);
			STREAMING_LOAD_SCENE_EXT(vVar2, vVar5, 0);
			bVar1 = true;
		}
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		if (bParam0->f_88 == 2)
		{
			GET_CAMERA_POSITION(StackVal, &vVar2);
			if (VDIST(vVar2, *(bParam0 + 112)) < 1.0f)
			{
				SET_CAMERA_POSITION(StackVal, *(bParam0 + 112));
				SET_CAMERA_TARGET_POSITION(StackVal, *(bParam0 + 124), 0);
				*(bParam0 + 136) = { StackVal, StackVal, *(bParam0 + 124) };
			}
		}
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		return bVar1;
	}
	GET_OBJECT_POSITION(StackVal, &vVar9);
	if (StackVal || !IS_OBJECT_VALID(((StackVal && !GET_OBJECT_TYPE(VDIST(vVar9, *(bParam0 + 40)) < 150.0f) != 8) && !IS_OBJECT_VALID(bParam0->f_12))))
	{
		bParam0->f_12 = Function_476(bParam0, iParam1);
		if (IS_OBJECT_VALID(bParam0->f_12))
		{
			GET_OBJECT_POSITION(bParam0->f_12, &vVar12);
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_ORIENTATION(bParam0->f_12, &vVar15);
			STREAMING_LOAD_SCENE_EXT(vVar12, vVar15, 0);
			bParam0->f_56 = fVar0;
			bParam0->f_84 = 6;
			bParam0->f_92 = 1;
			bParam0->f_88 = 2;
			bParam0->f_80 = 0;
			Function_475(bParam0, 2, Function_573());
			Function_478(bParam0);
		}
	}
	Function_455(bParam0, fVar0, 3212836864, 3212836864);
	if (Function_273(StackVal, StackVal, *(bParam0 + 112)))
	{
	}
	if (Function_273(StackVal, StackVal, *(bParam0 + 124)))
	{
	}
	if (VDIST(*(bParam0 + 124), *(bParam0 + 136)) < 200.0f)
	{
		GET_CAMERA_POSITION(StackVal, &vVar2);
		GET_OBJECT_ORIENTATION(StackVal, &vVar5);
	}
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return bVar1;
}

void Function_455(bool bParam0, float fParam1, var uParam2, var uParam3) //Position: 0xD6E8 / 55016
{
	float fVar0;
	
	fVar0 = (1.0f / (fParam1 - bParam0->f_60));
	if (Function_474(bParam0))
	{
		Function_478(bParam0);
	}
	Function_461(bParam0);
	Function_459(bParam0, fVar0, uParam2);
	Function_456(bParam0, fVar0, uParam3);
	bParam0->f_60 = fParam1;
}

void Function_456(int iParam0, float fParam1, float fParam2) //Position: 0xD725 / 55077
{
	struct<9> Var0;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<9> Var12;
	
	bVar15 = Function_458(StackVal);
	switch (iParam0->f_92)
	{
		case 0x00000000:
		case 0x00000001:
			vVar12 = { StackVal, StackVal, *(iParam0 + 124) };
			iParam0->f_104 = 0.0f;
			break;
		
		default:
			if (!IS_ACTOR_VALID(bVar15))
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(bVar15))
			{
				return;
			}
			vVar0 = { StackVal, StackVal, *(iParam0 + 136) };
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam0 + 124), vVar0, StackVal) };
			fVar3 = VMAG(vVar0);
			if (fVar3 > 2.5f)
			{
				VSCALE(&vVar0, 0.975f);
			}
			else
			{
				fVar8 = Function_457(bVar15, 0);
				if (fParam2 < -1.0f)
				{
					fVar4 = fParam2;
					fVar6 = (((fParam2 + fVar3) - (iParam0->f_104 * 5.0f)) / 3.0f);
				}
				else
				{
					fVar4 = (fVar8 + 5.0f);
					fVar6 = ((((fVar8 * 2.0f) + fVar3) - (iParam0->f_104 * 5.0f)) / 3.0f);
				}
				iVar5 = (fVar4 / 3.0f);
				fVar7 = Function_265(FABS(fVar6), iVar5);
				if (fVar6 > 0.0f)
				{
					fVar7 = (fVar7 * -1.0f);
				}
				iParam0->f_104 = (iParam0->f_104 + (fVar7 / fParam1));
				if (iParam0->f_104 < fVar4)
				{
					iParam0->f_104 = fVar4;
				}
				else if (iParam0->f_104 < 0.01f && iParam0->f_104 > iParam0->f_100)
				{
					iParam0->f_104 = iParam0->f_100;
				}
				else if (iParam0->f_104 > fVar8)
				{
					iParam0->f_104 = (fVar8 * 1.1f);
					iParam0->f_104 = (iParam0->f_104 + (fVar7 / fParam1));
				}
				fVar9 = (iParam0->f_104 / fParam1);
				VNORMALIZE(&vVar0);
				if (fVar3 < fVar9)
				{
					VSCALE(&vVar0, (fVar3 - fVar9));
				}
				else
				{
					VSCALE(&vVar0, (fVar3 / 5.0f));
				}
			}
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 124), vVar0, StackVal) };
			*(iParam0 + 136) = { StackVal, StackVal, vVar0 };
			vVar12 = { StackVal, StackVal, *(iParam0 + 136) };
			break;
	}
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 172), vVar12, StackVal) };
	SET_CAMERA_TARGET_POSITION(StackVal, vVar12, 0);
	GET_CAMERA_POSITION(StackVal, &vVar0);
	fVar10 = ATAN_DEGREE(((vVar12.z - vVar0.z) / (vVar12.x - vVar0.x)));
	fVar11 = (fVar10 - iParam0->f_36);
	iParam0->f_36 = fVar10;
	fVar11 = fVar11;
	return;
}

float Function_457(bool bParam0, bool bParam1) //Position: 0xD90A / 55562
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_458(bool bParam0) //Position: 0xD929 / 55593
{
	int iVar0;
	
	switch (GET_OBJECT_TYPE(bParam0))
	{
		case 0x00000018:
			ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
			iVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
			break;
		
		case 0x0000000F:
			iVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
			break;
	}
	return iVar0;
}

void Function_459(int iParam0, float fParam1, float fParam2) //Position: 0xD967 / 55655
{
	float fVar0;
	vector3 vVar1;
	struct<5> Var4;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	
	bVar15 = Function_458(StackVal);
	switch (iParam0->f_92)
	{
		case 0x00000000:
		case 0x00000001:
			iParam0->f_100 = 0.0f;
			break;
		
		default:
			if (!IS_ACTOR_VALID(bVar15))
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(bVar15))
			{
				return;
			}
			GET_CAMERA_POSITION(StackVal, &vVar1);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam0 + 112), vVar1, StackVal) };
			fVar0 = VMAG(vVar1);
			if (fVar0 > 2.5f)
			{
				VSCALE(&vVar1, 0.975f);
			}
			else
			{
				fVar13 = Function_457(bVar15, 0);
				if (fParam2 >= -1.0f)
				{
					fParam2 = (fVar13 + 2.0f);
					fVar11 = ((fVar0 - (iParam0->f_100 * 5.0f)) / 6.0f);
				}
				else
				{
					fVar11 = ((fVar0 - (iParam0->f_100 * 2.0f)) / 3.0f);
				}
				fVar10 = Function_460(2.0f, (fParam2 / 3.0f));
				fVar12 = Function_265(FABS(fVar11), fVar10);
				if (fVar11 > 0.0f)
				{
					fVar12 = (fVar12 * -1.0f);
				}
				iParam0->f_100 = (iParam0->f_100 + (fVar12 / fParam1));
				if (iParam0->f_100 < fParam2)
				{
					iParam0->f_100 = fParam2;
				}
				else if (iParam0->f_100 > fVar13)
				{
					iParam0->f_100 = (iParam0->f_100 * 1.1f);
				}
				fVar14 = (iParam0->f_100 / fParam1);
				VNORMALIZE(&vVar1);
				if (fVar0 < fVar14)
				{
					VSCALE(&vVar1, (fVar0 - fVar14));
				}
				else
				{
					vVar1 = { 0.0f, 0.0f, 0.0f };
				}
			}
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 112), vVar1, StackVal) };
			if (FIND_GROUND_INTERSECTION(&vVar1, 5.0f, &Var4, &uVar7))
			{
				if ((StackVal + 0.5f) < vVar1.y)
				{
					vVar1.f_4 = (StackVal + 0.5f);
				}
			}
			SET_CAMERA_POSITION(StackVal, vVar1);
			break;
	}
	return;
}

float Function_460(int iParam0, int iParam1) //Position: 0xDAE2 / 56034
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_461(bool bParam0) //Position: 0xDAF5 / 56053
{
	vector3 vVar0;
	vector3 vVar3;
	
	DISBAND_OBJECTSET(bParam0->f_108);
	switch (bParam0->f_92)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(StackVal, bParam0 + 112);
			GET_OBJECT_AXIS(StackVal, &vVar0, 2);
			VNORMALIZE(&vVar0);
			VSCALE(&vVar0, -30.0f);
			*(bParam0 + 124) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *(bParam0 + 112), StackVal) };
			break;
		
		case 0x00000003:
			if (bParam0->f_164 + 0.66f) > GET_CURRENT_GAME_TIME()
			{
				Function_471(StackVal, bParam0->f_108, 10.0f);
				Function_469(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam0->f_164 + 0.66f) > GET_CURRENT_GAME_TIME()
			{
				Function_471(StackVal, bParam0->f_108, 5.0f);
				Function_468(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000004:
			if (bParam0->f_164 + 0.66f) > GET_CURRENT_GAME_TIME()
			{
				Function_471(StackVal, bParam0->f_108, 5.0f);
				Function_466(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000005:
		case 0x00000001:
			Function_471(StackVal, bParam0->f_108, 15.0f);
			Function_462(StackVal, bParam0, bParam0 + 112, bParam0 + 124);
			break;
		
		default:
			GET_CAMERA_POSITION(StackVal, &vVar3);
			GET_OBJECT_POSITION(StackVal, bParam0 + 124);
			(bParam0 + 124)->f_4 = (StackVal + 1.5f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(bParam0 + 124), vVar3, StackVal) };
			VNORMALIZE(bParam0 + 112);
			VSCALE(bParam0 + 112, 3.0f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam0 + 124), *(bParam0 + 112), StackVal) };
			break;
	}
	return;
}

void Function_462(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xDC90 / 56464
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_458(bParam1);
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3))
	{
		return;
	}
	GET_CAMERA_POSITION(StackVal, &vVar0);
	Function_463(StackVal, StackVal, 1, bVar3, vVar0, uParam2, uParam3);
	if (Function_273(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_463(float fParam0, bool bParam1, vector3 vParam2, var uParam5, var uParam6) //Position: 0xDCE8 / 56552
{
	struct<5> Var0;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	vector3 vVar10;
	vector3 vVar13[8];
	var uVar38;
	var uVar41;
	float fVar44;
	vector3 vVar45;
	int iVar48;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "head", &Var0))
	{
		GET_OBJECT_POSITION(bParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "pelvis", &Var3))
	{
		GET_OBJECT_POSITION(bParam1, &Var3);
		Var3.f_4 = (StackVal + 1.0f);
	}
	switch (fParam0)
	{
		case 0x00000000:
			*uParam6 = { 0.0f, 0.0f, -Function_460(0.5f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 1.25f;
			break;
		
		case 0x00000001:
			*uParam6 = { 0.0f, 0.0f, -Function_460(0.7f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 2.75f;
			break;
		
		case 0x00000002:
			*uParam6 = { 0.0f, 0.0f, -Function_460(1.0f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 4.25f;
			break;
	}
	*uParam6 = { 0.0f, 0.0f, -Function_460(0.7f, (VDIST(Var0, vParam2) / 3.0f)) };
	bVar8 = true;
	if (Function_166())
	{
		if (NET_IS_IN_SESSION())
		{
			if (IS_ACTOR_PLAYER(bParam1) && !IS_ACTOR_LOCAL_PLAYER(bParam1))
			{
				bVar9 = GET_ACTOR_SLOT(bParam1);
				if (IS_SLOT_VALID(bVar9))
				{
					if (GET_SLOT_POSITION(bVar9, &vVar10))
					{
						fVar7 = Function_465(StackVal, StackVal, vVar10, bParam1);
					}
				}
			}
		}
	}
	if (bVar8)
	{
		fVar7 = GET_HEADING(bParam1);
	}
	ROTATE_VECTOR_XZ(uParam6, fVar7, 0);
	*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
	switch (fParam0)
	{
		case 0x00000000:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
		
		case 0x00000001:
			uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
			break;
		
		case 0x00000002:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
	}
	if (FIND_INTERSECTION(&Var0, uParam6, &uVar38, &uVar41, 1, 4294967295, 4194304))
	{
		*uParam6 = { 0.0f, 0.0f, 0.6f };
		fVar7 = GET_HEADING(bParam1);
		ROTATE_VECTOR_XZ(uParam6, fVar7, 0);
		*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
		uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
	}
	fVar44 = 60.0f;
	vVar13[23] = { (-1.0f * fVar6), 0.0f, 0.0f };
	vVar13[33] = { (-1.0f * fVar6), 0.0f, 0.0f };
	vVar13[63] = { fVar6, 0.0f, 0.0f };
	vVar13[73] = { fVar6, 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar13[23]), (fVar7 + fVar44), 0);
	ROTATE_VECTOR_XZ(&(vVar13[33]), (fVar7 + fVar44), 0);
	ROTATE_VECTOR_XZ(&(vVar13[63]), (fVar7 + (-1.0f * fVar44)), 0);
	ROTATE_VECTOR_XZ(&(vVar13[73]), (fVar7 + (-1.0f * fVar44)), 0);
	vVar45 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(&vVar45, 0.5f);
	iVar48 = 0;
	while (iVar48 <= vVar13)
	{
		if (!Function_273(StackVal, StackVal, vVar13[iVar483]))
		{
			vVar13[iVar483] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar45, vVar13[iVar483], StackVal) };
			if (FIND_INTERSECTION(&(vVar13[iVar483]), uParam6, &uVar38, &uVar41, 1, 4294967295, 4194304))
			{
				vVar13[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		if (!Function_273(StackVal, StackVal, vVar13[iVar483]))
		{
			if (FIND_INTERSECTION(&(vVar13[iVar483]), &Var0, &uVar38, &uVar41, 1, 4294967295, 4194304))
			{
				vVar13[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar48++;
	}
	if (!Function_273(StackVal, StackVal, vVar13[03]))
	{
		vVar13[03].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar13[13]))
	{
		vVar13[13].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar13[23]))
	{
		vVar13[23].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar13[33]))
	{
		vVar13[33].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar13[43]))
	{
		vVar13[43].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar13[53]))
	{
		vVar13[53].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar13[63]))
	{
		vVar13[63].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar13[73]))
	{
		vVar13[73].f_4 = StackVal;
	}
	Function_464(StackVal, StackVal, vParam2, &vVar13);
	*uParam5 = { StackVal, StackVal, Function_464(StackVal, StackVal, vParam2, &vVar13) };
	return 1;
}

vector3 Function_464(vector3 vParam0, int iParam3) //Position: 0xE0CF / 57551
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	
	fVar4 = 1E+08.0f;
	iVar3 = 0;
	while (iVar3 <= *iParam3)
	{
		if (!Function_273(StackVal, StackVal, *iParam3[iVar33]))
		{
			if (VDIST(*iParam3[iVar33], vParam0) > fVar4)
			{
				fVar4 = VDIST(*iParam3[iVar33], vParam0);
				vVar0 = { StackVal, StackVal, *iParam3[iVar33] };
			}
		}
		iVar3++;
	}
	return StackVal, StackVal, vVar0;
}

var Function_465(vector3 vParam0, bool bParam3) //Position: 0xE137 / 57655
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam3))
	{
		GET_POSITION(bParam3, &vVar0);
		Function_220(StackVal, StackVal, StackVal, StackVal, vParam0, vVar0, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_466(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xE167 / 57703
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_458(bParam1);
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3))
	{
		return;
	}
	if (bParam4)
	{
		GET_CAMERA_POSITION(StackVal, &vVar0);
		Function_467(StackVal, StackVal, 1, bVar3, vVar0, uParam2, uParam3);
	}
	if (Function_273(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_467(float fParam0, bool bParam1, vector3 vParam2, var uParam5, var uParam6) //Position: 0xE1C4 / 57796
{
	struct<5> Var0;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar16[8];
	var uVar41;
	var uVar44;
	float fVar47;
	int iVar48;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "head", &Var0))
	{
		PRINTSTRING("No head bone - getting base pos + offset");
		GET_OBJECT_POSITION(bParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "pelvis", &Var3))
	{
		PRINTSTRING("No hip bone - getting base pos + offset");
		GET_OBJECT_POSITION(bParam1, &Var3);
		Var3.f_4 = (StackVal + 1.0f);
	}
	bVar11 = true;
	if (Function_166())
	{
		if (NET_IS_IN_SESSION())
		{
			if (IS_ACTOR_PLAYER(bParam1) && !IS_ACTOR_LOCAL_PLAYER(bParam1))
			{
				bVar12 = GET_ACTOR_SLOT(bParam1);
				if (IS_SLOT_VALID(bVar12))
				{
					if (GET_SLOT_POSITION(bVar12, &vVar13))
					{
						fVar10 = Function_465(StackVal, StackVal, vVar13, bParam1);
						bVar11 = false;
					}
				}
			}
		}
	}
	if (bVar11)
	{
		fVar10 = GET_HEADING(bParam1);
	}
	switch (fParam0)
	{
		case 0x00000000:
			vVar6 = { 0.0f, 0.0f, -0.45f };
			fVar9 = 0.75f;
			break;
		
		case 0x00000001:
			vVar6 = { 0.0f, 0.0f, -0.6f };
			fVar9 = 1.825f;
			break;
		
		case 0x00000002:
			vVar6 = { 0.0f, 0.0f, -0.9f };
			fVar9 = 2.5f;
			break;
	}
	*uParam6 = { StackVal, StackVal, vVar6 };
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("Before Rotate");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	ROTATE_VECTOR_XZ(uParam6, fVar10, 0);
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After Rotate");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After addhead");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	switch (fParam0)
	{
		case 0x00000000:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
		
		case 0x00000001:
			uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
			break;
		
		case 0x00000002:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
	}
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After Adjust Y for shot type");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	if (FIND_INTERSECTION(&Var0, uParam6, &uVar41, &uVar44, 1, 4294967295, 4194304))
	{
		*uParam6 = { StackVal, StackVal, vVar6 };
		uParam6->f_8 = (StackVal * -1.0f);
		fVar10 = GET_HEADING(bParam1);
		ROTATE_VECTOR_XZ(uParam6, fVar10, 0);
		*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
		uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
	}
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After Intersect Adjust");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	fVar47 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	vVar16[03] = { (-1.0f * (fVar9 - 0.05f)), 0.0f, 0.0f };
	vVar16[13] = { (-1.0f * (fVar9 - 0.05f)), 0.0f, 0.0f };
	vVar16[23] = { (-1.0f * (fVar9 + 0.05f)), 0.0f, 0.0f };
	vVar16[33] = { (-1.0f * (fVar9 + 0.05f)), 0.0f, 0.0f };
	vVar16[43] = { (fVar9 - 0.05f), 0.0f, 0.0f };
	vVar16[53] = { (fVar9 - 0.05f), 0.0f, 0.0f };
	vVar16[63] = { (fVar9 + 0.05f), 0.0f, 0.0f };
	vVar16[73] = { (fVar9 + 0.05f), 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar16[03]), (fVar10 + fVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[13]), (fVar10 + fVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[23]), (fVar10 + (-1.0f * fVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[33]), (fVar10 + (-1.0f * fVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[43]), (fVar10 + fVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[53]), (fVar10 + fVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[63]), (fVar10 + (-1.0f * fVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[73]), (fVar10 + (-1.0f * fVar47)), 0);
	iVar48 = 0;
	while (iVar48 <= vVar16)
	{
		vVar16[iVar483] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*uParam6, vVar16[iVar483], StackVal) };
		if (FIND_INTERSECTION(&(vVar16[iVar483]), uParam6, &uVar41, &uVar44, 1, 4294967295, 4194304))
		{
			vVar16[iVar483] = { 0.0f, 0.0f, 0.0f };
		}
		if (!Function_273(StackVal, StackVal, vVar16[iVar483]))
		{
			if (FIND_INTERSECTION(&(vVar16[iVar483]), &Var0, &uVar41, &uVar44, 1, 4294967295, 4194304))
			{
				vVar16[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar48++;
	}
	if (!Function_273(StackVal, StackVal, vVar16[03]))
	{
		vVar16[03].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar16[13]))
	{
		vVar16[13].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar16[23]))
	{
		vVar16[23].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar16[33]))
	{
		vVar16[33].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar16[43]))
	{
		vVar16[43].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar16[53]))
	{
		vVar16[53].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar16[63]))
	{
		vVar16[63].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar16[73]))
	{
		vVar16[73].f_4 = StackVal;
	}
	Function_464(StackVal, StackVal, vParam2, &vVar16);
	*uParam5 = { StackVal, StackVal, Function_464(StackVal, StackVal, vParam2, &vVar16) };
	return 1;
}

void Function_468(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xE7A7 / 59303
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_458(bParam1);
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3))
	{
		return;
	}
	if (bParam4)
	{
		GET_CAMERA_POSITION(StackVal, &vVar0);
		Function_467(StackVal, StackVal, 1, bVar3, vVar0, uParam2, uParam3);
	}
	if (Function_273(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

void Function_469(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xE804 / 59396
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = Function_458(bParam1);
	bVar4 = AI_GET_ACTOR_CONVERSATION_TARGET(bVar3);
	if (!IS_ACTOR_VALID(bVar3) || !IS_ACTOR_VALID(bVar4))
	{
		Function_466(uParam0, bParam1, uParam2, uParam3, bParam4);
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3) || IS_ACTOR_VEHICLE(bVar4))
	{
		return;
	}
	if (bParam4)
	{
		GET_CAMERA_POSITION(StackVal, &vVar0);
		Function_470(StackVal, StackVal, 1, bVar3, bVar4, vVar0, uParam2, uParam3);
	}
	if (Function_273(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_470(int iParam0, bool bParam1, bool bParam2, vector3 vParam3, var uParam6, var uParam7) //Position: 0xE884 / 59524
{
	struct<5> Var0;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	float fVar17;
	float fVar18;
	vector3 vVar19[8];
	var uVar44;
	var uVar47;
	int iVar50;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "head", &Var0))
	{
		GET_OBJECT_POSITION(bParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "pelvis", &Var3))
	{
		GET_OBJECT_POSITION(bParam1, &Var3);
		Var3.f_4 = (StackVal + 1.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam2, "head", &vVar6))
	{
		GET_OBJECT_POSITION(bParam2, &vVar6);
		vVar6.f_4 = (vVar6.y + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam2, "pelvis", &vVar9))
	{
		GET_OBJECT_POSITION(bParam2, &vVar9);
		vVar9.f_4 = (vVar9.y + 1.0f);
	}
	fVar12 = VDIST(Var0, vVar6);
	switch (iParam0)
	{
		case 0x00000000:
			fVar13 = 0.75f;
			break;
		
		case 0x00000001:
			fVar13 = 1.625f;
			break;
		
		case 0x00000002:
			fVar13 = 2.5f;
			break;
	}
	*uParam7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(uParam7, 0.5f);
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar6, StackVal) };
	VSCALE(&vVar14, 0.5f);
	*uParam7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar14, *uParam7, StackVal) };
	VSCALE(uParam7, 0.5f);
	fVar17 = GET_HEADING(bParam1);
	fVar18 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	vVar19[03] = { ((-1.0f * fVar13) * fVar12), 0.0f, 0.0f };
	vVar19[13] = { ((-1.0f * fVar13) * fVar12), 0.0f, 0.0f };
	vVar19[23] = { ((-1.0f * fVar13) * fVar12), 0.0f, 0.0f };
	vVar19[33] = { ((-1.0f * fVar13) * fVar12), 0.0f, 0.0f };
	vVar19[43] = { (fVar13 * fVar12), 0.0f, 0.0f };
	vVar19[53] = { (fVar13 * fVar12), 0.0f, 0.0f };
	vVar19[63] = { (fVar13 * fVar12), 0.0f, 0.0f };
	vVar19[73] = { (fVar13 * fVar12), 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar19[03]), (fVar17 + fVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[13]), (fVar17 + fVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[23]), (fVar17 + (-1.0f * fVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[33]), (fVar17 + (-1.0f * fVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[43]), (fVar17 + fVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[53]), (fVar17 + fVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[63]), (fVar17 + (-1.0f * fVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[73]), (fVar17 + (-1.0f * fVar18)), 0);
	iVar50 = 0;
	while (iVar50 <= vVar19)
	{
		vVar19[iVar503] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*uParam7, vVar19[iVar503], StackVal) };
		if (FIND_INTERSECTION(&(vVar19[iVar503]), uParam7, &uVar44, &uVar47, 1, 4294967295, 4194304))
		{
			vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
		}
		if (!Function_273(StackVal, StackVal, vVar19[iVar503]))
		{
			if (FIND_INTERSECTION(&(vVar19[iVar503]), &Var0, &uVar44, &uVar47, 1, 4294967295, 4194304))
			{
				vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar50++;
	}
	if (!Function_273(StackVal, StackVal, vVar19[03]))
	{
		vVar19[03].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar19[13]))
	{
		vVar19[13].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar19[23]))
	{
		vVar19[23].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar19[33]))
	{
		vVar19[33].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar19[43]))
	{
		vVar19[43].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar19[53]))
	{
		vVar19[53].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar19[63]))
	{
		vVar19[63].f_4 = StackVal;
	}
	if (!Function_273(StackVal, StackVal, vVar19[73]))
	{
		vVar19[73].f_4 = StackVal;
	}
	Function_464(StackVal, StackVal, vParam3, &vVar19);
	*uParam6 = { StackVal, StackVal, Function_464(StackVal, StackVal, vParam3, &vVar19) };
	return 1;
}

void Function_471(int iParam0, bool bParam1, int iParam2) //Position: 0xEC08 / 60424
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(Global_6289))
	{
		iVar0 = CREATE_OBJECT_ITERATOR(Global_6289);
		Function_473(iVar0, bParam1, 2, iParam2);
		Function_472(iVar0, iParam0);
		Function_473(iVar0, bParam1, 1, iParam2);
		Function_472(iVar0, iParam0);
		Function_473(iVar0, bParam1, 3, iParam2);
		Function_472(iVar0, iParam0);
		Function_473(iVar0, bParam1, 4, iParam2);
		Function_472(iVar0, iParam0);
		Function_473(iVar0, bParam1, 5, iParam2);
		Function_472(iVar0, iParam0);
		DESTROY_ITERATOR(iVar0);
	}
	return;
}

void Function_472(int iParam0, int iParam1) //Position: 0xEC7C / 60540
{
	bool bVar0;
	
	bVar0 = START_OBJECT_ITERATOR(iParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar0, iParam1))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, iParam1);
		}
		bVar0 = OBJECT_ITERATOR_NEXT(iParam0);
	}
	return;
}

void Function_473(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0xECAE / 60590
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	switch (iParam2)
	{
		case 0x00000001:
			ITERATE_IN_LAYOUT(iParam0, Global_6289);
			ITERATE_ON_OBJECT_TYPE(iParam0, 24);
			ITERATE_IN_SPHERE(iParam0, vVar0, uParam3);
			break;
		
		case 0x00000002:
			ITERATE_IN_LAYOUT(iParam0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(iParam0, 15);
			ITERATE_IN_SPHERE(iParam0, vVar0, uParam3);
			break;
		
		case 0x00000005:
			ITERATE_IN_LAYOUT(iParam0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(iParam0, 15);
			ITERATE_IN_SPHERE(iParam0, vVar0, uParam3);
			break;
		
		case 0x00000004:
			ITERATE_IN_LAYOUT(iParam0, Global_28841);
			ITERATE_ON_OBJECT_TYPE(iParam0, 15);
			ITERATE_IN_SPHERE(iParam0, vVar0, uParam3);
			break;
		
		case 0x00000003:
			ITERATE_IN_LAYOUT(iParam0, Global_6287);
			ITERATE_ON_OBJECT_TYPE(iParam0, 24);
			ITERATE_IN_SPHERE(iParam0, vVar0, uParam3);
			break;
		
		case 0x00000006:
			ITERATE_IN_LAYOUT(iParam0, Global_30616);
			ITERATE_ON_OBJECT_TYPE(iParam0, 8);
			ITERATE_ON_PARTIAL_NAME(iParam0, "nvista_cam");
			break;
		
		default:
			break;
	}
}

bool Function_474(int iParam0) //Position: 0xEDA0 / 60832
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	float fVar7;
	
	bVar0 = Function_458(StackVal);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bVar0))
	{
		return 0;
	}
	switch (iParam0->f_92)
	{
		case 0x00000003:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 2;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			if (!AI_IS_ACTOR_SOCIALIZING(bVar0) && Function_457(bVar0, 0) < 0.2f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			if (!AI_IS_ACTOR_SOCIALIZING(bVar0) && Function_457(bVar0, 0) > 0.2f)
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			fVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((fVar7 - iParam0->f_32)) / 360.0f)) < 0.375f)
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			if (AI_IS_ACTOR_SOCIALIZING(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 3;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)) && Function_457(bVar0, 0) < 0.2f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)) && Function_457(bVar0, 0) > 0.2f)
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			fVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((fVar7 - iParam0->f_32)) / 360.0f)) < 0.375f)
			{
				return 1;
			}
			break;
		
		case 0x00000004:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 2;
				return 1;
			}
			if (AI_IS_ACTOR_SOCIALIZING(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 3;
				return 1;
			}
			if (Function_457(bVar0, 0) < 0.3f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			fVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((fVar7 - iParam0->f_32)) / 360.0f)) < 0.375f)
			{
				return 1;
			}
			break;
		
		case 0x00000006:
		case 0x00000005:
		case 0x00000007:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 2;
				return 1;
			}
			if (AI_IS_ACTOR_SOCIALIZING(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 3;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			if (Function_457(bVar0, 0) > 0.2f)
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			break;
		
		case 0x00000000:
		case 0x00000001:
			return 0;
			break;
		
		default:
			LOG_ERROR("Unauthored case in IDLE_CAM_CHECK_TARGET_BEHAVIOR");
			break;
	}
	return 0;
}

void Function_475(bool bParam0, int iParam1, bool bParam2) //Position: 0xF0E2 / 61666
{
	int iVar0;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		DEREFERENCE_OBJECT(StackVal);
		REMOVE_CAMERA_COLLISION_EXCLUSION(StackVal, StackVal);
	}
	bParam0->f_8 = bParam2;
	bParam0->f_64 = GET_CURRENT_GAME_TIME();
	bParam0->f_68 = GET_CURRENT_GAME_TIME();
	bParam0->f_76 = 15.0f;
	bParam0->f_88 = iParam1;
	REFERENCE_OBJECT(StackVal);
	iVar0 = 31;
	ADD_CAMERA_COLLISION_EXCLUSION(StackVal, StackVal, iVar0);
	if (!IS_OBJECT_IN_OBJECTSET(StackVal, bParam0->f_184))
	{
		ADD_OBJECT_TO_OBJECTSET(StackVal, bParam0->f_184);
	}
	bParam0->f_80 = bParam0->f_84;
	bParam0->f_96 = 0;
	return;
}

var Function_476(bool bParam0, int iParam1) //Position: 0xF167 / 61799
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	int iVar18[25];
	struct<9> Var44;
	bool bVar53;
	
	if (Global_29007 != 2)
	{
		iVar2 = CREATE_OBJECT_ITERATOR(*bParam0);
		Function_473(StackVal, iVar2, 6, bParam0->f_76);
		bVar1 = START_OBJECT_ITERATOR(iVar2);
		fVar3 = 1E+08.0f;
		GET_CAMERA_POSITION(StackVal, &vVar7);
		while (IS_OBJECT_VALID(bVar1))
		{
			if (Function_477(bParam0, bVar1, iParam1))
			{
				GET_OBJECT_POSITION(bVar1, &vVar4);
				if (VDIST(vVar4, vVar7) > fVar3)
				{
					fVar3 = VDIST(vVar4, vVar7);
					bVar0 = bVar1;
				}
			}
			bVar1 = OBJECT_ITERATOR_NEXT(iVar2);
		}
		DESTROY_ITERATOR(iVar2);
	}
	else
	{
		iVar10 = GET_NUM_WORLD_CAMERAS();
		if (iVar10 >= 0)
		{
			if (bParam0->f_148)
			{
				bVar48 = CEIL((Global_34574 / 512.0f));
				bVar49 = CEIL((StackVal / 512.0f));
				iVar47 = 0;
				while (iVar47 <= iVar10)
				{
					if (iVar52 <= 25)
					{
						GET_WORLD_CAMERA_AT_INDEX(iVar47, &vVar44, &vVar14);
						bVar50 = CEIL((vVar44.x / 512.0f));
						bVar51 = CEIL((vVar44.z / 512.0f));
						if (bVar50 != bVar48 && bVar51 != bVar49)
						{
							iVar18[iVar52] = iVar47;
							iVar52++;
						}
					}
					iVar47++;
				}
				if (iVar52 <= bParam0->f_152)
				{
					bParam0->f_152 = iVar52;
				}
				if (GET_WORLD_CAMERA_AT_INDEX(iVar18[bParam0->f_152], &vVar11, &vVar14))
				{
					bVar17 = true;
				}
			}
			else if (GET_CLOSEST_WORLD_CAMERA(&Global_34574, 256.0f, &vVar11, &vVar14))
			{
				bVar17 = true;
			}
			if (bVar17)
			{
				VSCALE(&vVar14, (360.0f / 6.28f));
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					bParam0->f_348 = CREATE_POINT_IN_LAYOUT(Global_30616, Function_222(), vVar11, vVar14);
				}
				else
				{
					bVar53 = FIND_OBJECT_IN_LAYOUT(*bParam0, "TempVistaPoint");
					if (IS_OBJECT_VALID(bVar53))
					{
						DESTROY_OBJECT(bVar53);
					}
					bParam0->f_348 = CREATE_POINT_IN_LAYOUT(*bParam0, "TempVistaPoint", vVar11, vVar14);
				}
				if (IS_OBJECT_VALID(bParam0->f_348))
				{
					GET_OBJECT_ORIENTATION(bParam0->f_348, &vVar14);
					bVar0 = bParam0->f_348;
				}
			}
		}
	}
	if (!IS_OBJECT_VALID(bVar0))
	{
	}
	return bVar0;
}

bool Function_477(int iParam0, bool bParam1, bool bParam2) //Position: 0xF368 / 62312
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	if (Global_30842[33])
	{
		PRINTSTRING(GET_OBJECT_NAME(bParam1));
		PRINTSTRING(" : ");
		PRINTVECTOR(vVar0);
		PRINTSTRING(" - ");
		PRINTFLOAT(VDIST(vVar0, *(iParam0 + 40)));
		PRINTNL();
	}
	if (StackVal == bParam1)
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam1, iParam0->f_184))
	{
		return 0;
	}
	if (VDIST(vVar0, *(iParam0 + 40)) < 150.0f && !bParam2)
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return 0;
	}
	return 1;
}

void Function_478(bool bParam0) //Position: 0xF3F5 / 62453
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	var uVar7;
	
	DISBAND_OBJECTSET(bParam0->f_108);
	bVar6 = Function_458(StackVal);
	if (IS_ACTOR_VALID(bVar6))
	{
		GET_OBJECT_NAMED_BONE_POSITION(bVar6, "pelvis", bParam0 + 20);
		GET_OBJECT_NAMED_BONE_ORIENTATION(bVar6, "pelvis", &uVar7);
		bParam0->f_32 = UNK_0x9C40E671(&uVar7);
	}
	else
	{
		GET_OBJECT_POSITION(StackVal, bParam0 + 20);
		bParam0->f_32 = 0.0f;
	}
	switch (bParam0->f_92)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(StackVal, bParam0 + 112);
			GET_OBJECT_AXIS(StackVal, &vVar0, 2);
			VNORMALIZE(&vVar0);
			VSCALE(&vVar0, -30.0f);
			*(bParam0 + 124) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *(bParam0 + 112), StackVal) };
			break;
		
		case 0x00000003:
			Function_471(StackVal, bParam0->f_108, 10.0f);
			Function_469(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000002:
			Function_471(StackVal, bParam0->f_108, 5.0f);
			Function_468(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000004:
			Function_471(StackVal, bParam0->f_108, 5.0f);
			Function_466(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000005:
		case 0x00000001:
			Function_471(StackVal, bParam0->f_108, 15.0f);
			Function_462(StackVal, bParam0, bParam0 + 112, bParam0 + 124);
			break;
		
		default:
			GET_CAMERA_POSITION(StackVal, &vVar3);
			GET_OBJECT_POSITION(StackVal, bParam0 + 124);
			(bParam0 + 124)->f_4 = (StackVal + 1.5f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(bParam0 + 124), vVar3, StackVal) };
			VNORMALIZE(bParam0 + 112);
			VSCALE(bParam0 + 112, 3.0f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam0 + 124), *(bParam0 + 112), StackVal) };
			break;
	}
	return;
}

void Function_479(bool bParam0, bool bParam1) //Position: 0xF5AF / 62895
{
	if (IS_OBJECT_VALID(bParam1))
	{
		bParam0->f_92 = 0;
		Function_475(bParam0, 2, bParam1);
		Function_478(bParam0);
	}
	else
	{
		bParam0->f_84 = 6;
		bParam0->f_92 = 1;
		bParam0->f_88 = 2;
		bParam0->f_80 = 0;
		Function_475(bParam0, 2, Function_573());
		Function_478(bParam0);
	}
	DISBAND_OBJECTSET(bParam0->f_108);
	DISBAND_OBJECTSET(bParam0->f_184);
	bParam0->f_84 = 1;
	return;
}

void Function_480() //Position: 0xF607 / 62983
{
	FLASH_SET_INT("popup", "message[2].visibility", 0);
	FLASH_SET_INT("popup", "message[2].refresh", 1);
	return;
}

void Function_481() //Position: 0xF654 / 63060
{
	if (!Function_29(4))
	{
		Function_452();
	}
	Function_25(4, 1, 1);
	return;
}

var Function_482() //Position: 0xF66B / 63083
{
	if (Function_326(&Global_79349))
	{
		return LAUNCH_NEW_SCRIPT(GET_ASSET_NAME(Global_79349.f_24, 4), 0);
	}
	Function_483(1);
	return "";
}

void Function_483(bool bParam0) //Position: 0xF693 / 63123
{
	Function_485(8, bParam0);
	return;
}

void Function_484() //Position: 0xF6A0 / 63136
{
	Function_425(Function_222());
	return;
}

void Function_485(int iParam0, bool bParam1) //Position: 0xF6AC / 63148
{
	if (bParam1)
	{
		Function_27(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_26(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_486(int iParam0) //Position: 0xF6D4 / 63188
{
	return Function_15(StackVal, iParam0);
}

void Function_487(int iParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xF6E7 / 63207
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	bool bVar16;
	
	STREAMING_SET_POI_LIMIT(2);
	iParam0->f_184 = CREATE_OBJECTSET_IN_LAYOUT("idleCamExclusions", *iParam0, 4294967295, 1);
	iParam0->f_108 = CREATE_OBJECTSET_IN_LAYOUT("idleCamFraming", *iParam0, 4294967295, 1);
	iParam0->f_52 = GET_CURRENT_GAME_TIME();
	iParam0->f_60 = GET_CURRENT_GAME_TIME();
	iParam0->f_88 = 2;
	iParam0->f_80 = 6;
	iParam0->f_4 = GET_GAME_CAMERA();
	*(iParam0 + 40) = { StackVal, StackVal, Global_34574 };
	*(iParam0 + 136) = { StackVal, StackVal, Global_34574 };
	(iParam0 + 136)->f_4 = (StackVal + 1.15f);
	iParam0->f_156 = 1;
	iParam0->f_160 = 45.0f;
	iParam0->f_164 = GET_CURRENT_GAME_TIME();
	iParam0->f_84 = 6;
	iParam0->f_4 = CREATE_CAMERA_IN_LAYOUT(*iParam0, "idlecam", 0);
	INIT_CAMERA_FROM_CHANNEL(StackVal, 0);
	iParam0->f_8 = "";
	iParam0->f_12 = Function_476(iParam0, uParam2);
	if (!IS_OBJECT_VALID(iParam0->f_12) && bParam3)
	{
		vVar0 = { 0.0f, 30.0f, 50.0f };
		fVar6 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		ROTATE_VECTOR_XZ(&vVar0, fVar6, 0);
		GET_CAMERA_POSITION(StackVal, &vVar3);
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
		vVar7 = { -20.0f, fVar6, 0.0f };
		iParam0->f_12 = FIND_OBJECT_IN_LAYOUT(*iParam0, "ntempVista");
		if (IS_OBJECT_VALID(iParam0->f_12))
		{
			DESTROY_OBJECT(iParam0->f_12);
		}
		iParam0->f_12 = CREATE_POINT_IN_LAYOUT(*iParam0, "ntempVista", vVar0, vVar7);
	}
	iParam0->f_16 = _AIATTENTIONATTRACTOR(*iParam0, *(iParam0 + 112), 1045220557, 1065353216, 0, 0);
	ATTACH_OBJECTS(StackVal, iParam0->f_16, "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	bVar16 = Function_573();
	STREAMING_SET_CUTSCENE_MODE(1);
	if (IS_ACTOR_VALID(bVar16))
	{
		ACTOR_HOLSTER_WEAPON(bVar16, 1);
		if (!IS_OBJECT_VALID(iParam0->f_12))
		{
			GET_OBJECT_POSITION(bVar16, &vVar10);
			iParam0->f_92 = 1;
			iParam0->f_88 = 2;
			iParam0->f_80 = 0;
			Function_475(iParam0, 2, bVar16);
			Function_478(iParam0);
		}
	}
	GET_OBJECT_POSITION(iParam0->f_12, &vVar10);
	GET_OBJECT_ORIENTATION(iParam0->f_12, &vVar13);
	STREAMING_LOAD_SCENE_EXT(vVar10, vVar13, 1);
	if (bParam3)
	{
		STREAMING_OVERRIDE_MAIN_POI(vVar10, vVar13);
	}
	iParam0->f_56 = GET_CURRENT_GAME_TIME();
	*(iParam0 + 172) = { 0.0f, 0.0f, 0.0f };
	if (bParam1)
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(StackVal, 0, 0.0f, 0, 0, 0, 0, 0, 0, 0);
	}
	PREVENT_DESPAWN_SET_SPHERE(Global_34574, 30.0f);
}

bool Function_488(int iParam0, bool bParam1) //Position: 0xF931 / 63793
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_489(int iParam0) //Position: 0xF951 / 63825
{
	return Local_91.f_96 < iParam0;
}

void Function_490(int iParam0) //Position: 0xF95E / 63838
{
	Function_36(&Global_83864 + 1252, iParam0);
	return;
}

void Function_491(int iParam0) //Position: 0xF970 / 63856
{
	Function_38(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_492(int iParam0) //Position: 0xF9C9 / 63945
{
	return Function_426(&Global_79349, iParam0);
}

void Function_493(var uParam0, int iParam1) //Position: 0xF9D8 / 63960
{
	*uParam0 = *iParam1;
	return;
}

bool Function_494(char* cParam0, int iParam1, bool bParam2) //Position: 0xF9E4 / 63972
{
	char* cVar0[64];
	
	if (UNK_0xFAD5A270(cParam0, iParam1))
	{
		if (bParam2)
		{
			if (iParam1->f_40 == 4294967294)
			{
				iParam1->f_40 = Function_179(StackVal, StackVal, *(iParam1 + 28), 0, 1, 1);
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

void Function_495(int iParam0, bool bParam1) //Position: 0xFA49 / 64073
{
	if (bParam1)
	{
		Function_27(&Local_118 + 868, iParam0);
	}
	else
	{
		Function_26(&Local_118 + 868, iParam0);
	}
	return;
}

void Function_496(int iParam0) //Position: 0xFA6B / 64107
{
	*iParam0++;
	return;
}

struct<16> Function_497(int iParam0, var uParam1) //Position: 0xFA79 / 64121
{
	char* cVar0[16];
	int iVar4;
	int iVar172;
	
	strcpy(&cVar0, "", 16);
	*(&iVar4 + 76) = 36;
	if (!Function_143(iParam0, &iVar4))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	if (Function_500(iParam0))
	{
		*uParam1++;
	}
	iVar172 = (*uParam1 % Function_499(&iVar4));
	return StackVal, StackVal, StackVal, Function_498(&iVar4, iVar172);
}

struct<16> Function_498(int iParam0, int iParam1) //Position: 0xFAC9 / 64201
{
	char* cVar0[16];
	
	strcpy(&cVar0, "", 16);
	if (iParam1 <= Function_499(iParam0) || iParam1 > 0)
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(iParam0 + 76[iParam14]);
}

int Function_499(int iParam0) //Position: 0xFAF9 / 64249
{
	return iParam0->f_72;
}

bool Function_500(int iParam0) //Position: 0xFB03 / 64259
{
	struct<73> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_143(iParam0, &Var0))
	{
		if (Var0.f_72 >= 0)
		{
			return 1;
		}
		if ((iParam0 != 33 || iParam0 != 32) || iParam0 != 31)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_501() //Position: 0xFB3E / 64318
{
	return Function_126(8);
}

bool Function_502(int iParam0) //Position: 0xFB49 / 64329
{
	return Function_15(Local_118.f_868, iParam0);
}

void Function_503(int iParam0, bool bParam1) //Position: 0xFB59 / 64345
{
	if (NET_IS_SESSION_HOST())
	{
		if (bParam1)
		{
			Function_27(&Local_91, iParam0);
		}
		else
		{
			Function_26(&Local_91, iParam0);
		}
	}
	return;
}

void Function_504(int iParam0) //Position: 0xFB7B / 64379
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_505() //Position: 0xFB8F / 64399
{
	return (Function_251(&Local_118 + 1020, &Local_91 + 100) && IS_STRING_VALID(&Local_91 + 56));
}

bool Function_506(int iParam0) //Position: 0xFBA9 / 64425
{
	return Function_15((&Global_83591 + 140)->f_56, iParam0);
}

void Function_507(int iParam0) //Position: 0xFBBC / 64444
{
	switch (iParam0)
	{
		case 0x00000002:
			Function_560(1024, 1);
			Function_560(768, 0);
			break;
		
		case 0x00000003:
			Function_560(256, 1);
			Function_560(1536, 0);
			break;
		
		case 0x00000001:
			Function_560(512, 1);
			Function_560(1280, 0);
			if (Global_79349.f_112)
			{
				UPDATE_PROFILE_STAT(&Global_79349, 1.0f, 0);
			}
			break;
		
		case 0x00000000:
			Function_560(1792, 0);
			break;
	}
	return;
}

void Function_508() //Position: 0xFC30 / 64560
{
	Function_511();
	Function_510();
	Function_509();
	return;
}

void Function_509() //Position: 0xFC3F / 64575
{
	if (Global_28235 == 3)
	{
		Global_28235.f_4 = 3;
	}
	*(&Global_28235 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28235 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(2);
	return;
}

void Function_510() //Position: 0xFC6A / 64618
{
	if (Global_28210 == 1)
	{
		Global_28210.f_4 = 3;
	}
	*(&Global_28210 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28210 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(0);
	return;
}

void Function_511() //Position: 0xFC95 / 64661
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

void Function_512() //Position: 0xFCC0 / 64704
{
	Function_495(983040, 0);
	return;
}

int Function_513(int iParam0) //Position: 0xFCCE / 64718
{
	struct<657> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_143(iParam0, &Var0))
	{
		return Function_100(Var0.f_656, 30, 20);
	}
	return 0;
}

bool Function_514() //Position: 0xFCF5 / 64757
{
	return Function_492(2);
}

bool Function_515() //Position: 0xFCFF / 64767
{
	return Function_492(16);
}

bool Function_516() //Position: 0xFD0A / 64778
{
	return Function_492(4);
}

bool Function_517() //Position: 0xFD14 / 64788
{
	return !Function_500(Local_91.f_104);
}

var Function_518() //Position: 0xFD22 / 64802
{
	return ((Function_519() && Function_126(2)) && !Function_488(2048, 1));
}

var Function_519() //Position: 0xFD39 / 64825
{
	return (Function_521() == 4294967295 && !Function_520());
}

bool Function_520() //Position: 0xFD49 / 64841
{
	return Function_521() != 4294967290;
}

int Function_521() //Position: 0xFD56 / 64854
{
	if (!Function_145())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

void Function_522(bool bParam0, bool bParam1) //Position: 0xFD6B / 64875
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_528(&Global_78480);
	Function_527(&Global_78480);
	uVar0 = Function_74(37);
	Function_525();
	if (!bParam0)
	{
		Function_524(37, uVar0);
	}
	Function_560(18264, 0);
	Function_523();
	return;
}

void Function_523() //Position: 0xFDB7 / 64951
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_524(int iParam0, var uParam1) //Position: 0xFDD6 / 64982
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = uParam1;
	return;
}

void Function_525() //Position: 0xFDF0 / 65008
{
	Function_526(&Global_78480 + 220);
	return;
}

void Function_526(int iParam0) //Position: 0xFDFF / 65023
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_527(int iParam0) //Position: 0xFE20 / 65056
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 132)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_528(int iParam0) //Position: 0xFE44 / 65092
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 176)[iVar0] = 0.0f;
		iVar0++;
	}
	return;
}

void Function_529() //Position: 0xFE68 / 65128
{
	if (NET_IS_SESSION_HOST() || !NET_IS_IN_SESSION())
	{
		strcpy(&Local_91 + 56, Function_222(), 16);
	}
	Function_512();
	return;
}

void Function_530() //Position: 0xFE85 / 65157
{
	return;
}

void Function_531(int iParam0, struct<8> Param1) //Position: 0xFE8B / 65163
{
	if (NET_GET_PLAYMODE() == 1)
	{
		if (NET_IS_IN_SESSION())
		{
			if (NET_IS_SESSION_HOST())
			{
				*(&Global_78578 + 112) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
				(&Global_78578 + 112)->f_32 = iParam0;
				(&Global_78578 + 112)->f_36++;
			}
		}
	}
}

bool Function_532(int iParam0, int iParam1) //Position: 0xFED0 / 65232
{
	bool bVar0;
	int iVar1;
	
	if (!IS_OBJECTSET_VALID(iParam0))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < (GET_OBJECTSET_SIZE(iParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar1, iParam0);
		if (iParam1 == GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar0)))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void Function_533(int iParam0) //Position: 0xFF12 / 65298
{
	Function_534(iParam0, 0.0f);
	return;
}

void Function_534(var uParam0, float fParam1) //Position: 0xFF1E / 65310
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_27(uParam0, 1);
	Function_26(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_535(int iParam0, int iParam1) //Position: 0xFF3F / 65343
{
	if (Function_536(iParam0, iParam1))
	{
		Function_559(iParam0);
		return 1;
	}
	return 0;
}

bool Function_536(int iParam0, float fParam1) //Position: 0xFF57 / 65367
{
	if (Function_539(iParam0))
	{
		if (Function_537(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_537(int iParam0) //Position: 0xFF73 / 65395
{
	if (Function_539(iParam0))
	{
		if (Function_538(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_538(int iParam0) //Position: 0x1005B / 65627
{
	return Function_15(*iParam0, 2);
}

bool Function_539(int iParam0) //Position: 0x10068 / 65640
{
	return Function_15(*iParam0, 1);
}

bool Function_540() //Position: 0x10075 / 65653
{
	return NET_GET_POSSE_COUNT() < 1;
}

bool Function_541() //Position: 0x10080 / 65664
{
	var uVar0;
	
	if (Function_542(&uVar0))
	{
		if (UNK_0x63034F52(uVar0))
		{
			return 1;
		}
		NET_LOG(true, "Lobby Session", "LOBBY_JOIN_GAME_INVITE_SESSION Posse Session found BUT join failed", 0, 0, 0, 0);
	}
	else
	{
		NET_LOG(true, "Lobby Session", "LOBBY_JOIN_GAME_INVITE_SESSION No POSSE SESSION FOUND", 0, 0, 0, 0);
	}
	return 0;
}

bool Function_542(int iParam0) //Position: 0x1014C / 65868
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

bool Function_543(int iParam0) //Position: 0x10191 / 65937
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = 4294967295;
	if (!(iParam0 + 8)->f_12)
	{
		bVar0 = SHIFT_LEFT(StackVal, 20);
		bVar0 = (StackVal + SHIFT_LEFT(bVar0, 10));
		bVar0 = (StackVal + SHIFT_LEFT(bVar0, false));
	}
	uVar1 = *iParam0;
	uVar2 = StackVal;
	if (!UNK_0xF6E40FF3(uVar1, bVar0, iParam0->f_32, uVar2, iParam0->f_28))
	{
		return 0;
	}
	if (iParam0->f_36)
	{
		UNK_0xC0849D70();
	}
	return NET_SESSION_QUICK_JOIN_NATIVE(iParam0->f_24);
}

bool Function_544(int iParam0) //Position: 0x10201 / 66049
{
	Function_545(iParam0);
	return NET_IS_FACTION_SAFE(iParam0->f_24);
}

void Function_545(int iParam0) //Position: 0x10213 / 66067
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = 4294967295;
	if (!(iParam0 + 8)->f_12)
	{
		bVar0 = SHIFT_LEFT(StackVal, 20);
		bVar0 = (StackVal + SHIFT_LEFT(bVar0, 10));
		bVar0 = (StackVal + SHIFT_LEFT(bVar0, false));
	}
	uVar1 = *iParam0;
	uVar2 = StackVal;
	UNK_0xF6E40FF3(uVar1, bVar0, iParam0->f_32, uVar2, iParam0->f_28);
	return;
}

void Function_546() //Position: 0x1026D / 66157
{
	Function_547();
	Function_522(1, 0);
	return;
}

void Function_547() //Position: 0x1027B / 66171
{
	Local_91.f_88 = RAND_INT_RANGE(false, 36);
	Local_91.f_96 = 4294967295;
	strcpy(&Local_91 + 56, Function_222(), 16);
	Function_549(&Local_91 + 100);
	Local_91 = 0;
	Local_91.f_4 = 0;
	Function_504(&Local_91 + 44);
	Function_504(&Local_91 + 8);
	Function_504(&Local_91 + 32);
	Function_504(&Local_91 + 20);
	Function_548();
	return;
}

void Function_548() //Position: 0x102C7 / 66247
{
	Function_355();
	return;
}

void Function_549(var uParam0) //Position: 0x102D0 / 66256
{
	*uParam0 = 0;
	return;
}

void Function_550() //Position: 0x102DA / 66266
{
	bool bVar0;
	
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	DESTROY_LAYOUT_OBJECTS(GET_AMBIENT_LAYOUT());
	if (IS_LAYOUTREF_VALID(Global_28841))
	{
		DESTROY_LAYOUT_OBJECTS(Global_28841);
	}
	bVar0 = FIND_NAMED_LAYOUT("nNetLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		DESTROY_LAYOUT_OBJECTS(bVar0);
	}
	Function_551();
	return;
}

void Function_551() //Position: 0x10319 / 66329
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = FIND_NAMED_LAYOUT("train_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = GET_AMBIENT_LAYOUT();
		iVar2 = CREATE_OBJECT_ITERATOR(bVar1);
		ITERATE_IN_LAYOUT(iVar2, bVar0);
		ITERATE_ON_OBJECT_TYPE(iVar2, 15);
		bVar3 = START_OBJECT_ITERATOR(iVar2);
		while (IS_OBJECT_VALID(bVar3))
		{
			NET_LOG(true, "Lobby Cleanup", "Destroyed a minecart named: %s", GET_OBJECT_NAME(bVar3), 0, 0, 0);
			DESTROY_ACTOR(GET_ACTOR_FROM_OBJECT(bVar3));
			bVar3 = OBJECT_ITERATOR_NEXT(iVar2);
		}
		DESTROY_ITERATOR(iVar2);
	}
	return;
}

void Function_552(bool bParam0) //Position: 0x103B8 / 66488
{
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	CLEAR_CHARACTER_BLOOD();
	if (bParam0)
	{
		DESTROY_GC_OBJECTS(1, 1);
		RESET_PROPS_IN_WORLD();
	}
	Function_485(64, 1);
	return;
}

void Function_553(int iParam0) //Position: 0x103DD / 66525
{
	struct<41> Var0;
	
	Function_557(iParam0);
	if (Function_517())
	{
		Function_494(&Local_118 + 992, &Var0, 1);
		*(&vVar29 + 28) = 3;
		*(&vVar29 + 140 + 8) = 5;
		*(&vVar29 + 140 + 32) = 5;
		*(&vVar29 + 140 + 60) = 2;
		*(&vVar29 + 140 + 60 + 4) = 8;
		*(&vVar29 + 140 + 60 + 4 + 36) = 8;
		*(&vVar29 + 276) = 27;
		*(&vVar29 + 276 + 228) = 27;
		*(&vVar29 + 276 + 456) = 17;
		*(&vVar29 + 276 + 528) = 6;
		Function_368(Var0.f_16, &vVar29, 1);
		*iParam0 = Var0.f_16;
		iParam0->f_4 = 2;
		iParam0->f_32 = vVar29.z;
		(iParam0 + 8)->f_8 = Var0.f_40;
		iParam0->f_24 = Function_426(&Var0, 1);
	}
	else
	{
		if (Local_91.f_104 == 33)
		{
			Local_91.f_104 = Function_556();
			iParam0->f_36 = 1;
		}
		*iParam0 = Local_91.f_104;
		iParam0->f_4 = 2;
		iParam0->f_32 = Function_555(Local_91.f_104);
		(iParam0 + 8)->f_8 = 4294967295;
		iParam0->f_24 = Function_554(Local_91.f_104, 2);
		iParam0->f_28 = Local_118.f_56;
	}
	return;
}

bool Function_554(var uParam0, int iParam1) //Position: 0x104CF / 66767
{
	struct<657> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_143(uParam0, &Var0))
	{
		return Function_15(Var0.f_656, iParam1);
	}
	return 0;
}

int Function_555(int iParam0) //Position: 0x104F5 / 66805
{
	struct<69> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_143(iParam0, &Var0))
	{
		return Var0.f_68;
	}
	return 16;
}

var Function_556() //Position: 0x10516 / 66838
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0)
	{
		iVar1 = RAND_INT_RANGE(34, 36);
		if (Function_500(iVar1))
		{
			bVar0 = !Function_554(iVar1, 4);
		}
	}
	return iVar1;
}

void Function_557(int iParam0) //Position: 0x10546 / 66886
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

void Function_558(int iParam0) //Position: 0x10586 / 66950
{
	if (IS_OBJECTSET_VALID(iParam0))
	{
		DISBAND_OBJECTSET(iParam0);
	}
	return;
}

void Function_559(int iParam0) //Position: 0x10599 / 66969
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_560(int iParam0, bool bParam1) //Position: 0x105AD / 66989
{
	if (bParam1)
	{
		Function_27(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_26(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_561() //Position: 0x105E8 / 67048
{
	bool bVar0;
	
	bVar0 = Function_573();
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_VALID(GET_MOUNT(bVar0)))
		{
			ACTOR_DISMOUNT_NOW(bVar0);
			RELEASE_ACTOR(GET_MOUNT(bVar0));
		}
		DESTROY_ACTOR(bVar0);
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		CLEAR_ACTORS_HORSE(bVar0);
		RELEASE_ACTOR(Global_12976.f_36);
	}
	return;
}

bool Function_562(int iParam0) //Position: 0x10630 / 67120
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_567();
	iVar1 = 0;
	if (!Function_22(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_566(iParam0[iVar03], 8);
		}
		else if (Function_565())
		{
			iVar1 = 1;
			Function_566(iParam0[iVar03], 8);
		}
		Function_566(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_22(iParam0[iVar03], 4))
		{
			if (!Function_22(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_22(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_22(iParam0[03], 8) || iVar1));
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
				Function_566(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_22(iParam0[iVar03], 4))
		{
			if (!Function_22(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_566(iParam0[iVar03], 2);
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
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_566(iParam0[iVar03], 2);
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
	Function_563();
	return 1;
}

void Function_563() //Position: 0x109AB / 68011
{
	if (!Function_564(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_564(int iParam0) //Position: 0x109EB / 68075
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_565() //Position: 0x10A07 / 68103
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

void Function_566(var uParam0, int iParam1) //Position: 0x10A32 / 68146
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_567() //Position: 0x10A43 / 68163
{
	if (!Function_564(128))
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

var Function_568(char* cParam0) //Position: 0x10A85 / 68229
{
	bool bVar0;
	
	bVar0 = Function_5();
	return CREATE_OBJECTSET_IN_LAYOUT(cParam0, bVar0, 3, 1);
}

void Function_569(int iParam0) //Position: 0x10A99 / 68249
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	Function_495(524288, 1);
	Function_495(131072, 0);
	return;
}

void Function_570(bool bParam0) //Position: 0x10AB8 / 68280
{
	Function_560(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

void Function_571(int iParam0) //Position: 0x10AD9 / 68313
{
	iParam0 = iParam0;
	return;
}

bool Function_572() //Position: 0x10AE3 / 68323
{
	return UNK_0xA80C6DE6(&Local_91);
}

bool Function_573() //Position: 0x10AEE / 68334
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_574(int iParam0) //Position: 0x10B03 / 68355
{
	return Function_33(Global_83864.f_1252, iParam0);
}

int Function_575(bool bParam0) //Position: 0x10B15 / 68373
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

int Function_576() //Position: 0x10BB9 / 68537
{
	if (Local_118.f_12 > 5 && Local_118.f_12 < 4294967295)
	{
		return 5;
	}
	if (Local_118.f_12 <= 13)
	{
		return 13;
	}
	if (Local_118.f_12 <= 17)
	{
		return 17;
	}
	if (Local_118.f_12 <= 20)
	{
		return 20;
	}
	if (Local_118.f_12 <= 27)
	{
		return 27;
	}
	if (Local_118.f_12 <= 40)
	{
		return 40;
	}
	if (Local_118.f_12 <= 42)
	{
		return 42;
	}
	if (Local_118.f_12 <= 49)
	{
		return 49;
	}
	return 4294967295;
}

bool Function_577(int iParam0) //Position: 0x10C3B / 68667
{
	return Function_33(Global_79336, iParam0);
}

void Function_578(int iParam0) //Position: 0x10C4A / 68682
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
			Function_579(iParam0);
		}
	}
	return;
}

void Function_579(int iParam0) //Position: 0x10C7C / 68732
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_580(bool bParam0) //Position: 0x10C8B / 68747
{
	NET_LOG(true, "Lobby State", "Moving to: %s (%s)", Function_581(bParam0), I2STR(bParam0), 0, 0);
	Local_118.f_12 = bParam0;
	return;
}

var Function_581(int iParam0) //Position: 0x10CCA / 68810
{
	switch (iParam0)
	{
		case 0x00000000:
			return "GTL_INIT_SCRIPT";
		
		case 0x00000001:
			return "GTL_INIT_WAITING_FOR_FADE";
		
		case 0x00000002:
			return "GTL_INIT_WAITING_FOR_DISMOUNT";
		
		case 0x00000003:
			return "GTL_INIT_GAMETYPES";
		
		case 0x00000004:
			return "GTL_INIT_DEBUG";
		
		case 0x00000006:
			return "GTL_SESSIONING_WAITING_FOR_NET_TO_CALM_DOWN";
		
		case 0x00000007:
			return "GTL_SESSIONING_PREPARE";
		
		case 0x00000008:
			return "GTL_SESSIONING_WAITING_TO_END_CURRENT_SESSION";
		
		case 0x00000009:
			return "GTL_SESSIONING_STARTING_NEW_SESSION";
		
		case 0x0000000A:
			return "GTL_SESSIONING_WAITING_TO_GET_IN_SESSION";
		
		case 0x0000000B:
			return "GTL_SESSIONING_WAITING_TO_FULLY_JOIN";
		
		case 0x0000000C:
			return "GTL_SESSIONING_COMPLETE";
		
		case 0x0000000E:
			return "GTL_POST_GAME";
		
		case 0x0000000F:
			return "GTL_CLEANUP_VARIABLES";
		
		case 0x00000010:
			return "GTL_WAITING_ON_HOST_DECISION";
		
		case 0x00000012:
			return "GTL_PRE_COOLDOWN";
		
		case 0x00000013:
			return "GTL_COOLDOWN";
		
		case 0x00000015:
			return "GTL_TELEPORT_PREPARE";
		
		case 0x00000016:
			return "GTL_TELEPORT_WAITING_TO_FADE";
		
		case 0x00000017:
			return "GTL_TELEPORT_ENSURING_RESPAWN";
		
		case 0x00000018:
			return "GTL_TELEPORT_WAITING_FOR_BOUNDS";
		
		case 0x00000019:
			return "GTL_TELEPORT_WAITING_FOR_WORLD";
		
		case 0x0000001A:
			return "GTL_TELEPORT_WAITING_FOR_REGION";
		
		case 0x0000001C:
			return "GTL_PRE_LOBBY";
		
		case 0x0000001D:
			return "GTL_ENSURE_SHARED_DATA";
		
		case 0x0000001E:
			return "GTL_WAIT_FOR_REGION_SCRIPT";
		
		case 0x0000001F:
			return "GTL_WAITING_FOR_PRE_LOBBY_FADE";
		
		case 0x00000020:
			return "GTL_ENSURING_PLAYER_RESPAWN";
		
		case 0x00000021:
			return "GTL_ENSURE_PLAYER_USING_GRINGO";
		
		case 0x00000022:
			return "GTL_ENSURE_PLAYER_READY";
		
		case 0x00000023:
			return "GTL_LOBBY_INIT";
		
		case 0x00000024:
			return "GTL_GAMETYPE_LOBBY";
		
		case 0x00000025:
			return "GTL_GAMETYPE_PRE_RUNNING";
		
		case 0x00000026:
			return "GTL_GAMETYPE_PRE_RUNNING_PICKUPS";
		
		case 0x00000027:
			return "GTL_GAMETYPE_PRE_RUNNING_TEAM_ASSIGNMENT";
		
		case 0x00000029:
			return "GTL_GAMETYPE_RUNNING";
		
		case 0x0000002B:
			return "GTL_SHUTDOWN";
		
		case 0x0000002C:
			return "GTL_SHUTDOWN_WAITING_FOR_FADE";
		
		case 0x0000002D:
			return "GTL_SHUTDOWN_WAITING_FOR_SCRIPT_SHUTDOWN";
		
		case 0x0000002E:
			return "GTL_SHUTDOWN_WAITING_FOR_INSTANCE_SHUTDOWN";
		
		case 0x0000002F:
			return "GTL_SHUTDOWN_WAITING_FOR_REGION_RESET";
		
		case 0x00000030:
			return "GTL_SHUTDOWN_NOW";
		
		default:
	}
	return "Unknown State!";
}

bool Function_582(char* cParam0) //Position: 0x112D7 / 70359
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_583() //Position: 0x112F6 / 70390
{
	if (Function_574(64))
	{
		Global_29155[Global_30717[2]10].f_4 = 6;
		Global_29155[Global_30640[15]10].f_4 = 6;
		Global_29155[Global_30685[4]10].f_4 = 6;
		Global_29155[Global_30658[5]10].f_4 = 6;
		Global_29155[Global_30640[13]10].f_4 = 6;
		Global_29155[Global_30707[4]10].f_4 = 6;
		Global_29155[Global_30658[6]10].f_4 = 6;
		Global_29155[Global_30658[7]10].f_4 = 6;
		Global_29155[Global_30640[16]10].f_4 = 6;
		Global_29155[Global_30693[11]10].f_4 = 6;
		Global_29155[Global_30668[9]10].f_4 = 6;
	}
	return;
}

void Function_584() //Position: 0x113A3 / 70563
{
	Function_589();
	Function_491(2192);
	Function_404(2);
	Function_259(5);
	Function_357();
	Function_588();
	Function_587();
	Function_360();
	Function_585(&Local_118 + 1060, "mp_lobby", 10, 0);
	AUDIO_SHUT_OFF_WALLA();
	SET_POP_DENSITY_MULTIPLIER(0.4f);
	NET_APPLY_RELEVANCY_OVERRIDE();
	Function_562(&Local_118 + 1060);
	UI_SET_TEXT("OLNM_ReturnToFM", "mp_fe_freeroam");
	UI_INCLUDE("MULTI_FREE_ROAM");
	UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_AvatarPicker", "mp_avatarpicker_conf_lobby");
	UI_SEND_EVENT("net.LobbyEntered");
	return;
}

var Function_585(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1147C / 70780
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(uParam1, iParam2);
	iVar0 = Function_586(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_566(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_586(var uParam0, int iParam1, int iParam2) //Position: 0x114B4 / 70836
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_22(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_566(uParam0[iVar03], 4);
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

void Function_587() //Position: 0x11578 / 71032
{
	Global_83816 = Global_26119;
	Global_83817 = Global_28842;
	return;
}

void Function_588() //Position: 0x1158C / 71052
{
	return;
}

void Function_589() //Position: 0x11592 / 71058
{
	Function_557(&Local_118 + 16);
	Function_400(&Local_118 + 60, 1);
	Local_118.f_412 = "";
	Function_350();
	Local_118.f_864 = "";
	Local_118.f_860 = "";
	Local_118 = 0.0f;
	Local_118.f_1012 = 4294967295;
	Local_118.f_868 = 0;
	strcpy(&Local_118 + 992, Function_222(), 16);
	Local_118.f_1008 = 4294967295;
	Function_549(&Local_118 + 1020);
	return;
}

void Function_590(var uParam0) //Position: 0x115E7 / 71143
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
			ENABLE_WORLD_SECTOR("dlc02x");
			break;
		
		case 0x00000033:
		case 0x00000042:
		case 0x00000043:
			ENABLE_WORLD_SECTOR("dlc05x");
			break;
		
		case 0x00000047:
			ENABLE_WORLD_SECTOR("dlc06x");
			break;
	}
	return;
}

