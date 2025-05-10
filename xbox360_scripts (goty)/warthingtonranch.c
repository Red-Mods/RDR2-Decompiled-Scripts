//Decompiled with MagicRDR v1.0
//Function Count : 442
//Statics Count : 376
//Natives Count : 418
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
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
	int iLocal_15 = 0;
	bool bLocal_16 = false;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	bool bLocal_19 = false;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	float fLocal_44 = 0.0f;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	bool bLocal_48 = false;
	struct<5> Local_49 = { 0, 0, 16, 0, 0 } ;
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
	struct<5> Local_84 = { 0, 0, 0, 0, 0 } ;
	bool bLocal_89 = false;
	bool bLocal_90 = false;
	int iLocal_91 = 0;
	bool bLocal_92 = false;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = false;
	int iLocal_101 = 0;
	bool bLocal_102 = false;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	struct<101> Local_111 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_233 = 27;
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
	var uLocal_290 = 17;
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
	var uLocal_308 = 6;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	vector3 vLocal_318 = { 0.0f, 0.0f, 0.0f };
	float fLocal_321 = 0.0f;
	float fLocal_322 = 0.0f;
	float fLocal_323 = 0.0f;
	vector3 vLocal_324 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_327 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_330 = false;
	int iLocal_331 = 0;
	struct<6> Local_332 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	struct<2> Local_342[3];
	bool bLocal_349[3] = { false, false, false };
	bool bLocal_353 = false;
	bool bLocal_354[2] = { false, false };
	bool bLocal_357 = false;
	var uLocal_358 = 3;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	bool bLocal_362 = false;
	bool bLocal_363 = false;
	int iLocal_364[5] = { 0, 0, 0, 0, 0 };
	int iLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_15 = 0;
	bLocal_16 = false;
	iLocal_17 = 0;
	fLocal_44 = 60.0f;
	iLocal_91 = 0;
	bLocal_92 = false;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	iLocal_99 = "dlcx_";
	bLocal_100 = 100;
	iLocal_101 = 0;
	iLocal_104 = 0;
	iLocal_171 = 1;
	fLocal_323 = 2.0f;
	vLocal_324 = { -918.648f, 102.323f, 2740.68f };
	vLocal_327 = { -931.804f, 105.451f, 2752.405f };
	iLocal_338 = 477;
	iLocal_339 = 485;
	iLocal_340 = iLocal_338;
	iLocal_341 = 0;
	if (!Function_423(&Local_111, uScriptParam_0))
	{
		TERMINATE_THIS_SCRIPT();
	}
	while (!IS_EXITFLAG_SET() && Function_101())
	{
		WAIT(false);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xBC / 188
{
	if (NET_SCRIPT_GET_NUM_PARTICIPANTS() == 1)
	{
		if (SQUAD_IS_VALID(bLocal_172))
		{
			SQUAD_GOALS_CLEAR(bLocal_172);
			Function_100(bLocal_172);
			Function_99(bLocal_172);
			SQUAD_SET_FACTION(bLocal_172, 21);
			Function_98(bLocal_172);
			Function_95(bLocal_172, 0, 0);
		}
		if (IS_ACTORSET_VALID(bLocal_19))
		{
			Function_91(bLocal_19, Global_78576, -1.0f, -1.0f, 1, 1);
			Function_90(bLocal_19);
			Function_89(bLocal_19);
			Function_87(bLocal_19);
		}
	}
	if (IS_BLIP_VALID(bLocal_330))
	{
		REMOVE_BLIP(bLocal_330);
	}
	Function_83(&uLocal_140);
	Function_73(bLocal_138);
	RELEASE_LAYOUT_REF(bLocal_138);
	Function_68(Local_111);
	Function_2(&Local_111);
	return;
}

void Function_2(int iParam0) //Position: 0x146 / 326
{
	var uVar0;
	bool bVar16;
	
	PLAYSTAT_MP_DEED_COMPLETE_EX(GET_SHORT_SCRIPT_NAME(), CEIL(Function_63(iParam0 + 16 + 8)), NET_SCRIPT_GET_NUM_PARTICIPANTS(), iParam0->f_92);
	RELEASE_LAYOUT_REF(bLocal_40);
	Function_53();
	Function_52();
	HUD_CLEAR_OBJECTIVE();
	if (!Global_3403)
	{
		UI_EXIT("XpHud");
	}
	UI_EXIT("MpLinearSuppressor");
	Function_51(256);
	Function_51(4096);
	Function_50(64);
	Function_49(1);
	Function_47(8);
	if (*iParam0 != 4294967294)
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(*iParam0), 16);
		Function_44("net_player_left_region", UI_GET_STRING(&uVar0));
		bVar16 = StackVal;
		if (IS_VOLUME_VALID(bVar16))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar16);
		}
	}
	Global_78480.f_24 = 4294967294;
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	NET_UNREGISTER_AS_NET_SCRIPT();
	Function_3(iParam0);
	return;
}

void Function_3(int iParam0) //Position: 0x222 / 546
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_7(iParam0);
	Function_4();
	return;
}

void Function_4() //Position: 0x234 / 564
{
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x240 / 576
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_90))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_90);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_89);
	}
	return;
}

void Function_6() //Position: 0x260 / 608
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_7(int iParam0) //Position: 0x295 / 661
{
	Function_42(131072);
	HUD_ENABLE(true);
	UI_INCLUDE("nMP_Ticker");
	UI_INCLUDE("WeaponAmmo");
	if (IS_WEAPON_DRAWN(Function_41()))
	{
		UI_ENTER("WeaponAmmo");
	}
	UI_UNFOCUS("HudGamerList");
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL(false, 1, 0, 0);
	}
	Function_6();
	if (iLocal_91)
	{
		ENABLE_USE_CONTEXTS(1);
		iLocal_91 = 0;
	}
	if (Function_38())
	{
		Function_36();
		Function_32();
		Function_31();
	}
	NET_PLAYER_LIST_RESET();
	if (iLocal_95)
	{
		iLocal_95 = 0;
		Function_8(TO_FLOAT(iParam0->f_92), "XP_AA_complete", 1);
	}
	Function_49(1);
	Function_47(8);
	iLocal_17 = 3;
	return;
}

int Function_8(float fParam0, var uParam1, bool bParam2) //Position: 0x350 / 848
{
	if (!Function_28())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_25(8, fParam0);
	}
	Function_9(487, (fParam0 * Global_3362), uParam1);
	return 1;
}

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x380 / 896
{
	Function_10(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x39C / 924
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
	Function_24(iParam0, TO_FLOAT(bParam1), 1);
	Function_23(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_11(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x5BC / 1468
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_22(390))), 32);
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
					bVar19 = (Function_21(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_21(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_19(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_16(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_13(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_12(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_12() //Position: 0xBE9 / 3049
{
	int iVar0;
	
	return iVar0;
}

var Function_13(int iParam0) //Position: 0xBF1 / 3057
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xC02 / 3074
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_15(char* cParam0, bool bParam1) //Position: 0xCF7 / 3319
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xD10 / 3344
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0xD75 / 3445
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_18(int iParam0, bool bParam1) //Position: 0xD87 / 3463
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xD99 / 3481
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
	if (((Function_20(iParam0) != 19 || Function_20(iParam0) != 17) || Function_20(iParam0) != 10) || Function_20(iParam0) != 9)
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

int Function_20(int iParam0) //Position: 0xEC9 / 3785
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0xED8 / 3800
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0xF11 / 3857
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0xF4E / 3918
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x10E8 / 4328
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

void Function_25(int iParam0, float fParam1) //Position: 0x132C / 4908
{
	Function_26(iParam0, (Function_27(iParam0) + fParam1));
	return;
}

void Function_26(int iParam0, int iParam1) //Position: 0x133F / 4927
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

float Function_27(int iParam0) //Position: 0x1368 / 4968
{
	return (*&Global_78480 + 176)[iParam0];
}

bool Function_28() //Position: 0x1378 / 4984
{
	if (Function_30())
	{
		return (Function_29() != 1 || Function_29() != 0);
	}
	return 0;
}

int Function_29() //Position: 0x1391 / 5009
{
	return Global_79349.f_16;
}

bool Function_30() //Position: 0x139D / 5021
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_31() //Position: 0x13A6 / 5030
{
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_90))
	{
		bLocal_90 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_replay", 1, 15, false, 0, 0, 0, 4294967295, 0);
	}
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
	{
		bLocal_89 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_skip", 1, 13, false, 0, 0, 0, 4294967295, 0);
	}
	return;
}

void Function_32() //Position: 0x1400 / 5120
{
	Function_33(1024, 0, 1);
	Function_33(1, 0, 0);
	return;
}

void Function_33(int iParam0, bool bParam1, int iParam2) //Position: 0x1414 / 5140
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_35(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_34(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_34(int iParam0, int iParam1) //Position: 0x143C / 5180
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_35(int iParam0, int iParam1) //Position: 0x144F / 5199
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_36() //Position: 0x145E / 5214
{
	if (Function_38())
	{
		Function_37();
	}
	Function_33(4096, 0, 1);
	return;
}

void Function_37() //Position: 0x1475 / 5237
{
	Function_33(32768, 1, 0);
	return;
}

bool Function_38() //Position: 0x1484 / 5252
{
	return (Function_39(4096) || Function_39(4));
}

bool Function_39(bool bParam0) //Position: 0x1495 / 5269
{
	return Function_40(Global_76905.f_132, bParam0);
}

bool Function_40(var uParam0, bool bParam1) //Position: 0x14A6 / 5286
{
	return (uParam0 && bParam1) == 0;
}

var Function_41() //Position: 0x14B3 / 5299
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_42(int iParam0) //Position: 0x14C8 / 5320
{
	Function_43(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0x1521 / 5409
{
	Function_35(uParam0, iParam1);
	return;
}

void Function_44(bool bParam0, bool bParam1) //Position: 0x152E / 5422
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), bParam1, false, 0, 0, 0, 0);
	return;
}

struct<32> Function_45(int iParam0) //Position: 0x1543 / 5443
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_46(iParam0))
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

bool Function_46(int iParam0) //Position: 0x1600 / 5632
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_47(int iParam0) //Position: 0x1616 / 5654
{
	Function_48(&Global_79338, iParam0);
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x1625 / 5669
{
	Function_34(uParam0, iParam1);
	return;
}

void Function_49(int iParam0) //Position: 0x1632 / 5682
{
	Function_48(&Global_83864 + 1252, iParam0);
	return;
}

void Function_50(int iParam0) //Position: 0x1644 / 5700
{
	Function_48(&Global_78617 + 52, iParam0);
	return;
}

void Function_51(int iParam0) //Position: 0x1655 / 5717
{
	Function_48(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_52() //Position: 0x168E / 5774
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_53() //Position: 0x16A5 / 5797
{
	struct<17> Var0;
	
	Function_55();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_54(&Var0);
	return;
}

void Function_54(int iParam0) //Position: 0x16C7 / 5831
{
	Local_84 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_55() //Position: 0x16D5 / 5845
{
	Function_56();
	return;
}

void Function_56() //Position: 0x16DE / 5854
{
	Function_57(4294967286);
	return;
}

void Function_57(bool bParam0) //Position: 0x16EA / 5866
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_62(&uVar0);
		Function_61(&vVar1);
		vVar1.z = uVar0;
		Function_54(&vVar1);
	}
	Function_60(&uVar0, bParam0);
	Function_59(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_58(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_58(var uParam0, int iParam1) //Position: 0x1727 / 5927
{
	Local_51[iParam12] = *uParam0;
	return;
}

void Function_59(int iParam0) //Position: 0x1736 / 5942
{
	Local_49 = *iParam0;
	return;
}

void Function_60(var uParam0, int iParam1) //Position: 0x1741 / 5953
{
	*uParam0 = iParam1;
	return;
}

void Function_61(int iParam0) //Position: 0x174C / 5964
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_84 };
	return;
}

void Function_62(int iParam0) //Position: 0x175A / 5978
{
	*iParam0 = Local_49;
	return;
}

float Function_63(int iParam0) //Position: 0x1765 / 5989
{
	if (Function_67(iParam0))
	{
		if (Function_66(iParam0))
		{
			return StackVal;
		}
		Function_64();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_64() //Position: 0x1836 / 6198
{
	if (!Function_65())
	{
	}
	return;
}

bool Function_65() //Position: 0x1843 / 6211
{
	return NET_IS_IN_SESSION();
}

bool Function_66(int iParam0) //Position: 0x184C / 6220
{
	return Function_40(*iParam0, 2);
}

bool Function_67(int iParam0) //Position: 0x1859 / 6233
{
	return Function_40(*iParam0, 1);
}

void Function_68(int iParam0) //Position: 0x1866 / 6246
{
	Function_70(iParam0);
	Function_69(&Global_83591, 3, 45.0f);
	return;
}

void Function_69(int iParam0, int iParam1, int iParam2) //Position: 0x187E / 6270
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

void Function_70(int iParam0) //Position: 0x18A1 / 6305
{
	Function_72(&(Global_29008[iParam0]), 16);
	Function_72(&(Global_29008[iParam0]), 64);
	Function_72(&(Global_29008[iParam0]), 4);
	Function_71(64);
	return;
}

void Function_71(int iParam0) //Position: 0x18CF / 6351
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_72(var uParam0, int iParam1) //Position: 0x18E2 / 6370
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_73(int iParam0) //Position: 0x18F9 / 6393
{
	if (IS_ACTORSET_VALID(bLocal_19))
	{
		Function_89(bLocal_19);
	}
	Function_81(iParam0);
	if (!Function_79(4))
	{
		Function_74(1);
	}
	return;
}

void Function_74(bool bParam0) //Position: 0x191D / 6429
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!Function_79(4))
		{
			Function_78(1);
		}
		else
		{
			return;
		}
	}
	Function_77(1);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_75(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_75(bool bParam0, bool bParam1) //Position: 0x1961 / 6497
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_76(GET_LOCAL_SLOT(), bParam0) && !Function_79(2))
		{
			return;
		}
		if (!Function_79(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
		if (Function_79(4))
		{
			if (!bParam1)
			{
				DECOR_SET_BOOL(bVar0, "ArmUp", true);
			}
		}
		else
		{
			DECOR_REMOVE(bVar0, "ArmUp");
		}
	}
	return;
}

int Function_76(bool bParam0, bool bParam1) //Position: 0x19DE / 6622
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar1 = NET_GET_GAMER_POSSE_LEADER(bParam1);
	if (bVar0 != bVar1 && bVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

void Function_77(int iParam0) //Position: 0x1A02 / 6658
{
	Function_48(&Global_79337, iParam0);
	return;
}

void Function_78(int iParam0) //Position: 0x1A11 / 6673
{
	Function_43(&Global_79337, iParam0);
	return;
}

bool Function_79(int iParam0) //Position: 0x1A20 / 6688
{
	return Function_80(Global_79337, iParam0);
}

bool Function_80(var uParam0, int iParam1) //Position: 0x1A2F / 6703
{
	return (uParam0 && iParam1) == 0;
}

void Function_81(bool bParam0) //Position: 0x1A3C / 6716
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		LOG_ERROR("Failed to create iterator to release actors to netLayout");
		return;
	}
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			Function_82(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_82(bool bParam0) //Position: 0x1ADB / 6875
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("nnetLayout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		return;
	}
	if (IS_OBJECT_VALID(bParam0))
	{
		GIVE_OBJECT_TO_LAYOUT(bParam0, bVar0);
	}
	return;
}

void Function_83(int iParam0) //Position: 0x1B0C / 6924
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_84(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_84(var uParam0, int iParam1) //Position: 0x1B32 / 6962
{
	if (Function_86(uParam0[iParam13], 4))
	{
		if (Function_86(uParam0[iParam13], 1))
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
			Function_85(uParam0[iParam13], 1);
			Function_85(uParam0[iParam13], 2);
			Function_85(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_85(var uParam0, int iParam1) //Position: 0x1C60 / 7264
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_86(var uParam0, int iParam1) //Position: 0x1C7A / 7290
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_87(bool bParam0) //Position: 0x1C97 / 7319
{
	bool bVar0;
	
	Function_88(&bParam0);
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_88(int iParam0) //Position: 0x1CDF / 7391
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(*iParam0, GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_89(bool bParam0) //Position: 0x1D38 / 7480
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0))))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)));
			}
		}
		bVar0++;
	}
	return;
}

void Function_90(bool bParam0) //Position: 0x1D83 / 7555
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(bParam0))
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SQUAD_LEAVE(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_91(bool bParam0, var uParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x1DC3 / 7619
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			bVar2 = Function_92(bVar1, uParam1);
			TASK_FLEE_ACTOR(bVar1, bVar2, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		bVar0++;
	}
}

var Function_92(bool bParam0, bool bParam1) //Position: 0x1E13 / 7699
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	if (GET_ACTORSET_SIZE(bParam1) != 0 || !IS_ACTORSET_VALID(bParam1))
	{
		return "";
	}
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+20.0f;
	fVar3 = (fVar2 + 1.0f);
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam1) - 1))
	{
		if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(bParam1, bVar0)))
		{
			fVar3 = Function_93(bParam0, GET_ACTOR_FROM_ACTORSET(bParam1, bVar0));
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return GET_ACTOR_FROM_ACTORSET(bParam1, bVar1);
	}
	return "";
}

