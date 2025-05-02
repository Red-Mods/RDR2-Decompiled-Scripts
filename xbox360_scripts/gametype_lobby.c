//Decompiled with MagicRDR v1.0
//Function Count : 575
//Statics Count : 335
//Natives Count : 578
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
	float fLocal_12 = 0.0f;
	int iLocal_13 = 0;
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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	bool bLocal_29 = false;
	int iLocal_30 = 0;
	struct<105> Local_31 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_166 = 4;
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
	var uLocal_186 = -1;
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
	var uLocal_207 = 27;
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
	var uLocal_320 = 1;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	struct<8> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bool bVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	struct<8> Var16;
	struct<16> Var24;
	
	iLocal_11 = 0;
	fLocal_12 = 1.0f;
	iLocal_13 = 0;
	uLocal_28 = "RotLobby";
	Function_569();
	Function_567(0);
	bVar0 = false;
	bVar8 = false;
	fVar12 = 1.0f;
	iVar13 = 0;
	iVar14 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iVar5 = 0;
		if (Local_58.f_12 >= 0)
		{
			Function_565(1);
		}
		if (!Function_564(16) || (Function_563() < 13 && !NET_IS_IN_SESSION()))
		{
			if (Local_58.f_12 <= 43)
			{
				if (NET_IS_MANAGER_INITIALIZED())
				{
					Function_567(43);
				}
				else
				{
					Function_567(48);
				}
			}
		}
		if (NET_IS_SESSION_HOST())
		{
			if (Function_563() <= 49)
			{
				Local_31.f_96 = Function_563();
			}
		}
		if (HUD_IS_FADED())
		{
			Local_58 = (Local_58 + GET_UNWARPED_REALTIME_SECONDS());
		}
		else
		{
			Local_58 = 0.0f;
			if (StackVal < 0.0f)
			{
				Local_58.f_4 = (StackVal - GET_UNWARPED_REALTIME_SECONDS());
				if (StackVal >= 0.0f)
				{
					if (Function_562(0) && !(Function_561(2) || Function_564(524288)))
					{
						HUD_FADE_OUT(0.0f, 1f, 1);
						HUD_FADE_TO_LOADING_SCREEN();
						UI_POP("MPSplash");
						UI_EXIT("MPSplash");
					}
				}
			}
		}
		bVar6 = Function_560();
		iVar11 = Local_58.f_12;
		if (Function_563() < 13 && Function_563() > 49)
		{
			if (!IS_SLOT_VALID(GET_SLOT_FOR_HOST()))
			{
				iVar11 = 50;
			}
			else if (!Function_559())
			{
				iVar11 = 50;
			}
			else if (Local_31.f_96 == 49)
			{
			}
			iVar14 = NET_GET_SESSION_GAMER_COUNT();
			if (iVar13 != iVar14)
			{
				fVar12 = (0,6f - (0,0375f * IntToFloat(iVar14)));
				if (fVar12 > 0.0f)
				{
					fVar12 = 0.0f;
				}
				else if (fVar12 < 0,6f)
				{
					fVar12 = 0,6f;
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
				Function_558(0x40000000);
				if (IS_ACTOR_VALID(bVar6))
				{
					Function_557(bVar6);
				}
				NET_SCRIPTMSG_REGISTER_HANDLER(22, 65421);
				REGISTER_HOST_BROADCAST_VARIABLES(&Local_31, 27);
				Local_58.f_408 = Function_555(uLocal_28);
				Local_58.f_8 = 0.0f;
				Local_31.f_104 = ScriptParam_0.f_16;
				*(&Local_58 + 980) = { StackVal, StackVal, StackVal, ScriptParam_0 };
				Local_58.f_56 = ScriptParam_0.f_20;
				Local_58.f_60 = CREATE_LAYOUT("LobbyIdleCam");
				if (!IS_LAYOUTREF_VALID(Local_58.f_60))
				{
				}
				if (IS_LOCAL_PLAYER_VALID(0))
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
				Function_567(1);
			
			case 0x00000001:
				Function_558(0x40000000);
				if (HUD_IS_FADED())
				{
					if (Function_549(&Local_58 + 1048))
					{
						Function_548();
						Function_567(2);
					}
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_TO_LOADING_SCREEN();
				}
				break;
			
			case 0x00000002:
				Function_558(0x40000000);
				if (IS_ACTOR_VALID(bVar6))
				{
					if (IS_ACTOR_ON_FOOT(bVar6))
					{
						Function_567(6);
						Local_58.f_8 = 0.0f;
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
					Function_567(6);
					Local_58.f_8 = 0.0f;
				}
				break;
			
			case 0x00000006:
				Function_558(0x40000000);
				Function_547(2048, 0);
				Local_58.f_8 = 0.0f;
				Function_546(&iVar1);
				Function_545(Local_58.f_408);
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
					Function_567(7);
				}
				break;
			
			case 0x00000007:
				Function_558(0x40000000);
				Function_540(&Local_58 + 16);
				Function_545(Local_58.f_408);
				if (NET_GET_PLAYMODE() == 1)
				{
					if (NET_IS_IN_SESSION())
					{
						bVar8 = (NET_IS_SESSION_HOST() || (!NET_IS_SESSION_HOST() && ScriptParam_0.f_28 != 3));
						if (NET_IS_SESSION_HOST() && ScriptParam_0.f_28 != 2)
						{
							bVar8 = false;
						}
						if (bVar8)
						{
							NET_LOG(true, "Lobby Session", "Starting lobby for private session.  No sessioning", 0, 0, 0, 0);
							Function_567(10);
						}
						else
						{
							NET_LOG(true, "Lobby Session", "Starting Lobby in private mode as non-host.  Leaving the current private session", 0, 0, 0, 0);
							NET_SESSION_LEAVE_SESSION();
							Function_567(8);
						}
					}
					else
					{
						Function_567(9);
					}
				}
				else if (NET_IS_IN_SESSION())
				{
					NET_SESSION_LEAVE_SESSION();
					NET_LOG(true, "Lobby Session", "Leaving Previous Session", 0, 0, 0, 0);
					Function_567(8);
				}
				else
				{
					NET_LOG(true, "Lobby Session", "Not in a previous session", 0, 0, 0, 0);
					Function_567(9);
				}
				break;
			
			case 0x00000008:
				Function_558(0x40000000);
				Local_58.f_8 = (StackVal + GET_UNWARPED_REALTIME_SECONDS());
				if (StackVal <= 15.0f)
				{
					NET_LOG(true, "Lobby Session", "Giving up, still in a session/busy after %s seconds!", I2STR(CEIL(15.0f)), 0, 0, 0);
					Function_567(9);
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
					Local_58.f_8 = 0.0f;
					Function_567(9);
				}
				break;
			
			case 0x00000009:
				Function_558(0x40000000);
				Function_539();
				Function_538();
				Function_534();
				bVar0 = false;
				switch (ScriptParam_0.f_28)
				{
					case 0x00000004:
						if (Function_533(&Local_58 + 16))
						{
							NET_LOG(true, "Lobby Session", "NET_SESSION_CREATE_SESSION returned true", 0, 0, 0, 0);
						}
						else
						{
							NET_LOG(true, "Lobby Session", "NET_SESSION_CREATE_SESSION returned false", 0, 0, 0, 0);
						}
						break;
					
					case 0x00000000:
						if (Function_531(&Local_58 + 16))
						{
							NET_LOG(true, "Lobby Session", "NET_SESSION_QUICK_JOIN returned true", 0, 0, 0, 0);
						}
						else
						{
							NET_LOG(true, "Lobby Session", "NET_SESSION_QUICK_JOIN returned false", 0, 0, 0, 0);
						}
						break;
					
					case 0x00000002:
						if (Function_529())
						{
							NET_LOG(true, "Lobby Session", "LOBBY_JOIN_GAME_INVITE_SESSION returned true", 0, 0, 0, 0);
						}
						else
						{
							NET_LOG(true, "Lobby Session", "LOBBY_JOIN_GAME_INVITE_SESSION returned false", 0, 0, 0, 0);
							if (Function_528())
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
					Local_58.f_8 = 0.0f;
					Function_567(43);
				}
				else
				{
					Local_58.f_8 = 0.0f;
					Function_546(&iVar1);
					Function_567(10);
				}
				break;
			
			case 0x0000000A:
				Function_558(0x40000000);
				if (!NET_IS_IN_SESSION())
				{
					bVar0 = false;
					if (!(NET_IS_BUSY() || NET_IS_SEARCHBOT_BUSY()))
					{
						if (Function_527(&iVar1))
						{
							if (Function_523(&iVar1, 1.0f))
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
							Function_521(&iVar1);
							bVar0 = false;
						}
					}
					if (Function_520(Local_58.f_408, 80))
					{
						NET_LOG(true, "Lobby Session", "Invite Join Failed", 0, 0, 0, 0);
						Function_567(43);
						bVar0 = false;
					}
					else if (Function_520(Local_58.f_408, 63))
					{
						NET_LOG(true, "Lobby Session", "Join Failed", 0, 0, 0, 0);
						bVar0 = true;
					}
					else if (Function_520(Local_58.f_408, 65))
					{
						NET_LOG(true, "Lobby Session", "Creation Failed", 0, 0, 0, 0);
						bVar0 = true;
					}
					else if (Function_520(Local_58.f_408, 66))
					{
						NET_LOG(true, "Lobby Session", "Invite Join Failed", 0, 0, 0, 0);
						UI_SEND_EVENT("net.UnexpectedFail");
						Function_567(43);
					}
					else if (!bVar0)
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						NET_LOG(true, "Lobby Session", "Sessioning Problem found", 0, 0, 0, 0);
						Function_567(6);
					}
				}
				else
				{
					Local_58.f_8 = 0.0f;
					Function_546(&iVar1);
					if (NET_GET_PLAYMODE() == 1)
					{
						if (NET_IS_SESSION_HOST())
						{
							Function_519(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, ScriptParam_0);
							NET_SESSION_SET_GAME_MODE_TYPE(Local_58.f_16);
						}
					}
					Function_567(11);
				}
				iVar5 = 1;
				break;
			
			case 0x0000000B:
				Function_558(0x40000000);
				Local_58.f_8 = (StackVal + GET_UNWARPED_REALTIME_SECONDS());
				if (!NET_IS_IN_SESSION())
				{
					NET_LOG(true, "Lobby Session", "In WAITING TO JOIN but not in a session!", 0, 0, 0, 0);
					Function_567(6);
				}
				else if (!Function_559())
				{
					if (StackVal > 15.0f)
					{
						NET_LOG(true, "Lobby Session", "Haven't Received Host Data yet", 0, 0, 0, 0);
					}
					else
					{
						NET_LOG(true, "Lobby Session", "Gave Up on this session, trying another", 0, 0, 0, 0);
						Function_567(6);
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
					Function_567(12);
				}
				break;
			
			case 0x0000000C:
				Function_558(0x40000000);
				Function_518();
				Function_517();
				Function_510(1, 0);
				iLocal_30 = Function_506();
				if (Function_505())
				{
					if (Function_504())
					{
						SET_RICH_PRESENCE(1, 1, 0, 0, 0);
					}
					else if (Function_503())
					{
						SET_RICH_PRESENCE(1, 3, 0, 0, 0);
					}
					else if (Function_502())
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
					SET_RICH_PRESENCE(1, Function_501(Local_31.f_104), 0, 0, 0);
				}
				Function_567(15);
			
			case 0x0000000F:
				Function_558(0x40000000);
				Function_500();
				Function_496();
				Function_495(0);
				Function_567(16);
			
			case 0x00000010:
				Function_558(0x40000000);
				if (!Function_494())
				{
					if (NET_IS_SESSION_HOST())
					{
						Local_31.f_92 = RAND_INT_RANGE(false, 10000);
						Function_493(&Local_31 + 44);
						Function_493(&Local_31 + 8);
						Function_493(&Local_31 + 32);
						Function_493(&Local_31 + 20);
						Function_492(3, 0);
						Function_492(8, ScriptParam_0.f_24);
						Local_31.f_4 = 0;
						Global_78578.f_152 = (RAND_INT_RANGE(false, 1000) % 5);
						if (!Function_491(65536))
						{
							*(&Local_31 + 72) = { StackVal, StackVal, StackVal, *(&Local_31 + 56) };
							if (StackVal != 2)
							{
								if (Function_505() || Function_490())
								{
									*(&Local_31 + 56) = { StackVal, StackVal, StackVal, *(&Local_58 + 980) };
								}
								else
								{
									*(&Local_31 + 56) = { StackVal, StackVal, StackVal, Function_486(Local_31.f_104, &Local_31 + 88) };
								}
								Function_485(&Local_31 + 100);
							}
							Function_484(65536, 1);
						}
					}
					if (Local_31.f_100 < 1 || !NET_IS_SESSION_HOST())
					{
					}
				}
				else
				{
					if (!Function_483(&Local_31 + 56, &Local_58 + 864, 1))
					{
					}
					Function_482(&Local_58 + 1008, &Local_31 + 100);
					Function_495(0);
					if (NET_IS_SESSION_HOST())
					{
						Function_493(&Local_31 + 8);
						Function_493(&Local_31 + 32);
					}
					if (NET_IS_SESSION_HOST() && Local_31.f_100 >= 1)
					{
						Function_567(21);
					}
					else
					{
						Function_567(18);
					}
				}
				break;
			
			case 0x00000012:
				Function_558(0x40000000);
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(0);
				UI_EXIT("HudMPNoFun");
				HUD_ENABLE(false);
				if (StackVal && (!Function_481(131072) && !IS_PS3()) == 1)
				{
					UI_FOCUS("HudGamerList");
				}
				ScriptParam_0.f_24 = 0;
				Function_480(4);
				Function_479(5);
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				if (IS_ACTOR_VALID(bVar6))
				{
					SET_ACTOR_HEALTH(bVar6, GET_ACTOR_MAX_HEALTH(bVar6));
				}
				if ((NET_IS_SESSION_HOST() || !Function_478(20)) || iLocal_30)
				{
					if (StackVal == 1 || !Function_477(2048, 1))
					{
						if (!IS_OBJECT_VALID(StackVal))
						{
							Function_476(&Local_58 + 60, 1, 1, 1);
						}
					}
					if (IS_SCRIPT_VALID(Local_58.f_848))
					{
						Function_475(32, 1);
					}
					else
					{
						Function_475(2, 1);
						if (iLocal_30)
						{
							if (Function_483(&Local_31 + 56, &Global_79349, 1))
							{
								Function_474();
								Local_58.f_848 = Function_472();
							}
						}
						else if (Function_483(&Local_31 + 72, &Global_79349, 1))
						{
							Local_58.f_848 = Function_472();
						}
					}
				}
				if (Function_481(131072))
				{
					bLocal_29 = 20.0f;
				}
				else
				{
					bLocal_29 = 20.0f;
				}
				DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
				Function_471();
				Function_567(19);
			
			case 0x00000013:
				Function_558(0x40000000);
				bVar4 = false;
				if (Function_494())
				{
					Function_495(0);
					Function_567(16);
					Function_470();
				}
				else if (Function_478(20) && !iLocal_30)
				{
					bVar4 = true;
				}
				else
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						(&Local_58 + 60)->f_64 = GET_CURRENT_GAME_TIME();
						Function_444(&Local_58 + 60, 1);
					}
					if (HUD_IS_FADED() || Function_562(0))
					{
						if (STREAMING_IS_WORLD_LOADED())
						{
							if (((NET_IS_SESSION_HOST() || !Function_478(20)) || Function_491(4)) || iLocal_30)
							{
								NET_TICKER_CLEAR();
								Function_474();
								Function_443();
								Function_442();
								if (UI_ISACTIVE("MPSplash"))
								{
									UI_POP("MPSplash");
									UI_EXIT("MPSplash");
								}
								else
								{
									HUD_FADE_IN(1,5f, 1065353216);
								}
							}
						}
					}
					Function_427(0);
					if (!Function_426(&Local_31 + 44))
					{
						if (NET_IS_SESSION_HOST())
						{
							if (StackVal == 1)
							{
								Function_423(&Local_31 + 44, 5.0f);
							}
							else
							{
								Function_423(&Local_31 + 44, (bLocal_29 + 3.0f));
							}
						}
						else
						{
							Function_474();
						}
					}
					else if (Function_422(&Local_31 + 44) && !iLocal_30)
					{
						bVar4 = true;
					}
					else
					{
						bVar15 = CEIL(Function_418(&Local_31 + 44));
						if (Local_58.f_996 != bVar15)
						{
							Local_58.f_996 = bVar15;
							if (bVar15 <= 0 && iLocal_30)
							{
								iLocal_30 = 0;
							}
							if (Local_58.f_996 >= FLOOR(bLocal_29) && Local_58.f_996 < 4294967291)
							{
								if (StackVal == 0)
								{
									if (Function_417(&Local_58 + 864, 1024))
									{
										Function_416("mp_lobby_rotation_starting_light");
									}
									else
									{
										Function_416("mp_lobby_rotation_starting");
										Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_415((&Local_58 + 864)->f_40) };
										UI_SET_STRING("MP_LobbyArea", UI_GET_STRING(&Var16));
									}
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_414(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_58 + 864), 0) };
									UI_SET_STRING("MP_LobbyMode", &Var24);
								}
								Function_413(Local_58.f_996, 0);
							}
						}
						if (StackVal == 1)
						{
							Function_398(48689, 47621);
						}
					}
				}
				if (bVar4)
				{
					TASK_CLEAR(bVar6);
					Function_567(21);
				}
				break;
			
			case 0x00000015:
				Function_558(0x40000000);
				UI_UNFOCUS("HudGamerList");
				Function_397();
				Function_470();
				Function_396(4);
				iLocal_30 = 0;
				Function_567(22);
			
			case 0x00000016:
				Function_558(0x40000000);
				if (HUD_IS_FADED())
				{
					if (MAKE_ACTOR_READY_FOR_ACTION(bVar6, 1) || !IS_ACTOR_VALID(bVar6))
					{
						if (Function_417(&Global_79349, 256))
						{
							Function_394();
						}
						Global_79349 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_58 + 864) };
						Global_79345 = { StackVal, StackVal, StackVal, *(&Local_31 + 56) };
						Function_393();
						if (IS_OBJECT_VALID(StackVal))
						{
							Function_392(&Local_58 + 60);
						}
						Function_348();
						Function_510(0, 1);
						Function_347();
						if (NET_IS_SESSION_HOST())
						{
							Function_493(&Local_31 + 8);
							Function_493(&Local_31 + 20);
							Local_31.f_4 = 0;
							Function_492(1, 0);
						}
						Function_346();
						Function_474();
						Function_443();
						Function_342();
						Function_338();
						Function_337();
						if (Global_16524.f_16)
						{
							Function_332(0, 0, 0);
							Function_331();
						}
						Local_58.f_848 = Function_472();
						Function_548();
						Function_328();
						Local_58 = 0.0f;
						STREAMING_EVICT_ALL();
						Function_567(23);
					}
				}
				else if (!HUD_IS_FADING())
				{
					Function_393();
				}
				break;
			
			case 0x00000017:
				Function_558(0x40000000);
				if (Function_327(StackVal, StackVal, *(&Local_58 + 1012), Local_58.f_1024))
				{
					if (IS_LOCAL_PLAYER_VALID(0))
					{
						SET_PLAYER_CONTROL(0, 0, 0, 0);
					}
					bVar6 = Function_560();
					Function_557(bVar6);
					Function_323(1, 0, 0);
					Local_58.f_1028 = Function_322(StackVal, StackVal, *(&Local_58 + 1012), 0, 1, 1);
					if (Function_321(Local_58.f_1028))
					{
						Function_484(1, 1);
					}
					else
					{
						Function_484(1, 0);
					}
					Function_567(24);
				}
				break;
			
			case 0x00000018:
				Function_558(0x40000000);
				if (STREAMING_IS_WORLD_LOADED() || Local_58 < 30.0f)
				{
					if (Local_58 < 30.0f)
					{
					}
					Function_567(26);
					Global_3391 = 0;
				}
				break;
			
			case 0x0000001A:
				Function_558(0x40000000);
				if (!Function_491(1))
				{
					Local_58 = 0.0f;
					Function_567(29);
				}
				else if (Function_320(Local_58.f_1028))
				{
					Local_58 = 0.0f;
					Function_567(29);
				}
				else if (Local_58 < 30.0f)
				{
					Local_58 = 0.0f;
					Function_567(29);
				}
				break;
			
			case 0x0000001D:
				Function_558(0x40000000);
				if (Function_319(0))
				{
					Function_475(4, 1);
					Function_567(30);
				}
				else if (IS_DEV_BUILD())
				{
					if (Local_58 < 15.0f)
					{
						NET_LOG(true, "Game Sessioning", "Haven't received everyone's data after %s seconds of trying. Giving up! (this won't happen in release builds)", F2STR(15.0f, 5, 1), 0, 0, 0);
						Local_58.f_848 = Function_472();
						Function_547(2048, 1);
						Function_567(30);
					}
				}
				break;
			
			case 0x0000001E:
				Function_558(0x40000000);
				if (Function_318(&Global_79349))
				{
					if (!IS_SCRIPT_VALID(Local_58.f_848) || Function_317())
					{
						NET_LOG(true, "Lobby Gametype", "GAME REGION SCRIPT ('%s') failed!", GET_ASSET_NAME(Global_79349.f_24, 4), 0, 0, 0);
						PRINT_BIG("REGION SCRIPT INVALID! Quitting Lobby for your own protection", 30.0f, 0, 2, 0);
						Function_396(16);
					}
					else if (Function_315())
					{
						Function_567(28);
					}
				}
				else
				{
					Function_567(28);
				}
				break;
			
			case 0x0000001C:
				Function_558(5.0f);
				Function_313();
				Function_547(1, 1);
				Function_495(0);
				Function_474();
				Function_484(90, 0);
				Function_312();
				if (NET_IS_SESSION_HOST())
				{
					Function_493(&Local_31 + 8);
					Function_493(&Local_31 + 20);
					Local_31.f_4 = 0;
					Function_492(1, 0);
					Function_311(1, 0);
					Function_311(0, 0);
				}
				if (IS_OBJECT_VALID(StackVal))
				{
					Function_392(&Local_58 + 60);
				}
				if (Function_417(&Global_79349, 128))
				{
					Function_302();
				}
				Function_567(32);
			
			case 0x00000020:
				Function_558(0x40000000);
				if (Function_301())
				{
				}
				Global_76888[03] = { StackVal, StackVal, *(&Local_58 + 1012) };
				Global_76888[13] = { StackVal, StackVal, *(&Local_58 + 1012) };
				Global_76895[03] = { 0.0f, Local_58.f_1024, 0.0f };
				Global_76895[13] = { 0.0f, Local_58.f_1024, 0.0f };
				if (Function_327(StackVal, StackVal, *(&Local_58 + 1012), Local_58.f_1024))
				{
					if (!Function_300("skiplobbyGringos") && (NET_IS_SESSION_HOST() || !Function_478(40)))
					{
						if (Function_296())
						{
							Function_567(33);
							Local_58 = 0.0f;
						}
						else
						{
							Function_567(25);
						}
					}
					else
					{
						Function_567(25);
					}
				}
				break;
			
			case 0x00000021:
				Function_558(0x40000000);
				if (GET_CURRENT_GRINGO(bVar6) == Local_58.f_1064)
				{
					Function_567(25);
					Function_484(16384, 1);
					Function_484(32768, 0);
					Function_294();
				}
				else if (Local_58 < 5.0f)
				{
					Function_567(25);
					Function_294();
				}
				break;
			
			case 0x00000019:
				Function_558(0x40000000);
				if (STREAMING_IS_WORLD_LOADED() || Local_58 < 30.0f)
				{
					if (Local_58 < 30.0f)
					{
						Local_58 = 0.0f;
					}
					Function_567(34);
				}
				break;
			
			case 0x00000022:
				Function_558(0x40000000);
				if (Function_293(bVar6, 1, 0x41700000))
				{
					if (IS_LOCAL_PLAYER_VALID(0))
					{
						SET_PLAYER_CONTROL(0, 1, 1, 1);
						DISABLE_PLAYER_GRINGO_USE(0, 1);
					}
					HUD_ENABLE(true);
					Function_272(&Local_58 + 412, 0, 0, 0, 0);
					Function_268(&Local_58 + 412 + 184);
					Function_265(&Local_58 + 412, 37897);
					Function_260(&Local_58 + 412, 37174);
					Function_259(&Local_58 + 412, 0);
					if (NET_IS_SESSION_HOST() || !Function_478(40))
					{
						Function_258(bVar6, 0);
					}
					Function_257(0);
					SET_SWITCH_CAMERA_BUTTON_ENABLED(0);
					Function_547(2048, 1);
					Function_266(bVar6);
					STREAMING_RELEASE_MAIN_POI();
					Function_567(31);
				}
				break;
			
			case 0x0000001F:
				Function_558(0x40000000);
				if (HUD_IS_FADED() && (NET_IS_SESSION_HOST() || !Function_478(40)))
				{
					Function_256(1,5f);
					Local_58.f_1072 = GET_CURRENT_GAME_TIME();
				}
				if (!HUD_IS_FADING())
				{
					Function_567(35);
				}
				break;
			
			case 0x00000023:
				Function_558(0x40000000);
				Function_567(36);
			
			case 0x00000024:
				Function_558(30.0f);
				Function_150(&Local_58 + 412);
				Function_143();
				if (NET_IS_IN_SESSION())
				{
					Local_58.f_1004 = Function_137();
					Function_427(Local_58.f_1004);
					Function_136(Local_58.f_1004);
					Function_398(48689, 47621);
					if (Function_494())
					{
						HUD_CLEAR_HELP();
						Function_128(&Local_58 + 412);
						Function_567(16);
					}
					Function_119();
					if (StackVal != 1)
					{
						if (Function_115(Local_58.f_1004))
						{
							Function_567(37);
						}
					}
					Function_114();
					Function_113();
				}
				else
				{
					Function_112();
				}
				break;
			
			case 0x00000025:
				Function_558(0x40000000);
				Function_110();
				Function_342();
				Function_474();
				Function_443();
				Function_495(0);
				Function_109();
				if (NET_IS_SESSION_HOST())
				{
					Local_31.f_4 = 0;
				}
				Function_107();
				SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
				Function_106(Function_560());
				Function_547(1, 0);
				Function_484(1160, 0);
				Function_105();
				Function_103();
				Function_396(64);
				Function_567(38);
			
			case 0x00000026:
				Function_558(0x40000000);
				if (IS_LAYOUTREF_VALID(Global_83591.f_140))
				{
					if (Function_65(Global_83591.f_140, &Global_83591 + 276, !Function_417(&Global_79349, 512), 1) != 0)
					{
						Function_567(39);
					}
				}
				else
				{
					Function_567(39);
				}
				break;
			
			case 0x00000027:
				Function_558(0x40000000);
				if (!Function_491(512) || Function_64() == 4294967295)
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
					Function_62(&Local_58 + 412);
					NET_TICKER_CLEAR();
					if (Function_417(&Global_79349, 256))
					{
						Function_302();
					}
					Function_61();
					Function_539();
					Function_484(2048, 0);
					Local_58.f_852 = Function_60();
					Function_567(41);
				}
				else if (NET_IS_SESSION_HOST())
				{
					Function_44();
				}
				break;
			
			case 0x00000029:
				Function_558(-1.0f);
				if (!Function_491(2048))
				{
					if (IS_SCRIPT_VALID(Local_58.f_852))
					{
						Function_484(2048, 1);
						NET_LOG(true, "Lobby State", "Game script successfully launched!", 0, 0, 0, 0);
					}
				}
				else if (Function_564(64))
				{
					NET_LOG(true, "Gametype Lobby", "Told to ditch, and doing so!", 0, 0, 0, 0);
					Function_43();
					Function_396(64);
					UI_ACTIVATE("NetAlert_UnexpectedFail");
				}
				else if (!IS_SCRIPT_VALID(Local_58.f_852))
				{
					NET_LOG(true, "Lobby State", "Game script is no longer valid, deemed over!", 0, 0, 0, 0);
					Function_43();
					if (NET_IS_SESSION_HOST())
					{
						Function_492(2, 0);
					}
					Function_42();
					Local_58.f_4 = 2.0f;
					Function_484(4, 1);
					Function_484(8, 0);
					Function_567(14);
				}
				break;
			
			case 0x0000000E:
				Function_558(0x40000000);
				Function_547(1, 0);
				Function_37(0);
				Function_342();
				Function_567(15);
				break;
			
			case 0x0000002B:
				Function_558(0x40000000);
				if (IS_LOCAL_PLAYER_VALID(0))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				if (NET_GET_PLAYMODE() == 1)
				{
					NET_SESSION_SET_INVITABLE(1);
					NET_SET_SESSION_CLOSED_FOR_JOIN(0);
				}
				Function_519(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, ScriptParam_0);
				Function_567(44);
				break;
			
			case 0x0000002C:
				Function_558(0x40000000);
				if (HUD_IS_FADED())
				{
					Function_43();
					Function_567(45);
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_OUT(0,25f, 1f, 1);
					UNK_0xEF270DC9();
				}
				break;
			
			case 0x0000002D:
				Function_558(0x40000000);
				if (!IS_SCRIPT_VALID(Local_58.f_852))
				{
					Function_338();
					Function_567(46);
				}
				break;
			
			case 0x0000002E:
				Function_558(0x40000000);
				if (!IS_SCRIPT_VALID(Local_58.f_852) && !IS_SCRIPT_VALID(Local_58.f_848))
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
					Function_567(47);
				}
				break;
			
			case 0x00000030:
				Function_558(0x40000000);
				Function_43();
				Function_338();
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
			
			case 0x0000002F:
				Function_558(0x40000000);
				Function_394();
				Function_36(5);
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		if (NET_IS_SESSION_HOST() && Function_491(512))
		{
			switch (Function_563())
			{
				case 0x00000028:
				case 0x0000002A:
					if (Function_35(Local_58.f_408, 102, &bVar9, 0))
					{
						Function_26();
					}
					else if (Function_35(Local_58.f_408, 69, &bVar9, 0))
					{
						bVar10 = DECOR_GET_INT(bVar9, "Slot");
						Function_26();
					}
					break;
				}
		}
		if (iVar5 || Function_563() == 13)
		{
			Function_545(Local_58.f_408);
		}
		WAIT(false);
	}
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	Function_43();
	Function_338();
	if (NET_IS_IN_SESSION() && NET_GET_PLAYMODE() == 1)
	{
		NET_LOG(true, "LOBBY", "Lobby leaving session", 0, 0, 0, 0);
		NET_SESSION_LEAVE_SESSION();
	}
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	TASK_CLEAR(bVar6);
	if (IS_EXITFLAG_SET() && Function_564(16))
	{
		Function_256(1,5f);
	}
	UI_EXIT("MPSplash");
	UI_POP("MPSplash");
	Function_518();
	Function_4();
	Function_1(uLocal_28);
	if (IS_LAYOUTREF_VALID(Local_58.f_60))
	{
		DESTROY_LAYOUT(Local_58.f_60);
	}
	STREAMING_UNLOAD_SCENE();
	if (Global_16524.f_16)
	{
		Function_332(0, 0, 0);
		Function_331();
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

int Function_1(bool bParam0) //Position: 0x1DC1 / 7617
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_3();
	bVar1 = FIND_OBJECT_IN_LAYOUT(bVar0, bParam0);
	if (Function_2(bVar1))
	{
		return 1;
	}
	return 0;
}

