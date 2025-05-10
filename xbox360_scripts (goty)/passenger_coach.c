//Decompiled with MagicRDR v1.0
//Function Count : 166
//Statics Count : 384
//Natives Count : 238
//Parameters Count : 51

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	struct<157> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	float fLocal_278 = 0.0f;
	bool bLocal_279 = false;
	bool bLocal_280 = false;
	int iLocal_281 = 0;
	var uLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	bool bLocal_285 = false;
	vector3 vLocal_286 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_289 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_292 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_295 = false;
	bool bLocal_296 = false;
	float fLocal_297 = 0.0f;
	bool bLocal_298 = false;
	bool bLocal_299 = false;
	bool bLocal_300 = false;
	bool bLocal_301 = false;
	vector3 vLocal_302 = { 0.0f, 0.0f, 0.0f };
	int iLocal_305 = 0;
	float fLocal_306 = 0.0f;
	int iLocal_307 = 0;
	bool bLocal_308 = false;
	bool bLocal_309 = false;
	bool bLocal_310 = false;
	int iLocal_311 = 0;
	bool bLocal_312 = false;
	int iLocal_313 = 0;
	bool bLocal_314 = false;
	bool bLocal_315 = false;
	bool bLocal_316 = false;
	float fLocal_317 = 0.0f;
	bool bLocal_318 = false;
	vector3 vLocal_319 = { 0.0f, 0.0f, 0.0f };
	float fLocal_322 = 0.0f;
	var uLocal_323 = 0;
	bool bLocal_324 = false;
	bool bLocal_325 = false;
	bool bLocal_326 = false;
	bool bLocal_327 = false;
	var uLocal_328 = 0;
	bool bLocal_329 = false;
	bool bLocal_330 = false;
	bool bLocal_331 = false;
	int iLocal_332 = 0;
	struct<49> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[16];
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	int iVar11;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_296 = 4294967295;
	bLocal_280 = false;
	Global_3411 = 1;
	iLocal_281 = IS_SWITCH_CAMERA_BUTTON_ENABLED();
	Local_21.f_8 = ScriptParam_0.f_48;
	iLocal_69 = 0;
	if (!SQUAD_IS_VALID(StackVal))
	{
		iLocal_69 = 12;
	}
	Function_164(16);
	if (!Function_163(ScriptParam_0.f_44))
	{
		iLocal_69 = 12;
	}
	iLocal_305 = 1;
	strcpy(&cVar0, "dest_", 16);
	Global_3410 = 1;
	bLocal_318 = CREATE_LAYOUT("passengerCoach");
	bLocal_315 = Function_162(StackVal);
	REFERENCE_ACTOR(bLocal_315);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_315, 0);
	SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(bLocal_315, 1);
	SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(bLocal_315, 1);
	SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_315, 1);
	Function_161(StackVal, 5);
	if (StackVal || StackVal != 2 != 1)
	{
		iLocal_72 = 1;
		vLocal_73 = { StackVal, StackVal, *(&Global_28210 + 24) };
	}
	bLocal_316 = GET_VEHICLE(bLocal_315);
	REFERENCE_ACTOR(bLocal_316);
	bVar7 = false;
	while (bVar7 <= GET_NUM_DRAFTED_ACTORS(bLocal_316))
	{
		REFERENCE_ACTOR(GET_DRAFT_ACTOR(bVar7, bLocal_316));
		bVar7++;
	}
	Global_28842.f_76 = GET_CURRENT_GAME_TIME();
	iVar8 = GET_PLAYER_PADINDEX(Global_34573);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_76 = 250;
		if (((!IS_ACTOR_RIDING_VEHICLE(Global_34573) || Function_160()) && !Global_3391) && !iLocal_69 <= 10)
		{
			if (iLocal_69 > 4)
			{
				SAY_SINGLE_LINE_CONTEXT(bLocal_315, 317, Function_159(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			DECOR_REMOVE(StackVal, "npassenger");
			iLocal_69 = 12;
			bLocal_76 = false;
		}
		if ((!IS_ACTOR_VALID(bLocal_315) && !Global_3391) && !iLocal_69 <= 10)
		{
			DECOR_REMOVE(StackVal, "npassenger");
			iLocal_69 = 12;
		}
		else if ((!IS_ACTOR_ALIVE(bLocal_315) && !Global_3391) && !iLocal_69 <= 10)
		{
			DECOR_REMOVE(StackVal, "npassenger");
			iLocal_69 = 12;
		}
		else if (!GET_ACTOR_IN_VEHICLE_SEAT(bLocal_316, false) != bLocal_315 && !iLocal_69 <= 10)
		{
			DECOR_REMOVE(StackVal, "npassenger");
			iLocal_69 = 12;
		}
		else if (!IS_ACTOR_VALID(bLocal_315))
		{
		}
		if (!IS_ACTOR_VALID(bLocal_316))
		{
		}
		Function_153();
		switch (iLocal_69)
		{
			case 0x00000000:
				if (Function_149(&Local_77, &uLocal_71, &uLocal_282, iLocal_72, 0))
				{
					iLocal_284 = Function_147(&Local_77, iLocal_72, 1);
					if (iLocal_284 >= 0)
					{
						SAY_SINGLE_LINE_CONTEXT(bLocal_315, 313, Function_159(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						iLocal_69 = 1;
						if (!Function_146(Global_76846, 256))
						{
							Function_140(Global_34573, 256, 1, 0);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(bLocal_315, 312, Function_159(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
						bLocal_279 = true;
						if (iLocal_284 == 4294967295)
						{
							Function_138("PASS_COACH_NoDest", 0x41200000, 1, 0, 2, 1, 0);
						}
						else
						{
							Function_138("PASS_COACH_NoMoney", 0x41200000, 1, 0, 2, 1, 0);
						}
						iLocal_69 = 2;
						break;
					}
				}
				else
				{
					bLocal_76 = false;
				}
				break;
			
			case 0x00000001:
				if (!HUD_IS_SHOWING_SMALL_TEXT())
				{
					iLocal_69 = 2;
					bLocal_76 = false;
				}
				break;
			
			case 0x00000002:
				bLocal_280 = true;
				SET_SWITCH_CAMERA_BUTTON_ENABLED(0);
				Function_137(0);
				iLocal_307 = Function_136(&Local_77, Local_77 + 1, bLocal_279);
				Function_134(&Local_77, iLocal_307);
				iLocal_69 = 3;
			
			case 0x00000003:
				Function_125();
				bLocal_76 = false;
				break;
			
			case 0x00000004:
				bLocal_285 = Function_124(Local_77[iLocal_2834]);
				if (!IS_OBJECT_VALID(bLocal_285))
				{
					if (Function_163(Local_77[iLocal_2834]))
					{
						bLocal_285 = GET_OBJECT_FROM_VOLUME(StackVal);
					}
				}
				if (bLocal_280)
				{
					bLocal_280 = false;
					SET_SWITCH_CAMERA_BUTTON_ENABLED(iLocal_281);
				}
				if (iLocal_283 != 0 && iLocal_72)
				{
					Local_77[04] = Function_123(StackVal, StackVal, *(&Global_28210 + 36), 1, 1, 1);
					if (!Function_163(Local_77[04]))
					{
						Local_77[04] = Function_122(StackVal, StackVal, *(&Global_28210 + 36), 1);
					}
				}
				if (Function_163(Local_77[iLocal_2834]))
				{
					stradd(&cVar0, &Global_29155[Local_77[iLocal_2834]10] + 20, 16);
				}
				else
				{
					stradd(&cVar0, "gen", 16);
				}
				FORCE_VEHICLE_CINEMATIC_CAMERA(1);
				SAY_SINGLE_LINE_STRING(Global_34573, &cVar0, true, true, 2, 0, true, false);
				fLocal_317 = GET_CURRENT_GAME_TIME();
				Function_104();
				Function_103();
				Function_98(Function_101(StackVal, Local_77[iLocal_2834]), 1);
				Function_84(StackVal, Function_101(384, Local_77[iLocal_2834]), 0, 0);
				DECOR_SET_INT(StackVal, bLocal_315, Function_101("iAdditionalMoney", Local_77[iLocal_2834]));
				bLocal_324 = ADD_BLIP_FOR_COORD(&vLocal_286, 384, 0f, 2, 0);
				iLocal_69 = 5;
			
			case 0x00000005:
				if (!IS_ANY_SPEECH_PLAYING(Global_34573) || (fLocal_317 + 5.0f) > GET_CURRENT_GAME_TIME())
				{
					if (bLocal_300)
					{
						HUD_FADE_OUT(0.5f, 1f, 1);
						iLocal_69 = 6;
					}
					else
					{
						iLocal_69 = 7;
					}
					SAY_SINGLE_LINE_CONTEXT(bLocal_315, 314, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				break;
			
			case 0x00000006:
				if (HUD_IS_FADED())
				{
					Function_83();
					Function_82(StackVal);
					Function_81(&Local_21);
					Local_21 = 7;
					Function_52(&Local_21, 0, 0, 0);
					HUD_FADE_IN(0.5f, 1065353216);
					iLocal_69 = 7;
				}
				break;
			
			case 0x00000007:
				Function_47();
				if (!iLocal_313)
				{
					if (GET_CURRENT_GAME_TIME() < (fLocal_317 + 5.0f))
					{
						Function_44();
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_310))
					{
						Function_43();
					}
				}
				Function_42();
				if (!IS_ACTOR_VALID(bLocal_315))
				{
					bLocal_312 = true;
				}
				else if (!IS_ACTOR_ALIVE(bLocal_315))
				{
					bLocal_312 = true;
				}
				if (!Function_41(bLocal_316, 1, 1, 4294967295))
				{
					bLocal_312 = true;
				}
				if (bLocal_312)
				{
					TASK_VEHICLE_LEAVE(Global_34573);
					SET_PLAYER_CONTROL(false, 1, 0, 0);
					SAY_SINGLE_LINE_CONTEXT(bLocal_315, 314, Function_159(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					iLocal_69 = 12;
					bLocal_76 = false;
					break;
				}
				bLocal_329 = GET_OBJECTSET_SIZE(bLocal_299);
				if ((StackVal && Function_40(StackVal, StackVal, StackVal, bLocal_329 > 2, vLocal_289, vLocal_286) > 35.0f) || bLocal_329 > 1)
				{
					*(&Local_21 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(StackVal, StackVal, Local_21.f_152, vLocal_286, 2.1f, 0.0f, 1.0f, 2) };
					Function_36(&Local_21 + 24);
					vVar4 = { StackVal, StackVal, Function_36(&Local_21 + 24) };
					Function_81(&Local_21);
					iLocal_69 = 8;
					bLocal_76 = false;
				}
				else if (bLocal_329 <= bLocal_330)
				{
					if (Global_30842[52])
					{
						iVar11 = 0;
						while (iVar11 <= bLocal_329)
						{
							iVar11++;
						}
					}
					bLocal_330 = bLocal_329;
				}
				break;
			
			case 0x00000008:
				if (!HUD_IS_FADED() && !HUD_IS_FADING())
				{
					Global_28842.f_76 = -300.0f;
					iLocal_69 = 9;
					FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				break;
			
			case 0x00000009:
				GET_POSITION(Function_162(StackVal), &vLocal_289);
				if (!iLocal_313)
				{
					if (GET_CURRENT_GAME_TIME() < (fLocal_317 + 5.0f))
					{
						Function_44();
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_310))
					{
						Function_43();
					}
				}
				Function_32();
				if (VDIST(vLocal_286, vLocal_289) > 7.5f || GET_TASK_STATUS(bLocal_315, 61) != 0)
				{
					Function_82(StackVal);
					Function_161(StackVal, 5);
					TASK_CLEAR(Function_162(StackVal));
					TASK_STAND_STILL(Function_162(StackVal), -1.0f, 0, 0);
					SET_PLAYER_CONTROL(false, 0, 0, 0);
					bLocal_76 = 1000;
					iLocal_69 = 10;
				}
				GET_ACTOR_VELOCITY(bLocal_316, &vLocal_319);
				if (fLocal_322 > 1.0f)
				{
					if (VMAG(vLocal_319) > 0.5f)
					{
						fLocal_322 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (VMAG(vLocal_319) < 0.5f)
				{
					fLocal_322 = 0.0f;
				}
				else if (fLocal_322 + 5.0f) > GET_CURRENT_GAME_TIME()
				{
					Function_82(StackVal);
					Function_161(StackVal, 5);
					TASK_CLEAR(Function_162(StackVal));
					TASK_STAND_STILL(Function_162(StackVal), -1.0f, 0, 0);
					SET_PLAYER_CONTROL(false, 0, 0, 0);
					bLocal_76 = 1000;
					iLocal_69 = 10;
				}
				if (!IS_ACTOR_VALID(bLocal_315))
				{
					bLocal_312 = true;
				}
				else if (!IS_ACTOR_ALIVE(bLocal_315))
				{
					bLocal_312 = true;
				}
				if (!Function_41(bLocal_316, 1, 1, 4294967295))
				{
					bLocal_312 = true;
				}
				if (bLocal_312)
				{
					TASK_VEHICLE_LEAVE(Global_34573);
					SET_PLAYER_CONTROL(false, 1, 0, 0);
					SAY_SINGLE_LINE_CONTEXT(bLocal_315, 314, Function_159(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					iLocal_69 = 12;
					bLocal_76 = false;
					break;
				}
				break;
			
			case 0x0000000B:
				if (!IS_ANY_SPEECH_PLAYING(Global_34573) || (fLocal_317 + 5.0f) > GET_CURRENT_GAME_TIME())
				{
					if (Function_16())
					{
						Function_15(TO_FLOAT(StackVal));
						Function_13(ROUND(((TO_FLOAT(StackVal) * 4.0f) / 3600.0f)));
						Function_81(&Local_21);
						SET_PLAYER_CONTROL(false, 1, 0, 0);
						FORCE_VEHICLE_CINEMATIC_CAMERA(1);
						Local_21.f_72 = Function_10(StackVal, Local_21.f_80);
						Function_5(&Local_21, 0);
						if (Function_163(Local_77[iLocal_2834]))
						{
							if (StackVal == 5)
							{
								SAY_SINGLE_LINE_CONTEXT(bLocal_315, 311, Function_159(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
						iLocal_313 = 1;
						Global_3391 = 0;
						iLocal_69 = 8;
						bLocal_76 = 250;
					}
				}
				else
				{
					bLocal_76 = 250;
				}
				break;
			
			case 0x0000000A:
				SAY_SINGLE_LINE_CONTEXT(bLocal_315, 318, Function_159(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_VEHICLE_LEAVE(Global_34573);
				Local_21.f_72 = Function_10(StackVal, Local_21.f_80);
				SET_PLAYER_CONTROL(false, 1, 0, 0);
				DECOR_REMOVE(StackVal, "npassenger");
				iLocal_69 = 12;
				bLocal_76 = false;
				break;
			
			case 0x0000000C:
				if (!IS_ACTOR_RIDING_VEHICLE(Global_34573) || Function_160())
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
		}
		WAIT(bLocal_76);
	}
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	if (!IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_FADE_IN(0.5f, 1065353216);
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_310))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_310);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_309))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_309);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_308))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_308);
	}
	if (IS_BLIP_VALID(bLocal_324))
	{
		REMOVE_BLIP(bLocal_324);
	}
	if (IS_LAYOUTREF_VALID(bLocal_318))
	{
		DESTROY_LAYOUT(bLocal_318);
	}
	Global_3391 = 0;
	Global_3410 = 0;
	if (IS_ACTOR_VALID(bLocal_316))
	{
		bVar7 = false;
		while (bVar7 <= GET_NUM_DRAFTED_ACTORS(bLocal_316))
		{
			DEREFERENCE_ACTOR(GET_DRAFT_ACTOR(bVar7, bLocal_316));
			bVar7++;
		}
		DEREFERENCE_ACTOR(bLocal_316);
	}
	Function_3(bLocal_315, 0.0f, 0.0f, 0.0f, 131120, 0, 2, 1);
	Local_21 = 16;
	SQUAD_LEAVE(bLocal_315);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	RESET_TIME_SINCE_LAST_INPUT(iVar8);
	Function_1(16);
	if (IS_ACTOR_VALID(bLocal_315))
	{
		DEREFERENCE_ACTOR(bLocal_315);
		TASK_CLEAR(bLocal_315);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_315, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_315, 0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_315);
	}
	if (SQUAD_IS_VALID(StackVal))
	{
		DECOR_REMOVE(StackVal, "npassenger");
		Function_82(StackVal);
		SQUAD_GOALS_CLEAR(StackVal);
	}
	if (!bLocal_280)
	{
		SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	}
	Global_3411 = 0;
	if (bLocal_280)
	{
		SET_SWITCH_CAMERA_BUTTON_ENABLED(iLocal_281);
	}
	SATCHEL_SET_ENABLED(1);
	Function_137(1);
	AI_STOP_IGNORING_ACTORS();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xA53 / 2643
{
	Function_2(&Global_28842, iParam0);
	return;
}

void Function_2(var uParam0, bool bParam1) //Position: 0xA61 / 2657
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_3(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0xA84 / 2692
{
	if (!IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam4 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideCurve", bParam4);
	}
	if (!Function_4(StackVal, StackVal, vParam1))
	{
		DECOR_SET_VECTOR(bParam0, "overrideDest", vParam1);
	}
	if (bParam5 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideSpeed", bParam5);
	}
	if (bParam6 != 2)
	{
		DECOR_SET_INT(bParam0, "overridePriority", bParam6);
	}
	else
	{
		TASK_PRIORITY_SET(bParam0, 2);
	}
	if (bParam7)
	{
		DECOR_SET_INT(bParam0, "quickRelease", bParam6);
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Global_28842.f_60))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam0, Global_28842.f_60);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
}

bool Function_4(vector3 vParam0) //Position: 0xB8C / 2956
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_5(int iParam0, bool bParam1) //Position: 0xBA4 / 2980
{
	bool bVar0;
	var uVar1;
	
	if (!Function_9(iParam0))
	{
		Function_6(iParam0, 1);
		return 0;
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		LOG_WARNING("MOVE_IN_FORMATION given invalid squad");
		return 0;
	}
	bVar0 = Function_162(StackVal);
	SQUAD_GOALS_CLEAR(StackVal);
	TASK_CLEAR(bLocal_315);
	AI_CLEAR_NAV_MATERIAL_USAGE(bVar0);
	vLocal_292 = { StackVal, StackVal, vLocal_286 };
	if (!FIND_GROUND_INTERSECTION(&vLocal_292, 99.0f, &vLocal_286, &uVar1))
	{
		vLocal_286 = { StackVal, StackVal, vLocal_292 };
		iLocal_332 = 0;
	}
	TASK_CLEAR(bVar0);
	if (bParam1)
	{
		TASK_GO_NEAR_COORD(bVar0, &vLocal_286, 5.0f, 1);
		iLocal_332 = 1;
	}
	else
	{
		TASK_GO_NEAR_COORD(bVar0, &vLocal_286, 25.0f, 1);
		iLocal_332 = 0;
	}
	bLocal_314 = true;
	return 1;
}

void Function_6(int iParam0, int iParam1) //Position: 0xC6C / 3180
{
	struct<5> Var0;
	char* cVar6[16];
	struct<13> Var10;
	
	if (!Global_30900[1] && iParam1)
	{
		return;
	}
	if (!Function_9(iParam0))
	{
		return;
	}
	strcpy(&cVar6, "TRAFFIC NODE", 16);
	switch (iParam0->f_72)
	{
		case 0x00000005:
			Var10 = 1.0f;
			Var10.f_4 = 0.0f;
			Var10.f_8 = 0.0f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000001:
			Var10 = 0.9f;
			Var10.f_4 = 0.55f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var10 = 0.9f;
			Var10.f_4 = 0.9f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var10 = 0.2f;
			Var10.f_4 = 0.8f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var10 = 0.1f;
			Var10.f_4 = 0.1f;
			Var10.f_8 = 1.0f;
			Var10.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_162(StackVal), &Var0);
	vVar14 = { 0.0f, 1.0f, 0.0f };
	if (Function_8())
	{
		fVar17 = 0.0f;
		if (!Function_7(iParam0, &fVar17, 0))
		{
			if (fVar17 < 0.0f)
			{
				vVar14 = { 1.0f, 1.0f, 0.0f };
			}
			else
			{
				vVar14 = { 0.0f, 0.0f, 1.0f };
			}
		}
	}
	Var0.f_4 = (StackVal + 2.5f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_4 = (StackVal + 0.5f);
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	Function_36(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_36(iParam0 + 24) };
	return;
}

bool Function_7(int iParam0, var uParam1, bool bParam2) //Position: 0xDE5 / 3557
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (StackVal || !SQUAD_IS_VALID(!Function_9(iParam0)))
	{
		*uParam1 = 0.0f;
		return 0;
	}
	bVar2 = true;
	iVar3 = SQUAD_GET_SIZE(StackVal);
	iVar4 = 0;
	bVar1 = false;
	while (bVar1 <= iVar3)
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (!NET_IS_OBJECT_LOCAL(bVar0))
			{
				iVar4++;
				bVar2 = false;
			}
		}
		bVar1++;
	}
	bVar5 = false;
	if (!bParam2)
	{
		bVar1 = false;
		if (IS_OBJECTSET_VALID(iParam0->f_180))
		{
			bVar5 = GET_OBJECTSET_SIZE(iParam0->f_180);
			bVar1 = false;
			while (bVar1 <= bVar5)
			{
				bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, iParam0->f_180));
				if (IS_ACTOR_VALID(bVar0))
				{
					if (!NET_IS_OBJECT_LOCAL(bVar0))
					{
						iVar4++;
						bVar2 = false;
					}
				}
				bVar1++;
			}
		}
	}
	if (bVar2)
	{
		*uParam1 = 1.0f;
	}
	else if (iVar4 <= (iVar3 + bVar5))
	{
		*uParam1 = 0.5f;
	}
	else
	{
		*uParam1 = 0.0f;
	}
	return bVar2;
}

bool Function_8() //Position: 0xECB / 3787
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_9(int iParam0) //Position: 0xED4 / 3796
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int Function_10(bool bParam0, int iParam1) //Position: 0xEE4 / 3812
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_11())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		switch (bParam0)
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
	switch (bParam0)
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

bool Function_11() //Position: 0xFD0 / 4048
{
	if (Function_12(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_12(var uParam0, int iParam1) //Position: 0xFEB / 4075
{
	return (uParam0 && iParam1) == 0;
}

void Function_13(bool bParam0) //Position: 0xFF8 / 4088
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
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTNL();
			PRINTSTRING("CUR time of day delay: ");
			Function_14(Global_16876[iVar06]);
		}
		if (GET_DAY(Global_16876[iVar06]) == 0)
		{
			iVar2 = 1;
		}
		ADD_TIME(&(Global_16876[iVar06]), iVar2, bParam0, false, 0);
		Global_17483[iVar075].f_264 = Global_16876[iVar06];
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTSTRING("NEW time of day delay: ");
			Function_14(Global_16876[iVar06]);
		}
		iVar0++;
	}
	return;
}

void Function_14(bool bParam0) //Position: 0x10B8 / 4280
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

void Function_15(float fParam0) //Position: 0x10FE / 4350
{
	FEED_CODE_WARP_DIST(fParam0);
	ADVANCE_TIME_HOURS(((fParam0 * 4.0f) / 3600.0f));
	return;
}

bool Function_16() //Position: 0x1116 / 4374
{
	vector3 vVar0;
	bool bVar3;
	struct<6> Var9;
	struct<6> Var15;
	struct<6> Var21;
	struct<6> Var27;
	struct<6> Var33;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	bool bVar43;
	int iVar44;
	
	switch (iLocal_70)
	{
		case 0x00000000:
			UNK_0xEF270DC9();
			AI_IGNORE_ACTOR(Global_34573);
			Global_28842.f_76 = -300.0f;
			iLocal_70 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				Function_29(0, 0x40400000);
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				iLocal_70 = 2;
			}
			break;
		
		case 0x00000002:
			STREAMING_EVICT_ALL();
			fLocal_278 = GET_CURRENT_GAME_TIME();
			if (GET_OBJECTSET_SIZE(bLocal_299) >= 1)
			{
				TASK_CLEAR(bLocal_315);
				SQUAD_GOALS_CLEAR(StackVal);
				if (bLocal_325)
				{
					Local_21.f_152 = bLocal_326;
				}
				else
				{
					Local_21.f_152 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_299));
				}
				Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(StackVal, StackVal, Local_21.f_152, vLocal_286, 2.1f, 0.0f, 1.0f, 2) };
				Function_36(&Var9);
				vLocal_292 = { StackVal, StackVal, Function_36(&Var9) };
				if (bLocal_325)
				{
					bVar43 = bLocal_327;
				}
				else
				{
					bVar43 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, bLocal_299));
				}
				GET_CURVE_POINT(Local_21.f_152, 1.0f, &Var15, 0);
				GET_CURVE_POINT(Local_21.f_152, 0.0f, &Var21, 0);
				GET_CURVE_POINT(bVar43, 1.0f, &Var27, 0);
				GET_CURVE_POINT(bVar43, 1.0f, &Var33, 0);
				fVar39 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var27);
				fVar40 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var33);
				fVar41 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var21, Var27);
				fVar42 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var21, Var33);
				if ((fVar39 > fVar41 && fVar39 > fVar42) || (fVar40 > fVar41 && fVar40 > fVar42))
				{
					Local_21.f_148 = 4294967295;
					UNK_0x19D652F9(Local_21.f_152, 20.0f, &Var9, &bVar3);
				}
				else
				{
					Local_21.f_148 = 1;
					UNK_0x19D652F9(Local_21.f_152, -20.0f, &Var9, &bVar3);
				}
				Function_36(&bVar3);
				vVar0 = { StackVal, StackVal, Function_36(&bVar3) };
				Function_27(StackVal, StackVal, StackVal, StackVal, vVar0, vLocal_286);
				vLocal_292 = { StackVal, StackVal, Function_27(StackVal, StackVal, StackVal, StackVal, vVar0, vLocal_286) };
				bLocal_295 = UNK_0x9C40E671(&vLocal_292);
			}
			else
			{
				vVar0 = { StackVal, StackVal, vLocal_286 };
				bLocal_295 = GET_OBJECT_HEADING(bLocal_285);
			}
			iVar44 = Function_123(StackVal, StackVal, vVar0, 0, 1, 1);
			if (iVar44 != Local_77[iLocal_2834])
			{
				Local_77[iLocal_2834] = iVar44;
			}
			if (Function_4(StackVal, StackVal, vVar0))
			{
				SAY_SINGLE_LINE_CONTEXT(bLocal_315, 311, Function_159(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				iLocal_70 = 7;
				return 1;
			}
			Function_26(StackVal, StackVal, Global_34573, vVar0, bLocal_295, 1, 1, 1);
			Global_3391 = 1;
			Global_3386 = 0;
			Function_22(1, 0, 1);
			Function_20();
			iLocal_70 = 3;
			fLocal_306 = GET_CURRENT_GAME_TIME();
		
		case 0x00000003:
			if (fLocal_278 + 1.0f) > GET_CURRENT_GAME_TIME()
			{
				CAMERA_RESET(0);
				Function_19();
				iLocal_70 = 4;
			}
			break;
		
		case 0x00000004:
			if (STREAMING_IS_WORLD_LOADED() && ((Function_17(Local_77[iLocal_2834]) || !Function_163(Local_77[iLocal_2834])) || (iLocal_72 && iLocal_283 != 0)))
			{
				iLocal_70 = 6;
			}
			else if (fLocal_306 + 50.0f) > GET_CURRENT_GAME_TIME()
			{
				iLocal_70 = 6;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED() && Function_17(Local_77[iLocal_2834]))
			{
				AI_STOP_IGNORING_ACTORS();
				iLocal_70 = 7;
				return 1;
			}
			if (fLocal_306 + 30.0f) > GET_CURRENT_GAME_TIME()
			{
				AI_STOP_IGNORING_ACTORS();
				iLocal_70 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

int Function_17(int iParam0) //Position: 0x13D8 / 5080
{
	if (!Function_163(iParam0))
	{
		return 1;
	}
	return Function_18(&(Global_29008[iParam0]), 4);
}

bool Function_18(int iParam0, int iParam1) //Position: 0x13F4 / 5108
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_19() //Position: 0x1410 / 5136
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_164(16384);
	}
	return;
}

void Function_20() //Position: 0x142C / 5164
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_21(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x1456 / 5206
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_22(var uParam0, bool bParam1, int iParam2) //Position: 0x146D / 5229
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
		if (Function_163(Global_29006))
		{
			Function_25(&(Global_29008[Global_29006]), 131072);
			Function_21(&(Global_29008[Global_29006]), 2097152);
			Function_23(Global_29006);
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
				if (Function_18(&(Global_29008[iVar0]), 4) || Function_18(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_21(&(Global_29008[iVar0]), 2097155);
					Function_25(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_8())
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

void Function_23(int iParam0) //Position: 0x1578 / 5496
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_24())
			{
				return;
			}
		}
		if (!Function_18(&(Global_29008[iParam0]), 2048))
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

bool Function_24() //Position: 0x15F7 / 5623
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_18(&(Global_29008[iVar0]), 4) || Function_18(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_25(var uParam0, bool bParam1) //Position: 0x1660 / 5728
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

void Function_26(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x166F / 5743
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, iParam6, iParam7);
			if (!IS_ACTOR_RIDING(bParam0))
			{
				ACTOR_MOUNT_ACTOR(bParam0, bVar0);
			}
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, iParam6, iParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, bParam4, iParam5, iParam6, iParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

vector3 Function_27(vector3 vParam0, vector3 vParam3) //Position: 0x1728 / 5928
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	return StackVal, StackVal, vVar0;
}

float Function_28(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x1746 / 5958
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_36(&bParam0);
	vVar0 = { StackVal, StackVal, Function_36(&bParam0) };
	Function_36(&bParam6);
	vVar3 = { StackVal, StackVal, Function_36(&bParam6) };
	return VDIST(vVar0, vVar3);
}

void Function_29(bool bParam0, float fParam1) //Position: 0x176B / 5995
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
		{
			TASK_CLEAR(Global_12976.f_36);
		}
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, 1);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_31();
	Function_30();
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(Global_34573, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + fParam1));
	return;
}

