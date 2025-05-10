//Decompiled with MagicRDR v1.0
//Function Count : 424
//Statics Count : 336
//Natives Count : 406
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
	int iLocal_19 = 0;
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
	struct<101> Local_103 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_240 = 27;
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
	var uLocal_297 = 17;
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
	var uLocal_315 = 6;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	bool bLocal_325 = false;
	bool bLocal_326 = false;
	bool bLocal_327 = false;
	struct<6> Local_328 = { 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_169 = 1;
	if (!Function_404(&Local_103, uScriptParam_0))
	{
		TERMINATE_THIS_SCRIPT();
	}
	while (!IS_EXITFLAG_SET() && Function_94())
	{
		WAIT(0);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x77 / 119
{
	if (NET_SCRIPT_GET_NUM_PARTICIPANTS() == 1)
	{
		if (SQUAD_IS_VALID(bLocal_170))
		{
			SQUAD_GOALS_CLEAR(bLocal_170);
			Function_93(bLocal_170);
			Function_92(bLocal_170);
			SQUAD_SET_FACTION(bLocal_170, 21);
		}
		if (IS_ACTORSET_VALID(iLocal_19))
		{
			Function_88(iLocal_19, Global_78576, -1.0f, -1.0f, 1, 1);
		}
	}
	Function_84(&uLocal_132);
	Function_73(bLocal_130);
	RELEASE_LAYOUT_REF(bLocal_130);
	Function_68(Local_103);
	Function_2(&Local_103);
	return;
}

void Function_2(int iParam0) //Position: 0xD6 / 214
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

void Function_3(int iParam0) //Position: 0x1B2 / 434
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_7(iParam0);
	Function_4();
	return;
}

void Function_4() //Position: 0x1C4 / 452
{
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x1D0 / 464
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

void Function_6() //Position: 0x1F0 / 496
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_7(int iParam0) //Position: 0x225 / 549
{
	Function_42(131072);
	HUD_ENABLE(1);
	UI_INCLUDE("nMP_Ticker");
	UI_INCLUDE("WeaponAmmo");
	if (IS_WEAPON_DRAWN(Function_41()))
	{
		UI_ENTER("WeaponAmmo");
	}
	UI_UNFOCUS("HudGamerList");
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
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

int Function_8(float fParam0, var uParam1, bool bParam2) //Position: 0x2E0 / 736
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

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x310 / 784
{
	Function_10(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x32C / 812
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x54C / 1356
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
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

var Function_12() //Position: 0xB79 / 2937
{
	int iVar0;
	
	return iVar0;
}

var Function_13(int iParam0) //Position: 0xB81 / 2945
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xB92 / 2962
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

struct<32> Function_15(char* cParam0, bool bParam1) //Position: 0xC87 / 3207
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xCA0 / 3232
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0xD05 / 3333
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_18(int iParam0, bool bParam1) //Position: 0xD17 / 3351
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xD29 / 3369
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

int Function_20(int iParam0) //Position: 0xE59 / 3673
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0xE68 / 3688
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0xEA1 / 3745
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0xEDE / 3806
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x1078 / 4216
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

void Function_25(int iParam0, float fParam1) //Position: 0x12BC / 4796
{
	Function_26(iParam0, (Function_27(iParam0) + fParam1));
	return;
}

void Function_26(int iParam0, int iParam1) //Position: 0x12CF / 4815
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

float Function_27(int iParam0) //Position: 0x12F8 / 4856
{
	return (*&Global_78480 + 176)[iParam0];
}

bool Function_28() //Position: 0x1308 / 4872
{
	if (Function_30())
	{
		return (Function_29() != 1 || Function_29() != 0);
	}
	return 0;
}

int Function_29() //Position: 0x1321 / 4897
{
	return Global_79349.f_16;
}

bool Function_30() //Position: 0x132D / 4909
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_31() //Position: 0x1336 / 4918
{
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_90))
	{
		bLocal_90 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_replay", 1, 15, 0, 0, 0, 0, 4294967295, 0);
	}
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
	{
		bLocal_89 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_skip", 1, 13, 0, 0, 0, 0, 4294967295, 0);
	}
	return;
}

void Function_32() //Position: 0x1390 / 5008
{
	Function_33(1024, 0, 1);
	Function_33(1, 0, 0);
	return;
}

void Function_33(int iParam0, bool bParam1, int iParam2) //Position: 0x13A4 / 5028
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

void Function_34(int iParam0, int iParam1) //Position: 0x13CC / 5068
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_35(int iParam0, int iParam1) //Position: 0x13DF / 5087
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_36() //Position: 0x13EE / 5102
{
	if (Function_38())
	{
		Function_37();
	}
	Function_33(4096, 0, 1);
	return;
}

void Function_37() //Position: 0x1405 / 5125
{
	Function_33(32768, 1, 0);
	return;
}

bool Function_38() //Position: 0x1414 / 5140
{
	return (Function_39(4096) || Function_39(4));
}

bool Function_39(bool bParam0) //Position: 0x1425 / 5157
{
	return Function_40(Global_76905.f_132, bParam0);
}

bool Function_40(var uParam0, bool bParam1) //Position: 0x1436 / 5174
{
	return (uParam0 && bParam1) == 0;
}

var Function_41() //Position: 0x1443 / 5187
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_42(int iParam0) //Position: 0x1458 / 5208
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

void Function_43(var uParam0, int iParam1) //Position: 0x14B1 / 5297
{
	Function_35(uParam0, iParam1);
	return;
}

void Function_44(bool bParam0, int iParam1) //Position: 0x14BE / 5310
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), iParam1, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_45(int iParam0) //Position: 0x14D3 / 5331
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

bool Function_46(int iParam0) //Position: 0x1590 / 5520
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_47(int iParam0) //Position: 0x15A6 / 5542
{
	Function_48(&Global_79338, iParam0);
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x15B5 / 5557
{
	Function_34(uParam0, iParam1);
	return;
}

void Function_49(int iParam0) //Position: 0x15C2 / 5570
{
	Function_48(&Global_83864 + 1252, iParam0);
	return;
}

void Function_50(int iParam0) //Position: 0x15D4 / 5588
{
	Function_48(&Global_78617 + 52, iParam0);
	return;
}

void Function_51(int iParam0) //Position: 0x15E5 / 5605
{
	Function_48(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_52() //Position: 0x161E / 5662
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_53() //Position: 0x1635 / 5685
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

void Function_54(int iParam0) //Position: 0x1657 / 5719
{
	Local_84 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_55() //Position: 0x1665 / 5733
{
	Function_56();
	return;
}

void Function_56() //Position: 0x166E / 5742
{
	Function_57(4294967286);
	return;
}

void Function_57(bool bParam0) //Position: 0x167A / 5754
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

void Function_58(var uParam0, int iParam1) //Position: 0x16B7 / 5815
{
	Local_51[iParam12] = *uParam0;
	return;
}

void Function_59(int iParam0) //Position: 0x16C6 / 5830
{
	Local_49 = *iParam0;
	return;
}

void Function_60(var uParam0, int iParam1) //Position: 0x16D1 / 5841
{
	*uParam0 = iParam1;
	return;
}

void Function_61(int iParam0) //Position: 0x16DC / 5852
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_84 };
	return;
}

void Function_62(int iParam0) //Position: 0x16EA / 5866
{
	*iParam0 = Local_49;
	return;
}

float Function_63(int iParam0) //Position: 0x16F5 / 5877
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

void Function_64() //Position: 0x17C6 / 6086
{
	if (!Function_65())
	{
	}
	return;
}

bool Function_65() //Position: 0x17D3 / 6099
{
	return NET_IS_IN_SESSION();
}

bool Function_66(int iParam0) //Position: 0x17DC / 6108
{
	return Function_40(*iParam0, 2);
}

bool Function_67(int iParam0) //Position: 0x17E9 / 6121
{
	return Function_40(*iParam0, 1);
}

void Function_68(int iParam0) //Position: 0x17F6 / 6134
{
	Function_70(iParam0);
	Function_69(&Global_83591, 3, 45.0f);
	return;
}

void Function_69(int iParam0, int iParam1, int iParam2) //Position: 0x180E / 6158
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

void Function_70(int iParam0) //Position: 0x1831 / 6193
{
	Function_72(&(Global_29008[iParam0]), 16);
	Function_72(&(Global_29008[iParam0]), 64);
	Function_72(&(Global_29008[iParam0]), 4);
	Function_71(64);
	return;
}

void Function_71(int iParam0) //Position: 0x185F / 6239
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_72(var uParam0, int iParam1) //Position: 0x1872 / 6258
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_73(int iParam0) //Position: 0x1889 / 6281
{
	if (IS_ACTORSET_VALID(iLocal_19))
	{
		Function_83(iLocal_19);
	}
	Function_81(iParam0);
	if (!Function_79(4))
	{
		Function_74(1);
	}
	return;
}

void Function_74(bool bParam0) //Position: 0x18AD / 6317
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

void Function_75(bool bParam0, bool bParam1) //Position: 0x18F1 / 6385
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

int Function_76(bool bParam0, bool bParam1) //Position: 0x196E / 6510
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

void Function_77(int iParam0) //Position: 0x1992 / 6546
{
	Function_48(&Global_79337, iParam0);
	return;
}

void Function_78(int iParam0) //Position: 0x19A1 / 6561
{
	Function_43(&Global_79337, iParam0);
	return;
}

bool Function_79(int iParam0) //Position: 0x19B0 / 6576
{
	return Function_80(Global_79337, iParam0);
}

bool Function_80(var uParam0, int iParam1) //Position: 0x19BF / 6591
{
	return (uParam0 && iParam1) == 0;
}

void Function_81(bool bParam0) //Position: 0x19CC / 6604
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

void Function_82(bool bParam0) //Position: 0x1A6B / 6763
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

void Function_83(int iParam0) //Position: 0x1A9C / 6812
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(iParam0) - 1))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(iParam0, bVar0)))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_ACTORSET(iParam0, bVar0))))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_ACTORSET(iParam0, bVar0)));
			}
		}
		bVar0++;
	}
	return;
}

void Function_84(int iParam0) //Position: 0x1AE7 / 6887
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_85(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_85(var uParam0, int iParam1) //Position: 0x1B0D / 6925
{
	if (Function_87(uParam0[iParam13], 4))
	{
		if (Function_87(uParam0[iParam13], 1))
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
			Function_86(uParam0[iParam13], 1);
			Function_86(uParam0[iParam13], 2);
			Function_86(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_86(var uParam0, int iParam1) //Position: 0x1C3B / 7227
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_87(int iParam0, bool bParam1) //Position: 0x1C55 / 7253
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_88(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x1C72 / 7282
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(iParam0) - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			bVar2 = Function_89(bVar1, uParam1);
			TASK_FLEE_ACTOR(bVar1, bVar2, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		bVar0++;
	}
}

var Function_89(var uParam0, int iParam1) //Position: 0x1CC2 / 7362
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	if (GET_ACTORSET_SIZE(iParam1) != 0 || !IS_ACTORSET_VALID(iParam1))
	{
		return "";
	}
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+20.0f;
	fVar3 = (fVar2 + 1.0f);
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(iParam1) - 1))
	{
		if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(iParam1, bVar0)))
		{
			fVar3 = Function_90(uParam0, GET_ACTOR_FROM_ACTORSET(iParam1, bVar0));
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
		return GET_ACTOR_FROM_ACTORSET(iParam1, bVar1);
	}
	return "";
}

