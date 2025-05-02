//Decompiled with MagicRDR v1.0
//Function Count : 262
//Statics Count : 478
//Natives Count : 412
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
	float fLocal_26 = 0.0f;
	struct<2> Local_27[38];
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
	var uLocal_166 = 0;
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
	var uLocal_181[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_259[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_337 = 0;
	var uLocal_338[5] = { 0, 0, 0, 0, 0 };
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	bool bLocal_354 = false;
	bool bLocal_355 = false;
	int iLocal_356 = 0;
	bool bLocal_357 = false;
	int iLocal_358 = 0;
	var uLocal_359[5] = { 0, 0, 0, 0, 0 };
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
	bool bLocal_379 = false;
	struct<9> Local_380 = { 0, 0, 0, 0, 0, 0, 0, 5, 0 } ;
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
	float fLocal_399 = 0.0f;
	bool bLocal_400 = false;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	int iLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	int iLocal_408 = 0;
	bool bLocal_409 = false;
	float fLocal_410 = 0.0f;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	bool bLocal_414 = false;
	int iLocal_415 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3[5];
	int iVar9[5];
	int iVar15[5];
	var uVar21;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	bool bVar62;
	int iVar63;
	var uVar66;
	struct<2> Var70;
	int iVar72;
	bool bVar73;
	bool bVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	struct<2> Var79;
	struct<2> Var81;
	int iVar83;
	int iVar84;
	float fVar85;
	int iVar87;
	struct<2> Var88;
	struct<2> Var90;
	struct<2> Var92;
	var uVar96;
	var uVar97;
	var uVar98;
	var uVar99;
	int iVar100;
	char* cVar109[32];
	struct<453> Var117;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_337 = 1;
	iLocal_353 = 4294967295;
	bLocal_354 = false;
	bLocal_355 = false;
	bLocal_357 = false;
	iLocal_358 = 0;
	bLocal_379 = false;
	fLocal_399 = 40.0f;
	bLocal_400 = 40;
	iLocal_405 = 0;
	iLocal_408 = 0;
	bLocal_409 = false;
	fLocal_410 = 0.0f;
	bLocal_414 = false;
	iLocal_415 = 0;
	iVar0 = 0;
	uVar2 = CREATE_LAYOUT(Function_261());
	uVar21 = 18;
	Function_260(&uLocal_375, 0.0f);
	iVar59 = 0;
	iVar60 = 0;
	bVar62 = false;
	iVar63 = 0;
	iVar72 = 0;
	bVar73 = true;
	bVar74 = false;
	iVar75 = 0;
	iVar76 = 0;
	iVar77 = 0;
	iVar84 = 0;
	vLocal_380 = -5,5f;
	vLocal_380.f_8 = 1,06f;
	vLocal_383.f_8 = 1,58f;
	iVar87 = 0;
	Var90 = Vector(1,1f, 0.0f, 0.0f);
	Var92 = Vector(-1,1f, 0.0f, 0.0f);
	bVar189 = false;
	if (!IS_POPSET_VALID(&(Global_46972[6])))
	{
		iVar0 = 5;
	}
	else
	{
		Function_258(&uVar21, "bankrobbery_cower", 5, 0);
		Function_258(&uVar21, "custom/bankrobbery_cower", 8, 0);
		Function_258(&uVar21, "nhanging_B", 5, 0);
		Function_258(&uVar21, "custom/hanging_B", 8, 0);
		Function_258(&uVar21, "beat_rob_player", 5, 0);
		Function_258(&uVar21, "custom/beat_rob_player", 8, 0);
		if (Global_43787 == 1)
		{
			iVar9[4] = 294;
			if (Function_257(ScriptParam_0.f_64, 2) == 0)
			{
				iVar9[0] = 499;
				Function_255(&iVar9, 496, 504, 499);
			}
			else
			{
				iVar9[0] = 501;
				Function_255(&iVar9, 496, 504, 501);
			}
		}
		else
		{
			if (Function_257(ScriptParam_0.f_64, 2) == 0)
			{
				iVar9[4] = 29;
			}
			else
			{
				iVar9[4] = 15;
			}
			if (Function_257(61, 2) == 0)
			{
				iVar9[0] = 420;
				Function_255(&iVar9, 467, 476, 470);
			}
			else
			{
				iVar9[0] = 474;
				Function_255(&iVar9, 467, 476, 474);
			}
		}
		iLocal_356 = iVar9[0];
		iVar58 = 0;
		while (iVar58 <= 5)
		{
			iVar15[iVar58] = Function_247(&(Global_46972[6]), 1, 0, 1);
			if (iVar15[iVar58] == 4294967295)
			{
				iVar15[iVar58] = 976;
			}
			else
			{
				Function_246(&uVar21, iVar15[iVar58], 3, 0);
			}
			iVar58++;
		}
		iVar58 = 0;
		while (iVar58 <= 5)
		{
			Function_246(&uVar21, iVar9[iVar58], 3, 0);
			iVar58++;
		}
		Function_245(&iVar9, 5);
		if (Global_6625 == 1)
		{
			iVar0 = 5;
		}
	}
	Function_244();
	iVar190 = 0;
	bVar191 = false;
	while (!IS_EXITFLAG_SET())
	{
		Function_243(StackVal, *(&ScriptParam_0 + 16));
		iVar83 = 600;
		if (Function_242(&bVar191, &iVar0, &iVar190, &iVar83, bLocal_357))
		{
			if (bVar191)
			{
				Function_240(&uVar3, 4294967295);
				Function_240(&uLocal_338, 4294967295);
			}
			else
			{
				Function_238(&uVar3, 4294967295);
				Function_238(&uLocal_338, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_232(&uVar21))
				{
					iVar0 = 1;
					iVar83 = 600;
				}
				break;
			
			case 0x00000001:
				if (Function_197(&ScriptParam_0, &iVar83, &iVar77, &iVar72, 1))
				{
					if (!Function_185(&Var117, &ScriptParam_0 + 60, 73))
					{
						iVar0 = 5;
						iVar83 = 0;
						break;
					}
					if (VDIST(Global_54078, *(&Var117 + 92)) > 50.0f)
					{
						iVar0 = 5;
						iVar83 = 0;
						break;
					}
					if (ABS(FLOOR((StackVal - StackVal))) >= 30)
					{
						iVar0 = 5;
						iVar83 = 0;
						break;
					}
					iVar0 = 2;
					iVar83 = 0;
				}
				else if (iVar72 == 1)
				{
					iVar0 = 5;
					iVar83 = 0;
				}
				break;
			
			case 0x00000002:
				iVar100 = Function_183();
				strcpy(&cVar109, "ammo_", 32);
				stradd(&cVar109, GET_AMMO_ENUM_STRING_FROM_ENUM(iVar100), 32);
				UI_SET_STRING("Buffer_AmmoCount", I2STR(bLocal_400));
				UI_SET_STRING("Buffer_AmmoType", UI_GET_STRING(&cVar109));
				uLocal_373 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uVar2, Function_261(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 7.0f, 20.0f));
				uLocal_371 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Trap_AcceptContext", &uLocal_373, 25, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_371))
				{
				}
				else
				{
					iVar0 = 5;
					iVar83 = 0;
					break;
				}
				if (VDIST(Global_54078, *(&ScriptParam_0 + 16)) > Function_182())
				{
					PRINTVECTOR(*(&ScriptParam_0 + 16));
					PRINTNL();
					PRINTVECTOR(Global_54078);
					PRINTNL();
					iVar0 = 5;
					iVar83 = 0;
					break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 16));
				PRINTNL();
				PRINTVECTOR(Global_54078);
				PRINTNL();
				Function_181(StackVal, StackVal, Global_54078, *(&ScriptParam_0 + 16));
				uVar66 = Function_181(StackVal, StackVal, Global_54078, *(&ScriptParam_0 + 16));
				fVar85 = UNK_0x9C40E671(&uVar66);
				Var79 = Vector(StackVal, StackVal, StackVal) - Vector(*(&ScriptParam_0 + 16), Global_54078, StackVal);
				Var79 = Vector(StackVal, StackVal, StackVal) / Vector(FtoV(Function_180(Var79, &Global_54076, *(&ScriptParam_0 + 16))), StackVal, StackVal);
				Var81 = Var79;
				VSCALE(&Var79, 6.0f);
				VSCALE(&Var81, 8.0f);
				uVar3[4] = Function_178(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar2, Vector(Function_261(), iVar9[4], Function_261()) + Vector(Var81, *(&ScriptParam_0 + 16), iVar15[4]), *(&ScriptParam_0 + 28));
				SNAP_OBJECT_TO_GROUND(&(uVar3[4]), 6.0f, 0, 1092616192);
				SET_ACTOR_CAN_PLAY_GESTURES(&(uVar3[4]), false);
				Function_177(&(uVar3[4]), 0);
				Function_176(&(uVar3[4]), 0);
				Function_175(&(uVar3[4]));
				ACTOR_START_FORCE_HOLSTER(&(uVar3[4]), 0, 0);
				Var79 = -Vector(Var79, StackVal, StackVal);
				Function_181(StackVal, StackVal, Var79, Var81);
				uVar66 = Function_181(StackVal, StackVal, Var79, Var81);
				fVar85 = UNK_0x9C40E671(&uVar66);
				iVar58 = 0;
				iVar58 = 0;
				while (iVar58 <= 4)
				{
					if (iVar58 < 1)
					{
						Var88 = Vector(StackVal, StackVal, StackVal) + Vector(Var90, *(&Var117 + 92), StackVal);
						Var90 = (Var90 - 0,7f);
					}
					else
					{
						Var88 = Vector(StackVal, StackVal, StackVal) + Vector(Var92, *(&Var117 + 92), StackVal);
						Var92 = (Var92 - 0,8f);
					}
					uVar3[iVar58] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar2, Function_261(), iVar9[iVar58], Var88, Vector(0.0f, fVar85, 0.0f));
					AI_GLOBAL_SET_PERMANENT_DANGER(&(uVar3[iVar58]), 1);
					SET_ACTOR_CAN_PLAY_GESTURES(&(uVar3[iVar58]), false);
					Function_175(&(uVar3[iVar58]));
					MEMORY_ATTACK_ON_SIGHT(&(uVar3[iVar58]), 0);
					SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&(uVar3[iVar58])), 2.0f, 1, 1092616192);
					Function_176(&(uVar3[iVar58]), 0);
					iVar58++;
				}
				iVar58 = 0;
				while (iVar58 <= 5)
				{
					Function_174(&(uVar3[iVar58]));
					DELETE_ALL_WEAPONS_FROM_ACTOR(&(uVar3[iVar58]));
					GIVE_WEAPON_TO_ACTOR(&(uVar3[iVar58]), 4, 0f, 1, 1);
					iVar192 = 0;
					while (iVar192 <= 5)
					{
						if (iVar58 != iVar192)
						{
							MEMORY_CONSIDER_AS(&(uVar3[iVar58]), &(uVar3[iVar192]), 0);
						}
						iVar192++;
					}
					iVar58++;
				}
				Var70 = *(&Var117 + 116);
				Function_181(StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var79, *(&ScriptParam_0 + 16), StackVal), Var70);
				uVar66 = Function_181(StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var79, *(&ScriptParam_0 + 16), StackVal), Var70);
				fVar85 = UNK_0x9C40E671(&uVar66);
				uLocal_338[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar2, Function_261(), iVar15[0], *(&Var117 + 356), Vector(0.0f, Var117.f_440, 0.0f));
				uLocal_338[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar2, Function_261(), iVar15[1], *(&Var117 + 368), Vector(0.0f, Var117.f_444, 0.0f));
				uLocal_338[2] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar2, Function_261(), iVar15[2], *(&Var117 + 380), Vector(0.0f, Var117.f_448, 0.0f));
				uLocal_338[3] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar2, Function_261(), iVar15[3], *(&Var117 + 392), Vector(0.0f, Var117.f_452, 0.0f));
				iVar58 = 0;
				while (iVar58 <= 4)
				{
					TASK_STAND_STILL(&(uLocal_338[iVar58]), -1.0f, 0, 0);
					ACCESSORIZE_HORSE(&(uLocal_338[iVar58]), 3);
					iVar58++;
				}
				uLocal_338[4] = GET_MOUNT(&(uVar3[4]));
				TASK_CLEAR(&(uVar3[4]));
				TASK_FACE_ACTOR(&(uVar3[4]), &Global_54076, 1, 3212836864);
				TASK_PRIORITY_SET(&(uVar3[4]), false);
				iVar58 = 0;
				iVar58 = 0;
				while (iVar58 <= 4)
				{
					TASK_CROUCH(&(uVar3[iVar58]), -1.0f);
					TASK_PRIORITY_SET(&(uVar3[iVar58]), false);
					iVar58++;
				}
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar3[4]), 0);
				UNK_0x99AFD2D1(&(uVar3[4]), 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar3[1]), 0);
				UNK_0x99AFD2D1(&(uVar3[1]), 1, 1);
				Function_172(StackVal, &uLocal_350, &uLocal_351, &iLocal_353, 4.0f, *(&ScriptParam_0 + 16));
				Function_171(&iVar63, 1);
				Function_171(&iVar63, 16);
				Function_171(&iVar63, 2);
				bVar189 = true;
				uVar96 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar2, Function_261(), 0f, *(&Var117 + 92), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 30.0f, 30.0f));
				CLEAR_AMBIENT_OBJECTS_SPHERE(*(&Var117 + 92), 30.0f, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar96);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar96);
				uVar97 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar2, Function_261(), 0f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(35.0f, 10.0f, 35.0f));
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uVar97, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar97);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar97);
				ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uVar97), &(uVar3[4]), Function_261(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uVar98 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar2, Function_261(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&Var117 + 200), Vector(0.0f, Var117.f_280, 0.0f));
				uVar99 = GET_GRINGO_FROM_OBJECT(&uVar98);
				Function_167(StackVal, &uVar99, Vector(0.0f, 0.0f, 0.0f), 4294967295, 11, 3.0f);
				iVar0 = 3;
				iVar83 = 0;
				break;
			
			case 0x00000003:
				Function_154(&uVar3, 5, &bLocal_357, ScriptParam_0.f_64, 60, 0x42700000, 1);
				if (!Function_148(ScriptParam_0.f_64, &(uVar3[4]), &iVar60, &iVar84, iVar60, 1, 1, 1))
				{
					iVar0 = 5;
					iVar83 = 0;
					break;
				}
				if (!Function_144(StackVal, &Global_54076, *(&Var117 + 92), Function_146(1)))
				{
					iVar83 = 0;
					iVar0 = 5;
					break;
				}
				if (!bVar62)
				{
					iVar58 = 0;
					while (iVar58 <= 5)
					{
						if (GET_LAST_ATTACKER(&(uLocal_338[iVar58])) == &Global_54076)
						{
							bVar62 = true;
						}
						else if (GET_RIDER(&(uLocal_338[iVar58])) == &Global_54076)
						{
							bVar62 = true;
						}
						if (bVar62)
						{
							if (iVar59 <= 10)
							{
								HUD_CLEAR_HELP_QUEUE();
								Function_143(&(uVar3[1]), &Global_54076, "MINOR_SHOCK", 0, 5, 60, 1, 1);
								iVar59 = 10;
							}
						}
						iVar58++;
					}
				}
				if (Function_139(&uVar3, 5, &iVar61, &uVar1, &fLocal_410, iVar63, bVar62, 0x40200000))
				{
					if (iVar59 <= 10)
					{
						if (iVar59 >= 4)
						{
							Function_143(&Global_54076, 0, "HomesteadTrapPlayer_msg01", "HomesteadTrapPlayer_msg01", 5, 60, 1, 1);
							iVar59 = 10;
						}
						else
						{
							iVar58 = 0;
							while (iVar58 <= 5)
							{
								if (iVar58 == iVar61)
								{
									ACTOR_END_FORCE_HOLSTER(&(uVar3[iVar61]));
									Function_138(&(uVar3[iVar61]), &Global_54076);
								}
								else
								{
									TASK_FLEE_ACTOR(&(uVar3[iVar61]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
								}
								iVar58++;
							}
							HUD_CLEAR_OBJECTIVE_QUEUE();
							iVar87 = 1;
							iVar0 = 5;
							iVar83 = 0;
							break;
						}
					}
					bVar62 = true;
				}
				if (!bVar74)
				{
					iVar58 = 0;
					bVar73 = true;
					iVar58 = 0;
					while (iVar58 <= 5)
					{
						if (IS_ACTOR_VALID(&(uVar3[iVar58])))
						{
							if (Function_136(&(uVar3[iVar58]), 1))
							{
								bVar73 = false;
							}
							if (&Global_54076 == GET_LAST_ATTACKER(&(uVar3[iVar58])))
							{
								if (iVar59 <= 10)
								{
									iVar59 = 10;
								}
							}
						}
						iVar58++;
					}
					if (bVar73)
					{
						Function_85(GET_ACTOR_ENUM_FACTION(iLocal_356));
						Function_80(5, 1, 0);
						Function_79(&uVar3, 5, &bLocal_354, &bLocal_355, 0);
						if (bLocal_355)
						{
							Function_55(50, 1, 0);
						}
						else if (bLocal_354)
						{
							Function_55(100, 1, 0);
						}
						bVar74 = true;
						iVar0 = 5;
						iVar83 = 0;
						break;
					}
				}
				if (IS_ACTOR_VALID(&(uVar3[1])))
				{
					if (Function_54(&(uVar3[1]), &Global_54076, 30.0f) && iVar59 > 5)
					{
						if (Function_52(&uVar3, 4, 0x42960000) && Function_51(&Global_54076, &(uVar3[4])) < Function_51(&Global_54076, &(uVar3[1])))
						{
							Function_143(&(uVar3[4]), &Global_54076, "HomesteadTrap_msg06", "HomesteadTrap_msg06", 5, 60, 1, 1);
							AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar3[4]), 1);
							UNK_0x99AFD2D1(&(uVar3[4]), 0, 0);
							iVar59 = 10;
						}
					}
				}
				if (Function_17(&iVar59, &uVar3, &uLocal_338, &Var117, &uVar2, iVar100))
				{
					iVar87 = 1;
					iVar0 = 5;
					iVar83 = 0;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar83 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar83 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar83);
		}
	}
	if (bLocal_414)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_238(&uVar3, 4294967295);
	Function_238(&uLocal_338, 4294967295);
	Function_16(&iVar9, 5);
	Function_15(&uLocal_350, &uLocal_351, &iLocal_353);
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (!bLocal_357)
	{
		Function_9(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (!bLocal_357)
	{
		Function_9(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	iVar58 = 0;
	while (iVar58 <= 5)
	{
		if (IS_BLIP_VALID(&(uLocal_359[iVar58])))
		{
			REMOVE_BLIP(&(uLocal_359[iVar58]));
		}
		Function_7(&(uVar3[iVar58]));
		iVar58++;
	}
	Function_7(&(uVar3[4]));
	if (!bLocal_357)
	{
		Function_5(&uVar3, 4294967295);
		Function_5(&uLocal_338, 4294967295);
		if (IS_OBJECT_VALID(&uVar2))
		{
			UNK_0xA936E73B(&uVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar2, 1);
		}
	}
	if (Function_136(&(uVar3[4]), 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar3[4]), 1);
		UNK_0x99AFD2D1(&(uVar3[4]), 0, 0);
	}
	if (Function_136(&(uVar3[1]), 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar3[1]), 1);
		UNK_0x99AFD2D1(&(uVar3[1]), 0, 0);
	}
	if (iVar87 == 0)
	{
		Function_5(&uVar3, 4294967295);
	}
	if (IS_VOLUME_VALID(&uLocal_373))
	{
		DESTROY_VOLUME(&uLocal_373);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_371))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_371);
	}
	Function_1(&uVar21);
	if (bVar189)
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar96);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar96);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar97);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar97);
	}
	RELEASE_LAYOUT_REF(&uVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xE0E / 3598
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0xE36 / 3638
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

void Function_3(struct<13> Param0) //Position: 0xF81 / 3969
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xF9E / 3998
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var[] uParam0, int iParam1) //Position: 0xFBC / 4028
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_6(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_6(int iParam0) //Position: 0xFEE / 4078
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

int Function_7(int iParam0) //Position: 0x101E / 4126
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_8(&iParam0);
		return 1;
	}
	return 0;
}

void Function_8(int iParam0) //Position: 0x1036 / 4150
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		}
	}
	return;
}