void Function_30() //Position: 0x1869 / 6249
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_31() //Position: 0x189B / 6299
{
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"));
		DECOR_REMOVE(Global_34573, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(Global_34573, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistlePosProbed"))
	{
		DECOR_REMOVE(Global_34573, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	return;
}

var Function_32() //Position: 0x1998 / 6552
{
	vector3 vVar0;
	var uVar3;
	var uVar6;
	
	bLocal_76 = 500;
	if (!bLocal_314 || !iLocal_332)
	{
		if (Function_33(&Local_21))
		{
			vVar0 = { StackVal, StackVal, vLocal_286 };
			vVar0.f_4 = (vVar0.y + 20.0f);
			if (FIND_GROUND_INTERSECTION(&vVar0, 99.9f, &uVar3, &uVar6))
			{
				vLocal_286 = { StackVal, StackVal, vVar0 };
				Function_5(&Local_21, 1);
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			}
			else if (!bLocal_314)
			{
				Function_5(&Local_21, 0);
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			}
		}
	}
	return bLocal_76;
}

bool Function_33(int iParam0) //Position: 0x1A0A / 6666
{
	var uVar0;
	vector3 vVar3;
	
	GET_OBJECT_POSITION(bLocal_316, &uVar0);
	Function_36(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_36(iParam0 + 24) };
	if (iParam0->f_156 > 1.0f)
	{
		iParam0->f_156 = Function_35(iParam0->f_72, 2);
	}
	Function_36(iParam0 + 24);
	if (VDIST(Function_36(iParam0 + 24), Global_34574) > Function_34(iParam0->f_156, Function_35(iParam0->f_72, 2)))
	{
		return 1;
	}
	return 0;
}

float Function_34(bool bParam0, int iParam1) //Position: 0x1A5E / 6750
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_35(bool bParam0, int iParam1) //Position: 0x1A71 / 6769
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
			switch (bParam0)
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
			switch (bParam0)
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

vector3 Function_36(bool bParam0) //Position: 0x1B82 / 7042
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_37(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, int iParam7) //Position: 0x1BA1 / 7073
{
	bool bVar0;
	struct<13> Var1;
	float fVar19;
	bool bVar20;
	bool bVar21;
	
	if (!fParam6 <= fParam5)
	{
		fVar19 = fParam6;
		fParam6 = fParam5;
		fParam5 = fVar19;
	}
	GET_CURVE_POINT(bParam0, fParam5, &Var1, 0);
	Function_36(&Var1);
	bVar20 = VDIST(Function_36(&Var1), vParam1);
	Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
	while (Var1.f_12 >= fParam6 && !bVar0)
	{
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		UNK_0x19D652F9(bParam0, FABS(bParam4), &Var7, &Var1);
		Function_36(&Var1);
		bVar21 = VDIST(Function_36(&Var1), vParam1);
		if (bVar21 > bVar20)
		{
			bVar20 = bVar21;
			Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		}
		if (Function_39(&Var1))
		{
			bVar0 = true;
		}
	}
	if (iParam7 < 1 && bParam4 < 1.0f)
	{
		UNK_0x19D652F9(bParam0, (bParam4 / 2.0f), &Var13, &Var1);
		UNK_0x19D652F9(bParam0, (-1.0f * (bParam4 / 2.0f)), &Var13, &Var7);
		return StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(StackVal, StackVal, bParam0, vParam1, (bParam4 / 10.0f), Function_34(Var7.f_12, Var1.f_12), Function_38(Var7.f_12, Var1.f_12), (iParam7 - 1));
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var13;
}

var Function_38(int iParam0, int iParam1) //Position: 0x1C8F / 7311
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_39(bool bParam0) //Position: 0x1CA2 / 7330
{
	if (bParam0->f_12 > 0.001f || bParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

float Function_40(vector3 vParam0, vector3 vParam3) //Position: 0x1CC3 / 7363
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_41(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1CE0 / 7392
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(bParam0) <= 1)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(bParam0) <= iParam1)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(bParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 2)
			{
				if (bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 3)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= iParam3)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	return 1;
}

void Function_42() //Position: 0x1D99 / 7577
{
	if (iLocal_296 != 4294967295)
	{
		if (!IS_ANY_SPEECH_PLAYING(Global_34573))
		{
			SAY_SINGLE_LINE_CONTEXT(bLocal_315, iLocal_296, Global_34573, 0, 1, 0, 4294967295, 4294967295, 0, 1);
			bLocal_296 = 4294967295;
		}
	}
	return;
}

void Function_43() //Position: 0x1DC7 / 7623
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_310))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_310))
		{
			iLocal_69 = 11;
			SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_COACH_SLEEP", true, true, 2, 0, true, false);
			fLocal_317 = GET_CURRENT_GAME_TIME();
			SET_PLAYER_CONTROL(false, 0, 0, 0);
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_310))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_310);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_309))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_309);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_308))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_308);
			}
			SATCHEL_SET_ENABLED(0);
			bLocal_76 = false;
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_308))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_308))
		{
			switch (Local_21.f_72)
			{
				case 0x00000003:
				case 0x00000004:
					Local_21.f_72 = 2;
					iLocal_305 = 2;
					PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
					if (!IS_ANY_SPEECH_PLAYING(Global_34573) && !IS_ANY_SPEECH_PLAYING(bLocal_315))
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_COACH_STOP", true, true, 2, 0, true, false);
						bLocal_296 = 315;
					}
					break;
				
				case 0x00000002:
					Local_21.f_72 = 1;
					iLocal_305 = 1;
					PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
					if (!IS_ANY_SPEECH_PLAYING(Global_34573) && !IS_ANY_SPEECH_PLAYING(bLocal_315))
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_COACH_STOP_URGENT", true, true, 2, 0, true, false);
						bLocal_296 = 315;
					}
					break;
				
				default:
					break;
			}
			iLocal_311 = 1;
			Function_161(StackVal, Local_21.f_72);
			Function_103();
			Function_44();
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_309))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_309))
		{
			switch (Local_21.f_72)
			{
				case 0x00000001:
					Local_21.f_72 = 2;
					iLocal_305 = 2;
					PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
					if (!IS_ANY_SPEECH_PLAYING(Global_34573) && !IS_ANY_SPEECH_PLAYING(bLocal_315))
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_COACH_SPEED_UP", true, true, 2, 0, true, false);
						bLocal_296 = 315;
					}
					break;
				
				case 0x00000002:
				case 0x00000004:
					Local_21.f_72 = 4;
					iLocal_305 = 4;
					PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
					if (!IS_ANY_SPEECH_PLAYING(Global_34573) && !IS_ANY_SPEECH_PLAYING(bLocal_315))
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_COACH_SPEED_UP_URGENT", true, true, 2, 0, true, false);
						bLocal_296 = 316;
					}
					break;
				
				default:
					break;
			}
			iLocal_311 = 1;
			Function_161(StackVal, Local_21.f_72);
			Function_103();
			Function_44();
		}
	}
	return;
}