float Function_90(bool bParam0, bool bParam1) //Position: 0x1D48 / 7496
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_91(&uVar0, &uVar3);
	return iVar6;
}

var Function_91(var uParam0, int iParam1) //Position: 0x1D67 / 7527
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_92(bool bParam0) //Position: 0x1D85 / 7557
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

void Function_93(bool bParam0) //Position: 0x1DCC / 7628
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

int Function_94() //Position: 0x1E01 / 7681
{
	if (!Function_358(&Local_103, &bLocal_130, 47114, 1, 0))
	{
		return 0;
	}
	if (StackVal != 11)
	{
		if (Function_67(&iLocal_174))
		{
			if (Function_63(&iLocal_174) <= 0.0f)
			{
				Function_356(&uLocal_177, 6, 40, 38, 10.0f);
				Function_353(&iLocal_174, 5.0f);
			}
		}
		else
		{
			Function_352(&iLocal_174, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_288();
			break;
		
		case 0x00000001:
			Function_287();
			break;
		
		case 0x00000002:
			Function_285();
			break;
		
		case 0x00000003:
			Function_284();
			break;
		
		case 0x00000004:
			Function_281();
			break;
		
		case 0x00000005:
			Function_270();
			break;
		
		case 0x0000000B:
			Function_95();
			break;
	}
	return 1;
}

void Function_95() //Position: 0x1EB0 / 7856
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_268(&uLocal_177, 1, 0, 4294967295, 4294967295);
			Function_237(StackVal, StackVal, StackVal, StackVal, StackVal, bLocal_130, &uLocal_183, Local_328);
			Local_103.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_234();
			Function_96(&Local_103);
			break;
	}
	return;
}