bool Function_2(bool bParam0) //Position: 0x1DE0 / 7648
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

var Function_3() //Position: 0x1DF6 / 7670
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_4() //Position: 0x1E32 / 7730
{
	Function_480(2);
	Function_36(2);
	Function_396(148);
	Function_479(5);
	Function_17(0);
	Function_10();
	Function_346();
	Function_474();
	Function_443();
	Function_37(1);
	Function_394();
	Function_9();
	Function_496();
	UNREGISTER_SCRIPT_WITH_AUDIO();
	UI_UNFOCUS("HudGamerList");
	Function_397();
	Function_470();
	HUD_ENABLE(true);
	Function_103();
	AUDIO_TURN_ON_WALLA();
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	SET_POP_DENSITY_MULTIPLIER(0,6f);
	NET_CLEAR_RELEVANCY_OVERRIDE();
	SET_PLAYER_COMBATMODE_OVERRIDE(4294967295);
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Global_62993 = 0;
	Function_62(&Local_58 + 412);
	Function_5(&Local_58 + 1048);
	Function_106(Function_560());
	if (Local_58.f_1000 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(Local_58.f_1000, 4294967295);
	}
	return;
}

void Function_5(int iParam0) //Position: 0x1ECF / 7887
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_6(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x1EF5 / 7925
{
	if (Function_8(uParam0[iParam13], 4))
	{
		if (Function_8(uParam0[iParam13], 1))
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
			Function_7(uParam0[iParam13], 1);
			Function_7(uParam0[iParam13], 2);
			Function_7(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x2023 / 8227
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_8(int iParam0, int iParam1) //Position: 0x203D / 8253
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9() //Position: 0x205A / 8282
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

void Function_10() //Position: 0x2080 / 8320
{
	if (Function_14())
	{
		Function_442();
	}
	Function_11(4096, 0, 1);
	return;
}

void Function_11(int iParam0, bool bParam1, int iParam2) //Position: 0x2097 / 8343
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_13(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_12(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_12(int iParam0, int iParam1) //Position: 0x20BF / 8383
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_13(int iParam0, int iParam1) //Position: 0x20D2 / 8402
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_14() //Position: 0x20E1 / 8417
{
	return (Function_15(4096) || Function_15(4));
}

bool Function_15(int iParam0) //Position: 0x20F2 / 8434
{
	return Function_16(Global_76905.f_132, iParam0);
}

bool Function_16(int iParam0, int iParam1) //Position: 0x2103 / 8451
{
	return (iParam0 && iParam1) == 0;
}

void Function_17(bool bParam0) //Position: 0x2110 / 8464
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_24(2);
	}
	else
	{
		Function_22(2);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (Function_21(GET_LOCAL_SLOT(), bVar0))
			{
				Function_18(bVar0, bParam0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_18(bool bParam0, bool bParam1) //Position: 0x2153 / 8531
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_21(GET_LOCAL_SLOT(), bParam0) && !Function_19(2))
		{
			return;
		}
		if (!Function_19(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
	}
	return;
}

bool Function_19(int iParam0) //Position: 0x21A0 / 8608
{
	return Function_20(Global_79337, iParam0);
}

bool Function_20(var uParam0, int iParam1) //Position: 0x21AF / 8623
{
	return (uParam0 && iParam1) == 0;
}

bool Function_21(bool bParam0, bool bParam1) //Position: 0x21BC / 8636
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

void Function_22(int iParam0) //Position: 0x21E0 / 8672
{
	Function_23(&Global_79337, iParam0);
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x21EF / 8687
{
	Function_12(uParam0, iParam1);
	return;
}

void Function_24(int iParam0) //Position: 0x21FC / 8700
{
	Function_25(&Global_79337, iParam0);
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0x220B / 8715
{
	Function_13(uParam0, iParam1);
	return;
}

void Function_26() //Position: 0x2218 / 8728
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_29(0);
	iVar1 = Function_29(1);
	Function_27(iVar0, iVar1);
	return;
}

void Function_27(int iParam0, int iParam1) //Position: 0x2231 / 8753
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (!IS_SLOT_VALID(bVar0))
		{
			if (iParam0 <= iParam1)
			{
				Function_28(bVar0, 0);
				iParam0++;
			}
			else
			{
				Function_28(bVar0, 1);
				iParam1++;
			}
		}
		bVar0++;
	}
	return;
}

void Function_28(bool bParam0, int iParam1) //Position: 0x2275 / 8821
{
	if (NET_IS_SESSION_HOST())
	{
		(*&Global_78578 + 20)[bParam0] = iParam1;
	}
	return;
}

int Function_29(int iParam0) //Position: 0x228D / 8845
{
	return Function_30(iParam0, 1);
}

int Function_30(int iParam0, bool bParam1) //Position: 0x2299 / 8857
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1) || !bParam1)
		{
			if (Function_31(bVar1, bParam1, 0) == iParam0)
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_31(bool bParam0, bool bParam1, bool bParam2) //Position: 0x22D6 / 8918
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_34(bParam0))
			{
				if (!Function_32(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_32(bool bParam0, int iParam1, bool bParam2) //Position: 0x231A / 8986
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_477(iParam1, bParam2);
	}
	if (!Function_34(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_33(iParam1), 64);
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

var Function_33(int iParam0) //Position: 0x239B / 9115
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
	}
	return "UNKNOWN";
}

bool Function_34(bool bParam0) //Position: 0x2624 / 9764
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

bool Function_35(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x26C5 / 9925
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return 0;
	}
	bVar1 = false;
	while (bVar1 < (GET_OBJECTSET_SIZE(bParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bParam0);
		if (iParam1 == GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar0)))
		{
			*uParam2 = bVar0;
			if (bParam3)
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
			}
			return 1;
		}
		bVar1++;
	}
	return 0;
}

void Function_36(int iParam0) //Position: 0x271E / 10014
{
	Function_25(&Global_78617 + 52, iParam0);
	return;
}

void Function_37(bool bParam0) //Position: 0x272F / 10031
{
	bool bVar0;
	
	Function_539();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar0 = Function_560();
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
	Function_105();
	Function_547(1, 0);
	Function_397();
	Function_342();
	Function_474();
	Function_40(0);
	Function_109();
	Function_39();
	Function_38();
	return;
}

void Function_38() //Position: 0x27AF / 10159
{
	SET_PLAYER_COMBATMODE_OVERRIDE(4294967295);
	SET_PLAYER_COMBATMODE_EXCLUSION(4294967295);
	NET_GAMER_BLIPS_FORCE_VISIBLE(false);
	NET_GAMER_ICONS_SET_STEALTH(0);
	NET_GAMER_BLIPS_SET_STEALTH(0);
	Global_79962 = 0;
	return;
}

void Function_39() //Position: 0x27CE / 10190
{
	return;
}

void Function_40(int iParam0) //Position: 0x27D4 / 10196
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_41())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_41() //Position: 0x2810 / 10256
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

void Function_42() //Position: 0x2835 / 10293
{
	if (NET_SESSION_END_GAMEPLAY())
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_492(4, 0);
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

void Function_43() //Position: 0x2866 / 10342
{
	if (IS_SCRIPT_VALID(Local_58.f_852))
	{
		TERMINATE_SCRIPT(Local_58.f_852);
	}
	return;
}

void Function_44() //Position: 0x287F / 10367
{
	bool bVar0;
	
	bVar0 = false;
	if (Function_426(&Local_31 + 20))
	{
		bVar0 = Function_422(&Local_31 + 20);
	}
	Function_45(1, bVar0, 0, 0);
	return;
}

int Function_45(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x28A4 / 10404
{
	int iVar0;
	int iVar1;
	struct<2> Var35[16];
	int iVar68;
	int iVar69;
	int iVar70;
	struct<2> Var71[2];
	int iVar76;
	bool bVar77;
	bool bVar78;
	bool bVar79;
	bool bVar80;
	int iVar81;
	
	iVar1 = 16;
	*(&iVar1 + 68) = 16;
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 1;
	iVar68 = Function_51(&Var35, &iVar1, bParam1);
	if (bParam3)
	{
		iVar76 = 0;
		while (iVar76 <= 16)
		{
			if ((Var35[iVar762] % 2) == 1)
			{
				Function_50(&iVar1, iVar76, 1, &Var71, &Var35);
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
			if (Function_49(StackVal, StackVal, Var35[iVar02], Var35[iVar692]))
			{
				iVar69 = iVar0;
			}
			iVar0++;
		}
		if (Function_49(StackVal, StackVal, Var71[02], Var71[12]))
		{
			iVar70 = 1;
		}
		else
		{
			iVar70 = 0;
		}
		Function_50(&iVar1, iVar69, iVar70, &Var71, &Var35);
		iVar76++;
	}
	if (iVar68 == 1)
	{
		Function_48(Var71[02], Var71[12], bParam3);
		return 0;
	}
	bVar77 = ABS((Var71[02] - Var71[12]));
	bVar78 = bVar77 < 1;
	bVar79 = bVar77 < 2;
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
			iVar81 = Function_45(iParam0, bParam1, bParam2, 1);
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
		if (Function_47(Var71[02], Var71[12]) >= 8)
		{
			Function_48(Var71[02], Var71[12], bParam3);
			return 3;
		}
		if (bVar79)
		{
			if (bVar80)
			{
				Function_48(Var71[02], Var71[12], bParam3);
				return 1;
			}
			Function_48(Var71[02], Var71[12], bParam3);
			return 2;
		}
	}
	if (!bParam2 && iParam0)
	{
		Function_46(&iVar1);
		Function_27(Var71[02], Var71[12]);
	}
	if (bParam3)
	{
		return 5;
	}
	return 4;
}

void Function_46(int iParam0) //Position: 0x2B12 / 11026
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = false;
	while (bVar0 > 16 && !bVar1)
	{
		if ((*iParam0)[bVar0] != 4294967295)
		{
			if (Function_31(bVar0, 0, 0) != (*iParam0 + 68)[bVar0])
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
			Function_28(bVar0, (*iParam0 + 68)[bVar0]);
		}
		bVar0++;
	}
	if (bVar1)
	{
	}
	return;
}

int Function_47(int iParam0, bool bParam1) //Position: 0x2B86 / 11142
{
	if (iParam0 >= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_48(var uParam0, var uParam1, bool bParam2) //Position: 0x2B98 / 11160
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	if (!bParam2)
	{
	}
	return;
}

bool Function_49(struct<5> Param0) //Position: 0x2BAC / 11180
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

void Function_50(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4) //Position: 0x2BD9 / 11225
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

int Function_51(var uParam0, var uParam1, bool bParam2) //Position: 0x2C4B / 11339
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
			iVar1 = Function_59(iVar0);
		}
		if (iVar1 != 4294967295)
		{
			if ((*uParam0)[iVar12] == 0)
			{
				iVar2++;
			}
			Function_52(uParam0[iVar12], iVar0);
		}
		(*uParam1)[iVar0] = iVar1;
		iVar0++;
	}
	return iVar2;
}

void Function_52(var uParam0, bool bParam1) //Position: 0x2CA5 / 11429
{
	float fVar0;
	
	*uParam0++;
	if (Function_34(bParam1))
	{
		fVar0 = (((IntToFloat(Function_58(bParam1)) * 1,5f) + (IntToFloat(Function_55(bParam1)) * -1.0f)) + (IntToFloat(Function_53(5, bParam1)) * 2.0f));
		uParam0->f_4 = (StackVal + fVar0);
	}
	return;
}

int Function_53(int iParam0, bool bParam1) //Position: 0x2CE7 / 11495
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_54(iParam0);
	}
	if (!Function_34(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

int Function_54(int iParam0) //Position: 0x2D4E / 11598
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_55(bool bParam0) //Position: 0x2D5E / 11614
{
	return Function_56(12, bParam0);
}

int Function_56(int iParam0, bool bParam1) //Position: 0x2D6B / 11627
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_57(iParam0);
	}
	if (!Function_34(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_57(int iParam0) //Position: 0x2DD9 / 11737
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_58(int iParam0) //Position: 0x2DF2 / 11762
{
	return Function_56(11, iParam0);
}

int Function_59(bool bParam0) //Position: 0x2DFF / 11775
{
	return NET_GET_GAMER_POSSE_LEADER(bParam0);
}

var Function_60() //Position: 0x2E0A / 11786
{
	if (UNK_0x214AFB8C(Global_79349.f_20))
	{
		return LAUNCH_NEW_SCRIPT(GET_ASSET_NAME(Global_79349.f_20, 4), 0);
	}
	return "";
}

void Function_61() //Position: 0x2E2D / 11821
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_62(int iParam0) //Position: 0x2E42 / 11842
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_63();
	bVar0 = Function_560();
	if (IS_ACTOR_VALID(bVar0))
	{
		DECOR_REMOVE(bVar0, "NoRegen");
		DECOR_REMOVE(bVar0, "NoBleedout");
	}
	if (IS_OBJECT_VALID(iParam0->f_180))
	{
		DESTROY_OBJECT(iParam0->f_180);
	}
	UI_ENABLE("SatchelTab_Weapons");
	UI_ENABLE("PM_Weapons");
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	if (!Function_564(1))
	{
		UI_EXIT("MPSplash");
	}
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_547(81920, 0);
	Function_547(8388608, 0);
	Function_128(iParam0);
	if (iParam0->f_100 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_100, 4294967295);
	}
	return;
}

void Function_63() //Position: 0x2F48 / 12104
{
	if (Function_15(8))
	{
		Function_442();
	}
	Function_11(8, 0, 1);
	return;
}

int Function_64() //Position: 0x2F60 / 12128
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_31(GET_LOCAL_SLOT(), 1, 0);
}

int Function_65(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x2F77 / 12151
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_102()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_101()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_101(), bParam0, 17, 0);
	}
	iVar2 = 0;
	iVar4 = 0;
	bVar5 = false;
	bVar6 = false;
	iVar13 = Function_100(32, GET_OBJECTSET_SIZE(bVar0));
	bVar6 = false;
	while (bVar6 <= iVar13)
	{
		bVar14 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, bVar0);
		bVar49 = false;
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_99(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_98(bVar14);
				vVar7 = { StackVal, StackVal, Function_98(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2,5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2,5f, "");
				Function_97(bVar14);
				vVar10 = { StackVal, StackVal, Function_97(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_95(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_94());
							if (Function_93(bVar5))
							{
								if (Function_92((*iParam1 + 228)[bVar52]))
								{
									Function_72(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_67(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_72(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_66(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_72(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
							break;
					}
					if (!bVar49)
					{
						ADD_OBJECT_TO_OBJECTSET(bVar15, bVar1);
					}
				}
			}
		}
		DESTROY_OBJECT(bVar14);
		bVar6++;
	}
	CLEAN_OBJECTSET(bVar0);
	if (GET_OBJECTSET_SIZE(bVar0) == 0)
	{
		DESTROY_OBJECTSET(bVar0);
		bVar50 = GET_LOCAL_SLOT();
		NET_SCRIPTMSG_SEND(1, 19, &bVar50, 1, 1);
		return 1;
	}
	return 0;
}

var Function_66() //Position: 0x31AB / 12715
{
	return "XPBonus";
}

void Function_67(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x31BB / 12731
{
	bool bVar0;
	
	if (Function_92(Param1))
	{
		bVar0 = Function_69(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_68(), bVar0);
	}
}

var Function_68() //Position: 0x31E1 / 12769
{
	return "PackedWeapon";
}

var Function_69(struct<5> Param0) //Position: 0x31F6 / 12790
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_70())) || SHIFT_LEFT(bParam2, Function_70() + 8));
}

bool Function_70() //Position: 0x3214 / 12820
{
	return Function_71(39);
}

int Function_71(int iParam0) //Position: 0x321F / 12831
{
	float fVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	fVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, true);
		fVar0++;
	}
	return fVar0;
}