void Function_44() //Position: 0x2065 / 8293
{
	if ((!Global_3386 && !IS_SCRIPT_USE_CONTEXT_VALID(bLocal_308)) && !IS_SCRIPT_USE_CONTEXT_VALID(bLocal_309))
	{
		Function_103();
	}
	if (!Global_3386 || (Global_29007 == 3 && Global_29007 == 4))
	{
		if (((!Local_21.f_72 != 4 && !Local_21.f_72 != 3) && !IS_SCRIPT_USE_CONTEXT_VALID(bLocal_309)) && !bLocal_331)
		{
			bLocal_309 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_Faster", 10, 2, 0, 0, 0, 0, 4294967295, 0);
		}
		if (!Local_21.f_72 != 1 && !IS_SCRIPT_USE_CONTEXT_VALID(bLocal_308))
		{
			bLocal_308 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_Slower", 10, 3, 0, 0, 0, 0, 4294967295, 0);
		}
		Function_46(StackVal, 1);
	}
	else
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_308))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_308);
		}
		if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_309))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_309);
		}
		Function_46(StackVal, 0);
	}
	if (StackVal && Function_40(StackVal, StackVal, StackVal, !IS_SCRIPT_USE_CONTEXT_VALID(bLocal_310), Global_34574, vLocal_286) < 50.0f)
	{
		bLocal_310 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", 10, 6, Function_45(), Function_45(), Function_45(), Function_45(), 4294967295, "HUD_MENU_SELECT_MASTER");
	}
	else if (StackVal && Function_40(StackVal, StackVal, StackVal, IS_SCRIPT_USE_CONTEXT_VALID(bLocal_310), Global_34574, vLocal_286) >= 50.0f)
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_310);
	}
	return;
}

var Function_45() //Position: 0x21CB / 8651
{
	int iVar0;
	
	return iVar0;
}

void Function_46(bool bParam0, int iParam1) //Position: 0x21D3 / 8659
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