bool Function_9(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1069 / 4201
{
	bool bVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	fParam1 = &fParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_11("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_27462[iParam052].f_184 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_6608)
			{
				if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_6608 = 1;
			Global_10986 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_10(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_10(&bVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_10(&bVar0);
		}
		*(&Global_27462[iParam052] + 376) = &bVar0;
		Global_26652[iParam04] = &bVar0;
		if (&bParam2)
		{
			Global_26652[iParam04].f_8 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_27462[iParam052].f_184 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_6608)
				{
					if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_6608 = 1;
				Global_10986 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_10(bool bParam0) //Position: 0x12D5 / 4821
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&bParam0));
	return;
}

void Function_11(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x131F / 4895
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_12(int iParam0) //Position: 0x13A4 / 5028
{
	char* cVar0[16];
	
	if (!Function_13())
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

bool Function_13() //Position: 0x13E3 / 5091
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, int iParam1) //Position: 0x13FE / 5118
{
	return (bParam0 && iParam1) == 0;
}

void Function_15(var uParam0, var uParam1, int iParam2) //Position: 0x140B / 5131
{
	if (uParam0 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(uParam0);
	}
	if (uParam1 != 4294967295)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(uParam1);
	}
	if (iParam2 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam2);
	}
	return;
}

void Function_16(var[] uParam0, bool bParam1) //Position: 0x143E / 5182
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_17(var uParam0, var[] uParam1) //Position: 0x1461 / 5217
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	switch (uParam0)
	{
		case 0x00000000:
			if (VDIST(Global_54078, (&iParam3 + 92)) < 225.0f)
			{
				Function_49(StackVal, &(uParam1[4]), Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
				return 1;
			}
			if (Function_48(&(uParam1[4]), &Global_54076, &iLocal_408, &uParam4, 55.0f, &bLocal_409, &uLocal_406, &uLocal_401, &iLocal_405, 25.0f, 1, 4, -9.0f, 25.0f, "HomesteadTrap_msg01", 0))
			{
				if (bLocal_409)
				{
					Function_45();
					ACTOR_START_FORCE_HOLSTER(&(uParam1[4]), 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&(uParam1[4]), &Global_54076, 10.0f, 1);
					uParam0 = 1;
					Function_260(&uLocal_401, 0.0f);
				}
			}
			else
			{
				TASK_WANDER(&(uParam1[4]), -1.0f);
				return 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(&(uParam1[4])))
			{
				if (Function_51(&(uParam1[4]), &Global_54076) > 12.0f && !iLocal_358)
				{
					iLocal_358 = 1;
					TASK_STAND_STILL(&(uParam1[4]), -1.0f, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&(uParam1[4]), &Global_54076, 10.0f, 1);
				}
			}
			if (Function_41(&uLocal_401, 3.0f) && !IS_AMBIENT_SPEECH_PLAYING(&(uParam1[4])))
			{
				SET_ANIM_SET_FOR_ACTOR(&(uParam1[4]), "nhanging_B", 0);
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[4]), "nhanging_B");
				Function_143(&(uParam1[4]), &Global_54076, "HomesteadTrap_msg02", "HomesteadTrap_msg02", 5, 60, 1, 1);
				TASK_STAND_STILL(&(uParam1[4]), -1.0f, 0, 0);
				Function_260(&uLocal_401, 0.0f);
				uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_41(&uLocal_401, 3.0f) && !IS_AMBIENT_SPEECH_PLAYING(&(uParam1[4])))
			{
				ACTOR_END_FORCE_HOLSTER(&(uParam1[4]));
				RESET_ANIM_SET_FOR_ACTOR(&(uParam1[4]), 1);
				Function_40("Trap_objective", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_ACTOR(&(uParam1[4]), 325, 0.0f, 3, 0);
				iLocal_352 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &iParam3 + 92, 18.0f, 4);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uParam1[4]), iLocal_352);
				TASK_SEQUENCE_RELEASE(iLocal_352, 1);
				uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (StackVal || ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[4]), 1.0f, 18.0f, 1, 0, 0) && GET_TASK_STATUS(&(uParam1[4]), 22) != 1) && Function_180(Function_41(&uLocal_375, 12.0f), &Global_54076, *(&iParam3 + 92)) > 20.0f))
			{
				Function_24(61);
				RESET_ANIM_SET_FOR_ACTOR(&(uParam1[4]), 1);
				TASK_CLEAR(&(uParam1[4]));
				TASK_POINT_GUN_AT_OBJECT(&(uParam1[4]), GET_OBJECT_FROM_ACTOR(&Global_54076), -1.0f, 1);
				TASK_PRIORITY_SET(&(uParam1[4]), false);
				Function_23(&(uParam1[4]), &Global_54076, 4, 1);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam1[iVar0]), 0);
					ACTOR_DRAW_ANY_WEAPON(&(uParam1[iVar0]), 1);
					AI_GOAL_AIM_AT_OBJECT(&(uParam1[iVar0]), &Global_54076, 1);
					AI_GOAL_LOOK_AT_ACTOR(&(uParam1[iVar0]), &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
					TASK_SURROUND_ACTOR(&(uParam1[iVar0]), &Global_54076, 1.0f, 13,5f, 1, -1.0f);
					TASK_PRIORITY_SET(&(uParam1[iVar0]), false);
					iVar0++;
				}
				iLocal_352 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTOR(0, &Global_54076, 11.0f, 3);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uParam1[4]), iLocal_352);
				TASK_SEQUENCE_RELEASE(iLocal_352, 1);
				AI_GOAL_AIM_CLEAR(&(uParam1[4]));
				Function_260(&uLocal_375, 0.0f);
				iLocal_358 = 0;
				uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_51(&(uParam1[4]), &Global_54076) > 12.0f && !iLocal_358)
			{
				iLocal_358 = 1;
				TASK_STAND_STILL(&(uParam1[4]), 5.0f, 0, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&(uParam1[4]), &Global_54076, 10.0f, 1);
			}
			iVar0 = 0;
			if (Function_41(&uLocal_375, 6.0f) || Function_52(&uParam1, 4, 35.0f))
			{
				Function_143(&(uParam1[4]), &Global_54076, "HomesteadTrap_msg03", "HomesteadTrap_msg03", 5, 60, 1, 1);
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LIGHT", 0, 4294967295, 4294967295);
				Function_7(&(uParam1[4]));
				if (Function_180(StackVal, &Global_54076, *(&iParam3 + 92)) > 32.0f)
				{
					Function_260(&uLocal_375, 0.0f);
					uParam0 = 6;
					bLocal_379 = true;
				}
				else
				{
					uParam0 = 10;
				}
				if (bLocal_379)
				{
					iLocal_352 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_ACTOR(0, &Global_54076, 11.0f, 3);
					TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
					TASK_POINT_GUN_AT_OBJECT(0, &Global_54076, -1.0f, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&(uParam1[4]), iLocal_352);
					TASK_SEQUENCE_RELEASE(iLocal_352, 1);
				}
			}
			break;
		
		case 0x00000006:
			if (((GET_NTH_TASK_STATUS(&(uParam1[4]), 1) != 0 && Function_52(&uParam1, 4, 30.0f)) || Function_41(&uLocal_375, 6.0f)) && iLocal_337)
			{
				ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uLocal_373), &(uParam1[4]), Function_261(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				Function_22("eventRoadsideAmbush_help01", 0x41200000, 1, 0, 2, 1, 0);
				Function_260(&uLocal_375, 0.0f);
				iLocal_337 = 0;
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_371))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_371))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&(uParam1[4]));
					RESET_ANIM_SET_FOR_ACTOR(&(uParam1[4]), 1);
					HUD_CLEAR_HELP();
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uParam1[4]), 1);
					UNK_0x99AFD2D1(&(uParam1[4]), 0, 0);
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_371);
					DESTROY_VOLUME(&uLocal_373);
					uParam0 = 7;
					break;
				}
			}
			if (Function_180(StackVal, &Global_54076, *(&iParam3 + 92)) < 42.0f || Function_41(&uLocal_375, 15.0f))
			{
				Function_143(&(uParam1[4]), &Global_54076, "HomesteadTrap_msg05", "HomesteadTrap_msg05", 5, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uParam1[4]), 1);
				UNK_0x99AFD2D1(&(uParam1[4]), 0, 0);
				uParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (bLocal_414)
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_MEDIUM", 0, 4294967295, 4294967295);
			}
			else
			{
				Function_45();
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_MEDIUM", 0, 4294967295, 4294967295);
			}
			Function_21(0);
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_371))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_371);
			}
			if (IS_VOLUME_VALID(&uLocal_373))
			{
				DESTROY_VOLUME(&uLocal_373);
			}
			HUD_CLEAR_HELP();
			Function_7(&(uParam1[4]));
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (Function_136(&(uParam1[iVar0]), 0))
				{
					if (!IS_BLIP_VALID(&(uLocal_359[iVar0])))
					{
						uLocal_359[iVar0] = ADD_BLIP_FOR_ACTOR(&(uParam1[iVar0]), 322, 0, 2, 0);
					}
					Function_23(&(uParam1[iVar0]), &Global_54076, 4, 1);
					AI_GOAL_AIM_CLEAR(&(uParam1[iVar0]));
					ACTOR_END_FORCE_HOLSTER(&(uParam1[iVar0]));
					Function_138(&(uParam1[iVar0]), &Global_54076);
					TASK_PRIORITY_SET(&(uParam1[iVar0]), false);
				}
				iVar0++;
			}
			uParam0 = 12;
			break;
		
		case 0x0000000C:
			Function_21(0);
			break;
		
		case 0x00000007:
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				if (_GET_AMMO_AMOUNT(&Global_54076, bParam5, 1) <= fLocal_399)
				{
					Function_143(&Global_54076, 0, "HomesteadTrapPlayer_msg02", "HomesteadTrapPlayer_msg02", 5, 60, 1, 1);
					Function_20(bParam5, fLocal_399, 1);
					DECOR_SET_INT(&(uParam1[4]), "iSSAmmoType", bParam5);
					DECOR_SET_FLOAT(&(uParam1[4]), "fSSAmmoAmt", (fLocal_399 + 12.0f));
					Function_260(&uLocal_375, 0.0f);
					AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
					uParam0 = 8;
					iVar0 = 0;
					while (iVar0 <= 5)
					{
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&(uParam1[iVar0]), 28, 0.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&(uParam1[iVar0]), 31, -1.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&(uParam1[iVar0]), 37, 2.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&(uParam1[iVar0]), 38, 0,5f);
						COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&(uParam1[iVar0]), 0);
						MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(&(uParam1[iVar0]));
						MEMORY_CONSIDER_AS(&(uParam1[iVar0]), &Global_54076, 2);
						iVar0++;
					}
				}
				else
				{
					Function_18("Trap_notEnoughAmmo", 1, 1);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uParam1[4]), 1);
					UNK_0x99AFD2D1(&(uParam1[4]), 0, 0);
					uParam0 = 10;
				}
			}
			break;
		
		case 0x00000008:
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					fLocal_386 = RAND_FLOAT_RANGE(0,5f, 4.0f);
					iLocal_352 = TASK_SEQUENCE_OPEN();
					AI_GOAL_AIM_CLEAR(&(uParam1[iVar0]));
					TASK_FACE_ACTOR(0, &Global_54076, 1, fLocal_386);
					TASK_MOUNT(0, &(uParam2[iVar0]), 1, 1, 2, 2147483647);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&(uParam1[iVar0]), iLocal_352);
					TASK_SEQUENCE_RELEASE(iLocal_352, 1);
					TASK_PRIORITY_SET(&(uParam1[iVar0]), false);
					iVar0++;
				}
				Function_143(&(uParam1[4]), &Global_54076, "HomesteadTrap_msg04", "HomesteadTrap_msg04", 5, 60, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam1[4]), 1);
				ACTOR_HOLSTER_WEAPON(&(uParam1[4]), 1);
				iLocal_352 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 1, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uParam1[4]), iLocal_352);
				TASK_SEQUENCE_RELEASE(iLocal_352, 1);
				TASK_PRIORITY_SET(&(uParam1[4]), false);
				uParam0 = 9;
			}
			break;
		
		case 0x00000009:
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&(uParam1[iVar0])))
				{
					bVar1 = false;
				}
				else if (!iLocal_387[iVar0])
				{
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam1[iVar0]), 1);
					Function_49(StackVal, &(uParam1[iVar0]), Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
					iLocal_387[iVar0] = 1;
				}
				iVar0++;
			}
			if (bVar1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_18(var uParam0, bool bParam1, bool bParam2) //Position: 0x1EFF / 7935
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_40(&uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (&bParam2)
		{
			Function_19();
		}
	}
	return;
}