float Function_93(bool bParam0, bool bParam1) //Position: 0x1E99 / 7833
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_94(&uVar0, &uVar3);
	return iVar6;
}

var Function_94(var uParam0, int iParam1) //Position: 0x1EB8 / 7864
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

var Function_95(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1ED6 / 7894
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = false;
	bVar2 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!Function_97(Global_34573, bVar1, bParam2))
			{
				if (!Function_96(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					SQUAD_LEAVE(bVar1);
					DESTROY_ACTOR(bVar1);
					if (bParam1)
					{
						if (IS_ACTOR_RIDING(bVar1))
						{
							DESTROY_ACTOR(GET_MOUNT(bVar1));
						}
					}
					bVar2++;
				}
				else
				{
					bVar0++;
				}
			}
			else
			{
				bVar0++;
			}
		}
		else
		{
			bVar0++;
		}
	}
	return bVar2;
}

bool Function_96(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1F71 / 8049
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

bool Function_97(var uParam0, var uParam1, float fParam2) //Position: 0x1F8B / 8075
{
	float fVar0;
	
	fVar0 = Function_93(uParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

void Function_98(bool bParam0) //Position: 0x1FA8 / 8104
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_99(bool bParam0) //Position: 0x1FDA / 8154
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_100(bool bParam0) //Position: 0x2021 / 8225
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

int Function_101() //Position: 0x2056 / 8278
{
	if (!Function_377(&Local_111, &bLocal_138, 48533, 1, 0))
	{
		return 0;
	}
	if (StackVal != 11)
	{
		if (Function_67(&iLocal_370))
		{
			if (Function_63(&iLocal_370) <= 0.0f)
			{
				Function_373(&uLocal_373, 6, 40, 38, 10.0f);
				Function_372(&iLocal_370, 5.0f);
			}
		}
		else
		{
			Function_371(&iLocal_370, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_317();
			break;
		
		case 0x00000001:
			Function_316();
			break;
		
		case 0x00000002:
			Function_311();
			break;
		
		case 0x00000003:
			Function_304();
			break;
		
		case 0x00000004:
			Function_277();
			break;
		
		case 0x0000000B:
			Function_102();
			break;
	}
	return 1;
}

void Function_102() //Position: 0x20FE / 8446
{
	Function_276();
	switch (StackVal)
	{
		case 0x00000000:
			Function_275();
			Local_111.f_8 = 6;
			Function_244(StackVal, StackVal, StackVal, StackVal, StackVal, bLocal_138, &uLocal_176, Local_332);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_02", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			break;
		
		case 0x00000006:
			Function_241();
			Function_103(&Local_111);
			break;
	}
	return;
}

var Function_103(int iParam0) //Position: 0x2160 / 8544
{
	int iVar0;
	int iVar1;
	char* cVar2[16];
	bool bVar6;
	
	iVar1 = 0;
	switch (iLocal_96)
	{
		case 0x00000000:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_240(iParam0 + 16 + 8);
			}
			if (!bLocal_92)
			{
				if (((*iParam0 == Global_30717[2] && *iParam0 == Global_30640[13]) && *iParam0 == Global_30707[4]) && *iParam0 == Global_30658[7])
				{
					Function_10(458, 1, 0, 0);
				}
				strcpy(&cVar2, "FM Level - ", 16);
				stradd(&cVar2, I2STR(Global_83864.f_1264), 16);
				PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(Function_63(iParam0 + 16 + 8)), (iParam0 + 16)->f_20, Function_239(), Function_238(29), &cVar2);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				if (IS_STRING_VALID(iParam0->f_100))
				{
					AUDIO_MUSIC_FORCE_TRACK(iParam0->f_100, "IDLE", 2.0f, 2, 4294967295, 3212836864, 0);
				}
				Function_162(iParam0);
				Function_159(iParam0);
				if (NET_GET_PLAYMODE() == 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
					{
						if ((((((Global_56612[09].f_24 != 1 && Global_56612[19].f_24 != 1) && Global_56612[29].f_24 != 1) && Global_56612[39].f_24 != 1) && Global_56612[49].f_24 != 1) && Global_56612[69].f_24 != 1) && Global_56612[59].f_24 != 1)
						{
							if (Function_158())
							{
								if (Global_56612[79].f_24 == 1)
								{
									AWARD_ACHIEVEMENT(40);
								}
							}
							else
							{
								AWARD_ACHIEVEMENT(40);
							}
						}
					}
				}
			}
			else
			{
				Function_157("MP_AA_already_finished");
			}
			if ((iParam0 + 16)->f_28 == 2)
			{
				iLocal_96 = 1;
			}
			else
			{
				iLocal_96 = 15;
			}
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT(Function_156(*iParam0), 0, 0, 0, 0, 0);
			HUD_ENABLE(false);
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (IS_ACTOR_VALID(Function_41()))
				{
					Function_154(Function_41(), 0);
					if (IS_ACTOR_INSIDE_VEHICLE(Function_41()))
					{
						bVar6 = GET_VEHICLE(Function_41());
						if (IS_ACTOR_VALID(bVar6))
						{
							START_VEHICLE(bVar6);
						}
					}
				}
				SET_PLAYER_CONTROL(false, 0, 1, 1);
			}
			Function_51(131072);
			CANCEL_DEADEYE();
			ENABLE_USE_CONTEXTS(0);
			iLocal_91 = 1;
			SET_SWITCH_CAMERA_BUTTON_ENABLED(0);
			UI_EXCLUDE("nMP_Ticker");
			UI_EXIT("WeaponAmmo");
			UI_EXCLUDE("WeaponAmmo");
			UI_SET_TEXT("mp_aa_stats_vote_skip", "Common_Null");
			UI_SET_TEXT("mp_aa_stats_vote_replay", "Common_Null");
			iLocal_96 = 2;
			break;
		
		case 0x00000002:
			iLocal_97++;
			if (iLocal_97 >= 5)
			{
				iLocal_96 = 6;
			}
			break;
		
		case 0x00000006:
			Function_149(iParam0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_143(*iParam0, Function_144());
			}
			iLocal_96 = 7;
			break;
		
		case 0x00000007:
			iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
			if (iLocal_17 != 3)
			{
				if (IS_LOCAL_PLAYER_VALID(0))
				{
					if (IS_PLAYER_CONTROLLABLE(0))
					{
						SET_PLAYER_CONTROL(false, 0, 1, 1);
					}
				}
				if (IS_BUTTON_RELEASED(iVar0, 4, 1, true))
				{
					Function_37();
					if (iLocal_17 == 2)
					{
						Function_149(iParam0);
					}
					else if (iLocal_17 == 1)
					{
						Function_140();
					}
				}
				else if (Function_139(15, 1, 1))
				{
					Function_138(1);
					Function_7(iParam0);
				}
				else if (Function_139(13, 1, 1))
				{
					Function_138(0);
					Function_7(iParam0);
				}
				else if (Function_137())
				{
					if (iLocal_17 == 1)
					{
						Function_149(iParam0);
					}
					else if (iLocal_17 == 2)
					{
						Function_140();
					}
				}
			}
			else
			{
				if (UI_ISACTIVE("NotorietyMeter") && !iLocal_94)
				{
					Function_5();
					iLocal_94 = 1;
				}
				else if (!UI_ISACTIVE("NotorietyMeter") && iLocal_94)
				{
					iLocal_94 = 0;
					Function_31();
				}
				if (!UI_ISACTIVE("RadialWeaponQuickPick"))
				{
					if (iLocal_93)
					{
						iLocal_93 = 0;
						Function_31();
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_90))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_90))
						{
							Function_138(1);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_89))
						{
							Function_138(0);
						}
					}
				}
				else if (!iLocal_93)
				{
					iLocal_93 = 1;
					Function_5();
				}
			}
			Function_133();
			switch (Function_130(iParam0))
			{
				case 0x00000001:
					if (Function_116(99, 1, 0x3f800000))
					{
						Function_157("mp_aa_vote_replay_passed");
						PLAYSTAT_INT("AA vote passed", true);
						(iParam0 + 16)->f_28 = 1;
						Function_115(84);
						NET_ALLOW_PLAYERS_TO_JOIN(0);
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							Function_114(Global_12976.f_36);
							if (Function_111(StackVal, StackVal, Function_114(Global_12976.f_36)))
							{
								DESTROY_ACTOR(Global_12976.f_36);
							}
						}
						iLocal_96 = 11;
					}
					break;
				
				case 0x00000000:
					Function_157("mp_aa_vote_skip_passed");
					PLAYSTAT_INT("AA vote passed", false);
					(iParam0 + 16)->f_28 = 0;
					iLocal_96 = 15;
					break;
				
				case 0x00000002:
					Function_55();
					break;
			}
			break;
		
		case 0x0000000B:
			iVar1 = 1;
			if (!Function_110(8))
			{
				Function_109(1792, 0);
				Function_104(1, 0, 0);
				RESET_PROPS_IN_WORLD();
				CLEAR_ALL_CORPSES();
				iLocal_96 = 16;
			}
			break;
		
		case 0x0000000F:
			Function_50(64);
			if (!Function_79(4))
			{
				Function_74(1);
			}
			iLocal_96 = 16;
			break;
		
		case 0x00000010:
			break;
	}
	return iVar1;
}