var Function_47() //Position: 0x21FB / 8699
{
	struct<5> Var0;
	struct<6> Var5;
	struct<6> Var11;
	
	bLocal_76 = 500;
	GET_OBJECT_POSITION(Function_162(StackVal), &vLocal_289);
	bVar3 = GET_OBJECTSET_SIZE(bLocal_299);
	if (Function_33(&Local_21))
	{
		if (bVar3 >= 1)
		{
			bVar4 = Local_21.f_152;
			if (IS_OBJECT_VALID(Local_21.f_152))
			{
				if (IS_OBJECT_IN_OBJECTSET(Local_21.f_152, bLocal_299))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_21.f_152, bLocal_299);
					bVar3 = (bVar3 - 1);
				}
			}
			Local_21.f_152 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET((bVar3 - 1), bLocal_299));
			Local_21.f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(Local_21.f_152, 0.0f, 1.0f, 10);
			GET_CURVE_POINT(Local_21.f_152, 1.0f, &Var5, 0);
			GET_CURVE_POINT(Local_21.f_152, 0.0f, &Var11, 0);
			Function_36(&Var5);
			Function_36(&Var11);
			if (VDIST(vLocal_289, Function_36(&Var5)) > VDIST(vLocal_289, Function_36(&Var11)))
			{
				Local_21.f_148 = 4294967295;
				*(&Local_21 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var11 };
			}
			else
			{
				Local_21.f_148 = 1;
				*(&Local_21 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var5 };
			}
			Function_81(&Local_21);
			if (IS_OBJECT_VALID(bVar4))
			{
				RELEASE_CURVE(bVar4);
			}
		}
		else
		{
			*(&Local_21 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(StackVal, StackVal, Local_21.f_152, vLocal_286, 2.1f, 0.0f, 1.0f, 2) };
			Function_36(&Local_21 + 24);
			Var0 = { StackVal, StackVal, Function_36(&Local_21 + 24) };
			Function_81(&Local_21);
			iLocal_69 = 8;
			bLocal_76 = false;
		}
	}
	else
	{
		Function_49();
		Function_48(&Local_21);
	}
	if (GET_DEBUG_DRAW_STATE())
	{
		Function_6(&Local_21, 0);
		Var0.f_4 = (StackVal + 2.0f);
		Var0 = { StackVal, StackVal, vLocal_289 };
		Var0.f_4 = (StackVal + 10.0f);
		bLocal_76 = false;
	}
	return bLocal_76;
}

void Function_48(int iParam0) //Position: 0x2351 / 9041
{
	Function_82(StackVal);
	if (Global_3386 && (Global_29007 != 3 || Global_29007 != 4))
	{
		Local_21.f_72 = 1;
	}
	else if (bLocal_331)
	{
		if (Local_21.f_72 == 4)
		{
			Local_21.f_72 = 2;
		}
	}
	else if (!iLocal_311)
	{
		Local_21.f_72 = 2;
	}
	else
	{
		Local_21.f_72 = iLocal_305;
	}
	Function_161(StackVal, iParam0->f_72);
	return;
}

void Function_49() //Position: 0x23AF / 9135
{
	bool bVar0;
	struct<21> Var1;
	
	bVar0 = Function_51(StackVal, StackVal, vLocal_289, 131120, 0.0f, 25.0f, 5.0f);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(StackVal, StackVal, bVar0, vLocal_289, 0x41200000, 0, 0x3f800000, 1) };
	vVar7 = { 0.0f, 0.0f, 1.0f };
	ROTATE_VECTOR_XZ(&vVar7, GET_HEADING(bLocal_315), 0);
	iVar10 = Function_50(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bVar0, Var1, vVar7);
	bVar11 = 0.0f;
	iVar19 = 0;
	while (iVar19 <= 5)
	{
		UNK_0x19D652F9(bVar0, (7.5f * IntToFloat(iVar10)), &Var1, &Var12);
		if (FABS((Var1.f_16 - Var12.f_16)) < 55.0f)
		{
			bVar18 = true;
		}
		bVar11 = (bVar11 + (Var1.f_16 - Var12.f_16));
		Var1 = Var12;
		Var1.f_4 = StackVal;
		Var1.f_8 = StackVal;
		Var1.f_12 = Var12.f_12;
		Var1.f_16 = Var12.f_16;
		Var1.f_20 = Var12.f_20;
		iVar19++;
	}
	if (FABS(bVar11) < 110.0f)
	{
		bVar18 = true;
	}
	if (bVar18)
	{
		bLocal_331 = true;
	}
	else
	{
		bLocal_331 = false;
	}
	RELEASE_CURVE(bVar0);
	return;
}

int Function_50(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x24A5 / 9381
{
	bool bVar0;
	bool bVar6;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	
	UNK_0x19D652F9(bParam0, 1.0f, &bParam1, &bVar0);
	UNK_0x19D652F9(bParam0, -1.0f, &bParam1, &bVar6);
	Function_36(&bVar0);
	Function_36(&bParam1);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_36(&bParam1), Function_36(&bVar0), StackVal) };
	fVar18 = VDOT(&uParam7, &vVar12);
	Function_36(&bVar6);
	Function_36(&bParam1);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_36(&bParam1), Function_36(&bVar6), StackVal) };
	fVar19 = VDOT(&uParam7, &vVar15);
	if (fVar19 > fVar18)
	{
		return 1;
	}
	return 4294967295;
}

var Function_51(vector3 vParam0, int iParam3, float fParam4, float fParam5, float fParam6) //Position: 0x24FE / 9470
{
	vector3 vVar0;
	bool bVar3;
	struct<9> Var4;
	
	bVar11 = -1.0f;
	bVar3 = START_CURVE_QUERY(Global_28841, vParam0, iParam3, fParam4, fParam5, fParam6, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) < 0)
	{
	}
	else
	{
		bVar12 = false;
		while (bVar12 < (GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar3, bVar12, &vVar4);
			vVar0.x = vVar4.x;
			vVar0.f_4 = vVar4.y;
			vVar0.f_8 = vVar4.z;
			if (bVar11 > 0.0f || bVar11 < VDIST(vParam0, vVar0))
			{
				bVar11 = VDIST(vParam0, vVar0);
				uVar10 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar3, bVar12);
			}
			bVar12++;
		}
	}
	UNK_0xDF93BD7C(bVar3);
	return uVar10;
}

int Function_52(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2595 / 9621
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	struct<6> Var10;
	bool bVar16;
	bool bVar17;
	
	iVar0 = 0;
	if (!SQUAD_IS_VALID(StackVal) && !(((*iParam0 != 0 || *iParam0 != 18) || *iParam0 != 16) || *iParam0 != 17))
	{
		*iParam0 = 0;
		return 4;
	}
	switch (*iParam0)
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
			Function_36(iParam0 + 24);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_36(iParam0 + 24), *(iParam0 + 168), StackVal) };
			Function_36(iParam0 + 24);
			vVar4 = { StackVal, StackVal, Function_36(iParam0 + 24) };
			Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24) };
			*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_80(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, Var10, iParam0->f_152, vVar1) };
			if (Function_79(iParam0 + 24))
			{
				*iParam0 = 16;
				return 3;
			}
			Function_36(iParam0 + 24);
			*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar4, Function_36(iParam0 + 24), StackVal) };
			*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
			if (bParam1)
			{
				Function_75(iParam0, 0);
			}
			*iParam0 = 2;
			return 1;
			break;
		
		case 0x00000002:
			bVar17 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar17))
			{
				TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar17));
				bVar17++;
			}
			if (Function_70(iParam0, bParam1, bParam3))
			{
				*iParam0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000003:
			if (!SQUAD_IS_VALID(StackVal))
			{
				*iParam0 = 16;
				return 4;
			}
			if (!IS_ACTOR_VALID(Function_162(StackVal)))
			{
				*iParam0 = 16;
				return 5;
			}
			GET_POSITION(Function_162(StackVal), &vVar4);
			*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(StackVal, StackVal, vVar4) };
			GET_ACTOR_VELOCITY(Function_162(StackVal), &vVar1);
			GET_POSITION(Function_162(StackVal), &vVar7);
			if (Function_79(iParam0 + 24))
			{
				*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_67(Function_162(StackVal)) };
				return 7;
			}
			if (Function_70(iParam0, bParam1, bParam3))
			{
				*iParam0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000006:
			iParam2 = iParam2;
			if (Function_70(iParam0, bParam1, bParam3))
			{
				*iParam0 = 7;
			}
			else
			{
				return 6;
			}
			if (!Function_58(iParam0))
			{
				*iParam0 = 9;
				return 7;
			}
			if (!Function_70(iParam0, bParam1, bParam3))
			{
				*iParam0 = 16;
				return 6;
			}
			*iParam0 = 7;
		
		case 0x00000008:
			break;
		
		case 0x00000007:
			if (!Function_56(iParam0))
			{
				*iParam0 = 6;
				return 0;
			}
			if (bParam1)
			{
				if (Function_54(iParam0))
				{
					bVar16 = true;
				}
				if (Function_53(StackVal))
				{
					bVar16 = true;
				}
				if (iParam0->f_96 && iParam0->f_72 < 2)
				{
					bVar16 = true;
				}
				if (Global_3403 && iParam0->f_72 == 3)
				{
					bVar16 = true;
				}
				if (bVar16)
				{
					Function_75(iParam0, 0);
				}
			}
			GET_POSITION(Function_162(StackVal), &vVar7);
			if (iParam0->f_88)
			{
				if (!Function_4(StackVal, StackVal, *(iParam0 + 136)))
				{
					if (Function_40(StackVal, StackVal, StackVal, StackVal, vVar7, *(iParam0 + 136)) > iParam0->f_128)
					{
						SQUAD_GOALS_CLEAR(StackVal);
						TASK_GO_TO_COORD(Function_162(StackVal), iParam0 + 136, 1);
						*iParam0 = 8;
						iParam0->f_88 = 0;
						return 8;
					}
				}
			}
			break;
	}
	return iVar0;
}

bool Function_53(bool bParam0) //Position: 0x28B0 / 10416
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		if (AI_GET_TASK_RETREAT_FLAG(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_54(int iParam0) //Position: 0x28DC / 10460
{
	if (!IS_VOLUME_VALID(Global_28842.f_28))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_55(StackVal, Global_28842.f_28))
		{
			if (!iParam0->f_96)
			{
				iParam0->f_96 = 1;
				return 1;
			}
		}
		if (iParam0->f_96)
		{
			iParam0->f_96 = 0;
			return 1;
		}
	}
	if (iParam0->f_96)
	{
		iParam0->f_96 = 0;
		return 1;
	}
	return 0;
}

bool Function_55(bool bParam0, bool bParam1) //Position: 0x294B / 10571
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_VOLUME_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_VEHICLE(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_56(int iParam0) //Position: 0x29CD / 10701
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	Function_36(iParam0 + 24);
	bVar6 = Function_57(StackVal, StackVal, StackVal, Function_36(iParam0 + 24));
	GET_POSITION(bVar6, &vVar0);
	Function_36(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_36(iParam0 + 24) };
	if (iParam0->f_156 > 1.0f)
	{
		iParam0->f_156 = Function_35(StackVal, iParam0->f_72);
	}
	if (StackVal > Function_34(VDIST(vVar3, vVar0), Function_35(iParam0->f_156, iParam0->f_72)))
	{
		*iParam0 = 6;
		return 0;
	}
	if (Function_8())
	{
		if (SQUAD_GOAL_GET_STATUS(StackVal, iParam0->f_12) != 3)
		{
			SQUAD_GOALS_CLEAR(StackVal);
			iParam0->f_12 = "";
			return 0;
		}
	}
	return 1;
}

var Function_57(vector3 vParam0, bool bParam3) //Position: 0x2A77 / 10871
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_4(StackVal, StackVal, vParam0))
	{
		LOG_WARNING("Invalid test vector passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(bParam3))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam3) - 1))
	{
		bVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar0));
		GET_OBJECT_POSITION(bVar3, &vVar4);
		if (VDIST(vParam0, vVar4) > bVar2 || bVar2 > 0.0f)
		{
			bVar2 = VDIST(vParam0, vVar4);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR!");
	return "";
}

bool Function_58(bool bParam0) //Position: 0x2BF8 / 11256
{
	var uVar0;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(StackVal, "wasstickup"))
	{
		DECOR_REMOVE(StackVal, "wasstickup");
		return 1;
	}
	Function_36(bParam0 + 24);
	bVar3 = Function_57(StackVal, StackVal, StackVal, Function_36(bParam0 + 24));
	GET_POSITION(bVar3, &uVar0);
	*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_59(StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 24), bParam0->f_152, 2.5f, 0) };
	if (Function_79(bParam0 + 24))
	{
		return 0;
	}
	return 1;
}

struct<24> Function_59(int iParam0, struct<6> Param1, bool bParam7, float fParam8, var uParam9) //Position: 0x2C6B / 11371
{
	struct<6> Var0;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	var uVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	var uVar15;
	vector3 vVar18;
	vector3 vVar21;
	float fVar24;
	struct<6> Var25;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	struct<17> Var35;
	struct<6> Var57;
	