void Function_72(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0x324D / 12877
{
	Function_84(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_77(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_76(), Function_75(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_74(), Function_73(iParam13, iParam14));
}

var Function_73(var uParam0, bool bParam1) //Position: 0x329E / 12958
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_74() //Position: 0x32AE / 12974
{
	return "PackedGrass";
}

var Function_75(bool bParam0, bool bParam1, bool bParam2) //Position: 0x32C2 / 12994
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

var Function_76() //Position: 0x32E7 / 13031
{
	return "PackedMetadata";
}

void Function_77(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x32FE / 13054
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 379, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 379, 0f, 2, 0);
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_68(), &iVar5))
				{
					Function_81(iVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_80();
				vVar0 = { StackVal, StackVal, Function_80() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 380, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 380, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_79();
				vVar0 = { StackVal, StackVal, Function_79() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 381, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 381, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_78();
				vVar0 = { StackVal, StackVal, Function_78() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
	UNK_0x1E98AFEC(bVar3, 1);
	UNK_0xFF3DB575(bVar4, 1);
}

vector3 Function_78() //Position: 0x3424 / 13348
{
	return 0.0f, 0,101f, -0,195f;
}

vector3 Function_79() //Position: 0x3435 / 13365
{
	return 0.0f, 0,127f, -0,177f;
}

vector3 Function_80() //Position: 0x3446 / 13382
{
	return 0.0f, 0,158f, -0,163f;
}

void Function_81(int iParam0, int iParam1) //Position: 0x3457 / 13399
{
	*iParam1 = Function_82(iParam0, Function_70(), 0);
	iParam1->f_4 = Function_82(iParam0, Function_70() + 8, Function_70());
	return;
}

int Function_82(int iParam0, int iParam1, bool bParam2) //Position: 0x347A / 13434
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_83((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && iParam0), bParam2);
}

int Function_83(bool bParam0) //Position: 0x3499 / 13465
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_84(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x34A5 / 13477
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_91();
			Function_79();
			vVar1 = { StackVal, StackVal, Function_79() };
			break;
		
		case 0x00000001:
			bVar0 = Function_90();
			Function_80();
			vVar1 = { StackVal, StackVal, Function_80() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_89();
			Function_78();
			vVar1 = { StackVal, StackVal, Function_78() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_88(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86(Function_88()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_85(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_85() //Position: 0x35A9 / 13737
{
	return "MPItemGiver";
}

struct<32> Function_86(bool bParam0) //Position: 0x35BD / 13757
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87("0", &cVar8, ""), 4);
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

struct<32> Function_87(char* cParam0, char* cParam1, char* cParam2) //Position: 0x3627 / 13863
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_88() //Position: 0x3646 / 13894
{
	return "PBox_";
}

var Function_89() //Position: 0x3654 / 13908
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_90() //Position: 0x367A / 13946
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_91() //Position: 0x36A2 / 13986
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_92(bool bParam0) //Position: 0x36C8 / 14024
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_93(bool bParam0) //Position: 0x36DA / 14042
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_94() //Position: 0x36EA / 14058
{
	return "ID";
}

bool Function_95(bool bParam0, int iParam1) //Position: 0x36F5 / 14069
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_20((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_96())
			{
				return 0;
			}
			return !Function_20((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_20((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_96() //Position: 0x374A / 14154
{
	return Function_16(Global_79962, 1024);
}

vector3 Function_97(bool bParam0) //Position: 0x375A / 14170
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

vector3 Function_98(bool bParam0) //Position: 0x3781 / 14209
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

var Function_99() //Position: 0x37A8 / 14248
{
	return "Type";
}

var Function_100(int iParam0, bool bParam1) //Position: 0x37B5 / 14261
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

var Function_101() //Position: 0x37C7 / 14279
{
	return "PickupsSet";
}

var Function_102() //Position: 0x37DA / 14298
{
	return "PickupFlagsSet";
}

void Function_103() //Position: 0x37F1 / 14321
{
	Function_104();
	return;
}

void Function_104() //Position: 0x37FA / 14330
{
	if (Function_15(4194304))
	{
		Function_11(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_15(8388608))
	{
		Function_11(8388608, 0, 1);
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

void Function_105() //Position: 0x3903 / 14595
{
	Function_11(1024, 0, 1);
	Function_11(1, 0, 0);
	return;
}

void Function_106(bool bParam0) //Position: 0x3917 / 14615
{
	Function_547(4194304, 0);
	DECOR_REMOVE(bParam0, "NoMelee");
	return;
}

void Function_107() //Position: 0x3935 / 14645
{
	if (!Function_108(4) && NET_IS_SESSION_HOST())
	{
		if (NET_SESSION_START_GAMEPLAY())
		{
			Function_492(4, 1);
		}
	}
	if (NET_GET_PLAYMODE() != 1 && !Function_16(Global_79962, 2))
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

bool Function_108(int iParam0) //Position: 0x3980 / 14720
{
	return Function_16(Local_31, iParam0);
}

void Function_109() //Position: 0x398D / 14733
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_110() //Position: 0x399F / 14751
{
	int iVar0;
	
	if (!NET_IS_IN_SESSION() || NET_IS_SESSION_HOST())
	{
		NET_LOG(true, "Host VBA", "HOST VARIABLES CLEARED", 0, 0, 0, 0);
		Function_493(&Global_78578 + 96);
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
		NET_LOG(true, "Host VBA", "HOST VARIABLES NOT CLEARED, %s is the host, not me", Function_111(), 0, 0, 0);
	}
	return;
}

var Function_111() //Position: 0x3A5B / 14939
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

int Function_112() //Position: 0x3A9C / 15004
{
	if (Function_564(16))
	{
	}
	else
	{
		Global_83803.f_36 = 1;
	}
	Function_396(16);
	return 1;
}

void Function_113() //Position: 0x3ABA / 15034
{
	return;
}

void Function_114() //Position: 0x3AC0 / 15040
{
	if (NET_SESSION_IS_GAMEPLAY_STARTED())
	{
		if (!Function_108(4))
		{
			if (!NET_SESSION_END_GAMEPLAY())
			{
			}
		}
		else if (NET_IS_SESSION_HOST())
		{
			Function_492(4, 0);
			NET_SESSION_END_GAMEPLAY();
		}
	}
	else if (NET_IS_SESSION_HOST())
	{
		if (Function_108(4))
		{
			Function_492(4, 0);
		}
	}
	return;
}

bool Function_115(bool bParam0) //Position: 0x3B02 / 15106
{
	if (NET_IS_SESSION_HOST())
	{
		if (Function_426(&Local_31 + 8))
		{
			if (Function_118(&Local_31 + 8))
			{
				Function_492(2, 1);
			}
		}
		else if (bParam0 != 0)
		{
			Function_493(&Local_31 + 8);
			if (!Function_426(&Local_31 + 32))
			{
				Function_493(&Local_31 + 32);
			}
			else if (!Function_117(&Local_31 + 32))
			{
				Function_493(&Local_31 + 32);
			}
			switch (bParam0)
			{
				case 0x00000003:
				case 0x00000004:
					if (!Function_426(&Local_31 + 20))
					{
						Function_423(&Local_31 + 20, 120.0f);
					}
					break;
				
				default:
					if (Function_426(&Local_31 + 20))
					{
						Function_493(&Local_31 + 20);
					}
					break;
			}
			Function_484(256, 0);
			Function_484(128, 0);
			Function_492(1, 0);
		}
		else if (!Function_426(&Local_31 + 32) && Function_116())
		{
			if (StackVal == 2)
			{
				Function_423(&Local_31 + 32, 5.0f);
			}
			else
			{
				Function_423(&Local_31 + 32, 45.0f);
			}
			Function_493(&Local_31 + 8);
		}
		else if (Function_118(&Local_31 + 32))
		{
			Function_423(&Local_31 + 8, 2.0f);
		}
	}
	if (!UNK_0xA80C6DE6(&Local_31))
	{
	}
	return Function_108(2);
}

bool Function_116() //Position: 0x3C0B / 15371
{
	return Function_481(1);
}

bool Function_117(int iParam0) //Position: 0x3C15 / 15381
{
	return Function_16(*iParam0, 2);
}

bool Function_118(int iParam0) //Position: 0x3C22 / 15394
{
	if (Function_422(iParam0))
	{
		Function_493(iParam0);
		return 1;
	}
	return 0;
}

void Function_119() //Position: 0x3C38 / 15416
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_SESSION_HOST())
	{
		if (Function_126(0) != 0 || Function_126(1) != 0)
		{
			iVar2 = 1014;
			if (!Function_505())
			{
				iVar2 = Function_124(Local_31.f_104);
			}
			if (Function_120(&iVar0, &iVar1, iVar2, 1))
			{
				Function_311(0, iVar0);
				Function_311(1, iVar1);
			}
		}
	}
	return;
}

bool Function_120(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x3C82 / 15490
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (Function_123(iParam2) <= 2)
	{
		return 0;
	}
	bVar2 = true;
	while (bVar2 < 15)
	{
		if (Function_16((*&Global_78617 + 2652)[bVar2], 1) && Function_16(iParam2, Function_83(bVar2)))
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
	*uParam0 = RAND_INT_RANGE(bVar1, bVar0);
	while ((!Function_16((*&Global_78617 + 2652)[*uParam0], 1) || !Function_16(iParam2, Function_83(*uParam0))) && iVar3 > 50)
	{
		*uParam0 = RAND_INT_RANGE_DIFFERENT(*uParam0, bVar1, bVar0);
		iVar3++;
	}
	iLocal_10 = Function_47(iVar3, iLocal_10);
	if (iVar3 == 50)
	{
		if (!Function_16((*&Global_78617 + 2652)[*uParam0], 1) || !Function_16(iParam2, Function_83(*uParam0)))
		{
			bVar4 = Function_122();
			while (!Function_16((*&Global_78617 + 2652)[*uParam0], 1) || !Function_16(iParam2, Function_83(*uParam0)))
			{
				if (bVar4)
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
	Function_12(&iVar5, 1);
	iVar6 = Function_123(iVar5);
	if (iVar6 <= 1)
	{
		Function_121(iVar5, 4);
		PRINTNL();
		return 0;
	}
	iVar7 = (RAND_INT_RANGE(false, 1000) % iVar6);
	iVar8 = 0;
	*uParam1 = 0;
	while (iVar8 < iVar7)
	{
		*uParam1++;
		if (Function_16(iVar5, Function_83(*uParam1)))
		{
			iVar8++;
		}
	}
	if (bParam3)
	{
	}
	return 1;
}

void Function_121(int iParam0, int iParam1) //Position: 0x3E29 / 15913
{
	bool bVar0;
	
	bVar0 = 31;
	while (bVar0 > 0)
	{
		if (Function_16(iParam0, Function_83(bVar0)))
		{
			PRINTINT(true);
		}
		else
		{
			PRINTINT(false);
		}
		if ((bVar0 % iParam1) != 0 && bVar0 < 0)
		{
			PRINTSTRING(" ");
		}
		bVar0 = (bVar0 + 4294967295);
	}
	return;
}

var Function_122() //Position: 0x3E70 / 15984
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_123(int iParam0) //Position: 0x3E83 / 16003
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_12(&iVar1, 2147483648);
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

int Function_124(int iParam0) //Position: 0x3EC0 / 16064
{
	struct<661> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_125(iParam0, &Var0))
	{
		return Var0.f_660;
	}
	return 0;
}

bool Function_125(int iParam0, int iParam1) //Position: 0x3EE1 / 16097
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_0[iVar0168].f_64 == iParam0)
		{
			*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_0[iVar0168] };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_126(int iParam0) //Position: 0x3F1A / 16154
{
	if (!Function_127())
	{
		return 0;
	}
	return StackVal;
}

bool Function_127() //Position: 0x3F33 / 16179
{
	return UNK_0xA80C6DE6(&Global_78578);
}

void Function_128(int iParam0) //Position: 0x3F40 / 16192
{
	Function_134(iParam0);
	Function_129(iParam0, 0);
	Function_11(32, 0, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	if (IS_SCRIPT_VALID(iParam0->f_84))
	{
		TERMINATE_SCRIPT(iParam0->f_84);
	}
	return;
}

void Function_129(int iParam0, bool bParam1) //Position: 0x3F7A / 16250
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_130(StackVal, StackVal, Function_133(), *(iParam0 + 72), !HUD_IS_FADED());
	}
	if (IS_OBJECT_VALID(iParam0->f_112))
	{
		DESTROY_OBJECT(iParam0->f_112);
	}
	if (bParam1)
	{
		iParam0->f_112 = uVar0;
	}
	if (IS_OBJECT_VALID(iParam0->f_148))
	{
		RELEASE_OBJECT_REF(iParam0->f_148);
	}
	if (IS_VOLUME_VALID(iParam0->f_416))
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
		DESTROY_VOLUME(iParam0->f_416);
	}
	if (IS_OBJECT_VALID(iParam0->f_104))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_104);
	}
	if (Function_16(iParam0->f_48, 2))
	{
		Function_12(iParam0 + 48, 2);
	}
	Function_13(iParam0 + 48, 1);
	return;
}

var Function_130(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x400C / 16396
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	var uVar14;
	
	iVar0 = 3;
	if (bParam4)
	{
		iVar1 = 1;
	}
	bVar2 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "", (iVar0 + iVar1), 1);
	vVar5 = { 0.0f, 16.0f, 12.0f };
	vVar11 = { StackVal, StackVal, Vector(vParam1, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
	if (bParam4)
	{
		GET_CAMERA_CHANNEL_DIRECTION(&uVar14, 0);
		Function_132(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_132(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_131(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(bVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0,5f, 4294967295, 0), 1, 1);
		Function_132(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_132(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_132(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_132(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_131(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar8, vVar11);
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

void Function_131(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x4145 / 16709
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 3.0f);
	SET_CAMERASHOT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam4, vParam1, *bParam0));
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_TARGET_POSITION(*bParam0, vParam7, 0);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
}

vector3 Function_132(var uParam0, bool bParam1) //Position: 0x419A / 16794
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_133() //Position: 0x41B4 / 16820
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_134(int iParam0) //Position: 0x41E3 / 16867
{
	Function_135(iParam0);
	Function_396(1048576);
	return;
}

void Function_135(int iParam0) //Position: 0x41F5 / 16885
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_92))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_92);
	}
	return;
}

void Function_136(char* cParam0) //Position: 0x420C / 16908
{
	bool bVar0;
	bool bVar1;
	
	if (IS_HUD_MAP_DRAW_ENABLED())
	{
		SET_HUD_MAP_DRAW_ENABLED(0);
	}
	if (Function_426(&Local_31 + 8))
	{
		if (!(HUD_IS_FADED() || HUD_IS_FADING()))
		{
			Function_393();
		}
	}
	else if (Function_426(&Local_31 + 32))
	{
		bVar0 = Function_418(&Local_31 + 32);
		bVar1 = CEIL(bVar0);
		if (Function_117(&Local_31 + 32))
		{
		}
		else if (Local_58.f_996 != bVar1)
		{
			Local_58.f_996 = bVar1;
			if (StackVal == 0)
			{
				Function_416("mp_lobby_lockdown_header");
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
			Function_413(Function_47(0, bVar1), 0);
		}
	}
	else if (Function_426(&Local_31 + 20))
	{
		bVar0 = Function_418(&Local_31 + 20);
		bVar1 = CEIL(bVar0);
		if (Local_58.f_996 != bVar1)
		{
			Local_58.f_996 = bVar1;
			Function_413(Function_47(0, bVar1), 0);
		}
	}
	else
	{
		Function_443();
	}
	if (!Function_108(1))
	{
		switch (cParam0)
		{
			case 0x00000000:
			case 0x00000002:
				if (!Function_426(&Local_31 + 32) && !Function_426(&Local_31 + 8))
				{
					if (!Function_116())
					{
						Function_416("mp_lobby_waiting_for_ready");
					}
					else
					{
						Function_416("mp_lobby_waiting_for_more");
					}
				}
				break;
			
			case 0x00000001:
				Function_416("mp_lobby_waiting_for_more");
				break;
			
			case 0x00000003:
			case 0x00000004:
				Function_416("mp_lobby_ignoring_posses");
				break;
			}
	}
	return;
}

int Function_137() //Position: 0x440F / 17423
{
	int iVar0;
	int iVar1;
	
	if (!Function_141())
	{
		return 1;
	}
	if (Function_491(512))
	{
		iVar0 = 0;
		if (Function_426(&Local_31 + 20))
		{
			iVar0 = Function_422(&Local_31 + 20);
		}
		iVar1 = Function_45(0, iVar0, 0, 0);
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
	if (!Function_116())
	{
		if (!Function_138())
		{
			return 2;
		}
	}
	return 0;
}

bool Function_138() //Position: 0x448D / 17549
{
	return Function_139(2048);
}

int Function_139(int iParam0) //Position: 0x4499 / 17561
{
	return Function_140(iParam0, 1) != GET_NUM_PLAYERS();
}

int Function_140(int iParam0, bool bParam1) //Position: 0x44A9 / 17577
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_34(bVar1))
		{
			if (Function_32(bVar1, iParam0, bParam1))
			{
				bVar0++;
			}
		}
		bVar1++;
	}
	return bVar0;
}

bool Function_141() //Position: 0x44E1 / 17633
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_142(bVar0))
		{
			if (Function_32(bVar0, 2048, 1))
			{
				iVar1++;
				if (iVar1 > iLocal_27)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_142(bool bParam0) //Position: 0x451E / 17694
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_34(bParam0);
}

void Function_143() //Position: 0x4534 / 17716
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Function_149(4))
	{
		Function_148(4);
		iVar0 = 0;
		while (iVar0 <= 35)
		{
			bVar2 = Function_146(iVar0);
			if (bVar2 >= 0)
			{
				if (IS_JOURNAL_ENTRY_UPDATED(bVar2))
				{
					Function_145("mp_challenge_help", 0x41200000, 1, 0, 2, 1, 0);
					return;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 <= 259)
		{
			bVar2 = Function_144(iVar1);
			if (bVar2 >= 0)
			{
				if (IS_JOURNAL_ENTRY_UPDATED(bVar2))
				{
					Function_145("mp_challenge_help", 0x41200000, 1, 0, 2, 1, 0);
					return;
				}
			}
			iVar1++;
		}
	}
	return;
}

bool Function_144(int iParam0) //Position: 0x45E0 / 17888
{
	return Global_50170[iParam022].f_24;
}

void Function_145(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x45EF / 17903
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

var Function_146(int iParam0) //Position: 0x463A / 17978
{
	if (Function_147() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_24;
	}
	return Global_49310[iParam022].f_24;
}

bool Function_147() //Position: 0x4662 / 18018
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_148(int iParam0) //Position: 0x466B / 18027
{
	Function_23(&Global_83864 + 1256, iParam0);
	return;
}

bool Function_149(int iParam0) //Position: 0x467D / 18045
{
	return Function_20(Global_83864.f_1256, iParam0);
}

int Function_150(int iParam0) //Position: 0x468F / 18063
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
	void fVar15;
	
	bVar0 = Function_560();
	bVar1 = IS_ACTOR_VALID(bVar0);
	if (bVar1)
	{
		bVar2 = IS_ACTOR_ALIVE(bVar0);
	}
	else
	{
		bVar2 = false;
	}
	iParam0->f_64 = Function_255((iParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	if (Function_502())
	{
		if (bVar1)
		{
			switch (Function_64())
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
	if (Function_254(iParam0))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_16(iParam0->f_44, 2) || Function_16(iParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
				{
					iParam0->f_96 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", false, 6, false, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
					*iParam0 = 8;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	fVar8 = Function_253();
	if (bVar1)
	{
		bVar9 = Function_252(bVar0);
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (bVar1)
			{
				bVar5 = GET_LAST_ATTACKER(bVar0);
				if (IS_ACTOR_VALID(bVar5))
				{
					iParam0->f_104 = bVar5;
				}
			}
			iParam0->f_4 = Global_29006;
			if ((Function_481(8192) || Function_16(iParam0->f_48, 512)) && !Function_477(1, 1))
			{
				iVar6 = Function_251(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_16(iParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_13(iParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_145("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_250(2, NET_GET_NET_TIME());
								Function_248(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", true);
								Function_547(65536, 1);
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
						fVar7 = (NET_GET_NET_TIME() - Function_247(2));
						if (!Function_477(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_12(iParam0 + 48, 512);
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
								DECOR_SET_BOOL(bVar0, "Drowned", true);
							}
							else
							{
								if (iVar6 < 0)
								{
								}
								DECOR_SET_BOOL(bVar0, "BledOut", true);
							}
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							KILL_ACTOR(bVar0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
					}
				}
				else
				{
					Function_547(65536, 0);
					Function_12(iParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_547(8388608, 1);
					iParam0->f_420 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_477(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - iParam0->f_420) <= 2.0f)
					{
						Function_547(8388608, 0);
					}
				}
			}
			if (Function_246(iParam0 + 108, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_16(iParam0->f_44, 16))
					{
						Function_13(iParam0 + 48, 32);
						*iParam0 = 1;
					}
					else
					{
						Function_482(iParam0 + 108, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_12(iParam0 + 48, 32);
					*iParam0 = 1;
				}
			}
			else if (!bVar1)
			{
			}
			if (IS_OBJECT_VALID(iParam0->f_180))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_180))
				{
					Function_245(iParam0->f_180, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_11(32, 1, 1);
			iParam0->f_48 = 0;
			iParam0->f_412 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(iParam0->f_160);
			Function_547(65536, 0);
			Function_547(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_16(iParam0->f_44, 8))
			{
				Function_243(0);
			}
			else if (bVar1)
			{
				iParam0->f_144 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
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
			if (Function_242(iParam0 + 108, &Global_78617 + 2648))
			{
				switch (StackVal)
				{
					case 0x00000001:
					case 0x00000002:
						if (IS_SLOT_VALID(StackVal))
						{
							iParam0->f_104 = GET_SLOT_ACTOR(StackVal);
						}
						break;
					
					case 0x00000003:
						iParam0->f_104 = "";
						break;
					
					default:
						break;
					}
			}
			Function_238(iParam0);
			*iParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_223(iParam0, iParam0->f_12 != 0);
			}
			Function_221(iParam0, 0);
			iParam0->f_64 = 0.0f;
			*iParam0 = 3;
			break;
		
		case 0x00000003:
			Function_221(iParam0, 1);
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
			Function_221(iParam0, 1);
			if (iParam0->f_64 <= 2.0f)
			{
				if (Function_16(iParam0->f_44, 512))
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
			Function_221(iParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_220();
				Function_11(32, 0, 1);
				Function_219();
			}
			iParam0->f_64 = 0.0f;
			*iParam0 = 7;
			break;
		
		case 0x00000007:
			Function_221(iParam0, 1);
			if (iParam0->f_64 <= 4.0f)
			{
				iParam0->f_64 = 0.0f;
				*iParam0 = 8;
				Function_63();
			}
			break;
		
		case 0x00000008:
			if (Function_16(iParam0->f_44, 2))
			{
				if (Function_16(iParam0->f_44, 512))
				{
					if (!Function_16(iParam0->f_48, 4096))
					{
						Function_129(iParam0, 1);
						Function_13(iParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(iParam0->f_84))
					{
						if (!Function_477(16384, 1))
						{
							Function_129(iParam0, 0);
							Function_547(16384, 1);
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
					Function_221(iParam0, 1);
				}
			}
			else
			{
				Function_221(iParam0, 1);
				iParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
				}
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_221(iParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_218(0.0f, 0.0f, 0.0f, 1.0f, 0,5f, 1);
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
				Function_219();
				if (IS_SCRIPT_VALID(iParam0->f_84))
				{
					TERMINATE_SCRIPT(iParam0->f_84);
				}
				Function_217();
				Function_63();
				Function_11(32, 0, 1);
				iParam0->f_416 = CREATE_VOLUME_IN_LAYOUT(Function_133(), Function_216(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
				*iParam0 = 10;
				iParam0->f_64 = 0.0f;
			}
			break;
		
		case 0x0000000A:
			if (iParam0->f_100 == Global_76887 || iParam0->f_64 <= 5.0f)
			{
				if (iParam0->f_64 <= 5.0f)
				{
					iParam0->f_64 = 0.0f;
				}
				if (iParam0->f_100 >= 4294967295)
				{
					STREAMING_EVICT_ACTOR(iParam0->f_100, 4294967295);
				}
				iParam0->f_100 = Global_76887;
				STREAMING_REQUEST_ACTOR(iParam0->f_100, true, false);
			}
			else if (STREAMING_IS_ACTOR_LOADED(iParam0->f_100, 4294967295))
			{
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			bVar3 = false;
			Call_Loc(iParam0->f_168);
			iVar4 = StackVal;
			if (iVar4 == 0)
			{
				if (!Function_16(iParam0->f_48, 8))
				{
					Call_Loc(iParam0->f_156);
					Function_13(iParam0 + 48, 8);
				}
				if (Function_212(StackVal, Function_16(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_179(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_16(iParam0->f_48, 32), 1))
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
				if (Function_16(iParam0->f_44, 1))
				{
					Function_12(iParam0 + 44, 1);
				}
				else
				{
					Function_134(iParam0);
					Function_129(iParam0, 0);
				}
				bVar0 = Function_560();
				Function_557(bVar0);
				if (Function_16(iParam0->f_44, 32))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				SET_CAMERA_FOLLOW_ACTOR(bVar0);
				CAMERA_RESET(0);
				if (IS_OBJECT_VALID(iParam0->f_180))
				{
					DESTROY_OBJECT(iParam0->f_180);
				}
				Global_62993 = 0;
				if (IS_VOLUME_VALID(iParam0->f_416))
				{
					REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
					DESTROY_VOLUME(iParam0->f_416);
				}
				iParam0->f_64 = 0.0f;
				*iParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_176(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
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
			else if (Function_293(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_16(iParam0->f_44, 8))
				{
					Function_175(iParam0 + 184, 0, 1, 1);
					Function_170(iParam0 + 184);
					Function_166(&bVar0, 0, 0, 0);
					Function_166(&bVar0, 0, 0, 0);
					Function_165(bVar0);
				}
				else
				{
					Function_175(iParam0 + 184, 1, 1, 1);
				}
				iParam0->f_180 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(iParam0->f_180, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(iParam0->f_180, bVar0);
				EVENT_TRAP_STORE_EVENTS(iParam0->f_180, 1);
				iParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_164(bVar0);
					vVar10 = { StackVal, StackVal, Function_164(bVar0) };
					bVar13 = Function_163(StackVal, StackVal, vVar10, 0, 1, 0);
					if (Function_321(bVar13))
					{
						iParam0->f_4 = bVar13;
					}
				}
				if (StackVal != Global_29006)
				{
					Function_323(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_162(&(Global_29008[StackVal]), 4194304);
				}
				Function_161(32);
				*iParam0 = 13;
			}
			if (!Function_16(iParam0->f_48, 128))
			{
				Call_Loc(iParam0->f_176);
				if (StackVal)
				{
					Function_13(iParam0 + 48, 128);
					Function_12(iParam0 + 48, 8);
					*iParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (iParam0->f_64 < 60.0f)
			{
				Function_161(32);
				Function_323(1, 0, 0);
				*iParam0 = 14;
			}
			if (Function_321(StackVal))
			{
				if (Function_320(StackVal))
				{
					if (StackVal && StackVal == 6)
					{
						if (!Function_160(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_160(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_160(&(Global_29008[StackVal]), 4194304))
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
					if (Function_321(bVar14))
					{
						if (StackVal && (!Function_320(bVar14) && !Function_160(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_159(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_158();
			if (!Function_16(iParam0->f_44, 32))
			{
				if (Function_155())
				{
					fVar15 = 4294967295;
					if (iParam0->f_144 >= 4294967295)
					{
						fVar15 = GET_WEAPON_EQUIPPED(bVar0, iParam0->f_144);
						if (fVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
						}
					}
					if (fVar15 == 4294967295)
					{
						fVar15 = Function_154(bVar0, 40);
						if (fVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
						}
						else
						{
							fVar15 = Function_154(bVar0, 39);
							if (fVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
							}
							else
							{
								fVar15 = Function_154(bVar0, 42);
								if (fVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
								}
								else
								{
									fVar15 = Function_154(bVar0, 41);
									if (fVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
									}
									else
									{
										fVar15 = Function_154(bVar0, 43);
										if (fVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
										}
										else
										{
											fVar15 = Function_154(bVar0, 48);
											if (fVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
											}
											else
											{
												fVar15 = Function_154(bVar0, 46);
												if (fVar15 != 4294967295)
												{
													ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!Function_16(iParam0->f_44, 64))
				{
					Function_256(0,5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_547(16384, 0);
			Function_258(bVar0, !Function_16(iParam0->f_44, 96));
			Stack.Push(bVar0);
			Call_Loc(iParam0->f_152);
			iParam0->f_104 = "";
			*iParam0 = 0;
			break;
		
		case 0x0000000F:
			if (IS_SCRIPT_VALID(iParam0->f_84))
			{
				TERMINATE_SCRIPT(iParam0->f_84);
			}
			Function_221(iParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_219();
			}
			else if (!Function_153())
			{
				Call_Loc(iParam0->f_164);
				iParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(iParam0->f_16))
				{
					Function_152(iParam0);
					*iParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*iParam0 = 20;
				}
				Function_151(iParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_221(iParam0, 1);
			if (iParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_221(iParam0, 1);
			Call_Loc(iParam0->f_172);
			if (StackVal)
			{
				if (Function_16(iParam0->f_44, 4))
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
			Function_221(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_218(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000012:
			Function_221(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_218(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000013:
			Function_221(iParam0, 1);
			if (Function_153())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_218(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_151(int iParam0) //Position: 0x5587 / 21895
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_152(int iParam0) //Position: 0x55A3 / 21923
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_217();
		iVar0 = "";
		if (Function_16(iParam0->f_44, 256))
		{
			if (Function_16(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_426(&Global_78578 + 96))
			{
				if (FABS(Function_418(&Global_78578 + 96)) > 1.0f)
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

bool Function_153() //Position: 0x5694 / 22164
{
	return (HUD_IS_FADED() || Function_562(0));
}

int Function_154(bool bParam0, int iParam1) //Position: 0x56A2 / 22178
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_155() //Position: 0x56B3 / 22195
{
	return !Function_156();
}

bool Function_156() //Position: 0x56BD / 22205
{
	if (Function_147())
	{
		return (Function_157() != 1 || Function_157() != 0);
	}
	return 0;
}

int Function_157() //Position: 0x56D6 / 22230
{
	return Global_79349.f_16;
}

void Function_158() //Position: 0x56E2 / 22242
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = Function_560();
	if (IS_ACTOR_VALID(bVar1))
	{
		bVar0 = false;
		while (bVar0 <= 39)
		{
			if (ACTOR_HAS_WEAPON(bVar1, bVar0))
			{
				SET_WEAPON_GOLD(bVar1, bVar0, Global_83823[bVar0]);
			}
			bVar0++;
		}
	}
	return;
}

void Function_159(bool bParam0) //Position: 0x5721 / 22305
{
	if (!Function_321(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_162(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_160(var uParam0, int iParam1) //Position: 0x577C / 22396
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_161(int iParam0) //Position: 0x5798 / 22424
{
	Function_23(&Global_78617 + 52, iParam0);
	return;
}

void Function_162(var uParam0, bool bParam1) //Position: 0x57A9 / 22441
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

var Function_163(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x57B8 / 22456
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

vector3 Function_164(bool bParam0) //Position: 0x5853 / 22611
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_165(bool bParam0) //Position: 0x5864 / 22628
{
	bool bVar0;
	void fVar1;
	
	bVar0 = true;
	while (bVar0 < 6)
	{
		fVar1 = GET_WEAPON_EQUIPPED(bParam0, bVar0);
		if (fVar1 != 4294967295)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, fVar1, GET_WEAPON_MAX_AMMO(fVar1));
		}
		bVar0++;
	}
	return;
}

var Function_166(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x5897 / 22679
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
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
			bVar2 = iVar1;
			if (bParam2)
			{
				switch (UNK_0xDB679ED9(bVar2))
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
				if (ACTOR_HAS_WEAPON(*bParam0, bVar2))
				{
					bVar3 = GET_AMMO_ENUM(bVar2);
					if (Function_169(bVar3, 1))
					{
						iVar5[bVar3] = 1;
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
				bVar3 = iVar1;
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_168(&Global_83591 + 276, bVar3)), 1, 0);
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
					bVar2 = (*&Global_83591 + 276)[iVar12];
					if (Function_92(bVar2))
					{
						if (Function_167(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_169(bVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*bParam0, bVar2))
								{
									GIVE_WEAPON_TO_ACTOR(*bParam0, bVar2, 0.0f, 0, 0);
								}
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 0x00000002:
				bVar2 = false;
				while (bVar2 <= 40)
				{
					if (Global_84559[bVar2])
					{
						bVar3 = GET_AMMO_ENUM(bVar2);
						if (Function_169(bVar3, 1))
						{
							bVar24 = (Function_168(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
							if (bVar24 >= 0)
							{
								_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
							}
							if (!ACTOR_HAS_WEAPON(*bParam0, bVar2))
							{
								GIVE_WEAPON_TO_ACTOR(*bParam0, bVar2, 0.0f, 0, 0);
							}
						}
					}
					bVar2++;
				}
				if (DECOR_GET_INT_VERBOSE(Function_133(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_133(), &cVar28, &iVar26))
						{
							Function_81(iVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_169(bVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
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
		SET_STAT_MESSAGE(STRING_TO_HASH("pickup_ammo_header"), UI_GET_STRING("pickup_ammo_message"), 1084227584, 0, 2, 4294967295, 0, 0, 0, 0, false, false, 0);
	}
	return iVar0;
}

bool Function_167(bool bParam0) //Position: 0x5B7A / 23418
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000030:
		case 0x0000002F:
			return 1;
			break;
	}
	return 0;
}

int Function_168(int iParam0, bool bParam1) //Position: 0x5B9C / 23452
{
	if (Function_169(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_169(bool bParam0, int iParam1) //Position: 0x5BB6 / 23478
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_170(int iParam0) //Position: 0x5BC9 / 23497
{
	int iVar0;
	var uVar1;
	int iVar2;
	char* cVar3[32];
	struct<2> Var11;
	
	Function_172(&Global_79378, iParam0);
	if (DECOR_GET_INT_VERBOSE(Function_133(), "DLCFM_Weapon", &iVar0))
	{
		iVar2 = 0;
		while (iVar2 <= iVar0)
		{
			strcpy(&cVar3, "DLCFM_Weapon_", 32);
			straddi(&cVar3, iVar2, 32);
			if (DECOR_GET_INT_VERBOSE(Function_133(), &cVar3, &uVar1))
			{
				Function_81(uVar1, &Var11);
				Function_171(StackVal, Var11, 1, 1, 1);
			}
			iVar2++;
		}
	}
	return;
}

void Function_171(struct<5> Param0) //Position: 0x5C40 / 23616
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_92(Param0))
	{
		return;
	}
	bVar0 = Function_560();
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_169(bVar1, 1))
			{
				bVar2 = TO_FLOAT(StackVal);
				if (bParam2)
				{
					bVar2 = (bVar2 - _GET_AMMO_AMOUNT(bVar0, bVar1, 0));
				}
				if (bVar2 < 0.0f)
				{
					_ADD_AMMO_OF_TYPE(bVar0, bVar1, bVar2, 1, 0);
				}
			}
		}
	}
	SET_WEAPONENUM_LOCKED(Param0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, Param0, 0.0f, 0, iParam4);
}

void Function_172(int iParam0, int iParam1) //Position: 0x5CB4 / 23732
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar2 = Function_560();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_173(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_173(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_173(23, iParam1))
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
			bVar4 = Function_154(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_154(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_173(int iParam0, int iParam1) //Position: 0x5E31 / 24113
{
	return Function_174(iParam0, iParam1) < 4294967295;
}

int Function_174(int iParam0, int iParam1) //Position: 0x5E40 / 24128
{
	int iVar0;
	
	if (!Function_92(iParam0))
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

void Function_175(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5E73 / 24179
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_560();
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
		Function_171(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_176(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x5EBE / 24254
{
	int iVar0;
	
	if (bParam1)
	{
		Function_25(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_25(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_25(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_25(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_25(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_25(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_25(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_25(&iVar0, 1048576);
	}
	return Function_177(bParam0, iVar0);
}

bool Function_177(bool bParam0, int iParam1) //Position: 0x5F2D / 24365
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_178(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_178(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_178(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_178(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_178(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_178(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_178(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_178(iParam1, 64))
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

bool Function_178(var uParam0, bool bParam1) //Position: 0x6006 / 24582
{
	return (uParam0 && bParam1) == 0;
}

bool Function_179(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x6013 / 24595
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_560();
	Function_203();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_61();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_177(bVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam0, vParam3.y, 1, true, 1);
	}
	else
	{
		bVar9 = Function_202(256);
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
		Function_199(bVar0, 0);
		Function_181();
		Function_180(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			bVar14 = Function_163(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_321(bVar14))
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

void Function_180(char* cParam0, vector3 vParam1) //Position: 0x618A / 24970
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_181() //Position: 0x61C8 / 25032
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_198(iVar1))
		{
			uVar2 = Function_197(iVar1);
			Function_182(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_182(int iParam0, bool bParam1) //Position: 0x61FA / 25082
{
	if (!Function_198(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_196(222, Global_26401[iParam0], 0);
		if (Function_195(222) <= 0)
		{
			Function_183(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_183((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_196((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_196(222, bParam1, 0);
	}
	return;
}

int Function_183(int iParam0, bool bParam1, bool bParam2) //Position: 0x6283 / 25219
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
		Function_194(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_193(iParam0);
	if (bParam2)
	{
		Function_184(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_184(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x651E / 25886
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_192(390))), 32);
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
					bVar19 = (Function_191(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_191(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_189(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_188(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_186(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_185(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_216(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_185(int iParam0) //Position: 0x6B4B / 27467
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_186(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x6B5C / 27484
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_187("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_187("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_187("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_187(char* cParam0, char* cParam1) //Position: 0x6C51 / 27729
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_188(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x6C6A / 27754
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_100(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_47(Function_100(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

void Function_189(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x6CCF / 27855
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
	if (((Function_190(iParam0) != 19 || Function_190(iParam0) != 17) || Function_190(iParam0) != 10) || Function_190(iParam0) != 9)
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

int Function_190(int iParam0) //Position: 0x6DFF / 28159
{
	return Global_35278[iParam020].f_48;
}

float Function_191(int iParam0) //Position: 0x6E0E / 28174
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_192(int iParam0) //Position: 0x6E47 / 28231
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_193(int iParam0) //Position: 0x6E84 / 28292
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

int Function_194(int iParam0, float fParam1, bool bParam2) //Position: 0x701E / 28702
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
		Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
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

int Function_195(int iParam0) //Position: 0x7238 / 29240
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_196(int iParam0, bool bParam1, int iParam2) //Position: 0x7279 / 29305
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
	Function_193(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_184(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_197(int iParam0) //Position: 0x7474 / 29812
{
	if (!Function_198(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_198(int iParam0) //Position: 0x748C / 29836
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_199(bool bParam0, bool bParam1) //Position: 0x74A1 / 29857
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_201(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_481(8192) && !Function_477(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_156())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 4, 2.0f);
	}
	if (bParam1)
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, 22, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 4, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 8, 1.0f, 0, 1);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 7, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 8, 20.0f, 0);
	}
	iVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	SET_LOCAL_PLAYER_VOICE(iVar0);
	SET_LOCAL_PLAYER_PAIN_VOICE(iVar0);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(bParam0);
	SET_DEADEYE_INVULNERABILITY(0, 0);
	SET_DEADEYE_DAMAGE_SCALING(0, 1.0f);
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_200())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_200() //Position: 0x75A1 / 30113
{
	return Function_16(Global_79962, 2048);
}

var Function_201(bool bParam0) //Position: 0x75B1 / 30129
{
	int iVar0;
	
	iVar0 = "";
	if (((bParam0 > 837 && bParam0 < 971) && bParam0 > 972) && bParam0 < 975)
	{
		return iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(bParam0);
	return iVar0;
}

bool Function_202(int iParam0) //Position: 0x75E6 / 30182
{
	return Function_20(Global_78617.f_52, iParam0);
}

void Function_203() //Position: 0x75F7 / 30199
{
	Function_211();
	Function_206();
	Function_204();
	return;
}

void Function_204() //Position: 0x7606 / 30214
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_205();
	return;
}

void Function_205() //Position: 0x763A / 30266
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_206() //Position: 0x764B / 30283
{
	Function_207(&(Global_50170[522]));
	Function_207(&(Global_50170[622]));
	Function_207(&(Global_50170[722]));
	Function_207(&(Global_50170[822]));
	Function_207(&(Global_50170[922]));
	Function_207(&(Global_50170[1022]));
	Function_207(&(Global_50170[1122]));
	return;
}

void Function_207(bool bParam0) //Position: 0x7694 / 30356
{
	Global_56092[*bParam0] = 0;
	Function_208(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_208(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x76AE / 30382
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_144(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_210(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_144(iParam0), &cVar0, 2, 2, true);
		Function_209(Function_144(iParam0), 0);
	}
}

void Function_209(bool bParam0, bool bParam1) //Position: 0x775C / 30556
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

struct<16> Function_210(int iParam0) //Position: 0x7781 / 30593
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_211() //Position: 0x77B5 / 30645
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_212(bool bParam0, bool bParam1, bool bParam2) //Position: 0x77CE / 30670
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
	Function_215(bParam0);
	Var6 = { StackVal, StackVal, Function_215(bParam0) };
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
	bVar15 = GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bParam0));
	if (IS_LAYOUTREF_VALID(bVar15))
	{
		strcpy(&cVar16, GET_OBJECT_NAME(bParam0), 64);
		stradd(&cVar16, "_FF", 64);
		bVar32 = FIND_OBJECT_IN_LAYOUT(bVar15, &cVar16);
		if (IS_OBJECT_VALID(bVar32))
		{
			Function_98(bVar32);
			vVar12.f_4 = Function_213(StackVal, StackVal, StackVal, StackVal, vVar3, Function_98(bVar32));
		}
	}
	return Function_179(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

float Function_213(vector3 vParam0, vector3 vParam3) //Position: 0x7888 / 30856
{
	var uVar0;
	
	Function_214(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_214(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x78A2 / 30882
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_215(bool bParam0) //Position: 0x78C5 / 30917
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_216() //Position: 0x78D6 / 30934
{
	var uVar0;
	
	return uVar0;
}

void Function_217() //Position: 0x78DE / 30942
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_218(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x78F3 / 30963
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

void Function_219() //Position: 0x791C / 31004
{
	UI_EXIT("MPSplash");
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	return;
}

void Function_220() //Position: 0x7976 / 31094
{
	if (!Function_15(8))
	{
		Function_442();
	}
	Function_11(8, 1, 1);
	return;
}

void Function_221(int iParam0, int iParam1) //Position: 0x798F / 31119
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (!IS_OBJECT_VALID(iParam0->f_112))
	{
		return;
	}
	if (Function_16(iParam0->f_48, 256) || Function_16(iParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_16(iParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_112);
	if (!Function_177(iParam0->f_104, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(iParam0->f_112, true);
			Function_12(iParam0 + 48, 1024);
			if (iVar0 <= 5)
			{
			}
			else
			{
				DETACH_CAMERASHOT(iParam0->f_120);
				DETACH_CAMERASHOT(iParam0->f_124);
			}
			return;
		}
	}
	if (iVar0 > 4 && iParam1)
	{
		Function_222(iParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_16(iParam0->f_48, 8192))
		{
			Function_13(iParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			Global_78617.f_48 = GET_ACTOR_SLOT(iParam0->f_104);
			Function_480(1048576);
			if (IS_OBJECT_VALID(iParam0->f_116) && IS_OBJECT_VALID(iParam0->f_120))
			{
				GET_POSITION(iParam0->f_104, &vVar16);
				vVar1 = { StackVal, StackVal, vVar16 };
				GET_CAMERASHOT_POSITION(iParam0->f_116, &vVar10);
				vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar10, vVar1, StackVal) };
				vVar13.f_4 = 0.0f;
				VNORMALIZE(&vVar13);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_120, iParam0->f_104, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_124, iParam0->f_104, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_120, iParam0->f_104, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_124, iParam0->f_104, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_120, 0.0f, 0,8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_124, 0.0f, 0,8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_120, iParam0->f_104, 1);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_124, iParam0->f_104, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_120, 0.0f, 0.0f, 0.0f, 0.0f, 1,4f, 0.0f, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_124, 0.0f, 0.0f, 0.0f, 0.0f, 1,4f, 0.0f, 1);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_120, iParam0->f_104, 243);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_124, iParam0->f_104, 243);
			}
			SET_CAMERA_FOLLOW_ACTOR_EX(iParam0->f_104, 1);
		}
	}
	return;
}

void Function_222(int iParam0) //Position: 0x7B80 / 31616
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 1);
	GET_CAMERASHOT_DIRECTION(iParam0->f_116, &vVar1);
	SET_CAMERASHOT_DIRECTION(bVar0, vVar1, 1);
	GET_CAMERASHOT_POSITION(iParam0->f_116, &vVar1);
	SET_CAMERASHOT_POSITION(bVar0, vVar1);
	SET_CAMERASHOT_FOV(bVar0, GET_CAMERASHOT_FOV(iParam0->f_116));
	return;
}

void Function_223(int iParam0, int iParam1) //Position: 0x7BC1 / 31681
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	bVar0 = Function_560();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	bVar1 = Function_133();
	Function_164(bVar0);
	vVar2 = { StackVal, StackVal, Function_164(bVar0) };
	iParam0->f_148 = FIND_OBJECT_IN_LAYOUT(bVar1, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(iParam0->f_148))
	{
		SET_OBJECT_POSITION(iParam0->f_148, vVar2);
		Function_97(bVar0);
		SET_OBJECT_ORIENTATION(iParam0->f_148, Function_97(bVar0));
	}
	else
	{
		Function_97(bVar0);
		iParam0->f_148 = CREATE_POINT_IN_LAYOUT(bVar1, "DeathAnchorPoint", vVar2, Function_97(bVar0));
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(iParam0->f_104))
	{
		iParam0->f_112 = Function_234(bVar1, 0, iParam0->f_148, 1, 0, 0);
		Function_13(iParam0 + 48, 256);
	}
	else
	{
		Function_164(iParam0->f_104);
		vVar5 = { StackVal, StackVal, Function_164(iParam0->f_104) };
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
		VNORMALIZE(&vVar8);
		iParam0->f_112 = Function_226(bVar1, 0, iParam0->f_148, iParam0->f_104, iParam0->f_148, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 1));
		iParam0->f_116 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 2);
		Function_225(iParam0->f_112, 0);
		iParam0->f_120 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 4);
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 5);
		Function_13(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_104);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar5, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar8, 1);
	}
	Function_224(iParam0->f_112);
	return;
}

void Function_224(int iParam0) //Position: 0x7D33 / 32051
{
	Function_61();
	Global_63118 = iParam0;
	return;
}

void Function_225(bool bParam0, bool bParam1) //Position: 0x7D41 / 32065
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_226(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x7D56 / 32086
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_216(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_227(&bVar0, uParam2, uParam3, uParam4);
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

void Function_227(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7DD8 / 32216
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_233(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_232(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_231(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_230(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_229(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_228(&bVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,15f, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 0,65f, 1, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0,1f, 2), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 1, 2, 0,25f, 3, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 1,5f, 4), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 0,35f, 5, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 4, 5, 0,35f, 6, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 2.0f, 7), 1, 0);
}

void Function_228(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7EF3 / 32499
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43,16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller");
}

void Function_229(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x801D / 32797
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43,16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller_pre");
}

void Function_230(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8136 / 33078
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,5f, 0,020286f, -0,644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller_pst");
}

void Function_231(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8240 / 33344
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,5f, 0,020286f, -0,644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller");
}

void Function_232(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8346 / 33606
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 3,512409f, 1,385313f, 11,99437f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,000168f, 1,399967f, 0,006852f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_233(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x83F6 / 33782
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 6,044836f, 1,844389f, 8,871694f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,125951f, 1,612884f, -0,415524f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_234(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x84AD / 33965
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_216(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nMPSuicide", 2, 1);
	}
	Function_235(&bVar0, uParam2);
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

void Function_235(var uParam0, int iParam1) //Position: 0x8524 / 34084
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_237(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_236(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_236(var uParam0, bool bParam1) //Position: 0x8590 / 34192
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 50.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0,221893f, 12.0f, 0,202029f };
	Function_97(bParam1);
	vVar3 = { StackVal, StackVal, Function_97(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_98(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_98(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548455f, 1,703024f, 0,63911f };
	Function_97(bParam1);
	vVar6 = { StackVal, StackVal, Function_97(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_98(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_98(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_237(var uParam0, bool bParam1) //Position: 0x8652 / 34386
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0,17905f, 10.0f, 0,125767f };
	Function_97(bParam1);
	vVar3 = { StackVal, StackVal, Function_97(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_98(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_98(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548457f, 1,703026f, -3,141586f };
	Function_97(bParam1);
	vVar6 = { StackVal, StackVal, Function_97(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_98(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_98(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_238(int iParam0) //Position: 0x8714 / 34580
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<16> Var3;
	vector3 vVar19;
	bool bVar22;
	
	if (!Function_16(iParam0->f_48, 2048))
	{
		Function_13(iParam0 + 48, 2048);
		bVar0 = true;
		bVar1 = false;
		if (!IS_ACTOR_VALID(iParam0->f_104))
		{
			UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
			UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
		}
		else if (IS_ACTOR_PLAYER(iParam0->f_104))
		{
			bVar2 = (&Global_78617 + 2604)->f_12;
			if (Function_92(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
			{
				bVar1 = true;
			}
			else
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_240(StackVal) };
				UI_SET_STRING("Generic_Dbuffer128_0", &Var3);
				UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
			}
			UI_SET_TEXT(StackVal, Function_239("MPSplashItem.s1"));
		}
		else if (IS_ACTOR_HUMAN(iParam0->f_104))
		{
			UI_SET_TEXT("MPSplashItem.s1", GET_ACTOR_ENUM_STRING(iParam0->f_104));
			bVar2 = GET_WEAPON_IN_HAND(iParam0->f_104);
			bVar1 = true;
		}
		else
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
			UI_EXIT("SplashObjective");
			UI_EXCLUDE("SplashObjective");
			UI_SET_STYLE("MPSplashTitle", 10);
			if (bVar1)
			{
				if (Function_92(bVar2))
				{
					if (bVar2 == 22)
					{
						UI_SET_TEXT("MPSplashItem.s0", GET_WEAPON_DISPLAY_NAME(bVar2));
					}
					else
					{
						GET_POSITION(iParam0->f_104, &vVar19);
						bVar22 = CEIL((VDIST(vVar19, *(&Global_78617 + 2604 + 16)) * 1,093613f));
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "%s - %s %s", UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(bVar2)), I2STR(bVar22), UI_GET_STRING("stat_yd"));
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

var Function_239(int iParam0) //Position: 0x8A35 / 35381
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

struct<64> Function_240(bool bParam0) //Position: 0x8C49 / 35913
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_241();
	}
	if (!Function_34(bParam0))
	{
		strcpy(&cVar0, "Tried to get title from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_241() //Position: 0x8CA7 / 36007
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_242(var uParam0, int iParam1) //Position: 0x8CB8 / 36024
{
	if (Function_246(uParam0, iParam1))
	{
		Function_482(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_243(int iParam0) //Position: 0x8CD2 / 36050
{
	Function_244(&Global_79378, 0, iParam0);
	return;
}

void Function_244(int iParam0, bool bParam1, int iParam2) //Position: 0x8CE2 / 36066
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_560();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
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
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
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

void Function_245(bool bParam0, bool bParam1) //Position: 0x8ED3 / 36563
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_133(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &bVar2))
		{
			if (Function_92(bVar2))
			{
				SET_WEAPON_GOLD(bParam1, bVar2, Global_83823[bVar2]);
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	EVENT_TRAP_CLEAR_EVENTS(bParam0);
	EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
	DESTROY_ITERATOR(bVar0);
	return;
}

bool Function_246(var uParam0, int iParam1) //Position: 0x8F4F / 36687
{
	return *uParam0 == *iParam1;
}

float Function_247(int iParam0) //Position: 0x8F5C / 36700
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_248(var uParam0, int iParam1) //Position: 0x8F6C / 36716
{
	Function_249(uParam0, (Function_54(uParam0) + iParam1));
	return;
}

void Function_249(int iParam0, int iParam1) //Position: 0x8F7F / 36735
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_250(int iParam0, int iParam1) //Position: 0x8FA8 / 36776
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

var Function_251(int iParam0, bool bParam1, int iParam2) //Position: 0x8FD1 / 36817
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_34(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_32(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_252(int iParam0) //Position: 0x9018 / 36888
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0,4f))
	{
		return 0;
	}
	return 1;
}

var Function_253() //Position: 0x902E / 36910
{
	if (Function_16(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

bool Function_254(int iParam0) //Position: 0x904E / 36942
{
	return (*iParam0 <= 1 && *iParam0 >= 14);
}

var Function_255(int iParam0, int iParam1) //Position: 0x9060 / 36960
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_256(bool bParam0) //Position: 0x9073 / 36979
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

void Function_257(int iParam0) //Position: 0x9090 / 37008
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_41())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_258(bool bParam0, bool bParam1) //Position: 0x90C5 / 37061
{
	struct<5> Var0;
	
	Function_547(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, false);
	if (Function_202(256))
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

void Function_259(var uParam0, int iParam1) //Position: 0x911B / 37147
{
	uParam0->f_12 = 2;
	iParam1 = iParam1;
	return;
}

void Function_260(var uParam0, int iParam1) //Position: 0x912A / 37162
{
	uParam0->f_168 = iParam1;
	return;
}

int Function_261() //Position: 0x9136 / 37174
{
	vector3 vVar0;
	
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER(*(&Global_79349 + 28));
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 50.0f);
	AMBIENT_SET_ELEVATION_FILTER(-15.0f, 15.0f);
	Function_264(0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(512, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 0.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(3, 5.0f, 0);
	AMBIENT_SET_SLOPE_FILTER(0, 2, 0.0f);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	if (Function_262(&vVar0, 0))
	{
		if (Function_179(StackVal, StackVal, StackVal, StackVal, Function_213(StackVal, StackVal, vVar0, 0.0f, vVar0, *(&Global_79349 + 28)), 0.0f, 0, 1))
		{
			return 1;
		}
	}
	if (Function_179(StackVal, StackVal, *(&Local_58 + 1012), 0.0f, Local_58.f_1024, 0.0f, 0, 1))
	{
		return 1;
	}
	return 2;
}

bool Function_262(int iParam0, int iParam1) //Position: 0x91D6 / 37334
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6[5];
	float fVar22[5];
	vector3 vVar28;
	int iVar31;
	bool bVar32;
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
			if (!Function_263(StackVal, StackVal, vVar6[iVar03]))
			{
				bVar1 = false;
				while (bVar1 <= 16)
				{
					if (Function_142(bVar1) && bVar1 == GET_LOCAL_SLOT())
					{
						if (!Function_32(bVar1, 2, 1))
						{
							if (GET_SLOT_POSITION(bVar1, &vVar3))
							{
								bVar32 = VDIST2(vVar3, vVar6[iVar03]);
								if (bVar32 > (fVar22[iVar0] * fVar22[iVar0]))
								{
									fVar22[iVar0] = SQRT(bVar32);
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
			if (!Function_263(StackVal, StackVal, vVar6[iVar03]))
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
	if (FIND_GROUND_INTERSECTION(&(vVar6[iVar313]), 3.0f, iParam0, &uVar33))
	{
	}
	else
	{
		*iParam0 = { StackVal, StackVal, vVar6[iVar313] };
	}
	return 1;
}

bool Function_263(vector3 vParam0) //Position: 0x9332 / 37682
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_264(bool bParam0) //Position: 0x934A / 37706
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

void Function_265(var uParam0, int iParam1) //Position: 0x93FD / 37885
{
	uParam0->f_152 = iParam1;
	return;
}

void Function_266(bool bParam0) //Position: 0x9409 / 37897
{
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	ACTOR_START_FORCE_HOLSTER(bParam0, 1, 0);
	DISABLE_PLAYER_GRINGO_USE(0, 1);
	if (!(Function_477(256, 1) || Function_477(512, 1)))
	{
		Function_267(bParam0);
	}
	return;
}

void Function_267(bool bParam0) //Position: 0x9443 / 37955
{
	Function_547(4194304, 1);
	DECOR_SET_INT(bParam0, "NoMelee", true);
	return;
}

void Function_268(int iParam0) //Position: 0x9462 / 37986
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_270(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_269(iParam0, 0.0f);
	return;
}

void Function_269(var uParam0, int iParam1) //Position: 0x948F / 38031
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_270(int iParam0) //Position: 0x949B / 38043
{
	Function_271(iParam0, 4294967295, 0, 1);
	return;
}

void Function_271(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x94A9 / 38057
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

void Function_272(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x94D3 / 38099
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
	iParam0->f_144 = 4294967295;
	iParam0->f_12 = 2;
	Function_292(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_175(iParam0 + 184, 1, 1, 1);
	}
	iParam0->f_108 = Global_78617.f_2648;
	iParam0->f_100 = 4294967295;
	Function_291(iParam0, 2);
	Function_289(iParam0);
	Function_287(iParam0);
	Function_285(iParam0);
	Function_283(iParam0);
	Function_280(iParam0);
	Function_277(iParam0);
	Function_274(iParam0);
	if (bParam2)
	{
		Function_13(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_13(iParam0 + 44, 8);
		Function_170(iParam0 + 184);
	}
	Function_273(iParam0, bParam4);
	Function_547(8388608, 0);
}

void Function_273(int iParam0, bool bParam1) //Position: 0x959B / 38299
{
	if (bParam1)
	{
		Function_13(iParam0 + 44, 32);
	}
	else
	{
		Function_12(iParam0 + 44, 32);
	}
	return;
}

void Function_274(int iParam0) //Position: 0x95BB / 38331
{
	Function_275(iParam0, 38358);
	return;
}

void Function_275(var uParam0, var uParam1) //Position: 0x95CA / 38346
{
	uParam0->f_176 = uParam1;
	return;
}

int Function_276() //Position: 0x95D6 / 38358
{
	return 0;
}

void Function_277(int iParam0) //Position: 0x95DD / 38365
{
	Function_278(iParam0, 38392);
	return;
}

void Function_278(var uParam0, var uParam1) //Position: 0x95EC / 38380
{
	uParam0->f_172 = uParam1;
	return;
}

int Function_279() //Position: 0x95F8 / 38392
{
	return 1;
}

void Function_280(int iParam0) //Position: 0x95FF / 38399
{
	Function_281(iParam0, 38426);
	return;
}

void Function_281(var uParam0, var uParam1) //Position: 0x960E / 38414
{
	uParam0->f_156 = uParam1;
	return;
}

void Function_282() //Position: 0x961A / 38426
{
	return;
}

void Function_283(int iParam0) //Position: 0x9620 / 38432
{
	Function_284(iParam0, 38426);
	return;
}

void Function_284(var uParam0, int iParam1) //Position: 0x962F / 38447
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_285(int iParam0) //Position: 0x963B / 38459
{
	Function_286(iParam0, 38426);
	return;
}

void Function_286(var uParam0, int iParam1) //Position: 0x964A / 38474
{
	uParam0->f_164 = iParam1;
	return;
}

void Function_287(var uParam0) //Position: 0x9656 / 38486
{
	Function_260(uParam0, 38501);
	return;
}

int Function_288() //Position: 0x9665 / 38501
{
	return 0;
}

void Function_289(int iParam0) //Position: 0x966C / 38508
{
	Function_265(iParam0, 38523);
	return;
}

void Function_290(var uParam0) //Position: 0x967B / 38523
{
	uParam0 = uParam0;
	return;
}

void Function_291(var uParam0, var uParam1) //Position: 0x9685 / 38533
{
	uParam0->f_52 = uParam1;
	return;
}

void Function_292(int iParam0, struct<57> Param1) //Position: 0x9691 / 38545
{
	*(iParam0 + 184) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

bool Function_293(bool bParam0, bool bParam1, float fParam2) //Position: 0x96A5 / 38565
{
	float fVar0;
	bool bVar1;
	
	if (Function_147() || !bParam1)
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

void Function_294() //Position: 0x9742 / 38722
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	Function_164(Function_560());
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_164(Function_560()), *(&Global_79349 + 28), StackVal) };
	VNORMALIZE(&vVar0);
	SET_CAMERA_DIRECTION(GET_GAME_CAMERA(), vVar0, 1);
	Function_164(Function_560());
	Function_295(StackVal, StackVal, &vVar3, &vVar6, Function_164(Function_560()), UNK_0x9C40E671(&vVar0), 0);
	STREAMING_OVERRIDE_MAIN_POI(vVar3, vVar6);
	return;
}

var Function_295(int iParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6) //Position: 0x978A / 38794
{
	bool bVar0;
	
	bVar0 = "";
	switch (iParam6)
	{
		case 0x00000000:
			bVar0 = "roam";
			break;
		
		case 0x00000001:
			bVar0 = "interior";
			break;
		
		case 0x00000002:
			bVar0 = "horse";
			break;
		
		case 0x00000003:
			bVar0 = "wagonDefault";
			break;
		
		case 0x00000004:
			bVar0 = "wagonShotgun";
			break;
		
		case 0x00000005:
			bVar0 = "wagonShotgun";
			break;
	}
	PRINTSTRING("GET_GAME_CAMERA_RESET_POSITION_HELPER called with position ");
	PRINTVECTOR(vParam2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(bParam5);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(bVar0);
	PRINTNL();
}

bool Function_296() //Position: 0x98B1 / 39089
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	
	bVar0 = Function_299();
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		return 0;
	}
	if (!DECOR_CHECK_EXIST(bVar0, "LobbyGringoSet"))
	{
		return 0;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar0, "LobbyGringoSet"));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		return 0;
	}
	iVar2 = GET_OBJECTSET_SIZE(bVar1);
	if (iVar2 <= (&Local_58 + 16)->f_32)
	{
		return 0;
	}
	bVar13 = CREATE_OBJECTSET_IN_LAYOUT("GringoAdjuster", bVar0, 12, 0);
	bVar14 = CREATE_OBJECTSET_IN_LAYOUT("GringoKeeper", bVar0, 12, 0);
	bVar3 = false;
	while (bVar3 <= iVar2)
	{
		bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar1);
		GET_OBJECT_POSITION(bVar6, &uVar9);
		bVar12 = GET_OBJECT_MODEL_NAME(bVar6);
		DISBAND_OBJECTSET(bVar13);
		iVar4 = LOCATE_GRINGOS_OF_TYPE(bVar13, bVar12, &uVar9, 0,25f, 0);
		if (iVar4 == 2)
		{
			iVar15++;
			bVar5 = false;
			while (bVar5 <= iVar4)
			{
				bVar7 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar5, bVar13);
				if (bVar7 == bVar6)
				{
					DESTROY_OBJECT(bVar6);
				}
				else
				{
					ADD_OBJECT_TO_OBJECTSET(bVar7, bVar14);
				}
				bVar5++;
			}
		}
		else
		{
			if (iVar4 >= 2)
			{
			}
			ADD_OBJECT_TO_OBJECTSET(bVar6, bVar14);
		}
		bVar3++;
	}
	Function_298(bVar1);
	Function_297(&bVar14, &bVar1);
	DESTROY_OBJECTSET(bVar13);
	DESTROY_OBJECTSET(bVar14);
	iVar2 = GET_OBJECTSET_SIZE(bVar1);
	bVar16 = ((GET_LOCAL_SLOT() + Local_31.f_92) % iVar2);
	bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar16, bVar1);
	bVar8 = GET_GRINGO_FROM_OBJECT(bVar6);
	if (!IS_GRINGO_VALID(bVar8))
	{
		return 0;
	}
	bVar17 = Function_560();
	if (!SNAP_ACTOR_TO_GRINGO(bVar17, bVar6, "UseCase1", true, 0, 1))
	{
		return 0;
	}
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar17, false, "INITIAL");
	DECOR_SET_BOOL(bVar17, "NoGringoCamera", true);
	DECOR_SET_BOOL(bVar17, "LobbyGringo", true);
	Local_58.f_1064 = bVar8;
	Function_294();
	return 1;
}

void Function_297(var uParam0, int iParam1) //Position: 0x9A92 / 39570
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = GET_OBJECTSET_SIZE(*uParam0);
	bVar0 = false;
	while (bVar0 <= iVar1)
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0);
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *iParam1))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar2, *iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_298(bool bParam0) //Position: 0x9AD2 / 39634
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
	}
	return;
}

var Function_299() //Position: 0x9B0A / 39690
{
	return Global_83591.f_140;
}

bool Function_300(bool bParam0) //Position: 0x9B16 / 39702
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_301() //Position: 0x9B35 / 39733
{
	vector3 vVar0;
	var uVar3;
	
	if (FIND_GROUND_INTERSECTION(&Local_58 + 1012, 3.0f, &vVar0, &uVar3))
	{
		*(&Local_58 + 1012) = { StackVal, StackVal, vVar0 };
		return 1;
	}
	return 0;
}

void Function_302() //Position: 0x9B59 / 39769
{
	int iVar0;
	
	iVar0 = Function_305();
	Function_303(iVar0);
	return;
}

void Function_303(int iParam0) //Position: 0x9B69 / 39785
{
	if (!Function_304(iParam0))
	{
		return;
	}
	if (iParam0 > 837 || iParam0 < 975)
	{
		return;
	}
	Global_76887 = iParam0;
	Function_249(9, Global_76887);
	return;
}

bool Function_304(int iParam0) //Position: 0x9B9C / 39836
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

int Function_305() //Position: 0x9BB3 / 39859
{
	bool bVar0;
	int iVar1;
	
	if (Function_504())
	{
		iVar1 = 1;
		bVar0 = GET_LOCAL_SLOT();
		Function_308(1, 0);
	}
	else
	{
		Function_308(0, Function_126(0));
		Function_308(1, Function_126(1));
		iVar1 = Function_64();
		bVar0 = Function_307(GET_LOCAL_SLOT(), 1);
		bVar0 = ((bVar0 + Local_31.f_100) % 8);
	}
	return Function_306(iVar1, bVar0);
}

int Function_306(int iParam0, bool bParam1) //Position: 0x9C00 / 39936
{
	int iVar0;
	
	iVar0 = (*&Global_83591 + 140 + 60[iParam09])[bParam1];
	if (!Function_304(iVar0))
	{
	}
	else if (iVar0 > 837 || iVar0 < 975)
	{
	}
	return iVar0;
}

bool Function_307(bool bParam0, bool bParam1) //Position: 0x9C36 / 39990
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = Function_31(bParam0, bParam1, 0);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (bVar0 == bParam0)
		{
			return iVar1;
		}
		if (Function_31(bVar0, bParam1, 0) == iVar2)
		{
			iVar1++;
		}
		bVar0++;
	}
	return 4294967295;
}

void Function_308(int iParam0, int iParam1) //Position: 0x9C7D / 40061
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = 837;
	iVar1 = 0;
	while (bVar0 >= 971 && iVar1 > 8)
	{
		if (IS_ACTORENUM_INSTALLED(bVar0))
		{
			if (Function_310(bVar0) == iParam1)
			{
				Function_309(iParam0, iVar1, bVar0);
				iVar1++;
			}
		}
		bVar0++;
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
			Function_309(iParam0, iVar1, Function_306(iParam0, (iVar1 % iVar2)));
			iVar1++;
		}
	}
	return;
}

void Function_309(int iParam0, int iParam1, int iParam2) //Position: 0x9CF7 / 40183
{
	(*&Global_83591 + 140 + 60[iParam09])[iParam1] = iParam2;
	return;
}

int Function_310(int iParam0) //Position: 0x9D0F / 40207
{
	return (GET_ACTORENUM_AVATAR_GROUP(iParam0) / 1000);
}

void Function_311(int iParam0, int iParam1) //Position: 0x9D1E / 40222
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578[iParam02].f_4 = iParam1;
	}
	return;
}

void Function_312() //Position: 0x9D36 / 40246
{
	Function_11(1025, 1, 0);
	return;
}

void Function_313() //Position: 0x9D44 / 40260
{
	Function_314(0);
	return;
}

void Function_314(bool bParam0) //Position: 0x9D4E / 40270
{
	Function_547(4, bParam0);
	return;
}

bool Function_315() //Position: 0x9D5A / 40282
{
	return Function_316(8);
}

int Function_316(bool bParam0) //Position: 0x9D65 / 40293
{
	return Function_16(StackVal, bParam0);
}

int Function_317() //Position: 0x9D78 / 40312
{
	return Function_316(16);
}

bool Function_318(int iParam0) //Position: 0x9D83 / 40323
{
	return UNK_0x214AFB8C(iParam0->f_24);
}

bool Function_319(int iParam0) //Position: 0x9D90 / 40336
{
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	iParam0 = iParam0;
	return _IS_CLIENT_DATA_VALID_FOR_SLOT_2(&Global_76943, 0);
}

bool Function_320(bool bParam0) //Position: 0x9DAB / 40363
{
	if (!Function_321(bParam0))
	{
		return 1;
	}
	return Function_160(&(Global_29008[bParam0]), 4);
}

bool Function_321(bool bParam0) //Position: 0x9DC7 / 40391
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_322(vector3 vParam0, var uParam3, var uParam4, bool bParam5) //Position: 0x9DDD / 40413
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
					if (!(StackVal != 6 && uParam4))
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

void Function_323(int iParam0, bool bParam1, int iParam2) //Position: 0x9E6D / 40557
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
		if (Function_321(Global_29006))
		{
			Function_162(&(Global_29008[Global_29006]), 131072);
			Function_326(&(Global_29008[Global_29006]), 2097152);
			Function_324(Global_29006);
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
				if (Function_160(&(Global_29008[iVar0]), 4) || Function_160(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_326(&(Global_29008[iVar0]), 2097155);
					Function_162(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_147())
			{
			}
			WAIT(false);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_324(int iParam0) //Position: 0x9F78 / 40824
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_325())
			{
				return;
			}
		}
		if (!Function_160(&(Global_29008[iParam0]), 2048))
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

bool Function_325() //Position: 0x9FF7 / 40951
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_160(&(Global_29008[iVar0]), 4) || Function_160(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_326(var uParam0, int iParam1) //Position: 0xA054 / 41044
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_327(vector3 vParam0, var uParam3) //Position: 0xA06B / 41067
{
	if (Local_58.f_1000 != Global_76887)
	{
		if (Local_58.f_1000 >= 4294967295)
		{
			STREAMING_EVICT_ACTOR(Local_58.f_1000, 4294967295);
		}
		Local_58.f_1000 = Global_76887;
		STREAMING_REQUEST_ACTOR(Local_58.f_1000, true, false);
	}
	if (STREAMING_IS_ACTOR_LOADED(Local_58.f_1000, 4294967295) || Local_58 <= 10.0f)
	{
		if (Local_58 <= 10.0f)
		{
		}
		if (Function_179(StackVal, StackVal, vParam0, 0.0f, uParam3, 0.0f, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_328() //Position: 0xA0DF / 41183
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	bool bVar10;
	vector3 vVar11;
	bool bVar14;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	iVar4 = 1;
	bVar5 = true;
	iVar6 = 0;
	fVar8 = 4.0f;
	if (Function_481(4096))
	{
		fVar8 = 2.0f;
	}
	bVar9 = GET_LOCAL_SLOT();
	while (iVar6 > 10 && iVar4)
	{
		fVar7 = SQRT(RAND_FLOAT_RANGE(0.0f, 1.0f));
		vVar0.f_8 = ((fVar7 * (fVar8 - 0,5f)) + 0,5f);
		bVar3 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		ROTATE_VECTOR_XZ(&vVar0, bVar3, 0);
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(&Global_79349 + 28), vVar0, StackVal) };
		bVar10 = false;
		bVar5 = true;
		while (bVar10 > 16 && bVar5)
		{
			if (IS_SLOT_VALID(bVar10) && bVar10 == bVar9)
			{
				bVar14 = GET_SLOT_ACTOR(bVar10);
				if (IS_ACTOR_VALID(bVar14))
				{
					if (Function_329(StackVal, StackVal, bVar14, vVar11) > 1.0f)
					{
						bVar5 = false;
					}
				}
			}
			bVar10++;
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
	Local_58.f_1024 = bVar3;
	*(&Local_58 + 1012) = { StackVal, StackVal, vVar11 };
	return;
}

float Function_329(bool bParam0, vector3 vParam1) //Position: 0xA1C5 / 41413
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_330(bParam0);
		vVar0 = { StackVal, StackVal, Function_330(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_330(bool bParam0) //Position: 0xA23F / 41535
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

void Function_331() //Position: 0xA2A9 / 41641
{
	Global_16517.f_8 = -1.0f;
	Global_16517.f_12 = -1.0f;
	Global_16517.f_16 = 0;
	return;
}

void Function_332(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA2C1 / 41665
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
	else if (StackVal || StackVal != 12 != 20)
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_333(Global_16524, bVar0, 1);
	}
	return;
}

void Function_333(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA39E / 41886
{
	int iVar0;
	
	Function_336(bParam0);
	Function_335(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, bParam1);
	Function_334();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
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
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_334() //Position: 0xA517 / 42263
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_335(bool bParam0) //Position: 0xA523 / 42275
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

void Function_336(int iParam0) //Position: 0xA569 / 42345
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

void Function_337() //Position: 0xA5AF / 42415
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_338() //Position: 0xA5C6 / 42438
{
	if (IS_LAYOUTREF_VALID(Global_83591.f_140))
	{
		Function_339(Global_83591.f_140);
	}
	if (IS_SCRIPT_VALID(Local_58.f_848))
	{
		TERMINATE_SCRIPT(Local_58.f_848);
	}
	return;
}

void Function_339(bool bParam0) //Position: 0xA5F4 / 42484
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_101()));
		if (IS_OBJECTSET_VALID(bVar0))
		{
			iVar1 = GET_OBJECTSET_SIZE(bVar0);
			bVar2 = false;
			while (bVar2 <= iVar1)
			{
				bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar0);
				bVar7 = FIND_OBJECT_IN_OBJECT(bVar6, Function_85());
				if (IS_OBJECT_VALID(bVar7))
				{
					if (DECOR_GET_INT_VERBOSE(bVar7, Function_74(), &uVar3))
					{
						iVar4 = Function_341(uVar3);
						iVar5 = Function_340(uVar3);
						RESET_THIS_TREE_TYPE_CLEARING(iVar4);
						RESET_THIS_TREE_TYPE_CLEARING(iVar5);
					}
				}
				bVar2++;
			}
		}
	}
	return;
}

int Function_340(int iParam0) //Position: 0xA674 / 42612
{
	return Function_82(iParam0, 32, 16);
}

int Function_341(var uParam0) //Position: 0xA682 / 42626
{
	return Function_82(uParam0, 16, 0);
}

void Function_342() //Position: 0xA690 / 42640
{
	Function_345();
	Function_344();
	Function_343();
	return;
}

void Function_343() //Position: 0xA69F / 42655
{
	Function_484(8192, 0);
	Function_484(4096, 0);
	return;
}

void Function_344() //Position: 0xA6B3 / 42675
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_58.f_840))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_58.f_840);
	}
	return;
}

void Function_345() //Position: 0xA6CC / 42700
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_58.f_836))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_58.f_836);
	}
	return;
}

void Function_346() //Position: 0xA6E5 / 42725
{
	if (Function_15(4))
	{
		Function_442();
	}
	Function_11(4, 0, 1);
	return;
}

void Function_347() //Position: 0xA6FB / 42747
{
	int iVar0;
	
	if (!NET_IS_IN_SESSION() || NET_IS_SESSION_HOST())
	{
		NET_LOG(true, "Host VBA", "HOST VARIABLES RESET", 0, 0, 0, 0);
		Function_493(&Global_78578 + 96);
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
		NET_LOG(true, "Host VBA", "HOST VARIABLES NOT RESET, %s is the host, not me", Function_111(), 0, 0, 0);
	}
	return;
}

void Function_348() //Position: 0xA7DC / 42972
{
	bool bVar0;
	
	Local_58.f_856 = 0;
	if (!Function_505())
	{
		Function_386();
	}
	Function_360(Global_79349.f_16, &Global_83591, 1);
	iLocal_27 = StackVal;
	if (Function_502())
	{
		Function_484(512, 1);
	}
	Function_547(1, 1);
	if (Function_108(2))
	{
		Function_480(1024);
	}
	else
	{
		Function_396(1024);
	}
	Function_314(0);
	HUD_CLEAR_OBJECTIVE();
	CLEAR_PRINTED_OBJECTIVE();
	Function_352();
	Function_17(1);
	Function_350();
	Function_349();
	Function_539();
	bVar0 = Function_560();
	if (IS_ACTOR_VALID(bVar0))
	{
		ACTOR_START_FORCE_HOLSTER(bVar0, 0, 0);
	}
	return;
}

void Function_349() //Position: 0xA862 / 43106
{
	Function_11(1024, 1, 0);
	Function_11(1, 0, 0);
	return;
}

void Function_350() //Position: 0xA876 / 43126
{
	Function_351(20485);
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

void Function_351(var uParam0) //Position: 0xA8A8 / 43176
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_352() //Position: 0xA8C5 / 43205
{
	Function_359(8);
	Function_358(0);
	Function_358(3);
	Function_358(7);
	Function_358(11);
	Function_358(13);
	Function_358(35);
	Function_358(16);
	Function_358(33);
	Function_358(23);
	Function_358(24);
	Function_358(9);
	Function_358(6);
	Function_358(20);
	Function_358(31);
	if (IS_PS3())
	{
		Function_358(10);
		Function_358(26);
		Function_358(29);
		Function_358(14);
		Function_358(18);
		Function_358(22);
		Function_358(32);
		Function_358(34);
	}
	Function_356(1);
	Function_353();
	ENABLE_AMBIENT_SPAWNING(false);
	return;
}

void Function_353() //Position: 0xA94B / 43339
{
	Function_359(4);
	Function_354(1, 0);
	return;
}

void Function_354(int iParam0, int iParam1) //Position: 0xA95A / 43354
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
			Function_355(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_355(int iParam0) //Position: 0xA9DC / 43484
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

void Function_356(int iParam0) //Position: 0xAA2A / 43562
{
	Function_357(&Global_28842, iParam0);
	return;
}

void Function_357(var uParam0, int iParam1) //Position: 0xAA38 / 43576
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_358(int iParam0) //Position: 0xAA5B / 43611
{
	if (iParam0 >= 4294967295 && iParam0 < 36)
	{
		return;
	}
	Global_30767[iParam0] = 0;
	Global_30837 = 1;
	return;
}

void Function_359(int iParam0) //Position: 0xAA7B / 43643
{
	int iVar0;
	
	if (Function_16(iParam0, 1) && Function_16(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_360(int iParam0, int iParam1, int iParam2) //Position: 0xAAAF / 43695
{
	iParam1->f_4 = 2;
	iParam2 = iParam2;
	iParam1->f_8 = 16;
	Function_380(iParam1);
	Function_378();
	Function_376();
	switch (iParam0)
	{
		case 0x00000001:
			Function_373(iParam1);
			break;
		
		case 0x00000002:
			*iParam1 = 2500;
			iParam1->f_16 = 600.0f;
			Function_372(iParam1);
			Function_368(iParam1 + 276, 0);
			Function_366(iParam1, 1, 0, 5, 1);
			Function_366(iParam1, 2, 22, 1, 1);
			Function_363(iParam1, 1, 7, 3, 1);
			Function_363(iParam1, 2, 10, 1, 1);
			Function_363(iParam1, 3, 17, 2, 1);
			Function_363(iParam1, 4, 19, 1, 1);
			Function_363(iParam1, 5, 24, 1, 1);
			Function_362(iParam1 + 276, 4);
			break;
		
		case 0x00000003:
			*iParam1 = 1500;
			iParam1->f_16 = 600.0f;
			Function_372(iParam1);
			Function_368(iParam1 + 276, 0);
			break;
		
		case 0x00000011:
			*iParam1 = 5000;
			iParam1->f_16 = 600.0f;
			Function_372(iParam1);
			Function_368(iParam1 + 276, 0);
			Function_366(iParam1, 1, 0, 5, 1);
			Function_366(iParam1, 2, 22, 1, 1);
			Function_363(iParam1, 1, 7, 3, 1);
			Function_363(iParam1, 2, 10, 1, 1);
			Function_363(iParam1, 3, 17, 2, 1);
			Function_363(iParam1, 4, 19, 1, 1);
			Function_363(iParam1, 5, 24, 1, 1);
			Function_362(iParam1 + 276, 4);
			break;
		
		case 0x00000006:
			iParam1->f_16 = 900.0f;
			Function_372(iParam1);
			Function_368(iParam1 + 276, 0);
			Function_366(iParam1, 1, 0, 3, 1);
			Function_366(iParam1, 2, 22, 1, 1);
			Function_363(iParam1, 1, 9, 2, 1);
			Function_363(iParam1, 2, 1, 2, 1);
			Function_363(iParam1, 3, 16, 2, 1);
			Function_363(iParam1, 4, 19, 2, 1);
			Function_363(iParam1, 5, 24, 1, 1);
			Function_362(iParam1 + 276, 4);
			break;
		
		case 0x00000007:
			*iParam1 = 10;
			iParam1->f_16 = 600.0f;
			Function_368(iParam1 + 276, 0);
			Function_372(iParam1);
			Function_366(iParam1, 1, 0, 5, 1);
			Function_366(iParam1, 2, 22, 1, 1);
			Function_363(iParam1, 1, 7, 3, 1);
			Function_363(iParam1, 2, 10, 1, 1);
			Function_363(iParam1, 3, 17, 2, 1);
			Function_363(iParam1, 4, 19, 1, 1);
			Function_363(iParam1, 5, 24, 1, 1);
			Function_362(iParam1 + 276, 4);
			break;
		
		case 0x00000008:
			*iParam1 = 7;
			iParam1->f_16 = 600.0f;
			Function_368(iParam1 + 276, 0);
			Function_366(iParam1, 1, 0, 5, 1);
			Function_366(iParam1, 2, 22, 1, 1);
			Function_366(iParam1, 3, 25, 2, 1);
			Function_363(iParam1, 1, 9, 3, 1);
			Function_363(iParam1, 2, 1, 1, 1);
			Function_363(iParam1, 3, 24, 2, 1);
			Function_372(iParam1);
			Function_362(iParam1 + 276, 4);
			break;
		
		case 0x00000009:
			*iParam1 = 3;
			iParam1->f_16 = 600.0f;
			Function_368(iParam1 + 276, 0);
			Function_366(iParam1, 1, 0, 5, 1);
			Function_366(iParam1, 2, 22, 1, 1);
			Function_366(iParam1, 3, 25, 2, 1);
			Function_363(iParam1, 1, 9, 3, 1);
			Function_363(iParam1, 2, 1, 1, 1);
			Function_363(iParam1, 3, 24, 2, 1);
			Function_372(iParam1);
			Function_362(iParam1 + 276, 4);
			break;
		
		case 0x0000000E:
			iParam1->f_8 = 2;
			Function_368(iParam1 + 276, 0);
			Function_366(iParam1, 1, 5, 2, 1);
			break;
		
		case 0x0000000A:
			iParam1->f_8 = 6;
			Function_372(iParam1);
			break;
		
		case 0x0000000B:
			iParam1->f_8 = 6;
			Function_372(iParam1);
			break;
		
		case 0x0000000C:
			iParam1->f_8 = 16;
			Function_368(iParam1 + 276, 0);
			Function_366(iParam1, 1, 5, 5, 1);
			Function_366(iParam1, 3, 17, 2, 1);
			Function_372(iParam1);
			break;
		
		case 0x00000012:
			iParam1->f_8 = 2;
			Function_372(iParam1);
			break;
		
		case 0x00000013:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_368(iParam1 + 276, 0);
			Function_366(iParam1, 1, 0, 8, 1);
			Function_366(iParam1, 2, 9, 6, 1);
			Function_366(iParam1, 3, 22, 1, 1);
			Function_372(iParam1);
			Function_362(iParam1 + 276, 0);
			break;
		
		case 0x00000014:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_361(iParam1);
			Function_362(iParam1 + 276, 0);
			break;
	}
	if (Function_96())
	{
		Function_362(iParam1 + 276, 2);
	}
	return;
}

void Function_361(int iParam0) //Position: 0xAE9C / 44700
{
	iParam0->f_844 = 1;
	return;
}

void Function_362(int iParam0, int iParam1) //Position: 0xAEA8 / 44712
{
	(iParam0 + 228)->f_220 = 0;
	Function_13(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_363(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xAEC0 / 44736
{
	Function_364(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_364(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xAED8 / 44760
{
	Function_365(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_365(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xAEEF / 44783
{
	if (!Function_93(iParam1))
	{
		return;
	}
	Function_271(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xAF12 / 44818
{
	Function_367(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_367(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAF2A / 44842
{
	Function_365(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_368(int iParam0, bool bParam1) //Position: 0xAF3F / 44863
{
	Function_268(iParam0);
	Function_268(iParam0 + 228);
	if (bParam1)
	{
		Function_369(iParam0);
	}
	return;
}

void Function_369(int iParam0) //Position: 0xAF5B / 44891
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_370(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_370(var uParam0, int iParam1) //Position: 0xAF7B / 44923
{
	Function_371(uParam0, iParam1, 0);
	return;
}

void Function_371(int iParam0, int iParam1, int iParam2) //Position: 0xAF89 / 44937
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_372(int iParam0) //Position: 0xAF9A / 44954
{
	iParam0->f_844 = 0;
	return;
}

void Function_373(int iParam0) //Position: 0xAFA6 / 44966
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = Function_191(487);
	iVar1 = 1;
	iVar2 = 1;
	iVar3 = 3;
	while (iVar1 > 50 && iVar2)
	{
		if (fVar0 <= Global_83864[iVar16] && Global_83864[iVar16] < 0.0f)
		{
			if (!StackVal != 4294967295)
			{
				Function_375(StackVal, iParam0, iVar3, 0, 1);
				if (Global_83823[StackVal])
				{
					SET_WEAPON_GOLD(StackVal, Function_560(), true);
				}
				iVar3++;
			}
			Function_374(iVar1, 1);
			iVar1++;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return;
}

void Function_374(int iParam0, int iParam1) //Position: 0xB043 / 45123
{
	Function_13(&Global_83864[iParam06] + 16, iParam1);
	return;
}

void Function_375(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB058 / 45144
{
	Function_367(iParam0 + 276, uParam1, uParam2, uParam3, uParam4);
}

void Function_376() //Position: 0xB070 / 45168
{
	var uVar0;
	
	uVar0 = "";
	Function_377(uVar0, uVar0, 0, 58, 58, 1);
	return;
}

void Function_377(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0xB086 / 45190
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

void Function_378() //Position: 0xB116 / 45334
{
	Function_379("%s", 0);
	return;
}

void Function_379(bool bParam0, bool bParam1) //Position: 0xB125 / 45349
{
	if (bParam1)
	{
		UI_SET_STRING("MP_SB_TFMT", UI_GET_STRING(bParam0));
	}
	else
	{
		UI_SET_STRING("MP_SB_TFMT", bParam0);
	}
	return;
}

void Function_380(int iParam0) //Position: 0xB15A / 45402
{
	Function_368(iParam0 + 276, 1);
	Function_361(iParam0);
	Function_366(iParam0, 1, 4, 7, 1);
	Function_366(iParam0, 2, 22, 1, 1);
	Function_363(iParam0, 1, 5, 5, 1);
	Function_363(iParam0, 2, 10, 3, 1);
	Function_363(iParam0, 3, 17, 1, 1);
	Function_363(iParam0, 4, 19, 1, 1);
	Function_363(iParam0, 5, 24, 1, 1);
	Function_385(iParam0, 5, 3);
	Function_385(iParam0, 4, 3);
	Function_385(iParam0, 3, 10);
	Function_385(iParam0, 7, 18);
	Function_385(iParam0, 6, 20);
	Function_385(iParam0, 8, 15);
	Function_385(iParam0, 9, 15);
	Function_385(iParam0, 10, 10);
	Function_385(iParam0, 11, 5);
	Function_384(iParam0, 0, 45.0f);
	Function_384(iParam0, 1, 45.0f);
	Function_384(iParam0, 2, 15.0f);
	Function_384(iParam0, 3, 15.0f);
	Function_384(iParam0, 4, 30.0f);
	Function_384(iParam0, 5, 30.0f);
	Function_383(iParam0, 15.0f);
	Function_382(iParam0, 15.0f);
	Function_381(iParam0, 15.0f);
	Function_269(iParam0 + 276 + 228, 100.0f);
	Function_362(iParam0 + 276, 0);
	return;
}

void Function_381(int iParam0, int iParam1) //Position: 0xB270 / 45680
{
	(iParam0 + 276 + 528)->f_28 = iParam1;
	return;
}

void Function_382(int iParam0, int iParam1) //Position: 0xB282 / 45698
{
	(iParam0 + 276 + 528)->f_36 = iParam1;
	return;
}

void Function_383(int iParam0, int iParam1) //Position: 0xB294 / 45716
{
	(iParam0 + 276 + 528)->f_32 = iParam1;
	return;
}

void Function_384(int iParam0, int iParam1, int iParam2) //Position: 0xB2A6 / 45734
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

void Function_385(int iParam0, int iParam1, int iParam2) //Position: 0xB2C9 / 45769
{
	Function_371(iParam0 + 276, iParam1, iParam2);
	return;
}

void Function_386() //Position: 0xB2DB / 45787
{
	Global_79962 = Function_391(Local_31.f_104);
	Function_387();
	NET_GAMER_BLIPS_FORCE_VISIBLE(Function_16(Global_79962, 4096));
	if (Function_16(Global_79962, 8192))
	{
		NET_GAMER_ICONS_SET_STEALTH(3);
	}
	if (Function_16(Global_79962, 65536))
	{
		NET_GAMER_BLIPS_SET_STEALTH(1);
	}
	return;
}

void Function_387() //Position: 0xB31F / 45855
{
	if (Function_16(Global_79962, 16))
	{
		SET_PLAYER_COMBATMODE_OVERRIDE(1);
	}
	else if (Function_16(Global_79962, 8))
	{
		SET_PLAYER_COMBATMODE_OVERRIDE(2);
	}
	else
	{
		SET_PLAYER_COMBATMODE_OVERRIDE(4294967295);
	}
	if (Function_390())
	{
		if (!Function_389() && !Function_388())
		{
			SET_PLAYER_COMBATMODE_EXCLUSION(2);
		}
	}
	return;
}

bool Function_388() //Position: 0xB368 / 45928
{
	return Function_16(Global_79962, 16);
}

bool Function_389() //Position: 0xB377 / 45943
{
	return Function_16(Global_79962, 8);
}

bool Function_390() //Position: 0xB386 / 45958
{
	return Function_16(Global_79962, 32768);
}

int Function_391(int iParam0) //Position: 0xB397 / 45975
{
	struct<657> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_125(iParam0, &Var0))
	{
		return Var0.f_656;
	}
	return 0;
}

int Function_392(int iParam0) //Position: 0xB3B8 / 46008
{
	STREAMING_SET_CUTSCENE_MODE(0);
	if (IS_OBJECT_VALID(StackVal))
	{
		if (IS_OBJECT_VALID(iParam0->f_344))
		{
			DESTROY_OBJECT(iParam0->f_344);
		}
		REMOVE_CAMERA_FROM_CHANNEL(StackVal, 0);
		DEREFERENCE_OBJECT(StackVal);
		DESTROY_CAMERA(StackVal);
		DESTROY_OBJECTSET(iParam0->f_184);
		DESTROY_OBJECTSET(iParam0->f_108);
		DESTROY_OBJECT(iParam0->f_16);
		CAMERA_RESET(0);
		STREAMING_RELEASE_MAIN_POI();
		STREAMING_UNLOAD_SCENE();
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

void Function_393() //Position: 0xB426 / 46118
{
	char* cVar0[32];
	struct<8> Var8;
	
	HUD_FADE_TO_LOADING_SCREEN();
	strcpy(&cVar0, "LS_", 32);
	stradd(&cVar0, &Global_79349, 32);
	UI_TEXTURE_SET_NAME("LoadingScreenTexture", &cVar0);
	UI_SHOW("LoadingScreenTexture");
	UI_SHOW("LoadingMissionName");
	if (Function_417(&Global_79349, 1024))
	{
		UI_SET_TEXT("LoadingMissionName", &Global_79349 + 48);
	}
	else
	{
		Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_415(Global_79349.f_40) };
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("mp_lobby_loading"), UI_GET_STRING(&Global_79349 + 48), UI_GET_STRING(&Var8), 0);
		UI_SET_TEXT("LoadingMissionName", "Generic_Dbuffer128_0");
	}
	UI_REFRESH("LoadingMissionName");
	UI_SET_TEXT("LoadingSpinner", "Common_Null");
	UI_REFRESH("LoadingSpinner");
	UI_REFRESH("LoadingScreen");
	return;
}

void Function_394() //Position: 0xB59A / 46490
{
	Function_303(Function_395());
	return;
}

var Function_395() //Position: 0xB5A6 / 46502
{
	if (!IS_STRING_VALID(&Global_76854))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76854);
}

void Function_396(int iParam0) //Position: 0xB5C0 / 46528
{
	Function_23(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_397() //Position: 0xB5F9 / 46585
{
	UI_EXIT("Lobby_NaviOnly");
	UI_EXIT("Lobby_NaviReplay");
	UI_EXIT("Lobby_ReplayOnly");
	return;
}

void Function_398(int iParam0, int iParam1) //Position: 0xB63F / 46655
{
	Function_399(iParam0, iParam1, 47614);
	return;
}

void Function_399(var uParam0, var uParam1, int iParam2) //Position: 0xB650 / 46672
{
	if (Function_15(0x4000000))
	{
		Function_442();
		Function_11(0x4000000, 0, 1);
	}
	if (Function_15(0x10000000))
	{
		Function_442();
		Function_11(0x10000000, 0, 1);
	}
	if (Function_15(2) != Function_15(0x2000000))
	{
		Function_442();
		Function_11(0x2000000, Function_15(2), 1);
	}
	if (Function_404())
	{
		Function_403(!Function_15(16));
	}
	if (Function_15(16))
	{
		Function_400(&uParam0, &uParam1, &iParam2);
		if (Function_15(8192))
		{
			if (!Function_15(4194304))
			{
				Function_11(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_15(8388608))
			{
				Function_11(8388608, 1, 1);
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
			Function_104();
		}
		Function_11(16384, 1, 1);
	}
	else if (!Function_15(32))
	{
		Function_104();
	}
	Function_11(32768, 0, 1);
	return;
}

void Function_400(var uParam0, var uParam1, int iParam2) //Position: 0xB7E9 / 47081
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_11(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_15(0x40000000);
	bVar3 = !Function_15(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_34(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_32(bVar1, 2048, 1))
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
				if (Function_401(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_15(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("Common_Null"));
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
			if (Function_401(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "DEBUG");
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

bool Function_401(bool bParam0, int iParam1, int iParam2) //Position: 0xB961 / 47457
{
	var uVar0;
	
	return Function_402(bParam0, iParam1, &uVar0, iParam2);
}

bool Function_402(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xB972 / 47474
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

void Function_403(bool bParam0) //Position: 0xB9D7 / 47575
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_11(16384, 0, 1);
	return;
}

bool Function_404() //Position: 0xB9F1 / 47601
{
	return Function_15(32768);
}

int Function_405() //Position: 0xB9FE / 47614
{
	return 1;
}

int Function_406(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBA05 / 47621
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	uParam1 = uParam1;
	uParam2 = uParam2;
	uParam3 = uParam3;
	if (Function_402(bParam0, bParam0 * -2, &uVar0, 0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(0);
		bVar1 = "<VNO>";
		if (Function_32(bParam0, 256, 1))
		{
			bVar1 = "<VGO>";
		}
		else if (Function_32(bParam0, 512, 1))
		{
			bVar1 = "<VSKIP>";
		}
		else if (Function_32(bParam0, 1024, 1))
		{
		}
		bVar2 = false;
		if (Function_481(65536))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, UI_GET_STRING(Function_407((Function_53(8, bParam0) - 1), 0)));
			bVar2++;
		}
		if (Function_15(0x1000000))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, bVar1);
			bVar2++;
		}
	}
	return 0;
}

var Function_407(bool bParam0, bool bParam1) //Position: 0xBABE / 47806
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

int Function_408() //Position: 0xBE31 / 48689
{
	bool bVar0;
	
	bVar0 = "";
	switch (Local_58.f_1004)
	{
		case 0x00000003:
		case 0x00000004:
			bVar0 = "mp_lobby_teamlock";
			break;
	}
	if (!Function_409(!IS_STRING_VALID(bVar0)))
	{
		return 0;
	}
	if (Function_404() && IS_STRING_VALID(bVar0))
	{
		NET_PLAYER_LIST_SET_TITLE(bVar0);
	}
	return 1;
}

bool Function_409(bool bParam0) //Position: 0xBE8B / 48779
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_404() || Function_412(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_411(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_404())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_410(Function_404());
	return 1;
}

void Function_410(bool bParam0) //Position: 0xBF0C / 48908
{
	if (bParam0 || Function_15(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_15(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_15(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_15(1048576) || Function_15(4)) || Function_477(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_11(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_411(bool bParam0) //Position: 0xBF95 / 49045
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_414(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, bParam0);
}

bool Function_412(bool bParam0, bool bParam1) //Position: 0xBFA9 / 49065
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

void Function_413(int iParam0, bool bParam1) //Position: 0xBFDD / 49117
{
	if (Global_76905.f_128 != iParam0)
	{
		Function_11(0x20000000, 1, 1);
	}
	Global_76905.f_128 = iParam0;
	Function_11(65536, bParam1, 1);
	return;
}

struct<64> Function_414(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xC00B / 49163
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

struct<32> Function_415(int iParam0) //Position: 0xC050 / 49232
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_321(iParam0))
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

void Function_416(char* cParam0) //Position: 0xC10D / 49421
{
	if (Function_412(cParam0, &Global_76905))
	{
		Function_11(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

bool Function_417(var uParam0, int iParam1) //Position: 0xC131 / 49457
{
	return Function_16(uParam0->f_44, iParam1);
}

float Function_418(int iParam0) //Position: 0xC140 / 49472
{
	return -Function_419(iParam0);
}

float Function_419(int iParam0) //Position: 0xC14C / 49484
{
	if (Function_426(iParam0))
	{
		if (Function_117(iParam0))
		{
			return StackVal;
		}
		Function_420();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_420() //Position: 0xC21D / 49693
{
	if (!Function_421())
	{
	}
	return;
}

bool Function_421() //Position: 0xC22A / 49706
{
	return NET_IS_IN_SESSION();
}

bool Function_422(int iParam0) //Position: 0xC233 / 49715
{
	if (Function_426(iParam0))
	{
		if (Function_418(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_423(var uParam0, float fParam1) //Position: 0xC24E / 49742
{
	Function_424(uParam0, -fParam1);
	return;
}

void Function_424(var uParam0, float fParam1) //Position: 0xC25C / 49756
{
	Function_420();
	Function_425(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_425(int iParam0, int iParam1) //Position: 0xC270 / 49776
{
	iParam0->f_4 = iParam1;
	Function_13(iParam0, 1);
	Function_12(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_426(int iParam0) //Position: 0xC28D / 49805
{
	return Function_16(*iParam0, 1);
}

void Function_427(var uParam0) //Position: 0xC29A / 49818
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Function_437(uParam0);
	if (Function_108(1))
	{
		if (Local_58.f_12 == 19)
		{
			Function_436(0, UI_ISFOCUSED("HudGamerList"));
		}
		else
		{
			Function_342();
		}
		Function_435();
		return;
	}
	bVar0 = UI_ISFOCUSED("HudScene");
	if (Local_58.f_12 == 36)
	{
		Function_343();
		if (Function_426(&Local_31 + 32))
		{
			if (Function_418(&Local_31 + 32) >= 2.0f && !Function_117(&Local_31 + 32))
			{
				bVar0 = false;
				Function_106(Function_560());
			}
		}
		if (Function_426(&Local_31 + 8))
		{
			bVar0 = false;
			Function_106(Function_560());
		}
		if (bVar0)
		{
			switch (Function_433())
			{
				case 0x00000000:
					Function_432();
					if (IS_SCRIPT_USE_CONTEXT_VALID(Local_58.f_836))
					{
						if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 13, 1, 0))
						{
							Function_342();
							bVar0 = false;
							PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
							Function_495(3);
							Function_106(Function_560());
						}
					}
					if (bVar0 && !Function_505())
					{
						Function_431();
						if (IS_SCRIPT_USE_CONTEXT_VALID(Local_58.f_840))
						{
							if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 15, 1, 0))
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
								Function_342();
								Function_495(1);
								Function_106(Function_560());
							}
						}
					}
					break;
				
				case 0x00000001:
					Function_430();
					if (IS_SCRIPT_USE_CONTEXT_VALID(Local_58.f_840))
					{
						if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 15, 1, 0))
						{
							PLAY_SOUND_FRONTEND("HUD_MENU_MAP_DE-ACTIVATE_MASTER");
							Function_342();
							Function_495(0);
							Function_267(Function_560());
							UPDATE_PROFILE_STAT(&Global_79349, -1.0f, 0);
						}
					}
					break;
				
				case 0x00000003:
					Function_428();
					if (IS_SCRIPT_USE_CONTEXT_VALID(Local_58.f_836))
					{
						if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 13, 1, 0))
						{
							PLAY_SOUND_FRONTEND("HUD_MENU_MAP_DE-ACTIVATE_MASTER");
							Function_342();
							Function_495(0);
							Function_267(Function_560());
						}
					}
					break;
			}
		}
		else
		{
			Function_342();
		}
	}
	else if (Local_58.f_12 == 19)
	{
		Function_345();
		Function_344();
		bVar1 = (UI_ISFOCUSED("HudGamerList") && Function_15(16));
		bVar2 = false;
		if (Function_433() == 2 && !Function_505())
		{
			bVar0 = true;
			if (Function_426(&Local_31 + 44))
			{
				if (Function_418(&Local_31 + 44) > 5.0f)
				{
					bVar0 = false;
				}
			}
			if (bVar0)
			{
				bVar2 = true;
				if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 15, 1, 0))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
					bVar2 = false;
					Function_495(2);
				}
			}
		}
		Function_436(bVar2, bVar1);
	}
	return;
}

int Function_428() //Position: 0xC544 / 50500
{
	if (Function_116())
	{
		return Function_429(&Local_58 + 836, "mp_lobby_cancel_ready", 13, 1);
	}
	return Function_429(&Local_58 + 836, "mp_lobby_ready_down", 13, 1);
}

int Function_429(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC595 / 50581
{
	if (HUD_IS_FADED() || HUD_IS_FADING())
	{
		return 0;
	}
	if (!IS_SCRIPT_USE_CONTEXT_VALID(*uParam0))
	{
		*uParam0 = ADD_SCRIPT_USE_CONTEXT(bParam1, bParam3, iParam2, false, 0, 0, 0, 4294967295, 0);
	}
	return IS_SCRIPT_USE_CONTEXT_VALID(*uParam0);
}

int Function_430() //Position: 0xC5CD / 50637
{
	return Function_429(&Local_58 + 840, "mp_lobby_cancel_skip", 15, 1);
}

int Function_431() //Position: 0xC5F5 / 50677
{
	return Function_429(&Local_58 + 840, "mp_lobby_vote_skip", 15, 1);
}

int Function_432() //Position: 0xC61B / 50715
{
	if (Function_116())
	{
		return Function_429(&Local_58 + 836, "mp_lobby_vote_ready", 13, 1);
	}
	return Function_429(&Local_58 + 836, "mp_lobby_ready_up", 13, 1);
}

int Function_433() //Position: 0xC668 / 50792
{
	return Function_434(GET_LOCAL_SLOT());
}

int Function_434(bool bParam0) //Position: 0xC674 / 50804
{
	if (Function_32(bParam0, 512, 1))
	{
		return 1;
	}
	if (Function_32(bParam0, 256, 1))
	{
		return 3;
	}
	if (Function_32(bParam0, 1024, 1))
	{
		return 2;
	}
	return 0;
}

void Function_435() //Position: 0xC6AB / 50859
{
	if (Function_15(0x1000000))
	{
		Function_442();
	}
	Function_11(0x1000000, 0, 1);
	return;
}

void Function_436(bool bParam0, bool bParam1) //Position: 0xC6C9 / 50889
{
	if (bParam0 == Function_491(8192) || bParam1 == Function_491(4096))
	{
		if (bParam0 && bParam1)
		{
			UI_ENTER("Lobby_NaviReplay");
		}
		else if (bParam0 && !bParam1)
		{
			UI_ENTER("Lobby_ReplayOnly");
		}
		else if (!bParam0 && bParam1)
		{
			UI_ENTER("Lobby_NaviOnly");
		}
		else
		{
			Function_397();
		}
		Function_484(8192, bParam0);
		Function_484(4096, bParam1);
	}
	return;
}

void Function_437(int iParam0) //Position: 0xC75B / 51035
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (Function_108(1))
	{
		switch (StackVal)
		{
			case 0x00000001:
				Function_416("mp_lobby_vote_skip_passed");
				Function_435();
				break;
			
			case 0x00000002:
				Function_416("mp_lobby_vote_replay_passed");
				Function_435();
				break;
			
			case 0x00000003:
				Function_416("mp_lobby_vote_ready_passed");
				Function_435();
				break;
			
			default:
				Function_441();
				break;
		}
		return;
	}
	iVar4 = Function_440(&iVar0, &iVar1, &uVar3, &uVar2);
	if (Function_439())
	{
		Function_435();
	}
	else
	{
		Function_441();
	}
	if (!NET_IS_SESSION_HOST())
	{
		return;
	}
	if (iVar4 == 0)
	{
		if (StackVal != 0)
		{
			Function_493(&Local_31 + 32);
			Local_31.f_4 = iVar4;
			Function_484(128, 0);
		}
		return;
	}
	if (iParam0 == 0 && iVar4 != 3)
	{
		if (!Function_116() && Function_426(&Local_31 + 32))
		{
			Function_493(&Local_31 + 32);
			Function_484(128, 0);
		}
	}
	Local_31.f_4 = iVar4;
	if (iVar4 == 3)
	{
		if (Local_58.f_12 == 36)
		{
			if (!Function_116() && (iVar1 + iVar0) > NET_GET_SESSION_GAMER_COUNT())
			{
				if (Function_426(&Local_31 + 32))
				{
					if (Function_418(&Local_31 + 32) < 45.0f)
					{
						Function_423(&Local_31 + 32, 45.0f);
					}
				}
				else if (iParam0 == 0)
				{
					Function_423(&Local_31 + 32, 45.0f);
				}
			}
			else if (!Function_491(128) && iParam0 != 0)
			{
				Function_484(128, 1);
				Function_492(1, 1);
				if (Function_426(&Local_31 + 32))
				{
					Function_438(&Local_31 + 32);
					if (Function_418(&Local_31 + 32) < 10.0f)
					{
						Function_423(&Local_31 + 32, 10.0f);
					}
				}
				else
				{
					Function_423(&Local_31 + 32, 10.0f);
				}
			}
		}
	}
	else
	{
		Function_492(1, 1);
		Function_485(&Local_31 + 100);
		if (iVar4 == 1)
		{
			*(&Local_31 + 56) = { StackVal, StackVal, StackVal, Function_486(Local_31.f_104, &Local_31 + 88) };
			Function_423(&Local_31 + 44, 5.0f);
		}
		else if (iVar4 == 2)
		{
			Local_31.f_88 = (Local_31.f_88 - 1);
			*(&Local_31 + 56) = { StackVal, StackVal, StackVal, *(&Local_31 + 72) };
			if (Function_426(&Local_31 + 44))
			{
				if (Function_418(&Local_31 + 44) > 5.0f)
				{
					Function_423(&Local_31 + 44, 5.0f);
				}
			}
		}
	}
	return;
}

void Function_438(int iParam0) //Position: 0xC994 / 51604
{
	if (Function_426(iParam0))
	{
		if (Function_117(iParam0))
		{
			Function_420();
			iParam0->f_4 = (StackVal - NET_GET_NET_TIME());
			iParam0->f_8 = 0.0f;
			Function_12(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_439() //Position: 0xCA64 / 51812
{
	if (Function_426(&Local_31 + 32))
	{
		return Function_418(&Local_31 + 32) >= 2.0f;
	}
	return 0;
}

int Function_440(var uParam0, var uParam1, int iParam2, int iParam3) //Position: 0xCA7F / 51839
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 0;
	*uParam1 = 0;
	*iParam2 = 0;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_142(iVar0))
		{
			switch (Function_434(iVar0))
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

void Function_441() //Position: 0xCB25 / 52005
{
	if (!Function_15(0x1000000))
	{
		Function_442();
	}
	Function_11(0x1000000, 1, 1);
	return;
}

void Function_442() //Position: 0xCB44 / 52036
{
	Function_11(32768, 1, 0);
	return;
}

void Function_443() //Position: 0xCB53 / 52051
{
	Function_413(4294967295, 0);
	return;
}

int Function_444(bool bParam0, int iParam1) //Position: 0xCB5E / 52062
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
			if (!IS_CAMERA_ACTIVE_ON_CHANNEL(StackVal, false))
			{
				SET_CURRENT_CAMERA_ON_CHANNEL(StackVal, 0, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
			}
			Function_469(bParam0, bParam0->f_12);
			iVar8 = 0;
			while (iVar8 <= 37)
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
			Function_468(bParam0);
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
		bParam0->f_12 = Function_466(bParam0, iParam1);
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
			Function_465(bParam0, 2, Function_560());
			Function_468(bParam0);
		}
	}
	Function_445(bParam0, fVar0, 3212836864, 3212836864);
	if (Function_263(StackVal, StackVal, *(bParam0 + 112)))
	{
	}
	if (Function_263(StackVal, StackVal, *(bParam0 + 124)))
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

void Function_445(bool bParam0, float fParam1, var uParam2, var uParam3) //Position: 0xCD9A / 52634
{
	float fVar0;
	
	fVar0 = (1.0f / (fParam1 - bParam0->f_60));
	if (Function_464(bParam0))
	{
		Function_468(bParam0);
	}
	Function_451(bParam0);
	Function_449(bParam0, fVar0, uParam2);
	Function_446(bParam0, fVar0, uParam3);
	bParam0->f_60 = fParam1;
}

void Function_446(int iParam0, float fParam1, float fParam2) //Position: 0xCDD7 / 52695
{
	struct<9> Var0;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<9> Var12;
	
	bVar15 = Function_448(StackVal);
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
			bVar3 = VMAG(vVar0);
			if (bVar3 > 2,5f)
			{
				VSCALE(&vVar0, 0,975f);
			}
			else
			{
				fVar8 = Function_447(bVar15, 0);
				if (fParam2 < -1.0f)
				{
					fVar4 = fParam2;
					bVar6 = (((fParam2 + bVar3) - (iParam0->f_104 * 5.0f)) / 3.0f);
				}
				else
				{
					fVar4 = (fVar8 + 5.0f);
					bVar6 = ((((fVar8 * 2.0f) + bVar3) - (iParam0->f_104 * 5.0f)) / 3.0f);
				}
				iVar5 = (fVar4 / 3.0f);
				fVar7 = Function_255(FABS(bVar6), iVar5);
				if (bVar6 > 0.0f)
				{
					fVar7 = (fVar7 * -1.0f);
				}
				iParam0->f_104 = (iParam0->f_104 + (fVar7 / fParam1));
				if (iParam0->f_104 < fVar4)
				{
					iParam0->f_104 = fVar4;
				}
				else if (iParam0->f_104 < 0,01f && iParam0->f_104 > iParam0->f_100)
				{
					iParam0->f_104 = iParam0->f_100;
				}
				else if (iParam0->f_104 > fVar8)
				{
					iParam0->f_104 = (fVar8 * 1,1f);
					iParam0->f_104 = (iParam0->f_104 + (fVar7 / fParam1));
				}
				fVar9 = (iParam0->f_104 / fParam1);
				VNORMALIZE(&vVar0);
				if (bVar3 < fVar9)
				{
					VSCALE(&vVar0, (bVar3 - fVar9));
				}
				else
				{
					VSCALE(&vVar0, (bVar3 / 5.0f));
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

float Function_447(bool bParam0, bool bParam1) //Position: 0xCFBC / 53180
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_448(bool bParam0) //Position: 0xCFDB / 53211
{
	bool bVar0;
	
	switch (GET_OBJECT_TYPE(bParam0))
	{
		case 0x00000018:
			ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
			break;
		
		case 0x0000000F:
			bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
			break;
	}
	return bVar0;
}

void Function_449(int iParam0, float fParam1, float fParam2) //Position: 0xD019 / 53273
{
	bool bVar0;
	vector3 vVar1;
	struct<5> Var4;
	float fVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	
	bVar15 = Function_448(StackVal);
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
			bVar0 = VMAG(vVar1);
			if (bVar0 > 2,5f)
			{
				VSCALE(&vVar1, 0,975f);
			}
			else
			{
				fVar13 = Function_447(bVar15, 0);
				if (fParam2 >= -1.0f)
				{
					fParam2 = (fVar13 + 2.0f);
					bVar11 = ((bVar0 - (iParam0->f_100 * 5.0f)) / 6.0f);
				}
				else
				{
					bVar11 = ((bVar0 - (iParam0->f_100 * 2.0f)) / 3.0f);
				}
				fVar10 = Function_450(2.0f, (fParam2 / 3.0f));
				fVar12 = Function_255(FABS(bVar11), fVar10);
				if (bVar11 > 0.0f)
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
					iParam0->f_100 = (iParam0->f_100 * 1,1f);
				}
				fVar14 = (iParam0->f_100 / fParam1);
				VNORMALIZE(&vVar1);
				if (bVar0 < fVar14)
				{
					VSCALE(&vVar1, (bVar0 - fVar14));
				}
				else
				{
					vVar1 = { 0.0f, 0.0f, 0.0f };
				}
			}
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 112), vVar1, StackVal) };
			if (FIND_GROUND_INTERSECTION(&vVar1, 5.0f, &Var4, &uVar7))
			{
				if ((StackVal + 0,5f) < vVar1.y)
				{
					vVar1.f_4 = (StackVal + 0,5f);
				}
			}
			SET_CAMERA_POSITION(StackVal, vVar1);
			break;
	}
	return;
}

float Function_450(int iParam0, int iParam1) //Position: 0xD194 / 53652
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_451(bool bParam0) //Position: 0xD1A7 / 53671
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
			if (bParam0->f_164 + 0,66f) > GET_CURRENT_GAME_TIME()
			{
				Function_461(StackVal, bParam0->f_108, 10.0f);
				Function_459(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam0->f_164 + 0,66f) > GET_CURRENT_GAME_TIME()
			{
				Function_461(StackVal, bParam0->f_108, 5.0f);
				Function_458(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000004:
			if (bParam0->f_164 + 0,66f) > GET_CURRENT_GAME_TIME()
			{
				Function_461(StackVal, bParam0->f_108, 5.0f);
				Function_456(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000005:
		case 0x00000001:
			Function_461(StackVal, bParam0->f_108, 15.0f);
			Function_452(StackVal, bParam0, bParam0 + 112, bParam0 + 124);
			break;
		
		default:
			GET_CAMERA_POSITION(StackVal, &vVar3);
			GET_OBJECT_POSITION(StackVal, bParam0 + 124);
			(bParam0 + 124)->f_4 = (StackVal + 1,5f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(bParam0 + 124), vVar3, StackVal) };
			VNORMALIZE(bParam0 + 112);
			VSCALE(bParam0 + 112, 3.0f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam0 + 124), *(bParam0 + 112), StackVal) };
			break;
	}
	return;
}

void Function_452(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xD342 / 54082
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_448(bParam1);
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3))
	{
		return;
	}
	GET_CAMERA_POSITION(StackVal, &vVar0);
	Function_453(StackVal, StackVal, 1, bVar3, vVar0, uParam2, uParam3);
	if (Function_263(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_453(float fParam0, bool bParam1, vector3 vParam2, var uParam5, float fParam6) //Position: 0xD39A / 54170
{
	struct<5> Var0;
	float fVar6;
	bool bVar7;
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
			*fParam6 = { 0.0f, 0.0f, -Function_450(0,5f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 1,25f;
			break;
		
		case 0x00000001:
			*fParam6 = { 0.0f, 0.0f, -Function_450(0,7f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 2,75f;
			break;
		
		case 0x00000002:
			*fParam6 = { 0.0f, 0.0f, -Function_450(1.0f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 4,25f;
			break;
	}
	*fParam6 = { 0.0f, 0.0f, -Function_450(0,7f, (VDIST(Var0, vParam2) / 3.0f)) };
	bVar8 = true;
	if (Function_147())
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
						bVar7 = Function_455(StackVal, StackVal, vVar10, bParam1);
					}
				}
			}
		}
	}
	if (bVar8)
	{
		bVar7 = GET_HEADING(bParam1);
	}
	ROTATE_VECTOR_XZ(fParam6, bVar7, 0);
	*fParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *fParam6, StackVal) };
	switch (fParam0)
	{
		case 0x00000000:
			fParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
		
		case 0x00000001:
			fParam6->f_4 = ((StackVal + StackVal) / 2.0f);
			break;
		
		case 0x00000002:
			fParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
	}
	if (FIND_INTERSECTION(&Var0, fParam6, &uVar38, &uVar41, 1, 4294967295, 4194304))
	{
		*fParam6 = { 0.0f, 0.0f, 0,6f };
		bVar7 = GET_HEADING(bParam1);
		ROTATE_VECTOR_XZ(fParam6, bVar7, 0);
		*fParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *fParam6, StackVal) };
		fParam6->f_4 = ((StackVal + StackVal) / 2.0f);
	}
	fVar44 = 60.0f;
	vVar13[23] = { (-1.0f * fVar6), 0.0f, 0.0f };
	vVar13[33] = { (-1.0f * fVar6), 0.0f, 0.0f };
	vVar13[63] = { fVar6, 0.0f, 0.0f };
	vVar13[73] = { fVar6, 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar13[23]), (bVar7 + fVar44), 0);
	ROTATE_VECTOR_XZ(&(vVar13[33]), (bVar7 + fVar44), 0);
	ROTATE_VECTOR_XZ(&(vVar13[63]), (bVar7 + (-1.0f * fVar44)), 0);
	ROTATE_VECTOR_XZ(&(vVar13[73]), (bVar7 + (-1.0f * fVar44)), 0);
	vVar45 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(&vVar45, 0,5f);
	iVar48 = 0;
	while (iVar48 <= vVar13)
	{
		if (!Function_263(StackVal, StackVal, vVar13[iVar483]))
		{
			vVar13[iVar483] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar45, vVar13[iVar483], StackVal) };
			if (FIND_INTERSECTION(&(vVar13[iVar483]), fParam6, &uVar38, &uVar41, 1, 4294967295, 4194304))
			{
				vVar13[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		if (!Function_263(StackVal, StackVal, vVar13[iVar483]))
		{
			if (FIND_INTERSECTION(&(vVar13[iVar483]), &Var0, &uVar38, &uVar41, 1, 4294967295, 4194304))
			{
				vVar13[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar48++;
	}
	if (!Function_263(StackVal, StackVal, vVar13[03]))
	{
		vVar13[03].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar13[13]))
	{
		vVar13[13].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar13[23]))
	{
		vVar13[23].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar13[33]))
	{
		vVar13[33].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar13[43]))
	{
		vVar13[43].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar13[53]))
	{
		vVar13[53].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar13[63]))
	{
		vVar13[63].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar13[73]))
	{
		vVar13[73].f_4 = StackVal;
	}
	Function_454(StackVal, StackVal, vParam2, &vVar13);
	*uParam5 = { StackVal, StackVal, Function_454(StackVal, StackVal, vParam2, &vVar13) };
	return 1;
}

vector3 Function_454(vector3 vParam0, int iParam3) //Position: 0xD781 / 55169
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	
	bVar4 = 1E+08.0f;
	iVar3 = 0;
	while (iVar3 <= *iParam3)
	{
		if (!Function_263(StackVal, StackVal, *iParam3[iVar33]))
		{
			if (VDIST(*iParam3[iVar33], vParam0) > bVar4)
			{
				bVar4 = VDIST(*iParam3[iVar33], vParam0);
				vVar0 = { StackVal, StackVal, *iParam3[iVar33] };
			}
		}
		iVar3++;
	}
	return StackVal, StackVal, vVar0;
}

var Function_455(vector3 vParam0, bool bParam3) //Position: 0xD7E9 / 55273
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam3))
	{
		GET_POSITION(bParam3, &vVar0);
		Function_214(StackVal, StackVal, StackVal, StackVal, vParam0, vVar0, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_456(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD819 / 55321
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_448(bParam1);
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
		Function_457(StackVal, StackVal, 1, bVar3, vVar0, uParam2, uParam3);
	}
	if (Function_263(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_457(float fParam0, bool bParam1, vector3 vParam2, var uParam5, float fParam6) //Position: 0xD876 / 55414
{
	struct<5> Var0;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar16[8];
	var uVar41;
	var uVar44;
	bool bVar47;
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
	if (Function_147())
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
						bVar10 = Function_455(StackVal, StackVal, vVar13, bParam1);
						bVar11 = false;
					}
				}
			}
		}
	}
	if (bVar11)
	{
		bVar10 = GET_HEADING(bParam1);
	}
	switch (fParam0)
	{
		case 0x00000000:
			vVar6 = { 0.0f, 0.0f, -0,45f };
			fVar9 = 0,75f;
			break;
		
		case 0x00000001:
			vVar6 = { 0.0f, 0.0f, -0,6f };
			fVar9 = 1,825f;
			break;
		
		case 0x00000002:
			vVar6 = { 0.0f, 0.0f, -0,9f };
			fVar9 = 2,5f;
			break;
	}
	*fParam6 = { StackVal, StackVal, vVar6 };
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("Before Rotate");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*fParam6);
		PRINTNL();
	}
	ROTATE_VECTOR_XZ(fParam6, bVar10, 0);
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After Rotate");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*fParam6);
		PRINTNL();
	}
	*fParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *fParam6, StackVal) };
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After addhead");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*fParam6);
		PRINTNL();
	}
	switch (fParam0)
	{
		case 0x00000000:
			fParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
		
		case 0x00000001:
			fParam6->f_4 = ((StackVal + StackVal) / 2.0f);
			break;
		
		case 0x00000002:
			fParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
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
		PRINTVECTOR(*fParam6);
		PRINTNL();
	}
	if (FIND_INTERSECTION(&Var0, fParam6, &uVar41, &uVar44, 1, 4294967295, 4194304))
	{
		*fParam6 = { StackVal, StackVal, vVar6 };
		fParam6->f_8 = (StackVal * -1.0f);
		bVar10 = GET_HEADING(bParam1);
		ROTATE_VECTOR_XZ(fParam6, bVar10, 0);
		*fParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *fParam6, StackVal) };
		fParam6->f_4 = ((StackVal + StackVal) / 2.0f);
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
		PRINTVECTOR(*fParam6);
		PRINTNL();
	}
	bVar47 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	vVar16[03] = { (-1.0f * (fVar9 - 0,05f)), 0.0f, 0.0f };
	vVar16[13] = { (-1.0f * (fVar9 - 0,05f)), 0.0f, 0.0f };
	vVar16[23] = { (-1.0f * (fVar9 + 0,05f)), 0.0f, 0.0f };
	vVar16[33] = { (-1.0f * (fVar9 + 0,05f)), 0.0f, 0.0f };
	vVar16[43] = { (fVar9 - 0,05f), 0.0f, 0.0f };
	vVar16[53] = { (fVar9 - 0,05f), 0.0f, 0.0f };
	vVar16[63] = { (fVar9 + 0,05f), 0.0f, 0.0f };
	vVar16[73] = { (fVar9 + 0,05f), 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar16[03]), (bVar10 + bVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[13]), (bVar10 + bVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[23]), (bVar10 + (-1.0f * bVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[33]), (bVar10 + (-1.0f * bVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[43]), (bVar10 + bVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[53]), (bVar10 + bVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[63]), (bVar10 + (-1.0f * bVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[73]), (bVar10 + (-1.0f * bVar47)), 0);
	iVar48 = 0;
	while (iVar48 <= vVar16)
	{
		vVar16[iVar483] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*fParam6, vVar16[iVar483], StackVal) };
		if (FIND_INTERSECTION(&(vVar16[iVar483]), fParam6, &uVar41, &uVar44, 1, 4294967295, 4194304))
		{
			vVar16[iVar483] = { 0.0f, 0.0f, 0.0f };
		}
		if (!Function_263(StackVal, StackVal, vVar16[iVar483]))
		{
			if (FIND_INTERSECTION(&(vVar16[iVar483]), &Var0, &uVar41, &uVar44, 1, 4294967295, 4194304))
			{
				vVar16[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar48++;
	}
	if (!Function_263(StackVal, StackVal, vVar16[03]))
	{
		vVar16[03].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar16[13]))
	{
		vVar16[13].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar16[23]))
	{
		vVar16[23].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar16[33]))
	{
		vVar16[33].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar16[43]))
	{
		vVar16[43].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar16[53]))
	{
		vVar16[53].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar16[63]))
	{
		vVar16[63].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar16[73]))
	{
		vVar16[73].f_4 = StackVal;
	}
	Function_454(StackVal, StackVal, vParam2, &vVar16);
	*uParam5 = { StackVal, StackVal, Function_454(StackVal, StackVal, vParam2, &vVar16) };
	return 1;
}

void Function_458(var uParam0, bool bParam1, var uParam2, float fParam3, bool bParam4) //Position: 0xDE59 / 56921
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_448(bParam1);
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
		Function_457(StackVal, StackVal, 1, bVar3, vVar0, uParam2, fParam3);
	}
	if (Function_263(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

void Function_459(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xDEB6 / 57014
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = Function_448(bParam1);
	bVar4 = AI_GET_ACTOR_CONVERSATION_TARGET(bVar3);
	if (!IS_ACTOR_VALID(bVar3) || !IS_ACTOR_VALID(bVar4))
	{
		Function_456(uParam0, bParam1, uParam2, uParam3, bParam4);
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3) || IS_ACTOR_VEHICLE(bVar4))
	{
		return;
	}
	if (bParam4)
	{
		GET_CAMERA_POSITION(StackVal, &vVar0);
		Function_460(StackVal, StackVal, 1, bVar3, bVar4, vVar0, uParam2, uParam3);
	}
	if (Function_263(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_460(int iParam0, bool bParam1, bool bParam2, vector3 vParam3, var uParam6, float fParam7) //Position: 0xDF36 / 57142
{
	struct<5> Var0;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	float fVar13;
	vector3 vVar14;
	bool bVar17;
	bool bVar18;
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
	bVar12 = VDIST(Var0, vVar6);
	switch (iParam0)
	{
		case 0x00000000:
			fVar13 = 0,75f;
			break;
		
		case 0x00000001:
			fVar13 = 1,625f;
			break;
		
		case 0x00000002:
			fVar13 = 2,5f;
			break;
	}
	*fParam7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(fParam7, 0,5f);
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar6, StackVal) };
	VSCALE(&vVar14, 0,5f);
	*fParam7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar14, *fParam7, StackVal) };
	VSCALE(fParam7, 0,5f);
	bVar17 = GET_HEADING(bParam1);
	bVar18 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	vVar19[03] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[13] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[23] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[33] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[43] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[53] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[63] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[73] = { (fVar13 * bVar12), 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar19[03]), (bVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[13]), (bVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[23]), (bVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[33]), (bVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[43]), (bVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[53]), (bVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[63]), (bVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[73]), (bVar17 + (-1.0f * bVar18)), 0);
	iVar50 = 0;
	while (iVar50 <= vVar19)
	{
		vVar19[iVar503] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*fParam7, vVar19[iVar503], StackVal) };
		if (FIND_INTERSECTION(&(vVar19[iVar503]), fParam7, &uVar44, &uVar47, 1, 4294967295, 4194304))
		{
			vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
		}
		if (!Function_263(StackVal, StackVal, vVar19[iVar503]))
		{
			if (FIND_INTERSECTION(&(vVar19[iVar503]), &Var0, &uVar44, &uVar47, 1, 4294967295, 4194304))
			{
				vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar50++;
	}
	if (!Function_263(StackVal, StackVal, vVar19[03]))
	{
		vVar19[03].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar19[13]))
	{
		vVar19[13].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar19[23]))
	{
		vVar19[23].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar19[33]))
	{
		vVar19[33].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar19[43]))
	{
		vVar19[43].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar19[53]))
	{
		vVar19[53].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar19[63]))
	{
		vVar19[63].f_4 = StackVal;
	}
	if (!Function_263(StackVal, StackVal, vVar19[73]))
	{
		vVar19[73].f_4 = StackVal;
	}
	Function_454(StackVal, StackVal, vParam3, &vVar19);
	*uParam6 = { StackVal, StackVal, Function_454(StackVal, StackVal, vParam3, &vVar19) };
	return 1;
}

void Function_461(bool bParam0, bool bParam1, int iParam2) //Position: 0xE2BA / 58042
{
	bool bVar0;
	
	if (IS_LAYOUTREF_VALID(Global_6289))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_6289);
		Function_463(bVar0, bParam1, 2, iParam2);
		Function_462(bVar0, bParam0);
		Function_463(bVar0, bParam1, 1, iParam2);
		Function_462(bVar0, bParam0);
		Function_463(bVar0, bParam1, 3, iParam2);
		Function_462(bVar0, bParam0);
		Function_463(bVar0, bParam1, 4, iParam2);
		Function_462(bVar0, bParam0);
		Function_463(bVar0, bParam1, 5, iParam2);
		Function_462(bVar0, bParam0);
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_462(bool bParam0, bool bParam1) //Position: 0xE32E / 58158
{
	bool bVar0;
	
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar0, bParam1))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, bParam1);
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return;
}

void Function_463(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xE360 / 58208
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	switch (bParam2)
	{
		case 0x00000001:
			ITERATE_IN_LAYOUT(bParam0, Global_6289);
			ITERATE_ON_OBJECT_TYPE(bParam0, 24);
			ITERATE_IN_SPHERE(bParam0, vVar0, uParam3);
			break;
		
		case 0x00000002:
			ITERATE_IN_LAYOUT(bParam0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bParam0, 15);
			ITERATE_IN_SPHERE(bParam0, vVar0, uParam3);
			break;
		
		case 0x00000005:
			ITERATE_IN_LAYOUT(bParam0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bParam0, 15);
			ITERATE_IN_SPHERE(bParam0, vVar0, uParam3);
			break;
		
		case 0x00000004:
			ITERATE_IN_LAYOUT(bParam0, Global_28841);
			ITERATE_ON_OBJECT_TYPE(bParam0, 15);
			ITERATE_IN_SPHERE(bParam0, vVar0, uParam3);
			break;
		
		case 0x00000003:
			ITERATE_IN_LAYOUT(bParam0, Global_6287);
			ITERATE_ON_OBJECT_TYPE(bParam0, 24);
			ITERATE_IN_SPHERE(bParam0, vVar0, uParam3);
			break;
		
		case 0x00000006:
			ITERATE_IN_LAYOUT(bParam0, Global_30616);
			ITERATE_ON_OBJECT_TYPE(bParam0, 8);
			ITERATE_ON_PARTIAL_NAME(bParam0, "nvista_cam");
			break;
		
		default:
			break;
	}
}

bool Function_464(int iParam0) //Position: 0xE452 / 58450
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	
	bVar0 = Function_448(StackVal);
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
			if (!AI_IS_ACTOR_SOCIALIZING(bVar0) && Function_447(bVar0, 0) < 0,2f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			if (!AI_IS_ACTOR_SOCIALIZING(bVar0) && Function_447(bVar0, 0) > 0,2f)
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			bVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((bVar7 - iParam0->f_32)) / 360.0f)) < 0,375f)
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
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)) && Function_447(bVar0, 0) < 0,2f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)) && Function_447(bVar0, 0) > 0,2f)
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			bVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((bVar7 - iParam0->f_32)) / 360.0f)) < 0,375f)
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
			if (Function_447(bVar0, 0) < 0,3f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			bVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((bVar7 - iParam0->f_32)) / 360.0f)) < 0,375f)
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
			if (Function_447(bVar0, 0) > 0,2f)
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

void Function_465(bool bParam0, int iParam1, bool bParam2) //Position: 0xE794 / 59284
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

var Function_466(bool bParam0, int iParam1) //Position: 0xE819 / 59417
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	int iVar18[25];
	struct<9> Var44;
	
	if (Global_29007 != 2)
	{
		bVar2 = CREATE_OBJECT_ITERATOR(*bParam0);
		Function_463(StackVal, bVar2, 6, bParam0->f_76);
		bVar1 = START_OBJECT_ITERATOR(bVar2);
		bVar3 = 1E+08.0f;
		GET_CAMERA_POSITION(StackVal, &vVar7);
		while (IS_OBJECT_VALID(bVar1))
		{
			if (Function_467(bParam0, bVar1, iParam1))
			{
				GET_OBJECT_POSITION(bVar1, &vVar4);
				if (VDIST(vVar4, vVar7) > bVar3)
				{
					bVar3 = VDIST(vVar4, vVar7);
					bVar0 = bVar1;
				}
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar2);
		}
		DESTROY_ITERATOR(bVar2);
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
				VSCALE(&vVar14, (360.0f / 6,28f));
				bParam0->f_344 = CREATE_POINT_IN_LAYOUT(Global_30616, Function_216(), vVar11, vVar14);
				if (IS_OBJECT_VALID(bParam0->f_344))
				{
					GET_OBJECT_ORIENTATION(bParam0->f_344, &vVar14);
					bVar0 = bParam0->f_344;
				}
			}
		}
	}
	if (!IS_OBJECT_VALID(bVar0))
	{
	}
	return bVar0;
}

bool Function_467(int iParam0, bool bParam1, bool bParam2) //Position: 0xE9C4 / 59844
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

void Function_468(bool bParam0) //Position: 0xEA51 / 59985
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	var uVar7;
	
	DISBAND_OBJECTSET(bParam0->f_108);
	bVar6 = Function_448(StackVal);
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
			Function_461(StackVal, bParam0->f_108, 10.0f);
			Function_459(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000002:
			Function_461(StackVal, bParam0->f_108, 5.0f);
			Function_458(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000004:
			Function_461(StackVal, bParam0->f_108, 5.0f);
			Function_456(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000005:
		case 0x00000001:
			Function_461(StackVal, bParam0->f_108, 15.0f);
			Function_452(StackVal, bParam0, bParam0 + 112, bParam0 + 124);
			break;
		
		default:
			GET_CAMERA_POSITION(StackVal, &vVar3);
			GET_OBJECT_POSITION(StackVal, bParam0 + 124);
			(bParam0 + 124)->f_4 = (StackVal + 1,5f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(bParam0 + 124), vVar3, StackVal) };
			VNORMALIZE(bParam0 + 112);
			VSCALE(bParam0 + 112, 3.0f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam0 + 124), *(bParam0 + 112), StackVal) };
			break;
	}
	return;
}

void Function_469(bool bParam0, bool bParam1) //Position: 0xEC0B / 60427
{
	if (IS_OBJECT_VALID(bParam1))
	{
		bParam0->f_92 = 0;
		Function_465(bParam0, 2, bParam1);
		Function_468(bParam0);
	}
	else
	{
		bParam0->f_84 = 6;
		bParam0->f_92 = 1;
		bParam0->f_88 = 2;
		bParam0->f_80 = 0;
		Function_465(bParam0, 2, Function_560());
		Function_468(bParam0);
	}
	DISBAND_OBJECTSET(bParam0->f_108);
	DISBAND_OBJECTSET(bParam0->f_184);
	bParam0->f_84 = 1;
	return;
}

void Function_470() //Position: 0xEC63 / 60515
{
	FLASH_SET_INT("popup", "message[2].visibility", false);
	FLASH_SET_INT("popup", "message[2].refresh", true);
	return;
}

void Function_471() //Position: 0xECB0 / 60592
{
	if (!Function_15(4))
	{
		Function_442();
	}
	Function_11(4, 1, 1);
	return;
}

var Function_472() //Position: 0xECC7 / 60615
{
	if (Function_318(&Global_79349))
	{
		return LAUNCH_NEW_SCRIPT(GET_ASSET_NAME(Global_79349.f_24, 4), 0);
	}
	Function_473(1);
	return "";
}

void Function_473(bool bParam0) //Position: 0xECEF / 60655
{
	Function_475(8, bParam0);
	return;
}

void Function_474() //Position: 0xECFC / 60668
{
	Function_416(Function_216());
	return;
}

void Function_475(int iParam0, bool bParam1) //Position: 0xED08 / 60680
{
	if (bParam1)
	{
		Function_13(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_12(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

void Function_476(int iParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xED30 / 60720
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
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
	(iParam0 + 136)->f_4 = (StackVal + 1,15f);
	iParam0->f_156 = 1;
	iParam0->f_160 = 45.0f;
	iParam0->f_164 = GET_CURRENT_GAME_TIME();
	iParam0->f_84 = 6;
	iParam0->f_4 = CREATE_CAMERA_IN_LAYOUT(*iParam0, "idlecam", 0);
	INIT_CAMERA_FROM_CHANNEL(StackVal, 0);
	iParam0->f_8 = "";
	iParam0->f_12 = Function_466(iParam0, uParam2);
	if (!IS_OBJECT_VALID(iParam0->f_12) && bParam3)
	{
		vVar0 = { 0.0f, 30.0f, 50.0f };
		bVar6 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		ROTATE_VECTOR_XZ(&vVar0, bVar6, 0);
		GET_CAMERA_POSITION(StackVal, &vVar3);
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
		vVar7 = { -20.0f, bVar6, 0.0f };
		iParam0->f_12 = FIND_OBJECT_IN_LAYOUT(*iParam0, "ntempVista");
		if (IS_OBJECT_VALID(iParam0->f_12))
		{
			DESTROY_OBJECT(iParam0->f_12);
		}
		iParam0->f_12 = CREATE_POINT_IN_LAYOUT(*iParam0, "ntempVista", vVar0, vVar7);
	}
	iParam0->f_16 = _AIATTENTIONATTRACTOR(*iParam0, *(iParam0 + 112), 1045220557, 1065353216, 0, 0);
	ATTACH_OBJECTS(StackVal, iParam0->f_16, "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	bVar16 = Function_560();
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
			Function_465(iParam0, 2, bVar16);
			Function_468(iParam0);
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
		SET_CURRENT_CAMERA_ON_CHANNEL(StackVal, 0, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	PREVENT_DESPAWN_SET_SPHERE(Global_34574, 30.0f);
}

bool Function_477(int iParam0, bool bParam1) //Position: 0xEF7A / 61306
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_478(int iParam0) //Position: 0xEF9A / 61338
{
	return Local_31.f_96 < iParam0;
}

void Function_479(int iParam0) //Position: 0xEFA7 / 61351
{
	Function_23(&Global_83864 + 1252, iParam0);
	return;
}

void Function_480(int iParam0) //Position: 0xEFB9 / 61369
{
	Function_25(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_481(int iParam0) //Position: 0xF012 / 61458
{
	return Function_417(&Global_79349, iParam0);
}

void Function_482(var uParam0, int iParam1) //Position: 0xF021 / 61473
{
	*uParam0 = *iParam1;
	return;
}

bool Function_483(char* cParam0, int iParam1, bool bParam2) //Position: 0xF02D / 61485
{
	char* cVar0[64];
	
	if (UNK_0xFAD5A270(cParam0, iParam1))
	{
		if (bParam2)
		{
			if (iParam1->f_40 == 4294967294)
			{
				iParam1->f_40 = Function_163(StackVal, StackVal, *(iParam1 + 28), 0, 1, 1);
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

void Function_484(int iParam0, bool bParam1) //Position: 0xF092 / 61586
{
	if (bParam1)
	{
		Function_13(&Local_58 + 856, iParam0);
	}
	else
	{
		Function_12(&Local_58 + 856, iParam0);
	}
	return;
}

void Function_485(int iParam0) //Position: 0xF0B4 / 61620
{
	*iParam0++;
	return;
}

struct<16> Function_486(bool bParam0, var uParam1) //Position: 0xF0C2 / 61634
{
	char* cVar0[16];
	int iVar4;
	int iVar172;
	
	strcpy(&cVar0, "", 16);
	*(&iVar4 + 76) = 36;
	if (!Function_125(bParam0, &iVar4))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	if (Function_489(bParam0))
	{
		*uParam1++;
	}
	iVar172 = (*uParam1 % Function_488(&iVar4));
	return StackVal, StackVal, StackVal, Function_487(&iVar4, iVar172);
}

struct<16> Function_487(int iParam0, int iParam1) //Position: 0xF112 / 61714
{
	char* cVar0[16];
	
	strcpy(&cVar0, "", 16);
	if (iParam1 <= Function_488(iParam0) || iParam1 > 0)
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(iParam0 + 76[iParam14]);
}

int Function_488(int iParam0) //Position: 0xF142 / 61762
{
	return iParam0->f_72;
}

bool Function_489(bool bParam0) //Position: 0xF14C / 61772
{
	int iVar0;
	
	*(&iVar0 + 76) = 36;
	if (Function_125(bParam0, &iVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_490() //Position: 0xF169 / 61801
{
	return Function_108(8);
}

bool Function_491(int iParam0) //Position: 0xF174 / 61812
{
	return Function_16(Local_58.f_856, iParam0);
}

void Function_492(int iParam0, bool bParam1) //Position: 0xF184 / 61828
{
	if (NET_IS_SESSION_HOST())
	{
		if (bParam1)
		{
			Function_13(&Local_31, iParam0);
		}
		else
		{
			Function_12(&Local_31, iParam0);
		}
	}
	return;
}

void Function_493(int iParam0) //Position: 0xF1A6 / 61862
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_494() //Position: 0xF1BA / 61882
{
	return (Function_246(&Local_58 + 1008, &Local_31 + 100) && IS_STRING_VALID(&Local_31 + 56));
}

void Function_495(int iParam0) //Position: 0xF1D4 / 61908
{
	switch (iParam0)
	{
		case 0x00000002:
			Function_547(1024, 1);
			Function_547(768, 0);
			break;
		
		case 0x00000003:
			Function_547(256, 1);
			Function_547(1536, 0);
			break;
		
		case 0x00000001:
			Function_547(512, 1);
			Function_547(1280, 0);
			if (Global_79349.f_112)
			{
				UPDATE_PROFILE_STAT(&Global_79349, 1.0f, 0);
			}
			break;
		
		case 0x00000000:
			Function_547(1792, 0);
			break;
	}
	return;
}

void Function_496() //Position: 0xF248 / 62024
{
	Function_499();
	Function_498();
	Function_497();
	return;
}

void Function_497() //Position: 0xF257 / 62039
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

void Function_498() //Position: 0xF282 / 62082
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

void Function_499() //Position: 0xF2AD / 62125
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

void Function_500() //Position: 0xF2D8 / 62168
{
	Function_484(983040, 0);
	return;
}

int Function_501(int iParam0) //Position: 0xF2E6 / 62182
{
	struct<657> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_125(iParam0, &Var0))
	{
		return Function_82(Var0.f_656, 30, 20);
	}
	return 0;
}

bool Function_502() //Position: 0xF30D / 62221
{
	return Function_481(2);
}

bool Function_503() //Position: 0xF317 / 62231
{
	return Function_481(16);
}

bool Function_504() //Position: 0xF322 / 62242
{
	return Function_481(4);
}

bool Function_505() //Position: 0xF32C / 62252
{
	return !Function_489(Local_31.f_104);
}

var Function_506() //Position: 0xF33A / 62266
{
	return ((Function_507() && Function_108(2)) && !Function_477(2048, 1));
}

var Function_507() //Position: 0xF351 / 62289
{
	return (Function_509() == 4294967295 && !Function_508());
}

bool Function_508() //Position: 0xF361 / 62305
{
	return Function_509() != 4294967290;
}

int Function_509() //Position: 0xF36E / 62318
{
	if (!Function_127())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

void Function_510(bool bParam0, bool bParam1) //Position: 0xF383 / 62339
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_516(&Global_78480);
	Function_515(&Global_78480);
	uVar0 = Function_57(37);
	Function_513();
	if (!bParam0)
	{
		Function_512(37, uVar0);
	}
	Function_547(18264, 0);
	Function_511();
	return;
}

void Function_511() //Position: 0xF3CF / 62415
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_512(int iParam0, var uParam1) //Position: 0xF3EE / 62446
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = uParam1;
	return;
}

void Function_513() //Position: 0xF408 / 62472
{
	Function_514(&Global_78480 + 220);
	return;
}

void Function_514(int iParam0) //Position: 0xF417 / 62487
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

void Function_515(int iParam0) //Position: 0xF438 / 62520
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

void Function_516(int iParam0) //Position: 0xF45C / 62556
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

void Function_517() //Position: 0xF480 / 62592
{
	if (NET_IS_SESSION_HOST() || !NET_IS_IN_SESSION())
	{
		strcpy(&Local_31 + 56, Function_216(), 16);
	}
	Function_500();
	return;
}

void Function_518() //Position: 0xF49D / 62621
{
	return;
}

void Function_519(int iParam0, struct<8> Param1) //Position: 0xF4A3 / 62627
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

bool Function_520(bool bParam0, int iParam1) //Position: 0xF4E8 / 62696
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return 0;
	}
	bVar1 = false;
	while (bVar1 < (GET_OBJECTSET_SIZE(bParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bParam0);
		if (iParam1 == GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar0)))
		{
			return 1;
		}
		bVar1++;
	}
	return 0;
}

void Function_521(int iParam0) //Position: 0xF52A / 62762
{
	Function_522(iParam0, 0.0f);
	return;
}

void Function_522(var uParam0, float fParam1) //Position: 0xF536 / 62774
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_13(uParam0, 1);
	Function_12(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_523(int iParam0, int iParam1) //Position: 0xF557 / 62807
{
	if (Function_524(iParam0, iParam1))
	{
		Function_546(iParam0);
		return 1;
	}
	return 0;
}

bool Function_524(int iParam0, float fParam1) //Position: 0xF56F / 62831
{
	if (Function_527(iParam0))
	{
		if (Function_525(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_525(int iParam0) //Position: 0xF58B / 62859
{
	if (Function_527(iParam0))
	{
		if (Function_526(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_526(int iParam0) //Position: 0xF653 / 63059
{
	return Function_16(*iParam0, 2);
}

bool Function_527(int iParam0) //Position: 0xF660 / 63072
{
	return Function_16(*iParam0, 1);
}

bool Function_528() //Position: 0xF66D / 63085
{
	return NET_GET_POSSE_COUNT() < 1;
}

bool Function_529() //Position: 0xF678 / 63096
{
	var uVar0;
	
	if (Function_530(&uVar0))
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

bool Function_530(int iParam0) //Position: 0xF744 / 63300
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = FIND_NAMED_LAYOUT("NetSesssionLayout");
	bVar1 = FIND_OBJECT_IN_LAYOUT(bVar0, "nPosseGame");
	if (IS_OBJECT_VALID(bVar1))
	{
		*iParam0 = bVar1;
		return 1;
	}
	return 0;
}

bool Function_531(int iParam0) //Position: 0xF789 / 63369
{
	Function_532(iParam0);
	if (iParam0->f_36)
	{
		UNK_0xC0849D70();
	}
	return NET_SESSION_QUICK_JOIN_NATIVE(iParam0->f_24);
}

void Function_532(int iParam0) //Position: 0xF7A5 / 63397
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

bool Function_533(var uParam0) //Position: 0xF7FF / 63487
{
	Function_532(uParam0);
	return NET_IS_FACTION_SAFE(uParam0->f_24);
}

void Function_534() //Position: 0xF811 / 63505
{
	Function_535();
	Function_510(1, 0);
	return;
}

void Function_535() //Position: 0xF81F / 63519
{
	Local_31.f_88 = RAND_INT_RANGE(false, 36);
	Local_31.f_96 = 4294967295;
	strcpy(&Local_31 + 56, Function_216(), 16);
	Function_537(&Local_31 + 100);
	Local_31 = 0;
	Local_31.f_4 = 0;
	Function_493(&Local_31 + 44);
	Function_493(&Local_31 + 8);
	Function_493(&Local_31 + 32);
	Function_493(&Local_31 + 20);
	Function_536();
	return;
}

void Function_536() //Position: 0xF86B / 63595
{
	Function_347();
	return;
}

void Function_537(var uParam0) //Position: 0xF874 / 63604
{
	*uParam0 = 0;
	return;
}

void Function_538() //Position: 0xF87E / 63614
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
	return;
}

void Function_539() //Position: 0xF8BA / 63674
{
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	RESET_PROPS_IN_WORLD();
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	CLEAR_CHARACTER_BLOOD();
	DESTROY_GC_OBJECTS(1, 1);
	Function_475(64, 1);
	return;
}

void Function_540(int iParam0) //Position: 0xF8DA / 63706
{
	struct<41> Var0;
	
	Function_544(iParam0);
	if (Function_505())
	{
		Function_483(&Local_58 + 980, &Var0, 1);
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
		Function_360(Var0.f_16, &vVar29, 1);
		*iParam0 = Var0.f_16;
		iParam0->f_4 = 2;
		iParam0->f_32 = vVar29.z;
		(iParam0 + 8)->f_8 = Var0.f_40;
		iParam0->f_24 = Function_417(&Var0, 1);
	}
	else
	{
		if (Local_31.f_104 == 33)
		{
			Local_31.f_104 = Function_543();
			iParam0->f_36 = 1;
		}
		*iParam0 = Local_31.f_104;
		iParam0->f_4 = 2;
		iParam0->f_32 = Function_542(Local_31.f_104);
		(iParam0 + 8)->f_8 = 4294967295;
		iParam0->f_24 = Function_541(Local_31.f_104, 2);
		iParam0->f_28 = Local_58.f_56;
	}
	return;
}

bool Function_541(int iParam0, int iParam1) //Position: 0xF9CC / 63948
{
	struct<657> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_125(iParam0, &Var0))
	{
		return Function_16(Var0.f_656, iParam1);
	}
	return 0;
}

int Function_542(int iParam0) //Position: 0xF9F2 / 63986
{
	struct<69> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_125(iParam0, &Var0))
	{
		return Var0.f_68;
	}
	return 16;
}

var Function_543() //Position: 0xFA13 / 64019
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = false;
	while (!bVar0)
	{
		bVar1 = RAND_INT_RANGE(34, 36);
		if (Function_489(bVar1))
		{
			bVar0 = !Function_541(bVar1, 4);
		}
	}
	return bVar1;
}

void Function_544(int iParam0) //Position: 0xFA43 / 64067
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

void Function_545(bool bParam0) //Position: 0xFA83 / 64131
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_546(int iParam0) //Position: 0xFA96 / 64150
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_547(int iParam0, bool bParam1) //Position: 0xFAAA / 64170
{
	if (bParam1)
	{
		Function_13(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_12(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_548() //Position: 0xFAE5 / 64229
{
	bool bVar0;
	
	bVar0 = Function_560();
	if (!IS_ACTOR_VALID(bVar0))
	{
	}
	else if (IS_ACTOR_VALID(GET_MOUNT(bVar0)))
	{
		ACTOR_DISMOUNT_NOW(bVar0);
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		CLEAR_ACTORS_HORSE(bVar0);
		RELEASE_ACTOR(Global_12976.f_36);
	}
	return;
}

bool Function_549(int iParam0) //Position: 0xFB24 / 64292
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_554();
	iVar1 = 0;
	if (!Function_8(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_553(iParam0[iVar03], 8);
		}
		else if (Function_552())
		{
			iVar1 = 1;
			Function_553(iParam0[iVar03], 8);
		}
		Function_553(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_8(iParam0[iVar03], 4))
		{
			if (!Function_8(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_8(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_8(iParam0[03], 8) || iVar1));
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
				Function_553(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_8(iParam0[iVar03], 4))
		{
			if (!Function_8(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_553(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_553(iParam0[iVar03], 2);
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
							Function_553(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_553(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_553(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_553(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_553(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_553(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_553(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_553(iParam0[iVar03], 2);
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
	Function_550();
	return 1;
}

void Function_550() //Position: 0xFE9F / 65183
{
	if (!Function_551(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_551(int iParam0) //Position: 0xFEDF / 65247
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_552() //Position: 0xFEFB / 65275
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

void Function_553(var uParam0, int iParam1) //Position: 0xFF26 / 65318
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_554() //Position: 0xFF37 / 65335
{
	if (!Function_551(128))
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

var Function_555(bool bParam0) //Position: 0xFF79 / 65401
{
	bool bVar0;
	
	bVar0 = Function_3();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

void Function_556(int iParam0) //Position: 0xFF8D / 65421
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	Function_484(524288, 1);
	Function_484(131072, 0);
	return;
}

void Function_557(bool bParam0) //Position: 0xFFAC / 65452
{
	Function_547(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

void Function_558(int iParam0) //Position: 0xFFCD / 65485
{
	iParam0 = iParam0;
	return;
}

bool Function_559() //Position: 0xFFD7 / 65495
{
	return UNK_0xA80C6DE6(&Local_31);
}

bool Function_560() //Position: 0xFFE2 / 65506
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_561(int iParam0) //Position: 0xFFF7 / 65527
{
	return Function_20(Global_83864.f_1252, iParam0);
}

int Function_562(bool bParam0) //Position: 0x1000D / 65549
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

int Function_563() //Position: 0x100B1 / 65713
{
	if (Local_58.f_12 > 5 && Local_58.f_12 < 4294967295)
	{
		return 5;
	}
	if (Local_58.f_12 <= 13)
	{
		return 13;
	}
	if (Local_58.f_12 <= 17)
	{
		return 17;
	}
	if (Local_58.f_12 <= 20)
	{
		return 20;
	}
	if (Local_58.f_12 <= 27)
	{
		return 27;
	}
	if (Local_58.f_12 <= 40)
	{
		return 40;
	}
	if (Local_58.f_12 <= 42)
	{
		return 42;
	}
	if (Local_58.f_12 <= 49)
	{
		return 49;
	}
	return 4294967295;
}

bool Function_564(int iParam0) //Position: 0x10133 / 65843
{
	return Function_20(Global_79336, iParam0);
}

void Function_565(int iParam0) //Position: 0x10142 / 65858
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
			Function_566(iParam0);
		}
	}
	return;
}

void Function_566(int iParam0) //Position: 0x10174 / 65908
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_567(bool bParam0) //Position: 0x10183 / 65923
{
	NET_LOG(true, "Lobby State", "Moving to: %s (%s)", Function_568(bParam0), I2STR(bParam0), 0, 0);
	Local_58.f_12 = bParam0;
	return;
}

var Function_568(int iParam0) //Position: 0x101C2 / 65986
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

void Function_569() //Position: 0x107CF / 67535
{
	Function_574();
	Function_480(2192);
	Function_396(2);
	Function_161(5);
	Function_349();
	Function_573();
	Function_572();
	Function_352();
	Function_570(&Local_58 + 1048, "mp_lobby", 10, 0);
	AUDIO_SHUT_OFF_WALLA();
	SET_POP_DENSITY_MULTIPLIER(0,4f);
	NET_APPLY_RELEVANCY_OVERRIDE();
	Function_549(&Local_58 + 1048);
	UI_SET_TEXT("OLNM_ReturnToFM", "mp_fe_freeroam");
	UI_INCLUDE("MULTI_FREE_ROAM");
	UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_AvatarPicker", "mp_avatarpicker_conf_lobby");
	UI_SEND_EVENT("net.LobbyEntered");
	return;
}

var Function_570(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x108A8 / 67752
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_571(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_553(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_571(var uParam0, int iParam1, int iParam2) //Position: 0x108E0 / 67808
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_8(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_553(uParam0[iVar03], 4);
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

void Function_572() //Position: 0x109A4 / 68004
{
	Global_83816 = Global_26119;
	Global_83817 = Global_28842;
	return;
}

void Function_573() //Position: 0x109B8 / 68024
{
	return;
}

void Function_574() //Position: 0x109BE / 68030
{
	Function_544(&Local_58 + 16);
	Function_392(&Local_58 + 60);
	Local_58.f_408 = "";
	Function_342();
	Local_58.f_852 = "";
	Local_58.f_848 = "";
	Local_58 = 0.0f;
	Local_58.f_1000 = 4294967295;
	Local_58.f_856 = 0;
	strcpy(&Local_58 + 980, Function_216(), 16);
	Local_58.f_996 = 4294967295;
	Function_537(&Local_58 + 1008);
	return;
}