void Function_19() //Position: 0x1F2A / 7978
{
	switch (Global_43787)
	{
		case 0x00000000:
			AUDIO_MUSIC_ONE_SHOT("FTR_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT("MEX_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_ONE_SHOT("NRT_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_20(bool bParam0, float fParam1, bool bParam2) //Position: 0x1FB3 / 8115
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	float fVar6;
	
	uVar0 = GET_WEAPONENUM_FOR_AMMOENUM(&Global_54076, iParam0);
	fVar1 = _GET_AMMO_AMOUNT(&Global_54076, iParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(&Global_54076, uVar0);
	if (fVar1 <= fParam1)
	{
		fVar3 = fParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (fParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(&Global_54076, uVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, bParam0, (fVar1 - fVar3), 0);
	}
	if (&bParam2)
	{
		bVar5 = FLOOR(fParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			fVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			fVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			fVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			fVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			fVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			fVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(&fVar6), INT_TO_STRING(bVar5), 5.0f, Function_261(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_21(int iParam0) //Position: 0x20F7 / 8439
{
	switch (iLocal_415)
	{
		case 0x00000000:
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
				{
					iLocal_415 = 1;
				}
			}
			break;
		
		case 0x00000001:
			break;
	}
	return;
}

void Function_22(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2130 / 8496
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

int Function_23(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x21BB / 8635
{
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&iParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&iParam0, &iParam1, iParam2);
			MEMORY_IDENTIFY(&iParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &iParam0, iParam2);
				MEMORY_IDENTIFY(&iParam1, &iParam0);
			}
		}
	}
	return 1;
}

void Function_24(int iParam0) //Position: 0x221B / 8731
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_25(409, 1, 0, 0);
	}
	return;
}

int Function_25(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x224C / 8780
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
	Function_39(iParam0, TO_FLOAT(bParam1), 1);
	Function_38(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_27(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_26(iParam0);
	return 1;
}

void Function_26(bool bParam0) //Position: 0x2474 / 9332
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

void Function_27(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2512 / 9490
{
	char* cVar0[32];
	bool bVar8;
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_37(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_36(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_36(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_34(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_31(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_28(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_261(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_28(int iParam0) //Position: 0x2B50 / 11088
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_29(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2B61 / 11105
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_30(char* cParam0) //Position: 0x2C58 / 11352
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_31(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2C73 / 11379
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_33(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_32(Function_33(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_32(int iParam0, int iParam1) //Position: 0x2CDA / 11482
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_33(int iParam0, int iParam1) //Position: 0x2CEC / 11500
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_34(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2CFE / 11518
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
	if (((Function_35(iParam0) != 19 || Function_35(iParam0) != 17) || Function_35(iParam0) != 10) || Function_35(iParam0) != 9)
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

int Function_35(int iParam0) //Position: 0x2E32 / 11826
{
	return Global_55480[iParam016].f_96;
}

float Function_36(int iParam0) //Position: 0x2E41 / 11841
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_37(int iParam0) //Position: 0x2E7A / 11898
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_38(int iParam0) //Position: 0x2EB7 / 11959
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

int Function_39(int iParam0, float fParam1, bool bParam2) //Position: 0x3051 / 12369
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

void Function_40(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x3295 / 12949
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

int Function_41(var uParam0, float fParam1) //Position: 0x332A / 13098
{
	if (Function_44(&uParam0))
	{
		if (Function_42(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_42(vector3 vParam0) //Position: 0x3348 / 13128
{
	if (Function_44(&vParam0))
	{
		if (Function_43(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_43(int iParam0) //Position: 0x3415 / 13333
{
	return Function_14(iParam0, 2);
}

bool Function_44(bool bParam0) //Position: 0x3423 / 13347
{
	return Function_14(bParam0, 1);
}

void Function_45() //Position: 0x3431 / 13361
{
	int iVar0;
	
	bLocal_414 = true;
	if (Global_43787 == 0)
	{
		iVar0 = Function_47(4);
		if (iVar0 == 0)
		{
			uLocal_412 = "TC_FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			uLocal_412 = "TC_FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			uLocal_412 = "TC_FTR_SONG_03";
		}
		else
		{
			uLocal_412 = "TC_FTR_SONG_04";
		}
	}
	else if (Global_43787 == 2)
	{
		iVar0 = Function_47(2);
		if (iVar0 == 0)
		{
			uLocal_412 = "TC_NRT_SONG_01";
		}
		else if (iVar0 == 1)
		{
			uLocal_412 = "TC_NRT_SONG_02";
		}
	}
	else if (Global_43787 == 1)
	{
		if (Function_46())
		{
			uLocal_412 = "TC_MEX_SONG_01";
		}
		else
		{
			uLocal_412 = "TC_MEX_SONG_02";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&uLocal_412, "SUSPENSE_DARK", -3.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_46() //Position: 0x3563 / 13667
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_47(bool bParam0) //Position: 0x3576 / 13686
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_48(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, var uParam5, int iParam6, var uParam7, var uParam8, float fParam9, bool bParam10, var uParam11, var uParam12, float fParam13, bool bParam14, int iParam15) //Position: 0x358F / 13711
{
	float fVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (&fParam13 == 0.0f && !uParam8)
	{
		if (&fParam13 > &fParam9)
		{
			LOG_ERROR("firstAudioDist is too low to ever work");
		}
		else if (Function_51(&iParam0, &iParam1) > &fParam13)
		{
			uParam8 = 1;
			Function_143(&iParam0, &Global_54076, &bParam14, &bParam14, 5, 60, 1, &iParam15);
			Function_260(&uParam7, 0.0f);
		}
	}
	switch (uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
			fLocal_26 = Function_51(&iParam0, &Global_54076);
			AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &iParam1, -1.0f, 1);
			iParam6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam3, Function_261(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
			ATTACH_OBJECTS(StackVal, StackVal, &iParam6, &iParam1, Function_261(), Vector(0.0f, 0,5f, &uParam12), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0, &iParam6, 1.0f, &uParam11);
			TASK_PRIORITY_SET(&iParam0, true);
			uParam2 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ON_FOOT(&Global_54076))
			{
				fVar0 = (&fParam9 - 3.0f);
			}
			else
			{
				fVar0 = &fParam9;
			}
			if ((Function_51(&iParam0, &iParam1) - fLocal_26) < fParam4)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, fVar0, 1, 1, 0))
			{
				if (&bParam10)
				{
					TASK_CLEAR(&iParam0);
					TASK_FACE_ACTOR(&iParam0, &iParam1, 1, 3212836864);
				}
				else
				{
					AI_GOAL_LOOK_CLEAR(&iParam0);
				}
				uParam5 = 1;
				return 1;
			}
			if (!Function_136(&iParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void Function_49(float fParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x374F / 14159
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&fParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideCurve", &iParam3);
	}
	if (!Function_50(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&fParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&fParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&fParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&fParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&fParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&fParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&fParam0, 1);
}

bool Function_50(char* cParam0) //Position: 0x386E / 14446
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

float Function_51(var uParam0, int iParam1) //Position: 0x3886 / 14470
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

int Function_52(var[] uParam0, int iParam1, bool bParam2) //Position: 0x397B / 14715
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		if (Function_136(&(uParam0[iVar0]), 0))
		{
			if (Function_53(&(uParam0[iVar0]), 1.0f, &bParam2, 1, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_53(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x39CA / 14794
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

int Function_54(var uParam0, var uParam1, bool bParam2) //Position: 0x39EA / 14826
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

void Function_55(int iParam0, bool bParam1, bool bParam2) //Position: 0x3AFF / 15103
{
	int iVar0;
	bool bVar1;
	
	if (Function_78(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_77())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_76(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_75(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_74(Global_119936, 1))
				{
					Function_68(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_66(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_74(Global_119936, 2))
				{
					Function_68(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_25(1, bVar1, 0, 0);
	}
	else
	{
		Function_65(1, (4294967295 * bVar1), 0);
	}
	if (Function_76(1) <= 4294962296)
	{
		Function_64(1, 4294962296, 0);
	}
	else if (Function_76(1) >= 5000)
	{
		Function_64(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_36(1));
	iVar0 = Function_76(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_57(2, Function_63(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_57(2, Function_63(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_57(2, Function_63(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_57(2, Function_63(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_57(2, Function_63(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_57(2, Function_63(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_57(2, Function_63(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_57(2, Function_63(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_57(2, Function_63(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_57(2, Function_63(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_57(2, Function_63(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_21369.f_244 = 5;
				Function_57(2, Function_63(Global_21369.f_244), 0);
			}
			break;
	}
	Function_56(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_56(int iParam0, int iParam1) //Position: 0x3E26 / 15910
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_57(int iParam0, char* cParam1) //Position: 0x4092 / 16530
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_61(iParam0, &cParam1, 0, 1);
	iVar1 = Function_58();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_58() //Position: 0x4222 / 16930
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_59();
	return 0;
}

void Function_59() //Position: 0x42C3 / 17091
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_60(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_60(int iParam0) //Position: 0x4381 / 17281
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

int Function_61(int iParam0, char* cParam1) //Position: 0x43E7 / 17383
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_62(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_62(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x473E / 18238
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

var Function_63(int iParam0) //Position: 0x47C6 / 18374
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_64(int iParam0, bool bParam1, bool bParam2) //Position: 0x4869 / 18537
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_39(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_38(iParam0);
	if (&bParam2)
	{
		Function_27(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_65(int iParam0, bool bParam1, int iParam2) //Position: 0x4B05 / 19205
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
	Function_38(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_27(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_66(int iParam0, bool bParam1) //Position: 0x4D02 / 19714
{
	bool bVar0;
	int iVar1;
	
	Function_65(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_67(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_58();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_67(int iParam0, int iParam1) //Position: 0x4EAD / 20141
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_68(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4EF2 / 20210
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_70(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_69(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_69(char* cParam0) //Position: 0x4F67 / 20327
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

bool Function_70(int iParam0, var uParam1, int iParam2) //Position: 0x4FA1 / 20385
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
		if (Function_72(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_71(uVar0))
		{
			case 0x00000002:
				if (!Function_74(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_71(char* cParam0) //Position: 0x501D / 20509
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

int Function_72(int iParam0) //Position: 0x50BE / 20670
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_73(&iVar1, 2147483648);
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

void Function_73(int iParam0, int iParam1) //Position: 0x50FB / 20731
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_74(var uParam0, int iParam1) //Position: 0x5111 / 20753
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_75(int iParam0, bool bParam1) //Position: 0x5124 / 20772
{
	bool bVar0;
	int iVar1;
	
	Function_25(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_67(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_58();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

int Function_76(int iParam0) //Position: 0x52D0 / 21200
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_77() //Position: 0x5311 / 21265
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_78(int iParam0) //Position: 0x533C / 21308
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_79(var[] uParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x534B / 21323
{
	int iVar0;
	
	uParam2 = 1;
	uParam3 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_136(&(uParam0[iVar0]), &bParam4))
		{
			uParam3 = 1;
		}
		else
		{
			uParam2 = 0;
		}
		iVar0++;
	}
}

void Function_80(int iParam0, bool bParam1, bool bParam2) //Position: 0x538E / 21390
{
	int iVar0;
	bool bVar1;
	
	if (Function_78(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_77())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_76(3);
	Function_82();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_75(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_74(Global_119936, 4))
			{
				Function_68(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_25(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_36(3));
	iVar0 = Function_76(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_57(4, Function_81(Global_21369.f_248), 1);
				Function_56(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_57(4, Function_81(Global_21369.f_248), 1);
				Function_56(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_57(4, Function_81(Global_21369.f_248), 1);
				Function_56(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_57(4, Function_81(Global_21369.f_248), 1);
				Function_56(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_57(4, Function_81(Global_21369.f_248), 1);
				Function_56(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

var Function_81(int iParam0) //Position: 0x5562 / 21858
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

void Function_82() //Position: 0x55F1 / 22001
{
	Function_84(3, 0.0f);
	Function_83(3, 10000.0f);
	return;
}

int Function_83(int iParam0, int iParam1) //Position: 0x5607 / 22023
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_84(int iParam0, int iParam1) //Position: 0x5647 / 22087
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

void Function_85(int iParam0) //Position: 0x5687 / 22151
{
	if (!IS_FACTION_VALID(iParam0))
	{
		return;
	}
	if (!Function_135(3))
	{
		return;
	}
	if (Function_13())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000019:
			if (IS_PS3() || Function_134())
			{
				Function_86(4, 16, 0, 0, 1);
			}
			break;
		
		case 0x0000000E:
			Function_86(5, 16, 0, 0, 1);
			break;
		
		case 0x0000000C:
			Function_86(7, 16, 0, 0, 1);
			break;
	}
	return;
}

void Function_86(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x56EE / 22254
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_135(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_132(bParam0, 2))
	{
		Function_25(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_22(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_130(bParam0, iParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || iParam1);
		Function_131(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_105(1);
				Function_104(1, 0);
			}
			else
			{
				Function_103();
			}
		}
		Function_98(bParam0);
		if (StackVal && !Function_14(((((!Function_97() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_97() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_74(Global_119934, 2))
			{
				Function_68(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_89();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_88(3, iParam1);
				break;
			
			case 0x00000005:
				Function_88(3, SHIFT_LEFT(iParam1, 6));
				break;
			
			case 0x00000006:
				Function_88(3, SHIFT_LEFT(iParam1, 12));
				break;
			
			case 0x00000007:
				Function_88(3, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x00000008:
				Function_88(3, SHIFT_LEFT(iParam1, 24));
				break;
			
			case 0x00000009:
				Function_88(2, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x0000000A:
				Function_87(2, 24);
				break;
			
			case 0x00000003:
				Function_87(2, 25);
				break;
			
			case 0x0000000F:
				Function_87(2, 26);
				break;
			
			case 0x0000000D:
				Function_87(2, 27);
				break;
			
			case 0x0000000E:
				Function_87(2, 28);
				break;
			}
	}
}

void Function_87(int iParam0, int iParam1) //Position: 0x598D / 22925
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || iVar0);
	return;
	return;
}

void Function_88(int iParam0, int iParam1) //Position: 0x59F7 / 23031
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&iParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || iParam1);
	}
	return;
	return;
}

void Function_89() //Position: 0x5A66 / 23142
{
	if (Function_133(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_96(Global_42827);
			*(&Global_42827 + 8) = Function_90(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_96(Global_42827);
			*(&Global_42827 + 8) = Function_90(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_90(int iParam0, int iParam1) //Position: 0x5AE6 / 23270
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_92(6, 0) || Function_92(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_91(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_92(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_91(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_91(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_91(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_91(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_92(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_91(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_91(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_91(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_91(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_91(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_91(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_91(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_92(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_91(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_92(6, 0) && Function_91(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_91(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_92(9, 0) && Function_91(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_91(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_92(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_50(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_50(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_50(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

bool Function_91(int iParam0) //Position: 0x6749 / 26441
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_92(int iParam0, bool bParam1) //Position: 0x675E / 26462
{
	int iVar0;
	
	iVar0 = Function_94(iParam0);
	if (!Function_93(iVar0))
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

bool Function_93(int iParam0) //Position: 0x679C / 26524
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_94(int iParam0) //Position: 0x67B3 / 26547
{
	if (!Function_95(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_95(int iParam0) //Position: 0x67CD / 26573
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_96(int iParam0) //Position: 0x67E3 / 26595
{
	int iVar0;
	int iVar1;
	
	if (!Function_133(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

bool Function_97() //Position: 0x6832 / 26674
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_98(bool bParam0) //Position: 0x685F / 26719
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	int iVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		iVar24 = 0;
		while (iVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, iVar24 + 1, 32);
			if (Function_130(bParam0, Function_102(iVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, 0);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, 0);
			}
			iVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		iVar24 = 0;
		while (iVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, iVar24 + 1, 32);
			if (Function_130(bParam0, Function_102(iVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			iVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_101(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_100(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_99(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_99(int iParam0) //Position: 0x6A0F / 27151
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_133(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_100(var uParam0, int iParam1) //Position: 0x6A66 / 27238
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

var Function_101(int iParam0) //Position: 0x6A8B / 27275
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_133(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

int Function_102(int iParam0) //Position: 0x6AE1 / 27361
{
	return SHIFT_LEFT(1, iParam0);
}

void Function_103() //Position: 0x6AED / 27373
{
	return;
}

void Function_104(var uParam0, int iParam1) //Position: 0x6AF3 / 27379
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = uParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_105(bool bParam0) //Position: 0x6B32 / 27442
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_120();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_106();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_73(&Global_99144, 1);
		Function_73(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_106() //Position: 0x6B87 / 27527
{
	Function_118();
	Function_117();
	Function_117();
	Function_116();
	Function_116();
	Function_115();
	Function_115();
	Function_114(0);
	Function_114(0);
	Function_111();
	Function_110();
	Function_109();
	Function_108();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_107();
	return;
}

void Function_107() //Position: 0x6BD2 / 27602
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_108() //Position: 0x6CD8 / 27864
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_109() //Position: 0x6D0B / 27915
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
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_110() //Position: 0x6E9E / 28318
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
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_111() //Position: 0x7057 / 28759
{
	Function_112(&Global_42918, 1, 0);
	return;
}

void Function_112(struct<2317> Param0) //Position: 0x7065 / 28773
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_113();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		iVar3 = 0;
		while (iVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, iVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_113() //Position: 0x7282 / 29314
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_114(char* cParam0) //Position: 0x7297 / 29335
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_76((50 + iVar4)) + Function_76((183 + iVar4))) + Function_76((90 + iVar4)));
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
	Function_64(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_115() //Position: 0x733E / 29502
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
		iVar2 = ((Function_76((50 + iVar3) + 15) + Function_76((183 + iVar3) + 15)) + Function_76((90 + iVar3) + 15));
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
	Function_64(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_116() //Position: 0x73C7 / 29639
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
			iVar2 = ((Function_76((50 + iVar3) + 8) + Function_76((183 + iVar3) + 8)) + Function_76((90 + iVar3) + 8));
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
	Function_64(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_117() //Position: 0x745E / 29790
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
		iVar2 = ((Function_76((50 + iVar3)) + Function_76((183 + iVar3))) + Function_76((90 + iVar3)));
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
	Function_64(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_118() //Position: 0x74DD / 29917
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_119(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_64(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_119(int iParam0, float fParam1, int iParam2) //Position: 0x751A / 29978
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_39(iParam0, fParam1, 1);
	Function_38(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_27(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_120() //Position: 0x7726 / 30502
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_126(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_126(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_121(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_121(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_50(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_121(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x77DD / 30685
{
	int iVar0;
	
	iVar0 = Function_124(&uParam2, &fParam3);
	if (Function_123(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_171(&Global_99144, 1);
			Function_73(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_171(&Global_99144, 2);
			Function_73(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_171(&Global_99144, 2);
		Function_73(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_122();
	return StackVal, Function_122();
}

struct<8> Function_122() //Position: 0x78D5 / 30933
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_123(int iParam0) //Position: 0x78DF / 30943
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_124(bool bParam0, bool bParam1) //Position: 0x78F5 / 30965
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_125(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_125(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_123(iVar0) && !&bParam1)
	{
		iVar0 = Function_124(&bParam0, 1);
	}
	return iVar0;
}

float Function_125(struct<2> Param0, struct<2> Param2) //Position: 0x79C1 / 31169
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_126(float fParam0, int iParam1) //Position: 0x79DE / 31198
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_128(&Global_54076, &Var3);
	if (!Function_127(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_127(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_171(&Global_99144, 2);
	Function_73(&Global_99144, 1);
	iParam1 = 0;
	if (Function_50(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_127(int iParam0) //Position: 0x820A / 33290
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_128(var uParam0, int iParam1) //Position: 0x8245 / 33349
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_129(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x8254 / 33364
{
	uParam0 = &uParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && uParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_130(bool bParam0, int iParam1) //Position: 0x8303 / 33539
{
	int iVar0;
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_131(int iParam0, int iParam1) //Position: 0x8362 / 33634
{
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0, int iParam1) //Position: 0x83B7 / 33719
{
	int iVar0;
	
	if (!Function_133(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_133(int iParam0) //Position: 0x83E4 / 33764
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_134() //Position: 0x83FA / 33786
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_135(int iParam0) //Position: 0x842A / 33834
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_136(int iParam0, bool bParam1) //Position: 0x8446 / 33862
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&iParam0))
		{
			if (!(GET_TASK_STATUS(&iParam0, 25) != 1 || GET_TASK_STATUS(&iParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&iParam0, true);
			}
			Function_7(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_7(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_137(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_137(int iParam0, int iParam1) //Position: 0x84F1 / 34033
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_138(var uParam0, bool bParam1) //Position: 0x8543 / 34115
{
	if (IS_ACTOR_HUMAN(&uParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&uParam0) == 0)
		{
			TASK_FLEE_ACTOR(&uParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&uParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&uParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&uParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&uParam0, &bParam1, 1);
	TASK_KILL_CHAR(&uParam0, &bParam1);
	TASK_PRIORITY_SET(&uParam0, true);
	return 1;
}

bool Function_139(var[] uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x8639 / 34361
{
	int iVar0;
	
	uParam7 = &uParam7;
	if (!&bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_140(&(uParam0[iVar0]), &uParam3, &uParam4, &uParam5, &bParam6, 0x40400000))
			{
				uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool Function_140(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x868B / 34443
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
		fVar0 = Function_51(&iParam0, &Global_54076);
		if (!Function_14(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_141(&iParam0);
				return 1;
			}
		}
		if (!Function_14(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_141(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_141(&iParam0);
				return 1;
			}
		}
		if (!Function_14(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_141(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_141(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_14(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_141(&iParam0);
				return 1;
			}
		}
		if (!Function_14(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_141(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_141(int iParam0) //Position: 0x8854 / 34900
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_142(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_142(bool bParam0) //Position: 0x8891 / 34961
{
	SAY_SINGLE_LINE_CONTEXT(&bParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_143(var uParam0, bool bParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x88AA / 34986
{
	bParam1 = &bParam1;
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0) && Function_51(&uParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&uParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&uParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &uParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &uParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&uParam0, &uParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

bool Function_144(int iParam0, struct<2> Param1, float fParam3) //Position: 0x8957 / 35159
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_145(&iParam0);
		if (VDIST(Function_145(&iParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_145(int iParam0) //Position: 0x89E3 / 35299
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

float Function_146(bool bParam0) //Position: 0x8A4F / 35407
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_147(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_147(float fParam0, bool bParam1) //Position: 0x8A8B / 35467
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		fParam0 = 65.0f;
		bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		fParam0 = 115.0f;
		bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			fParam0 = 130.0f;
			bParam1 = 190.0f;
		}
		else
		{
			fParam0 = 130.0f;
			bParam1 = 190.0f;
		}
	}
	return;
}

bool Function_148(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x8B1C / 35612
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_51(&Global_54076, &uParam1) > 15.0f)
				{
					uParam2 = 1;
				}
			}
		}
		if (Global_6637 && !uParam2)
		{
			return 0;
		}
		if ((Global_6608 && Global_10986 == GET_THIS_SCRIPT_ID()) && !uParam2)
		{
			return 0;
		}
		if (Function_151() && !uParam2)
		{
			return 0;
		}
		if (Function_150(iParam0) && !uParam2)
		{
			return 0;
		}
		if (Global_6630 && !&bParam4)
		{
			return 0;
		}
		if (Global_6628 && !uParam2)
		{
			return 0;
		}
		if (Global_6653)
		{
			return 0;
		}
		if (Global_6627)
		{
			return 0;
		}
		if (Global_6646 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6647 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6635 && !uParam2)
		{
			return 0;
		}
		if (Global_6636 && !uParam2)
		{
			return 0;
		}
		if (&bParam6)
		{
			if (Global_99146 && !uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_149(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_149(int iParam0, int iParam1) //Position: 0x8C6F / 35951
{
	iParam0 = iParam0;
	if (Global_6625 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_6610 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_150(int iParam0) //Position: 0x8C90 / 35984
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(&Global_54076);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Global_54076)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_151() //Position: 0x8CD0 / 36048
{
	int iVar0;
	int iVar1;
	
	if (Global_6629)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					if (GET_THIS_SCRIPT_ID() != DECOR_GET_INT(&Global_39621[iVar05] + 16, "script"))
					{
						if (Function_152(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_152(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_152(int iParam0, var uParam1) //Position: 0x8D93 / 36243
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_145(&iParam0);
			Var0 = Function_145(&iParam0);
			Function_153(&uParam1);
			Var2 = Function_153(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_153(int iParam0) //Position: 0x8E35 / 36405
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_154(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x8EA3 / 36515
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar1])))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam0[iVar1]), 1.0f, &uParam5, 1, 1, 0))
			{
				uParam2 = 1;
				if (&iParam4 != 0)
				{
					Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam4));
				}
			}
		}
		iVar1++;
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_166(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_165(0);
		}
		if (&bParam6)
		{
			Function_163(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_161(iParam3);
		}
		Function_159(iParam3);
		if (Function_158(StackVal, 32768))
		{
			Function_155(1);
		}
		Global_26652[iParam34].f_16++;
		Function_25(408, 1, 0, 0);
	}
}

void Function_155(bool bParam0) //Position: 0x8F9C / 36764
{
	if (bParam0)
	{
		Function_157(0x10000000);
	}
	else
	{
		Function_156(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_156(int iParam0) //Position: 0x8FC1 / 36801
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_157(int iParam0) //Position: 0x8FDE / 36830
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_158(var uParam0, int iParam1) //Position: 0x8FF1 / 36849
{
	return (uParam0 && iParam1) == 0;
}

void Function_159(int iParam0) //Position: 0x8FFE / 36862
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_14(StackVal, 524288))
	{
		if (Global_26652[iParam04].f_20 < 0 && Global_26652[iParam04].f_20 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_26652[iParam04].f_20 <= 2 && Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_160(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_160(int iParam0) //Position: 0x90A4 / 37028
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_161(int iParam0) //Position: 0x90BB / 37051
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Global_47151[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_162(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_162(vector3 vParam0) //Position: 0x915A / 37210
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_163(int iParam0, int iParam1) //Position: 0x9176 / 37238
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_164(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_164(struct<113> Param0) //Position: 0x91FD / 37373
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_165(int iParam0) //Position: 0x925B / 37467
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_160(900)), 0);
	return;
}

void Function_166(bool bParam0) //Position: 0x927F / 37503
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&bParam0 + Function_160(200)), 0);
	return;
}

void Function_167(var uParam0, struct<2> Param1, int iParam3, int iParam4, float fParam5) //Position: 0x92A2 / 37538
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3[6];
	bool bVar10;
	int iVar11;
	char* cVar12[32];
	float fVar20;
	
	bVar2 = true;
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Param1, 1.0f, "p_gen_footlockerfull01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		uVar1 = GET_OBJECT_FROM_PHYSINST(&uVar0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			ROTATE_OBJECT_UPRIGHT_TO_GROUND(&uVar1, 1, 5.0f);
		}
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GringoDollarAmt", false);
	Function_175(GET_OBJECT_FROM_GRINGO(&uParam0));
	if (&iParam3 == 4294967295)
	{
		bVar10 = false;
		Function_170(&Global_54076, &uVar3, &bVar10);
		if (bVar10 >= 0)
		{
			PRINTINT(bVar10);
			iVar11 = RAND_INT_RANGE(0, (bVar10 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar3[iVar11]));
			iParam3 = Function_169(&Global_54076, uVar3[iVar11]);
			if (&iParam3 == 34)
			{
				iParam3 = 16;
			}
		}
		else
		{
			bVar2 = false;
		}
	}
	else
	{
		iParam3 = Function_169(&Global_54076, &iParam3);
	}
	if (&iParam3 == 4294967295)
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		strcpy(&cVar12, "Ammo_", 32);
		straddi(&cVar12, GET_AMMO_ENUM(&iParam3), 32);
		PRINTSTRING(&cVar12);
		fVar20 = GET_WEAPON_MAX_AMMO(&iParam3);
		if (fVar20 >= 2.0f)
		{
			fParam5 = 2.0f;
		}
		DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), &cVar12, FLOOR(((2.0f * &fParam5) * GET_WEAPON_MAX_AMMO(&iParam3))));
	}
	if (&iParam4 != 4294967295 || (&iParam4 != 11 && GET_ITEM_COUNT(SS_GET_STRING(1, 11), &Global_54076) < 0))
	{
		iParam4 = Function_168();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GiveItem", &iParam4);
}

float Function_168() //Position: 0x9420 / 37920
{
	int iVar0;
	int iVar1;
	
	iVar0 = RAND_INT_RANGE(0, 6);
	if (iVar0 == 0)
	{
		iVar1 = 3;
	}
	else if (iVar0 == 1)
	{
		iVar1 = 1;
	}
	else if (iVar0 == 2)
	{
		iVar1 = 0;
	}
	else if (iVar0 == 3)
	{
		iVar1 = 2;
	}
	else if (iVar0 == 4)
	{
		iVar1 = 8;
	}
	else if (iVar0 == 5)
	{
		iVar1 = 7;
	}
	else
	{
		iVar1 = 12;
	}
	return iVar1;
}

int Function_169(var uParam0, int iParam1) //Position: 0x947C / 38012
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_170(var uParam0, int[] iParam1, int iParam2) //Position: 0x948E / 38030
{
	iParam2 = 0;
	if (Function_169(&uParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 6))
		{
			iParam1[iParam2] = 39;
			iParam2++;
		}
	}
	if (Function_169(&uParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 8))
		{
			iParam1[iParam2] = 41;
			iParam2++;
		}
	}
	if (Function_169(&uParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 7))
		{
			iParam1[iParam2] = 40;
			iParam2++;
		}
	}
	if (Function_169(&uParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 9))
		{
			iParam1[iParam2] = 42;
			iParam2++;
		}
	}
	if (Function_169(&uParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 10))
		{
			iParam1[iParam2] = 43;
			iParam2++;
		}
	}
	if (Function_169(&uParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 11))
		{
			iParam1[iParam2] = 44;
			iParam2++;
		}
	}
	return;
}

void Function_171(int iParam0, bool bParam1) //Position: 0x95D9 / 38361
{
	iParam0 = (iParam0 || bParam1);
	return;
}

void Function_172(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x95EA / 38378
{
	var uVar0[5];
	int iVar6;
	
	if (uParam0 != 4294967295)
	{
		uParam0 = CLEAR_AREA_OF_TREE_TYPE(Param4, (fParam3 + 2.0f), "");
	}
	if (uParam1 != 4294967295)
	{
		uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(Param4, (fParam3 + 2.0f));
	}
	if (uParam2 != 4294967295)
	{
		uParam2 = CLEAR_AREA_OF_GRASS(Param4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		if (Function_173(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(&(uVar0[iVar6])))
				{
					DESTROY_OBJECT(&(uVar0[iVar6]));
				}
				iVar6++;
			}
		}
	}
}

int Function_173(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x9695 / 38549
{
	int iVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(&cParam0))
	{
		uVar4 = CREATE_OBJECT_ITERATOR(&cParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar4, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar4, &uParam1);
		iVar3 = START_OBJECT_ITERATOR(&uVar4);
		while (IS_OBJECT_VALID(&iVar3))
		{
			if (IS_OBJECT_VALID(&iVar3))
			{
				GET_OBJECT_POSITION(&iVar3, &Var1);
				if (VDIST(Param5, Var1) > fParam3)
				{
					cParam2[iVar0] = &iVar3;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(&uVar4);
						return iVar0;
					}
				}
			}
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar4);
		}
		DESTROY_ITERATOR(&uVar4);
		return iVar0;
	}
	return iVar0;
}

void Function_174(int iParam0) //Position: 0x973B / 38715
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&iParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&iParam0, 1);
	return;
}

void Function_175(int iParam0) //Position: 0x976B / 38763
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", 1);
	}
	return;
}

void Function_176(var uParam0, int iParam1) //Position: 0x97A2 / 38818
{
	switch (&iParam1)
	{
		case 0x00000000:
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 47, 0.0f);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
			AI_DONT_HARM_ACTOR(&uParam0);
			break;
		
		case 0x00000001:
			break;
	}
	return;
}

void Function_177(var uParam0, bool bParam1) //Position: 0x97D8 / 38872
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

var Function_178(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x97FA / 38906
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_179(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_179(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

bool Function_179(int iParam0) //Position: 0x9932 / 39218
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

float Function_180(var uParam0, struct<2> Param1) //Position: 0x9949 / 39241
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_145(&uParam0);
		Var0 = Function_145(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_181(struct<2> Param0, struct<2> Param2) //Position: 0x99C0 / 39360
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	VNORMALIZE(&Var0);
	return StackVal, Var0;
}

float Function_182() //Position: 0x99DD / 39389
{
	float fVar0;
	bool bVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_147(&fVar0, &bVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

int Function_183() //Position: 0x9A0E / 39438
{
	int iVar0;
	var uVar1[6];
	int iVar8;
	int iVar9;
	
	iVar8 = 0;
	Function_184(&Global_54076, &uVar1, &iVar8);
	if (iVar8 >= 0)
	{
		iVar9 = RAND_INT_RANGE(0, (iVar8 - 1));
		iVar0 = GET_AMMO_ENUM(uVar1[iVar9]);
		return iVar0;
	}
	return 7;
}

void Function_184(var uParam0, int[] iParam1, int iParam2) //Position: 0x9A49 / 39497
{
	iParam2 = 0;
	if (Function_169(&uParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 6, 1) <= fLocal_399)
		{
			iParam1[iParam2] = 0;
			iParam2++;
		}
	}
	if (Function_169(&uParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 8, 1) <= fLocal_399)
		{
			iParam1[iParam2] = 8;
			iParam2++;
		}
	}
	if (Function_169(&uParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 7, 1) <= fLocal_399)
		{
			iParam1[iParam2] = 4;
			iParam2++;
		}
	}
	if (Function_169(&uParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 9, 1) <= fLocal_399)
		{
			iParam1[iParam2] = 12;
			iParam2++;
		}
	}
	if (Function_169(&uParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 10, 1) <= fLocal_399)
		{
			iParam1[iParam2] = 17;
			iParam2++;
		}
	}
	if (Function_169(&uParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 11, 1) <= fLocal_399)
		{
			iParam1[iParam2] = 19;
			iParam2++;
		}
	}
	return;
}

bool Function_185(struct<573> Param0) //Position: 0x9B76 / 39798
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		iLocal_259[iVar0] = 0;
		iVar0++;
	}
	if (!Function_186(StackVal, Global_54078, &iParam2, &uParam1))
	{
		return 0;
	}
	iVar2 = 4294967295;
	fVar3 = 1500.0f;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		fVar1 = Function_180(StackVal, &Global_54076, Local_27[iVar02]);
		if ((fVar1 > fVar3 && fVar1 < 80.0f) && iLocal_259[iVar0])
		{
			fVar3 = fVar1;
			iVar2 = iVar0;
		}
		iVar0++;
	}
	if (iVar2 == 4294967295)
	{
		return 0;
	}
	Param0 = iVar2;
	Param0.f_572 = uLocal_181[iVar2];
	switch (iVar2)
	{
		case 0x00000000:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 4;
			Function_171(&Param0 + 16, 1);
			Function_171(&Param0 + 16, 2);
			Function_171(&Param0 + 16, 4);
			Function_171(&Param0 + 16, 8);
			Function_171(&Param0 + 24, 1);
			(&Param0 + 32) = Vector(-1043,64f, 184,07f, 1373,09f);
			*(&Param0 + 104) = Vector(-1043,76f, 183,985f, 1371,5f);
			Param0.f_240 = -179,9999f;
			*(&Param0 + 116) = Vector(-1042,58f, 183,985f, 1371,5f);
			Param0.f_244 = 173,9998f;
			*(&Param0 + 128) = Vector(-1041,04f, 184,059f, 1372,95f);
			Param0.f_248 = 99,58986f;
			*(&Param0 + 140) = Vector(-1043,66f, 184,053f, 1377,79f);
			Param0.f_252 = 0,565044f;
			*(&Param0 + 200) = Vector(-1046,044f, 184,066f, 1374,279f);
			Param0.f_280 = 286,941f;
			*(&Param0 + 92) = Vector(-1045,249f, 184,066f, 1373,642f);
			Param0.f_236 = -88,668f;
			*(&Param0 + 284) = Vector(-1044,695f, 184,065f, 1375,734f);
			Param0.f_416 = -18,448f;
			*(&Param0 + 296) = Vector(-1053,774f, 185,389f, 1370,258f);
			Param0.f_420 = 354,495f;
			*(&Param0 + 308) = Vector(-1054,425f, 186,099f, 1366,013f);
			Param0.f_424 = 265,925f;
			*(&Param0 + 320) = Vector(-1056,458f, 187,239f, 1358,889f);
			Param0.f_428 = 239,03f;
			*(&Param0 + 332) = Vector(-1057,215f, 190,47f, 1344,799f);
			Param0.f_432 = 223,394f;
			*(&Param0 + 344) = Vector(-1047,867f, 188,264f, 1348,867f);
			Param0.f_436 = 193,01f;
			*(&Param0 + 212) = Vector(-1041,799f, 183,893f, 1366,241f);
			Param0.f_272 = 325,669f;
			*(&Param0 + 224) = Vector(-1043,816f, 183,985f, 1369,669f);
			Param0.f_276 = 280,2f;
			*(&Param0 + 356) = Vector(-1030,516f, 181,428f, 1404,631f);
			Param0.f_440 = 94,717f;
			*(&Param0 + 368) = Vector(-1036,633f, 184,142f, 1368,585f);
			Param0.f_444 = 85,044f;
			*(&Param0 + 380) = Vector(-1045,459f, 184,036f, 1363,097f);
			Param0.f_448 = -115,12f;
			*(&Param0 + 392) = Vector(-1046,278f, 184,161f, 1364,55f);
			Param0.f_452 = -112,101f;
			*(&Param0 + 404) = Vector(-1047,026f, 184,393f, 1366,827f);
			Param0.f_456 = -87,709f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 79;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "lean_rail_forward";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000001:
			*(&Param0 + 92) = Vector(-521,368f, 146,586f, 1891,315f);
			Param0.f_236 = -179,119f;
			*(&Param0 + 284) = Vector(-523,722f, 146,684f, 1891,792f);
			Param0.f_416 = 122,121f;
			*(&Param0 + 296) = Vector(-449,691f, 139,105f, 1918,196f);
			Param0.f_420 = -68,076f;
			*(&Param0 + 308) = Vector(-458,146f, 142,659f, 1898,084f);
			Param0.f_424 = -89,19f;
			*(&Param0 + 320) = Vector(-494,67f, 144,473f, 1926,247f);
			Param0.f_428 = -6,687f;
			*(&Param0 + 332) = Vector(-519,423f, 146,583f, 1893,947f);
			Param0.f_432 = -126,933f;
			*(&Param0 + 344) = Vector(-531,255f, 146,607f, 1885,477f);
			Param0.f_436 = -143,417f;
			*(&Param0 + 356) = Vector(-451,303f, 139,082f, 1913,837f);
			Param0.f_440 = 164,89f;
			*(&Param0 + 368) = Vector(-453,817f, 139,488f, 1915,016f);
			Param0.f_444 = 164,346f;
			*(&Param0 + 380) = Vector(-474,27f, 142,493f, 1909,429f);
			Param0.f_448 = -113,01f;
			*(&Param0 + 392) = Vector(-475,55f, 142,529f, 1912,434f);
			Param0.f_452 = -76,121f;
			*(&Param0 + 404) = Vector(-473,102f, 142,376f, 1914,772f);
			Param0.f_456 = -29,518f;
			Param0.f_560 = 467;
			Param0.f_564 = 476;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "rand_idle_stand_nospawn";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "smoking_stand";
			return 1;
			break;
		
		case 0x00000002:
			*(&Param0 + 92) = Vector(151,25f, 128,174f, 1380,784f);
			Param0.f_236 = -122,151f;
			*(&Param0 + 284) = Vector(150,778f, 128,296f, 1382,712f);
			Param0.f_416 = 211,988f;
			*(&Param0 + 296) = Vector(147,231f, 129,748f, 1404,047f);
			Param0.f_420 = -209,521f;
			*(&Param0 + 308) = Vector(172,179f, 129,506f, 1372,843f);
			Param0.f_424 = -357,07f;
			*(&Param0 + 320) = Vector(146,34f, 128,799f, 1392,335f);
			Param0.f_428 = 96,535f;
			*(&Param0 + 332) = Vector(152,955f, 128,059f, 1379,6f);
			Param0.f_432 = 31,365f;
			*(&Param0 + 344) = Vector(157,175f, 126,274f, 1369,714f);
			Param0.f_436 = 59,118f;
			*(&Param0 + 356) = Vector(144,219f, 125,793f, 1365,431f);
			Param0.f_440 = -135,337f;
			*(&Param0 + 368) = Vector(141,842f, 125,987f, 1368,622f);
			Param0.f_444 = -79,663f;
			*(&Param0 + 380) = Vector(139,218f, 128,935f, 1399,063f);
			Param0.f_448 = -100,419f;
			*(&Param0 + 392) = Vector(138,62f, 129,247f, 1403,252f);
			Param0.f_452 = -77,321f;
			*(&Param0 + 404) = Vector(141,014f, 129,526f, 1407,641f);
			Param0.f_456 = -53,768f;
			Param0.f_560 = 467;
			Param0.f_564 = 476;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "rand_idle_sit_ground";
			*(&Param0 + 496) = "rand_idle_stand_nospawn";
			*(&Param0 + 504) = "rand_idle_sit_ground";
			return 1;
			break;
		
		case 0x00000003:
			*(&Param0 + 92) = Vector(-730,995f, 226,993f, 1106,784f);
			Param0.f_236 = 164,146f;
			*(&Param0 + 284) = Vector(-734,587f, 226,92f, 1105,764f);
			Param0.f_416 = 164,146f;
			*(&Param0 + 296) = Vector(-749,864f, 196,97f, 1184,389f);
			Param0.f_420 = 125,436f;
			*(&Param0 + 308) = Vector(-774,53f, 204,852f, 1188,59f);
			Param0.f_424 = 287,751f;
			*(&Param0 + 320) = Vector(-776,806f, 218,112f, 1158,521f);
			Param0.f_428 = 170,346f;
			*(&Param0 + 332) = Vector(-737,576f, 228,798f, 1153,567f);
			Param0.f_432 = 135,004f;
			*(&Param0 + 344) = Vector(-733,547f, 226,939f, 1114,264f);
			Param0.f_436 = 164,146f;
			*(&Param0 + 356) = Vector(-770.0f, 186,54f, 1217,98f);
			Param0.f_440 = 254,894f;
			*(&Param0 + 368) = Vector(-769,202f, 187,017f, 1215,354f);
			Param0.f_444 = 213,121f;
			*(&Param0 + 380) = Vector(-724,041f, 227,581f, 1138,394f);
			Param0.f_448 = -181,478f;
			*(&Param0 + 392) = Vector(-721,611f, 227,2f, 1138,716f);
			Param0.f_452 = -197,486f;
			*(&Param0 + 404) = Vector(-719,776f, 226,926f, 1140,08f);
			Param0.f_456 = -210,832f;
			Param0.f_560 = 467;
			Param0.f_564 = 476;
			Param0.f_568 = 79;
			*(&Param0 + 472) = "stand_lookdistance_w_any";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000004:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 6;
			Function_171(&Param0 + 16, 1);
			Function_171(&Param0 + 16, 2);
			Function_171(&Param0 + 16, 4);
			Function_171(&Param0 + 16, 8);
			Function_171(&Param0 + 16, 16);
			Function_171(&Param0 + 16, 32);
			Function_171(&Param0 + 24, 1);
			*(&Param0 + 32) = Vector(-844,56f, 189,67f, 1587,96f);
			*(&Param0 + 104) = Vector(-844,573f, 189,676f, 1588,92f);
			Param0.f_240 = 2,999898f;
			*(&Param0 + 116) = Vector(-842,248f, 189,678f, 1588,95f);
			Param0.f_244 = -0,00023f;
			*(&Param0 + 128) = Vector(-840,159f, 189,685f, 1586,24f);
			Param0.f_248 = 84,58977f;
			*(&Param0 + 140) = Vector(-840,175f, 189,711f, 1581,26f);
			Param0.f_252 = 90,56493f;
			*(&Param0 + 152) = Vector(-849,108f, 189,698f, 1586,2f);
			Param0.f_256 = -92,41016f;
			*(&Param0 + 164) = Vector(-849,05f, 189,763f, 1580,9f);
			Param0.f_260 = -89,43497f;
			*(&Param0 + 200) = Vector(-842,3f, 189,73f, 1584,924f);
			Param0.f_280 = 90,843f;
			*(&Param0 + 92) = Vector(-844,7f, 189,73f, 1582,449f);
			Param0.f_236 = 146,157f;
			*(&Param0 + 284) = Vector(-846,056f, 189,73f, 1583,987f);
			Param0.f_416 = 205,311f;
			*(&Param0 + 296) = Vector(-843,001f, 189,753f, 1586,391f);
			Param0.f_420 = 135,908f;
			*(&Param0 + 308) = Vector(-842,564f, 189,753f, 1584,934f);
			Param0.f_424 = 138,891f;
			*(&Param0 + 320) = Vector(-842,706f, 189,753f, 1581,665f);
			Param0.f_428 = 157,555f;
			*(&Param0 + 332) = Vector(-846,521f, 189,753f, 1581,64f);
			Param0.f_432 = 201,029f;
			*(&Param0 + 344) = Vector(-847,189f, 189,758f, 1583,797f);
			Param0.f_436 = 214,574f;
			*(&Param0 + 212) = Vector(-850,748f, 189,708f, 1596,198f);
			Param0.f_272 = 26,239f;
			*(&Param0 + 224) = Vector(-844,908f, 189,696f, 1593,825f);
			Param0.f_276 = 64,685f;
			*(&Param0 + 356) = Vector(-848,939f, 189,767f, 1598,81f);
			Param0.f_440 = 10,155f;
			*(&Param0 + 368) = Vector(-847,679f, 189,716f, 1596,793f);
			Param0.f_444 = 29,877f;
			*(&Param0 + 380) = Vector(-839,291f, 189,667f, 1591,667f);
			Param0.f_448 = 35,551f;
			*(&Param0 + 392) = Vector(-838,08f, 189,66f, 1588,806f);
			Param0.f_452 = 71,249f;
			*(&Param0 + 404) = Vector(-837,333f, 189,679f, 1586,46f);
			Param0.f_456 = 94,667f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "smoking_stand";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000005:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 4;
			Function_171(&Param0 + 16, 1);
			Function_171(&Param0 + 16, 2);
			Function_171(&Param0 + 16, 4);
			Function_171(&Param0 + 16, 8);
			Function_171(&Param0 + 24, 1);
			*(&Param0 + 32) = Vector(-487,17f, 20,49f, 3035,54f);
			*(&Param0 + 104) = Vector(-488,044f, 20,4865f, 3036,66f);
			Param0.f_240 = 20,99981f;
			*(&Param0 + 116) = Vector(-486,71f, 19,977f, 3036,24f);
			Param0.f_244 = 17,99883f;
			*(&Param0 + 128) = Vector(-484,803f, 19,8811f, 3035,45f);
			Param0.f_248 = 24,5889f;
			*(&Param0 + 140) = Vector(-484,106f, 20,4865f, 3033.0f);
			Param0.f_252 = 105,5649f;
			*(&Param0 + 200) = Vector(-486,369f, 20,486f, 3032,765f);
			Param0.f_280 = -70,094f;
			*(&Param0 + 92) = Vector(-487,694f, 20,49f, 3033,49f);
			Param0.f_236 = 0,565f;
			*(&Param0 + 284) = Vector(-489,403f, 20,486f, 3033,522f);
			Param0.f_416 = 276,065f;
			*(&Param0 + 296) = Vector(-488,69f, 20,486f, 3033,605f);
			Param0.f_420 = 201,913f;
			*(&Param0 + 308) = Vector(-486,68f, 20,486f, 3032,768f);
			Param0.f_424 = 162,737f;
			*(&Param0 + 320) = Vector(-486,741f, 20,531f, 3035,47f);
			Param0.f_428 = 293,469f;
			*(&Param0 + 332) = Vector(-482,366f, 18,738f, 3038,164f);
			Param0.f_432 = 313,726f;
			*(&Param0 + 344) = Vector(-484,913f, 18,703f, 3039,667f);
			Param0.f_436 = 316,633f;
			*(&Param0 + 212) = Vector(-487,966f, 20,129f, 3021,113f);
			Param0.f_272 = 330,593f;
			*(&Param0 + 224) = Vector(-488,722f, 20,086f, 3027,707f);
			Param0.f_276 = 349,407f;
			*(&Param0 + 356) = Vector(-482,899f, 24,255f, 2998,045f);
			Param0.f_440 = -53,102f;
			*(&Param0 + 368) = Vector(-481,382f, 23,808f, 2999,786f);
			Param0.f_444 = 301,392f;
			*(&Param0 + 380) = Vector(-482,899f, 24,255f, 2998,045f);
			Param0.f_448 = -53,102f;
			*(&Param0 + 392) = Vector(-487,486f, 20,086f, 3028,202f);
			Param0.f_452 = -167,584f;
			*(&Param0 + 404) = Vector(-489,176f, 20,086f, 3028,246f);
			Param0.f_456 = -152,339f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 22;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000006:
			*(&Param0 + 92) = Vector(-2905,192f, 13,051f, 2946,404f);
			Param0.f_236 = 312,984f;
			*(&Param0 + 284) = Vector(-2904,496f, 13,051f, 2946,997f);
			Param0.f_416 = 41,838f;
			*(&Param0 + 296) = Vector(-2904,536f, 13,051f, 2953,111f);
			Param0.f_420 = 307,91f;
			*(&Param0 + 308) = Vector(-2911,311f, 13,051f, 2946,005f);
			Param0.f_424 = 284,013f;
			*(&Param0 + 320) = Vector(-2898,622f, 13,051f, 2947,662f);
			Param0.f_428 = 108,233f;
			*(&Param0 + 332) = Vector(-2904,868f, 16,386f, 2949,784f);
			Param0.f_432 = 328,827f;
			*(&Param0 + 344) = Vector(-2902,199f, 16,386f, 2946,815f);
			Param0.f_436 = 114,53f;
			*(&Param0 + 356) = Vector(-2923,811f, 13,051f, 2987,644f);
			Param0.f_440 = 357,746f;
			*(&Param0 + 368) = Vector(-2922,137f, 13,051f, 2988,013f);
			Param0.f_444 = 364,468f;
			*(&Param0 + 380) = Vector(-2909,802f, 13,051f, 2956,361f);
			Param0.f_448 = -62,669f;
			*(&Param0 + 392) = Vector(-2908,425f, 13,051f, 2957,893f);
			Param0.f_452 = -38,495f;
			*(&Param0 + 404) = Vector(-2905,681f, 13,051f, 2959,029f);
			Param0.f_456 = -8,715f;
			Param0.f_560 = 477;
			Param0.f_564 = 485;
			Param0.f_568 = 22;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000007:
			*(&Param0 + 92) = Vector(-1233,827f, 22,095f, 3208,098f);
			Param0.f_236 = 248,968f;
			*(&Param0 + 284) = Vector(-1237,779f, 22,244f, 3208,536f);
			Param0.f_416 = 207,731f;
			*(&Param0 + 296) = Vector(-1229,405f, 21,94f, 3217,18f);
			Param0.f_420 = 149,427f;
			*(&Param0 + 308) = Vector(-1228,144f, 22,102f, 3209,255f);
			Param0.f_424 = 215,192f;
			*(&Param0 + 320) = Vector(-1234,135f, 22,267f, 3211,285f);
			Param0.f_428 = 149,545f;
			*(&Param0 + 332) = Vector(-1238,036f, 22,308f, 3212,325f);
			Param0.f_432 = 183,189f;
			*(&Param0 + 344) = Vector(-1243,854f, 22,357f, 3208,741f);
			Param0.f_436 = 8,496f;
			*(&Param0 + 356) = Vector(-1218,27f, 27,662f, 3193,786f);
			Param0.f_440 = 249,759f;
			*(&Param0 + 368) = Vector(-1218,865f, 28,116f, 3191,976f);
			Param0.f_444 = 290,965f;
			*(&Param0 + 380) = Vector(-1253,576f, 25,628f, 3203,651f);
			Param0.f_448 = 98,62f;
			*(&Param0 + 392) = Vector(-1250,586f, 24,286f, 3205,825f);
			Param0.f_452 = -233,204f;
			*(&Param0 + 404) = Vector(-1247,739f, 22,92f, 3212,752f);
			Param0.f_456 = 109,765f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 76;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000008:
			*(&Param0 + 92) = Vector(-3434,034f, 23,592f, 2497,243f);
			Param0.f_236 = 167,141f;
			*(&Param0 + 284) = Vector(-3434,139f, 23,592f, 2495,984f);
			Param0.f_416 = 37,012f;
			*(&Param0 + 296) = Vector(-3434,783f, 23,592f, 2498,666f);
			Param0.f_420 = 100,492f;
			*(&Param0 + 308) = Vector(-3436,673f, 23,592f, 2504,258f);
			Param0.f_424 = 81,012f;
			*(&Param0 + 320) = Vector(-3447,594f, 23,11f, 2499,735f);
			Param0.f_428 = -248,865f;
			*(&Param0 + 332) = Vector(-3439,235f, 23,568f, 2497,12f);
			Param0.f_432 = -133,729f;
			*(&Param0 + 344) = Vector(-3439,446f, 23,589f, 2500,905f);
			Param0.f_436 = -51,482f;
			*(&Param0 + 356) = Vector(-3469,012f, 21,584f, 2492,979f);
			Param0.f_440 = 333,678f;
			*(&Param0 + 368) = Vector(-3464,167f, 21,781f, 2495,026f);
			Param0.f_444 = 361,907f;
			*(&Param0 + 380) = Vector(-3428,34f, 24,077f, 2495,796f);
			Param0.f_448 = 97,657f;
			*(&Param0 + 392) = Vector(-3428,279f, 24,059f, 2499,195f);
			Param0.f_452 = -294,858f;
			*(&Param0 + 404) = Vector(-3428,886f, 23,983f, 2502,291f);
			Param0.f_456 = 109,765f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 76;
			*(&Param0 + 472) = "rand_idle_stand";
			*(&Param0 + 480) = "rand_idle_nearwall";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "sit_ground_smoke";
			*(&Param0 + 504) = "sit_ground_drink";
			return 1;
			break;
		
		case 0x00000009:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 5;
			Function_171(&Param0 + 16, 1);
			Function_171(&Param0 + 16, 2);
			Function_171(&Param0 + 16, 4);
			Function_171(&Param0 + 16, 8);
			Function_171(&Param0 + 16, 16);
			Function_171(&Param0 + 24, 1);
			*(&Param0 + 32) = Vector(-1864,28f, 25,66f, 3302,02f);
			*(&Param0 + 104) = Vector(-1868,72f, 24,9242f, 3306,34f);
			Param0.f_240 = -89,99975f;
			*(&Param0 + 116) = Vector(-1868,69f, 24,9242f, 3304,97f);
			Param0.f_244 = -86,99978f;
			*(&Param0 + 128) = Vector(-1868,72f, 24,924f, 3302,9f);
			Param0.f_248 = -98,40996f;
			*(&Param0 + 140) = Vector(-1865,04f, 25,6375f, 3300,95f);
			Param0.f_252 = 176,9998f;
			*(&Param0 + 152) = Vector(-1863,99f, 25,6389f, 3300,97f);
			Param0.f_256 = -179,9999f;
			*(&Param0 + 200) = Vector(-1862,495f, 25,664f, 3304,42f);
			Param0.f_280 = -89,2f;
			*(&Param0 + 92) = Vector(-1864,42f, 25,674f, 3306,345f);
			Param0.f_236 = -56,932f;
			*(&Param0 + 284) = Vector(-1864,862f, 25,674f, 3304,466f);
			Param0.f_416 = 0.0f;
			*(&Param0 + 296) = Vector(-2902,199f, 16,386f, 2946,815f);
			Param0.f_420 = 114,53f;
			*(&Param0 + 308) = Vector(-1873,356f, 24,896f, 3310,485f);
			Param0.f_424 = 0,623f;
			*(&Param0 + 320) = Vector(-1872,139f, 24,92f, 3300,956f);
			Param0.f_428 = 77,585f;
			*(&Param0 + 332) = Vector(-1858,381f, 24,984f, 3304,77f);
			Param0.f_432 = 26,821f;
			*(&Param0 + 344) = Vector(-1860,552f, 24,924f, 3307,563f);
			Param0.f_436 = 164,044f;
			*(&Param0 + 212) = Vector(-1871,698f, 24,924f, 3305,057f);
			Param0.f_272 = 79,722f;
			*(&Param0 + 224) = Vector(-1875,491f, 24,835f, 3300,441f);
			Param0.f_276 = 91,447f;
			*(&Param0 + 356) = Vector(-1872,12f, 24,921f, 3303,856f);
			Param0.f_440 = 261,993f;
			*(&Param0 + 368) = Vector(-1872,723f, 24,921f, 3306,976f);
			Param0.f_444 = 289,613f;
			*(&Param0 + 380) = Vector(-1850,137f, 24,398f, 3309,046f);
			Param0.f_448 = 109,765f;
			*(&Param0 + 392) = Vector(-1851,146f, 24,532f, 3312,827f);
			Param0.f_452 = 67,212f;
			*(&Param0 + 404) = Vector(-1851,819f, 24,731f, 3315,765f);
			Param0.f_456 = -306,112f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 78;
			*(&Param0 + 472) = "smoking_stand";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "sit_ground_campfire_tend";
			*(&Param0 + 496) = "rand_idle_stand";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000A:
			*(&Param0 + 92) = Vector(-2832,227f, 20,209f, 3075,762f);
			Param0.f_236 = -3,07f;
			*(&Param0 + 284) = Vector(-2830,373f, 20,075f, 3077,06f);
			Param0.f_416 = -49,594f;
			*(&Param0 + 296) = Vector(-2826,955f, 20,214f, 3077,9f);
			Param0.f_420 = 319,696f;
			*(&Param0 + 308) = Vector(-2832,744f, 20,214f, 3074,063f);
			Param0.f_424 = 267,808f;
			*(&Param0 + 320) = Vector(-2832,834f, 20,214f, 3078,073f);
			Param0.f_428 = 322,501f;
			*(&Param0 + 332) = Vector(-2829,047f, 20,214f, 3074,01f);
			Param0.f_432 = 106,676f;
			*(&Param0 + 344) = Vector(-2828,971f, 20,214f, 3078,144f);
			Param0.f_436 = 32,525f;
			*(&Param0 + 356) = Vector(-2811,083f, 20,081f, 3077,154f);
			Param0.f_440 = 111,684f;
			*(&Param0 + 368) = Vector(-2810,745f, 20,068f, 3080,057f);
			Param0.f_444 = 87,989f;
			*(&Param0 + 380) = Vector(-2846,263f, 19,079f, 3081,674f);
			Param0.f_448 = -65,932f;
			*(&Param0 + 392) = Vector(-2844,673f, 19,075f, 3084,467f);
			Param0.f_452 = -62,778f;
			*(&Param0 + 404) = Vector(-2843,999f, 19,117f, 3088,225f);
			Param0.f_456 = -110,34f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 79;
			*(&Param0 + 472) = "look_out_window_L";
			*(&Param0 + 480) = "stand_guntricks_e_any";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "sit_ground_smoke";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000000B:
			*(&Param0 + 92) = Vector(-1272,701f, 109,427f, 2763,055f);
			Param0.f_236 = 29,99f;
			*(&Param0 + 284) = Vector(-1274,066f, 109,427f, 2764,018f);
			Param0.f_416 = -55,118f;
			*(&Param0 + 296) = Vector(-1278,487f, 109,427f, 2761,758f);
			Param0.f_420 = 63,9346f;
			*(&Param0 + 308) = Vector(-1262,722f, 109,427f, 2760,963f);
			Param0.f_424 = -80,99f;
			*(&Param0 + 320) = Vector(-1304,522f, 111,436f, 2730,135f);
			Param0.f_428 = 122,76f;
			*(&Param0 + 332) = Vector(-1292,069f, 109,67f, 2775,973f);
			Param0.f_432 = 44,4f;
			*(&Param0 + 344) = Vector(-1265,553f, 109,427f, 2745,011f);
			Param0.f_436 = -98,76f;
			*(&Param0 + 356) = Vector(-1246,312f, 109,427f, 2747,819f);
			Param0.f_440 = 182,339f;
			*(&Param0 + 368) = Vector(-1243,976f, 109,427f, 2747,764f);
			Param0.f_444 = 167,543f;
			*(&Param0 + 380) = Vector(-1300,97f, 108,586f, 2749,941f);
			Param0.f_448 = -26,038f;
			*(&Param0 + 392) = Vector(-1297,268f, 108,688f, 2751,153f);
			Param0.f_452 = 5,012f;
			*(&Param0 + 404) = Vector(-1292,78f, 108,424f, 2750,432f);
			Param0.f_456 = 4,55f;
			Param0.f_560 = 477;
			Param0.f_564 = 485;
			Param0.f_568 = 78;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000C:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 4;
			Function_171(&Param0 + 16, 1);
			Function_171(&Param0 + 16, 2);
			Function_171(&Param0 + 16, 4);
			Function_171(&Param0 + 16, 8);
			Function_171(&Param0 + 24, 1);
			*(&Param0 + 32) = Vector(-2830,17f, 50,33f, 2415,78f);
			*(&Param0 + 104) = Vector(-2832,45f, 50,0466f, 2420,44f);
			Param0.f_240 = 12,00024f;
			*(&Param0 + 116) = Vector(-2829,74f, 50,1411f, 2419,64f);
			Param0.f_244 = 15,00032f;
			*(&Param0 + 128) = Vector(-2828,89f, 50,3678f, 2416,18f);
			Param0.f_248 = 104,9996f;
			*(&Param0 + 140) = Vector(-2829,24f, 50,3678f, 2415,13f);
			Param0.f_252 = 104,9996f;
			*(&Param0 + 200) = Vector(-2833,559f, 50,331f, 2416,961f);
			Param0.f_280 = -89,2f;
			*(&Param0 + 92) = Vector(-2833,559f, 50,331f, 2416,961f);
			Param0.f_236 = -168,258f;
			*(&Param0 + 284) = Vector(-2821,639f, 49,173f, 2427,109f);
			Param0.f_416 = -119,337f;
			*(&Param0 + 296) = Vector(-2835,485f, 50,331f, 2416,255f);
			Param0.f_420 = 231,268f;
			*(&Param0 + 308) = Vector(-2833,374f, 50,331f, 2418,789f);
			Param0.f_424 = 338,044f;
			*(&Param0 + 320) = Vector(-2833,52f, 50,332f, 2414,594f);
			Param0.f_428 = 254,386f;
			*(&Param0 + 332) = Vector(-2831,958f, 50,332f, 2414,271f);
			Param0.f_432 = 200,957f;
			*(&Param0 + 344) = Vector(-2830,995f, 50,331f, 2418,192f);
			Param0.f_436 = 350,198f;
			*(&Param0 + 212) = Vector(-2825,655f, 50,111f, 2414,417f);
			Param0.f_272 = 213,931f;
			*(&Param0 + 224) = Vector(-2829,398f, 50,356f, 2412,87f);
			Param0.f_276 = 224,086f;
			*(&Param0 + 356) = Vector(-2815,583f, 49,017f, 2430,97f);
			Param0.f_440 = 342,394f;
			*(&Param0 + 368) = Vector(-2812,155f, 48,658f, 2430,972f);
			Param0.f_444 = 6,16f;
			*(&Param0 + 380) = Vector(-2827,84f, 49,976f, 2410,743f);
			Param0.f_448 = -80,811f;
			*(&Param0 + 392) = Vector(-2830,188f, 49,89f, 2408,717f);
			Param0.f_452 = 317,22f;
			*(&Param0 + 404) = Vector(-2832,734f, 49,902f, 2407,827f);
			Param0.f_456 = 321,988f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 79;
			*(&Param0 + 472) = "rand_idle_nearwall";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "rand_idle_stand";
			*(&Param0 + 504) = "smoking_stand";
			return 1;
			break;
		
		case 0x0000000D:
			*(&Param0 + 92) = Vector(-2867,112f, 82,255f, 2162,143f);
			Param0.f_236 = 110,078f;
			*(&Param0 + 284) = Vector(-2866,419f, 82,234f, 2164,325f);
			Param0.f_416 = 31,229f;
			*(&Param0 + 296) = Vector(-2850,979f, 80,521f, 2154,977f);
			Param0.f_420 = 164,031f;
			*(&Param0 + 308) = Vector(-2884,095f, 78,701f, 2174,188f);
			Param0.f_424 = 156,755f;
			*(&Param0 + 320) = Vector(-2852,32f, 74,649f, 2158,667f);
			Param0.f_428 = 197,574f;
			*(&Param0 + 332) = Vector(-2858,007f, 73,678f, 2162,392f);
			Param0.f_432 = 236,86f;
			*(&Param0 + 344) = Vector(-2882,746f, 72,493f, 2184,76f);
			Param0.f_436 = 218,101f;
			*(&Param0 + 356) = Vector(-2883,305f, 61,315f, 2226,45f);
			Param0.f_440 = -27,584f;
			*(&Param0 + 368) = Vector(-2883,679f, 61,567f, 2223,738f);
			Param0.f_444 = -42,562f;
			*(&Param0 + 380) = Vector(-2874,792f, 63,259f, 2214,952f);
			Param0.f_448 = -255,969f;
			*(&Param0 + 392) = Vector(-2876,241f, 63,709f, 2212,9f);
			Param0.f_452 = 90,764f;
			*(&Param0 + 404) = Vector(-2878,6f, 63,473f, 2211,664f);
			Param0.f_456 = 161,002f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000E:
			*(&Param0 + 92) = Vector(-3133,579f, 56,069f, 3318,745f);
			Param0.f_236 = 23,401f;
			*(&Param0 + 284) = Vector(-3140.0f, 57,274f, 3321,29f);
			Param0.f_416 = 123,934f;
			*(&Param0 + 296) = Vector(-3126,042f, 55,027f, 3326,012f);
			Param0.f_420 = 196,906f;
			*(&Param0 + 308) = Vector(-3133,949f, 56,603f, 3310,508f);
			Param0.f_424 = 34,806f;
			*(&Param0 + 320) = Vector(-3122,084f, 70,286f, 3310,626f);
			Param0.f_428 = -60,894f;
			*(&Param0 + 332) = Vector(-3126,811f, 71,742f, 3317,18f);
			Param0.f_432 = -229,938f;
			*(&Param0 + 344) = Vector(-3213,753f, 51,393f, 3308,028f);
			Param0.f_436 = 69,139f;
			*(&Param0 + 356) = Vector(-3164,914f, 40,289f, 3361,648f);
			Param0.f_440 = 168,955f;
			*(&Param0 + 368) = Vector(-3161,107f, 40,583f, 3362,443f);
			Param0.f_444 = 206,087f;
			*(&Param0 + 380) = Vector(-3171,199f, 39,153f, 3269,472f);
			Param0.f_448 = -11,678f;
			*(&Param0 + 392) = Vector(-3167,472f, 39,153f, 3268,428f);
			Param0.f_452 = -3,977f;
			*(&Param0 + 404) = Vector(-3163,745f, 39,153f, 3269,671f);
			Param0.f_456 = -42,562f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "stand_lookdistance_w_any";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "rand_idle_stand";
			*(&Param0 + 504) = "smoking_stand";
			return 1;
			break;
		
		case 0x0000000F:
			*(&Param0 + 92) = Vector(-2336,926f, 17,067f, 3170,493f);
			Param0.f_236 = -2,14f;
			*(&Param0 + 284) = Vector(-2336,072f, 17,067f, 3169,268f);
			Param0.f_416 = -86,214f;
			*(&Param0 + 296) = Vector(-2336,887f, 17,067f, 3166,954f);
			Param0.f_420 = -2,14f;
			*(&Param0 + 308) = Vector(-2330,964f, 17,067f, 3163,609f);
			Param0.f_424 = -23,4f;
			*(&Param0 + 320) = Vector(-2327,604f, 17,067f, 3172,758f);
			Param0.f_428 = -118,706f;
			*(&Param0 + 332) = Vector(-2335,599f, 17,067f, 3174,808f);
			Param0.f_432 = 197,731f;
			*(&Param0 + 344) = Vector(-2340,001f, 17,067f, 3172,798f);
			Param0.f_436 = -13,714f;
			*(&Param0 + 356) = Vector(-2322,803f, 17,067f, 3145,059f);
			Param0.f_440 = 311,211f;
			*(&Param0 + 368) = Vector(-2320,44f, 17,067f, 3146,652f);
			Param0.f_444 = -25,28f;
			*(&Param0 + 380) = Vector(-2316,756f, 17,07f, 3148,32f);
			Param0.f_448 = 5,107f;
			*(&Param0 + 392) = Vector(-2328,458f, 17,067f, 3180,156f);
			Param0.f_452 = 58,412f;
			*(&Param0 + 404) = Vector(-2325,201f, 17,067f, 3177,577f);
			Param0.f_456 = 58,218f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 22;
			*(&Param0 + 472) = "rand_idle_stand_nospaw";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "rand_idle_nearwall";
			*(&Param0 + 504) = "pee";
			return 1;
			break;
		
		case 0x00000010:
			*(&Param0 + 92) = Vector(-2337,728f, 17,067f, 3170,294f);
			Param0.f_236 = 9,971f;
			*(&Param0 + 284) = Vector(-1946,763f, 30,337f, 3468,948f);
			Param0.f_416 = -88,999f;
			*(&Param0 + 296) = Vector(-1950,671f, 30,338f, 3467,57f);
			Param0.f_420 = 237,607f;
			*(&Param0 + 308) = Vector(-1950,803f, 30,338f, 3470,875f);
			Param0.f_424 = 283,753f;
			*(&Param0 + 320) = Vector(-1948,542f, 30,338f, 3470,916f);
			Param0.f_428 = 342,294f;
			*(&Param0 + 332) = Vector(-1946,635f, 30,338f, 3470,909f);
			Param0.f_432 = 314,856f;
			*(&Param0 + 344) = Vector(-1946,089f, 30,338f, 3466,877f);
			Param0.f_436 = 171,423f;
			*(&Param0 + 356) = Vector(-1931,435f, 31,592f, 3460,451f);
			Param0.f_440 = 5,107f;
			*(&Param0 + 368) = Vector(-1929,337f, 31,849f, 3461,238f);
			Param0.f_444 = 58,412f;
			*(&Param0 + 380) = Vector(-1927,96f, 31,946f, 3462,877f);
			Param0.f_448 = 58,218f;
			*(&Param0 + 392) = Vector(-1949,424f, 30,218f, 3461,784f);
			Param0.f_452 = -206,774f;
			*(&Param0 + 404) = Vector(-1946,031f, 30,195f, 3462,501f);
			Param0.f_456 = 172,571f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 76;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "sit_ground_only";
			*(&Param0 + 496) = "sit_ground_smoke";
			*(&Param0 + 504) = "sit_ground_only";
			return 1;
			break;
		
		case 0x00000011:
			*(&Param0 + 92) = Vector(-4314,102f, 5,097f, 3744,501f);
			Param0.f_236 = 43,016f;
			*(&Param0 + 284) = Vector(-4317,295f, 5,097f, 3743,768f);
			Param0.f_416 = -91,905f;
			*(&Param0 + 296) = Vector(-4310,602f, 5,097f, 3745,569f);
			Param0.f_420 = 37,237f;
			*(&Param0 + 308) = Vector(-4313,688f, 5,097f, 3745,833f);
			Param0.f_424 = 345,341f;
			*(&Param0 + 320) = Vector(-4314,063f, 5,097f, 3742,018f);
			Param0.f_428 = 175,597f;
			*(&Param0 + 332) = Vector(-4317,56f, 5,097f, 3741,946f);
			Param0.f_432 = 225,245f;
			*(&Param0 + 344) = Vector(-4317,576f, 5,097f, 3745,841f);
			Param0.f_436 = 315,983f;
			*(&Param0 + 356) = Vector(-4290,656f, 3,974f, 3728,148f);
			Param0.f_440 = -91,776f;
			*(&Param0 + 368) = Vector(-4290,388f, 3,801f, 3730,024f);
			Param0.f_444 = -42,776f;
			*(&Param0 + 380) = Vector(-4315,129f, 4,818f, 3751,202f);
			Param0.f_448 = -11,666f;
			*(&Param0 + 392) = Vector(-4313,023f, 4,706f, 3751,904f);
			Param0.f_452 = 0,707f;
			*(&Param0 + 404) = Vector(-4308,537f, 4,79f, 3750,439f);
			Param0.f_456 = -24,694f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "rand_idle_nearwall";
			*(&Param0 + 496) = "sit_barrel";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000012:
			Param0.f_4 = 2;
			Param0.f_8 = 2;
			Param0.f_12 = 7;
			Function_171(&Param0 + 16, 1);
			Function_171(&Param0 + 16, 2);
			Function_171(&Param0 + 16, 4);
			Function_171(&Param0 + 16, 8);
			Function_171(&Param0 + 16, 16);
			Function_171(&Param0 + 16, 32);
			Function_171(&Param0 + 16, 64);
			Function_171(&Param0 + 24, 1);
			Function_171(&Param0 + 28, 2);
			*(&Param0 + 32) = Vector(-4015,39f, 21,47f, 2401,58f);
			*(&Param0 + 44) = Vector(-4019,6f, 21,47f, 2397,61f);
			*(&Param0 + 104) = Vector(-4017,411f, 21,0644f, 2403,306f);
			Param0.f_240 = 18.0f;
			*(&Param0 + 116) = Vector(-4016,05f, 21,47f, 2402,87f);
			Param0.f_244 = 21.0f;
			*(&Param0 + 128) = Vector(-4014,66f, 21,47f, 2402,34f);
			Param0.f_248 = 26,99f;
			*(&Param0 + 140) = Vector(-4012,81f, 21,0831f, 2401,69f);
			Param0.f_252 = 20,99f;
			*(&Param0 + 152) = Vector(-4021,25f, 21,0831f, 2396,7f);
			Param0.f_256 = -158,9996f;
			*(&Param0 + 164) = Vector(-4019,22f, 21,0901f, 2395,92f);
			Param0.f_260 = -155,9994f;
			*(&Param0 + 176) = Vector(-4018,17f, 21,0922f, 2395,57f);
			Param0.f_264 = -158,9997f;
			*(&Param0 + 200) = Vector(-4013,456f, 21,468f, 2397,704f);
			Param0.f_280 = -70,274f;
			*(&Param0 + 92) = Vector(-4017,441f, 21,468f, 2397,854f);
			Param0.f_236 = 108,646f;
			*(&Param0 + 284) = Vector(-4015,457f, 21,468f, 2398,76f);
			Param0.f_416 = 172,429f;
			*(&Param0 + 296) = Vector(-4013,634f, 21,468f, 2397,108f);
			Param0.f_420 = 158,005f;
			*(&Param0 + 308) = Vector(-4013,326f, 21,468f, 2399,415f);
			Param0.f_424 = 73,958f;
			*(&Param0 + 320) = Vector(-4016,929f, 21,468f, 2397,175f);
			Param0.f_428 = 198,278f;
			*(&Param0 + 332) = Vector(-4018,968f, 21,468f, 2399,702f);
			Param0.f_432 = 248,481f;
			*(&Param0 + 344) = Vector(-4018,745f, 21,469f, 2400,946f);
			Param0.f_436 = 16,41f;
			*(&Param0 + 212) = Vector(-4007,415f, 21,083f, 2402,38f);
			Param0.f_272 = 234,336f;
			*(&Param0 + 224) = Vector(-4008,202f, 20,972f, 2395,384f);
			Param0.f_276 = 193,987f;
			*(&Param0 + 356) = Vector(-4019,287f, 20,967f, 2406,868f);
			Param0.f_440 = 8,376f;
			*(&Param0 + 368) = Vector(-4017,313f, 20,995f, 2406,151f);
			Param0.f_444 = 33,251f;
			*(&Param0 + 380) = Vector(-4020,812f, 21,39f, 2389,644f);
			Param0.f_448 = -136,243f;
			*(&Param0 + 392) = Vector(-4017,785f, 21,265f, 2386,962f);
			Param0.f_452 = 177,627f;
			*(&Param0 + 404) = Vector(-4012,265f, 21,024f, 2388,6f);
			Param0.f_456 = 120,35f;
			Param0.f_560 = 467;
			Param0.f_564 = 476;
			Param0.f_568 = 22;
			*(&Param0 + 472) = "rand_idle_nearwall";
			*(&Param0 + 480) = "rand_idle_stand";
			*(&Param0 + 488) = "sit_barrel";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000013:
			*(&Param0 + 92) = Vector(-276,02f, 73,201f, 2393,458f);
			Param0.f_236 = 179,686f;
			*(&Param0 + 284) = Vector(-274,324f, 73,201f, 2393,741f);
			Param0.f_416 = 51,013f;
			*(&Param0 + 296) = Vector(-289,984f, 72,456f, 2419,312f);
			Param0.f_420 = -183,278f;
			*(&Param0 + 308) = Vector(-273,119f, 73,18f, 2396,791f);
			Param0.f_424 = 270,616f;
			*(&Param0 + 320) = Vector(-273,986f, 73,155f, 2398,214f);
			Param0.f_428 = 270,616f;
			*(&Param0 + 332) = Vector(-277,702f, 73,155f, 2397,789f);
			Param0.f_432 = 121,425f;
			*(&Param0 + 344) = Vector(-278,525f, 73,138f, 2390,977f);
			Param0.f_436 = 44,233f;
			*(&Param0 + 356) = Vector(-292,719f, 75,262f, 2378,368f);
			Param0.f_440 = 137,598f;
			*(&Param0 + 368) = Vector(-297,222f, 75,295f, 2379,061f);
			Param0.f_444 = 207,699f;
			*(&Param0 + 380) = Vector(-286,079f, 75,299f, 2369,13f);
			Param0.f_448 = 248,664f;
			*(&Param0 + 392) = Vector(-284,174f, 75,289f, 2372,132f);
			Param0.f_452 = -79,602f;
			*(&Param0 + 404) = Vector(-282,211f, 74,962f, 2375,943f);
			Param0.f_456 = -18,74f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 76;
			*(&Param0 + 472) = "stand_lookdistance_w_any";
			*(&Param0 + 480) = "nsit_docks";
			*(&Param0 + 488) = "look_out_window_R";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000014:
			*(&Param0 + 92) = Vector(-1910,925f, 29,066f, 2263,904f);
			Param0.f_236 = 0.0f;
			*(&Param0 + 284) = Vector(-1911,897f, 29,17f, 2259,949f);
			Param0.f_416 = 0.0f;
			*(&Param0 + 284) = Vector(-1920,034f, 31,008f, 2265,405f);
			Param0.f_416 = 221,236f;
			*(&Param0 + 296) = Vector(-1892,769f, 30,055f, 2254,382f);
			Param0.f_420 = 221,236f;
			*(&Param0 + 308) = Vector(-1877,283f, 26,099f, 2289,581f);
			Param0.f_424 = 152,442f;
			*(&Param0 + 320) = Vector(-1895,984f, 26,887f, 2247,959f);
			Param0.f_428 = 333,899f;
			*(&Param0 + 344) = Vector(-1909,376f, 29,083f, 2265,966f);
			Param0.f_436 = 221,236f;
			*(&Param0 + 356) = Vector(-1897,51f, 26,15f, 2271,694f);
			Param0.f_440 = 19,763f;
			*(&Param0 + 368) = Vector(-1894,347f, 26,128f, 2268,736f);
			Param0.f_444 = 48,841f;
			*(&Param0 + 380) = Vector(-1917,895f, 28,101f, 2245,381f);
			Param0.f_448 = -178,708f;
			*(&Param0 + 392) = Vector(-1921,323f, 28,113f, 2244,031f);
			Param0.f_452 = 199,115f;
			*(&Param0 + 404) = Vector(-1926,575f, 28,202f, 2244,469f);
			Param0.f_456 = -174,429f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 78;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000015:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 4;
			Function_171(&Param0 + 16, 1);
			Function_171(&Param0 + 16, 2);
			Function_171(&Param0 + 16, 4);
			Function_171(&Param0 + 16, 8);
			Function_171(&Param0 + 24, 1);
			*(&Param0 + 32) = Vector(124,8f, 72,42f, 2674,02f);
			*(&Param0 + 104) = Vector(125,233f, 72,4417f, 2675,04f);
			Param0.f_240 = 27,58978f;
			*(&Param0 + 116) = Vector(119,64f, 72,3106f, 2670,55f);
			Param0.f_244 = -68,4101f;
			*(&Param0 + 128) = Vector(120,486f, 72,2827f, 2672,62f);
			Param0.f_248 = -65,41f;
			*(&Param0 + 140) = Vector(121,484f, 72,2827f, 2674,54f);
			Param0.f_252 = -62,41014f;
			*(&Param0 + 200) = Vector(121,695f, 72,413f, 2670,63f);
			Param0.f_280 = 115,156f;
			*(&Param0 + 92) = Vector(123,42f, 72,41f, 2670,18f);
			Param0.f_236 = -63,854f;
			*(&Param0 + 284) = Vector(124,188f, 72,409f, 2671,846f);
			Param0.f_416 = 180,71f;
			*(&Param0 + 296) = Vector(129,244f, 72,501f, 2674,226f);
			Param0.f_420 = 222,542f;
			*(&Param0 + 308) = Vector(121,386f, 72,413f, 2669,545f);
			Param0.f_424 = 222,542f;
			*(&Param0 + 320) = Vector(125,005f, 72,412f, 2671,428f);
			Param0.f_428 = 163,679f;
			*(&Param0 + 332) = Vector(122,952f, 72,413f, 2673,766f);
			Param0.f_432 = 305,582f;
			*(&Param0 + 344) = Vector(121,713f, 72,413f, 2670,76f);
			Param0.f_436 = 210,612f;
			*(&Param0 + 356) = Vector(92,981f, 71,278f, 2684,761f);
			Param0.f_440 = 195,17f;
			*(&Param0 + 368) = Vector(96,374f, 71,278f, 2684,102f);
			Param0.f_444 = 211,049f;
			*(&Param0 + 380) = Vector(99,038f, 71,278f, 2683,421f);
			Param0.f_448 = -178,708f;
			*(&Param0 + 392) = Vector(104,447f, 71,802f, 2673,734f);
			Param0.f_452 = 108,966f;
			*(&Param0 + 404) = Vector(107,48f, 72,023f, 2671,56f);
			Param0.f_456 = 105,112f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 78;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "rand_idle_nearwall";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "smoking_stand";
			return 1;
			break;
		
		case 0x00000016:
			*(&Param0 + 92) = Vector(-2302,359f, 24,248f, 3007,561f);
			Param0.f_236 = 69,576f;
			*(&Param0 + 284) = Vector(-2302,725f, 24,279f, 3009,553f);
			Param0.f_416 = -136,418f;
			*(&Param0 + 296) = Vector(-2301,099f, 24,287f, 3008,008f);
			Param0.f_420 = 104,512f;
			*(&Param0 + 308) = Vector(-2310,734f, 24,094f, 3005,089f);
			Param0.f_424 = 285,688f;
			*(&Param0 + 320) = Vector(-2307,478f, 24,094f, 3008,271f);
			Param0.f_428 = 357,122f;
			*(&Param0 + 332) = Vector(-2311,779f, 24,094f, 3006,169f);
			Param0.f_432 = 163,369f;
			*(&Param0 + 344) = Vector(-2308,875f, 24,094f, 3012,738f);
			Param0.f_436 = 60,202f;
			*(&Param0 + 356) = Vector(-2285,946f, 23,773f, 3003,648f);
			Param0.f_440 = 276,733f;
			*(&Param0 + 368) = Vector(-2287,244f, 23,374f, 3005,345f);
			Param0.f_444 = 266,906f;
			*(&Param0 + 380) = Vector(-2318,237f, 23,09f, 3000,99f);
			Param0.f_448 = -112,242f;
			*(&Param0 + 392) = Vector(-2320,324f, 23,09f, 3003,359f);
			Param0.f_452 = -108,476f;
			*(&Param0 + 404) = Vector(-2318,79f, 23,09f, 3006,107f);
			Param0.f_456 = -66,319f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 76;
			*(&Param0 + 472) = "rand_idle_nearwall";
			*(&Param0 + 480) = "look_out_window_L";
			*(&Param0 + 488) = "rand_idle_nearwall_shoulder_L";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000017:
			*(&Param0 + 92) = Vector(-2006,736f, 42,176f, 3043,272f);
			Param0.f_236 = 88,686f;
			*(&Param0 + 284) = Vector(-2006,836f, 42,042f, 3045,16f);
			Param0.f_416 = 31,174f;
			*(&Param0 + 296) = Vector(-2007,755f, 42,041f, 3041,964f);
			Param0.f_420 = 228,602f;
			*(&Param0 + 308) = Vector(-2012,868f, 42,041f, 3048,789f);
			Param0.f_424 = 282,164f;
			*(&Param0 + 320) = Vector(-2009,239f, 42,129f, 3051,271f);
			Param0.f_428 = 331,148f;
			*(&Param0 + 332) = Vector(-2006,306f, 42,041f, 3052,617f);
			Param0.f_432 = 0,34f;
			*(&Param0 + 344) = Vector(-2001,105f, 42,041f, 3046,785f);
			Param0.f_436 = 77,931f;
			*(&Param0 + 356) = Vector(-2027,215f, 42,041f, 3014,213f);
			Param0.f_440 = 300,121f;
			*(&Param0 + 368) = Vector(-2023,29f, 42,041f, 3020,031f);
			Param0.f_444 = 342,792f;
			*(&Param0 + 380) = Vector(-2000,098f, 42,041f, 3036,175f);
			Param0.f_448 = -108,44f;
			*(&Param0 + 392) = Vector(-1999,392f, 42,041f, 3033,619f);
			Param0.f_452 = -90,929f;
			*(&Param0 + 404) = Vector(-2000,346f, 42,041f, 3030,437f);
			Param0.f_456 = -92,428f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 22;
			*(&Param0 + 472) = "rand_idle_stand";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000018:
			Param0.f_4 = 2;
			Param0.f_8 = 5;
			Param0.f_12 = 7;
			Function_171(&Param0 + 16, 1);
			Function_171(&Param0 + 16, 2);
			Function_171(&Param0 + 16, 4);
			Function_171(&Param0 + 16, 8);
			Function_171(&Param0 + 20, 16);
			Function_171(&Param0 + 20, 32);
			Function_171(&Param0 + 20, 64);
			Function_171(&Param0 + 24, 1);
			Function_171(&Param0 + 24, 2);
			Function_171(&Param0 + 24, 4);
			Function_171(&Param0 + 28, 8);
			Function_171(&Param0 + 28, 16);
			*(&Param0 + 32) = Vector(-933,046f, 102,412f, 2754,824f);
			*(&Param0 + 44) = Vector(-934,29f, 102,412f, 2753,085f);
			*(&Param0 + 56) = Vector(-936,489f, 102,412f, 2749,95f);
			*(&Param0 + 68) = Vector(-924,889f, 102,412f, 2749,364f);
			*(&Param0 + 80) = Vector(-926,622f, 102,412f, 2746,998f);
			*(&Param0 + 104) = Vector(-934,086f, 102,412f, 2754,75f);
			Param0.f_240 = -51,43177f;
			*(&Param0 + 116) = Vector(-934,93f, 102,412f, 2753,63f);
			Param0.f_244 = -57,54f;
			*(&Param0 + 128) = Vector(-936,926f, 102,403f, 2750,86f);
			Param0.f_248 = -56,40995f;
			*(&Param0 + 140) = Vector(-931,301f, 102,412f, 2758,66f);
			Param0.f_252 = -56,43486f;
			*(&Param0 + 152) = Vector(-924,354f, 102,412f, 2748,71f);
			Param0.f_256 = 134,459f;
			*(&Param0 + 164) = Vector(-925,075f, 102,412f, 2747,82f);
			Param0.f_260 = 122,492f;
			*(&Param0 + 176) = Vector(-925,893f, 102,412f, 2746,57f);
			Param0.f_264 = 115,843f;
			*(&Param0 + 200) = Vector(-932,868f, 102,415f, 2746,785f);
			Param0.f_280 = 212,28f;
			*(&Param0 + 92) = Vector(-929,793f, 102,412f, 2750,46f);
			Param0.f_236 = -50,84f;
			*(&Param0 + 212) = Vector(-940,871f, 102,342f, 2749,936f);
			Param0.f_272 = 178,269f;
			*(&Param0 + 224) = Vector(-939,418f, 102,266f, 2752,68f);
			Param0.f_276 = 120,908f;
			*(&Param0 + 284) = Vector(-930,626f, 102,4122f, 2752.0f);
			Param0.f_416 = -28,78f;
			*(&Param0 + 296) = Vector(-924,765f, 102,412f, 2753,702f);
			Param0.f_420 = 72,373f;
			*(&Param0 + 308) = Vector(-927,281f, 102,412f, 2754,368f);
			Param0.f_424 = 69,79f;
			*(&Param0 + 320) = Vector(-929,789f, 102,504f, 2756,111f);
			Param0.f_428 = 341,777f;
			*(&Param0 + 332) = Vector(-934,494f, 102,42f, 2747,736f);
			Param0.f_432 = 269,014f;
			*(&Param0 + 344) = Vector(-932,133f, 102,413f, 2746,273f);
			Param0.f_436 = 145,15f;
			*(&Param0 + 356) = Vector(-976,159f, 103,637f, 2719,504f);
			Param0.f_440 = -191,58f;
			*(&Param0 + 368) = Vector(-974,168f, 103,637f, 2720,047f);
			Param0.f_444 = 486,238f;
			*(&Param0 + 380) = Vector(-933,686f, 102,412f, 2758,172f);
			Param0.f_448 = 297,957f;
			*(&Param0 + 392) = Vector(-930,962f, 102,387f, 2762,141f);
			Param0.f_452 = -89,501f;
			*(&Param0 + 404) = Vector(-932,674f, 102,412f, 2759,572f);
			Param0.f_456 = -38,718f;
			Param0.f_560 = 477;
			Param0.f_564 = 485;
			Param0.f_568 = 79;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000019:
			*(&Param0 + 92) = Vector(-594,268f, 30,877f, 4008,359f);
			Param0.f_236 = 170,652f;
			*(&Param0 + 284) = Vector(-597,294f, 30,877f, 4005,67f);
			Param0.f_416 = -138,782f;
			*(&Param0 + 296) = Vector(-639,225f, 13,58f, 3993,509f);
			Param0.f_420 = -292,51f;
			*(&Param0 + 308) = Vector(-628,453f, 20,346f, 4004,586f);
			Param0.f_424 = -336,107f;
			*(&Param0 + 320) = Vector(-619,798f, 20,664f, 3987,649f);
			Param0.f_428 = -308,869f;
			*(&Param0 + 332) = Vector(-596.0f, 30,877f, 4002,884f);
			Param0.f_432 = 43,992f;
			*(&Param0 + 344) = Vector(-598,929f, 30,877f, 4007,492f);
			Param0.f_436 = 115,375f;
			*(&Param0 + 356) = Vector(-656,717f, 13,171f, 3987,879f);
			Param0.f_440 = 206,407f;
			*(&Param0 + 368) = Vector(-654,461f, 13,465f, 3985,152f);
			Param0.f_444 = 227,436f;
			*(&Param0 + 380) = Vector(-651,5f, 13,744f, 3982,614f);
			Param0.f_448 = -118,83f;
			*(&Param0 + 392) = Vector(-633,228f, 21,456f, 4015,153f);
			Param0.f_452 = -24,598f;
			*(&Param0 + 404) = Vector(-629,02f, 22,181f, 4014,968f);
			Param0.f_456 = 0,56f;
			Param0.f_560 = 516;
			Param0.f_564 = 531;
			Param0.f_568 = 241;
			*(&Param0 + 472) = "stand_lookdistance_w_any";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x0000001A:
			*(&Param0 + 92) = Vector(-2229,454f, 23,263f, 4452,343f);
			Param0.f_236 = 15,678f;
			*(&Param0 + 284) = Vector(-2228,686f, 23,263f, 4453,672f);
			Param0.f_416 = 269,799f;
			*(&Param0 + 296) = Vector(-2227,613f, 23,264f, 4451,309f);
			Param0.f_420 = 172,945f;
			*(&Param0 + 308) = Vector(-2232,662f, 23,09f, 4453,425f);
			Param0.f_424 = 301,728f;
			*(&Param0 + 320) = Vector(-2235,676f, 23,09f, 4450,952f);
			Param0.f_428 = 318,266f;
			*(&Param0 + 332) = Vector(-2237,908f, 23,09f, 4450,775f);
			Param0.f_432 = 167,035f;
			*(&Param0 + 344) = Vector(-2234,18f, 23,084f, 4457,452f);
			Param0.f_436 = 64,468f;
			*(&Param0 + 356) = Vector(-2261,394f, 23,09f, 4470,363f);
			Param0.f_440 = 16,854f;
			*(&Param0 + 368) = Vector(-2258,274f, 23,09f, 4467,679f);
			Param0.f_444 = 26,089f;
			*(&Param0 + 380) = Vector(-2256,098f, 23,09f, 4464,197f);
			Param0.f_448 = 42,078f;
			*(&Param0 + 392) = Vector(-2235,659f, 22,666f, 4469,637f);
			Param0.f_452 = -24,598f;
			*(&Param0 + 404) = Vector(-2232,33f, 22,295f, 4469,952f);
			Param0.f_456 = 0,56f;
			Param0.f_560 = 496;
			Param0.f_564 = 504;
			Param0.f_568 = 241;
			*(&Param0 + 472) = "rand_idle_nearwall";
			*(&Param0 + 480) = "rand_idle_nearwall";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "look_out_window_R";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001B:
			Param0.f_4 = 2;
			Param0.f_8 = 2;
			Param0.f_12 = 5;
			Function_171(&Param0 + 16, 1);
			Function_171(&Param0 + 16, 2);
			Function_171(&Param0 + 16, 4);
			Function_171(&Param0 + 20, 8);
			Function_171(&Param0 + 20, 16);
			Function_171(&Param0 + 24, 1);
			Function_171(&Param0 + 28, 2);
			*(&Param0 + 32) = Vector(-2146,41f, 18,68f, 4968,09f);
			*(&Param0 + 44) = Vector(-2148,09f, 18,6f, 4975,03f);
			*(&Param0 + 104) = Vector(-2146,39f, 18,6664f, 4967,08f);
			Param0.f_240 = -179,9999f;
			*(&Param0 + 116) = Vector(-2149,77f, 18,6475f, 4967,08f);
			Param0.f_244 = 173,9998f;
			*(&Param0 + 128) = Vector(-2151,57f, 18,6481f, 4967,2f);
			Param0.f_248 = -167,4099f;
			*(&Param0 + 140) = Vector(-2149,26f, 18,5743f, 4974,89f);
			Param0.f_252 = -83,4349f;
			*(&Param0 + 152) = Vector(-2150,66f, 18,567f, 4974,58f);
			Param0.f_256 = 0,565044f;
			*(&Param0 + 200) = Vector(-2150,144f, 18,767f, 4969,001f);
			Param0.f_280 = -10.0f;
			*(&Param0 + 92) = Vector(-2150,144f, 18,769f, 4970,876f);
			Param0.f_236 = -91,877f;
			*(&Param0 + 284) = Vector(-2151,557f, 18,769f, 4968,783f);
			Param0.f_416 = -2,067f;
			*(&Param0 + 296) = Vector(-2151,326f, 18,923f, 4972,898f);
			Param0.f_420 = 310,943f;
			*(&Param0 + 308) = Vector(-2151,132f, 18,779f, 4969,101f);
			Param0.f_424 = 258,013f;
			*(&Param0 + 320) = Vector(-2144,955f, 18,687f, 4969,136f);
			Param0.f_428 = 175,623f;
			*(&Param0 + 332) = Vector(-2144,075f, 18,72f, 4976,095f);
			Param0.f_432 = 60,675f;
			*(&Param0 + 344) = Vector(-2143,88f, 18,554f, 4973,849f);
			Param0.f_436 = 107,552f;
			*(&Param0 + 212) = Vector(-2145,371f, 16,058f, 4946,544f);
			Param0.f_272 = 35,385f;
			*(&Param0 + 224) = Vector(-2142,939f, 17,556f, 4955,767f);
			Param0.f_276 = 40,164f;
			*(&Param0 + 356) = Vector(-2153,897f, 18,18f, 4961,988f);
			Param0.f_440 = -180,427f;
			*(&Param0 + 368) = Vector(-2151,259f, 18,206f, 4961,947f);
			Param0.f_444 = 161,988f;
			*(&Param0 + 380) = Vector(-2160,059f, 18,784f, 4975,642f);
			Param0.f_448 = -66,278f;
			*(&Param0 + 392) = Vector(-2160,758f, 18,991f, 4972,499f);
			Param0.f_452 = -91,17f;
			*(&Param0 + 404) = Vector(-2162,294f, 18,654f, 4970,544f);
			Param0.f_456 = -94,479f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 240;
			*(&Param0 + 472) = "rand_idle_stand";
			*(&Param0 + 480) = "rand_idle_nearwall";
			*(&Param0 + 488) = "look_out_window_L";
			*(&Param0 + 496) = "rand_idle_nearwall";
			*(&Param0 + 504) = "rand_idle_stand";
			return 1;
			break;
		
		case 0x0000001C:
			*(&Param0 + 92) = Vector(-3860,593f, 7,026f, 4319,981f);
			Param0.f_236 = -90,815f;
			*(&Param0 + 284) = Vector(-3859,166f, 7,134f, 4320,9f);
			Param0.f_416 = 136,441f;
			*(&Param0 + 296) = Vector(-3844,011f, 9,254f, 4311,946f);
			Param0.f_420 = -21,903f;
			*(&Param0 + 308) = Vector(-3863,951f, 7,777f, 4303,869f);
			Param0.f_424 = -21,903f;
			*(&Param0 + 320) = Vector(-3852.0f, 8,637f, 4312.0f);
			Param0.f_428 = -64,114f;
			*(&Param0 + 332) = Vector(-3832.0f, 12,518f, 4336.0f);
			Param0.f_432 = -129,939f;
			*(&Param0 + 344) = Vector(-3899,941f, 8,031f, 4340,052f);
			Param0.f_436 = -228,003f;
			*(&Param0 + 356) = Vector(-3888,227f, 7,087f, 4312,428f);
			Param0.f_440 = -180,427f;
			*(&Param0 + 368) = Vector(-3886,172f, 7,144f, 4312,964f);
			Param0.f_444 = 153,52f;
			*(&Param0 + 380) = Vector(-3883,771f, 7,16f, 4314,396f);
			Param0.f_448 = 81,666f;
			*(&Param0 + 392) = Vector(-3904,027f, 8,026f, 4346,417f);
			Param0.f_452 = 2,248f;
			*(&Param0 + 404) = Vector(-3907,203f, 8,013f, 4347,759f);
			Param0.f_456 = -21,903f;
			Param0.f_560 = 516;
			Param0.f_564 = 531;
			Param0.f_568 = 241;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "rand_idle_stand";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001D:
			*(&Param0 + 92) = Vector(-2718,606f, 56,177f, 4626,842f);
			Param0.f_236 = 82,944f;
			*(&Param0 + 284) = Vector(-2720,237f, 56,14f, 4631,692f);
			Param0.f_416 = 158,989f;
			*(&Param0 + 296) = Vector(-2729,397f, 48,497f, 4677,15f);
			Param0.f_420 = -110,579f;
			*(&Param0 + 308) = Vector(-2741,735f, 54,206f, 4660,338f);
			Param0.f_424 = -119,906f;
			*(&Param0 + 320) = Vector(-2751,354f, 54,564f, 4652,214f);
			Param0.f_428 = 18,414f;
			*(&Param0 + 332) = Vector(-2719,352f, 56,14f, 4623,413f);
			Param0.f_432 = 150,864f;
			*(&Param0 + 344) = Vector(-2724,634f, 56,107f, 4623,532f);
			Param0.f_436 = 81,922f;
			*(&Param0 + 356) = Vector(-2745,797f, 47,988f, 4625,989f);
			Param0.f_440 = -26,293f;
			*(&Param0 + 368) = Vector(-2747,859f, 47,693f, 4624,839f);
			Param0.f_444 = 357,726f;
			*(&Param0 + 380) = Vector(-2713,109f, 45,646f, 4660,732f);
			Param0.f_448 = -61,194f;
			*(&Param0 + 392) = Vector(-2711,452f, 45,176f, 4662,766f);
			Param0.f_452 = -86,959f;
			*(&Param0 + 404) = Vector(-2709,494f, 44,534f, 4665,703f);
			Param0.f_456 = 322,758f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 240;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "sit_ground_smoke";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001E:
			*(&Param0 + 92) = Vector(-1467,45f, 20,603f, 4901,757f);
			Param0.f_236 = -162,78f;
			*(&Param0 + 284) = Vector(-1466,004f, 20,603f, 4902,112f);
			Param0.f_416 = -93,268f;
			*(&Param0 + 296) = Vector(-1451,772f, 19,108f, 4898,179f);
			Param0.f_420 = -160,576f;
			*(&Param0 + 308) = Vector(-1454,196f, 19,055f, 4894,595f);
			Param0.f_424 = -38,336f;
			*(&Param0 + 320) = Vector(-1450,552f, 19,693f, 4912,277f);
			Param0.f_428 = -90,774f;
			*(&Param0 + 332) = Vector(-1450,581f, 19,693f, 4914,392f);
			Param0.f_432 = -90,774f;
			*(&Param0 + 344) = Vector(-1465,731f, 20,603f, 4897,664f);
			Param0.f_436 = 301,206f;
			*(&Param0 + 356) = Vector(-1430,556f, 17,862f, 4892,925f);
			Param0.f_440 = 108,339f;
			*(&Param0 + 368) = Vector(-1431,704f, 17,763f, 4891,236f);
			Param0.f_444 = 133,614f;
			*(&Param0 + 380) = Vector(-1473,657f, 20,603f, 4911,594f);
			Param0.f_448 = -119,795f;
			*(&Param0 + 392) = Vector(-1473,616f, 20,603f, 4915,059f);
			Param0.f_452 = -86,959f;
			*(&Param0 + 404) = Vector(-1471,429f, 20,603f, 4917,822f);
			Param0.f_456 = -35,592f;
			Param0.f_560 = 516;
			Param0.f_564 = 531;
			Param0.f_568 = 239;
			*(&Param0 + 472) = "rand_idle_nearwall_shoulder_R";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "rand_idle_sit_ground";
			*(&Param0 + 504) = "smoking_stand";
			return 1;
			break;
		
		case 0x0000001F:
			*(&Param0 + 92) = Vector(-3372,019f, 56,259f, 4774,489f);
			Param0.f_236 = -19,982f;
			*(&Param0 + 284) = Vector(-3371,442f, 56,214f, 4771,472f);
			Param0.f_416 = -76,399f;
			*(&Param0 + 296) = Vector(-3393,076f, 54,674f, 4743,264f);
			Param0.f_420 = 286,167f;
			*(&Param0 + 308) = Vector(-3393,214f, 55,216f, 4756,916f);
			Param0.f_424 = 107,552f;
			*(&Param0 + 320) = Vector(-3383,994f, 55,505f, 4741,233f);
			Param0.f_428 = 74,847f;
			*(&Param0 + 332) = Vector(-3382,398f, 55,677f, 4740,638f);
			Param0.f_432 = 331,954f;
			*(&Param0 + 344) = Vector(-3376,667f, 55,897f, 4740,309f);
			Param0.f_436 = 338,64f;
			*(&Param0 + 356) = Vector(-3391,581f, 46,292f, 4692,715f);
			Param0.f_440 = -74,949f;
			*(&Param0 + 368) = Vector(-3392,009f, 45,853f, 4690,46f);
			Param0.f_444 = 293,54f;
			*(&Param0 + 380) = Vector(-3391,6f, 54,824f, 4744.0f);
			Param0.f_448 = -8,776f;
			*(&Param0 + 392) = Vector(-3389,719f, 55,082f, 4743,2f);
			Param0.f_452 = -2,587f;
			*(&Param0 + 404) = Vector(-3387,438f, 55,154f, 4743,16f);
			Param0.f_456 = 18,612f;
			Param0.f_560 = 516;
			Param0.f_564 = 531;
			Param0.f_568 = 239;
			*(&Param0 + 472) = "rand_idle_nearwall";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "rand_idle_stand";
			*(&Param0 + 504) = "rand_idle_stand";
			return 1;
			break;
		
		case 0x00000020:
			*(&Param0 + 92) = Vector(-1200,815f, 19,177f, 4963,429f);
			Param0.f_236 = -227,436f;
			*(&Param0 + 284) = Vector(-1200,294f, 19,035f, 4966,604f);
			Param0.f_416 = 224,446f;
			*(&Param0 + 296) = Vector(-1201,298f, 19,075f, 4967,346f);
			Param0.f_420 = 21,338f;
			*(&Param0 + 308) = Vector(-1204,447f, 19,075f, 4963,138f);
			Param0.f_424 = 236,595f;
			*(&Param0 + 320) = Vector(-1200,658f, 19,075f, 4960,558f);
			Param0.f_428 = 203,712f;
			*(&Param0 + 332) = Vector(-1205,747f, 19,075f, 4961,868f);
			Param0.f_432 = 183,278f;
			*(&Param0 + 344) = Vector(-1202,148f, 19,075f, 4958,978f);
			Param0.f_436 = 288,224f;
			*(&Param0 + 356) = Vector(-1179,418f, 17,055f, 4982,803f);
			Param0.f_440 = -40,128f;
			*(&Param0 + 368) = Vector(-1181,623f, 17,064f, 4980,798f);
			Param0.f_444 = 293,54f;
			*(&Param0 + 380) = Vector(-1188,151f, 18,071f, 4968,483f);
			Param0.f_448 = -8,776f;
			*(&Param0 + 392) = Vector(-1185,913f, 18,071f, 4968,297f);
			Param0.f_452 = -25,341f;
			*(&Param0 + 404) = Vector(-1184,545f, 18,071f, 4969,665f);
			Param0.f_456 = -40,868f;
			Param0.f_560 = 496;
			Param0.f_564 = 504;
			Param0.f_568 = 253;
			*(&Param0 + 472) = "rand_idle_stand";
			*(&Param0 + 480) = "rand_idle_nearwall";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x00000021:
			*(&Param0 + 92) = Vector(-2426,763f, 9,035f, 3938,964f);
			Param0.f_236 = 233,065f;
			*(&Param0 + 284) = Vector(-2422,158f, 8,849f, 3944.0f);
			Param0.f_416 = 269,799f;
			*(&Param0 + 296) = Vector(-2424.0f, 8,849f, 3944.0f);
			Param0.f_420 = 395,053f;
			*(&Param0 + 308) = Vector(-2425,238f, 8,849f, 3942,791f);
			Param0.f_424 = 326,055f;
			*(&Param0 + 320) = Vector(-2414,324f, 11,967f, 3926,785f);
			Param0.f_428 = 305,944f;
			*(&Param0 + 332) = Vector(-2420.0f, 8,32f, 3948.0f);
			Param0.f_432 = 254,555f;
			*(&Param0 + 344) = Vector(-2420.0f, 9,035f, 3936.0f);
			Param0.f_436 = 269,799f;
			*(&Param0 + 356) = Vector(-2386,303f, 13,951f, 3929,351f);
			Param0.f_440 = 106,469f;
			*(&Param0 + 368) = Vector(-2386,661f, 13,959f, 3927,133f);
			Param0.f_444 = 135,426f;
			*(&Param0 + 380) = Vector(-2426,256f, 9,03f, 3940,356f);
			Param0.f_448 = 40,635f;
			*(&Param0 + 392) = Vector(-2422,997f, 9,026f, 3940,204f);
			Param0.f_452 = -25,341f;
			*(&Param0 + 404) = Vector(-2421,01f, 8,873f, 3942,721f);
			Param0.f_456 = -71,706f;
			Param0.f_560 = 496;
			Param0.f_564 = 504;
			Param0.f_568 = 317;
			*(&Param0 + 472) = "rand_idle_sit_ground";
			*(&Param0 + 480) = "rand_idle_sit_ground";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000022:
			*(&Param0 + 92) = Vector(-2804,866f, 16,508f, 3992,555f);
			Param0.f_236 = -74,028f;
			*(&Param0 + 284) = Vector(-2807,604f, 16,364f, 3994,217f);
			Param0.f_416 = -233,627f;
			*(&Param0 + 296) = Vector(-2802,868f, 16,447f, 3993,188f);
			Param0.f_420 = -221,419f;
			*(&Param0 + 308) = Vector(-2791,689f, 14,463f, 4004,19f);
			Param0.f_424 = 233,065f;
			*(&Param0 + 320) = Vector(-2801,971f, 14,191f, 3979,248f);
			Param0.f_428 = -382,11f;
			*(&Param0 + 332) = Vector(-2821,742f, 15,093f, 4018,304f);
			Param0.f_432 = 203,293f;
			*(&Param0 + 344) = Vector(-2801,382f, 16,272f, 3993,622f);
			Param0.f_436 = -116,089f;
			*(&Param0 + 356) = Vector(-2807,759f, 14,284f, 3978,753f);
			Param0.f_440 = 254,933f;
			*(&Param0 + 368) = Vector(-2804,269f, 13,895f, 3976,22f);
			Param0.f_444 = 172,987f;
			*(&Param0 + 380) = Vector(-2799,801f, 16,116f, 3995,266f);
			Param0.f_448 = -3,069f;
			*(&Param0 + 392) = Vector(-2796,837f, 15,872f, 3995,54f);
			Param0.f_452 = 7,12f;
			*(&Param0 + 404) = Vector(-2793,27f, 15,448f, 3995,925f);
			Param0.f_456 = 73,417f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 241;
			*(&Param0 + 472) = "rand_idle_sit_ground";
			*(&Param0 + 480) = "rand_idle_sit_ground";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "sit_ground_smoke";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000023:
			*(&Param0 + 92) = Vector(-1356,416f, 13,051f, 4308,14f);
			Param0.f_236 = -57,053f;
			*(&Param0 + 284) = Vector(-1354,682f, 13,042f, 4311,322f);
			Param0.f_416 = -148,611f;
			*(&Param0 + 296) = Vector(-1388,408f, 13,01f, 4308,178f);
			Param0.f_420 = 110,556f;
			*(&Param0 + 308) = Vector(-1346,633f, 13,031f, 4275,531f);
			Param0.f_424 = -18,343f;
			*(&Param0 + 320) = Vector(-1348,937f, 13,04f, 4295,117f);
			Param0.f_428 = -378,398f;
			*(&Param0 + 332) = Vector(-1372,707f, 13,051f, 4300,24f);
			Param0.f_432 = 147,232f;
			*(&Param0 + 344) = Vector(-1358,335f, 13,074f, 4307,753f);
			Param0.f_436 = 29,057f;
			*(&Param0 + 356) = Vector(-1397,48f, 13,051f, 4300,768f);
			Param0.f_440 = 254,933f;
			*(&Param0 + 368) = Vector(-1398,932f, 13,051f, 4303,633f);
			Param0.f_444 = -84,533f;
			*(&Param0 + 380) = Vector(-1329,279f, 13,051f, 4284,976f);
			Param0.f_448 = 173,771f;
			*(&Param0 + 392) = Vector(-1327,024f, 13,051f, 4284,387f);
			Param0.f_452 = -168,443f;
			*(&Param0 + 404) = Vector(-1323,689f, 13,051f, 4284,289f);
			Param0.f_456 = 193,516f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 240;
			*(&Param0 + 472) = "rand_idle_sit_ground";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x00000024:
			*(&Param0 + 92) = Vector(-3724,915f, 11,88f, 4784,509f);
			Param0.f_236 = -38,444f;
			*(&Param0 + 284) = Vector(-3727,532f, 12,046f, 4789,082f);
			Param0.f_416 = -235,401f;
			*(&Param0 + 296) = Vector(-3750,316f, 12,608f, 4780,991f);
			Param0.f_420 = 144,385f;
			*(&Param0 + 308) = Vector(-3728,437f, 8,915f, 4752,855f);
			Param0.f_424 = 107,823f;
			*(&Param0 + 320) = Vector(-3730,176f, 9,026f, 4800,344f);
			Param0.f_428 = -329,341f;
			*(&Param0 + 332) = Vector(-3706,888f, 9,246f, 4771,759f);
			Param0.f_432 = -306,654f;
			*(&Param0 + 344) = Vector(-3719,76f, 12,307f, 4781,099f);
			Param0.f_436 = -59,906f;
			*(&Param0 + 356) = Vector(-3584,686f, 10,095f, 4686,505f);
			Param0.f_440 = 100,477f;
			*(&Param0 + 368) = Vector(-3585,128f, 10,045f, 4683,631f);
			Param0.f_444 = -278,036f;
			*(&Param0 + 380) = Vector(-3570,844f, 9,989f, 4674,944f);
			Param0.f_448 = 350,008f;
			*(&Param0 + 392) = Vector(-3568,908f, 10,055f, 4675,852f);
			Param0.f_452 = -49,8f;
			*(&Param0 + 404) = Vector(-3567,841f, 10,039f, 4678,223f);
			Param0.f_456 = 265,068f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 239;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "rand_idle_stand";
			return 1;
			break;
		
		case 0x00000025:
			*(&Param0 + 92) = Vector(-526,81f, 28,612f, 3584,959f);
			Param0.f_236 = -308,869f;
			*(&Param0 + 284) = Vector(-527,271f, 28,612f, 3588,612f);
			Param0.f_416 = 60,574f;
			*(&Param0 + 296) = Vector(-529,658f, 28,612f, 3586,341f);
			Param0.f_420 = -103,683f;
			*(&Param0 + 308) = Vector(-528.0f, 25,507f, 3608.0f);
			Param0.f_424 = 160,145f;
			*(&Param0 + 320) = Vector(-538,364f, 23,361f, 3619,907f);
			Param0.f_428 = 160,145f;
			*(&Param0 + 332) = Vector(-532,38f, 28,612f, 3587,525f);
			Param0.f_432 = -232,137f;
			*(&Param0 + 344) = Vector(-527,66f, 28,613f, 3590,663f);
			Param0.f_436 = -140,986f;
			*(&Param0 + 356) = Vector(-564,538f, 15,055f, 3636,173f);
			Param0.f_440 = -22,224f;
			*(&Param0 + 368) = Vector(-567,414f, 15,094f, 3634,904f);
			Param0.f_444 = 321,605f;
			*(&Param0 + 380) = Vector(-569,655f, 15,05f, 3634,228f);
			Param0.f_448 = -53,107f;
			*(&Param0 + 392) = Vector(-527,458f, 23,583f, 3615,537f);
			Param0.f_452 = -60,895f;
			*(&Param0 + 404) = Vector(-525,772f, 23,583f, 3617,813f);
			Param0.f_456 = -32,665f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 253;
			*(&Param0 + 472) = "rand_idle_sit_ground";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
	}
	return 0;
}

bool Function_186(struct<2> Param0, var uParam2, float fParam3) //Position: 0x100C3 / 65731
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	Local_27[02] = Vector(-1045,249f, 184,066f, 1373,642f);
	uLocal_181[0] = Global_46926[5];
	Local_27[12] = Vector(-521,368f, 146,586f, 1891,315f);
	uLocal_181[1] = Global_46926[6];
	Local_27[22] = Vector(151,25f, 128,174f, 1380,784f);
	uLocal_181[2] = Global_46914[2];
	Local_27[32] = Vector(-730,995f, 226,993f, 1106,784f);
	uLocal_181[3] = Global_46926[3];
	Local_27[42] = Vector(-844,7f, 189,73f, 1582,449f);
	uLocal_181[4] = Global_46926[4];
	Local_27[52] = Vector(-487,694f, 20,486f, 3033,49f);
	uLocal_181[5] = Global_46816[3];
	Local_27[62] = Vector(-2905,192f, 13,051f, 2946,404f);
	uLocal_181[6] = Global_46760[15];
	Local_27[72] = Vector(-1233,827f, 22,095f, 3208,098f);
	uLocal_181[7] = Global_46816[5];
	Local_27[82] = Vector(-3434,034f, 23,592f, 2497,243f);
	uLocal_181[8] = Global_46760[9];
	Local_27[92] = Vector(-1864,42f, 25,674f, 3306,345f);
	uLocal_181[9] = Global_46760[5];
	Local_27[102] = Vector(-2832,227f, 20,209f, 3075,762f);
	uLocal_181[10] = Global_46838[1];
	Local_27[112] = Vector(-1272,701f, 109,427f, 2763,055f);
	uLocal_181[11] = Global_46816[6];
	Local_27[122] = Vector(-2833,559f, 50,331f, 2416,961f);
	uLocal_181[12] = Global_46760[10];
	Local_27[132] = Vector(-2867,112f, 82,255f, 2162,143f);
	uLocal_181[13] = Global_46760[7];
	Local_27[142] = Vector(-3133,579f, 56,069f, 3318,745f);
	uLocal_181[14] = Global_46838[3];
	Local_27[152] = Vector(-2336,926f, 17,067f, 3170,493f);
	uLocal_181[15] = Global_46760[3];
	Local_27[162] = Vector(-1948,69f, 30,068f, 3468,263f);
	uLocal_181[16] = Global_46760[13];
	Local_27[172] = Vector(-4314,102f, 5,097f, 3744,501f);
	uLocal_181[17] = Global_46796[6];
	Local_27[182] = Vector(-4017,441f, 21,468f, 2397,854f);
	uLocal_181[18] = Global_46796[7];
	Local_27[192] = Vector(-276,02f, 73,201f, 2393,458f);
	uLocal_181[19] = Global_46816[7];
	Local_27[202] = Vector(-1910,925f, 29,066f, 2263,904f);
	uLocal_181[20] = Global_46760[6];
	Local_27[212] = Vector(122,293f, 72,409f, 2669,889f);
	uLocal_181[21] = Global_46816[8];
	Local_27[222] = Vector(-2302,359f, 24,248f, 3007,561f);
	uLocal_181[22] = Global_46760[14];
	Local_27[232] = Vector(-2006,736f, 42,176f, 3043,272f);
	uLocal_181[23] = Global_46760[16];
	Local_27[242] = Vector(-929,793f, 102,412f, 2750,46f);
	uLocal_181[24] = Global_46816[9];
	Local_27[252] = Vector(-594,268f, 30,877f, 4008,359f);
	uLocal_181[25] = Global_46894[5];
	Local_27[262] = Vector(-2229,454f, 23,263f, 4452,343f);
	uLocal_181[26] = Global_46866[3];
	Local_27[272] = Vector(-2150,144f, 18,769f, 4970,876f);
	uLocal_181[27] = Global_46866[12];
	Local_27[282] = Vector(-3859,27f, 6,942f, 4318,333f);
	uLocal_181[28] = Global_46850[4];
	Local_27[292] = Vector(-2718,606f, 56,177f, 4626,842f);
	uLocal_181[29] = Global_46866[7];
	Local_27[302] = Vector(-2150,144f, 18,769f, 4970,876f);
	uLocal_181[30] = Global_46866[8];
	Local_27[312] = Vector(-3372,019f, 56,259f, 4774,489f);
	uLocal_181[31] = Global_46850[5];
	Local_27[322] = Vector(-1200,815f, 19,177f, 4963,429f);
	uLocal_181[32] = Global_46866[9];
	Local_27[332] = Vector(-2804,866f, 16,508f, 3992,555f);
	uLocal_181[33] = Global_46866[6];
	Local_27[342] = Vector(-2804,866f, 16,508f, 3992,555f);
	uLocal_181[34] = Global_46866[5];
	Local_27[352] = Vector(-1356,416f, 13,051f, 4308,14f);
	uLocal_181[35] = Global_46866[4];
	Local_27[362] = Vector(-3724,915f, 11,88f, 4784,509f);
	uLocal_181[36] = Global_46850[3];
	Local_27[372] = Vector(-526,81f, 28,612f, 3584,959f);
	uLocal_181[37] = Global_46894[6];
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 38)
	{
		if (!iLocal_259[iVar1])
		{
			if (VDIST(Param0, Local_27[iVar12]) > 225.0f && VDIST(Param0, Local_27[iVar12]) < 50.0f)
			{
				if (Function_193(&(Local_27[iVar12]), &fParam3, 0, 0))
				{
					uVar2 = Function_192(StackVal, Local_27[iVar12], 1);
					if (Global_46722[Global_43787] == Function_189(uVar2))
					{
						if (Function_187(iVar1, uParam2))
						{
							iVar0 = 1;
							iLocal_259[iVar1] = 1;
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_187(int iParam0, int iParam1) //Position: 0x10693 / 67219
{
	switch (iParam1)
	{
		case 0x0000003D:
		case 0x0000003E:
		case 0x00000049:
			return Function_188(iParam0);
			break;
	}
	return 0;
}

int Function_188(int iParam0) //Position: 0x106BC / 67260
{
	switch (iParam0)
	{
		case 0x00000004:
			if (Function_91(37))
			{
				return 1;
			}
			break;
		
		case 0x00000015:
			if (Function_91(7))
			{
				return 1;
			}
			break;
		
		case 0x00000000:
		case 0x00000005:
		case 0x00000009:
		case 0x0000000C:
		case 0x00000012:
		case 0x00000018:
		case 0x0000001B:
			return 1;
			break;
	}
	return 0;
}

int Function_189(int iParam0) //Position: 0x1071E / 67358
{
	return Function_190(iParam0);
}

int Function_190(int iParam0) //Position: 0x10729 / 67369
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_191(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_191(int iParam0) //Position: 0x10781 / 67457
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_192(struct<2> Param0, bool bParam2) //Position: 0x10797 / 67479
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

bool Function_193(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x10803 / 67587
{
	var uVar0;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	if (&bParam3)
	{
		return 1;
	}
	bVar3 = false;
	Function_195(4294967295);
	iVar2 = 0;
	while (iVar2 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar25] + 16))
		{
			bVar5 = DECOR_GET_INT(&Global_39621[iVar25] + 16, "category");
			if (&iParam2 != 0)
			{
				if (bVar5 != &iParam2 && &iParam2 != 256)
				{
					bVar3 = true;
				}
			}
			GET_VOLUME_CENTER(&Global_39621[iVar25] + 16, &uVar0);
			if (&iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar25] + 16))
				{
					return 0;
				}
			}
			fVar4 = fParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_194(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_194(struct<2> Param0) //Position: 0x108DF / 67807
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	iVar2 = VMAG(Var0);
	return iVar2;
}

int Function_195(int iParam0) //Position: 0x108FE / 67838
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_196(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_180(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_196(iVar0);
						}
					}
					else if (Function_180(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_196(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_196(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_196(int iParam0) //Position: 0x10A6C / 68204
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

bool Function_197(struct<65> Param0) //Position: 0x10AD4 / 68308
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_230(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_228(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_226(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_198(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_11("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (uParam2 >= 20)
		{
			uParam3 = 1;
			Global_39619++;
		}
		uParam2++;
		uParam1 = 1000;
		*(&Param0 + 16) = Vector(0.0f, 0.0f, 0.0f);
		return 0;
	}
	if (Param0.f_40)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_6642 = 0;
		Function_11("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_9(Param0.f_64, 0, 1, 0, 0))
		{
			uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (Param0.f_60 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_230("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_228(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_226(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_198(struct<73> Param0) //Position: 0x10E92 / 69266
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	bool bVar9;
	float fVar10;
	bool bVar11;
	struct<17> Var12;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var7);
	switch (Param0.f_72)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				if (IS_LAYOUTREF_VALID(&Global_46715))
				{
					*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(&Global_46715);
				}
				else
				{
					return 0;
				}
			}
			Function_225(&Param0 + 8);
			switch ((&Param0 + 72 + 36)->f_28)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(&Param0 + 8, &Global_46715);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if ((&Param0 + 72 + 36)->f_16 < 0.0f)
			{
				Var3 = Vector(0.0f, 0.0f, Function_146(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_146(1));
			}
			if (!STRINGS_ARE_EQUAL(&Param0 + 72 + 36, ""))
			{
				ITERATE_ON_PARTIAL_NAME(&Param0 + 8, &Param0 + 72 + 36);
			}
			if (!4294967295 != (&Param0 + 72 + 36)->f_20)
			{
				ITERATE_ON_OBJECT_TYPE(&Param0 + 8, (&Param0 + 72 + 36)->f_20);
			}
			if (GET_NUM_ITERATOR_MATCHES(&Param0 + 8) >= 0)
			{
				if (StackVal & 512 == 0 || Param0.f_44 != 1)
				{
					if ((&Param0 + 72 + 36)->f_24 == 0)
					{
						uVar0 = Function_224(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_223(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_222(StackVal, &Param0 + 8, Var7, Function_182());
				}
				else
				{
					uVar0 = Function_221(StackVal, &Param0 + 8, Var7, Function_182(), "locflag", (&Param0 + 72 + 36)->f_24);
				}
				if (IS_OBJECT_VALID(&uVar0))
				{
					GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
					GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
					Param0.f_56 = &uVar0;
					DESTROY_ITERATOR(&Param0 + 8);
				}
				else
				{
					DESTROY_ITERATOR(&Param0 + 8);
					return 0;
				}
			}
			DESTROY_ITERATOR(&Param0 + 8);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_225(&Param0 + 8);
			ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
			fVar10 = 130.0f;
			bVar9 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			ITERATE_IN_SPHERE(StackVal, &Param0 + 8, Var3);
			uVar1 = START_OBJECT_ITERATOR(&Param0 + 8);
			while (IS_OBJECT_VALID(&uVar1) && !IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "regid"))
				{
					bVar11 = DECOR_GET_INT(&uVar1, "regid");
					if (Function_191(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_146(1))
								{
									uVar0 = &uVar1;
								}
							}
						}
					}
				}
				uVar1 = OBJECT_ITERATOR_NEXT(&Param0 + 8);
			}
			if (IS_OBJECT_VALID(&uVar0))
			{
				GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
				Function_220(&Param0 + 16, 99.0f, &Param0 + 16, 10);
				GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
				Param0.f_56 = DECOR_GET_INT(&uVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(&Param0 + 8);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_6629 && Global_6631) && ARE_CURVES_IN_RANGE(48, Var7, 100.0f)) && 8) != 8)
			{
				uVar5 = Vector(0.0f, 0.0f, -10.0f);
				ROTATE_VECTOR_XZ(&uVar5, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_219(&Var7, &uVar5);
				Var3 = Function_219(&Var7, &uVar5);
				if (!Function_50(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_147(&fVar10, &bVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((bVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_216(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_212(&Param0);
			}
			if (iVar2 == 1)
			{
				if ((&Param0 + 72)->f_156 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(&Param0 + 16)))
							{
								return 0;
							}
						}
					}
				}
				if ((&Param0 + 72)->f_156 == 5)
				{
				}
				if (Param0.f_68 == 2)
				{
					if (!Function_211(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_210(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_14(StackVal, 131072))
				{
					if (StackVal || Function_209(Function_209(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_208(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_193(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar10 = 120.0f;
				bVar9 = 150.0f;
				Var3 = Vector(0.0f, 0.0f, ((fVar10 + bVar9) * -0,5f));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_207((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_207((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_206(&Var12);
				*(&Param0 + 16) = Function_206(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, iVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_211(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_210(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_211(Function_210(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_14(StackVal, 131072))
			{
				if (StackVal || Function_209(Function_209(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_193(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_203((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_200(StackVal, Global_43787, Global_43788, Global_43789, 1);
					if (IS_PERS_CHAR_VALID(&iVar18))
					{
						if (IS_PERS_CHAR_ALIVE(&iVar18))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar16 = 0;
					while (StackVal <= (StackVal - iVar16) + 1)
					{
						iVar18 = Function_200(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
						if (IS_PERS_CHAR_VALID(&iVar18))
						{
							if (IS_PERS_CHAR_ALIVE(&iVar18))
							{
								iVar19++;
							}
						}
						iVar16++;
					}
					if (iVar19 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(StackVal, GET_PLAYER_ACTOR(0)))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					Param0.f_56 = StackVal;
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
		
		default:
			LOG_ERROR("AMB_EVENT type not defined for BEAT_SET_LAUNCH_PARAMS_FOR_BEAT");
			return 0;
			break;
	}
	if (Function_199(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_199(struct<2> Param0) //Position: 0x11759 / 71513
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(&Global_39246))
	{
		if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &Global_39246))))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_200(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x11790 / 71568
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = bParam1;
	bVar1 = bParam2;
	PRINTSTRING("RC_REFERENCE_GLOBAL ");
	PRINTINT(bParam0);
	PRINTSTRING("-");
	PRINTINT(bVar0);
	PRINTSTRING("-");
	PRINTINT(bVar1);
	PRINTSTRING(" ");
	PRINTINT(bParam3);
	PRINTNL();
	if (!&bParam4)
	{
		switch (bParam0)
		{
			case 0x00000000:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_201(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_201(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_201(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_201(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_201(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_201(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_201(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_201(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_201(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_201(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_201(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_201(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_201(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_201(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_201(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_201(&Global_11826, &Global_13998, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000001:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_201(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_201(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_201(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_201(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_201(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_201(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_201(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_201(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_201(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_201(&Global_12472, &Global_14954, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000002:
				return "";
				break;
			
			default:
				return "";
				break;
		}
	}
	else if (bVar1 == Global_46760[0])
	{
		return Function_201(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_201(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_201(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_201(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_201(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_201(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_201(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_201(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_201(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_201(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_201(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_201(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_201(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_201(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_201(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_201(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_201(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_201(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_201(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_201(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_201(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_201(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_201(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_201(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_201(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_201(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_201(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x11DA6 / 73126
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_202(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
	return &vParam1[iVar03] + 16;
}

bool Function_202(var uParam0, int iParam1) //Position: 0x11E00 / 73216
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_203(int iParam0) //Position: 0x11E1D / 73245
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 25);
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	if (&iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(&uVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(&iVar2))
		{
			if (Function_204(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_204(int iParam0) //Position: 0x11E85 / 73349
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_205(&iParam0);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(&uVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(&uVar0))
	{
		return 1;
	}
	return 4294967295;
}

var Function_205(var uParam0) //Position: 0x11EC3 / 73411
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	iVar1 = 0;
	while (iVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		iVar1++;
	}
	return "";
}

struct<8> Function_206(vector3 vParam0) //Position: 0x11F10 / 73488
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_207(int iParam0, int iParam1) //Position: 0x11F32 / 73522
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

bool Function_208(struct<2> Param0) //Position: 0x11F64 / 73572
{
	struct<9> Var0;
	
	iVar5 = 0;
	while (iVar5 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar59] + 8))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(&Global_44085[iVar59] + 8) == 9)
				{
					GET_VOLUME_SCALE(&Global_44085[iVar59] + 8, &vVar0);
					GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var2);
					bVar4 = VDIST(Param0, Var2);
					if ((bVar4 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar5++;
	}
	return 0;
}

int Function_209(struct<2> Param0) //Position: 0x12009 / 73737
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal == 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_210(struct<2> Param0) //Position: 0x12057 / 73815
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_211(struct<2> Param0) //Position: 0x120B2 / 73906
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_212(bool bParam0) //Position: 0x12131 / 74033
{
	float fVar0;
	bool bVar1;
	
	Function_147(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_215(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((&bParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&bParam0 + 72 + 84)->f_44, (&bParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_214(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
	}
	if ((&bParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&bParam0 + 72 + 84)->f_52, (&bParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_52);
		}
	}
	Function_213(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&bParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&bParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&bParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&bParam0 + 72 + 84)->f_36, (&bParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&bParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_213(struct<33> Param0) //Position: 0x122E3 / 74467
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_47151[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_214(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x1240F / 74767
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_215(float fParam0) //Position: 0x12460 / 74848
{
	if (&fParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &fParam0), &fParam0);
	}
	else if (Global_6629)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_216(int iParam0, struct<2> Param1) //Position: 0x124A7 / 74919
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_218();
	Function_215(0);
	Function_217(0);
	if ((&iParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&iParam0 + 72 + 84)->f_44, (&iParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_214(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	}
	if ((&iParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&iParam0 + 72 + 84)->f_52, (&iParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_52);
		}
	}
	Function_213(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&iParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&iParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&iParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&iParam0 + 72 + 84)->f_36, (&iParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&iParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_217(bool bParam0) //Position: 0x1265C / 75356
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

void Function_218() //Position: 0x1270F / 75535
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_219(struct<2> Param0) //Position: 0x1271E / 75550
{
	var uVar0;
	var uVar3;
	float fVar4;
	bool bVar5;
	float fVar6;
	var uVar7;
	struct<2> Var8;
	float fVar10;
	float fVar11;
	var uVar12;
	var uVar14;
	var uVar16;
	int iVar18;
	int iVar21;
	
	uVar7 = START_CURVE_QUERY(&Global_43578, Param0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar7) < 0)
	{
		UNK_0xDF93BD7C(&uVar7);
		Var8 = Vector(0.0f, 0.0f, 0.0f);
		return StackVal, Var8;
	}
	GET_POINT_FROM_CURVE_QUERY(&uVar7, 0, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, 0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_206(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_206(&iVar18), StackVal);
		Function_206(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_206(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_147(&fVar4, &bVar5);
		fVar6 = ((fVar4 + bVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &iVar21);
			Function_206(&iVar21);
			Var8 = Function_206(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_206(&iVar18);
			Var8 = Function_206(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_220(struct<2> Param0, struct<5> Param2) //Position: 0x12838 / 75832
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
		if (!Function_50(StackVal, Param2))
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
			if (!Function_50(StackVal, Param2))
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
		WAIT(0);
	}
	return 0;
}

var Function_221(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x1297B / 76155
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	struct<2> Var5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_193(&Var5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							uVar1 = &fVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_222(var uParam0, struct<2> Param1, float fParam3) //Position: 0x12A30 / 76336
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	struct<2> Var5;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_193(&Var5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					uVar1 = &fVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_223(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x12AC2 / 76482
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						uVar1 = &fVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_224(var uParam0, struct<2> Param1, float fParam3) //Position: 0x12B64 / 76644
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				uVar1 = &fVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

int Function_225(int iParam0) //Position: 0x12BEA / 76778
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_261());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_261());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_226(var uParam0, int iParam1) //Position: 0x12C20 / 76832
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_195(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_227(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_227(int iParam0, var uParam1, struct<2> Param2) //Position: 0x12D8A / 77194
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_230("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_228(var uParam0, struct<2> Param1) //Position: 0x12E32 / 77362
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_229(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_229(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x12E60 / 77408
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_230(char* cParam0) //Position: 0x12E84 / 77444
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_231("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_231(char* cParam0) //Position: 0x12EF0 / 77552
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_232(struct<2>[] Param0) //Position: 0x12F12 / 77586
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_237();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_236(&(Param0[iVar02]), 8);
		}
		else if (Function_235())
		{
			iVar1 = 1;
			Function_236(&(Param0[iVar02]), 8);
		}
		Function_236(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_4(&(Param0[02]), 8) || iVar1));
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
				Function_236(&(Param0[iVar02]), 1);
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
							Function_236(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_236(&(Param0[iVar02]), 2);
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
							Function_236(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_236(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_236(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_236(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_236(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_236(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_236(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_236(&(Param0[iVar02]), 2);
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
	Function_233();
	return 1;
}

void Function_233() //Position: 0x132D4 / 78548
{
	if (!Function_234(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_234(int iParam0) //Position: 0x13314 / 78612
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_235() //Position: 0x13330 / 78640
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

void Function_236(struct<13> Param0) //Position: 0x1335E / 78686
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_237() //Position: 0x13371 / 78705
{
	if (!Function_234(128))
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

void Function_238(var[] uParam0, int iParam1) //Position: 0x133B3 / 78771
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_239(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_239(int iParam0) //Position: 0x133E5 / 78821
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&iParam0);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(&iParam0, 1);
		}
	}
	return;
}

void Function_240(var[] uParam0, int iParam1) //Position: 0x1342E / 78894
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_241(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_241(int iParam0) //Position: 0x13460 / 78944
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 0);
		SET_ACTOR_MAX_SPEED(&iParam0, 5);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(&iParam0, 0);
		}
	}
	return;
}

bool Function_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x134AA / 79018
{
	if (Global_99146 && !GET_THIS_SCRIPT_ID() != &Global_99168)
	{
		uParam3 = 0;
		if (!uParam0)
		{
			uParam0 = 1;
			if ((uParam1 < 2 && uParam1 > 5) && uParam4)
			{
				uParam2 = uParam1;
				uParam1 = 7;
			}
			else
			{
				uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (uParam0)
	{
		uParam0 = 0;
		uParam1 = uParam2;
		return 1;
	}
	return 0;
}

void Function_243(var uParam0, var uParam1) //Position: 0x13522 / 79138
{
	return;
}

void Function_244() //Position: 0x13528 / 79144
{
	return;
}

void Function_245(var[] uParam0, int iParam1) //Position: 0x1352E / 79150
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

var Function_246(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x13551 / 79185
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_236(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_236(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_247(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1362D / 79405
{
	return Function_248(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_248(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x13644 / 79428
{
	return Function_249(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_249(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x13662 / 79458
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_254();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_179(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_253(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_253(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_252(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_179(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_252(iVar0))
				{
					Function_251();
				}
				Function_250(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_179(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return iVar0;
}

void Function_250(int iParam0) //Position: 0x1395B / 80219
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_251() //Position: 0x13A0F / 80399
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_252(int iParam0) //Position: 0x13A4A / 80458
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_253(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x13A77 / 80503
{
	int iVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

void Function_254() //Position: 0x13BD2 / 80850
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_251();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_251();
	return;
}

void Function_255(int[] iParam0, int iParam3) //Position: 0x13C1E / 80926
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iParam0[iVar0 + 1] = Function_256(iParam1, iParam2, iParam3, iParam0[1], iParam0[2]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar0++;
	}
}

var Function_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x13C68 / 81000
{
	int iVar0;
	int iVar1[40];
	int iVar42;
	int iVar43;
	int iVar44;
	var uVar45;
	int iVar46;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (iParam1 > 1311)
	{
		return 4294967295;
	}
	if (&iParam2 > 4294967295 || &iParam2 <= 1311)
	{
		return 4294967295;
	}
	iVar0 = (iParam1 - iParam0) + 1;
	if (iVar0 < 40 || iVar0 > 1)
	{
		LOG_ERROR("GET_RANDOM_ACTORENUM_FILTERED passed a range with more than 40 enums or less than 1");
		return 4294967295;
	}
	iVar44 = 0;
	iVar42 = 0;
	while (iVar42 <= iVar0)
	{
		iVar43 = (iParam0 + iVar42);
		if (((iVar43 == &iParam2 && iVar43 == &iParam3) && iVar43 == &iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(iVar43), "_cs"))
		{
			iVar1[iVar44] = iVar43;
			iVar44++;
		}
		iVar42++;
	}
	if (iVar44 == 0)
	{
		return 4294967295;
	}
	iVar46 = RAND_INT_RANGE(0, (iVar44 - 1));
	uVar45 = iVar1[iVar46];
	return uVar45;
}

int Function_257(int iParam0, int iParam1) //Position: 0x13D83 / 81283
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_258(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x13D99 / 81305
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_259(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_236(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_259(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x13DD7 / 81367
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_236(&(Param0[iVar02]), 4);
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

void Function_260(vector3 vParam0) //Position: 0x13EA6 / 81574
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_171(&vParam0, 1);
	Function_73(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

float Function_261() //Position: 0x13ECB / 81611
{
	var uVar0;
	
	return &uVar0;
}