	Function_36(&Param1);
	vVar6 = { StackVal, StackVal, Function_36(&Param1) };
	bVar9 = false;
	uVar11 = Function_66(StackVal, iParam0->f_164);
	fVar12 = 0.0f;
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		fVar13 = 5.0f;
	}
	else
	{
		fVar13 = (fParam8 * 2.0f);
	}
	iVar14 = 0;
	GET_OBJECT_POSITION(Function_162(StackVal), &uVar15);
	vVar18 = { 0.0f, 0.0f, -1.0f };
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_45(), Global_28841, 36, 1);
	}
	bVar32 = 4294967295;
	while (!bVar10)
	{
		bVar31 = START_CURVE_QUERY(Global_28841, vVar6, uVar11, fVar12, fVar13, Function_34(Function_65(iParam0), ((fVar13 - fVar12) / 2.0f)), 0);
		if (IS_OBJECT_VALID(bParam7))
		{
			REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bParam7);
			if (!IS_OBJECT_IN_OBJECTSET(bParam7, iParam0->f_160))
			{
				ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			}
		}
		if (IS_OBJECTSET_VALID(iParam0->f_48))
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (!IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_48))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bVar33);
					RELEASE_CURVE(bVar33);
				}
				bVar9++;
			}
		}
		else
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_160))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bVar33);
					RELEASE_CURVE(bVar33);
				}
				bVar9++;
			}
		}
		if (!GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) < 0)
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bParam7, iParam0->f_160);
			UNK_0xDF93BD7C(bVar31);
			Function_64(iParam0->f_160);
			ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_63();
			}
		}
		fVar34 = -100000.0f;
		bVar32 = 4294967295;
		bVar9 = false;
		if (IS_OBJECTSET_VALID(iParam0->f_48))
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_48))
				{
					GET_POINT_FROM_CURVE_QUERY(bVar31, bVar9, &Var25);
					Function_36(&Var25);
					Function_36(&Param1);
					vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_36(&Param1), Function_36(&Var25), StackVal) };
					fVar24 = VDOT(&vVar21, &vVar18);
					if (fVar24 < fVar34)
					{
						fVar34 = fVar24;
						bVar32 = bVar9;
					}
				}
				RELEASE_CURVE(bVar33);
				bVar9++;
			}
		}
		else if (Function_4(StackVal, StackVal, vVar18))
		{
			bVar32 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) - 1000))) / 1000.0f));
		}
		else if (Global_3386)
		{
			Function_36(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_36(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_63() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_63() };
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_36(&Param1);
				Function_36(&Var35);
				Function_36(&Param1);
				Function_36(&Var41);
				if (StackVal > Function_40(StackVal, StackVal, StackVal, Function_40(StackVal, StackVal, StackVal, StackVal, Function_36(&Param1), Function_36(&Var35)), Function_36(&Param1), Function_36(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, 0.0f, -5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, 0.0f, 5.0f, &Var25);
				}
				if (Global_30842[12])
				{
					Function_62(StackVal, StackVal, StackVal, StackVal, StackVal, Var25);
					PRINTNL();
				}
				Function_36(&Var25);
				Function_36(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_36(&Param1), Function_36(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0.5f, 0.5f));
				if (fVar24 < fVar34)
				{
					fVar34 = fVar24;
					bVar32 = bVar9;
				}
				RELEASE_CURVE(bVar47);
				bVar9++;
			}
		}
		else
		{
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_63() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_63() };
			Function_36(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_36(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_36(&Param1);
				Function_36(&Var35);
				Function_36(&Param1);
				Function_36(&Var41);
				if (StackVal > Function_40(StackVal, StackVal, StackVal, Function_40(StackVal, StackVal, StackVal, StackVal, Function_36(&Param1), Function_36(&Var35)), Function_36(&Param1), Function_36(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, Var35.f_16, 5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, Var41.f_16, 5.0f, &Var25);
				}
				Function_36(&Var25);
				Function_36(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_36(&Param1), Function_36(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0.25f, 1.0f));
				if (fVar24 < fVar34)
				{
					fVar34 = fVar24;
					bVar32 = bVar9;
				}
				RELEASE_CURVE(bVar47);
				bVar9++;
			}
		}
		iVar14 = 0;
		if (bVar32 == 4294967295)
		{
			UNK_0xDF93BD7C(bVar31);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_63();
			}
		}
		bVar10 = true;
	}
	iParam0->f_152 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar32);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(bVar31, bVar32, &Var0);
	Function_36(&Var0);
	vVar48 = { StackVal, StackVal, Function_36(&Var0) };
	GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var51, 0);
	GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var57, 0);
	if (StackVal < Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var51, Param1), Var57, Param1))
	{
		iParam0->f_148 = 1;
		GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var0, 0);
	}
	else
	{
		iParam0->f_148 = 4294967295;
		GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var0, 0);
	}
	if (Global_30900[1])
	{
		bVar9 = false;
		bVar9 = false;
		while (bVar9 <= GET_NUM_POINTS_IN_CURVE_QUERY(bVar31))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar31, bVar9, &Var25);
			Function_36(&Var25);
			vVar48 = { StackVal, StackVal, Function_36(&Var25) };
			bVar9++;
		}
		Function_36(&Var0);
		vVar48 = { StackVal, StackVal, Function_36(&Var0) };
	}
	Function_60(iParam0);
	UNK_0xDF93BD7C(bVar31);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_60(int iParam0) //Position: 0x3161 / 12641
{
	if (!Function_9(iParam0))
	{
		return;
	}
	if (!Function_61(StackVal))
	{
		return;
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	if (!IS_OBJECT_VALID(iParam0->f_152))
	{
		return;
	}
	if (!iParam0->f_20 < 0)
	{
		return;
	}
	if (!GET_CURVE_TYPE(iParam0->f_152) != 4 && !GET_CURVE_TYPE(iParam0->f_152) != 5)
	{
		LOG_ERROR("Adding a traffic node with a bad pathtype. I thought we filtered this?");
		return;
	}
	return;
}

bool Function_61(bool bParam0) //Position: 0x3205 / 12805
{
	if (bParam0 > 0 || bParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_62(struct<17> Param0) //Position: 0x321A / 12826
{
	Function_36(&Param0);
	PRINTVECTOR(Function_36(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

struct<24> Function_63() //Position: 0x324F / 12879
{
	struct<6> Var0;
	
	Var0.f_20 = 4294967295;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_64(bool bParam0) //Position: 0x3260 / 12896
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

int Function_65(int iParam0) //Position: 0x32A0 / 12960
{
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		return 5.0f;
	}
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			switch (iParam0->f_72)
			{
				case 0x00000005:
					return 2.5f;
					break;
				
				case 0x00000001:
					return 3.75f;
					break;
				
				case 0x00000002:
					return 6.25f;
					break;
				
				case 0x00000004:
					return 8.75f;
					break;
				
				case 0x00000003:
					return 12.5f;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in NextTravelFreq");
			break;
	}
	return 6.25f;
}

int Function_66(int iParam0, int iParam1) //Position: 0x3358 / 13144
{
	if (iParam1 != 0)
	{
		return iParam1;
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

struct<24> Function_67(bool bParam0) //Position: 0x3388 / 13192
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0.0f, -50.0f, 0.0f };
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), vVar0, &vVar3);
	if (!Function_68(&vVar3, 50.0f, &vVar0, 10))
	{
		vVar0 = { StackVal, StackVal, vVar3 };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(StackVal, StackVal, vVar0);
}

bool Function_68(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x33CB / 13259
{
	var uVar0;
	int iVar3;
	vector3 vVar4;
	
	if (iParam3 == 4294967295)
	{
		iVar3 = 4294967294;
	}
	else
	{
		iVar3 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*iParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*iParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*iParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_4(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0.01f);
		iParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_4(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *iParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

struct<24> Function_69(vector3 vParam0) //Position: 0x34FD / 13565
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

bool Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x351D / 13597
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!Function_9(iParam0))
	{
		Function_6(iParam0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_162(StackVal));
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		SQUAD_GOALS_CLEAR(StackVal);
	}
	Function_36(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_36(iParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	Function_74(StackVal, StackVal, vVar0, iParam0 + 24);
	if (bParam1)
	{
		iParam0->f_76 = Function_73(StackVal, iParam0->f_76, iParam0->f_80);
		if (!iParam0->f_96 || iParam0->f_72 != 4294967295)
		{
			iParam0->f_72 = iParam0->f_76;
		}
	}
	if (bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_72(Function_162(StackVal)), 0);
	}
	Function_71(iParam0);
	return 1;
}

void Function_71(int iParam0) //Position: 0x35D5 / 13781
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	iVar1 = 2;
	if (Function_11())
	{
		iVar1 = 0;
	}
	if (iParam0->f_148 == 4294967295)
	{
		iVar0 = 1;
	}
	if (iParam0->f_108)
	{
		iVar1 = 1;
	}
	if (iParam0->f_116)
	{
		if (!iParam0->f_96 && GET_CURVE_TYPE(iParam0->f_152) == 5)
		{
			iParam0->f_116 = 0;
		}
	}
	else
	{
		if (GET_CURVE_TYPE(iParam0->f_152) == 5)
		{
			iParam0->f_116 = 1;
		}
		if (iParam0->f_96)
		{
			iParam0->f_116 = 1;
		}
	}
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		iParam0->f_12 = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(StackVal, 0, 4294967295, iParam0->f_152, iParam0->f_72, iVar0, iVar1);
		if (iParam0->f_116)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 0);
		}
		if (iParam0->f_84 != 2)
		{
			if (!iParam0->f_104)
			{
				iParam0->f_84 = 2;
			}
			else
			{
				SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(StackVal, iParam0->f_12, iParam0->f_84);
			}
		}
		if (StackVal && !iParam0->f_112 != 2)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 4, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 4, 0);
		}
		SQUAD_GOAL_ADD_FACTION_STATUS_WITHIN_GOAL(StackVal, 1, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(StackVal, 1);
	}
	else
	{
		if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(StackVal, iParam0->f_12, iParam0->f_152, iVar0, 0))
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(StackVal, iParam0->f_12, iParam0->f_152, iVar0);
		}
		if (iParam0->f_116)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 0);
		}
	}
	return;
}

int Function_72(int iParam0) //Position: 0x3775 / 14197
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