var Function_96(int iParam0) //Position: 0x1EF4 / 7924
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
				Function_233(iParam0 + 16 + 8);
			}
			if (!bLocal_92)
			{
				if (((*iParam0 == Global_30717[2] && *iParam0 == Global_30640[13]) && *iParam0 == Global_30707[4]) && *iParam0 == Global_30658[7])
				{
					Function_10(458, 1, 0, 0);
				}
				strcpy(&cVar2, "FM Level - ", 16);
				stradd(&cVar2, I2STR(Global_83864.f_1264), 16);
				PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(Function_63(iParam0 + 16 + 8)), (iParam0 + 16)->f_20, Function_232(), Function_231(29), &cVar2);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				if (IS_STRING_VALID(iParam0->f_100))
				{
					AUDIO_MUSIC_FORCE_TRACK(iParam0->f_100, "IDLE", 2.0f, 2, 4294967295, 3212836864, 0);
				}
				Function_155(iParam0);
				Function_152(iParam0);
				if (NET_GET_PLAYMODE() == 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
					{
						if ((((((Global_56612[09].f_24 != 1 && Global_56612[19].f_24 != 1) && Global_56612[29].f_24 != 1) && Global_56612[39].f_24 != 1) && Global_56612[49].f_24 != 1) && Global_56612[69].f_24 != 1) && Global_56612[59].f_24 != 1)
						{
							if (Function_151())
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
				Function_150("MP_AA_already_finished");
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
			AUDIO_MUSIC_ONE_SHOT(Function_149(*iParam0), 0, 0, 0, 0, 0);
			HUD_ENABLE(0);
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (IS_ACTOR_VALID(Function_41()))
				{
					Function_147(Function_41(), 0);
					if (IS_ACTOR_INSIDE_VEHICLE(Function_41()))
					{
						bVar6 = GET_VEHICLE(Function_41());
						if (IS_ACTOR_VALID(bVar6))
						{
							START_VEHICLE(bVar6);
						}
					}
				}
				SET_PLAYER_CONTROL(0, 0, 1, 1);
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
			Function_142(iParam0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_136(*iParam0, Function_137());
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
						SET_PLAYER_CONTROL(0, 0, 1, 1);
					}
				}
				if (IS_BUTTON_RELEASED(iVar0, 4, 1, true))
				{
					Function_37();
					if (iLocal_17 == 2)
					{
						Function_142(iParam0);
					}
					else if (iLocal_17 == 1)
					{
						Function_133();
					}
				}
				else if (Function_132(15, 1, 1))
				{
					Function_131(1);
					Function_7(iParam0);
				}
				else if (Function_132(13, 1, 1))
				{
					Function_131(0);
					Function_7(iParam0);
				}
				else if (Function_130())
				{
					if (iLocal_17 == 1)
					{
						Function_142(iParam0);
					}
					else if (iLocal_17 == 2)
					{
						Function_133();
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
							Function_131(1);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_89))
						{
							Function_131(0);
						}
					}
				}
				else if (!iLocal_93)
				{
					iLocal_93 = 1;
					Function_5();
				}
			}
			Function_126();
			switch (Function_123(iParam0))
			{
				case 0x00000001:
					if (Function_109(99, 1, 0x3f800000))
					{
						Function_150("mp_aa_vote_replay_passed");
						PLAYSTAT_INT("AA vote passed", true);
						(iParam0 + 16)->f_28 = 1;
						Function_108(84);
						NET_ALLOW_PLAYERS_TO_JOIN(0);
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							Function_107(Global_12976.f_36);
							if (Function_104(StackVal, StackVal, Function_107(Global_12976.f_36)))
							{
								DESTROY_ACTOR(Global_12976.f_36);
							}
						}
						iLocal_96 = 11;
					}
					break;
				
				case 0x00000000:
					Function_150("mp_aa_vote_skip_passed");
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
			if (!Function_103(8))
			{
				Function_102(1792, 0);
				Function_97(1, 0, 0);
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

void Function_97(var uParam0, bool bParam1, int iParam2) //Position: 0x242E / 9262
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
			Function_101(&(Global_29008[Global_29006]), 131072);
			Function_72(&(Global_29008[Global_29006]), 2097152);
			Function_99(Global_29006);
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
				if (Function_98(&(Global_29008[iVar0]), 4) || Function_98(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_72(&(Global_29008[iVar0]), 2097155);
					Function_101(&(Global_29008[iVar0]), 262144);
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
			WAIT(0);
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

bool Function_98(var uParam0, int iParam1) //Position: 0x2539 / 9529
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_99(int iParam0) //Position: 0x2555 / 9557
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_100())
			{
				return;
			}
		}
		if (!Function_98(&(Global_29008[iParam0]), 2048))
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

bool Function_100() //Position: 0x25D4 / 9684
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_98(&(Global_29008[iVar0]), 4) || Function_98(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_101(var uParam0, int iParam1) //Position: 0x263D / 9789
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_102(int iParam0, bool bParam1) //Position: 0x264C / 9804
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

bool Function_103(int iParam0) //Position: 0x2687 / 9863
{
	return Function_80(Global_78617.f_52, iParam0);
}

bool Function_104(vector3 vParam0) //Position: 0x2698 / 9880
{
	var uVar0[8];
	int iVar9;
	int iVar10;
	
	Function_106(&uVar0);
	iVar9 = Function_105(StackVal, StackVal, vParam0, 1, 1, 0);
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

var Function_105(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x270C / 9996
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

void Function_106(int iParam0) //Position: 0x27A7 / 10151
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

vector3 Function_107(bool bParam0) //Position: 0x2805 / 10245
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_108(int iParam0) //Position: 0x2816 / 10262
{
	Function_43(&Global_78617 + 52, iParam0);
	return;
}

bool Function_109(bool bParam0, bool bParam1, float fParam2) //Position: 0x2827 / 10279
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_122(bParam0);
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
	if (Function_121(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_120(&Var0, 0);
		Function_54(&Var0);
		Function_56();
		NET_LOG(1, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_119(bParam0, iVar6, &uVar7))
	{
		if (Function_118())
		{
			if (!Function_117(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_116(&Var0, 1);
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
				if (Function_110(bParam0))
				{
					NET_LOG(1, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", false, false, false, false);
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

bool Function_110(int iParam0) //Position: 0x2A7A / 10874
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_115(bVar0))
		{
			iVar1 = Function_111(bVar0);
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

int Function_111(bool bParam0) //Position: 0x2ABD / 10941
{
	int iVar0;
	
	Function_114(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_62(&iVar0);
	}
	else
	{
		Function_113(&iVar0, bParam0);
	}
	return Function_112(&iVar0);
}

int Function_112(int iParam0) //Position: 0x2AE4 / 10980
{
	return *iParam0;
}

void Function_113(var uParam0, int iParam1) //Position: 0x2AED / 10989
{
	*uParam0 = Local_51[iParam12];
	return;
}

void Function_114(int iParam0) //Position: 0x2AFC / 11004
{
	Function_60(iParam0, 4294967286);
	return;
}

bool Function_115(bool bParam0) //Position: 0x2B0A / 11018
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_51, bParam0);
}

void Function_116(var uParam0, bool bParam1) //Position: 0x2B17 / 11031
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

bool Function_117(bool bParam0) //Position: 0x2B31 / 11057
{
	return Function_40(*bParam0, 2);
}

bool Function_118() //Position: 0x2B3E / 11070
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

bool Function_119(int iParam0, var uParam1, int iParam2) //Position: 0x2B5C / 11100
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
		if (Function_115(iVar0))
		{
			iVar1 = Function_111(iVar0);
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

void Function_120(int iParam0, bool bParam1) //Position: 0x2BAD / 11181
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

bool Function_121(int iParam0) //Position: 0x2BC7 / 11207
{
	return Function_40(*iParam0, 1);
}

void Function_122(int iParam0) //Position: 0x2BD4 / 11220
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_62(&iVar1);
	if (Function_112(&iVar1) != bVar0)
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
		NET_LOG(1, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), false);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_57(bVar0);
		Function_116(&Var2, 0);
		Function_54(&Var2);
	}
	return;
}

bool Function_123(int iParam0) //Position: 0x2CD1 / 11473
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
		if (Function_125(bVar4))
		{
			switch (Function_124(bVar4))
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

int Function_124(int iParam0) //Position: 0x2F0D / 12045
{
	return StackVal;
}

bool Function_125(bool bParam0) //Position: 0x2F1B / 12059
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_126() //Position: 0x2F31 / 12081
{
	Function_129(8);
	Function_127(&Global_79298);
	return;
}

void Function_127(int iParam0) //Position: 0x2F43 / 12099
{
	Function_128(iParam0, 0.0f);
	return;
}

void Function_128(int iParam0, float fParam1) //Position: 0x2F4F / 12111
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_35(iParam0, 1);
	Function_34(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_129(int iParam0) //Position: 0x2F70 / 12144
{
	Function_43(&Global_79338, iParam0);
	return;
}

bool Function_130() //Position: 0x2F7F / 12159
{
	return Function_39(32768);
}

void Function_131(bool bParam0) //Position: 0x2F8C / 12172
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_50(64);
	Local_51[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_132(int iParam0, int iParam1, bool bParam2) //Position: 0x2FB7 / 12215
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

void Function_133() //Position: 0x3064 / 12388
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_135();
	Function_134();
	iLocal_17 = 2;
	return;
}

void Function_134() //Position: 0x309F / 12447
{
	Function_33(1025, 1, 0);
	return;
}

void Function_135() //Position: 0x30AD / 12461
{
	if (!Function_38())
	{
		Function_37();
	}
	Function_33(4096, 1, 1);
	return;
}

void Function_136(var uParam0, var uParam1) //Position: 0x30C5 / 12485
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

int Function_137() //Position: 0x30EA / 12522
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
		if (Function_125(iVar2))
		{
			iVar3 = Function_138(iVar2);
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

int Function_138(bool bParam0) //Position: 0x3129 / 12585
{
	return Function_139(0, bParam0);
}

int Function_139(int iParam0, bool bParam1) //Position: 0x3135 / 12597
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_141(iParam0);
	}
	if (!Function_140(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

bool Function_140(bool bParam0) //Position: 0x319C / 12700
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

int Function_141(int iParam0) //Position: 0x323D / 12861
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_142(int iParam0) //Position: 0x324D / 12877
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	Function_146(1);
	Function_135();
	Function_134();
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
	itos(&cVar0, Function_232(), 32);
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
	itos(&cVar0, Function_141(3), 32);
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
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_231(29));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_deaths"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_145());
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_assists"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_231(38));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_defends"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_231(28));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_combo_streak"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bLocal_43);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_headshots"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_231(34));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_time"), iVar8);
	Function_143(0, Function_63(iParam0 + 16 + 8));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iLocal_17 = 1;
	return;
}

void Function_143(bool bParam0, int iParam1) //Position: 0x3671 / 13937
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_144(iParam1) };
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

struct<16> Function_144(var uParam0) //Position: 0x389E / 14494
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

int Function_145() //Position: 0x390F / 14607
{
	return Function_231(12);
}

void Function_146(bool bParam0) //Position: 0x391A / 14618
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_33(16384, 0, 1);
	return;
}

void Function_147(bool bParam0, bool bParam1) //Position: 0x3934 / 14644
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
	else if (!bParam1 || Function_148(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_148(bool bParam0, bool bParam1) //Position: 0x3991 / 14737
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_149(int iParam0) //Position: 0x39B0 / 14768
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_150(bool bParam0) //Position: 0x3A0E / 14862
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), 0, 0, 0, 0, 0, 0);
	return;
}

bool Function_151() //Position: 0x3A22 / 14882
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_152(int iParam0) //Position: 0x3A31 / 14897
{
	Function_154(iParam0, Global_30668[2], &Global_56612, 0);
	Function_154(iParam0, Global_30679[1], &Global_56612, 1);
	Function_154(iParam0, Global_30658[0], &Global_56612, 2);
	Function_154(iParam0, Global_30658[3], &Global_56612, 3);
	Function_154(iParam0, Global_30685[2], &Global_56612, 4);
	Function_154(iParam0, Global_30640[2], &Global_56612, 6);
	Function_154(iParam0, Global_30685[1], &Global_56612, 5);
	Function_154(iParam0, Global_30658[2], &Global_56612, 7);
	Function_153(iParam0, Global_30668[2], &Global_56688, 0);
	Function_153(iParam0, Global_30679[1], &Global_56688, 1);
	Function_153(iParam0, Global_30658[0], &Global_56688, 2);
	Function_153(iParam0, Global_30658[3], &Global_56688, 3);
	Function_153(iParam0, Global_30685[2], &Global_56688, 4);
	Function_153(iParam0, Global_30640[2], &Global_56688, 6);
	Function_153(iParam0, Global_30685[1], &Global_56688, 5);
	Function_153(iParam0, Global_30658[2], &Global_56688, 7);
	return;
}

void Function_153(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3B27 / 15143
{
	if (*uParam0 != iParam1 && uParam2[776][iParam39]->f_20 != 1)
	{
		(*uParam2[776])[iParam39] = iParam1;
		uParam2[776][iParam39]->f_24 = 1;
		uParam2[776][iParam39]->f_8 = Function_145();
	}
	if (*uParam0 != iParam1 && uParam2[876][iParam39]->f_20 != 1)
	{
		(*uParam2[876])[iParam39] = iParam1;
		uParam2[876][iParam39]->f_24 = 1;
		uParam2[876][iParam39]->f_8 = Function_145();
	}
	if (*uParam0 != iParam1 && uParam2[976][iParam39]->f_20 != 1)
	{
		(*uParam2[976])[iParam39] = iParam1;
		uParam2[976][iParam39]->f_24 = 1;
		uParam2[976][iParam39]->f_8 = Function_145();
	}
}

void Function_154(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3BEB / 15339
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_145();
	}
}

void Function_155(int iParam0) //Position: 0x3C2C / 15404
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_230(*iParam0) };
	Function_228(iParam0);
	Function_227(13, iParam0->f_92);
	Function_227(0, iParam0->f_92);
	iParam0->f_92 = (iParam0->f_92 + Function_141(2));
	if (iParam0->f_104)
	{
		Function_226(3, 5);
	}
	else
	{
		Function_226(3, 100);
	}
	iParam0->f_92 = (iParam0->f_92 + Function_141(3));
	Function_126();
	Function_227(13, iParam0->f_92);
	Function_227(0, iParam0->f_92);
	iLocal_95 = 1;
	Function_156(Var0, 4294967295, 0, 0, 1);
	return;
}

void Function_156(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3CA1 / 15521
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_225(5, 1);
	Function_51(4096);
	switch (Function_29())
	{
		case 0x00000011:
		case 0x00000002:
			Function_184(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_177();
	Function_176();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(0);
			Function_175(&Global_78480 + 220, &uVar0, 0);
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
				Function_173(iParam1);
			}
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_175(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_157(bParam2);
}

void Function_157(bool bParam0) //Position: 0x3DBD / 15805
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_129(2);
	if (bParam0)
	{
		Function_129(1);
	}
	else
	{
		Function_47(1);
	}
	Function_158();
	return;
}

void Function_158() //Position: 0x3E46 / 15942
{
	Function_171();
	Function_170();
	Function_170();
	Function_169();
	Function_169();
	Function_168();
	Function_168();
	Function_165(0);
	Function_165(0);
	if (!Function_30())
	{
		Function_163();
		Function_162();
		Function_161();
		Function_160();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_159();
	return;
}

void Function_159() //Position: 0x3E98 / 16024
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

void Function_160() //Position: 0x3F9E / 16286
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

void Function_161() //Position: 0x3FD1 / 16337
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

void Function_162() //Position: 0x4160 / 16736
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

void Function_163() //Position: 0x4314 / 17172
{
	Function_164(&Global_28260, 1, 0);
	return;
}

void Function_164(int iParam0, bool bParam1, int iParam2) //Position: 0x4322 / 17186
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
	
	bVar0 = Function_41();
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

struct<8> Function_165(int iParam0) //Position: 0x4513 / 17683
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
					iVar2 = ((Function_167((50 + iVar4)) + Function_167((183 + iVar4))) + Function_167((90 + iVar4)));
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
	Function_166(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_166(int iParam0, bool bParam1, bool bParam2) //Position: 0x45B9 / 17849
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

int Function_167(bool bParam0) //Position: 0x4854 / 18516
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_168() //Position: 0x4895 / 18581
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
		iVar2 = ((Function_167((50 + iVar3) + 15) + Function_167((183 + iVar3) + 15)) + Function_167((90 + iVar3) + 15));
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
	Function_166(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_169() //Position: 0x491E / 18718
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
			iVar2 = ((Function_167((50 + iVar3) + 8) + Function_167((183 + iVar3) + 8)) + Function_167((90 + iVar3) + 8));
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
	Function_166(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_170() //Position: 0x49B5 / 18869
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
		iVar2 = ((Function_167((50 + iVar3)) + Function_167((183 + iVar3))) + Function_167((90 + iVar3)));
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
	Function_166(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_171() //Position: 0x4A34 / 18996
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_172(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_166(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_172(int iParam0, bool bParam1, int iParam2) //Position: 0x4A6D / 19053
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

void Function_173(int iParam0) //Position: 0x4C77 / 19575
{
	bool bVar0[67];
	bool bVar68[67];
	
	Function_35(&Global_79338, 32);
	bVar0[13] = FLOOR(Function_27(8));
	bVar0[0] = FLOOR(Function_27(8));
	if (Function_27(8) < 0.0f)
	{
		if (Function_174())
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
		if (Function_174())
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

bool Function_174() //Position: 0x4D1E / 19742
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

void Function_175(var uParam0, var uParam1, bool bParam2) //Position: 0x4D29 / 19753
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

void Function_176() //Position: 0x4D6E / 19822
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

void Function_177() //Position: 0x4D98 / 19864
{
	if (Global_83864.f_1264 > 6)
	{
		Function_178(&(Global_50170[522]));
		Function_178(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_178(&(Global_50170[722]));
		Function_178(&(Global_50170[822]));
		Function_178(&(Global_50170[922]));
		Function_178(&(Global_50170[1022]));
		Function_178(&(Global_50170[1122]));
	}
	return;
}

void Function_178(bool bParam0) //Position: 0x4DF8 / 19960
{
	Global_56092[*bParam0] = 0;
	Function_179(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_179(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x4E12 / 19986
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_183(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_182(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_183(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_181(iParam0, 4))
	{
		Function_180(Function_183(iParam0), 0);
	}
}

void Function_180(var uParam0, int iParam1) //Position: 0x4EC9 / 20169
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

bool Function_181(int iParam0, bool bParam1) //Position: 0x4EEE / 20206
{
	return Function_40(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_182(int iParam0) //Position: 0x4F02 / 20226
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_183(int iParam0) //Position: 0x4F36 / 20278
{
	return Global_50170[iParam022].f_24;
}

void Function_184(var uParam0, var uParam1, int iParam2) //Position: 0x4F45 / 20293
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_224(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_217(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_223(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_216(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_179(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_224(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_217(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_223(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_216(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_179(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_224(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_185(17, 150, Function_223(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_216(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_179(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_185(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x50EE / 20718
{
	Function_214(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_183(iParam0), 1.0f, 0, 0);
	Function_210(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_207(iParam3);
	}
	Function_201(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_186();
}

void Function_186() //Position: 0x5154 / 20820
{
	if (!Function_30())
	{
		if (!Function_200(1, 3, 1, 1))
		{
			Function_188(1);
			Function_187(1, 8);
		}
	}
	else
	{
		Function_157(0);
	}
	return;
}

void Function_187(var uParam0, int iParam1) //Position: 0x517D / 20861
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

void Function_188(bool bParam0) //Position: 0x51BF / 20927
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_189();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_158();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_34(&Global_63095, 1);
		Function_34(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_189() //Position: 0x5210 / 21008
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_199())
	{
		Function_196(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_196(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_191(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_191(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_190(StackVal, StackVal, vVar0))
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

bool Function_190(vector3 vParam0) //Position: 0x52CB / 21195
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_191(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x52E3 / 21219
{
	int iVar0;
	
	iVar0 = Function_194(uParam2, uParam3);
	if (Function_193(iVar0))
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
	Function_192();
	return StackVal, StackVal, Function_192();
}

vector3 Function_192() //Position: 0x53CA / 21450
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_193(int iParam0) //Position: 0x53D3 / 21459
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_194(bool bParam0, bool bParam1) //Position: 0x53E9 / 21481
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
				fVar2 = Function_195(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_195(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_193(bVar0) && !bParam1)
	{
		bVar0 = Function_194(bParam0, 1);
	}
	return bVar0;
}

float Function_195(vector3 vParam0, vector3 vParam3) //Position: 0x54B0 / 21680
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_196(var uParam0, int iParam1) //Position: 0x54CD / 21709
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_198(Global_34573, &vVar4);
	if (!Function_197(Global_30640[0]))
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
	if (!Function_197(Global_30640[2]))
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
	if (!Function_197(Global_30640[1]))
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
	if (!Function_197(Global_30658[1]))
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
	if (!Function_197(Global_30658[3]))
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
	if (!Function_197(Global_30658[2]))
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
	if (!Function_197(Global_30658[4]))
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
	if (!Function_197(Global_30668[0]))
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
	if (!Function_197(Global_30668[1]))
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
	if (!Function_197(Global_30668[2]))
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
	if (!Function_197(Global_30679[0]))
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
	if (!Function_197(Global_30685[0]))
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
	if (!Function_197(Global_30685[1]))
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
	if (!Function_197(Global_30685[2]))
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
	if (!Function_197(Global_30693[0]))
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
	if (!Function_197(Global_30693[1]))
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
	if (!Function_197(Global_30693[2]))
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
	if (!Function_197(Global_30707[2]))
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
	if (!Function_197(Global_30707[3]))
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
	if (!Function_197(Global_30707[0]))
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
	if (!Function_197(Global_30717[0]))
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
	if (!Function_197(Global_30723[2]))
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
	if (!Function_197(Global_30723[1]))
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
	if (!Function_197(Global_30723[0]))
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
	if (!Function_197(Global_30679[1]))
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
	if (!Function_197(Global_30707[1]))
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
	if (Function_190(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_197(int iParam0) //Position: 0x5CF2 / 23794
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_40(uVar0, 0x1000000) || Function_40(uVar0, 0x2000000)) || Function_40(uVar0, 0x4000000)) || !Function_40(uVar0, 0x10000000));
}

void Function_198(bool bParam0, int iParam1) //Position: 0x5D2D / 23853
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_199() //Position: 0x5D3A / 23866
{
	if (Function_40(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_200(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x5D55 / 23893
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

void Function_201(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5DF9 / 24057
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_206();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_205(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_204(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_203(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_202(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_205(), iVar1 + 1);
	return;
}

struct<16> Function_202(int iParam0) //Position: 0x5E6B / 24171
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_203(int iParam0) //Position: 0x5E8C / 24204
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_204(int iParam0) //Position: 0x5EAD / 24237
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_205() //Position: 0x5ECE / 24270
{
	return "CQueue_Count";
}

var Function_206() //Position: 0x5EE3 / 24291
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_207(int iParam0) //Position: 0x5F12 / 24338
{
	Function_208(iParam0, 1);
	return;
}

void Function_208(int iParam0, bool bParam1) //Position: 0x5F1E / 24350
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_35(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_209((iVar0 % 32)));
	}
	else
	{
		Function_34(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_209((iVar0 % 32)));
	}
	return;
}

int Function_209(bool bParam0) //Position: 0x5F74 / 24436
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_210(int iParam0, int iParam1) //Position: 0x5F80 / 24448
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_213(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_183(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_212(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_182(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_211(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_183(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_183(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_183(iParam0), 1.0f, 0, 0);
	}
	return;
}

struct<16> Function_211(int iParam0) //Position: 0x6002 / 24578
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_182(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_212(int iParam0) //Position: 0x6022 / 24610
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_213(int iParam0) //Position: 0x6053 / 24659
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

void Function_214(bool bParam0, bool bParam1) //Position: 0x61D1 / 25041
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_215();
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

var Function_215() //Position: 0x631D / 25373
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_216(var uParam0, bool bParam1, bool bParam2) //Position: 0x636A / 25450
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_217(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x6382 / 25474
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_182(iParam0) };
	Function_201(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_216(&fParam5, bParam8, iParam9);
	Function_179(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_219(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_207(iParam12);
	}
	Function_218(iParam0, 4);
	Function_186();
}

void Function_218(int iParam0, int iParam1) //Position: 0x63F8 / 25592
{
	Function_34(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_219(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x640C / 25612
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_213(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_183(iParam0));
	if ((bParam3 && Function_181(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_183(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_212(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_182(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_222(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_221(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_211(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_183(iParam0), &Var7, 0, 2, Function_181(iParam0, 4));
			if (!bParam3)
			{
				Function_220(iParam0, 4);
			}
		}
	}
}

void Function_220(int iParam0, int iParam1) //Position: 0x64C9 / 25801
{
	Function_35(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_221(int iParam0) //Position: 0x64DD / 25821
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_222(int iParam0) //Position: 0x650B / 25867
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_223() //Position: 0x653B / 25915
{
	return "MP_Unstoppable_Icon_128";
}

float Function_224(int iParam0) //Position: 0x655B / 25947
{
	return Global_50170[iParam022].f_12;
}

void Function_225(int iParam0, int iParam1) //Position: 0x656A / 25962
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_226(int iParam0, int iParam1) //Position: 0x658F / 25999
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_227(int iParam0, int iParam1) //Position: 0x65B8 / 26040
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_228(int iParam0) //Position: 0x65D2 / 26066
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_230(*iParam0) };
	fVar5 = (StackVal - Function_63(iParam0 + 16 + 8));
	Function_229(&fVar5, 600.0f, 30.0f);
	bVar6 = TO_FLOAT(bLocal_43);
	bVar7 = TO_FLOAT(Function_231(34));
	fVar8 = ((bVar6 * (bVar6 + 1.0f)) * 0.5f);
	fVar9 = ((bVar7 * (bVar7 + 1.0f)) * 0.5f);
	fVar10 = (fVar8 + fVar9);
	fVar11 = (fVar10 * Var0.f_12);
	bVar12 = (fVar11 / fVar5);
	iParam0->f_88 = (StackVal + CEIL(bVar12));
	iParam0->f_92 = (Function_232() + iParam0->f_88);
	return;
}

void Function_229(var uParam0, int iParam1, int iParam2) //Position: 0x6661 / 26209
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

struct<20> Function_230(int iParam0) //Position: 0x6686 / 26246
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

int Function_231(int iParam0) //Position: 0x6942 / 26946
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_232() //Position: 0x695B / 26971
{
	return Function_141(0);
}

void Function_233(int iParam0) //Position: 0x6965 / 26981
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

void Function_234() //Position: 0x6A2D / 27181
{
	if (iLocal_17 != 3 && !iLocal_101)
	{
		iLocal_101 = 1;
		if (Function_137() == GET_LOCAL_SLOT())
		{
			Function_235("aa_dlc_weapon_award_objective", 0x40f00000, 1, 2, 0, 0, 0, 0);
			if (!Global_26055[41])
			{
				Function_150("aa_dlc_weapon_award_ticker");
			}
		}
	}
	return;
}

void Function_235(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x6AA3 / 27299
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
			Var0 = { StackVal, StackVal, StackVal, Function_236(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_236(int iParam0) //Position: 0x6B28 / 27432
{
	char* cVar0[16];
	
	if (!Function_199())
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

void Function_237(bool bParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7) //Position: 0x6B67 / 27495
{
	int iVar0;
	bool bVar1;
	
	if (Function_137() == GET_LOCAL_SLOT())
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
		switch (RAND_INT_RANGE(0, 2))
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
	Function_265(iParam1, 3, iVar0, 5, 0);
	if (Function_264(3))
	{
		if (Function_263((*iParam1 + 228)[32]))
		{
			Function_244(StackVal, StackVal, StackVal, StackVal, &bLocal_102, &bVar1, bParam0, vParam2, *(&vParam2 + 12), 1, 0, 1, "f_Award_Pickup1", 0, 0);
			Function_239(StackVal, bVar1, *(iParam1 + 228[32]), 3);
			DECOR_SET_BOOL(bVar1, "DLC_AA_award", true);
		}
	}
	ADD_OBJECT_TO_OBJECTSET(bLocal_102, GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_238())));
	if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_102)))
	{
		ADD_BLIP_FOR_OBJECT(bLocal_102, 335, 0.0f, 2, 0);
	}
}

var Function_238() //Position: 0x6C65 / 27749
{
	return "PickupsSet";
}

void Function_239(bool bParam0, struct<2> Param1, int iParam3) //Position: 0x6C78 / 27768
{
	bool bVar0;
	
	if (Function_263(Param1))
	{
		bVar0 = Function_241(StackVal, Param1, iParam3);
		DECOR_SET_INT(bParam0, Function_240(), bVar0);
	}
}

var Function_240() //Position: 0x6C9E / 27806
{
	return "PackedWeapon";
}

var Function_241(struct<5> Param0) //Position: 0x6CB3 / 27827
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_242())) || SHIFT_LEFT(bParam2, Function_242() + 8));
}

bool Function_242() //Position: 0x6CD1 / 27857
{
	return Function_243(39);
}

int Function_243(int iParam0) //Position: 0x6CDC / 27868
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

void Function_244(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, int iParam11, char* cParam12, int iParam13, int iParam14) //Position: 0x6D0A / 27914
{
	Function_255(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_249(*uParam0, *bParam1, iParam9, bParam10, iParam11);
	DECOR_SET_INT(*bParam1, Function_248(), Function_247(bParam10, iParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_246(), Function_245(iParam13, iParam14));
}

var Function_245(var uParam0, bool bParam1) //Position: 0x6D5B / 27995
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_246() //Position: 0x6D6B / 28011
{
	return "PackedGrass";
}

var Function_247(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6D7F / 28031
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

var Function_248() //Position: 0x6DA4 / 28068
{
	return "PackedMetadata";
}

void Function_249(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x6DBB / 28091
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_240(), &uVar5))
				{
					Function_253(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_252();
				vVar0 = { StackVal, StackVal, Function_252() };
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
				Function_251();
				vVar0 = { StackVal, StackVal, Function_251() };
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
				Function_250();
				vVar0 = { StackVal, StackVal, Function_250() };
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

vector3 Function_250() //Position: 0x6EE6 / 28390
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_251() //Position: 0x6EF7 / 28407
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_252() //Position: 0x6F08 / 28424
{
	return 0.0f, 0.158f, -0.163f;
}

void Function_253(var uParam0, int iParam1) //Position: 0x6F19 / 28441
{
	*iParam1 = Function_254(uParam0, Function_242(), 0);
	iParam1->f_4 = Function_254(uParam0, Function_242() + 8, Function_242());
	return;
}

var Function_254(var uParam0, int iParam1, bool bParam2) //Position: 0x6F3C / 28476
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_209((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_255(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x6F5B / 28507
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_262();
			Function_251();
			vVar1 = { StackVal, StackVal, Function_251() };
			break;
		
		case 0x00000001:
			bVar0 = Function_261();
			Function_252();
			vVar1 = { StackVal, StackVal, Function_252() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_260();
			Function_250();
			vVar1 = { StackVal, StackVal, Function_250() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_259(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_257(Function_259()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_256(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_256() //Position: 0x705F / 28767
{
	return "MPItemGiver";
}

struct<32> Function_257(bool bParam0) //Position: 0x7073 / 28787
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_258("0", &cVar8, ""), 4);
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

struct<32> Function_258(char* cParam0, char* cParam1, char* cParam2) //Position: 0x70DD / 28893
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_259() //Position: 0x70FC / 28924
{
	return "PBox_";
}

var Function_260() //Position: 0x710A / 28938
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_261() //Position: 0x7130 / 28976
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_262() //Position: 0x7158 / 29016
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_263(int iParam0) //Position: 0x717E / 29054
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_264(int iParam0) //Position: 0x7190 / 29072
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_265(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x71A0 / 29088
{
	Function_266(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

void Function_266(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x71B7 / 29111
{
	if (!Function_264(iParam1))
	{
		return;
	}
	Function_267(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_267(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x71DA / 29146
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

void Function_268(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x7204 / 29188
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_269(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_269(int iParam0) //Position: 0x7228 / 29224
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

void Function_270() //Position: 0x777B / 30587
{
	bool bVar0;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_280(&Local_103, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_272(1, "d");
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_271(bLocal_170, iLocal_19, 0, 0);
			}
			if (Function_67(&iLocal_171))
			{
				Function_352(&iLocal_171, 15.0f);
			}
			Function_235("aa_crk_kill_bosses", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Local_103.f_8 = 6;
			bVar0 = SQUAD_GET_SIZE(bLocal_170);
			PRINTSTRING("ENEMY SQUAD CONTAINS: ");
			PRINTINT(bVar0);
			PRINTNL();
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_170) == 0)
			{
				if (Function_109(11, 1, 0x3f800000))
				{
					Local_103.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_103.f_8 = 0;
			Local_103.f_4 = 11;
			break;
	}
	return;
}

void Function_271(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x7860 / 30816
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTORSET_VALID(iParam1))
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
				if (!IS_ACTOR_IN_ACTORSET(iParam1, bVar1))
				{
					ADD_ACTORSET_MEMBER(iParam1, bVar1);
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

void Function_272(char* cParam0, bool bParam1) //Position: 0x78E2 / 30946
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	vVar0 = { -3866.971f, 7.131518f, 4313.145f };
	fVar3 = 30.0f;
	fVar4 = 75.0f;
	switch (iLocal_131)
	{
		case 0x00000003:
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(Function_273(StackVal, StackVal, cParam0, bParam1, vVar0, 529, "mexicanRebel_mexicanRebel_16", fVar3, fVar4, 0, 16)), "mpaa_BossName");
		
		case 0x00000002:
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(Function_273(StackVal, StackVal, cParam0, bParam1, vVar0, 530, "mexicanRebel_mexicanRebel_17", fVar3, fVar4, 0, 16)), "mpaa_BossName");
		
		case 0x00000001:
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(Function_273(StackVal, StackVal, cParam0, bParam1, vVar0, 521, "mexicanRebel_mexicanRebel_18", fVar3, fVar4, 0, 16)), "mpaa_BossName");
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(Function_273(StackVal, StackVal, cParam0, bParam1, vVar0, 532, "mexicanRebel_mexicanRebel_19", fVar3, fVar4, 0, 16)), "mpaa_BossName");
			break;
	}
	return;
}

var Function_273(int iParam0, char* cParam1, vector3 vParam2, var uParam5, char* cParam6, float fParam7, float fParam8, bool bParam9, bool bParam10) //Position: 0x7A55 / 31317
{
	struct<4> Var0;
	bool bVar4;
	
	strcpy(&Var0, cParam6, 16);
	stradd(&Var0, cParam1, 16);
	Function_278(&Var0, Local_103);
	bVar4 = Function_277(StackVal, StackVal, vParam2, &bLocal_130, uParam5, &Var0, fParam7, fParam8);
	Function_274(bVar4, iParam0);
	if (bParam9)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar4);
		GIVE_WEAPON_TO_ACTOR(bVar4, bParam10, 0, 1, 1);
		ACTOR_PUT_WEAPON_IN_HAND(bVar4, bParam10, 1);
	}
	return bVar4;
}

void Function_274(bool bParam0, int iParam1) //Position: 0x7AA9 / 31401
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_275(bParam0, NET_ACTOR_GET_SCRIPT_INT(bParam0));
		SET_ACTOR_MAX_HEALTH(bParam0, 75.0f);
		SET_ACTOR_HEALTH(bParam0, 75.0f);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, iParam1);
		TASK_CLEAR(bParam0);
	}
	return;
}

void Function_275(bool bParam0, bool bParam1) //Position: 0x7AE1 / 31457
{
	switch (bParam1)
	{
		case 0x00000000:
			if (!Function_276(bParam0, bLocal_170, 1))
			{
				SQUAD_JOIN(bParam0, bLocal_170);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
			{
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 1);
			}
			break;
		
		case 0x00000001:
			if (!Function_276(bParam0, bLocal_170, 1))
			{
				SQUAD_JOIN(bParam0, bLocal_170);
			}
			SET_ACTOR_MAX_HEALTH(bParam0, 125.0f);
			SET_ACTOR_HEALTH(bParam0, 125.0f);
			ADD_BLIP_FOR_ACTOR(bParam0, 392, 0, 2, 0);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
			MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(bParam0);
			MEMORY_ALLOW_THROWING_EXPLOSIVES(bParam0, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 16, 1);
			GIVE_WEAPON_TO_ACTOR(bParam0, 23, 10.0f, 1, 1);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 3.0f, 2.0f);
			break;
		
		default:
			if (!Function_276(bParam0, bLocal_170, 1))
			{
				SQUAD_JOIN(bParam0, bLocal_170);
			}
			break;
	}
	if (!IS_ACTOR_IN_ACTORSET(iLocal_19, bParam0))
	{
		ADD_ACTORSET_MEMBER(iLocal_19, bParam0);
	}
	return;
}

bool Function_276(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7BC4 / 31684
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(bParam0) == bParam1)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if (bParam2)
	{
	}
	return 0;
}

var Function_277(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x7C04 / 31748
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
			if (!Function_190(StackVal, StackVal, vVar3))
			{
				bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar11);
			}
		}
	}
	return bVar9;
}

void Function_278(char* cParam0, bool bParam1) //Position: 0x7CA3 / 31907
{
	strcpy(cParam0, Function_279(), 16);
	stradd(cParam0, INT_TO_STRING(bParam1), 16);
	stradd(cParam0, "_", 16);
	stradd(cParam0, &Global_29155[bParam110] + 20, 16);
	bLocal_100++;
	stradd(cParam0, INT_TO_STRING(bLocal_100), 16);
	return;
}

var Function_279() //Position: 0x7CDD / 31965
{
	return iLocal_99;
}

void Function_280(var uParam0, bool bParam1) //Position: 0x7CE5 / 31973
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

void Function_281() //Position: 0x7D1C / 32028
{
	bool bVar0;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_280(&Local_103, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_282(0, "c");
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_271(bLocal_170, iLocal_19, 0, 0);
			}
			if (Function_67(&iLocal_171))
			{
				Function_352(&iLocal_171, 15.0f);
			}
			Local_103.f_8 = 6;
			bVar0 = SQUAD_GET_SIZE(bLocal_170);
			PRINTSTRING("ENEMY SQUAD CONTAINS: ");
			PRINTINT(bVar0);
			PRINTNL();
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_170) < 2)
			{
				if (Function_109(5, 1, 0x3f800000))
				{
					Local_103.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_103.f_8 = 0;
			Local_103.f_4 = 5;
			break;
	}
	return;
}

void Function_282(char* cParam0, int iParam1) //Position: 0x7DDC / 32220
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	iLocal_131 = Function_283();
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	vVar0 = { -3866.971f, 7.131518f, 4313.145f };
	fVar3 = 30.0f;
	fVar4 = 75.0f;
	switch (iLocal_131)
	{
		case 0x00000003:
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 516, "mexicanRebel_mexicanRebel_01", fVar3, fVar4, 1, 16);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 517, "mexicanRebel_mexicanRebel_02", fVar3, fVar4, 1, 18);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 518, "mexicanRebel_mexicanRebel_03", fVar3, fVar4, 1, 9);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 521, "mexicanRebel_mexicanRebel_04", fVar3, fVar4, 1, 9);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 522, "mexicanRebel_mexicanRebel_05", fVar3, fVar4, 1, 5);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 523, "mexicanRebel_mexicanRebel_06", fVar3, fVar4, 1, 0);
		
		case 0x00000002:
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 524, "mexicanRebel_mexicanRebel_07", fVar3, fVar4, 1, 16);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 529, "mexicanRebel_mexicanRebel_08", fVar3, fVar4, 1, 18);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 530, "mexicanRebel_mexicanRebel_09", fVar3, fVar4, 1, 5);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 531, "mexicanRebel_mexicanRebel_10", fVar3, fVar4, 1, 9);
		
		case 0x00000001:
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 532, "mexicanRebel_mexicanRebel_11", fVar3, fVar4, 1, 16);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 516, "mexicanRebel_mexicanRebel_12", fVar3, fVar4, 1, 18);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 517, "mexicanRebel_mexicanRebel_13", fVar3, fVar4, 1, 18);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 518, "mexicanRebel_mexicanRebel_14", fVar3, fVar4, 1, 9);
			Function_273(StackVal, StackVal, cParam0, iParam1, vVar0, 521, "mexicanRebel_mexicanRebel_15", fVar3, fVar4, 1, 9);
			break;
	}
	return;
}

var Function_283() //Position: 0x8146 / 33094
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

void Function_284() //Position: 0x8175 / 33141
{
	bool bVar0;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_280(&Local_103, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_282(0, "b");
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_271(bLocal_170, iLocal_19, 0, 0);
			}
			if (Function_67(&iLocal_171))
			{
				Function_352(&iLocal_171, 15.0f);
			}
			Local_103.f_8 = 6;
			bVar0 = SQUAD_GET_SIZE(bLocal_170);
			PRINTSTRING("ENEMY SQUAD CONTAINS: ");
			PRINTINT(bVar0);
			PRINTNL();
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_170) < 2)
			{
				if (Function_109(4, 1, 0x3f800000))
				{
					Local_103.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_103.f_8 = 0;
			Local_103.f_4 = 4;
			break;
	}
	return;
}

void Function_285() //Position: 0x8235 / 33333
{
	bool bVar0;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_280(&Local_103, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_282(0, "a");
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_271(bLocal_170, iLocal_19, 0, 0);
			}
			Function_286(&bLocal_170, iLocal_169);
			Function_352(&iLocal_171, 15.0f);
			Function_235("aa_crk_kill_reinf", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Local_103.f_8 = 6;
			bVar0 = SQUAD_GET_SIZE(bLocal_170);
			PRINTSTRING("ENEMY SQUAD CONTAINS: ");
			PRINTINT(bVar0);
			PRINTNL();
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_170) < 2)
			{
				if (Function_109(3, 1, 0x3f800000))
				{
					Local_103.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_103.f_8 = 0;
			Local_103.f_4 = 3;
			break;
	}
	return;
}

void Function_286(var uParam0, int iParam1) //Position: 0x8316 / 33558
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
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

void Function_287() //Position: 0x83B2 / 33714
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	char* cVar35;
	bool bVar39;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_280(&Local_103, 0);
			Function_235("aa_crk_kill_bandits", 0x40f00000, 1, 2, 0, 0, 0, 0);
			vVar0 = { -3852.075f, 8.041f, 4305.204f };
			vVar3 = { -3870.078f, 7.043929f, 4310.06f };
			vVar6 = { -3882.989f, 7.375f, 4304.201f };
			vVar9 = { -3868.885f, 7.025061f, 4311.173f };
			vVar12 = { -3892.476f, 7.028f, 4293.819f };
			vVar15 = { 0.0f, 0.0f, 0.0f };
			vVar18 = { 0.0f, 0.0f, 0.0f };
			vVar21 = { 0.0f, 0.0f, 0.0f };
			vVar24 = { 0.0f, 0.0f, 0.0f };
			vVar27 = { 0.0f, 0.0f, 0.0f };
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_278(&cVar35, Local_103);
				bVar30 = CREATE_ACTOR_IN_LAYOUT(bLocal_130, &cVar35, 529, vVar0, vVar15);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar30);
				GIVE_WEAPON_TO_ACTOR(bVar30, 18, 0, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bVar30, 18, 1);
				SQUAD_JOIN(bVar30, bLocal_170);
				Function_278(&cVar35, Local_103);
				bVar31 = CREATE_ACTOR_IN_LAYOUT(bLocal_130, &cVar35, 530, vVar3, vVar18);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar31);
				GIVE_WEAPON_TO_ACTOR(bVar31, 17, 0, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bVar31, 17, 1);
				SQUAD_JOIN(bVar31, bLocal_170);
				Function_278(&cVar35, Local_103);
				bVar32 = CREATE_ACTOR_IN_LAYOUT(bLocal_130, &cVar35, 531, vVar6, vVar21);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar32);
				GIVE_WEAPON_TO_ACTOR(bVar32, true, 0, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bVar32, true, 1);
				SQUAD_JOIN(bVar32, bLocal_170);
				Function_278(&cVar35, Local_103);
				bVar33 = CREATE_ACTOR_IN_LAYOUT(bLocal_130, &cVar35, 532, vVar9, vVar24);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar33);
				GIVE_WEAPON_TO_ACTOR(bVar33, 9, 0, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bVar33, 9, 1);
				SQUAD_JOIN(bVar33, bLocal_170);
				Function_278(&cVar35, Local_103);
				bVar34 = CREATE_ACTOR_IN_LAYOUT(bLocal_130, &cVar35, 521, vVar12, vVar27);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar33);
				GIVE_WEAPON_TO_ACTOR(bVar33, 9, 0, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bVar33, 9, 1);
				SQUAD_JOIN(bVar34, bLocal_170);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
			bVar39 = SQUAD_GET_SIZE(bLocal_170);
			PRINTSTRING("ENEMY SQUAD CONTAINS: ");
			PRINTINT(bVar39);
			PRINTNL();
			Local_103.f_8 = 6;
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_170) < 2)
			{
				if (Function_109(2, 1, 0x3f800000))
				{
					Local_103.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_103.f_8 = 0;
			Local_103.f_4 = 2;
			break;
	}
	return;
}

void Function_288() //Position: 0x8615 / 34325
{
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_343(&Local_103))
			{
				Function_339();
				Function_332(&uLocal_183, 0);
				Local_103.f_100 = "FTR_SONG_01";
				Local_103.f_8 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_325())
			{
				Local_103.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			bLocal_130 = CREATE_LAYOUT(Function_324(Local_103));
			Function_322(&Local_103, bLocal_130);
			bLocal_178 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "ndefendVol", 3, -3867.6f, 8.978495f, 4312.143f, 0.0f, 20.0f, 0.0f, 40.30419f, 22.63155f, 40.30419f);
			Function_321();
			Function_319();
			Local_328 = { -3860.478f, 8.512f, 4298.022f };
			*(&Local_328 + 12) = { 0.0f, 159.204f, 0.0f };
			Function_310(bLocal_130, &uLocal_183, 1, 1);
			Function_304();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_302(bLocal_130, Local_103);
			Function_293(Local_103, bLocal_130);
			Local_103.f_8 = 106;
			break;
		
		case 0x0000006A:
			Function_289(&Local_103);
			break;
	}
	return;
}

void Function_289(var uParam0) //Position: 0x8738 / 34616
{
	uParam0->f_8 = 0;
	if (uParam0->f_16 != 0)
	{
		uParam0->f_4 = uParam0->f_16;
		Function_291(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	else
	{
		uParam0->f_4 = 1;
		Function_291(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
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
			Function_290();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_290() //Position: 0x881A / 34842
{
	bLocal_92 = true;
	return;
}

void Function_291(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0x8823 / 34851
{
	if (iParam0 == Global_30668[2])
	{
		Function_292(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_292(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_292(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_292(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_292(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_292(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_292(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_292(7);
	}
}

void Function_292(int iParam0) //Position: 0x88B8 / 35000
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

void Function_293(int iParam0, bool bParam1) //Position: 0x894D / 35149
{
	Function_101(&(Global_29008[iParam0]), 16);
	Function_101(&(Global_29008[iParam0]), 64);
	Function_101(&(Global_29008[iParam0]), 4);
	Function_71(64);
	Function_298(2, 4294967295, 4294967295, 0, 3);
	Function_294(StackVal, 0, 0.0f, 3, bParam1, 1);
	return;
}

void Function_294(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x8995 / 35221
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
		Function_297();
	}
	if (bParam5)
	{
		Function_295(1048576);
	}
}

void Function_295(int iParam0) //Position: 0x8AA8 / 35496
{
	Function_296(&Global_28842, iParam0);
	return;
}

void Function_296(var uParam0, var uParam1) //Position: 0x8AB6 / 35510
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_297() //Position: 0x8AD1 / 35537
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_295(16384);
	}
	return;
}

void Function_298(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x8AED / 35565
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
		Function_299();
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

void Function_299() //Position: 0x8BD1 / 35793
{
	int iVar0;
	
	Global_26960 = Function_300(StackVal);
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

int Function_300(int iParam0) //Position: 0x8C1F / 35871
{
	if (!Function_301(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_301(int iParam0) //Position: 0x8C37 / 35895
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_302(bool bParam0, bool bParam1) //Position: 0x8C4C / 35916
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
		Function_303(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_30())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_303(var uParam0, var uParam1) //Position: 0x8D46 / 36166
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &uParam1);
	return;
}

void Function_304() //Position: 0x8D53 / 36179
{
	bLocal_170 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_130, "enemySquad"));
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(StackVal, bLocal_170, false, 4294967295);
	Function_309(0, Global_78576);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_170, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_170, 690824);
	Function_305(&bLocal_170);
	return;
}

void Function_305(int iParam0) //Position: 0x8DA2 / 36258
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < 15)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
				{
					Function_308(*iParam0, GET_SLOT_ACTOR(bVar0));
					Function_307(*iParam0, GET_SLOT_ACTOR(bVar0), 0);
					Function_306(*iParam0, GET_SLOT_ACTOR(bVar0), 4);
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

void Function_306(bool bParam0, bool bParam1, int iParam2) //Position: 0x8E38 / 36408
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
			MEMORY_CONSIDER_AS(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_307(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8E7D / 36477
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

void Function_308(bool bParam0, bool bParam1) //Position: 0x8EE8 / 36584
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

void Function_309(bool bParam0, int iParam1) //Position: 0x8F3A / 36666
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6[20];
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = GET_ACTORSET_SIZE(iParam1);
		if (iVar0 >= 20)
		{
			iVar0 = 20;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			iVar6[iVar2] = iVar2;
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			iVar4 = RAND_INT_RANGE(0, (iVar0 - 1));
			iVar5 = iVar6[iVar4];
			iVar6[iVar4] = iVar6[iVar2];
			iVar6[iVar2] = iVar5;
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			bVar3 = iVar6[iVar2];
			bVar1 = GET_ACTOR_FROM_ACTORSET(iParam1, bVar3);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					TASK_KILL_CHAR(bParam0, bVar1);
					MEMORY_CONSIDER_AS_ENEMY(bParam0, bVar1);
				}
			}
			iVar2++;
		}
	}
	return;
}

int Function_310(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x8FFC / 36860
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_318()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_238()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_238(), bParam0, 17, 0);
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
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_317(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_316(bVar14);
				vVar7 = { StackVal, StackVal, Function_316(bVar14) };
				uVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2.5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2.5f, "");
				Function_315(bVar14);
				vVar10 = { StackVal, StackVal, Function_315(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_313(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_312());
							if (Function_264(bVar5))
							{
								if (Function_263((*iParam1 + 228)[bVar52]))
								{
									Function_244(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, uVar3, iVar4);
									Function_239(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_244(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, uVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_311(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_244(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, uVar3, iVar4);
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

var Function_311() //Position: 0x9230 / 37424
{
	return "XPBonus";
}

var Function_312() //Position: 0x9240 / 37440
{
	return "ID";
}

bool Function_313(bool bParam0, int iParam1) //Position: 0x924B / 37451
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_80((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_314())
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

bool Function_314() //Position: 0x92A0 / 37536
{
	return Function_40(Global_79962, 1024);
}

vector3 Function_315(bool bParam0) //Position: 0x92B0 / 37552
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

vector3 Function_316(bool bParam0) //Position: 0x92D7 / 37591
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

var Function_317() //Position: 0x92FE / 37630
{
	return "Type";
}

var Function_318() //Position: 0x930B / 37643
{
	return "PickupFlagsSet";
}

void Function_319() //Position: 0x9322 / 37666
{
	bLocal_325 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", bLocal_130, 8, 0);
	bLocal_326 = CREATE_POINT_IN_LAYOUT(bLocal_130, "f_Ammo_Pickup", -3877.965f, 7.041022f, 4306.995f, 0.0f, -50.26436f, 0.0f);
	Function_320(bLocal_326, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bLocal_326, bLocal_325);
	bLocal_327 = CREATE_POINT_IN_LAYOUT(bLocal_130, "f_Ammo_Pickup1", -3861.16f, 6.926422f, 4318.682f, 0.0f, 6.820707f, 0.0f);
	Function_320(bLocal_327, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bLocal_327, bLocal_325);
	return;
}

void Function_320(bool bParam0, bool bParam1, bool bParam2) //Position: 0x93C9 / 37833
{
	DECOR_SET_INT(iParam0, Function_317(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_312(), bParam2);
	}
	return;
}

void Function_321() //Position: 0x93ED / 37869
{
	uLocal_179 = CREATE_VOLUME_SET_IN_LAYOUT(bLocal_130, "SpawnVol_0_set");
	bLocal_180 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "spawnVol_0_sub_0", 2, -3884f, 7.445696f, 4268.0f, 0.0f, 31.27844f, 0.0f, 5.0f, 5.0f, 5.0f);
	ADD_TO_VOLUME_SET(uLocal_179, bLocal_180);
	bLocal_181 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "spawnVol_0_sub_1", 2, -3820f, 10.46419f, 4308.0f, 0.0f, -83.67551f, 0.0f, 5.0f, 5.0f, 5.0f);
	ADD_TO_VOLUME_SET(uLocal_179, bLocal_181);
	bLocal_182 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "spawnVol_0_sub_2", 2, -3852f, 9.035305f, 4360.0f, 0.0f, 193.6955f, 0.0f, 5.0f, 5.0f, 5.0f);
	ADD_TO_VOLUME_SET(uLocal_179, bLocal_182);
	return;
}

void Function_322(var uParam0, bool bParam1) //Position: 0x94BC / 38076
{
	Function_323(bParam1);
	PLAYSTAT_MP_DEED_START(GET_SHORT_SCRIPT_NAME());
	UNK_0x5C4CAE3A(bParam1);
	iLocal_19 = CREATE_ACTORSET_IN_LAYOUT(bParam1, "currentPopulation", 1);
	bLocal_42 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bLocal_42, 15);
	ITERATE_IN_LAYOUT(bLocal_42, bParam1);
	START_OBJECT_ITERATOR(bLocal_42);
	Global_78480.f_24 = *uParam0;
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_280(uParam0, 1);
	}
	Function_42(256);
	Function_108(64);
	Function_74(0);
	return;
}

void Function_323(int iParam0) //Position: 0x952D / 38189
{
	Global_83591.f_140 = iParam0;
	return;
}

var Function_324(int iParam0) //Position: 0x953B / 38203
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

bool Function_325() //Position: 0x9673 / 38515
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_326(&uLocal_132))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_326(int iParam0) //Position: 0x968C / 38540
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_331();
	iVar1 = 0;
	if (!Function_87(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_330(iParam0[iVar03], 8);
		}
		else if (Function_329())
		{
			iVar1 = 1;
			Function_330(iParam0[iVar03], 8);
		}
		Function_330(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_87(iParam0[iVar03], 4))
		{
			if (!Function_87(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_87(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_87(iParam0[03], 8) || iVar1));
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
				Function_330(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_87(iParam0[iVar03], 4))
		{
			if (!Function_87(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_330(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_330(iParam0[iVar03], 2);
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
							Function_330(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_330(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_330(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_330(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_330(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_330(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_330(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_330(iParam0[iVar03], 2);
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
	Function_327();
	return 1;
}

void Function_327() //Position: 0x9A07 / 39431
{
	if (!Function_328(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_328(int iParam0) //Position: 0x9A47 / 39495
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_329() //Position: 0x9A63 / 39523
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

void Function_330(var uParam0, int iParam1) //Position: 0x9A8E / 39566
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_331() //Position: 0x9A9F / 39583
{
	if (!Function_328(128))
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

void Function_332(int iParam0, bool bParam1) //Position: 0x9AE1 / 39649
{
	Function_336(iParam0);
	Function_336(iParam0 + 228);
	if (bParam1)
	{
		Function_333(iParam0);
	}
	return;
}

void Function_333(int iParam0) //Position: 0x9AFD / 39677
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_334(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_334(var uParam0, int iParam1) //Position: 0x9B1D / 39709
{
	Function_335(uParam0, iParam1, 0);
	return;
}

void Function_335(int iParam0, int iParam1, int iParam2) //Position: 0x9B2B / 39723
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_336(int iParam0) //Position: 0x9B3C / 39740
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_338(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_337(iParam0, 0.0f);
	return;
}

void Function_337(var uParam0, int iParam1) //Position: 0x9B69 / 39785
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_338(var uParam0) //Position: 0x9B75 / 39797
{
	Function_267(uParam0, 4294967295, 0, 1);
	return;
}

void Function_339() //Position: 0x9B83 / 39811
{
	Function_341(&uLocal_132, "mp_action_areas", 10, 0);
	Function_340(&uLocal_132, 516, 2, 1);
	Function_340(&uLocal_132, 517, 2, 1);
	Function_340(&uLocal_132, 518, 2, 1);
	Function_340(&uLocal_132, 521, 2, 1);
	Function_340(&uLocal_132, 522, 2, 1);
	Function_340(&uLocal_132, 523, 2, 1);
	Function_340(&uLocal_132, 524, 2, 1);
	Function_340(&uLocal_132, 529, 2, 1);
	Function_340(&uLocal_132, 530, 2, 1);
	Function_340(&uLocal_132, 531, 2, 1);
	Function_340(&uLocal_132, 532, 2, 1);
	return;
}

var Function_340(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x9C1D / 39965
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_87(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_330(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_330(uParam0[iVar03], 8);
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

var Function_341(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9CED / 40173
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_342(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_330(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_342(var uParam0, int iParam1, int iParam2) //Position: 0x9D25 / 40229
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_87(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_330(uParam0[iVar03], 4);
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

bool Function_343(int iParam0) //Position: 0x9DE9 / 40425
{
	switch (iLocal_98)
	{
		case 0x00000000:
			Function_350(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_51, 33);
			bLocal_40 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_41 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_40);
			EVENT_TRAP_STORE_EVENTS(bLocal_41, 1);
			Function_349();
			Function_352(&iLocal_45, 5.0f);
			iLocal_98 = 1;
			break;
		
		case 0x00000001:
			if (Function_348())
			{
				iLocal_98 = 2;
			}
			else if (Function_344(&iLocal_45))
			{
				Function_349();
				Function_353(&iLocal_45, 5.0f);
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

bool Function_344(int iParam0) //Position: 0x9E95 / 40597
{
	if (Function_346(iParam0))
	{
		Function_345(iParam0);
		return 1;
	}
	return 0;
}

void Function_345(int iParam0) //Position: 0x9EAB / 40619
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_346(int iParam0) //Position: 0x9EBF / 40639
{
	if (Function_67(iParam0))
	{
		if (Function_347(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_347(int iParam0) //Position: 0x9EDA / 40666
{
	return -Function_63(iParam0);
}

bool Function_348() //Position: 0x9EE6 / 40678
{
	return iLocal_20;
}

void Function_349() //Position: 0x9EEE / 40686
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_350(bool bParam0) //Position: 0x9F1A / 40730
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 40812);
	return;
}

void Function_351(var uParam0) //Position: 0x9F6C / 40812
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 2);
	Function_61(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, false);
		return;
	}
	Function_62(&iVar7);
	if (Function_121(&Var2))
	{
	}
	bVar8 = Function_112(&iVar7);
	NET_LOG(1, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_120(&Var2, 1);
	Function_54(&Var2);
	return;
}

void Function_352(int iParam0, float fParam1) //Position: 0xA06F / 41071
{
	if (!Function_67(iParam0))
	{
		Function_353(iParam0, fParam1);
	}
	return;
}

void Function_353(int iParam0, float fParam1) //Position: 0xA085 / 41093
{
	Function_354(iParam0, -fParam1);
	return;
}

void Function_354(var uParam0, float fParam1) //Position: 0xA093 / 41107
{
	Function_64();
	Function_355(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_355(var uParam0, int iParam1) //Position: 0xA0A7 / 41127
{
	uParam0->f_4 = iParam1;
	Function_35(uParam0, 1);
	Function_34(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_356(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0xA0C4 / 41156
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_357(uParam4);
		if (0 == iVar0)
		{
			Function_268(uParam0, uParam2, 0, 4294967295, 4294967295);
		}
		else if (1 == iVar0)
		{
			Function_268(uParam0, iParam3, 0, 4294967295, 4294967295);
		}
	}
	else
	{
		Function_268(uParam0, iParam1, 0, 4294967295, 4294967295);
	}
}

int Function_357(float fParam0) //Position: 0xA10A / 41226
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

bool Function_358(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0xA13E / 41278
{
	if (!Function_400())
	{
		return 0;
	}
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (Function_231(38) <= 10 && NET_GET_PLAYMODE() != 0)
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
		Function_395();
	}
	Function_393(3);
	Function_392();
	if (StackVal != 0)
	{
		Function_390(bLocal_41, *uParam1, uParam2, 1);
		Function_389(uParam0, uParam4);
	}
	if (StackVal >= bLocal_43)
	{
		bLocal_43 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_386(uParam0);
	}
	switch (iLocal_17)
	{
		case 0x00000000:
		case 0x00000003:
			Function_371(45176, 44524);
			break;
		
		case 0x00000002:
			Function_371(41901, 41477);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_359(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xA205 / 41477
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_363(bParam1, uParam2, uParam3);
		bVar0 = Function_362(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_360(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_362(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_362(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_362(28, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_138(bParam0));
			bVar1++;
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		}
	}
	return 0;
}

bool Function_360(bool bParam0, bool bParam1, int iParam2) //Position: 0xA2A8 / 41640
{
	var uVar0;
	
	return Function_361(bParam0, bParam1, &uVar0, iParam2);
}

int Function_361(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA2B9 / 41657
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

int Function_362(int iParam0, bool bParam1) //Position: 0xA31E / 41758
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_231(iParam0);
	}
	if (!Function_140(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_363(bool bParam0, int iParam1, char* cParam2) //Position: 0xA38C / 41868
{
	if (bParam0)
	{
		if (Function_130())
		{
			NET_PLAYER_LIST_ADD_ITEM(cParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_364() //Position: 0xA3AD / 41901
{
	if (!Function_365(1))
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

bool Function_365(bool bParam0) //Position: 0xA469 / 42089
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_130() || Function_370(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_368(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_130())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_366(Function_130());
	return 1;
}

void Function_366(bool bParam0) //Position: 0xA4EA / 42218
{
	if (bParam0 || Function_39(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_39(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_39(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_39(1048576) || Function_39(4)) || Function_367(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_33(0x20000000, 0, 1);
	}
	return;
}

var Function_367(int iParam0, bool bParam1) //Position: 0xA573 / 42355
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_368(var uParam0) //Position: 0xA593 / 42387
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_369(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_369(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xA5A7 / 42407
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

int Function_370(bool bParam0, bool bParam1) //Position: 0xA5EC / 42476
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

void Function_371(int iParam0, int iParam1) //Position: 0xA620 / 42528
{
	Function_372(iParam0, iParam1, 44517);
	return;
}

void Function_372(var uParam0, var uParam1, int iParam2) //Position: 0xA631 / 42545
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
	if (Function_130())
	{
		Function_146(!Function_39(16));
	}
	if (Function_39(16))
	{
		Function_374(&uParam0, &uParam1, &iParam2);
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
			Function_373();
		}
		Function_33(16384, 1, 1);
	}
	else if (!Function_39(32))
	{
		Function_373();
	}
	Function_33(32768, 0, 1);
	return;
}

void Function_373() //Position: 0xA7CA / 42954
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

void Function_374(var uParam0, var uParam1, int iParam2) //Position: 0xA8D3 / 43219
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
			if (!Function_140(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_375(bVar1, 2048, 1))
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
				if (Function_360(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_360(bVar1, (4294966296 - bVar1), 1))
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

bool Function_375(bool bParam0, int iParam1, bool bParam2) //Position: 0xAA4B / 43595
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_367(iParam1, bParam2);
	}
	if (!Function_140(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_376(iParam1), 64);
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

var Function_376(int iParam0) //Position: 0xAACC / 43724
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

int Function_377() //Position: 0xADE5 / 44517
{
	return 1;
}

int Function_378(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0xADEC / 44524
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* cVar7[32];
	bool bVar15;
	struct<8> Var16;
	bool bVar24;
	
	Function_363(bParam1, iParam2, cParam3);
	iVar0 = Function_382(bParam0);
	iVar2 = NET_GET_GAMER_POSSE_SIZE(bParam0);
	iVar3 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar4 = (iVar2 < 1 && iVar3 != bParam0);
	if (bLocal_16)
	{
		bVar1 = (iVar2 * 10000000);
		iVar5 = 16;
		if (iVar2 >= 1)
		{
			iVar5 = (16 - iVar3) * 10;
			if (bVar4)
			{
				iVar5++;
			}
		}
		bVar1 = (bVar1 + iVar5 * 10000);
		bVar1 = (bVar1 + Function_18((CEIL(Function_381(1, bParam0)) / 1000), 9999));
	}
	else
	{
		bVar1 = FLOOR(Function_381(8, bParam0));
	}
	if (!bParam1)
	{
		Function_360(bParam0, bVar1, 0);
	}
	iVar6 = 0;
	if (Function_380(1) > 0)
	{
		strcpy(&cVar7, "", 32);
		if (Function_380(1) == Function_382(bParam0))
		{
			if (Function_375(bParam0, 0x8000000, 1))
			{
				strcpy(&cVar7, "<MP_DEFEND> ", 32);
			}
			else
			{
				strcpy(&cVar7, "<SPACE> ", 32);
			}
			if (Function_381(2, bParam0) > 0.0f)
			{
				stradd(&cVar7, "--:--", 32);
			}
			else
			{
				bVar15 = CEIL(Function_381(2, bParam0));
				stradd(&cVar7, I2STR((bVar15 / 60)), 32);
				stradd(&cVar7, ":", 32);
				straddi(&cVar7, ((bVar15 % 60) / 10), 32);
				straddi(&cVar7, ((bVar15 % 60) % 10), 32);
			}
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_379(&iVar6), &cVar7);
	}
	Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(iVar0) };
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_379(&iVar6), UI_GET_STRING(&Var16));
	bVar24 = Function_381(8, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_379(&iVar6), FLOOR(bVar24));
	if (bLocal_16)
	{
		if (bVar4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_379(&iVar6), FLOOR(Function_381(9, bParam0)));
		}
		else
		{
			Function_379(&iVar6);
		}
	}
	if (Function_375(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_379(&iVar6), "<SKULL>");
	}
	return 0;
}

var Function_379(int iParam0) //Position: 0xAFAD / 44973
{
	*iParam0++;
	return (*iParam0 - 1);
}

int Function_380(int iParam0) //Position: 0xAFC0 / 44992
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

float Function_381(int iParam0, bool bParam1) //Position: 0xAFE0 / 45024
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_27(iParam0);
	}
	if (!Function_140(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

int Function_382(bool bParam0) //Position: 0xB049 / 45129
{
	if (!Function_140(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_383();
	}
	return Global_76943[bParam096];
}

var Function_383() //Position: 0xB06E / 45166
{
	return Global_78480;
}

int Function_384() //Position: 0xB078 / 45176
{
	bool bVar0;
	int iVar1;
	
	if (!Function_365(1))
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
	if (Function_380(1) > 0)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_379(&iVar1), "FRD_StakeHolder");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_379(&iVar1), "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(Function_379(&iVar1), "mp_plist_score_alt");
	if (bLocal_16)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_379(&iVar1), "mp_plist_posse");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_379(&iVar1), "mp_plist_mw");
	Function_385();
	bVar0 = iVar1;
	while (bVar0 < 6)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_379(&iVar1), "Common_Null");
		bVar0++;
	}
	return 1;
}

void Function_385() //Position: 0xB19B / 45467
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

void Function_386(int iParam0) //Position: 0xB1D8 / 45528
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
		Function_388(&iLocal_19);
		iLocal_18 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_23)
	{
		if (iLocal_23[iVar1] >= 4294967295)
		{
			iLocal_23[iVar1] = 4294967295;
			Function_387(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_387(int iParam0) //Position: 0xB251 / 45649
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_388(int iParam0) //Position: 0xB27C / 45692
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

void Function_389(var uParam0, bool bParam1) //Position: 0xB2C3 / 45763
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
			if (IS_ACTOR_IN_ACTORSET(iLocal_19, bVar1))
			{
				bVar2 = StackVal;
				if (IS_VOLUME_VALID(bVar2))
				{
					if (!IS_ACTOR_IN_VOLUME(bVar1, bVar2))
					{
						if (!DECOR_CHECK_EXIST(bVar1, "out_of_bounds_time"))
						{
							Function_107(bVar1);
							vVar3 = { StackVal, StackVal, Function_107(bVar1) };
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
							REMOVE_ACTORSET_MEMBER(iLocal_19, bVar1);
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

int Function_390(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xB40E / 46094
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
						if (Function_391(bVar4) == bParam1)
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

int Function_391(bool bParam0) //Position: 0xB4F0 / 46320
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

void Function_392() //Position: 0xB54A / 46410
{
	Function_393(4);
	return;
}

void Function_393(int iParam0) //Position: 0xB554 / 46420
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
			Function_394(iParam0);
		}
	}
	return;
}

void Function_394(var uParam0) //Position: 0xB586 / 46470
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_395() //Position: 0xB595 / 46485
{
	bool bVar0;
	
	if (!iLocal_22)
	{
		bVar0 = Function_41();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(iLocal_19))
			{
				if (Function_397(bVar0, iLocal_19, 1, 0, 0, -1.0f))
				{
					Function_396();
					iLocal_22 = 1;
				}
			}
		}
	}
	return;
}

void Function_396() //Position: 0xB5CA / 46538
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_397(bool bParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xB5E3 / 46563
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(iParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_399(iParam1, 0, 0, 0, 0, 0) < 0)
	{
		return 0;
	}
	if (bLocal_48 > GET_ACTORSET_SIZE(iParam1))
	{
		bLocal_48 = false;
	}
	bVar0 = GET_ACTOR_FROM_ACTORSET(iParam1, bLocal_48);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_398(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
		{
			return 1;
		}
	}
	bLocal_48++;
	return 0;
}

bool Function_398(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xB64C / 46668
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

int Function_399(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xB739 / 46905
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (IS_ACTORSET_VALID(iParam0))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(iParam0) - 1))
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(iParam0, bVar2);
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

bool Function_400() //Position: 0xB7E7 / 47079
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

void Function_401(bool bParam0) //Position: 0xB80A / 47114
{
	if (Function_402(bParam0))
	{
		Function_275(bParam0, NET_ACTOR_GET_SCRIPT_INT(bParam0));
		ADD_ACTOR_STAY_WITHIN_VOLUME(bParam0, bLocal_178);
		SET_ACTOR_FACTION(bParam0, 19);
		TASK_CLEAR(bParam0);
	}
	return;
}

bool Function_402(bool bParam0) //Position: 0xB835 / 47157
{
	bool bVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return 0;
	}
	if (Function_403(bParam0))
	{
		if (!IS_ACTOR_IN_ACTORSET(iLocal_19, bParam0))
		{
			ADD_ACTORSET_MEMBER(iLocal_19, bParam0);
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

bool Function_403(bool bParam0) //Position: 0xB882 / 47234
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

bool Function_404(var uParam0, int iParam1) //Position: 0xB8AF / 47279
{
	if (!Function_28())
	{
		return 0;
	}
	*uParam0 = iParam1;
	if (!Function_405(uParam0))
	{
		return 0;
	}
	return 1;
}

bool Function_405(int iParam0) //Position: 0xB8CF / 47311
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
	if (!Function_422(16, 0))
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
	Function_421(iParam0 + 16 + 8);
	Function_419(iParam0, 48387);
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
	Function_411(2);
	Function_410(1);
	iVar3 = 47747;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 47628);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 47589);
	return 1;
}

void Function_406(var uParam0) //Position: 0xB9E5 / 47589
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &iVar0, 1);
	if (NET_IS_HOST_OF_THIS_SCRIPT() && !iLocal_21)
	{
		if (iVar0 == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
		{
			iLocal_21 = 1;
		}
	}
	return;
}

void Function_407(var uParam0) //Position: 0xBA0C / 47628
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 4);
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

void Function_408(var uParam0) //Position: 0xBA83 / 47747
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 4);
	bVar4 = Var0;
	if (StackVal || (StackVal != STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()) && Var0.f_12 != Global_29006))
	{
		if (IS_SLOT_VALID(bVar4))
		{
			bVar5 = GET_SLOT_ACTOR(bVar4);
			if (IS_ACTORSET_VALID(iLocal_19))
			{
				Function_409(&iLocal_19, &bVar5);
			}
		}
	}
	return;
}

void Function_409(var uParam0, int iParam1) //Position: 0xBAD0 / 47824
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

void Function_410(int iParam0) //Position: 0xBB25 / 47909
{
	Function_43(&Global_83864 + 1252, iParam0);
	return;
}

void Function_411(int iParam0) //Position: 0xBB37 / 47927
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
	Function_176();
	Function_177();
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
	Function_413(0, 0);
	Function_412();
	return;
}

void Function_412() //Position: 0xBBFB / 48123
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_413(bool bParam0, bool bParam1) //Position: 0xBC14 / 48148
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_418(&Global_78480);
	Function_417(&Global_78480);
	uVar0 = Function_231(37);
	Function_415();
	if (!bParam0)
	{
		Function_227(37, uVar0);
	}
	Function_102(18264, 0);
	Function_414();
	return;
}

void Function_414() //Position: 0xBC60 / 48224
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_415() //Position: 0xBC7F / 48255
{
	Function_416(&Global_78480 + 220);
	return;
}

void Function_416(int iParam0) //Position: 0xBC8E / 48270
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

void Function_417(int iParam0) //Position: 0xBCAF / 48303
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

void Function_418(int iParam0) //Position: 0xBCD3 / 48339
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

void Function_419(var uParam0, int iParam1) //Position: 0xBCF7 / 48375
{
	uParam0->f_96 = iParam1;
	return;
}

void Function_420(var uParam0) //Position: 0xBD03 / 48387
{
	uParam0 = uParam0;
	return;
}

void Function_421(int iParam0) //Position: 0xBD0D / 48397
{
	if (!Function_67(iParam0))
	{
		Function_354(iParam0, 0.0f);
	}
	return;
}

bool Function_422(var uParam0, bool bParam1) //Position: 0xBD22 / 48418
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_423("freemodetest");
	while (iVar1 == 2 && !IS_EXITFLAG_SET())
	{
		WAIT(0);
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

int Function_423(char* cParam0) //Position: 0xBDD5 / 48597
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