void Function_104(var uParam0, bool bParam1, int iParam2) //Position: 0x269A / 9882
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
		if (Function_46(Global_29006))
		{
			Function_108(&(Global_29008[Global_29006]), 131072);
			Function_72(&(Global_29008[Global_29006]), 2097152);
			Function_106(Global_29006);
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
				if (Function_105(&(Global_29008[iVar0]), 4) || Function_105(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_72(&(Global_29008[iVar0]), 2097155);
					Function_108(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_30())
			{
			}
			WAIT(false);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_105(var uParam0, int iParam1) //Position: 0x27A5 / 10149
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_106(int iParam0) //Position: 0x27C1 / 10177
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_107())
			{
				return;
			}
		}
		if (!Function_105(&(Global_29008[iParam0]), 2048))
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

bool Function_107() //Position: 0x2840 / 10304
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_105(&(Global_29008[iVar0]), 4) || Function_105(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_108(var uParam0, int iParam1) //Position: 0x28A9 / 10409
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_109(int iParam0, bool bParam1) //Position: 0x28B8 / 10424
{
	if (bParam1)
	{
		Function_35(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_34(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

bool Function_110(int iParam0) //Position: 0x28F3 / 10483
{
	return Function_80(Global_78617.f_52, iParam0);
}

bool Function_111(vector3 vParam0) //Position: 0x2904 / 10500
{
	var uVar0[8];
	int iVar9;
	int iVar10;
	
	Function_113(&uVar0);
	iVar9 = Function_112(StackVal, StackVal, vParam0, 1, 1, 0);
	if (Function_46(iVar9))
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

var Function_112(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2978 / 10616
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

void Function_113(int iParam0) //Position: 0x2A13 / 10771
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

vector3 Function_114(bool bParam0) //Position: 0x2A71 / 10865
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_115(int iParam0) //Position: 0x2A82 / 10882
{
	Function_43(&Global_78617 + 52, iParam0);
	return;
}

bool Function_116(bool bParam0, bool bParam1, float fParam2) //Position: 0x2A93 / 10899
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_129(bParam0);
	}
	Function_61(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_54(&Var0);
	}
	if (Function_128(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_127(&Var0, 0);
		Function_54(&Var0);
		Function_56();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_126(bParam0, iVar6, &uVar7))
	{
		if (Function_125())
		{
			if (!Function_124(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, true, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_123(&Var0, 1);
				Function_54(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_54(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_117(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", false, false, false, false);
					Var11 = GET_LOCAL_SLOT();
					Var11.f_4 = fVar5;
					NET_SCRIPTMSG_SEND(1, 104, &Var11, 3, 1);
				}
			}
		}
	}
	else
	{
		Var0.f_16 = 0.0f;
		Function_54(&Var0);
	}
	return 0;
}

bool Function_117(int iParam0) //Position: 0x2CE6 / 11494
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_122(bVar0))
		{
			iVar1 = Function_118(bVar0);
			if (iVar1 == iParam0)
			{
				if (bVar0 == bVar2)
				{
					return 1;
				}
				return 0;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_118(bool bParam0) //Position: 0x2D29 / 11561
{
	int iVar0;
	
	Function_121(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_62(&iVar0);
	}
	else
	{
		Function_120(&iVar0, bParam0);
	}
	return Function_119(&iVar0);
}

int Function_119(int iParam0) //Position: 0x2D50 / 11600
{
	return *iParam0;
}

void Function_120(var uParam0, int iParam1) //Position: 0x2D59 / 11609
{
	*uParam0 = Local_51[iParam12];
	return;
}

void Function_121(int iParam0) //Position: 0x2D68 / 11624
{
	Function_60(iParam0, 4294967286);
	return;
}

bool Function_122(bool bParam0) //Position: 0x2D76 / 11638
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_51, bParam0);
}

void Function_123(var uParam0, bool bParam1) //Position: 0x2D83 / 11651
{
	if (bParam1)
	{
		Function_35(uParam0, 2);
	}
	else
	{
		Function_34(uParam0, 2);
	}
	return;
}

bool Function_124(bool bParam0) //Position: 0x2D9D / 11677
{
	return Function_40(*bParam0, 2);
}

bool Function_125() //Position: 0x2DAA / 11690
{
	if (NET_IS_SCRIPT_REGISTERED_AS_NET_SCRIPT())
	{
		return NET_IS_HOST_OF_THIS_SCRIPT();
	}
	if (NET_IS_IN_SESSION())
	{
		return NET_IS_SESSION_HOST();
	}
	return 0;
}

bool Function_126(int iParam0, var uParam1, int iParam2) //Position: 0x2DC8 / 11720
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 0;
	bVar3 = false;
	uParam1 = uParam1;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_122(iVar0))
		{
			iVar1 = Function_118(iVar0);
			if (iVar1 != iParam0)
			{
				if (iVar1 != 4294967286)
				{
					*iParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_127(int iParam0, bool bParam1) //Position: 0x2E19 / 11801
{
	if (bParam1)
	{
		Function_35(iParam0, 1);
	}
	else
	{
		Function_34(iParam0, 1);
	}
	return;
}

bool Function_128(int iParam0) //Position: 0x2E33 / 11827
{
	return Function_40(*iParam0, 1);
}

void Function_129(int iParam0) //Position: 0x2E40 / 11840
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_62(&iVar1);
	if (Function_119(&iVar1) != bVar0)
	{
		Function_61(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_40(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), false);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_57(bVar0);
		Function_123(&Var2, 0);
		Function_54(&Var2);
	}
	return;
}

bool Function_130(int iParam0) //Position: 0x2F3D / 12093
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar2 = false;
	iVar3 = (NET_SCRIPT_GET_NUM_PARTICIPANTS() / 2) + 1;
	bVar4 = false;
	while (bVar4 <= 16)
	{
		if (Function_132(bVar4))
		{
			switch (Function_131(bVar4))
			{
				case 0x00000000:
					bVar1++;
					break;
				
				case 0x00000001:
					bVar2++;
					break;
				}
		}
		bVar4++;
	}
	UI_SET_STRING("mp_aa_vote_total_replays", INT_TO_STRING(bVar2));
	UI_SET_STRING("mp_aa_vote_total_continues", INT_TO_STRING(bVar1));
	UI_SET_STRING("mp_aa_vote_total_required", INT_TO_STRING(NET_SCRIPT_GET_NUM_PARTICIPANTS()));
	if (iLocal_17 == 2)
	{
		UI_SET_TEXT("mp_aa_plist_vote_skip", "mp_aa_vote_skip");
		UI_SET_TEXT("mp_aa_plist_vote_replay", "mp_aa_vote_replay");
		UI_REFRESH("mp_aa_plist_vote_skip");
		UI_REFRESH("mp_aa_plist_vote_replay");
	}
	else if (iLocal_17 == 1)
	{
		UI_SET_TEXT("mp_aa_stats_vote_skip", "mp_aa_vote_skip");
		UI_SET_TEXT("mp_aa_stats_vote_replay", "mp_aa_vote_replay");
		UI_REFRESH("mp_aa_stats_vote_skip");
		UI_REFRESH("mp_aa_stats_vote_replay");
	}
	if (bVar2 > iVar3)
	{
		Function_3(iParam0);
		iVar0 = 1;
	}
	else if (bVar1 > iVar3)
	{
		Function_3(iParam0);
		iVar0 = 0;
	}
	else if (bVar1 + bVar2) == NET_SCRIPT_GET_NUM_PARTICIPANTS()
	{
		Function_3(iParam0);
		iVar0 = 0;
	}
	else
	{
		iVar0 = 2;
	}
	return iVar0;
}

int Function_131(int iParam0) //Position: 0x3179 / 12665
{
	return StackVal;
}

bool Function_132(bool bParam0) //Position: 0x3187 / 12679
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_133() //Position: 0x319D / 12701
{
	Function_136(8);
	Function_134(&Global_79298);
	return;
}

void Function_134(int iParam0) //Position: 0x31AF / 12719
{
	Function_135(iParam0, 0.0f);
	return;
}

void Function_135(int iParam0, float fParam1) //Position: 0x31BB / 12731
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_35(iParam0, 1);
	Function_34(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_136(int iParam0) //Position: 0x31DC / 12764
{
	Function_43(&Global_79338, iParam0);
	return;
}

bool Function_137() //Position: 0x31EB / 12779
{
	return Function_39(32768);
}

void Function_138(bool bParam0) //Position: 0x31F8 / 12792
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_50(64);
	Local_51[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_139(int iParam0, int iParam1, bool bParam2) //Position: 0x3223 / 12835
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_RELEASED(iVar0, iParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (((IS_BUTTON_RELEASED(iVar0, 15, iParam1, bParam2) || IS_BUTTON_RELEASED(iVar0, 13, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 15, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (((IS_BUTTON_RELEASED(iVar0, 14, iParam1, bParam2) || IS_BUTTON_RELEASED(iVar0, 12, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 14, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_140() //Position: 0x32D0 / 13008
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_142();
	Function_141();
	iLocal_17 = 2;
	return;
}

void Function_141() //Position: 0x330B / 13067
{
	Function_33(1025, 1, 0);
	return;
}

void Function_142() //Position: 0x3319 / 13081
{
	if (!Function_38())
	{
		Function_37();
	}
	Function_33(4096, 1, 1);
	return;
}

void Function_143(var uParam0, var uParam1) //Position: 0x3331 / 13105
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

int Function_144() //Position: 0x3356 / 13142
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		if (Function_132(iVar2))
		{
			iVar3 = Function_145(iVar2);
			if (iVar3 >= iVar1)
			{
				iVar1 = iVar3;
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int Function_145(bool bParam0) //Position: 0x3395 / 13205
{
	return Function_146(0, bParam0);
}

int Function_146(int iParam0, bool bParam1) //Position: 0x33A1 / 13217
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_148(iParam0);
	}
	if (!Function_147(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

bool Function_147(bool bParam0) //Position: 0x3408 / 13320
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

int Function_148(int iParam0) //Position: 0x34A9 / 13481
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_149(int iParam0) //Position: 0x34B9 / 13497
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	Function_153(1);
	Function_142();
	Function_141();
	UI_UNFOCUS("HudGamerList");
	UI_ENTER("AAPrompts_Stats");
	Function_33(16384, 1, 1);
	Function_33(32768, 0, 1);
	NET_PLAYER_LIST_SET_TEMPLATE(7);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(2, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(3, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	strcpy(&Global_76905 + 64, "mp_plist_personal_stats", 64);
	NET_PLAYER_LIST_SET_TITLE(&Global_76905 + 64);
	iVar8 = 100;
	itos(&cVar0, Function_239(), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_score_alt"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	itos(&cVar0, iParam0->f_88, 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_bonus_score_alt"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	Stack.Push(iVar8);
	Call_Loc(iParam0->f_96);
	iVar8 = (iVar8 - 1);
	if (iParam0->f_104)
	{
		bVar9 = "mp_plist_target_bonus_casual";
	}
	else
	{
		switch (GET_PLAYER_COMBATMODE())
		{
			case 0x00000002:
				bVar9 = "mp_plist_target_bonus_casual";
				break;
			
			case 0x00000000:
				bVar9 = "mp_plist_target_bonus_normal";
				break;
			
			case 0x00000001:
				bVar9 = "mp_plist_target_bonus_expert";
				break;
			
			default:
				bVar9 = "mp_plist_target_bonus";
				break;
			}
	}
	itos(&cVar0, Function_148(3), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(bVar9), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	itos(&cVar0, iParam0->f_92, 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_total_xp"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_kills"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_238(29));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_deaths"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_152());
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_assists"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_238(38));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_defends"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_238(28));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_combo_streak"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bLocal_43);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_headshots"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_238(34));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_time"), iVar8);
	Function_150(0, Function_63(iParam0 + 16 + 8));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iLocal_17 = 1;
	return;
}

void Function_150(bool bParam0, int iParam1) //Position: 0x38DD / 14557
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_151(iParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), false);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_151(var uParam0) //Position: 0x3B0A / 15114
{
	struct<4> Var0;
	bool bVar4;
	
	bVar4 = uParam0;
	Var0 = FLOOR((bVar4 / 3600.0f));
	while (bVar4 <= 3600.0f)
	{
		bVar4 = (bVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar4 / 60.0f));
	while (bVar4 <= 60.0f)
	{
		bVar4 = (bVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar4);
	Var0.f_12 = (StackVal - IntToFloat(bVar4));
	return StackVal, StackVal, StackVal, Var0;
}

int Function_152() //Position: 0x3B7B / 15227
{
	return Function_238(12);
}

void Function_153(bool bParam0) //Position: 0x3B86 / 15238
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_33(16384, 0, 1);
	return;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x3BA0 / 15264
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_155(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_155(bool bParam0, bool bParam1) //Position: 0x3BFD / 15357
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_156(int iParam0) //Position: 0x3C1C / 15388
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_157(bool bParam0) //Position: 0x3C7A / 15482
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), false, false, 0, 0, 0, 0);
	return;
}

bool Function_158() //Position: 0x3C8E / 15502
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_159(int iParam0) //Position: 0x3C9D / 15517
{
	Function_161(iParam0, Global_30668[2], &Global_56612, 0);
	Function_161(iParam0, Global_30679[1], &Global_56612, 1);
	Function_161(iParam0, Global_30658[0], &Global_56612, 2);
	Function_161(iParam0, Global_30658[3], &Global_56612, 3);
	Function_161(iParam0, Global_30685[2], &Global_56612, 4);
	Function_161(iParam0, Global_30640[2], &Global_56612, 6);
	Function_161(iParam0, Global_30685[1], &Global_56612, 5);
	Function_161(iParam0, Global_30658[2], &Global_56612, 7);
	Function_160(iParam0, Global_30668[2], &Global_56688, 0);
	Function_160(iParam0, Global_30679[1], &Global_56688, 1);
	Function_160(iParam0, Global_30658[0], &Global_56688, 2);
	Function_160(iParam0, Global_30658[3], &Global_56688, 3);
	Function_160(iParam0, Global_30685[2], &Global_56688, 4);
	Function_160(iParam0, Global_30640[2], &Global_56688, 6);
	Function_160(iParam0, Global_30685[1], &Global_56688, 5);
	Function_160(iParam0, Global_30658[2], &Global_56688, 7);
	return;
}

void Function_160(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3D93 / 15763
{
	if (*uParam0 != iParam1 && uParam2[776][iParam39]->f_20 != 1)
	{
		(*uParam2[776])[iParam39] = iParam1;
		uParam2[776][iParam39]->f_24 = 1;
		uParam2[776][iParam39]->f_8 = Function_152();
	}
	if (*uParam0 != iParam1 && uParam2[876][iParam39]->f_20 != 1)
	{
		(*uParam2[876])[iParam39] = iParam1;
		uParam2[876][iParam39]->f_24 = 1;
		uParam2[876][iParam39]->f_8 = Function_152();
	}
	if (*uParam0 != iParam1 && uParam2[976][iParam39]->f_20 != 1)
	{
		(*uParam2[976])[iParam39] = iParam1;
		uParam2[976][iParam39]->f_24 = 1;
		uParam2[976][iParam39]->f_8 = Function_152();
	}
}

void Function_161(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3E57 / 15959
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_152();
	}
}

void Function_162(int iParam0) //Position: 0x3E98 / 16024
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_237(*iParam0) };
	Function_235(iParam0);
	Function_234(13, iParam0->f_92);
	Function_234(0, iParam0->f_92);
	iParam0->f_92 = (iParam0->f_92 + Function_148(2));
	if (iParam0->f_104)
	{
		Function_233(3, 5);
	}
	else
	{
		Function_233(3, 100);
	}
	iParam0->f_92 = (iParam0->f_92 + Function_148(3));
	Function_133();
	Function_234(13, iParam0->f_92);
	Function_234(0, iParam0->f_92);
	iLocal_95 = 1;
	Function_163(Var0, 4294967295, 0, 0, 1);
	return;
}

void Function_163(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3F0D / 16141
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_232(5, 1);
	Function_51(4096);
	switch (Function_29())
	{
		case 0x00000011:
		case 0x00000002:
			Function_191(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_184();
	Function_183();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(false);
			Function_182(&Global_78480 + 220, &uVar0, 0);
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), iParam0, iParam1, &uVar0);
			if (bParam3)
			{
				uVar0[0] = uVar0[11];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 5, iParam1, &uVar0);
				uVar0[0] = uVar0[7];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 3, iParam1, &uVar0);
			}
			uVar0[0] = uVar0[13];
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 6, iParam1, &uVar0);
			if (bParam4)
			{
				Function_180(iParam1);
			}
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_182(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_164(bParam2);
}

void Function_164(bool bParam0) //Position: 0x402A / 16426
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_136(2);
	if (bParam0)
	{
		Function_136(1);
	}
	else
	{
		Function_47(1);
	}
	Function_165();
	return;
}

void Function_165() //Position: 0x40B3 / 16563
{
	Function_178();
	Function_177();
	Function_177();
	Function_176();
	Function_176();
	Function_175();
	Function_175();
	Function_172(0);
	Function_172(0);
	if (!Function_30())
	{
		Function_170();
		Function_169();
		Function_168();
		Function_167();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_166();
	return;
}

void Function_166() //Position: 0x4105 / 16645
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

void Function_167() //Position: 0x420B / 16907
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

void Function_168() //Position: 0x423E / 16958
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_169() //Position: 0x43CC / 17356
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_170() //Position: 0x4580 / 17792
{
	Function_171(&Global_28260, 1, 0);
	return;
}

void Function_171(int iParam0, bool bParam1, int iParam2) //Position: 0x458E / 17806
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
	
	bVar0 = Function_41();
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

struct<8> Function_172(int iParam0) //Position: 0x477F / 18303
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
					iVar2 = ((Function_174((50 + iVar4)) + Function_174((183 + iVar4))) + Function_174((90 + iVar4)));
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
	Function_173(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_173(int iParam0, bool bParam1, bool bParam2) //Position: 0x4825 / 18469
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
		Function_24(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_23(iParam0);
	if (bParam2)
	{
		Function_11(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_174(bool bParam0) //Position: 0x4AC0 / 19136
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_175() //Position: 0x4B01 / 19201
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
		iVar2 = ((Function_174((50 + iVar3) + 15) + Function_174((183 + iVar3) + 15)) + Function_174((90 + iVar3) + 15));
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
	Function_173(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_176() //Position: 0x4B8A / 19338
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
			iVar2 = ((Function_174((50 + iVar3) + 8) + Function_174((183 + iVar3) + 8)) + Function_174((90 + iVar3) + 8));
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
	Function_173(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_177() //Position: 0x4C21 / 19489
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
		iVar2 = ((Function_174((50 + iVar3)) + Function_174((183 + iVar3))) + Function_174((90 + iVar3)));
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
	Function_173(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_178() //Position: 0x4CA0 / 19616
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_179(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_173(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_179(int iParam0, bool bParam1, int iParam2) //Position: 0x4CD9 / 19673
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
	Function_24(iParam0, bParam1, 1);
	Function_23(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_11(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_180(int iParam0) //Position: 0x4EE3 / 20195
{
	bool bVar0[67];
	bool bVar68[67];
	
	Function_35(&Global_79338, 32);
	bVar0[13] = FLOOR(Function_27(8));
	bVar0[0] = FLOOR(Function_27(8));
	if (Function_27(8) < 0.0f)
	{
		if (Function_181())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 145, iParam0, &bVar0);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 144, iParam0, &bVar0);
		}
	}
	if (Function_27(7) < 0.0f)
	{
		bVar68[13] = FLOOR(Function_27(7));
		bVar68[0] = bVar68[13];
		if (Function_181())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 147, iParam0, &bVar68);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 146, iParam0, &bVar68);
		}
	}
	return;
}

bool Function_181() //Position: 0x4F8A / 20362
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

void Function_182(var uParam0, var uParam1, bool bParam2) //Position: 0x4F95 / 20373
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		(*uParam1)[iVar0] = (*uParam0)[iVar0];
		iVar0++;
	}
	if (bParam2)
	{
		iVar0 = 40;
		while (iVar0 < 66)
		{
			(*uParam1)[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

void Function_183() //Position: 0x4FDA / 20442
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 259)
	{
		Global_56092[iVar0] = 0;
		Global_56352[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_184() //Position: 0x5004 / 20484
{
	if (Global_83864.f_1264 > 6)
	{
		Function_185(&(Global_50170[522]));
		Function_185(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_185(&(Global_50170[722]));
		Function_185(&(Global_50170[822]));
		Function_185(&(Global_50170[922]));
		Function_185(&(Global_50170[1022]));
		Function_185(&(Global_50170[1122]));
	}
	return;
}

void Function_185(bool bParam0) //Position: 0x5064 / 20580
{
	Global_56092[*bParam0] = 0;
	Function_186(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_186(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x507E / 20606
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_190(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_189(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_190(iParam0), &cVar0, 2, 2, true);
	}
	if (Function_188(iParam0, 4))
	{
		Function_187(Function_190(iParam0), 0);
	}
}

void Function_187(bool bParam0, bool bParam1) //Position: 0x5135 / 20789
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

bool Function_188(int iParam0, bool bParam1) //Position: 0x515A / 20826
{
	return Function_40(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_189(int iParam0) //Position: 0x516E / 20846
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_190(int iParam0) //Position: 0x51A2 / 20898
{
	return Global_50170[iParam022].f_24;
}

void Function_191(var uParam0, var uParam1, int iParam2) //Position: 0x51B1 / 20913
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_231(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_224(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_230(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_223(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_186(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_231(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_224(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_230(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_223(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_186(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_231(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_192(17, 150, Function_230(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_223(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_186(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_192(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x535A / 21338
{
	Function_221(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_190(iParam0), 1.0f, false, 0);
	Function_217(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_214(iParam3);
	}
	Function_208(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_193();
}

void Function_193() //Position: 0x53C0 / 21440
{
	if (!Function_30())
	{
		if (!Function_207(1, 3, 1, 1))
		{
			Function_195(1);
			Function_194(1, 8);
		}
	}
	else
	{
		Function_164(0);
	}
	return;
}

void Function_194(var uParam0, int iParam1) //Position: 0x53E9 / 21481
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_30())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_195(bool bParam0) //Position: 0x542B / 21547
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_196();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_165();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_34(&Global_63095, 1);
		Function_34(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_196() //Position: 0x547C / 21628
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_206())
	{
		Function_203(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_203(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_198(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_198(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_197(StackVal, StackVal, vVar0))
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

bool Function_197(vector3 vParam0) //Position: 0x5537 / 21815
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_198(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x554F / 21839
{
	int iVar0;
	
	iVar0 = Function_201(uParam2, uParam3);
	if (Function_200(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_35(&Global_63095, 1);
			Function_34(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_35(&Global_63095, 2);
			Function_34(&Global_63095, 1);
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
		Function_35(&Global_63095, 2);
		Function_34(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_199();
	return StackVal, StackVal, Function_199();
}

vector3 Function_199() //Position: 0x5636 / 22070
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_200(int iParam0) //Position: 0x563F / 22079
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_201(bool bParam0, bool bParam1) //Position: 0x5655 / 22101
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
				fVar2 = Function_202(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_202(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_200(bVar0) && !bParam1)
	{
		bVar0 = Function_201(bParam0, 1);
	}
	return bVar0;
}

float Function_202(vector3 vParam0, vector3 vParam3) //Position: 0x571C / 22300
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_203(var uParam0, int iParam1) //Position: 0x5739 / 22329
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_205(Global_34573, &vVar4);
	if (!Function_204(Global_30640[0]))
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
	if (!Function_204(Global_30640[2]))
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
	if (!Function_204(Global_30640[1]))
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
	if (!Function_204(Global_30658[1]))
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
	if (!Function_204(Global_30658[3]))
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
	if (!Function_204(Global_30658[2]))
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
	if (!Function_204(Global_30658[4]))
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
	if (!Function_204(Global_30668[0]))
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
	if (!Function_204(Global_30668[1]))
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
	if (!Function_204(Global_30668[2]))
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
	if (!Function_204(Global_30679[0]))
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
	if (!Function_204(Global_30685[0]))
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
	if (!Function_204(Global_30685[1]))
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
	if (!Function_204(Global_30685[2]))
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
	if (!Function_204(Global_30693[0]))
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
	if (!Function_204(Global_30693[1]))
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
	if (!Function_204(Global_30693[2]))
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
	if (!Function_204(Global_30707[2]))
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
	if (!Function_204(Global_30707[3]))
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
	if (!Function_204(Global_30707[0]))
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
	if (!Function_204(Global_30717[0]))
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
	if (!Function_204(Global_30723[2]))
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
	if (!Function_204(Global_30723[1]))
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
	if (!Function_204(Global_30723[0]))
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
	if (!Function_204(Global_30679[1]))
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
	if (!Function_204(Global_30707[1]))
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
	Function_35(&Global_63095, 2);
	Function_34(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_197(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_204(int iParam0) //Position: 0x5F5E / 24414
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_40(uVar0, 0x1000000) || Function_40(uVar0, 0x2000000)) || Function_40(uVar0, 0x4000000)) || !Function_40(uVar0, 0x10000000));
}

void Function_205(bool bParam0, bool bParam1) //Position: 0x5F99 / 24473
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_206() //Position: 0x5FA6 / 24486
{
	if (Function_40(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_207(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x5FC1 / 24513
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

void Function_208(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6065 / 24677
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_213();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_212(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_211(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_210(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_209(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_212(), iVar1 + 1);
	return;
}

struct<16> Function_209(int iParam0) //Position: 0x60D7 / 24791
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_210(int iParam0) //Position: 0x60F8 / 24824
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_211(int iParam0) //Position: 0x6119 / 24857
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_212() //Position: 0x613A / 24890
{
	return "CQueue_Count";
}

var Function_213() //Position: 0x614F / 24911
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_214(int iParam0) //Position: 0x617E / 24958
{
	Function_215(iParam0, 1);
	return;
}

void Function_215(int iParam0, bool bParam1) //Position: 0x618A / 24970
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_35(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_216((iVar0 % 32)));
	}
	else
	{
		Function_34(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_216((iVar0 % 32)));
	}
	return;
}

int Function_216(bool bParam0) //Position: 0x61E0 / 25056
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_217(int iParam0, int iParam1) //Position: 0x61EC / 25068
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_220(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_190(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_219(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_189(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_218(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_190(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_190(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_190(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_218(int iParam0) //Position: 0x626E / 25198
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_189(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_219(int iParam0) //Position: 0x628E / 25230
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_220(int iParam0) //Position: 0x62BF / 25279
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

void Function_221(bool bParam0, bool bParam1) //Position: 0x643D / 25661
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_222();
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
			(*&Global_50170[bParam022] + 36)[bVar0] = 0.0f;
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
	}
	if (bParam1)
	{
		Global_50170[bParam022].f_28 = 0;
	}
	return;
}

var Function_222() //Position: 0x6589 / 25993
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_223(var uParam0, bool bParam1, bool bParam2) //Position: 0x65D6 / 26070
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_224(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x65EE / 26094
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_189(iParam0) };
	Function_208(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_223(&fParam5, bParam8, iParam9);
	Function_186(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_226(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_214(iParam12);
	}
	Function_225(iParam0, 4);
	Function_193();
}

void Function_225(int iParam0, int iParam1) //Position: 0x6664 / 26212
{
	Function_34(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_226(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6678 / 26232
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_220(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_190(iParam0));
	if ((bParam3 && Function_188(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_190(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_219(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_189(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_229(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_228(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_218(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_190(iParam0), &Var7, 0, 2, Function_188(iParam0, 4));
			if (!bParam3)
			{
				Function_227(iParam0, 4);
			}
		}
	}
}

void Function_227(int iParam0, int iParam1) //Position: 0x6735 / 26421
{
	Function_35(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_228(int iParam0) //Position: 0x6749 / 26441
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_229(int iParam0) //Position: 0x6777 / 26487
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_230() //Position: 0x67A7 / 26535
{
	return "MP_Unstoppable_Icon_128";
}

float Function_231(int iParam0) //Position: 0x67C7 / 26567
{
	return Global_50170[iParam022].f_12;
}

void Function_232(int iParam0, int iParam1) //Position: 0x67D6 / 26582
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_233(int iParam0, int iParam1) //Position: 0x67FB / 26619
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_234(int iParam0, int iParam1) //Position: 0x6824 / 26660
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_235(int iParam0) //Position: 0x683E / 26686
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_237(*iParam0) };
	fVar5 = (StackVal - Function_63(iParam0 + 16 + 8));
	Function_236(&fVar5, 600.0f, 30.0f);
	bVar6 = TO_FLOAT(bLocal_43);
	bVar7 = TO_FLOAT(Function_238(34));
	fVar8 = ((bVar6 * (bVar6 + 1.0f)) * 0.5f);
	fVar9 = ((bVar7 * (bVar7 + 1.0f)) * 0.5f);
	fVar10 = (fVar8 + fVar9);
	fVar11 = (fVar10 * Var0.f_12);
	bVar12 = (fVar11 / fVar5);
	iParam0->f_88 = (StackVal + CEIL(bVar12));
	iParam0->f_92 = (Function_239() + iParam0->f_88);
	return;
}

void Function_236(var uParam0, int iParam1, int iParam2) //Position: 0x68CD / 26829
{
	if (*uParam0 > iParam2)
	{
		*uParam0 = iParam2;
	}
	else if (*uParam0 < iParam1)
	{
		*uParam0 = iParam1;
	}
	return;
}

struct<20> Function_237(int iParam0) //Position: 0x68F2 / 26866
{
	struct<5> Var0;
	
	Var0.f_12 = 15.0f;
	Var0.f_16 = 5.0f;
	if (iParam0 == Global_30640[2])
	{
		Var0 = 15;
		Var0.f_4 = 0.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30679[1])
	{
		Var0 = 17;
		Var0.f_4 = 75.0f;
		Var0.f_8 = 300;
	}
	else if (iParam0 == Global_30658[3])
	{
		Var0 = 14;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 300;
	}
	else if (iParam0 == Global_30685[1])
	{
		Var0 = 21;
		Var0.f_4 = 90.0f;
		Var0.f_8 = 150;
	}
	else if (iParam0 == Global_30668[2])
	{
		Var0 = 13;
		Var0.f_4 = 165.0f;
		Var0.f_8 = 700;
	}
	else if (iParam0 == Global_30658[2])
	{
		Var0 = 18;
		Var0.f_4 = 0.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30685[2])
	{
		Var0 = 16;
		Var0.f_4 = 135.0f;
		Var0.f_8 = 200;
	}
	else if (iParam0 == Global_30658[0])
	{
		Var0 = 20;
		Var0.f_4 = 150.0f;
		Var0.f_8 = 400;
	}
	else if (iParam0 == Global_30717[3])
	{
		Var0 = 19;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 500;
	}
	else if (iParam0 == Global_30640[15])
	{
		Var0 = 109;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30640[16])
	{
		Var0 = 110;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30685[4])
	{
		Var0 = 111;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30658[6])
	{
		Var0 = 112;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30668[9])
	{
		Var0 = 115;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30693[11])
	{
		Var0 = 113;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30658[5])
	{
		Var0 = 114;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30717[2])
	{
		Var0 = 120;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else if (iParam0 == Global_30658[7])
	{
		Var0 = 118;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else if (iParam0 == Global_30640[13])
	{
		Var0 = 119;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else if (iParam0 == Global_30707[4])
	{
		Var0 = 117;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else
	{
		Var0 = 4294967295;
		Var0.f_4 = 300.0f;
	}
	return StackVal, StackVal, StackVal, StackVal, Var0;
}

int Function_238(int iParam0) //Position: 0x6BAE / 27566
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_239() //Position: 0x6BC7 / 27591
{
	return Function_148(0);
}

void Function_240(int iParam0) //Position: 0x6BD1 / 27601
{
	if (Function_67(iParam0))
	{
		if (!Function_66(iParam0))
		{
			Function_64();
			iParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_35(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_241() //Position: 0x6C99 / 27801
{
	if (iLocal_17 != 3 && !iLocal_101)
	{
		iLocal_101 = 1;
		if (Function_144() == GET_LOCAL_SLOT())
		{
			Function_242("aa_dlc_weapon_award_objective", 0x40f00000, 1, 2, 0, 0, 0, 0);
			if (!Global_26055[41])
			{
				Function_157("aa_dlc_weapon_award_ticker");
			}
		}
	}
	return;
}

void Function_242(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x6D0F / 27919
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
			Var0 = { StackVal, StackVal, StackVal, Function_243(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_243(int iParam0) //Position: 0x6D94 / 28052
{
	char* cVar0[16];
	
	if (!Function_206())
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

void Function_244(bool bParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7) //Position: 0x6DD3 / 28115
{
	int iVar0;
	bool bVar1;
	
	if (Function_144() == GET_LOCAL_SLOT())
	{
		if (!Global_26055[41])
		{
			iVar0 = 31;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else
	{
		return;
		switch (RAND_INT_RANGE(false, 2))
		{
			case 0x00000000:
				iVar0 = 6;
				break;
			
			case 0x00000001:
				iVar0 = 12;
				break;
			
			case 0x00000002:
				iVar0 = 0;
				break;
			}
	}
	Function_69(&Global_83591, 3, 999999.0f);
	Function_272(iParam1, 3, iVar0, 5, 0);
	if (Function_271(3))
	{
		if (Function_270((*iParam1 + 228)[32]))
		{
			Function_251(StackVal, StackVal, StackVal, StackVal, &bLocal_102, &bVar1, bParam0, vParam2, *(&vParam2 + 12), 1, 0, 1, "f_Award_Pickup1", 0, 0);
			Function_246(StackVal, bVar1, *(iParam1 + 228[32]), 3);
			DECOR_SET_BOOL(bVar1, "DLC_AA_award", true);
		}
	}
	ADD_OBJECT_TO_OBJECTSET(bLocal_102, GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_245())));
	if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_102)))
	{
		ADD_BLIP_FOR_OBJECT(bLocal_102, 335, 0.0f, 2, 0);
	}
}

var Function_245() //Position: 0x6ED1 / 28369
{
	return "PickupsSet";
}

void Function_246(bool bParam0, struct<2> Param1, int iParam3) //Position: 0x6EE4 / 28388
{
	bool bVar0;
	
	if (Function_270(Param1))
	{
		bVar0 = Function_248(StackVal, Param1, iParam3);
		DECOR_SET_INT(bParam0, Function_247(), bVar0);
	}
}

var Function_247() //Position: 0x6F0A / 28426
{
	return "PackedWeapon";
}

var Function_248(struct<5> Param0) //Position: 0x6F1F / 28447
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_249())) || SHIFT_LEFT(bParam2, Function_249() + 8));
}

bool Function_249() //Position: 0x6F3D / 28477
{
	return Function_250(39);
}

int Function_250(bool bParam0) //Position: 0x6F48 / 28488
{
	float fVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	fVar0 = 0;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		fVar0++;
	}
	return fVar0;
}

void Function_251(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, int iParam11, char* cParam12, int iParam13, int iParam14) //Position: 0x6F76 / 28534
{
	Function_262(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_256(*uParam0, *bParam1, iParam9, bParam10, iParam11);
	DECOR_SET_INT(*bParam1, Function_255(), Function_254(bParam10, iParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_253(), Function_252(iParam13, iParam14));
}

var Function_252(var uParam0, bool bParam1) //Position: 0x6FC7 / 28615
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_253() //Position: 0x6FD7 / 28631
{
	return "PackedGrass";
}

var Function_254(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6FEB / 28651
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

var Function_255() //Position: 0x7010 / 28688
{
	return "PackedMetadata";
}

void Function_256(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x7027 / 28711
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 379, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 379, 0f, 2, 0);
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_247(), &uVar5))
				{
					Function_260(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_259();
				vVar0 = { StackVal, StackVal, Function_259() };
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
				Function_258();
				vVar0 = { StackVal, StackVal, Function_258() };
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
				Function_257();
				vVar0 = { StackVal, StackVal, Function_257() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	if (bParam3)
	{
		SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
		UNK_0x1E98AFEC(bVar3, 1);
		UNK_0xFF3DB575(bVar4, 1);
	}
}

vector3 Function_257() //Position: 0x7152 / 29010
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_258() //Position: 0x7163 / 29027
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_259() //Position: 0x7174 / 29044
{
	return 0.0f, 0.158f, -0.163f;
}

void Function_260(var uParam0, int iParam1) //Position: 0x7185 / 29061
{
	*iParam1 = Function_261(uParam0, Function_249(), 0);
	iParam1->f_4 = Function_261(uParam0, Function_249() + 8, Function_249());
	return;
}

var Function_261(var uParam0, int iParam1, bool bParam2) //Position: 0x71A8 / 29096
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_216((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_262(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x71C7 / 29127
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_269();
			Function_258();
			vVar1 = { StackVal, StackVal, Function_258() };
			break;
		
		case 0x00000001:
			bVar0 = Function_268();
			Function_259();
			vVar1 = { StackVal, StackVal, Function_259() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_267();
			Function_257();
			vVar1 = { StackVal, StackVal, Function_257() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_266(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_264(Function_266()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_263(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_263() //Position: 0x72CB / 29387
{
	return "MPItemGiver";
}

struct<32> Function_264(bool bParam0) //Position: 0x72DF / 29407
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_265("0", &cVar8, ""), 4);
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

struct<32> Function_265(char* cParam0, char* cParam1, char* cParam2) //Position: 0x7349 / 29513
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_266() //Position: 0x7368 / 29544
{
	return "PBox_";
}

var Function_267() //Position: 0x7376 / 29558
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_268() //Position: 0x739C / 29596
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_269() //Position: 0x73C4 / 29636
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_270(int iParam0) //Position: 0x73EA / 29674
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_271(int iParam0) //Position: 0x73FC / 29692
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_272(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x740C / 29708
{
	Function_273(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

void Function_273(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7423 / 29731
{
	if (!Function_271(iParam1))
	{
		return;
	}
	Function_274(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_274(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7446 / 29766
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

void Function_275() //Position: 0x7470 / 29808
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(bLocal_172))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_172, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			KILL_ACTOR(bVar0);
		}
		bVar1++;
	}
	return;
}

void Function_276() //Position: 0x74A2 / 29858
{
	if (IS_VOLUME_VALID(bLocal_362))
	{
		DESTROY_VOLUME(bLocal_362);
	}
	if (!IS_VOLUME_VALID(bLocal_353))
	{
		bLocal_353 = CREATE_VOLUME_SET_IN_LAYOUT(bLocal_138, "SpawnVol_0_set");
		bLocal_349[0] = CREATE_VOLUME_IN_LAYOUT(bLocal_138, "spawnVol_0_sub_0", 2, -988.3638f, 104.6403f, 2720.03f, 0.0f, 73.00261f, 0.0f, 13.9013f, 3.87279f, 7.432614f);
		ADD_TO_VOLUME_SET(bLocal_353, bLocal_349[0]);
		bLocal_349[1] = CREATE_VOLUME_IN_LAYOUT(bLocal_138, "spawnVol_0_sub_1", 2, -982.5196f, 104.873f, 2734.08f, 0.0f, -295.5316f, 0.0f, 9.857965f, 3.87279f, 10.28633f);
		ADD_TO_VOLUME_SET(bLocal_353, bLocal_349[1]);
		bLocal_349[2] = CREATE_VOLUME_IN_LAYOUT(bLocal_138, "spawnVol_0_sub_2", 2, -975.8515f, 105.1198f, 2719.687f, 0.0f, 68.97501f, 0.0f, 10.31505f, 3.87279f, 9.029019f);
		ADD_TO_VOLUME_SET(bLocal_353, bLocal_349[2]);
	}
	return;
}

void Function_277() //Position: 0x75CA / 30154
{
	Function_276();
	switch (StackVal)
	{
		case 0x00000000:
			Function_303(&Local_111, 0);
			vLocal_318 = { -964.932f, 103.698f, 2729.428f };
			fLocal_321 = 15.0f;
			fLocal_322 = 50.0f;
			Function_287(4, 1, "dc", 1);
			Function_286(&bLocal_172, iLocal_171);
			Function_371(&iLocal_173, 15.0f);
			Function_278();
			Function_242("WAR_MP_AA_obj05", 0x40f00000, 1, 2, 0, 0, 0, 0);
			if (Function_67(&iLocal_173))
			{
				Function_371(&iLocal_173, 15.0f);
			}
			Local_111.f_8 = 6;
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_172) <= 1)
			{
				if (Function_116(11, 1, 0x3f800000))
				{
					Local_111.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_111.f_8 = 0;
			Local_111.f_4 = 11;
			break;
	}
	return;
}

void Function_278() //Position: 0x76A5 / 30373
{
	if (!SQUAD_IS_VALID(bLocal_172))
	{
		bLocal_172 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_138, "squad_bandits"));
	}
	else
	{
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bLocal_172, true, bLocal_354[1], 4294967295);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_172, 0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_172, 512);
		Function_279(&bLocal_172);
		Function_286(&bLocal_172, iLocal_171);
	}
	return;
}

void Function_279(bool bParam0) //Position: 0x76FA / 30458
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < 15)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
				{
					Function_285(*bParam0, GET_SLOT_ACTOR(bVar0));
					Function_284(*bParam0, GET_SLOT_ACTOR(bVar0), 0);
					Function_283(*bParam0, GET_SLOT_ACTOR(bVar0), 4);
					Function_280(*bParam0, GET_SLOT_ACTOR(bVar0), 0);
				}
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  ALERT_AI_SQUAD was passed an invalid squad");
	}
	return;
}

void Function_280(bool bParam0, bool bParam1, bool bParam2) //Position: 0x779C / 30620
{
	Function_284(bParam0, bParam1, 1);
	Function_282(bParam0, 1);
	Function_283(bParam0, bParam1, 4);
	Function_285(bParam0, bParam1);
	if (bParam2)
	{
		Function_281(bParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_281(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x77DC / 30684
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
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
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
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
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

void Function_282(bool bParam0, int iParam1) //Position: 0x78C6 / 30918
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_283(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7907 / 30983
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_284(bool bParam0, bool bParam1, bool bParam2) //Position: 0x794C / 31052
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, 1);
				}
				else
				{
					GET_POSITION(bParam1, &uVar2);
					MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_285(bool bParam0, bool bParam1) //Position: 0x79B7 / 31159
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_286(bool bParam0, int iParam1) //Position: 0x7A09 / 31241
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, iParam1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_SQUAD_AI_COMBAT_SET_NEW_STATE_MACHINE was passed an invalid squad");
	}
	return;
}

void Function_287(bool bParam0, char* cParam1, char* cParam2, bool bParam3) //Position: 0x7AA5 / 31397
{
	bool bVar0;
	struct<4> Var1;
	
	bVar0 = false;
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 5);
		while (SQUAD_GET_SIZE(bLocal_172) > (bParam0 * Function_302()) && bVar0 > 5)
		{
			strcpy(&Var1, INT_TO_STRING(bVar0), 16);
			stradd(&Var1, cParam2, 16);
			if (!bParam3)
			{
				Function_300(cParam1, &Var1);
			}
			else
			{
				Function_299(iLocal_364[bVar0]);
				Function_290(StackVal, StackVal, cParam1, &Var1, Function_299(iLocal_364[bVar0]));
			}
			bVar0++;
			PRINTSTRING("Size of wave should be approx: ");
			PRINTINT(bParam0);
			PRINTNL();
			PRINTSTRING("Iterator for enemy is: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		NET_OBJECT_REPLICATION_MODE_END(15);
		Function_289(bLocal_172, bLocal_19, 0, 0);
		Function_288(bLocal_172, 23, 1, 1);
	}
}

void Function_288(bool bParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x7B72 / 31602
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (uParam2 || !ACTOR_HAS_WEAPON(bVar1, bParam1))
				{
					GIVE_WEAPON_TO_ACTOR(bVar1, bParam1, 0, 1, 1);
				}
				if (!ACTOR_HAS_WEAPON_IN_HAND(bVar1, bParam1))
				{
					ACTOR_PUT_WEAPON_IN_HAND(bVar1, bParam1, iParam3);
				}
			}
		}
		bVar0++;
	}
}

void Function_289(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x7BE2 / 31714
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTORSET_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (iParam3 != 0 || (iParam3 != 1 && IS_ACTOR_HUMAN(bVar1)))
			{
				if (!IS_ACTOR_IN_ACTORSET(bParam1, bVar1))
				{
					ADD_ACTORSET_MEMBER(bParam1, bVar1);
				}
				if (bParam2)
				{
					SQUAD_LEAVE(bVar1);
				}
				else
				{
					bVar0++;
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
}

void Function_290(char* cParam0, var uParam1, vector3 vParam2) //Position: 0x7C64 / 31844
{
	if (iLocal_331)
	{
		SET_BLIP_NAME(GET_BLIP_ON_ACTOR(Function_291(StackVal, StackVal, cParam0, uParam1, vParam2, 484, "War_Bossman_01", fLocal_321, fLocal_322, Function_298(3), 40)), "mpaa_BossName");
		SET_BLIP_NAME(GET_BLIP_ON_ACTOR(Function_291(StackVal, StackVal, cParam0, uParam1, vParam2, 483, "War_Bossman_02", fLocal_321, fLocal_322, Function_298(4), 40)), "mpaa_BossName");
		iLocal_331 = 0;
	}
	else
	{
		SET_BLIP_NAME(GET_BLIP_ON_ACTOR(Function_291(StackVal, StackVal, cParam0, uParam1, vLocal_318, 482, "War_Bossman_03", fLocal_321, fLocal_322, Function_298(2), 40)), "mpaa_BossName");
		SET_BLIP_NAME(GET_BLIP_ON_ACTOR(Function_291(StackVal, StackVal, cParam0, uParam1, vLocal_318, 485, "War_Bossman_04", fLocal_321, fLocal_322, Function_298(0), 40)), "mpaa_BossName");
		iLocal_331 = 1;
	}
}

var Function_291(bool bParam0, char* cParam1, vector3 vParam2, var uParam5, char* cParam6, float fParam7, float fParam8, var uParam9, int iParam10) //Position: 0x7D83 / 32131
{
	struct<4> Var0;
	bool bVar4;
	
	strcpy(&Var0, cParam6, 16);
	stradd(&Var0, cParam1, 16);
	Function_296(&Var0, Local_111);
	bVar4 = Function_295(StackVal, StackVal, vParam2, &bLocal_138, uParam5, &Var0, fParam7, fParam8);
	Function_293(bVar4, bParam0);
	Function_292(bVar4, uParam9, iParam10);
	return bVar4;
}

void Function_292(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7DC3 / 32195
{
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	if (!ACTOR_HAS_WEAPON(bParam0, bParam1))
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, bParam1, 0, 1, 1);
	}
	if (!ACTOR_HAS_WEAPON(bParam0, bParam2))
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, bParam2, 0, 1, 1);
	}
	ACTOR_PUT_WEAPON_IN_HAND(bParam0, bParam1, 1);
	return;
}

void Function_293(bool bParam0, bool bParam1) //Position: 0x7E01 / 32257
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_294(bParam0, bParam1);
		SET_ACTOR_FACTION(bParam0, 19);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
	}
	return;
}

void Function_294(bool bParam0, bool bParam1) //Position: 0x7E24 / 32292
{
	switch (bParam1)
	{
		case 0x00000000:
			SQUAD_JOIN(bParam0, bLocal_172);
			SET_ACTOR_MAX_HEALTH(bParam0, 70.0f);
			SET_ACTOR_HEALTH(bParam0, 70.0f);
			break;
		
		case 0x00000001:
			SQUAD_JOIN(bParam0, bLocal_172);
			SET_ACTOR_MAX_HEALTH(bParam0, 100.0f);
			SET_ACTOR_HEALTH(bParam0, 100.0f);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
				SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bParam0, 392, 0, 2, 0), "mpaa_BossName");
			}
			break;
		
		default:
			SQUAD_JOIN(bParam0, bLocal_172);
			break;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		SET_BLIP_IMPAIRMENT_MASK(GET_BLIP_ON_ACTOR(bParam0), 512);
	}
	if (!IS_ACTOR_IN_ACTORSET(bLocal_19, bParam0))
	{
		ADD_ACTORSET_MEMBER(bLocal_19, bParam0);
	}
	ADD_ACTOR_STAY_WITHIN_VOLUME(bParam0, bLocal_354[1]);
	return;
}

var Function_295(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x7EE8 / 32488
{
	var uVar0;
	vector3 vVar3;
	var uVar6;
	bool bVar9;
	bool bVar10;
	vector3 vVar11;
	
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(fParam6, bParam7);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(4);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1536, 0.0f, 0);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 20.0f, 0.0f);
	bVar10 = AMBIENT_GET_POINT(&uVar0, 0);
	if (bVar10)
	{
	}
	else
	{
		AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
		bVar10 = AMBIENT_GET_POINT(&uVar0, 0);
	}
	if (bVar10)
	{
		vVar11.x = 0.0f;
		vVar11.f_8 = 0.0f;
		vVar11.f_4 = 0.0f;
		if (FIND_GROUND_INTERSECTION(&uVar0, 5.0f, &vVar3, &uVar6))
		{
			if (!Function_197(StackVal, StackVal, vVar3))
			{
				bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar11);
			}
		}
	}
	return bVar9;
}

void Function_296(char* cParam0, bool bParam1) //Position: 0x7F87 / 32647
{
	strcpy(cParam0, Function_297(), 16);
	stradd(cParam0, INT_TO_STRING(bParam1), 16);
	stradd(cParam0, "_", 16);
	stradd(cParam0, &Global_29155[bParam110] + 20, 16);
	bLocal_100++;
	stradd(cParam0, INT_TO_STRING(bLocal_100), 16);
	return;
}

var Function_297() //Position: 0x7FC1 / 32705
{
	return iLocal_99;
}

var Function_298(int iParam0) //Position: 0x7FC9 / 32713
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_INT_RANGE(false, 2);
			break;
		
		case 0x00000001:
			bVar0 = RAND_INT_RANGE(4, 6);
			break;
		
		case 0x00000004:
			bVar0 = RAND_INT_RANGE(8, 10);
			break;
		
		case 0x00000003:
			bVar0 = RAND_INT_RANGE(12, 13);
			break;
		
		case 0x00000002:
			bVar0 = RAND_INT_RANGE(15, 16);
			break;
	}
	return bVar0;
}

vector3 Function_299(bool bParam0) //Position: 0x802C / 32812
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

void Function_300(char* cParam0, int iParam1) //Position: 0x8053 / 32851
{
	iLocal_139 = Function_302();
	switch (iLocal_139)
	{
		case 0x00000003:
			Function_291(StackVal, StackVal, cParam0, iParam1, vLocal_318, Function_301(), "war_rustler_01", fLocal_321, fLocal_322, Function_298(2), 40);
			Function_291(StackVal, StackVal, cParam0, iParam1, vLocal_318, Function_301(), "war_rustler_02", fLocal_321, fLocal_322, Function_298(4), 40);
		
		case 0x00000002:
			Function_291(StackVal, StackVal, cParam0, iParam1, vLocal_318, Function_301(), "war_rustler_04", fLocal_321, fLocal_322, Function_298(3), 40);
			Function_291(StackVal, StackVal, cParam0, iParam1, vLocal_318, Function_301(), "war_rustler_10", fLocal_321, fLocal_322, Function_298(4), 40);
			Function_291(StackVal, StackVal, cParam0, iParam1, vLocal_318, Function_301(), "war_rustler_11", fLocal_321, fLocal_322, Function_298(2), 40);
			Function_291(StackVal, StackVal, cParam0, iParam1, vLocal_318, Function_301(), "war_rustler_12", fLocal_321, fLocal_322, Function_298(0), 40);
		
		case 0x00000001:
			Function_291(StackVal, StackVal, cParam0, iParam1, vLocal_318, Function_301(), "war_rustler_19", fLocal_321, fLocal_322, Function_298(2), 40);
			Function_291(StackVal, StackVal, cParam0, iParam1, vLocal_318, Function_301(), "war_rustler_20", fLocal_321, fLocal_322, Function_298(4), 40);
			Function_291(StackVal, StackVal, cParam0, iParam1, vLocal_318, Function_301(), "war_rustler_21", fLocal_321, fLocal_322, Function_298(1), 40);
			Function_291(StackVal, StackVal, cParam0, iParam1, vLocal_318, Function_301(), "war_rustler_22", fLocal_321, fLocal_322, Function_298(3), 40);
			break;
	}
	return;
}

var Function_301() //Position: 0x823C / 33340
{
	iLocal_340++;
	if (iLocal_340 >= iLocal_339)
	{
		iLocal_340 = iLocal_338;
	}
	return iLocal_340;
}

int Function_302() //Position: 0x825C / 33372
{
	int iVar0;
	int iVar1;
	
	iVar1 = NET_SCRIPT_GET_NUM_PARTICIPANTS();
	if (iVar1 <= 4)
	{
		iVar0 = 1;
	}
	else if (iVar1 <= 4 && iVar1 > 11)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void Function_303(var uParam0, bool bParam1) //Position: 0x828B / 33419
{
	struct<9> Var0;
	
	vVar0 = GET_LOCAL_SLOT();
	vVar0.f_4 = *uParam0;
	vVar0.f_8 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 78, &vVar0, 4, 1);
	if (bParam1)
	{
		NET_SCRIPTMSG_SEND(2, 78, &vVar0, 4, 1);
	}
	return;
}

void Function_304() //Position: 0x82C2 / 33474
{
	Function_276();
	switch (StackVal)
	{
		case 0x00000000:
			Function_303(&Local_111, 0);
			vLocal_318 = { -981.456f, 102.319f, 2780.33f };
			fLocal_321 = 15.0f;
			fLocal_322 = 50.0f;
			(&Local_111 + 16)->f_60 = 2;
			Function_242("WAR_MP_AA_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
			if (Function_67(&iLocal_173))
			{
				Function_371(&iLocal_173, 15.0f);
			}
			Local_111.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_305();
				if (Function_63(&iLocal_108) < 0.0f)
				{
					Function_279(&bLocal_172);
					Function_372(&iLocal_108, 10.0f);
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_172) > 1 && (&Local_111 + 16)->f_32)
			{
				if (Function_116(4, 1, 0x3f800000))
				{
					Local_111.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_111.f_8 = 0;
			Local_111.f_4 = 4;
			break;
	}
	return;
}

void Function_305() //Position: 0x83AD / 33709
{
	if (!iLocal_104)
	{
		if (Function_302() >= 1)
		{
			iLocal_103 = 2;
		}
		else
		{
			iLocal_103 = 1;
		}
		if (!Function_67(&iLocal_105))
		{
			Function_310(&iLocal_105);
		}
		else if (Function_63(&iLocal_105) < 1.0f)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 5);
			switch ((&Local_111 + 16)->f_60)
			{
				case 0x00000000:
					Function_309();
					(&Local_111 + 16)->f_60++;
					break;
				
				case 0x00000001:
					Function_300(0, "a");
					break;
				
				case 0x00000002:
					Function_300(0, "b");
					(&Local_111 + 16)->f_60++;
					break;
				
				case 0x00000003:
					vLocal_318 = { -909.067f, 102.382f, 2716.047f };
					Function_300(0, "c");
					break;
			}
			iLocal_341++;
			if (iLocal_341 > 5)
			{
				iLocal_341 = 0;
			}
			Function_306(&iLocal_105);
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
		if (SQUAD_GET_SIZE(bLocal_172) > (8 * iLocal_103))
		{
			Function_278();
			(&Local_111 + 16)->f_32 = 1;
			iLocal_104 = 1;
		}
		else if ((&Local_111 + 16)->f_32)
		{
			(&Local_111 + 16)->f_32 = 0;
		}
	}
	return;
}

void Function_306(int iParam0) //Position: 0x84AE / 33966
{
	Function_307(iParam0, 0.0f);
	return;
}

void Function_307(var uParam0, float fParam1) //Position: 0x84BA / 33978
{
	Function_64();
	Function_308(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_308(var uParam0, var uParam1) //Position: 0x84CE / 33998
{
	uParam0->f_4 = uParam1;
	Function_35(uParam0, 1);
	Function_34(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_309() //Position: 0x84EB / 34027
{
	char* cVar0;
	
	Function_296(&cVar0, Local_111);
	Local_342[02] = CREATE_ACTOR_IN_LAYOUT(bLocal_138, &cVar0, 477, -932.0001f, 102.4122f, 2748.361f, 0.0f, 0.0f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(Local_342[02], 16, 0.5f, 1, 1);
	TASK_STAND_STILL(Local_342[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(Local_342[02], 19);
	Function_293(Local_342[02], 0);
	Function_296(&cVar0, Local_111);
	Local_342[12] = CREATE_ACTOR_IN_LAYOUT(bLocal_138, &cVar0, 478, -932.2784f, 105.1769f, 2752.278f, 0.0f, 130.0f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(Local_342[12], Function_298(4), 0.5f, 1, 1);
	TASK_STAND_STILL(Local_342[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(Local_342[12], 19);
	Function_293(Local_342[12], 0);
	Function_296(&cVar0, Local_111);
	Local_342[22] = CREATE_ACTOR_IN_LAYOUT(bLocal_138, &cVar0, 481, -926.3389f, 102.4122f, 2752.0f, 0.0f, 145.0f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(Local_342[22], 4, 0.5f, 1, 1);
	TASK_STAND_STILL(Local_342[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(Local_342[22], 19);
	Function_293(Local_342[22], 0);
	return;
}

void Function_310(int iParam0) //Position: 0x860E / 34318
{
	if (!Function_67(iParam0))
	{
		Function_307(iParam0, 0.0f);
	}
	return;
}

void Function_311() //Position: 0x8623 / 34339
{
	Function_276();
	switch (StackVal)
	{
		case 0x00000000:
			Function_303(&Local_111, 0);
			bLocal_330 = ADD_BLIP_FOR_COORD(&vLocal_327, 330, 0f, 2, 0);
			Function_242("WAR_MP_AA_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Local_111.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_313(StackVal, StackVal, Global_78576, vLocal_327, 5.0f))
			{
				if (Function_116(3, 1, 0x3f800000))
				{
					if (IS_BLIP_VALID(bLocal_330))
					{
						REMOVE_BLIP(bLocal_330);
					}
					Local_111.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Function_312();
			Local_111.f_8 = 0;
			Local_111.f_4 = 3;
			break;
	}
	return;
}

void Function_312() //Position: 0x86CF / 34511
{
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		iLocal_104 = 0;
		(&Local_111 + 16)->f_60 = 0;
	}
	return;
}

bool Function_313(bool bParam0, vector3 vParam1, var uParam4) //Position: 0x86E5 / 34533
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = 0;
	bVar1 = false;
	iVar3 = GET_ACTORSET_SIZE(bParam0);
	bVar2 = false;
	while (bVar2 < (iVar3 - 1))
	{
		bVar4 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar2);
		if (IS_ACTOR_VALID(bVar4))
		{
			if (IS_ACTOR_ALIVE(bVar4))
			{
				if (Function_314(StackVal, StackVal, bVar4, vParam1, uParam4))
				{
					iVar0 = 1;
				}
				bVar1 = true;
			}
		}
		bVar2++;
	}
	if (bVar1)
	{
		return iVar0;
	}
	return 0;
}

bool Function_314(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x874A / 34634
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_315(bParam0);
		if (VDIST(Function_315(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_315(bool bParam0) //Position: 0x87D4 / 34772
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

void Function_316() //Position: 0x883E / 34878
{
	Function_276();
	switch (StackVal)
	{
		case 0x00000000:
			Function_303(&Local_111, 0);
			vLocal_318 = { StackVal, StackVal, vLocal_324 };
			fLocal_321 = 15.0f;
			fLocal_322 = 50.0f;
			Function_371(&iLocal_173, 15.0f);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_02", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_242("WAR_MP_AA_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Local_111.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_305();
				if (Function_63(&iLocal_108) < 0.0f)
				{
					Function_279(&bLocal_172);
					Function_372(&iLocal_108, 10.0f);
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_172) > 1 && (&Local_111 + 16)->f_32)
			{
				if (Function_116(2, 1, 0x3f800000))
				{
					Local_111.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Function_312();
			Local_111.f_8 = 0;
			Local_111.f_4 = 2;
			break;
	}
	return;
}

void Function_317() //Position: 0x893C / 35132
{
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_362(&Local_111))
			{
				Function_360();
				Function_353(&uLocal_176, 0);
				Function_312();
				AMBIENT_SET_ONESHOT_QUERIES(0);
				AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
				Local_111.f_100 = "FTR_SONG_02";
				Local_111.f_8 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_346())
			{
				Local_111.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			bLocal_138 = CREATE_LAYOUT(Function_345(Local_111));
			Function_343();
			Function_276();
			Function_341(&Local_111, bLocal_138);
			Function_278();
			Function_310(&iLocal_108);
			Local_332 = { -920.285f, 102.386f, 2743.589f };
			*(&Local_332 + 12) = { 0.0f, 142.593f, 0.0f };
			Function_333(bLocal_138, &uLocal_176, 1, 1);
			Function_331(bLocal_138, Local_111);
			Function_322(Local_111, bLocal_138);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_02", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			Local_111.f_8 = 106;
			break;
		
		case 0x0000006A:
			Function_318(&Local_111);
			break;
	}
	return;
}

void Function_318(var uParam0) //Position: 0x8A36 / 35382
{
	uParam0->f_8 = 0;
	if (uParam0->f_16 != 0)
	{
		uParam0->f_4 = uParam0->f_16;
		Function_320(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	else
	{
		uParam0->f_4 = 1;
		Function_320(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	switch (uParam0->f_16)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			uParam0->f_4 = 1;
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			Function_319();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_319() //Position: 0x8B18 / 35608
{
	bLocal_92 = true;
	return;
}

void Function_320(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0x8B21 / 35617
{
	if (iParam0 == Global_30668[2])
	{
		Function_321(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_321(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_321(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_321(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_321(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_321(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_321(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_321(7);
	}
}

void Function_321(int iParam0) //Position: 0x8BB6 / 35766
{
	Global_56612[iParam09].f_20 = 1;
	Global_56688[776][iParam09].f_20 = 1;
	Global_56688[776][iParam09].f_24 = 0;
	Global_56688[776][iParam09].f_8 = 0;
	Global_56688[876][iParam09].f_20 = 1;
	Global_56688[876][iParam09].f_24 = 0;
	Global_56688[876][iParam09].f_8 = 0;
	Global_56688[976][iParam09].f_20 = 1;
	Global_56688[976][iParam09].f_24 = 0;
	Global_56688[976][iParam09].f_8 = 0;
	Global_56612[iParam09].f_12 = 0;
	return;
}

void Function_322(int iParam0, bool bParam1) //Position: 0x8C4B / 35915
{
	Function_108(&(Global_29008[iParam0]), 16);
	Function_108(&(Global_29008[iParam0]), 64);
	Function_108(&(Global_29008[iParam0]), 4);
	Function_71(64);
	Function_327(2, 4294967295, 4294967295, 0, 3);
	Function_323(StackVal, 0, 0.0f, 3, bParam1, 1);
	return;
}

void Function_323(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x8C93 / 35987
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
		Function_326();
	}
	if (bParam5)
	{
		Function_324(1048576);
	}
}

void Function_324(int iParam0) //Position: 0x8DA6 / 36262
{
	Function_325(&Global_28842, iParam0);
	return;
}

void Function_325(var uParam0, var uParam1) //Position: 0x8DB4 / 36276
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_326() //Position: 0x8DCF / 36303
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_324(16384);
	}
	return;
}

void Function_327(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x8DEB / 36331
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
	Global_26361.f_8 = uParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = uParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_328();
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

void Function_328() //Position: 0x8ECF / 36559
{
	int iVar0;
	
	Global_26960 = Function_329(StackVal);
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

int Function_329(int iParam0) //Position: 0x8F1D / 36637
{
	if (!Function_330(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_330(int iParam0) //Position: 0x8F35 / 36661
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_331(bool bParam0, bool bParam1) //Position: 0x8F4A / 36682
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
		Function_332(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_30())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_332(var uParam0, int iParam1) //Position: 0x9044 / 36932
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_333(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x9051 / 36945
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_340()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_245()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_245(), bParam0, 17, 0);
	}
	iVar2 = 0;
	iVar4 = 0;
	bVar5 = false;
	bVar6 = false;
	iVar13 = Function_18(32, GET_OBJECTSET_SIZE(bVar0));
	bVar6 = false;
	while (bVar6 <= iVar13)
	{
		bVar14 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, bVar0);
		bVar49 = false;
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_339(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_299(bVar14);
				vVar7 = { StackVal, StackVal, Function_299(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2.5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2.5f, "");
				Function_338(bVar14);
				vVar10 = { StackVal, StackVal, Function_338(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_336(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_335());
							if (Function_271(bVar5))
							{
								if (Function_270((*iParam1 + 228)[bVar52]))
								{
									Function_251(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_246(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_251(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_334(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_251(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
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

var Function_334() //Position: 0x9285 / 37509
{
	return "XPBonus";
}

var Function_335() //Position: 0x9295 / 37525
{
	return "ID";
}

bool Function_336(bool bParam0, int iParam1) //Position: 0x92A0 / 37536
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_80((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_337())
			{
				return 0;
			}
			return !Function_80((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_80((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_337() //Position: 0x92F5 / 37621
{
	return Function_40(Global_79962, 1024);
}

vector3 Function_338(bool bParam0) //Position: 0x9305 / 37637
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

var Function_339() //Position: 0x932C / 37676
{
	return "Type";
}

var Function_340() //Position: 0x9339 / 37689
{
	return "PickupFlagsSet";
}

void Function_341(var uParam0, bool bParam1) //Position: 0x9350 / 37712
{
	Function_342(bParam1);
	PLAYSTAT_MP_DEED_START(GET_SHORT_SCRIPT_NAME());
	UNK_0x5C4CAE3A(bParam1);
	bLocal_19 = CREATE_ACTORSET_IN_LAYOUT(bParam1, "currentPopulation", 1);
	bLocal_42 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bLocal_42, 15);
	ITERATE_IN_LAYOUT(bLocal_42, bParam1);
	START_OBJECT_ITERATOR(bLocal_42);
	Global_78480.f_24 = *uParam0;
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_303(uParam0, 1);
	}
	Function_42(256);
	Function_115(64);
	Function_74(0);
	return;
}

void Function_342(var uParam0) //Position: 0x93C1 / 37825
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_343() //Position: 0x93CF / 37839
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_VOLUME_VALID(bLocal_357))
	{
		bLocal_357 = CREATE_VOLUME_SET_IN_LAYOUT(bLocal_138, "EnemyVols_set");
		bLocal_354[0] = CREATE_VOLUME_IN_LAYOUT(bLocal_138, "eRanchVol_1", 2, -930.06f, 106.9276f, 2750.06f, 0.0f, -50.99739f, 0.0f, 13.62795f, 9.5037f, 13.12346f);
		ADD_TO_VOLUME_SET(bLocal_357, bLocal_354[0]);
		bLocal_354[1] = CREATE_VOLUME_IN_LAYOUT(bLocal_138, "eRanchVol_2", 3, -929.6985f, 104.6569f, 2745.168f, 0.0f, 20.0f, 0.0f, 32.19003f, 25.36355f, 32.71733f);
		ADD_TO_VOLUME_SET(bLocal_357, bLocal_354[1]);
		bLocal_363 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", bLocal_138, 8, 0);
		bVar0 = CREATE_POINT_IN_LAYOUT(bLocal_138, "f_Ammo_Pickup", -980.9728f, 103.6366f, 2728.973f, 0.0f, -32.23648f, 0.0f);
		Function_344(bVar0, 2, 4294967286);
		ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_363);
		bVar1 = CREATE_POINT_IN_LAYOUT(bLocal_138, "f_Ammo_Pickup1", -932.0001f, 102.3999f, 2761.03f, 0.0f, -298.0273f, 0.0f);
		Function_344(bVar1, 2, 4294967286);
		ADD_OBJECT_TO_OBJECTSET(bVar1, bLocal_363);
		bVar2 = CREATE_POINT_IN_LAYOUT(bLocal_138, "f_Ammo_Pickup2", -933.305f, 105.451f, 2750.39f, 0.0f, -330.0273f, 0.0f);
		Function_344(bVar2, 2, 4294967286);
		ADD_OBJECT_TO_OBJECTSET(bVar2, bLocal_363);
		bVar3 = CREATE_POINT_IN_LAYOUT(bLocal_138, "f_Ammo_Pickup3", -929.2242f, 102.5806f, 2731.309f, 0.0f, -466.0273f, 0.0f);
		Function_344(bVar3, 2, 4294967286);
		ADD_OBJECT_TO_OBJECTSET(bVar3, bLocal_363);
		iLocal_364[0] = CREATE_POINT_IN_LAYOUT(bLocal_138, "nspawnPt01", -918.2858f, 101.3961f, 2777.832f, 0.0f, -325.2687f, 0.0f);
		iLocal_364[1] = CREATE_POINT_IN_LAYOUT(bLocal_138, "nspawnPt02", -895.3632f, 101.3961f, 2719.363f, 0.0f, -325.2687f, 0.0f);
		iLocal_364[2] = CREATE_POINT_IN_LAYOUT(bLocal_138, "nspawnPt03", -896.0001f, 101.3961f, 2684f, 0.0f, -325.2687f, 0.0f);
		iLocal_364[3] = CREATE_POINT_IN_LAYOUT(bLocal_138, "nspawnPt04", -963.3622f, 103.4039f, 2771.362f, 0.0f, -325.2687f, 0.0f);
		iLocal_364[4] = CREATE_POINT_IN_LAYOUT(bLocal_138, "nspawnPt05", -941.6054f, 106.4156f, 2696f, 0.0f, -325.2687f, 0.0f);
	}
	return;
}

void Function_344(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9689 / 38537
{
	DECOR_SET_INT(iParam0, Function_339(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_335(), bParam2);
	}
	return;
}

var Function_345(int iParam0) //Position: 0x96AD / 38573
{
	if (iParam0 == Global_30640[6])
	{
		return "DLC_HangingRockMP_layout";
	}
	if (iParam0 == Global_30640[16])
	{
		return "DLC_VentersPlace";
	}
	if (iParam0 == Global_30668[9])
	{
		return "DLC_WarthingtonRanch_MP_AA_layout";
	}
	if (iParam0 == Global_30658[6])
	{
		return "DLC_ScratchingPost";
	}
	if (iParam0 == Global_30693[11])
	{
		return "DLC_RanchoPolvo_MP_AA_layout";
	}
	if (iParam0 == Global_30658[5])
	{
		return "DLC_CuevaSeca_MP_AA_layout";
	}
	if (iParam0 == Global_30685[4])
	{
		return "DLC_crookedToes";
	}
	if (iParam0 == Global_30640[15])
	{
		return "DLC_critchleysRanch";
	}
	return "";
}

bool Function_346() //Position: 0x97E5 / 38885
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_347(&uLocal_140))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_347(int iParam0) //Position: 0x97FE / 38910
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_352();
	iVar1 = 0;
	if (!Function_86(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_351(iParam0[iVar03], 8);
		}
		else if (Function_350())
		{
			iVar1 = 1;
			Function_351(iParam0[iVar03], 8);
		}
		Function_351(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_86(iParam0[iVar03], 4))
		{
			if (!Function_86(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_86(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_86(iParam0[03], 8) || iVar1));
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
				Function_351(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_86(iParam0[iVar03], 4))
		{
			if (!Function_86(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_351(iParam0[iVar03], 2);
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
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_351(iParam0[iVar03], 2);
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
	Function_348();
	return 1;
}

void Function_348() //Position: 0x9B79 / 39801
{
	if (!Function_349(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_349(int iParam0) //Position: 0x9BB9 / 39865
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_350() //Position: 0x9BD5 / 39893
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

void Function_351(var uParam0, int iParam1) //Position: 0x9C00 / 39936
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_352() //Position: 0x9C11 / 39953
{
	if (!Function_349(128))
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

void Function_353(int iParam0, bool bParam1) //Position: 0x9C53 / 40019
{
	Function_357(iParam0);
	Function_357(iParam0 + 228);
	if (bParam1)
	{
		Function_354(iParam0);
	}
	return;
}

void Function_354(int iParam0) //Position: 0x9C6F / 40047
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_355(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_355(var uParam0, int iParam1) //Position: 0x9C8F / 40079
{
	Function_356(uParam0, iParam1, 0);
	return;
}

void Function_356(int iParam0, int iParam1, int iParam2) //Position: 0x9C9D / 40093
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_357(int iParam0) //Position: 0x9CAE / 40110
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_359(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_358(iParam0, 0.0f);
	return;
}

void Function_358(var uParam0, int iParam1) //Position: 0x9CDB / 40155
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_359(var uParam0) //Position: 0x9CE7 / 40167
{
	Function_274(uParam0, 4294967295, 0, 1);
	return;
}

void Function_360() //Position: 0x9CF5 / 40181
{
	Function_361(&uLocal_140, 483, 2, 0);
	Function_361(&uLocal_140, 484, 2, 0);
	Function_361(&uLocal_140, 485, 2, 0);
	Function_361(&uLocal_140, 480, 2, 0);
	Function_361(&uLocal_140, 481, 2, 0);
	Function_361(&uLocal_140, 482, 2, 0);
	Function_361(&uLocal_140, 477, 2, 0);
	Function_361(&uLocal_140, 478, 2, 0);
	Function_361(&uLocal_140, 479, 2, 0);
	return;
}

var Function_361(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x9D5E / 40286
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_86(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_351(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_351(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_362(int iParam0) //Position: 0x9E2E / 40494
{
	switch (iLocal_98)
	{
		case 0x00000000:
			Function_369(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_51, 33);
			bLocal_40 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_41 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_40);
			EVENT_TRAP_STORE_EVENTS(bLocal_41, 1);
			Function_368();
			Function_371(&iLocal_45, 5.0f);
			iLocal_98 = 1;
			break;
		
		case 0x00000001:
			if (Function_367())
			{
				iLocal_98 = 2;
			}
			else if (Function_363(&iLocal_45))
			{
				Function_368();
				Function_372(&iLocal_45, 5.0f);
			}
			break;
		
		case 0x00000002:
			if (iParam0->f_16 != 4294967295)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_363(int iParam0) //Position: 0x9EDA / 40666
{
	if (Function_365(iParam0))
	{
		Function_364(iParam0);
		return 1;
	}
	return 0;
}

void Function_364(int iParam0) //Position: 0x9EF0 / 40688
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_365(int iParam0) //Position: 0x9F04 / 40708
{
	if (Function_67(iParam0))
	{
		if (Function_366(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_366(int iParam0) //Position: 0x9F1F / 40735
{
	return -Function_63(iParam0);
}

bool Function_367() //Position: 0x9F2B / 40747
{
	return iLocal_20;
}

void Function_368() //Position: 0x9F33 / 40755
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_369(bool bParam0) //Position: 0x9F5F / 40799
{
	struct<17> Var0;
	
	Function_61(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar5));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	Var0.f_8 = 4294967286;
	if (bParam0)
	{
		Function_35(&Var0, 4);
	}
	Function_54(&Var0);
	Function_55();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 40881);
	return;
}

void Function_370(bool bParam0) //Position: 0x9FB1 / 40881
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	Function_61(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, true, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, false);
		return;
	}
	Function_62(&iVar7);
	if (Function_128(&Var2))
	{
	}
	bVar8 = Function_119(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_127(&Var2, 1);
	Function_54(&Var2);
	return;
}

void Function_371(int iParam0, float fParam1) //Position: 0xA0B4 / 41140
{
	if (!Function_67(iParam0))
	{
		Function_372(iParam0, fParam1);
	}
	return;
}

void Function_372(int iParam0, float fParam1) //Position: 0xA0CA / 41162
{
	Function_307(iParam0, -fParam1);
	return;
}

void Function_373(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0xA0D8 / 41176
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_376(uParam4);
		if (0 == iVar0)
		{
			Function_374(uParam0, uParam2, 0, 4294967295, 4294967295);
		}
		else if (1 == iVar0)
		{
			Function_374(uParam0, iParam3, 0, 4294967295, 4294967295);
		}
	}
	else
	{
		Function_374(uParam0, iParam1, 0, 4294967295, 4294967295);
	}
}

void Function_374(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xA11E / 41246
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_375(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_375(int iParam0) //Position: 0xA142 / 41282
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

int Function_376(float fParam0) //Position: 0xA695 / 42645
{
	if (IS_PLAYER_IN_COMBAT(0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Function_41())) > fParam0)
		{
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Function_41())) > fParam0)
		{
			return 0;
		}
		return 1;
	}
	return 2;
}

bool Function_377(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0xA6C9 / 42697
{
	if (!Function_419())
	{
		return 0;
	}
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (Function_238(38) <= 10 && NET_GET_PLAYMODE() != 0)
		{
			AWARD_ACHIEVEMENT(41);
		}
	}
	if (!uParam0->f_104 && GET_PLAYER_COMBATMODE() != 2)
	{
		uParam0->f_104 = 1;
	}
	if (bParam3)
	{
		Function_414();
	}
	Function_412(3);
	Function_411();
	if (StackVal != 0)
	{
		Function_409(bLocal_41, *uParam1, uParam2, 1);
		Function_408(uParam0, uParam4);
	}
	if (StackVal >= bLocal_43)
	{
		bLocal_43 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_405(uParam0);
	}
	switch (iLocal_17)
	{
		case 0x00000000:
		case 0x00000003:
			Function_390(46595, 45943);
			break;
		
		case 0x00000002:
			Function_390(43320, 42896);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_378(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xA790 / 42896
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_382(bParam1, uParam2, uParam3);
		bVar0 = Function_381(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_379(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_381(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_381(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_381(28, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_145(bParam0));
			bVar1++;
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		}
	}
	return 0;
}

bool Function_379(bool bParam0, bool bParam1, int iParam2) //Position: 0xA833 / 43059
{
	var uVar0;
	
	return Function_380(bParam0, bParam1, &uVar0, iParam2);
}

int Function_380(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA844 / 43076
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

int Function_381(int iParam0, bool bParam1) //Position: 0xA8A9 / 43177
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_238(iParam0);
	}
	if (!Function_147(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_382(bool bParam0, int iParam1, bool bParam2) //Position: 0xA917 / 43287
{
	if (bParam0)
	{
		if (Function_137())
		{
			NET_PLAYER_LIST_ADD_ITEM(bParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_383() //Position: 0xA938 / 43320
{
	if (!Function_384(1))
	{
		return 0;
	}
	if (Function_39(4096) || Function_39(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_33(8192, 1, 1);
	}
	else
	{
		Function_33(8192, 0, 1);
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(1);
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_assists");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_defends");
	NET_PLAYER_LIST_SET_HEADER(6, "mp_plist_score");
	return 1;
}

bool Function_384(bool bParam0) //Position: 0xA9F4 / 43508
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_137() || Function_389(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_387(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_137())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_385(Function_137());
	return 1;
}

void Function_385(bool bParam0) //Position: 0xAA75 / 43637
{
	if (bParam0 || Function_39(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_39(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_39(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_39(1048576) || Function_39(4)) || Function_386(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_33(0x20000000, 0, 1);
	}
	return;
}

var Function_386(int iParam0, bool bParam1) //Position: 0xAAFE / 43774
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_387(var uParam0) //Position: 0xAB1E / 43806
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_388(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_388(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xAB32 / 43826
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

int Function_389(bool bParam0, bool bParam1) //Position: 0xAB77 / 43895
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

void Function_390(int iParam0, int iParam1) //Position: 0xABAB / 43947
{
	Function_391(iParam0, iParam1, 45936);
	return;
}

void Function_391(var uParam0, var uParam1, int iParam2) //Position: 0xABBC / 43964
{
	if (Function_39(0x4000000))
	{
		Function_37();
		Function_33(0x4000000, 0, 1);
	}
	if (Function_39(0x10000000))
	{
		Function_37();
		Function_33(0x10000000, 0, 1);
	}
	if (Function_39(2) != Function_39(0x2000000))
	{
		Function_37();
		Function_33(0x2000000, Function_39(2), 1);
	}
	if (Function_137())
	{
		Function_153(!Function_39(16));
	}
	if (Function_39(16))
	{
		Function_393(&uParam0, &uParam1, &iParam2);
		if (Function_39(8192))
		{
			if (!Function_39(4194304))
			{
				Function_33(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_39(8388608))
			{
				Function_33(8388608, 1, 1);
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
			Function_392();
		}
		Function_33(16384, 1, 1);
	}
	else if (!Function_39(32))
	{
		Function_392();
	}
	Function_33(32768, 0, 1);
	return;
}

void Function_392() //Position: 0xAD55 / 44373
{
	if (Function_39(4194304))
	{
		Function_33(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_39(8388608))
	{
		Function_33(8388608, 0, 1);
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

void Function_393(var uParam0, var uParam1, int iParam2) //Position: 0xAE5E / 44638
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_33(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_39(0x40000000);
	bVar3 = !Function_39(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_147(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_394(bVar1, 2048, 1))
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
				if (Function_379(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_39(4))
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
			if (Function_379(bVar1, (4294966296 - bVar1), 1))
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

bool Function_394(bool bParam0, int iParam1, bool bParam2) //Position: 0xAFD6 / 45014
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_386(iParam1, bParam2);
	}
	if (!Function_147(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_395(iParam1), 64);
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

var Function_395(int iParam0) //Position: 0xB057 / 45143
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

int Function_396() //Position: 0xB370 / 45936
{
	return 1;
}

int Function_397(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB377 / 45943
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* cVar7[32];
	bool bVar15;
	struct<8> Var16;
	bool bVar24;
	
	Function_382(bParam1, iParam2, bParam3);
	iVar0 = Function_401(bParam0);
	iVar2 = NET_GET_GAMER_POSSE_SIZE(bParam0);
	bVar3 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar4 = (iVar2 < 1 && bVar3 != bParam0);
	if (bLocal_16)
	{
		bVar1 = (iVar2 * 10000000);
		iVar5 = 16;
		if (iVar2 >= 1)
		{
			iVar5 = (16 - bVar3) * 10;
			if (bVar4)
			{
				iVar5++;
			}
		}
		bVar1 = (bVar1 + iVar5 * 10000);
		bVar1 = (bVar1 + Function_18((CEIL(Function_400(1, bParam0)) / 1000), 9999));
	}
	else
	{
		bVar1 = FLOOR(Function_400(8, bParam0));
	}
	if (!bParam1)
	{
		Function_379(bParam0, bVar1, 0);
	}
	iVar6 = 0;
	if (Function_399(1) > 0)
	{
		strcpy(&cVar7, "", 32);
		if (Function_399(1) == Function_401(bParam0))
		{
			if (Function_394(bParam0, 0x8000000, 1))
			{
				strcpy(&cVar7, "<MP_DEFEND> ", 32);
			}
			else
			{
				strcpy(&cVar7, "<SPACE> ", 32);
			}
			if (Function_400(2, bParam0) > 0.0f)
			{
				stradd(&cVar7, "--:--", 32);
			}
			else
			{
				bVar15 = CEIL(Function_400(2, bParam0));
				stradd(&cVar7, I2STR((bVar15 / 60)), 32);
				stradd(&cVar7, ":", 32);
				straddi(&cVar7, ((bVar15 % 60) / 10), 32);
				straddi(&cVar7, ((bVar15 % 60) % 10), 32);
			}
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_398(&iVar6), &cVar7);
	}
	Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(iVar0) };
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_398(&iVar6), UI_GET_STRING(&Var16));
	bVar24 = Function_400(8, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_398(&iVar6), FLOOR(bVar24));
	if (bLocal_16)
	{
		if (bVar4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_398(&iVar6), FLOOR(Function_400(9, bParam0)));
		}
		else
		{
			Function_398(&iVar6);
		}
	}
	if (Function_394(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_398(&iVar6), "<SKULL>");
	}
	return 0;
}

var Function_398(int iParam0) //Position: 0xB538 / 46392
{
	*iParam0++;
	return (*iParam0 - 1);
}

int Function_399(int iParam0) //Position: 0xB54B / 46411
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

float Function_400(int iParam0, bool bParam1) //Position: 0xB56B / 46443
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_27(iParam0);
	}
	if (!Function_147(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

int Function_401(bool bParam0) //Position: 0xB5D4 / 46548
{
	if (!Function_147(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_402();
	}
	return Global_76943[bParam096];
}

var Function_402() //Position: 0xB5F9 / 46585
{
	return Global_78480;
}

int Function_403() //Position: 0xB603 / 46595
{
	bool bVar0;
	int iVar1;
	
	if (!Function_384(1))
	{
		return 0;
	}
	bVar0 = false;
	bLocal_16 = false;
	while (bVar0 > 16 && !bLocal_16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			bLocal_16 = NET_GET_GAMER_POSSE_SIZE(bVar0) < 1;
		}
		bVar0++;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(0);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	iVar1 = 2;
	if (Function_399(1) > 0)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_398(&iVar1), "FRD_StakeHolder");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_398(&iVar1), "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(Function_398(&iVar1), "mp_plist_score_alt");
	if (bLocal_16)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_398(&iVar1), "mp_plist_posse");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_398(&iVar1), "mp_plist_mw");
	Function_404();
	bVar0 = iVar1;
	while (bVar0 < 6)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_398(&iVar1), "Common_Null");
		bVar0++;
	}
	return 1;
}

void Function_404() //Position: 0xB726 / 46886
{
	if (Function_39(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_33(8192, 1, 1);
	}
	else if (Function_39(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_33(8192, 1, 1);
	}
	else
	{
		Function_33(8192, 0, 1);
	}
	return;
}

void Function_405(int iParam0) //Position: 0xB763 / 46947
{
	int iVar0;
	int iVar1;
	
	if (!NET_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = NET_SCRIPT_GET_NUM_PARTICIPANTS();
	iParam0->f_16 = StackVal;
	(iParam0 + 16)->f_4 = StackVal;
	(iParam0 + 16)->f_24 = iLocal_21;
	if (iVar0 >= (iParam0 + 16)->f_20)
	{
		(iParam0 + 16)->f_20 = iVar0;
	}
	if (iLocal_18)
	{
		Function_407(&bLocal_19);
		iLocal_18 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_23)
	{
		if (iLocal_23[iVar1] >= 4294967295)
		{
			iLocal_23[iVar1] = 4294967295;
			Function_406(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_406(int iParam0) //Position: 0xB7DC / 47068
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_407(int iParam0) //Position: 0xB807 / 47111
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_408(var uParam0, bool bParam1) //Position: 0xB84E / 47182
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	
	if (!IS_ITERATOR_VALID(bLocal_42))
	{
		return;
	}
	bVar0 = OBJECT_ITERATOR_CURRENT(bLocal_42);
	if (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_IN_ACTORSET(bLocal_19, bVar1))
			{
				bVar2 = StackVal;
				if (IS_VOLUME_VALID(bVar2))
				{
					if (!IS_ACTOR_IN_VOLUME(bVar1, bVar2))
					{
						if (!DECOR_CHECK_EXIST(bVar1, "out_of_bounds_time"))
						{
							Function_114(bVar1);
							vVar3 = { StackVal, StackVal, Function_114(bVar1) };
							DECOR_SET_FLOAT(bVar1, "out_of_bounds_time", GET_CURRENT_GAME_TIME());
						}
						else if (GET_CURRENT_GAME_TIME() < (DECOR_GET_FLOAT(bVar1, "out_of_bounds_time") + fLocal_44))
						{
							bVar6 = GET_BLIP_ON_ACTOR(bVar1);
							if (IS_BLIP_VALID(bVar6))
							{
								REMOVE_BLIP(bVar6);
							}
							if (bParam1)
							{
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
							}
							REMOVE_ACTORSET_MEMBER(bLocal_19, bVar1);
							SQUAD_LEAVE(bVar1);
							TASK_FLEE_ACTORSET(bVar1, Global_78576, -1.0f, -1.0f, 0, 0, 0);
							RELEASE_ACTOR(bVar1);
						}
					}
					else if (DECOR_CHECK_EXIST(bVar1, "out_of_bounds_time"))
					{
						DECOR_REMOVE(bVar1, "out_of_bounds_time");
					}
				}
			}
		}
		OBJECT_ITERATOR_NEXT(bLocal_42);
	}
	else
	{
		START_OBJECT_ITERATOR(bLocal_42);
	}
	return;
}

int Function_409(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xB999 / 47513
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (!IS_LAYOUTREF_VALID(bParam1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
			EVENT_TRAP_CLEAR_EVENTS(bParam0);
			return 0;
		}
	}
	iVar0 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bParam1);
		if (!IS_ITERATOR_VALID(bVar1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
			EVENT_TRAP_CLEAR_EVENTS(bParam0);
			return 0;
		}
		ITERATE_IN_EVENT_TRAP(bVar1, bParam0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		while (IS_OBJECT_VALID(bVar2))
		{
			bVar5 = GET_EVENT_FROM_OBJECT(bVar2);
			bVar3 = GET_EVENT_TARGET_AS_OBJECT(bVar5);
			bVar4 = GET_EVENT_PERPETRATOR(bVar5);
			bVar6 = GET_ACTOR_FROM_OBJECT(bVar3);
			if (IS_OBJECT_VALID(bVar4))
			{
				if (IS_ACTOR_VALID(bVar6))
				{
					if (bParam3)
					{
						if (Function_410(bVar4) == bParam1)
						{
							Stack.Push(bVar6);
							Call_Loc(uParam2);
						}
					}
					else
					{
						Stack.Push(bVar6);
						Call_Loc(uParam2);
					}
				}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
		DESTROY_ITERATOR(bVar1);
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_410(bool bParam0) //Position: 0xBA7B / 47739
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

void Function_411() //Position: 0xBAD5 / 47829
{
	Function_412(4);
	return;
}

void Function_412(int iParam0) //Position: 0xBADF / 47839
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
			Function_413(iParam0);
		}
	}
	return;
}

void Function_413(bool bParam0) //Position: 0xBB11 / 47889
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_414() //Position: 0xBB20 / 47904
{
	bool bVar0;
	
	if (!iLocal_22)
	{
		bVar0 = Function_41();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_19))
			{
				if (Function_416(bVar0, bLocal_19, 1, 0, 0, -1.0f))
				{
					Function_415();
					iLocal_22 = 1;
				}
			}
		}
	}
	return;
}

void Function_415() //Position: 0xBB55 / 47957
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_416(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xBB6E / 47982
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_418(bParam1, 0, 0, 0, 0, 0) < 0)
	{
		return 0;
	}
	if (bLocal_48 > GET_ACTORSET_SIZE(bParam1))
	{
		bLocal_48 = false;
	}
	bVar0 = GET_ACTOR_FROM_ACTORSET(bParam1, bLocal_48);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_417(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
		{
			return 1;
		}
	}
	bLocal_48++;
	return 0;
}

bool Function_417(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xBBD7 / 48087
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (bParam0 == bParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(bParam1) == bParam0)
		{
			CLEAR_LAST_HIT(bParam1);
			return 1;
		}
	}
	if (bParam3)
	{
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
		{
			return 1;
		}
	}
	if (bParam4)
	{
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_418(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xBCC4 / 48324
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar2);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					bVar3 = true;
					if (bParam1)
					{
						if (IS_ACTOR_CRIPPLED(bVar1, 3) || IS_ACTOR_CRIPPLED(bVar1, 4))
						{
							bVar3 = false;
						}
					}
					if (bParam2)
					{
						if (IS_ACTOR_HOGTIED(bVar1))
						{
							bVar3 = false;
						}
					}
					if (bParam3)
					{
						if (IS_ACTOR_BEING_DRAGGED(bVar1, 1.0f))
						{
							bVar3 = false;
						}
					}
					if (bParam4)
					{
						bParam4 = bParam4;
					}
					if (bParam5)
					{
						if (!IS_ACTOR_RIDING(bVar1) && !IS_ACTOR_RIDING_VEHICLE(bVar1))
						{
							bVar3 = false;
						}
					}
					if (bVar3)
					{
						iVar0++;
					}
				}
			}
			bVar2++;
		}
	}
	return iVar0;
}

bool Function_419() //Position: 0xBD72 / 48498
{
	int iVar0;
	
	if (!Function_28())
	{
		return 0;
	}
	iVar0 = NET_GET_SCRIPT_STATUS();
	if (iVar0 != 0 || iVar0 != 3)
	{
		return 0;
	}
	return 1;
}

void Function_420(bool bParam0) //Position: 0xBD95 / 48533
{
	if (Function_421(bParam0))
	{
		Function_294(bParam0, NET_ACTOR_GET_SCRIPT_INT(bParam0));
	}
	return;
}

bool Function_421(bool bParam0) //Position: 0xBDAD / 48557
{
	bool bVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return 0;
	}
	if (Function_422(bParam0))
	{
		if (!IS_ACTOR_IN_ACTORSET(bLocal_19, bParam0))
		{
			ADD_ACTORSET_MEMBER(bLocal_19, bParam0);
		}
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
		{
			bVar0 = ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
			SET_BLIP_MAX_DISTANCE(bVar0, 3.0f);
		}
		return 1;
	}
	return 0;
}

bool Function_422(bool bParam0) //Position: 0xBDFA / 48634
{
	if (IS_ACTOR_HORSE(bParam0) || IS_ACTOR_VEHICLE(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(bParam0) && NET_ACTOR_GET_SCRIPT_INT(bParam0) > 100)
	{
		return 1;
	}
	return 0;
}

bool Function_423(var uParam0, int iParam1) //Position: 0xBE27 / 48679
{
	if (!Function_28())
	{
		return 0;
	}
	*uParam0 = iParam1;
	if (!Function_424(uParam0))
	{
		return 0;
	}
	return 1;
}

bool Function_424(int iParam0) //Position: 0xBE47 / 48711
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*iParam0 != 4294967294)
	{
		bVar0 = StackVal;
		if (IS_VOLUME_VALID(bVar0))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
		}
	}
	Function_55();
	if (!Function_440(16, 0))
	{
		return 0;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	iParam0->f_4 = 0;
	iParam0->f_8 = 0;
	iParam0->f_104 = 0;
	iParam0->f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	iParam0->f_16 = 4294967295;
	(iParam0 + 16)->f_4 = 0;
	(iParam0 + 16)->f_24 = 0;
	(iParam0 + 16)->f_28 = 2;
	(iParam0 + 16)->f_32 = 0;
	(iParam0 + 16)->f_36 = 0;
	(iParam0 + 16)->f_48 = 0;
	(iParam0 + 16)->f_68 = 0.0f;
	Function_310(iParam0 + 16 + 8);
	Function_438(iParam0, 49792);
	iVar1 = 0;
	while (iVar1 <= Local_51)
	{
		Local_51[iVar12] = 4294967295;
		Local_51[iVar12].f_4 = 2;
		iVar1++;
	}
	Local_49 = 4294967295;
	Local_49.f_4 = 2;
	iVar2 = 0;
	while (iVar2 <= iLocal_23)
	{
		iLocal_23[iVar2] = 4294967295;
		iVar2++;
	}
	Function_430(2);
	Function_429(1);
	iVar3 = 49147;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 49028);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 48989);
	return 1;
}

void Function_425(bool bParam0) //Position: 0xBF5D / 48989
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	if (NET_IS_HOST_OF_THIS_SCRIPT() && !iLocal_21)
	{
		if (iVar0 == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
		{
			iLocal_21 = 1;
		}
	}
	return;
}

void Function_426(bool bParam0) //Position: 0xBF84 / 49028
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 4);
	if (Var0.f_12 == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
	{
		if (Var0 == 1)
		{
			if (StackVal == GET_LOCAL_SLOT())
			{
				if (StackVal == NET_GET_HOST_OF_THIS_SCRIPT())
				{
					iLocal_20 = 1;
				}
			}
		}
		else if (Var0 == 0)
		{
			if (StackVal == GET_LOCAL_SLOT())
			{
				if (NET_IS_HOST_OF_THIS_SCRIPT())
				{
					if (IS_SLOT_VALID(StackVal))
					{
						iLocal_23[StackVal] = StackVal;
					}
				}
			}
		}
	}
	return;
}

void Function_427(bool bParam0) //Position: 0xC000 / 49152
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 4);
	bVar4 = Var0;
	if (StackVal || (StackVal != STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()) && Var0.f_12 != Global_29006))
	{
		if (IS_SLOT_VALID(bVar4))
		{
			bVar5 = GET_SLOT_ACTOR(bVar4);
			if (IS_ACTORSET_VALID(bLocal_19))
			{
				Function_428(&bLocal_19, &bVar5);
			}
		}
	}
	return;
}

void Function_428(var uParam0, int iParam1) //Position: 0xC04D / 49229
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTORSET_VALID(*uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		return;
	}
	bVar1 = false;
	while (bVar1 <= GET_ACTORSET_SIZE(*uParam0))
	{
		bVar0 = GET_ACTOR_FROM_ACTORSET(*uParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			MEMORY_IDENTIFY(bVar0, *iParam1);
			MEMORY_CONSIDER_AS_ENEMY(bVar0, *iParam1);
		}
		bVar1++;
	}
	return;
}

void Function_429(int iParam0) //Position: 0xC0A2 / 49314
{
	Function_43(&Global_83864 + 1252, iParam0);
	return;
}

void Function_430(int iParam0) //Position: 0xC0B4 / 49332
{
	UNK_0xA6403262(0, UI_GET_STRING("Common_Null"));
	if (iParam0 != 0)
	{
		if (iParam0 == 1)
		{
			UI_ENTER("XpHud");
			UI_EXIT("XpMultiplier");
		}
		else
		{
			UI_EXIT("XpHud");
		}
		UI_SET_STRING("mp_killchain_header", UI_GET_STRING("sn_kc"));
	}
	Function_183();
	Function_184();
	switch (iParam0)
	{
		case 0x00000001:
			Function_42(12288);
			Function_51(16384);
			break;
		
		case 0x00000002:
			Function_42(20480);
			Function_51(8192);
			break;
		
		default:
			Function_51(28672);
			break;
	}
	Function_51(2048);
	Function_432(0, 0);
	Function_431();
	return;
}

void Function_431() //Position: 0xC178 / 49528
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_432(bool bParam0, bool bParam1) //Position: 0xC191 / 49553
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_437(&Global_78480);
	Function_436(&Global_78480);
	uVar0 = Function_238(37);
	Function_434();
	if (!bParam0)
	{
		Function_234(37, uVar0);
	}
	Function_109(18264, 0);
	Function_433();
	return;
}

void Function_433() //Position: 0xC1DD / 49629
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_434() //Position: 0xC1FC / 49660
{
	Function_435(&Global_78480 + 220);
	return;
}

void Function_435(int iParam0) //Position: 0xC20B / 49675
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

void Function_436(int iParam0) //Position: 0xC22C / 49708
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

void Function_437(int iParam0) //Position: 0xC250 / 49744
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

void Function_438(var uParam0, int iParam1) //Position: 0xC274 / 49780
{
	uParam0->f_96 = iParam1;
	return;
}

void Function_439(var uParam0) //Position: 0xC280 / 49792
{
	uParam0 = uParam0;
	return;
}

bool Function_440(var uParam0, bool bParam1) //Position: 0xC28A / 49802
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_441("freemodetest");
	while (iVar1 == 2 && !IS_EXITFLAG_SET())
	{
		WAIT(false);
		if (bVar2)
		{
			DRAW_STRING_CURRENT_FONT(0.05f, 0.05f, "Registering Net Script...", 1.0f, 1.0f, 1.0f, 1.0f);
		}
		if (NET_IS_IN_SESSION())
		{
			if (iVar1 == 0)
			{
				NET_SET_THIS_SCRIPT_IS_NET_SCRIPT(uParam0);
			}
			else if (GET_CURRENT_GAME_TIME() < (fVar0 + 10.0f) && bParam1)
			{
				return 0;
			}
			if (iVar1 != 4 || iVar1 != 5)
			{
				if (bParam1)
				{
					return 0;
				}
				NET_UNREGISTER_AS_NET_SCRIPT();
			}
			iVar1 = NET_GET_SCRIPT_STATUS();
		}
	}
	return 1;
}

int Function_441(bool bParam0) //Position: 0xC33D / 49981
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