int Function_73(int iParam0, int iParam1, int iParam2) //Position: 0x379C / 14236
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_11())
	{
		if (iParam2 != 0)
		{
			return iParam2;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		iParam1 = iParam1;
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
	if (iParam2 != 0)
	{
		return iParam2;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	iParam1 = iParam1;
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

void Function_74(vector3 vParam0) //Position: 0x38DA / 14554
{
	*uParam3 = vParam0.x;
	uParam3->f_4 = vParam0.y;
	uParam3->f_8 = vParam0.z;
}

void Function_75(int iParam0, int iParam1) //Position: 0x38F7 / 14583
{
	if (!Function_11())
	{
		Function_82(StackVal);
		if (Global_28842.f_80 != 0)
		{
			iParam0->f_72 = Global_28842.f_80;
			Function_161(StackVal, iParam0->f_72);
		}
		else if (Global_3403 || iParam1)
		{
			if (StackVal == 2)
			{
				iParam0->f_72 = 4;
			}
			else
			{
				iParam0->f_72 = 3;
			}
			Function_161(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_46(StackVal, 1);
			}
		}
		else if (StackVal || Function_53((Global_3404 || Function_77(131072))))
		{
			iParam0->f_72 = 4;
			Function_161(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_46(StackVal, 1);
			}
		}
		else if (iParam0->f_92)
		{
			iParam0->f_72 = Function_76(StackVal, iParam0->f_80);
			Function_161(StackVal, iParam0->f_72);
		}
		else if (iParam0->f_96)
		{
			iParam0->f_72 = Function_10(StackVal, iParam0->f_80);
			Function_161(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_46(StackVal, 0);
			}
		}
		else
		{
			iParam0->f_72 = iParam0->f_76;
			if (StackVal == 2)
			{
				Function_46(StackVal, 1);
			}
		}
	}
	else
	{
		Function_82(StackVal);
		if (Global_28842.f_80 != 0)
		{
			iParam0->f_72 = Global_28842.f_80;
			Function_161(StackVal, iParam0->f_72);
		}
		else if (StackVal || Function_53(Function_77(131072)))
		{
			iParam0->f_72 = 3;
			Function_161(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_46(StackVal, 1);
			}
		}
		else if (iParam0->f_92)
		{
			iParam0->f_72 = Function_76(StackVal, iParam0->f_80);
			Function_161(StackVal, iParam0->f_72);
		}
		else if (iParam0->f_96)
		{
			iParam0->f_72 = Function_10(StackVal, iParam0->f_80);
			Function_161(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_46(StackVal, 0);
			}
		}
		else
		{
			iParam0->f_72 = iParam0->f_76;
			if (StackVal == 2)
			{
				Function_46(StackVal, 1);
			}
		}
	}
	return;
}

int Function_76(int iParam0, bool bParam1) //Position: 0x3ADF / 15071
{
	if (!Function_11())
	{
		if (bParam1 != 0)
		{
			return bParam1;
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
	if (bParam1 != 0)
	{
		return bParam1;
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

bool Function_77(int iParam0) //Position: 0x3BAA / 15274
{
	return Function_78(&Global_28842, iParam0);
}

int Function_78(var uParam0, int iParam1) //Position: 0x3BB8 / 15288
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_79(bool bParam0) //Position: 0x3BD4 / 15316
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

struct<24> Function_80(int iParam0, struct<6> Param1, bool bParam7, vector3 vParam8) //Position: 0x3C02 / 15362
{
	bool bVar0;
	bool bVar6;
	struct<6> Var12;
	
	if (!IS_OBJECT_VALID(bParam7))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
	}
	iParam0->f_148 = Function_50(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam7, Param1, vParam8);
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(bParam7, 1.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, 1.0f, &Param1, &bVar0);
		Function_36(&bVar0);
		Function_36(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_36(&Param1), Function_36(&bVar0), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	else
	{
		GET_CURVE_POINT(bParam7, 0.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, -1.0f, &Param1, &bVar6);
		Function_36(&bVar6);
		Function_36(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_36(&Param1), Function_36(&bVar6), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
}

int Function_81(int iParam0) //Position: 0x3CA0 / 15520
{
	int iVar0;
	
	if (!Function_9(iParam0))
	{
		Function_6(iParam0, 1);
		return 0;
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		LOG_WARNING("MOVE_IN_FORMATION given invalid squad");
		return 0;
	}
	Function_36(iParam0 + 24);
	if (Function_4(StackVal, StackVal, Function_36(iParam0 + 24)))
	{
		LOG_ERROR("Trying to send some AI to 0,0,0!");
		return 0;
	}
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		SQUAD_GOALS_CLEAR(StackVal);
		TASK_CLEAR(bLocal_315);
		AI_CLEAR_NAV_MATERIAL_USAGE(Function_162(StackVal));
		AI_SET_NAV_MATERIAL_USAGE(Function_162(StackVal), 96, 0);
	}
	if (iParam0->f_148 == 4294967295)
	{
		iVar0 = 1;
	}
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		iParam0->f_12 = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(StackVal, 1, 4294967295, iParam0->f_152, 3, iVar0, 0);
	}
	else if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(StackVal, iParam0->f_12, iParam0->f_152, iVar0, 0))
	{
		SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(StackVal, iParam0->f_12, iParam0->f_152, iVar0);
	}
	Function_48(iParam0);
	return 1;
}

void Function_82(bool bParam0) //Position: 0x3DAE / 15790
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_83() //Position: 0x3DD4 / 15828
{
	TELEPORT_ACTOR_WITH_HEADING(bLocal_316, vLocal_302, bLocal_301, 1, 1, 1);
	return;
}

int Function_84(int iParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x3DEB / 15851
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
	Function_97(iParam0, TO_FLOAT(bParam1), 1);
	Function_96(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_85(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x400D / 16397
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_95(390))), 32);
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
					bVar19 = (Function_94(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_94(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_92(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_89(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_86(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_45(), &Var9);
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

var Function_86(int iParam0) //Position: 0x463A / 17978
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_87(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x464B / 17995
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_88(char* cParam0, bool bParam1) //Position: 0x4740 / 18240
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_89(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4759 / 18265
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_91(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_90(Function_91(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_90(int iParam0, int iParam1) //Position: 0x47BE / 18366
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_91(int iParam0, bool bParam1) //Position: 0x47D0 / 18384
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_92(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x47E2 / 18402
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
	if (((Function_93(iParam0) != 19 || Function_93(iParam0) != 17) || Function_93(iParam0) != 10) || Function_93(iParam0) != 9)
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

int Function_93(int iParam0) //Position: 0x4912 / 18706
{
	return Global_35278[iParam020].f_48;
}

float Function_94(int iParam0) //Position: 0x4921 / 18721
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_95(int iParam0) //Position: 0x495A / 18778
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_96(int iParam0) //Position: 0x4997 / 18839
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

int Function_97(int iParam0, float fParam1, bool bParam2) //Position: 0x4B31 / 19249
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

int Function_98(int iParam0, bool bParam1) //Position: 0x4D75 / 19829
{
	bool bVar0;
	
	bVar0 = Function_100(0);
	if ((Function_100(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_99(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_100(0));
	return 1;
}

int Function_99(int iParam0, bool bParam1, int iParam2) //Position: 0x4E05 / 19973
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
	Function_96(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_85(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_100(int iParam0) //Position: 0x5000 / 20480
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_101(bool bParam0, int iParam1) //Position: 0x5041 / 20545
{
	int iVar0;
	
	if (Function_102(3) > 5)
	{
		return 0;
	}
	iVar0 = 1;
	if (Function_163(bParam0))
	{
		if (StackVal == 5)
		{
			iVar0 = 5;
		}
	}
	return (iVar0 * ROUND((0.67f * POW((IntToFloat(iParam1) * 0.01f), 0.9f))));
}

int Function_102(int iParam0) //Position: 0x5089 / 20617
{
	if (Function_8() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_103() //Position: 0x50B1 / 20657
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_310))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_310);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_309))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_309);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_308))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_308);
	}
	return;
}

void Function_104() //Position: 0x50E4 / 20708
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	struct<6> Var9;
	bool bVar15;
	vector3 vVar16;
	bool bVar19;
	float fVar20;
	bool bVar21;
	bool bVar22;
	vector3 vVar23;
	bool bVar26;
	struct<6> Var32;
	struct<6> Var38;
	struct<6> Var44;
	struct<6> Var50;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	struct<6> Var61;
	bool bVar67;
	vector3 vVar73;
	
	iVar0 = 16;
	if ((Local_77[iLocal_2834] != Global_30717[1] || Local_77[iLocal_2834] != Global_30693[2]) || Global_29006 != Global_30693[0])
	{
		iVar0 = 131088;
	}
	bVar1 = Function_162(StackVal);
	vVar2 = { 0.0f, 0.0f, -2.5f };
	ROTATE_VECTOR_XZ(&vVar2, GET_HEADING(bVar1), 0);
	GET_OBJECT_POSITION(bVar1, &vVar5);
	vLocal_289 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar2, vVar5, StackVal) };
	bLocal_299 = CREATE_OBJECTSET_IN_LAYOUT("scoachoset", bLocal_318, 36, 1);
	if (iLocal_283 != 0 && iLocal_72)
	{
		vLocal_286 = { StackVal, StackVal, *(&Global_28210 + 48) };
		if (!FIND_TRAFFIC_PATH(bLocal_318, bLocal_299, &vLocal_289, &vLocal_286, 131120, &uVar8))
		{
			LOG_ERROR("Cannot find path!");
		}
		Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(StackVal, StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_299)), vLocal_286, 0x41200000, 0, 0x3f800000, 1) };
		if (!Function_79(&Var9))
		{
			Function_36(&Var9);
			vLocal_286 = { StackVal, StackVal, Function_36(&Var9) };
		}
	}
	else
	{
		GET_OBJECT_POSITION(bLocal_285, &vLocal_286);
		if (!FIND_TRAFFIC_PATH(bLocal_318, bLocal_299, &vLocal_289, &vLocal_286, iVar0, &uVar8))
		{
			LOG_ERROR("Cannot find path!");
		}
	}
	bLocal_330 = GET_OBJECTSET_SIZE(bLocal_299);
	bVar15 = Function_115(StackVal, StackVal, vLocal_286);
	if (IS_OBJECT_VALID(bVar15))
	{
		bVar21 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar19, bLocal_299));
		bVar22 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar19 + 1, bLocal_299));
		vVar23 = { StackVal, StackVal, vLocal_286 };
		while (((Function_4(StackVal, StackVal, vVar16) && bVar19 > 10) && IS_OBJECT_VALID(bVar21)) && IS_OBJECT_VALID(bVar22))
		{
			fVar20 = Function_114(bVar21, bVar22);
			Function_111(StackVal, StackVal, vVar23, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar19, bLocal_299)), 1.0f, GET_VOLUME_FROM_OBJECT(bVar15));
			vVar16 = { StackVal, StackVal, Function_111(StackVal, StackVal, vVar23, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar19, bLocal_299)), 1.0f, GET_VOLUME_FROM_OBJECT(bVar15)) };
			bVar19++;
			if (Function_4(StackVal, StackVal, vVar16))
			{
				if (fVar20 > 0.0f)
				{
					GET_CURVE_POINT(bVar21, 1.0f, &bVar26, 0);
				}
				else
				{
					GET_CURVE_POINT(bVar21, 0.0f, &bVar26, 0);
				}
				Function_36(&bVar26);
				vVar23 = { StackVal, StackVal, Function_36(&bVar26) };
				bVar21 = bVar22;
				bVar22 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar19 + 1, bLocal_299));
			}
		}
		if (!Function_4(StackVal, StackVal, vVar16))
		{
			vLocal_286 = { StackVal, StackVal, vVar16 };
			bLocal_325 = true;
			bLocal_326 = bVar21;
			bLocal_327 = bVar22;
		}
		if (DECOR_CHECK_EXIST(bVar15, "deleteMe"))
		{
			DESTROY_OBJECT(bVar15);
		}
	}
	if (!Global_3386 || (Global_29007 == 3 && Global_29007 == 4))
	{
		Function_46(StackVal, 1);
	}
	else
	{
		Function_46(StackVal, 0);
	}
	Function_82(StackVal);
	Function_110(StackVal, StackVal, &Local_21, vLocal_286);
	Local_21.f_4 = 2;
	Local_21.f_72 = 2;
	Local_21.f_152 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(bLocal_299) - 1), bLocal_299));
	Function_107(StackVal, StackVal, &Local_21, vLocal_289, 0.0f, 0.0f, 0.0f, Local_21.f_152, 0, 0);
	GET_CURVE_POINT(Local_21.f_152, 1.0f, &Var32, 0);
	GET_CURVE_POINT(Local_21.f_152, 0.0f, &Var38, 0);
	GET_CURVE_POINT(GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(bLocal_299) - 2), bLocal_299)), 1.0f, &Var44, 0);
	GET_CURVE_POINT(GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(bLocal_299) - 2), bLocal_299)), 0.0f, &Var50, 0);
	fVar56 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var32, Var44);
	fVar57 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var32, Var50);
	fVar58 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var38, Var44);
	fVar59 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var38, Var50);
	if ((fVar56 > fVar58 && fVar56 > fVar59) || (fVar57 > fVar58 && fVar57 > fVar59))
	{
		Local_21.f_148 = 1;
		*(&Local_21 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var32 };
	}
	else
	{
		Local_21.f_148 = 4294967295;
		*(&Local_21 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var38 };
	}
	if (Global_30842[52])
	{
		iVar60 = 0;
		while (iVar60 <= GET_OBJECTSET_SIZE(bLocal_299))
		{
			iVar60++;
		}
	}
	Var61 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(StackVal, StackVal, Local_21.f_152, vLocal_289, 0x41200000, 0, 0x3f800000, 1) };
	UNK_0x19D652F9(Local_21.f_152, (10.0f * IntToFloat(Local_21.f_148)), &Var61, &bVar67);
	Function_36(&bVar67);
	vVar73 = { StackVal, StackVal, Function_36(&bVar67) };
	Function_36(&bVar67);
	if (!Function_105(StackVal, StackVal, bLocal_316, Function_36(&bVar67)))
	{
		bLocal_300 = true;
		Function_36(&Var61);
		vLocal_302 = { StackVal, StackVal, Function_36(&Var61) };
		vVar73 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vLocal_302, vVar73, StackVal) };
		bLocal_301 = UNK_0x9C40E671(&vVar73);
		Function_161(StackVal, 5);
	}
	else
	{
		Function_81(&Local_21);
		Local_21 = 7;
		Function_52(&Local_21, 0, 0, 0);
	}
	return;
}

bool Function_105(bool bParam0, vector3 vParam1) //Position: 0x54F7 / 21751
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, -1.0f };
	ROTATE_VECTOR_XZ(&vVar0, Function_106(bParam0), 0);
	GET_POSITION(bParam0, &vVar3);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vParam1, StackVal) };
	if (VDOT(&vVar0, &vVar6) < 0.0f)
	{
		return 1;
	}
	return 0;
}

var Function_106(bool bParam0) //Position: 0x5536 / 21814
{
	return GET_HEADING(bParam0);
}

void Function_107(int iParam0, vector3 vParam1, struct<5> Param4, var uParam9) //Position: 0x5541 / 21825
{
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(StackVal, StackVal, vParam1) };
	(iParam0 + 24)->f_12 = Param4;
	(iParam0 + 24)->f_16 = StackVal;
	iParam0->f_152 = uParam7;
	iParam0->f_112 = uParam9;
	iParam0->f_116 = uParam8;
	Function_108(iParam0);
	iParam0->f_20 = SQUAD_GET_SIZE(StackVal);
	Function_60(iParam0);
}

void Function_108(var uParam0) //Position: 0x558F / 21903
{
	struct<2> Var0;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		Function_109();
		Var0 = { StackVal, Function_109() };
		uParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_28841, &Var0));
	}
	*uParam0 = 1;
	return;
}

struct<8> Function_109() //Position: 0x55BA / 21946
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

void Function_110(int iParam0, vector3 vParam1) //Position: 0x5611 / 22033
{
	*(iParam0 + 168) = { StackVal, StackVal, vParam1 };
}

vector3 Function_111(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x5623 / 22051
{
	struct<6> Var0;
	struct<6> Var6;
	vector3 vVar12;
	int iVar15;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(StackVal, StackVal, bParam3, vParam0, 0x41200000, 0, 0x3f800000, 1) };
	while (!Function_113(&Var0, ROUND(bParam4)) && iVar15 > 10)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
		UNK_0x19D652F9(bParam3, (bParam4 * 20.0f), &Var6, &Var0);
		Function_36(&Var0);
		if (!IS_POINT_IN_VOLUME(Function_36(&Var0), bParam5))
		{
			Function_36(&Var0);
			vVar12 = { StackVal, StackVal, Function_36(&Var0) };
			return StackVal, StackVal, vVar12;
		}
		Function_36(&Var0);
		vVar12 = { StackVal, StackVal, Function_36(&Var0) };
		iVar15++;
	}
	Function_112();
	return StackVal, StackVal, Function_112();
}

vector3 Function_112() //Position: 0x56A7 / 22183
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_113(int iParam0, int iParam1) //Position: 0x56B0 / 22192
{
	if (iParam1 != 4294967295 && iParam0->f_12 > 0.001f)
	{
		return 1;
	}
	if (iParam1 != 1 && iParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

var Function_114(bool bParam0, bool bParam1) //Position: 0x56E2 / 22242
{
	struct<6> Var0;
	struct<6> Var6;
	struct<6> Var12;
	struct<6> Var18;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	
	GET_CURVE_POINT(bParam0, 1.0f, &Var0, 0);
	GET_CURVE_POINT(bParam0, 0.0f, &Var6, 0);
	GET_CURVE_POINT(bParam1, 1.0f, &Var12, 0);
	GET_CURVE_POINT(bParam1, 0.0f, &Var18, 0);
	fVar24 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0, Var12);
	fVar25 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0, Var18);
	fVar26 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var6, Var12);
	fVar27 = Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var6, Var18);
	if ((fVar24 > fVar26 && fVar24 > fVar27) || (fVar25 > fVar26 && fVar25 > fVar27))
	{
		return -1.0f;
	}
	return 1.0f;
}

var Function_115(vector3 vParam0) //Position: 0x575D / 22365
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_3422)
	{
		if (Global_3422[iVar040].f_104 == 4)
		{
			if (Global_3422[iVar040].f_124)
			{
				if (!Function_118(iVar0, 0) && IS_VOLUME_VALID(Global_3422[iVar040].f_48))
				{
					if (IS_POINT_IN_VOLUME(vParam0, Global_3422[iVar040].f_48))
					{
						return GET_OBJECT_FROM_VOLUME(Global_3422[iVar040].f_48);
					}
				}
			}
		}
		if (Global_3422[iVar040].f_104 == 3)
		{
			if (Global_3422[iVar040].f_124)
			{
				if (!Function_118(iVar0, 0))
				{
					if (Function_40(StackVal, StackVal, StackVal, StackVal, vParam0, *(&Global_3422[iVar040] + 52)) > 10.0f)
					{
						bVar1 = CREATE_VOLUME_IN_LAYOUT(Global_28841, Function_45(), 3, *(&Global_3422[iVar040] + 52), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
						DECOR_SET_BOOL(bVar1, "deleteMe", true);
						return GET_OBJECT_FROM_VOLUME(bVar1);
					}
				}
			}
		}
		iVar0++;
	}
	if (Function_117())
	{
		Function_116(Global_26303.f_24);
		if (Function_40(StackVal, StackVal, StackVal, StackVal, vParam0, Function_116(Global_26303.f_24)) > 200.0f)
		{
			Function_116(Global_26303.f_24);
			bVar1 = CREATE_VOLUME_IN_LAYOUT(Global_28841, Function_45(), 3, Function_116(Global_26303.f_24), 0.0f, 0.0f, 0.0f, 200.0f, 50.0f, 200.0f);
			DECOR_SET_BOOL(bVar1, "deleteMe", true);
			return GET_OBJECT_FROM_VOLUME(bVar1);
		}
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	return "";
}

vector3 Function_116(int iParam0) //Position: 0x59E7 / 23015
{
	vector3 vVar0;
	
	if (iParam0 == Global_30723[5])
	{
		vVar0 = { -1043.829f, 183.985f, 1371.714f };
	}
	else if (iParam0 == Global_30693[3])
	{
		vVar0 = { -2234.426f, 23.091f, 4454.898f };
	}
	else if (iParam0 == Global_30723[6])
	{
		vVar0 = { -482.365f, 143.447f, 1908.17f };
	}
	else if (iParam0 == Global_30668[3])
	{
		vVar0 = { -490.208f, 20.103f, 3023.158f };
	}
	else if (iParam0 == Global_30640[13])
	{
		vVar0 = { -1945.125f, 30.262f, 3469.187f };
	}
	else if (iParam0 == Global_30693[7])
	{
		vVar0 = { -2726.75f, 55.867f, 4619.704f };
	}
	else if (iParam0 == Global_30640[6])
	{
		vVar0 = { -1912.426f, 29.225f, 2261.395f };
	}
	else if (iParam0 == Global_30693[10])
	{
		vVar0 = { -1756.155f, 30.369f, 4819.779f };
	}
	else if (iParam0 == Global_30693[8])
	{
		vVar0 = { -1445.059f, 19.691f, 4909.378f };
	}
	else if (iParam0 == Global_30640[11])
	{
		vVar0 = { -2829.0f, 20.079f, 3076.999f };
	}
	else if (iParam0 == Global_30668[6])
	{
		vVar0 = { -1269.727f, 109.427f, 2762.885f };
	}
	else if (iParam0 == Global_30723[3])
	{
		vVar0 = { -733.172f, 228.751f, 1129.988f };
	}
	else if (iParam0 == Global_30685[5])
	{
		vVar0 = { -3384.816f, 55.788f, 4746.955f };
	}
	else if (iParam0 == Global_30693[9])
	{
		vVar0 = { -1200.055f, 19.075f, 4964.34f };
	}
	else if (iParam0 == Global_30693[11])
	{
		vVar0 = { -1147.715f, 27.988f, 4820.093f };
	}
	else if (iParam0 == Global_30640[7])
	{
		vVar0 = { -2868.86f, 74.342f, 2178.624f };
	}
	else if (iParam0 == Global_30679[3])
	{
		vVar0 = { -3140.568f, 44.538f, 3284.213f };
	}
	else if (iParam0 == Global_30693[4])
	{
		vVar0 = { -1361.188f, 13.056f, 4299.818f };
	}
	else if (iParam0 == Global_30658[7])
	{
		vVar0 = { -4016.218f, 21.468f, 2398.236f };
	}
	else if (iParam0 == Global_30723[4])
	{
		vVar0 = { -844.503f, 189.827f, 1577.429f };
	}
	else
	{
		PRINTSTRING("The bad bh region is: ");
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)));
		PRINTNL();
		LOG_ERROR("No True bounty location...we're guessing here!");
		GET_VOLUME_CENTER(StackVal, &vVar0);
	}
	return StackVal, StackVal, vVar0;
}

bool Function_117() //Position: 0x5CFE / 23806
{
	return Function_12(StackVal, 1);
}

bool Function_118(int iParam0, bool bParam1) //Position: 0x5D0D / 23821
{
	int iVar0;
	
	iVar0 = Function_120(iParam0);
	if (!Function_119(iVar0))
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

bool Function_119(int iParam0) //Position: 0x5D4A / 23882
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_120(int iParam0) //Position: 0x5D61 / 23905
{
	if (!Function_121(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_121(int iParam0) //Position: 0x5D7B / 23931
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_122(vector3 vParam0, bool bParam3) //Position: 0x5D91 / 23953
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
			if (IS_VOLUME_VALID(StackVal))
			{
				if (IS_POINT_IN_VOLUME(StackVal, vParam0))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (bParam3)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

int Function_123(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x5DFC / 24060
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

var Function_124(bool bParam0) //Position: 0x5E97 / 24215
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_163(bParam0))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	memcpy(&cVar2, Global_29155[bParam010].f_20, 6);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(bVar0)))
		{
			DESTROY_ITERATOR(bVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

void Function_125() //Position: 0x5F26 / 24358
{
	float fVar0;
	
	if (iLocal_72)
	{
		if (!Function_133(StackVal, StackVal, StackVal, StackVal, vLocal_73, *(&Global_28210 + 24)))
		{
			Function_131(&Local_77);
			vLocal_73 = { StackVal, StackVal, *(&Global_28210 + 24) };
			iLocal_307 = 0;
			Function_129(&Local_77, iLocal_307);
		}
		if (StackVal || StackVal != 3 != 0)
		{
			Function_128(&Local_77);
			vLocal_73 = { 0.0f, 0.0f, 0.0f };
			iLocal_307 = Function_136(&Local_77, 0, bLocal_279);
			Function_129(&Local_77, iLocal_307);
			iLocal_72 = 0;
		}
	}
	else if (StackVal || StackVal != 2 != 1)
	{
		iLocal_72 = 1;
		Function_131(&Local_77);
		vLocal_73 = { StackVal, StackVal, *(&Global_28210 + 24) };
		iLocal_307 = 0;
		Function_129(&Local_77, iLocal_307);
	}
	fVar0 = GET_STICK_Y(GET_PLAYER_PADINDEX(Global_34573), 0, 1);
	if (!bLocal_279 && ((fLocal_297 + 0.3f) - Function_34(0.15f, ((0.15f * TO_FLOAT(iLocal_298)) / 5.0f))) > GET_CURRENT_GAME_TIME())
	{
		if (fVar0 > -0.5f || Function_127(14, 1, 0))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			iLocal_307 = Function_126(&Local_77, iLocal_307);
			Function_129(&Local_77, iLocal_307);
			fLocal_297 = GET_CURRENT_GAME_TIME();
			bLocal_298++;
		}
		else if (fVar0 < 0.5f || Function_127(12, 1, 0))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			iLocal_307 = Function_136(&Local_77, iLocal_307, bLocal_279);
			Function_129(&Local_77, iLocal_307);
			fLocal_297 = GET_CURRENT_GAME_TIME();
			bLocal_298++;
		}
		else
		{
			fLocal_297 = 0.0f;
			bLocal_298 = true;
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_310))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_310))
		{
			iLocal_283 = iLocal_307;
			iLocal_69 = 4;
			return;
		}
	}
	return;
}

int Function_126(var uParam0, int iParam1) //Position: 0x60CE / 24782
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam1 - 1);
	if (iVar0 <= 0)
	{
		iVar0 = (*uParam0 - 1);
	}
	while (!StackVal)
	{
		iVar0 = (iVar0 - 1);
		if (iVar0 > 0 && !bVar1)
		{
			iVar0 = (*uParam0 - 1);
			bVar1 = true;
		}
		else if (iVar0 > 0 && bVar1)
		{
			if (Function_163((*uParam0)[04]))
			{
			}
			return 0;
		}
	}
	if (Function_163((*uParam0)[iVar04]))
	{
	}
	return iVar0;
}

int Function_127(int iParam0, int iParam1, bool bParam2) //Position: 0x613F / 24895
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_DOWN(iVar0, iParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_DOWN(iVar0, 15, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_DOWN(iVar0, 14, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_128(int iParam0) //Position: 0x61BC / 25020
{
	iParam0[04]->f_4 = 0;
	iParam0[04]->f_8 = 0;
	(*iParam0)[04] = 4294967295;
	iParam0[04]->f_12 = 0;
	return;
}

void Function_129(int iParam0, int iParam1) //Position: 0x61E0 / 25056
{
	char* cVar0[32];
	char[] cVar8[4];
	
	if (iLocal_72 && iParam1 != 0)
	{
		strcpy(&cVar0, "PASS_COACH_Waypoint", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_130((*iParam0)[iParam14]) };
	}
	strcpy(&cVar8, I2STR(iParam0[iParam14]->f_12), 4);
	SET_USE_CONTEXT_TEXT(bLocal_310, "PASS_COACH_CurrentDest", &cVar0, &cVar8, 0, 0);
	return;
}

struct<32> Function_130(int iParam0) //Position: 0x624F / 25167
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_163(iParam0))
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

void Function_131(int iParam0) //Position: 0x630C / 25356
{
	iParam0[04]->f_4 = 1;
	iParam0[04]->f_8 = ROUND(Function_132(Global_28210.f_12));
	(*iParam0)[04] = Function_122(StackVal, StackVal, *(&Global_28210 + 24), 1);
	iParam0[04]->f_12 = Function_101(StackVal, (*iParam0)[04]);
	return;
}

var Function_132(bool bParam0) //Position: 0x6352 / 25426
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
	{
		bVar1 = (bVar1 + CURVE_CALCULATE_DISTANCE_BY_STEP_SIZE(GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0)), 0.0f, 1.0f, 50.0f));
		bVar0++;
	}
	return bVar1;
}

bool Function_133(vector3 vParam0, vector3 vParam3) //Position: 0x6389 / 25481
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_134(var uParam0, int iParam1) //Position: 0x63B6 / 25526
{
	struct<8> Var0;
	
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_309))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_309);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_308))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_308);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_310))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_310);
	}
	if (!bLocal_279)
	{
		if (iLocal_284 >= 1)
		{
			bLocal_308 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_PreviousDest", 10, 2, 0, 0, 0, 0, 4294967295, 0);
			bLocal_309 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_NextDest", 10, 3, 0, 0, 0, 0, 4294967295, 0);
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_130((*uParam0)[iParam14]) };
		if (!Function_135() || !IS_PS3())
		{
			bLocal_310 = ADD_SCRIPT_USE_CONTEXT(&Var0, 10, 6, "", "", "", "", 4294967295, "HUD_MENU_SELECT_MASTER");
		}
		else
		{
			bLocal_310 = ADD_SCRIPT_USE_CONTEXT(&Var0, 10, 5, "", "", "", "", 4294967295, "HUD_MENU_SELECT_MASTER");
		}
		Function_129(uParam0, iParam1);
	}
	return;
}

bool Function_135() //Position: 0x64CB / 25803
{
	return HAS_STRING_TABLE_LOADED("jp");
}

int Function_136(int iParam0, int iParam1, bool bParam2) //Position: 0x64D9 / 25817
{
	int iVar0;
	bool bVar1;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = iParam1 + 1;
	if (iVar0 >= (*iParam0 - 1))
	{
		iVar0 = 0;
	}
	while (!StackVal)
	{
		iVar0++;
		if (iVar0 < (*iParam0 - 1) && !bVar1)
		{
			iVar0 = 0;
			bVar1 = true;
		}
		else if (iVar0 < (*iParam0 - 1) && bVar1)
		{
			if (Function_163((*iParam0)[04]))
			{
			}
			return 0;
		}
	}
	if (Function_163((*iParam0)[iVar04]))
	{
	}
	return iVar0;
}

void Function_137(bool bParam0) //Position: 0x6555 / 25941
{
	if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_138(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x65C9 / 26057
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_139(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_139(int iParam0) //Position: 0x6644 / 26180
{
	char* cVar0[16];
	
	if (!Function_11())
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

void Function_140(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x6683 / 26243
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_142(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_141(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_141(char* cParam0, int iParam1) //Position: 0x66EF / 26351
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_142(bool bParam0, var uParam1, int iParam2) //Position: 0x6726 / 26406
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_144(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_143(uVar0))
		{
			case 0x00000002:
				if (!Function_146(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_143(char* cParam0) //Position: 0x679E / 26526
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

int Function_144(int iParam0) //Position: 0x683F / 26687
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_145(&iVar1, 2147483648);
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

void Function_145(var uParam0, int iParam1) //Position: 0x687C / 26748
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

bool Function_146(var uParam0, int iParam1) //Position: 0x688F / 26767
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

var Function_147(var uParam0, var uParam1, bool bParam2) //Position: 0x68A2 / 26786
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 500;
	if (!bParam2)
	{
		iVar3 = 150;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if ((StackVal && Function_163((*uParam0)[iVar04])) || (uParam1 && iVar0 != 0))
		{
			if (bParam2)
			{
				uParam0[iVar04]->f_12 = Function_101(StackVal, (*uParam0)[iVar04]);
			}
			else
			{
				uParam0[iVar04]->f_12 = 0;
			}
			if (Function_163((*uParam0)[iVar04]) && !iVar0 != 0)
			{
				if (Function_18(&(Global_29008[(*uParam0)[iVar04]]), 4096) || !Global_3365)
				{
					iVar2++;
					if (Function_148() > uParam0[iVar04]->f_12)
					{
						if (StackVal >= iVar3)
						{
							bVar1++;
						}
						else
						{
							uParam0[iVar04]->f_4 = 0;
						}
					}
					else
					{
						uParam0[iVar04]->f_4 = 0;
					}
				}
				else
				{
					uParam0[iVar04]->f_4 = 0;
				}
			}
			else if (uParam1 && iVar0 != 0)
			{
				if (Function_148() > uParam0[iVar04]->f_12)
				{
					if (StackVal >= iVar3)
					{
						bVar1++;
					}
					else
					{
						uParam0[iVar04]->f_4 = 0;
					}
				}
				else
				{
					uParam0[iVar04]->f_4 = 0;
				}
			}
			else
			{
				uParam0[iVar04]->f_4 = 0;
			}
		}
		else
		{
			uParam0[iVar04]->f_4 = 0;
		}
		iVar0++;
	}
	if (iVar2 == 0)
	{
		bVar1 = 4294967295;
	}
	return bVar1;
}

int Function_148() //Position: 0x69F1 / 27121
{
	return Function_100(0);
}

bool Function_149(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x69FB / 27131
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (Global_30842[52])
	{
		fVar2 = 10000.0f;
	}
	else
	{
		fVar2 = 1500.0f;
	}
	fVar3 = GET_PROFILE_TIME();
	switch (*uParam1)
	{
		case 0x00000000:
			iVar1 = 0;
			while (iVar1 <= *uParam0)
			{
				(*uParam0)[iVar14] = 4294967295;
				uParam0[iVar14]->f_4 = 0;
				uParam0[iVar14]->f_8 = 99999999;
				iVar1++;
			}
			if (bParam3)
			{
				if (bParam4)
				{
					uParam0[04]->f_4 = 1;
					uParam0[04]->f_8 = ROUND(Function_132(Global_28235.f_12));
					(*uParam0)[04] = Function_122(StackVal, StackVal, *(&Global_28235 + 24), 1);
				}
				else
				{
					uParam0[04]->f_4 = 1;
					uParam0[04]->f_8 = ROUND(Function_132(Global_28210.f_12));
					(*uParam0)[04] = Function_122(StackVal, StackVal, *(&Global_28210 + 24), 1);
				}
			}
			*uParam1 = 1;
			break;
		
		case 0x00000001:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_118(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30640 - 1))
				{
					if (StackVal && !(StackVal && !(Function_18(&(Global_29008[Global_30640[iVar0]]), 32768) && (Function_18(&(Global_29008[Global_30640[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_150(uParam0, Global_30640[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30640 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 2;
			break;
		
		case 0x00000002:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_118(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30668 - 1))
				{
					if (StackVal && !(StackVal && !(Function_18(&(Global_29008[Global_30668[iVar0]]), 32768) && (Function_18(&(Global_29008[Global_30668[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_150(uParam0, Global_30668[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30668 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 3;
			break;
		
		case 0x00000003:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_118(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30658 - 1))
				{
					if (StackVal && !(StackVal && !(Function_18(&(Global_29008[Global_30658[iVar0]]), 32768) && (Function_18(&(Global_29008[Global_30658[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_150(uParam0, Global_30658[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30658 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 4;
			break;
		
		case 0x00000004:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_118(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30679 - 1))
				{
					if (StackVal && !(StackVal && !(Function_18(&(Global_29008[Global_30679[iVar0]]), 32768) && (Function_18(&(Global_29008[Global_30679[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_150(uParam0, Global_30679[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30679 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 5;
			break;
		
		case 0x00000005:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_118(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30723 - 1))
				{
					if (StackVal && !(StackVal && !(Function_18(&(Global_29008[Global_30723[iVar0]]), 32768) && (Function_18(&(Global_29008[Global_30723[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_150(uParam0, Global_30723[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30723 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 6;
			break;
		
		case 0x00000006:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_118(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30717 - 1))
				{
					if (StackVal && !(StackVal && !(Function_18(&(Global_29008[Global_30717[iVar0]]), 32768) && (Function_18(&(Global_29008[Global_30717[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_150(uParam0, Global_30717[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30717 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 7;
			break;
		
		case 0x00000007:
			if ((Global_29004 != 1 || Function_118(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30685 - 1))
				{
					if (StackVal && !(StackVal && !(Function_18(&(Global_29008[Global_30685[iVar0]]), 32768) && (Function_18(&(Global_29008[Global_30685[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_150(uParam0, Global_30685[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30685 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 8;
			break;
		
		case 0x00000008:
			if ((Global_29004 != 1 || Function_118(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30693 - 1))
				{
					if (StackVal && !(StackVal && !(Function_18(&(Global_29008[Global_30693[iVar0]]), 32768) && (Function_18(&(Global_29008[Global_30693[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_150(uParam0, Global_30693[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30693 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 9;
			break;
		
		case 0x00000009:
			if ((Global_29004 != 1 || Function_118(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30707 - 1))
				{
					if (StackVal && !(StackVal && !(Function_18(&(Global_29008[Global_30707[iVar0]]), 32768) && (Function_18(&(Global_29008[Global_30707[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_150(uParam0, Global_30707[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30707 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 10;
			break;
		
		case 0x0000000A:
			if (Global_30842[52])
			{
				iVar0 = 0;
				while (iVar0 <= *uParam0)
				{
					if (StackVal)
					{
						if (Function_163((*uParam0)[iVar04]) && !iVar0 != 0)
						{
						}
						else if (iVar0 == 0)
						{
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			return 1;
			break;
	}
	return 0;
}

void Function_150(var uParam0, int iParam1) //Position: 0x71DA / 29146
{
	var uVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	GET_OBJECT_POSITION(StackVal, &uVar0);
	iVar3 = Function_151(iParam1);
	iVar4 = 1;
	while (StackVal && (StackVal > iVar3 && iVar4 > (*uParam0 - 1)))
	{
		iVar4++;
	}
	iVar5 = iVar4;
	iVar6 = iParam1;
	iVar8 = iVar3;
	while (StackVal && iVar5 > (*uParam0 - 1))
	{
		iVar9 = StackVal;
		iVar7 = (*uParam0)[iVar54];
		uParam0[iVar54]->f_8 = iVar8;
		(*uParam0)[iVar54] = iVar6;
		uParam0[iVar54]->f_4 = 1;
		iVar8 = iVar9;
		iVar6 = iVar7;
		iVar5++;
	}
	if (!StackVal)
	{
		uParam0[iVar54]->f_8 = iVar8;
		(*uParam0)[iVar54] = iVar6;
		uParam0[iVar54]->f_4 = 1;
	}
	return;
}

int Function_151(int iParam0) //Position: 0x72A7 / 29351
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(StackVal, &vVar0);
	return Function_152(StackVal, StackVal, vVar0, 0);
}

int Function_152(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x72C4 / 29380
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	iVar4 = 16;
	if (bParam3)
	{
		iVar4 = 393264;
	}
	bVar5 = CREATE_OBJECTSET_IN_LAYOUT("tempPathSet", Global_28841, 36, 1);
	if (FIND_TRAFFIC_PATH(Global_28841, bVar5, &Global_34574, &uParam0, iVar4, &uVar3))
	{
		bVar6 = ROUND(Function_132(bVar5));
		Function_64(bVar5);
		DESTROY_OBJECTSET(bVar5);
		return bVar6;
	}
	Function_64(bVar5);
	DESTROY_OBJECTSET(bVar5);
	return ROUND(VDIST(Global_34574, vVar0));
}

void Function_153() //Position: 0x733A / 29498
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (GET_DAMAGE_BY_LOCAL_PLAYER(bLocal_315) < 0.0f)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (AI_GET_IS_RETREATING(bLocal_315))
		{
			bVar0 = true;
		}
	}
	Function_158(&uLocal_328, 16);
	if (Function_154(bLocal_315, &uVar1, &uLocal_323, uLocal_328, 0, 0x40400000))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (GET_DAMAGE_BY_LOCAL_PLAYER(bLocal_316) < 0.0f)
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		bVar3 = false;
		while (bVar3 <= GET_NUM_DRAFT_POSITIONS(bLocal_316))
		{
			bVar2 = GET_DRAFT_ACTOR(bVar3, bLocal_316);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (GET_DAMAGE_BY_LOCAL_PLAYER(bVar2) < 0.0f)
				{
					bVar0 = true;
				}
				if (Function_154(bVar2, &uVar1, &uLocal_323, uLocal_328, 0, 0x40400000))
				{
					bVar0 = true;
				}
			}
			bVar3++;
		}
	}
	if (bVar0)
	{
		Function_103();
		TASK_CLEAR(bLocal_315);
		SQUAD_GOALS_CLEAR(StackVal);
		AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_315);
		Function_82(StackVal);
		SAY_SINGLE_LINE_CONTEXT(bLocal_315, 60, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		MEMORY_PREFER_WALKING(bLocal_315, 1);
		bVar4 = TASK_SEQUENCE_OPEN();
		TASK_VEHICLE_LEAVE(false);
		TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_315, bVar4);
		TASK_SEQUENCE_RELEASE(bVar4, 1);
		TASK_PRIORITY_SET(bLocal_315, 0);
		iLocal_69 = 12;
		TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
	}
	return;
}

bool Function_154(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x745D / 29789
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_157(bParam0, Global_34573);
		if (!Function_12(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_155(bParam0);
				return 1;
			}
		}
		if (!Function_12(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_155(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_155(bParam0);
				return 1;
			}
		}
		if (!Function_12(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_155(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_155(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_12(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_155(bParam0);
				return 1;
			}
		}
		if (!Function_12(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_155(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_155(bool bParam0) //Position: 0x75F4 / 30196
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_156(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_156(bool bParam0) //Position: 0x7628 / 30248
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_157(bool bParam0, bool bParam1) //Position: 0x763F / 30271
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

void Function_158(var uParam0, var uParam1) //Position: 0x7730 / 30512
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

var Function_159() //Position: 0x773F / 30527
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_160() //Position: 0x7754 / 30548
{
	return Global_34578 != 3;
}

void Function_161(bool bParam0, int iParam1) //Position: 0x775F / 30559
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

var Function_162(bool bParam0) //Position: 0x7787 / 30599
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		bVar1++;
	}
	return "";
}

bool Function_163(int iParam0) //Position: 0x77CD / 30669
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_164(int iParam0) //Position: 0x77E3 / 30691
{
	Function_165(&Global_28842, iParam0);
	return;
}

void Function_165(var uParam0, var uParam1) //Position: 0x77F1 / 30705
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

